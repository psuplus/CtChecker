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
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/DebugInfoMetadata.h"
#include "llvm/Support/Debug.h"
#include  "llvm/Support/Format.h"
#include "llvm/Support/raw_ostream.h"

// For __cxa_demangle (demangling c++ function names)
// Requires libstdc++
#include <cxxabi.h>

namespace deps {

static RegisterPass<VulnerableBranch>
X("vulnerablebranch", "An analysis for identifying vulnerable branches");

char VulnerableBranch::ID;

bool
VulnerableBranch::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  parser.setInfoflow(ifa);
  if (!ifa) { errs() << "No instance\n"; return false;}

  // Default loads from taint.txt
  parser.loadTaintFile();

  // Default loads from untrust.txt
  parser.loadUntrustFile();

  std::ifstream fwhitelist("whitelist.txt");
  std::string line;
  while (std::getline(fwhitelist, line)) {
    std::tuple<std::string, int, std::string> match = ifa->parseTaintString(line);
    ifa->removeConstraint("taint", match);
    ifa->removeConstraint("untrust", match);
  }

  std::set<std::string> kinds;
  kinds.insert("taint");

  InfoflowSolution* soln = ifa->leastSolution(kinds, false, true);
  std::set<const Value*> tainted = soln->getAllTaintValues();

  kinds.clear();
  kinds.insert("untrust");
  soln = ifa->leastSolution(kinds, false, true);
  std::set<const Value*> untrusted = soln->getAllTaintValues();

  /**
  std::set<const Value*> vul;
  std::set_intersection(tainted.begin(), tainted.end(), untrusted.begin(), untrusted.end(), std::inserter(vul, vul.end()));
  for(std::set<const Value*>::iterator it=vul.begin(); it != vul.end(); it++) {
    soln->getOriginalLocation(*it);
    errs() << "\n";
  }*/

  // Variables to gather branch statistics
  unsigned long number_branches = 0;
  unsigned long tainted_branches = 0;
  unsigned long number_conditional = 0;
  // iterating over all branches
  errs() << "#--------------Results------------------\n";
  for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F) {
    for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E; ++I)
      if (const BranchInst* bi = dyn_cast<BranchInst>(&*I)) {
        const MDLocation* loc = bi->getDebugLoc();
        number_branches++;
        if(bi->isConditional())
          number_conditional++;
        if (bi->isConditional() && loc) {
          const Value* v = bi->getCondition();
          if (tainted.find(v) != tainted.end() && untrusted.find(v) != untrusted.end()){
            tainted_branches++;
            errs() << loc->getFilename() << " line " << std::to_string(loc->getLine()) << "\n";
            //errs() << loc->getFilename() << " line " << std::to_string(loc->getLine()) << ":";
            //v->dump(); errs() << "\n";
          }
        }
      }
  }

  // Dump statistics
  errs() << "#--------------Statistics----------------\n";
  errs() << ":: Tainted Branches: " << tainted_branches << "\n";
  errs() << ":: Branch Instructions: " << number_branches << "\n";
  errs() << ":: Conditional Branches: " << number_conditional << "\n";
  if(number_branches > 0){
    double tainted_percentage = tainted_branches*1.0/number_branches * 100.0;
    errs() << ":: Vulnerable Branches: " << format("%2.2f%% [%d/%d]\n", tainted_branches, number_branches, tainted_percentage);
  }


  return false;
}

}
