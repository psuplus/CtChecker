//===- SourceSinkAnalysis.cpp ---------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// An analysis for identifying vulnerable branches.
//
//===----------------------------------------------------------------------===//
#include <chrono>
#include <ctime>

#include "VulnerableBranch.h"
#include "Infoflow.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Passes/PassBuilder.h"

// For __cxa_demangle (demangling c++ function names)
// Requires libstdc++
#include <cxxabi.h>

namespace deps {

static RegisterPass<VulnerableBranch>
    X("vulnerablebranch", "An analysis for identifying vulnerable branches");

char VulnerableBranch::ID;

bool VulnerableBranch::runOnModule(Module &M) {
  using namespace std::chrono;
  auto start = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
  ifa = &getAnalysis<Infoflow>();

  parser.setInfoflow(ifa);
  if (!ifa) {
    errs() << "No instance\n";
    return false;
  }

  std::set<std::string> kinds;
  kinds.insert("source-sink");

  if (Infoflow::WLPTR_ROUND) {
    parser.labelValue("source-sink", ifa->sourceWhitelistPointers, true);
    InfoflowSolution *soln = ifa->leastSolution(kinds, false, true);
    Infoflow::whitelistPointers = soln->getAllTaintValues();
  } else {
    parser.labelValue("source-sink", ifa->sourceVariables, true);
    parser.labelValue("source-sink", ifa->fullyTainted, true);
    for (auto whitelist : ifa->whitelistVariables) {
      ifa->removeConstraint("default", whitelist);
    }
    InfoflowSolution *soln = ifa->leastSolution(kinds, false, true);
    Infoflow::tainted = soln->getAllTaintValues();
  }

  auto end = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
  unsigned long long elapsed_seconds = end-start;
  errs() << "Overall time:" << elapsed_seconds << "\n";

  // Create constraints for Derivation Solver
  for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F) {
    for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E;
         ++I) {
      if (const BranchInst *bi = dyn_cast<BranchInst>(&*I)) {
        const MDLocation *loc = bi->getDebugLoc();
        if (bi->isConditional() && loc) {
          const Value *v = bi->getCondition();
          for (auto ctxtIter : ifa->valueConstraintMap) {
            DenseMap<const Value *, const ConsElem *> valueConsMap =
                ctxtIter.second;
            DenseMap<const Value *, const ConsElem *>::iterator vIter =
                valueConsMap.find(v);
            if (vIter != valueConsMap.end()) {
              const ConsElem *elem = vIter->second;
              const ConsElem &low = RLConstant::bot();
              RLConstraint c(elem, &low, &Predicate::TruePred(), false,
                             "  ;  [ConsDebugTag-*]   conditional branch");
              ifa->kit->getOrCreateConstraintSet("source-sink").push_back(c);
            }
          }
        }
      }
    }
  }

  errs() << "\n---- Constraints BEGIN ----\n";
  kinds.insert({"default", "default-sink"});
  for (auto kind : kinds) {
    errs() << kind << ":\n";
    for (auto cons : ifa->kit->getOrCreateConstraintSet(kind)) {
      errs() << iterationTag << ":";
      cons.dump();
    }
  }
  errs() << "---- Constraints END ----\n\n";

  if (Infoflow::WLPTR_ROUND) {
    errs() << "\n---- Whitelisted Pointers BEGIN ----\n";
    for (auto i : Infoflow::whitelistPointers) {
      i->dump();
    }
  errs() << "---- Whitelisted Pointers END ----\n\n";
  } else {
    errs() << "\n---- Tainted Values BEGIN ----\n";
    for (auto i : Infoflow::tainted) {
      i->dump();
    }
    errs() << "---- Tainted Values END ----\n\n";

    errs() << "\n---- Fully Tainted Variables during Propagation BEGIN ----\n";
    for (auto i : ifa->fullyTainted) {
      errs() << i.function << ":" << i.name << ":" << i.index << "\n";
    }
    errs() << "---- Fully Tainted Variables during Propagation END ----\n\n";
  }

  return false;
}

} // namespace deps
