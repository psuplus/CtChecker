//===-- LHConstraintKit.cpp -------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// TODO Description
//
//===----------------------------------------------------------------------===//

#define DEBUG_TYPE "deps"

#include <iostream>
#include "Constraints/LHConstraintKit.h"
#include "Constraints/LHConstraints.h"
#include "Constraints/LHConsSoln.h"
#include "Constraints/PartialSolution.h"

#include "llvm/Support/Casting.h"
#include "llvm/ADT/Statistic.h"

namespace deps {

STATISTIC(explicitLHConstraints, "Number of explicit flow constraints");
STATISTIC(implicitLHConstraints, "Number of implicit flow constraints");

LHConstraintKit::LHConstraintKit() {}

LHConstraintKit::~LHConstraintKit() {
    // Delete all associated LHConsVars
    for (std::vector<const LHConsVar *>::iterator var = vars.begin(), end = vars.end();
            var != end; ++var) {
        delete(*var);
    }

    for (llvm::StringMap<PartialSolution*>::iterator I = leastSolutions.begin(),
         E = leastSolutions.end(); I != E; ++I)
      delete I->second;
    for (llvm::StringMap<PartialSolution*>::iterator I = greatestSolutions.begin(),
         E = greatestSolutions.end(); I != E; ++I)
      delete I->second;
}

const ConsVar &LHConstraintKit::newVar(const std::string description) {
    LHConsVar *var = new LHConsVar(description);
    vars.push_back(var);
    return *var;
}

const ConsElem &LHConstraintKit::lowConstant() const {
    return LHConstant::low();
}

const ConsElem &LHConstraintKit::highConstant() const {
    return LHConstant::high();
}

const ConsElem &LHConstraintKit::upperBound(const ConsElem &e1, const ConsElem &e2) {
    const LHJoin *join = LHJoin::create(e1, e2);
    std::set<LHJoin>::iterator J = joins.insert(*join).first;
    delete join;
    return *J;
}

const ConsElem *LHConstraintKit::upperBound(const ConsElem *e1, const ConsElem *e2) {
    if (e1 == NULL) return e2;
    if (e2 == NULL) return e1;

    const LHJoin *join = LHJoin::create(*e1, *e2);
    std::set<LHJoin>::iterator J = joins.insert(*join).first;
    delete join;
    return &*J;
}

const ConsElem &LHConstraintKit::upperBound(std::set<const ConsElem*> elems) {
    const LHJoin join = LHJoin(elems);
    std::set<LHJoin>::iterator J = joins.insert(join).first;
    return *J;
}

std::vector<LHConstraint> &LHConstraintKit::getOrCreateConstraintSet(
        const std::string kind) {
   	// return constraints.lookup(kind).getValue();
	//return constraints.insert(constraints.Create(kind))->getValue();
	  return constraints[kind];
}

void LHConstraintKit::addConstraint(const std::string kind,
        const ConsElem &lhs, const ConsElem &rhs) {
    if (lockedConstraintKinds.find(kind) != lockedConstraintKinds.end()) {
        assert(false && "Have already started solving this kind and cannot add more constraints.");
    }

    if (kind == "default") explicitLHConstraints++;
    if (kind == "implicit") implicitLHConstraints++;

    std::vector<LHConstraint> &set = getOrCreateConstraintSet(kind);

    assert(!llvm::isa<LHJoin>(&rhs) && "We shouldn't have joins on rhs!");

    if (const LHJoin *left = llvm::dyn_cast<LHJoin>(&lhs)) {
        std::set<const ConsElem *> elems = left->elements();
        for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                end = elems.end(); elem != end; ++elem) {
            const LHConstraint c(**elem, rhs);
            set.push_back(c);
        }
    } else {
        LHConstraint c(lhs, rhs);
        set.push_back(c);
    }
}

void LHConstraintKit::removeConstraintRHS(const std::string kind,
                                          const ConsElem &rhs){
  if (kind == "default") explicitLHConstraints--;
  if (kind == "implicit") implicitLHConstraints--;

  std::vector<LHConstraint> &set = getOrCreateConstraintSet("default");

  assert(!llvm::isa<LHJoin>(&rhs) && "We shouldn't have joins on rhs!");

  llvm::errs() << "Size of vector " << set.size() << "\n";
  std::vector<LHConstraint>::iterator vIt = set.begin();
  std::vector<LHConstraint>::iterator vEnd = set.end();
  llvm::errs() << "Constraint to find ";

  std::string rhsText;
  std::string consText;
  llvm::raw_string_ostream* ss = new llvm::raw_string_ostream(rhsText);
  llvm::raw_string_ostream* ss2 = new llvm::raw_string_ostream(consText);
  rhs.dump(*ss);
  ss->str();

  llvm::errs() << rhsText;
  llvm::errs() << "\n";


  for(; vIt != vEnd;){
    consText = "";
    LHConstraint c = *vIt;
    const ConsElem & constraintRight = c.rhs();
    constraintRight.dump(*ss2);
    ss2->str();

    llvm::errs() << "\n"; 
    std::string ll = "";
    std::string rr = "";
    llvm::raw_string_ostream* lls = new llvm::raw_string_ostream(ll);
    llvm::raw_string_ostream* rrs = new llvm::raw_string_ostream(rr);
    c.lhs().dump(*lls);
    c.rhs().dump(*rrs);
    lls->str();
    rrs->str();

    llvm::errs() << "addr:  " << &constraintRight << "\n";
    llvm::errs() << "lhs: " << ll << "\n"; 
    llvm::errs() << "rhs: " << rr << "\n"; 

    if (&rhs == &constraintRight){
      llvm::errs() << "Constraint erased: ";
      llvm::errs() << consText << "\n";
      set.erase(vIt);
    } else {
      ++vIt;
    }

    llvm::errs() << "\n+++++++++++++\n";
    vEnd = set.end();
  }

  delete ss;
  delete ss2;
}

ConsSoln *LHConstraintKit::leastSolution(const std::set<std::string> kinds) {
  PartialSolution *PS = NULL;
  for (std::set<std::string>::iterator kind = kinds.begin(), end = kinds.end(); kind != end; ++kind) {
    if (!leastSolutions.count(*kind)) {
      lockedConstraintKinds.insert(*kind);
      leastSolutions[*kind] = new PartialSolution(getOrCreateConstraintSet(*kind), false);
      freeUnneededConstraints(*kind);
    }
    PartialSolution *P = leastSolutions[*kind];

    if (!PS) PS = new PartialSolution(*P);
    else PS->mergeIn(*P);
  }
  assert(PS && "No kinds given?");
  return PS;
}

ConsSoln *LHConstraintKit::greatestSolution(const std::set<std::string> kinds) {
  PartialSolution *PS = NULL;
  for (std::set<std::string>::iterator kind = kinds.begin(), end = kinds.end(); kind != end; ++kind) {
    if (!greatestSolutions.count(*kind)) {
      lockedConstraintKinds.insert(*kind);
      greatestSolutions[*kind] = new PartialSolution(getOrCreateConstraintSet(*kind), true);
      freeUnneededConstraints(*kind);
    }
    PartialSolution *P = greatestSolutions[*kind];

    if (!PS) PS = new PartialSolution(*P);
    else PS->mergeIn(*P);
  }
  assert(PS && "No kinds given?");
  return PS;
}

void LHConstraintKit::freeUnneededConstraints(std::string kind) {
  // If we have the two kinds of PartialSolutions already generated
  // for this kind, then we no longer need the original constraints
  if (lockedConstraintKinds.count(kind) &&
      leastSolutions.count(kind) &&
      greatestSolutions.count(kind)) {
    // Clear out the constraints for this kind!
    getOrCreateConstraintSet(kind).clear();
  }
}

}
