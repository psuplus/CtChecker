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

  // Only generate constraint set in the first round
  if (Infoflow::iterationTag == 1) {
    errs() << "\n---- inst to flow map BEGIN ----\n";
    for (auto instFlowPair : ifa->instFlowMap) {
      errs() << Infoflow::iterationTag << ":";
      errs() << instFlowPair.first << ":";
      errs() << instFlowPair.second.first.size() << ":";
      errs() << instFlowPair.second.second.size() << "\n";
    }
    errs() << "---- inst to flow map END ----\n\n";

    errs() << "\n---- flow to cons map BEGIN ----\n";
    for (auto flowConsPair : ifa->flowConsSetMap) {
      errs() << Infoflow::iterationTag << ":";
      errs() << flowConsPair.first << ":";
      errs() << flowConsPair.second.size() << "\n";
    }
    errs() << "---- flow to cons map END ----\n\n";

    errs() << "\n---- Taint Constraints BEGIN ----\n";
    for (auto cons : Infoflow::consSetTaint) {
      errs() << Infoflow::iterationTag << ":";
      cons.dump();
    }
    errs() << "---- Taint Constraints END ----\n\n";
    errs() << "\n---- WLP Constraints BEGIN ----\n";
    for (auto cons : Infoflow::consSetWLP) {
      errs() << Infoflow::iterationTag << ":";
      cons.dump();
    }
    errs() << "---- WLP Constraints END ----\n\n";
  }

  parser.setInfoflow(ifa);
  if (!ifa) {
    errs() << "No instance\n";
    return false;
  }

  std::set<std::string> kinds;
  if (Infoflow::WLPTR_ROUND) {
    parser.labelValue("source-sink-WLP", ifa->sourceWhitelistPointers, true);
    kinds.insert("source-sink-WLP");
    InfoflowSolution *soln = ifa->leastSolution(kinds, false, true);
    Infoflow::whitelistPointers = soln->getAllTaintValues();
    Infoflow::solutionSetWLP = soln->getAllWLPConsElem();
    ifa->clearSolutions();
  } else {
    parser.labelValue("source-sink-taint", ifa->sourceVariables, true);
    parser.labelValue("source-sink-taint", ifa->fullyTainted, true);
    kinds.insert("source-sink-taint");
    for (auto whitelist : ifa->whitelistVariables) {
      ifa->removeConstraint("default-taint", whitelist);
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
      errs() << Infoflow::iterationTag << ":";
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
