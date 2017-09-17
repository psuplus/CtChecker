//===- SourceSinkAnalysis.cpp ---------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// A taint analysis based InfoFlow analysis.
//
//===----------------------------------------------------------------------===//

#include "TaintAnalysis.h"
#include "Infoflow.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IntrinsicInst.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/Support/raw_ostream.h"
#include <fstream>

// For __cxa_demangle (demangling c++ function names)
// Requires libstdc++
#include <cxxabi.h>

namespace deps {

static RegisterPass<TaintAnalysis>
X("taintanalysis", "A simple taint analysis");

char TaintAnalysis::ID;

/** Taint a Value whose name matches s */
void
TaintAnalysis::taintStr (std::string kind, std::string match) {
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
        if(curElem != ifa->locConstraintMap.end()){
          elemMap = curElem->second;

          if (hasOffset) {
            errs() << "Using elem at offset " << offset << "\n";
            const ConsElem * elem;
            if (elemMap.find(offset) != elemMap.end()){
              elem = elemMap[offset];
            } else {
              errs() << "No direct element that matches offset.\n";
              const ConsElem * lastElem;
              bool elemAdded = false;
              for(std::map<unsigned, const ConsElem *>::iterator it = elemMap.begin(), itEnd= elemMap.end();
                  it != itEnd; ++it){
                if((*it).first > offset && !elemAdded && lastElem != NULL){
                  elem = lastElem;
                  elemAdded = true;
                }
                if((*it).second != NULL){
                  lastElem = (*it).second;
                }
              }

              if(!elemAdded && lastElem != NULL){
                elem = lastElem;
              }
            }

            errs() << "Matching " << match << " with " << value.getName() << ": ";
            elem->dump(errs());
            errs() << "\n";
            ifa->kit->addConstraint(kind,ifa->kit->highConstant(), *elem);
          } else {
            errs() << "Visiting: ";
            value.dump();
            errs() << "Matching " << match << " with " << value.getName() << ": ";
            errs() << "No offset found and elemMap size " << elemMap.size() << "\n";
            for(std::map<unsigned, const ConsElem*>::iterator elemIt = elemMap.begin(), elemEnd = elemMap.end();
                elemIt != elemEnd; ++elemIt)
              ifa->kit->addConstraint(kind, ifa->kit->highConstant(), *(*elemIt).second);
          }
        }
      }
    } else {
      llvm::raw_string_ostream* ss = new llvm::raw_string_ostream(s);
      *ss << value; // dump value info to ss
      ss->str(); // flush stream to s
      if (s.find(match) == 0) // test if the value's content starts with match
        ifa->setTainted(kind, value);
    }
  }
}

bool 
TaintAnalysis::runOnModule(Module &M) {
  ifa = &getAnalysis<Infoflow>();
  if (!ifa) { errs() << "No instance\n"; return false;}

  std::ifstream infile("taint.txt"); // read tainted values from txt file
  std::string line;
  while (std::getline(infile, line)) {
    taintStr ("test", line);
  }

  std::ifstream whitelistFile("whitelist.txt");
  while (std::getline(whitelistFile, line)) {
    taintStr("white", line);
  }

  std::set<std::string> kinds;
  kinds.insert("test");

  errs() << "Least solution with explicit constraints\n";
  InfoflowSolution* soln = ifa->leastSolution(kinds, false, true);
  soln->allTainted();

  errs() << "Least solution with implicit contraints\n";
  soln = ifa->leastSolution(kinds, true, true);
  soln->allTainted();

  kinds.clear();
  kinds.insert("white");
  errs() << "Whitelist with constraints\n";
  soln = ifa->leastSolution(kinds, false, true);
  soln->allTainted();
  return false;
}

}
