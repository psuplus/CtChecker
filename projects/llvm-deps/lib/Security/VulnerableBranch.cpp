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

#include "VulnerableBranch.h"
#include "Infoflow.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"
#include "llvm/Support/raw_ostream.h"

// For __cxa_demangle (demangling c++ function names)
// Requires libstdc++
#include <cxxabi.h>

namespace deps {

static RegisterPass<VulnerableBranch>
    X("vulnerablebranch", "An analysis for identifying vulnerable branches");

char VulnerableBranch::ID;

bool VulnerableBranch::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  parser.setInfoflow(ifa);
  if (!ifa) {
    errs() << "No instance\n";
    return false;
  }

  parser.labelValue("source-sink", ifa->sourceVariables, true);

  for (auto whitelist : ifa->whitelistVariables) {
    ifa->removeConstraint("default", whitelist);
  }

  std::set<std::string> kinds;
  kinds.insert("source-sink");

  InfoflowSolution *soln = ifa->leastSolution(kinds, false, true);
  std::set<const Value *> tainted = soln->getAllTaintValues();

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

  errs() << "\n---- Tainted Values BEGIN ----\n";
  for (auto i : tainted) {
    i->dump();
  }
  errs() << "---- Tainted Values END ----\n\n";

  errs() << "\n---- Constraints BEGIN ----\n";
  kinds.insert({"default", "default-sink"});
  for (auto kind : kinds) {
    errs() << kind << ":\n";
    for (auto cons : ifa->kit->getOrCreateConstraintSet(kind))
      cons.dump();
  }
  errs() << "---- Constraints END ----\n\n";

  errs() << "\n---- Whitelisted Pointers BEGIN ----\n";
  for (auto i : ifa->whitelistPointers) {
    errs() << i.name << ":" << i.index << "\n";
  }
  errs() << "---- Whitelisted Pointers END ----\n\n";

  // Variables to gather branch statistics
  unsigned long number_branches = 0;
  unsigned long tainted_branches = 0;
  unsigned long number_conditional = 0;
  // iterating over all branches
  errs() << "#--------------Results------------------\n";
  for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F) {
    for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E; ++I)
      if (const BranchInst *bi = dyn_cast<BranchInst>(&*I)) {
        const MDLocation *loc = bi->getDebugLoc();
        number_branches++;
        if (bi->isConditional())
          number_conditional++;
        if (bi->isConditional() && loc) {
          const Value *v = bi->getCondition();
          if (tainted.find(v) != tainted.end()) {
            tainted_branches++;
            errs() << loc->getFilename() << " line "
                   << std::to_string(loc->getLine()) << "\n";
            // errs() << loc->getFilename() << " line " <<
            // std::to_string(loc->getLine()) << ":";
            // v->dump(); errs() << "\n";
          }
        }
      }
  }

  errs() << "#--------------Array Indices------------------\n";
  for (auto &F : M.functions()) {
    for (auto &I : inst_range(F)) {
      const User *user = nullptr;
      if (const LoadInst *load = dyn_cast<LoadInst>(&I)) {
        if (const ConstantExpr *ce =
                dyn_cast<ConstantExpr>(load->getPointerOperand()))
          user = ce;
      } else if (const StoreInst *store = dyn_cast<StoreInst>(&I)) {
        if (const ConstantExpr *ce =
                dyn_cast<ConstantExpr>(store->getPointerOperand()))
          user = ce;
      } else if (const GetElementPtrInst *gep =
                     dyn_cast<GetElementPtrInst>(&I)) {
        user = gep;
      }

      if (user && matchNonPointerWhitelistAndTainted(user, tainted)) {
        const MDLocation *loc = I.getDebugLoc();
        errs() << loc->getFilename() << " at " << std::to_string(loc->getLine())
               << "\n";
      }
    }
  }

  // Dump statistics
  errs() << "#--------------Statistics----------------\n";
  errs() << ":: Tainted Branches: " << tainted_branches << "\n";
  errs() << ":: Branch Instructions: " << number_branches << "\n";
  errs() << ":: Conditional Branches: " << number_conditional << "\n";
  if (number_branches > 0) {
    double tainted_percentage =
        tainted_branches * 1.0 / number_branches * 100.0;
    errs() << ":: Vulnerable Branches: "
           << format("%2.2f%% [%d/%d]\n", tainted_branches, number_branches,
                     tainted_percentage);
  }

  return false;
}

bool VulnerableBranch::matchNonPointerWhitelistAndTainted(
    const User *user, std::set<const Value *> &tainted) {
  for (auto &op : user->operands()) {
    bool isWhitelisted = false;
    for (auto ptr : ifa->whitelistPointers) {
      //errs() << ptr.name << ":" << ptr.index << "\n";
      //errs() << op.get()->getName() << ":" << op.get()->getType()->isPtrOrPtrVectorTy() << "\n";
      if (op.get()->getType()->isPtrOrPtrVectorTy() &&
          op.get()->getName() == ptr.name) {
        isWhitelisted = true;
      }
    }
    if (!isWhitelisted && tainted.find(op) != tainted.end()) {
      return true;
    }
  }
  return false;
}

} // namespace deps
