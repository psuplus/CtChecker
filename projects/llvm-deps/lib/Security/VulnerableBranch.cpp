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

void VulnerableBranch::constrainOffsetFromIndex(std::string kind, const Value * v, std::map<unsigned, const ConsElem*> elemMap, int fieldIdx) {
unsigned offset = 0;
 const StructType* st = NULL;
if(const AllocaInst *al = dyn_cast<AllocaInst>(v)){
  if((st = dyn_cast<StructType>(al->getAllocatedType()))){
  } else if (isa<ArrayType>(al->getAllocatedType())) {
    const ConsElem * elem = elemMap[fieldIdx];
    // If it is not a heap array the elemMap should have the same number of elements as the array
    // So just taint that one otherwise taint all elements in the map
    if (elemMap.size() > (unsigned) fieldIdx) {
      ifa->kit->addConstraint(kind, ifa->kit->highConstant(), *elem);
    }else {
      ifa->constrainAllConsElem(kind, elemMap);
    }
  }
 } else if (const Argument * arg = dyn_cast<Argument>(v)) {
  //errs() << "ISA argument";
  //v->dump();
  Type* t = arg->getType();
  if(t->isPointerTy()){
    size_t subTypeLength = t->subtypes().size();
    if (subTypeLength == 1) {
      Type* structType = t->getContainedType(0);
      st = dyn_cast<StructType>(structType);
    } else {
      errs() << "Type has multiple subtypes, unclear how to proceed.\n";
    }
  }
 }

 if(st) {
   offset = ifa->findOffsetFromFieldIndex(st, (unsigned) fieldIdx);
   const ConsElem * elem = elemMap[offset];
   errs() << "Setting high constant to ";
   //it->second->dump(errs());
   elem->dump(errs());
   errs() << "\n";
   ifa->kit->addConstraint(kind, ifa->kit->highConstant(), *elem);
 } else {
   errs() << "St not found\n";
 }

}
/** Taint a Value whose name matches s */
void
VulnerableBranch::taintStr (std::string kind, std::pair<std::string,int> match) {
  for (DenseMap<const Value *, const ConsElem *>::const_iterator entry = ifa->summarySourceValueConstraintMap.begin(),
    end = ifa->summarySourceValueConstraintMap.end(); entry != end; ++entry) {
    const Value& value = *(entry->first);

    // errs() << "Visiting ";
    // value.dump();

    std::string s;
    if (value.hasName() && value.getName() == match.first ) {
       s = value.getName();
      const std::set<const AbstractLoc *> & locs = ifa->locsForValue(value);
      unsigned offset = 0;
      errs() << "Trying to get offset..\n";
      bool hasOffset = ifa->offsetForValue(value, &offset);
      errs() << "Length of Set for " << s << " is " << locs.size() << "\n";
      for (std::set<const AbstractLoc *>::const_iterator loc = locs.begin(),
             end = locs.end(); loc != end; ++loc) {
        DenseMap<const AbstractLoc *, std::map<unsigned, const ConsElem *> >::iterator curElem = ifa->locConstraintMap.find(*loc);
        std::map<unsigned, const ConsElem *> elemMap;
        if(curElem != ifa->locConstraintMap.end()){
          elemMap = curElem->second;

          if (match.second >= 0){
            //std::map<unsigned, const ConsElem *>::iterator it = std::next(elemMap.begin(), match.second);
            constrainOffsetFromIndex(kind, &value,elemMap ,match.second);
          } else if (hasOffset) {
            errs() << "Using element at offset " << offset << "\n";
            const ConsElem * elem = findConsElemAtOffset(elemMap, offset);

            errs() << "Matching " << match.first << " with " << value.getName() << ": "; elem->dump(errs()); errs() << "\n";
            ifa->kit->addConstraint(kind,ifa->kit->highConstant(), *elem);
          } else {
            errs() << "Visiting: "; value.dump();
            errs() << "Matching " << match.first << " with " << value.getName() << ": ";
            ifa->setTainted(kind,value);
          }
        }
      }
    } else {
      llvm::raw_string_ostream* ss = new llvm::raw_string_ostream(s);
      *ss << value; // dump value info to ss
      ss->str(); // flush stream to s
      if (s.find(match.first) == 0) {// test if the value's content starts with match
        ifa->setTainted(kind, value);
        errs() << "Match Detected for " << s  << "\n";
      }
    }
  }
  errs() << "DONE\n";
}



bool
VulnerableBranch::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  if (!ifa) { errs() << "No instance\n"; return false;}

  std::ifstream ftaint("taint.txt"); // read tainted values from txt file
  std::string line;
  while (std::getline(ftaint, line)) {
    std::pair<std::string, int> match = ifa->parseTaintString(line);
    taintStr ("taint", match);
  }

  std::ifstream funtrust("untrust.txt"); // read tainted values from txt file
  while (std::getline(funtrust, line)) {
    std::pair<std::string, int> match = ifa->parseTaintString(line);
    taintStr ("untrust", match);
  }

  std::ifstream fwhitelist("whitelist.txt");
  while (std::getline(fwhitelist, line)) {
    std::pair<std::string, int> match = ifa->parseTaintString(line);
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
  // iterating over all branches
  errs() << "#--------------Results------------------\n";
  for (Module::const_iterator F = M.begin(), FEnd = M.end(); F != FEnd; ++F) {
    for (const_inst_iterator I = inst_begin(*F), E = inst_end(*F); I != E; ++I)
      if (const BranchInst* bi = dyn_cast<BranchInst>(&*I)) {
         const MDLocation* loc = bi->getDebugLoc();
         number_branches++;
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
  if(number_branches > 0){
    errs() << "#--------------Statistics----------------\n";
    double tainted_percentage = tainted_branches*1.0/number_branches * 100.0;
    errs() << ":: Tainted Branches: " << tainted_branches << "\n";
    errs() << ":: Branch Instructions: " << number_branches << "\n";
    errs() << ":: Vulnerable Branches: " << format("%2.2f%% [%d/%d]\n", tainted_branches, number_branches, tainted_percentage);
  }


  return false;
}

}
