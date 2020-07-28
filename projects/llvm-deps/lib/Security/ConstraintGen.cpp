//===- ConstraintGen.cpp ---------------------------------------------===//
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
      "An analysis for identifying vulnerable branches");

char ConstraintGen::ID;

bool ConstraintGen::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  parser.setInfoflow(ifa);
  if (!ifa) {
    errs() << "No instance\n";
    return false;
  }

  // Default loads from taint.txt
  parser.loadTaintFile();

  // Default loads from untrust.txt
  parser.loadUntrustFile();

  std::ifstream fwhitelist("whitelist.txt");
  std::string line;
  while (std::getline(fwhitelist, line)) {
    std::tuple<std::string, int, std::string> match =
        ifa->parseTaintString(line);
    ifa->removeConstraint("taint", match);
    ifa->removeConstraint("untrust", match);
  }

  std::set<std::string> kinds;
  kinds.insert("taint");
  InfoflowSolution *soln = ifa->leastSolution(kinds, false, true);
  std::set<const Value *> tainted = soln->getAllTaintValues();

  kinds.clear();
  kinds.insert("untrust");
  soln = ifa->leastSolution(kinds, false, true);
  std::set<const Value *> untrusted = soln->getAllTaintValues();

  // Variables to gather branch statistics
  unsigned long number_branches = 0;
  unsigned long tainted_branches = 0;
  unsigned long number_conditional = 0;
  // iterating over all branches
  errs() << "\n#--------------Results------------------\n";
  for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F) {
    for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E; ++I)
      if (const BranchInst *bi = dyn_cast<BranchInst>(&*I)) {
        const MDLocation *loc = bi->getDebugLoc();
        number_branches++;
        if (bi->isConditional())
          number_conditional++;
        if (bi->isConditional() && loc) {
          const Value *v = bi->getCondition();
          DenseMap<ContextID,
                   DenseMap<const Value *, const ConsElem *>>::iterator
              ctxtIter = ifa->valueConstraintMap.begin();
          for (; ctxtIter != ifa->valueConstraintMap.end(); ctxtIter++) {
            DenseMap<const Value *, const ConsElem *> valueConsMap =
                ctxtIter->second;
            DenseMap<const Value *, const ConsElem *>::iterator vIter =
                valueConsMap.find(v);
            if (vIter != valueConsMap.end()) {
              const ConsElem *elem = vIter->second;
              const ConsElem &low = LHConstant::low();
              LHConstraint c(elem, &low, false);
              errs() << "  ;  [ConsDebugTag-*]   public values\n";
            }
          }
        }
      }
  }

  // Dump statistics
  errs() << "\n#--------------Statistics----------------\n";
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

  errs() << "\n#--------------Cache Side Channel------------------\n";
  for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F) {
    for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E; ++I)
      if (const LoadInst *li = dyn_cast<LoadInst>(&*I)) {
        const MDLocation *loc = li->getDebugLoc();
        if (loc) {
          const Value *v = li->getOperand(0);
          if (tainted.find(v) != tainted.end() &&
              untrusted.find(v) != untrusted.end()) {
            errs() << loc->getFilename() << " line "
                   << std::to_string(loc->getLine()) << "\n\t";
            li->dump();
          }
        }
      }
  }

  return false;
} // namespace deps

} // namespace deps
