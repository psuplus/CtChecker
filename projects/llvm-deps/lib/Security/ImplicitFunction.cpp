//===- ConstraintGen.cpp ---------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// A pass to generate information flow constraints.
//
//===----------------------------------------------------------------------===//

#include "ImplicitFunction.h"
#include "Infoflow.h"
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

static RegisterPass<ImplicitFunction>
    X("implicit-function",
      "A pass to detect function calls under sensitive branches.");

char ImplicitFunction::ID;

bool ImplicitFunction::runOnModule(Module &M) {
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

  std::set<std::string> kinds{"source-sink", "default", "default-sink",
                              "implicit"};
  InfoflowSolution *soln = ifa->leastSolution(kinds, false, true);
  std::set<const Value *> tainted = soln->getAllTaintValues();

  errs() << "\n---- Tainted Values BEGIN ----\n";
  for (auto i : tainted) {
    if (auto bb = dyn_cast<BasicBlock>(i)) {
      if (bb->hasName())
        errs() << bb->getParent()->getName() << ": " << bb->getName() << "\n";
      else
        errs() << bb->getParent()->getName() << ": " << i << "\n";
    } else {
      i->dump();
    }
  }
  errs() << "---- Tainted Values END ----\n\n";

  // Printing constraints
  errs() << "\n---- Constraints BEGIN ----\n";
  for (auto kind : kinds) {
    errs() << kind << ":\n";
    for (auto cons : ifa->kit->getOrCreateConstraintSet(kind))
      cons.dump();
  }
  errs() << "---- Constraints END ----\n\n";

  errs() << "#------------------Results------------------#\n";
  // for (auto fIter = M.begin(); fIter != M.end(); ++fIter) {
  //   auto &F = *fIter;
  //   if (!F.isDeclaration()) {
  //     auto &BB = *(F.begin());
  //     auto V = dyn_cast<Value>(&BB);
  //     if (tainted.find(V) != tainted.end()) {
  //       errs() << "Function [" << F.getName()
  //              << "] is called under a sensitive branch.\n";
  //     }
  //   }
  // }
  // errs() << "\n";

  for (Module::const_iterator F = M.begin(); F != M.end(); ++F) {
    for (const_inst_iterator I = inst_begin(*F); I != inst_end(*F); ++I) {
      if (const CallInst *callInst = dyn_cast<CallInst>(&*I)) {
        if (const MDLocation *loc = callInst->getDebugLoc()) {
          if (auto callee = callInst->getCalledFunction()) {
            // errs() << "caller: ";
            // callInst->dump();

            // errs() << "callee: ";
            // callee->dump();
            if (!callee->isDeclaration()) {
              auto &BB = *(callee->begin());
              auto V = dyn_cast<Value>(&BB);
              if (tainted.find(V) != tainted.end()) {
                errs() << loc->getFilename() << " at line "
                       << std::to_string(loc->getLine())
                       << "\t\t called function [" << callee->getName()
                       << "]\n";
              }
            }
          }
        }
      }
    }
  }
  errs() << "\n\n";

  return false;
} // namespace deps

} // namespace deps
