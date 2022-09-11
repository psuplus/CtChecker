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
#include <chrono>

// For __cxa_demangle (demangling c++ function names)
// Requires libstdc++
#include <cxxabi.h>

namespace deps {

static RegisterPass<ImplicitFunction>
    X("implicit-function",
      "A pass to detect function calls under sensitive branches.");

char ImplicitFunction::ID;

bool ImplicitFunction::runOnModule(Module &M) {
  int64_t i, s, p, l;
  auto start = std::chrono::steady_clock::now();
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

  auto end = std::chrono::steady_clock::now();
  errs() << "INFOFLOW: "
         << std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
                .count()
         << " ms\n";
  i = std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();
  start = end;

  std::set<std::string> kinds{"source-sink", "default", "default-sink",
                              "implicit"};
  // Printing constraints
  errs() << "\n---- Constraints BEGIN ----\n";
  for (auto kind : kinds) {
    errs() << kind << ":\n";
    for (auto cons : ifa->kit->getOrCreateConstraintSet(kind))
      cons.dump();
  }
  errs() << "---- Constraints END ----\n\n";

  end = std::chrono::steady_clock::now();
  errs() << "PRINTING: "
         << std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
                .count()
         << " ms\n";
  p = std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();
  start = end;

  InfoflowSolution *soln = ifa->leastSolution(kinds, false, true);

  end = std::chrono::steady_clock::now();
  errs() << "SOLUTION: "
         << std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
                .count()
         << " ms\n";

  s = std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();
  start = end;

  std::set<const Value *> tainted = soln->getAllTaintValues();

  // A hacky fix to add globals to the tainted set.
  for (auto v : ifa->summarySourceValueConstraintMap) {
    auto val = v.first;
    if (!isa<BasicBlock>(val)) {
      auto locs = ifa->locsForValue(*val);
      for (auto loc : locs) {
        if (soln->isTainted(*loc)) {
          tainted.insert(val);
        }
      }
    }
  }

  DEBUG_WITH_TYPE(
      DEBUG_TYPE_TAINT, errs() << "\n---- Tainted Values BEGIN ----\n";
      for (auto i
           : tainted) {
        if (auto bb = dyn_cast<BasicBlock>(i)) {
          if (bb->hasName())
            errs() << bb->getParent()->getName() << ": " << bb->getName()
                   << "\n";
          else
            errs() << bb->getParent()->getName() << ": " << i << "\n";
          // Example of value printing filtering (by type).
          // } else if (auto global = dyn_cast<GlobalVariable>(i)) {
          //   errs() << "GLOBAL: " << global->getName() << "\n";
        } else {
          errs() << ifa->getOrCreateStringFromValue(*i) << "\n";
        }
      };
      errs() << "---- Tainted Values END ----\n\n";);

  errs() << "#------------------Results------------------#\n";
  for (Module::const_iterator F = M.begin(); F != M.end(); ++F) {
    for (const_inst_iterator I = inst_begin(*F); I != inst_end(*F); ++I) {
      if (const CallInst *callInst = dyn_cast<CallInst>(&*I)) {
        auto parent = callInst->getParent();
        if (tainted.find(parent) != tainted.end()) {
          if (const MDLocation *loc = callInst->getDebugLoc()) {
            const Function *callee = callInst->getCalledFunction();
            if (const ConstantExpr *CExpr =
                    dyn_cast<ConstantExpr>(callInst->getCalledValue())) {
              if (CExpr->getOpcode() == Instruction::BitCast &&
                  isa<Function>(CExpr->getOperand(0)))
                callee = cast<Function>(CExpr->getOperand(0));
            }
            if (callee) {
              if (!callee->isDeclaration()) {
                auto &BB = *(callee->begin());
                auto V = dyn_cast<Value>(&BB);
                if (tainted.find(V) != tainted.end()) {
                  errs() << "[SCG] ";
                  errs() << parent->getParent()->getName() << "|"
                         << loc->getFilename() << ", L"
                         << std::to_string(loc->getLine()) << "|"
                         << callee->getName() << "\n";
                }
              } else {
                errs() << "[SCG] ";
                errs() << parent->getParent()->getName() << "|"
                       << loc->getFilename() << ", L"
                       << std::to_string(loc->getLine()) << "|"
                       << callee->getName() << "\n";
              }
            }
          }
        }
      }
    }
  }
  errs() << "\n\n";

  end = std::chrono::steady_clock::now();
  errs() << "LOOKUP: "
         << std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
                .count()
         << " ms\n";

  l = std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();
  start = end;

  errs() << "INFOFLOW: " << i << "\n";
  errs() << "SOLUTION: " << s << "\n";
  errs() << "PRINTING: " << p << "\n";
  errs() << "LOOKUP: " << l << "\n";

  return false;
} // namespace deps

} // namespace deps
