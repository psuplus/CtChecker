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
#include "llvm/Support/raw_ostream.h"
#include <fstream>
#include <algorithm>

// For __cxa_demangle (demangling c++ function names)
// Requires libstdc++
#include <cxxabi.h>

namespace deps {

static RegisterPass<VulnerableBranch>
X("vulnerablebranch", "An analysis for identifying vulnerable branches");

char VulnerableBranch::ID;

/** Taint a Value whose name matches s */
void 
VulnerableBranch::taintStr (std::string kind, std::string match) {
  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry = ifa->summarySourceValueConstraintMap.begin(),
    end = ifa->summarySourceValueConstraintMap.end(); entry != end; ++entry) {
    const Value& value = *(entry->first);

    // errs() << "Visiting ";
    // value.dump();

    std::string s;
    if (value.hasName() && value.getName() == match) {
      s = value.getName();
      const std::set<const AbstractLoc *> & locs = ifa->locsForValue(value);
      unsigned offset = 0;
      bool hasOffset = ifa->offsetForValue(value, &offset);
      errs() << "Length of Set for " << s << " is " << locs.size() << "\n";
      for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin(),
             end = locs.end(); loc != end; ++loc) {
        DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *> >::iterator curElem = ifa->locConstraintMap.find(*loc);
        std::map<unsigned, const ConsElem *> elemMap;
        if(curElem != ifa->locConstraintMap.end())
          elemMap = curElem->second;

        if (hasOffset) {
          const ConsElem & elem = *elemMap[offset];
          errs() << "Matching " << match << " with " << value.getName() << ": ";
          elem.dump(errs());
          errs() << "\n";
          ifa->kit->addConstraint(kind,ifa->kit->highConstant(), elem);
        } else {
          for(std::map<unsigned, const ConsElem*>::iterator elemIt = elemMap.begin(), elemEnd = elemMap.end();
              elemIt != elemEnd; ++elemIt)
            ifa->kit->addConstraint(kind, ifa->kit->highConstant(), *(*elemIt).second);
        }
      }
    }
    else {
      llvm::raw_string_ostream* ss = new llvm::raw_string_ostream(s);
      *ss << value; // dump value info to ss
      ss->str(); // flush stream to s
      if (s.find(match) == 0) // test if the value's content starts with match
        ifa->setTainted(kind, value);
    } 
  }
}

bool 
VulnerableBranch::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  if (!ifa) { errs() << "No instance\n"; return false;}
   
  std::ifstream ftaint("taint.txt"); // read tainted values from txt file
  std::string line;
  while (std::getline(ftaint, line)) {
    taintStr ("taint", line);
  }

  std::ifstream funtrust("untrust.txt"); // read tainted values from txt file
  while (std::getline(funtrust, line)) {
    taintStr ("untrust", line);
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

  // iterating over all branches
  for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F) {
    for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E; ++I)
      if (const BranchInst* bi = dyn_cast<BranchInst>(&*I)) {
         const MDLocation* loc = bi->getDebugLoc();
         if (bi->isConditional() && loc) {
           const Value* v = bi->getCondition();
           if (tainted.find(v) != tainted.end() && untrusted.find(v) != untrusted.end())
             errs() << loc->getFilename() << " line " << std::to_string(loc->getLine()) << "\n";
         }
      }
  }
  return false;
}

}
