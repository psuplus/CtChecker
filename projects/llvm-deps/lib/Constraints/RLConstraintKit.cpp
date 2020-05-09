//===-- RLConstraintKit.cpp -------------------------------------*- C++ -*-===//
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

#include "Constraints/RLConstraintKit.h"
#include "Constraints/PartialSolution.h"
#include "Constraints/RLConsSoln.h"
#include "Constraints/RLConstraints.h"
#include <iostream>

#include "llvm/ADT/Statistic.h"
#include "llvm/Support/Casting.h"

namespace deps {

STATISTIC(explicitRLConstraints, "Number of explicit flow constraints");
STATISTIC(implicitRLConstraints, "Number of implicit flow constraints");

typedef std::map<Predicate *, llvm::StringMap<PartialSolution *>>
    PartialSolutionMap;

RLConstraintKit::RLConstraintKit() {}

RLConstraintKit::~RLConstraintKit() {
  // Delete all associated RLConsVars
  for (std::vector<const RLConsVar *>::iterator var = vars.begin(),
                                                end = vars.end();
       var != end; ++var) {
    delete (*var);
  }

  for (PartialSolutionMap::iterator I = leastSolutions.begin();
       I != leastSolutions.end(); ++I) {
    for (llvm::StringMap<PartialSolution *>::iterator psI = I->second.begin();
         psI != I->second.end(); psI++) {
      delete psI->second;
    }
  }
  for (PartialSolutionMap::iterator I = greatestSolutions.begin();
       I != greatestSolutions.end(); ++I) {
    for (llvm::StringMap<PartialSolution *>::iterator psI = I->second.begin();
         psI != I->second.end(); psI++) {
      delete psI->second;
    }
  }
}

const ConsVar &RLConstraintKit::newVar(const std::string description) {
  RLConsVar *var = new RLConsVar(description);
  vars.push_back(var);
  return *var;
}

const ConsElem &RLConstraintKit::botConstant() const {
  return RLConstant::bot();
}

const ConsElem &RLConstraintKit::topConstant() const {
  return RLConstant::top();
}

const ConsElem &RLConstraintKit::constant(RLLevel l,
                                          CompartmentSet cSet) const {
  return RLConstant::constant(l, cSet);
}

const ConsElem &RLConstraintKit::upperBound(const ConsElem &e1,
                                            const ConsElem &e2) {
  const RLJoin *join = RLJoin::create(e1, e2);
  std::set<RLJoin>::iterator J = joins.insert(*join).first;
  delete join;
  return *J;
}

const ConsElem *RLConstraintKit::upperBound(const ConsElem *e1,
                                            const ConsElem *e2) {
  if (e1 == NULL)
    return e2;
  if (e2 == NULL)
    return e1;

  const RLJoin *join = RLJoin::create(*e1, *e2);
  std::set<RLJoin>::iterator J = joins.insert(*join).first;
  delete join;
  return &*J;
}

const ConsElem &RLConstraintKit::upperBound(std::set<const ConsElem *> elems) {
  const RLJoin join = RLJoin(elems);
  std::set<RLJoin>::iterator J = joins.insert(join).first;
  return *J;
}

std::vector<RLConstraint> &
RLConstraintKit::getOrCreateConstraintSet(const std::string kind,
                                          Predicate *pred) {
  // return constraints.lookup(kind).getValue();
  // return constraints.insert(constraints.Create(kind))->getValue();
  // if (constraints.find(pred) != constraints.end()) {
  //   return constraints[pred][kind];
  // }
  return constraints[pred][kind];
}

void RLConstraintKit::addConstraint(const std::string kind, const ConsElem &lhs,
                                    const ConsElem &rhs, Predicate *pred) {
  if (lockedConstraintKinds[pred].find(kind) !=
      lockedConstraintKinds[pred].end()) {
    assert(false && "Have already started solving this kind and cannot add "
                    "more constraints.");
  }

  if (kind == "default")
    explicitRLConstraints++;
  if (kind == "implicit")
    implicitRLConstraints++;

  std::vector<RLConstraint> &set = getOrCreateConstraintSet(kind, pred);

  assert(!llvm::isa<RLJoin>(&rhs) && "We shouldn't have joins on rhs!");

  if (const RLJoin *left = llvm::dyn_cast<RLJoin>(&lhs)) {
    std::set<const ConsElem *> elems = left->elements();
    for (std::set<const ConsElem *>::iterator elem = elems.begin(),
                                              end = elems.end();
         elem != end; ++elem) {
      const RLConstraint c(**elem, rhs);
      set.push_back(c);
    }
  } else {
    RLConstraint c(lhs, rhs);
    set.push_back(c);
  }
}

void RLConstraintKit::removeConstraintRHS(const std::string kind,
                                          const ConsElem &rhs,
                                          Predicate *pred) {
  if (kind == "default")
    explicitRLConstraints--;
  if (kind == "implicit")
    implicitRLConstraints--;

  std::vector<RLConstraint> &set = getOrCreateConstraintSet("default", pred);

  assert(!llvm::isa<RLJoin>(&rhs) && "We shouldn't have joins on rhs!");

  llvm::errs() << "Size of vector " << set.size() << "\n";
  std::vector<RLConstraint>::iterator vIt = set.begin();
  std::vector<RLConstraint>::iterator vEnd = set.end();
  llvm::errs() << "Constraint to find ";

  std::string rhsText;
  std::string consText;
  llvm::raw_string_ostream *ss = new llvm::raw_string_ostream(rhsText);
  llvm::raw_string_ostream *ss2 = new llvm::raw_string_ostream(consText);
  rhs.dump(*ss);
  ss->str();

  llvm::errs() << rhsText;
  llvm::errs() << "\n";

  for (; vIt != vEnd;) {
    consText = "";
    RLConstraint c = *vIt;
    const ConsElem &constraintRight = c.rhs();
    constraintRight.dump(*ss2);
    ss2->str();
    if (&rhs == &constraintRight) {
      llvm::errs() << "Constraint erased: ";
      llvm::errs() << consText << "\n";
      set.erase(vIt);
    } else {
      ++vIt;
    }
    vEnd = set.end();
  }

  delete ss;
  delete ss2;
}

ConsSoln *RLConstraintKit::leastSolution(const std::set<std::string> kinds,
                                         Predicate *pred) {
  PartialSolution *PS = NULL;
  for (std::set<std::string>::iterator kind = kinds.begin(), end = kinds.end();
       kind != end; ++kind) {
    if (!leastSolutions[pred].count(*kind)) {
      lockedConstraintKinds[pred].insert(*kind);
      leastSolutions[pred][*kind] =
          new PartialSolution(getOrCreateConstraintSet(*kind, pred), false);
      freeUnneededConstraints(*kind, pred);
    }
    PartialSolution *P = leastSolutions[pred][*kind];

    if (!PS)
      PS = new PartialSolution(*P);
    else
      PS->mergeIn(*P);
  }
  assert(PS && "No kinds given?");
  return PS;
}

ConsSoln *RLConstraintKit::greatestSolution(const std::set<std::string> kinds,
                                            Predicate *pred) {
  PartialSolution *PS = NULL;
  for (std::set<std::string>::iterator kind = kinds.begin(), end = kinds.end();
       kind != end; ++kind) {
    if (!greatestSolutions[pred].count(*kind)) {
      lockedConstraintKinds[pred].insert(*kind);
      greatestSolutions[pred][*kind] =
          new PartialSolution(getOrCreateConstraintSet(*kind, pred), true);
      freeUnneededConstraints(*kind, pred);
    }
    PartialSolution *P = greatestSolutions[pred][*kind];

    if (!PS)
      PS = new PartialSolution(*P);
    else
      PS->mergeIn(*P);
  }
  assert(PS && "No kinds given?");
  return PS;
}

void RLConstraintKit::freeUnneededConstraints(std::string kind,
                                              Predicate *pred) {
  // If we have the two kinds of PartialSolutions already generated
  // for this kind, then we no longer need the original constraints
  if (lockedConstraintKinds[pred].count(kind) &&
      leastSolutions[pred].count(kind) && greatestSolutions[pred].count(kind)) {
    // Clear out the constraints for this kind!
    getOrCreateConstraintSet(kind, pred).clear();
  }
}

void RLConstraintKit::unionConstraintSet(Predicate *Pred1, Predicate *Pred2,
                                         Predicate *NewPred, int flag) {
  switch (flag) {
  case 0:
    for (llvm::StringMap<std::vector<RLConstraint>>::iterator i =
             constraints[Pred1].begin();
         i != constraints[Pred1].end(); ++i) {
      std::vector<RLConstraint> &tempvector =
          getOrCreateConstraintSet(i->first(), NewPred);
      for (auto j : getOrCreateConstraintSet(i->first(), Pred1)) {
        RLConstraint temp(j.lhs(), j.rhs());
        tempvector.push_back(temp);
      }
      for (auto j : getOrCreateConstraintSet(i->first(), Pred2)) {
        RLConstraint temp(j.lhs(), j.rhs());
        tempvector.push_back(temp);
      }
    }
    break;
  case 1:
    for (llvm::StringMap<std::vector<RLConstraint>>::iterator i =
             constraints[Pred1].begin();
         i != constraints[Pred1].end(); ++i) {
      llvm::errs() << i->first() << "1\n";
      std::vector<RLConstraint> &tempvector =
          getOrCreateConstraintSet(i->first(), NewPred);
      for (auto j : getOrCreateConstraintSet(i->first(), Pred1)) {
        RLConstraint temp(j.lhs(), j.rhs());
        tempvector.push_back(temp);
      }

      std::vector<RLConstraint> &tempvector2 =
          getOrCreateConstraintSet(i->first(), Pred2);
      for (auto j : getOrCreateConstraintSet(i->first(), Pred1)) {
        RLConstraint temp(j.lhs(), j.rhs());
        tempvector2.push_back(temp);
      }
    }
    break;
  case -1:
    for (llvm::StringMap<std::vector<RLConstraint>>::iterator i =
             constraints[Pred2].begin();
         i != constraints[Pred2].end(); ++i) {
      std::vector<RLConstraint> &tempvector =
          getOrCreateConstraintSet(i->first(), NewPred);
      for (auto j : getOrCreateConstraintSet(i->first(), Pred2)) {
        RLConstraint temp(j.lhs(), j.rhs());
        tempvector.push_back(temp);
      }

      std::vector<RLConstraint> &tempvector2 =
          getOrCreateConstraintSet(i->first(), Pred1);
      for (auto j : getOrCreateConstraintSet(i->first(), Pred2)) {
        RLConstraint temp(j.lhs(), j.rhs());
        tempvector2.push_back(temp);
      }
    }
    break;
  default:
    break;
  }
}

void RLConstraintKit::partitionPredicateSet(std::vector<Predicate *> &P) {
  long unsigned i, j;
  for (i = 0; i < P.size(); i++) {
    for (j = i + 1; j < P.size(); j++) {
      if (Predicate::isOverlapping(P[i], P[j])) {
        int *flag = new int(0);
        Predicate *newPred =
            Predicate::partitionPredicatePair(P[i], P[j], flag);
        unionConstraintSet(P[i], P[j], newPred, *flag);
        P.push_back(newPred);
      }
    }
  }

  // Sort the constraints
  std::sort(P.begin(), P.end(), Predicate::compare);

  // Remove the empty predicates
  for (i = 0; i < P.size(); i++) {
    if (P[i]->empty()) {
      P.erase(P.begin() + i);
      i--;
    }
  }
}

} // namespace deps
