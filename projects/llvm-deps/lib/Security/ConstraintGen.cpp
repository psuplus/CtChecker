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

#include "ConstraintGen.h"
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

static RegisterPass<ConstraintGen>
    X("constraint-generation",
      "A pass to generate information flow constraints.");

char ConstraintGen::ID;

bool ConstraintGen::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  parser.setInfoflow(ifa);
  if (!ifa) {
    errs() << "No instance\n";
    return false;
  }

  // Default loads from source.txt
  parser.loadSourceFile("source-sink", "source.txt");

  std::ifstream fwhitelist("whitelist.txt");
  std::string line;
  while (std::getline(fwhitelist, line)) {
    std::tuple<std::string, int, std::string> match =
        ifa->parseTaintString(line);
    auto new_match = std::make_tuple(RLConstant::BotLabel, std::get<0>(match),
                                     std::get<1>(match), std::get<2>(match));
    ifa->removeConstraint("source-sink", new_match);
  }

  parser.untaintAllSink("source-sink");

  // Variables to gather branch statistics
  // unsigned long number_branches = 0;
  // unsigned long tainted_branches = 0;
  // unsigned long number_conditional = 0;
  // errs() << "\n#--------------Results------------------\n";
  // for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F)
  // {
  //   errs() << "Check function match: " << F->getName() << "\n";
  // if (sinks.find(F->getName()) != sinks.end()) {
  //   errs() << "Found function match: " << F->getName() << "\n";
  //   for (Function::const_arg_iterator arg = F->arg_begin();
  //        arg != F->arg_end(); ++arg) {
  //     const Value *v = arg;

  //     errs() << "\tChecking value: " << v->getName() << " : " << v << "\n";
  //     DenseMap<ContextID, DenseMap<const Value *, const ConsElem
  //     *>>::iterator
  //         ctxtIter = ifa->valueConstraintMap.begin();
  //     for (; ctxtIter != ifa->valueConstraintMap.end(); ctxtIter++) {

  //       errs() << "\t\tIn context: " << ctxtIter->first << "\n";
  //       DenseMap<const Value *, const ConsElem *> valueConsMap =
  //           ctxtIter->second;
  //       for (auto ii = valueConsMap.begin(); ii != valueConsMap.end();
  //       ii++) {
  //         // ii->getFirst()->dump();
  //         errs() << ii->getFirst() << " : " << ii->getFirst()->getName()
  //                << "\n";
  //       }
  //       errs() << "\t\tContext analysis: " << ctxtIter->first << "\nend\n";
  //       DenseMap<const Value *, const ConsElem *>::iterator vIter =
  //           valueConsMap.find(v);
  //       if (vIter != valueConsMap.end()) {
  //         const ConsElem *elem = vIter->second;
  //         const ConsElem &low = LHConstant::low();
  //         LHConstraint c(elem, &low, false);
  //         errs() << "  ;  [ConsDebugTag-*]   sink public values\n";
  //       }
  //     }
  //   }
  // }

  // for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E;
  // ++I)
  //   if (const BranchInst *bi = dyn_cast<BranchInst>(&*I)) {
  //     const MDLocation *loc = bi->getDebugLoc();
  //     number_branches++;
  //     if (bi->isConditional())
  //       number_conditional++;
  //     if (bi->isConditional() && loc) {
  //       const Value *v = bi->getCondition();
  //       DenseMap<ContextID,
  //                DenseMap<const Value *, const ConsElem *>>::iterator
  //           ctxtIter = ifa->valueConstraintMap.begin();
  //       for (; ctxtIter != ifa->valueConstraintMap.end(); ctxtIter++) {
  //         DenseMap<const Value *, const ConsElem *> valueConsMap =
  //             ctxtIter->second;
  //         DenseMap<const Value *, const ConsElem *>::iterator vIter =
  //             valueConsMap.find(v);
  //         if (vIter != valueConsMap.end()) {
  //           const ConsElem *elem = vIter->second;
  //           const ConsElem &low = RLConstant::bot();
  //           RLConstraint c(elem, &low, &Predicate::TruePred(), false);
  //           errs() << "  ;  [ConsDebugTag-*]   public values\n";
  //         }
  //       }
  //     }
  //   }
  // }

  // errs() << "\n#--------------Cache Side Channel------------------\n";
  // for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd;
  // ++F)
  // {
  //   for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E;
  //   ++I)
  //     if (const LoadInst *li = dyn_cast<LoadInst>(&*I)) {
  //       const MDLocation *loc = li->getDebugLoc();
  //       if (loc) {
  //         const Value *v = li->getOperand(0);
  //         if (tainted.find(v) != tainted.end() &&
  //             untrusted.find(v) != untrusted.end()) {
  //           errs() << loc->getFilename() << " line "
  //                  << std::to_string(loc->getLine()) << "\n\t";
  //           li->dump();
  //         }
  //       }
  //     }
  // }

  return false;
} // namespace deps

} // namespace deps
