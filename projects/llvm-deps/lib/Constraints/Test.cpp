//===-- Test.cpp ------------------------------------------------*- C++ -*-===//
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

#include "Constraints/PredicatedConstraints.h"
#include "Constraints/RLConstraintKit.h"
#include "llvm/Support/Casting.h"
#include <iostream>

using namespace deps;

void test(void) {

  std::vector<Predicate *> PSet;

  // Test 0
  PSet.push_back(new Predicate(-1, 5, 'x'));
  PSet.push_back(new Predicate(2, 7, 'x'));
  PSet.push_back(new Predicate(4, 12, 'x'));

  // // Test 1
  // PSet.push_back(new Predicate(-1, 5, 'x'));
  // PSet.push_back(new Predicate(2, 7, 'y'));

  // // Test 2
  // PSet.push_back(new Predicate(-1, 2, 'x'));
  // PSet.push_back(new Predicate(5, 2, 'x'));
  // PSet.push_back(new Predicate(1, 6, 'x'));

  // // Test 3
  // PSet.push_back(new Predicate(-1, 6, 'x'));
  // PSet.push_back(new Predicate(4, 8, 'x'));
  // PSet.push_back(new Predicate(0, 5, 'y'));
  // PSet.push_back(new Predicate(-3, 7, 'y'));

  // // Test 4
  // PSet.push_back(new Predicate(P_NEGINF, P_INF, 'x'));
  // PSet.push_back(new Predicate(P_NEGINF, 5, 'x'));
  // PSet.push_back(new Predicate(-2, P_INF, 'x'));

  RLConstraintKit kit;

  const ConsElem &a = kit.newVar("a");
  const ConsElem &b = kit.newVar("b");
  const ConsElem &c = kit.newVar("c");

  std::vector<const ConsElem *> elemVec{&a, &b, &c};

  CompartmentSet emptySet{};
  CompartmentSet cS1{NUCLEAR};
  CompartmentSet cS2{NUCLEAR, CRYPTO};
  CompartmentSet cS3{CRYPTO};
  CompartmentSet cS4{BIO};

  // Testing kit for least solution
  if (PSet.size() > 0) {
    kit.addConstraint("least", kit.constant(RLLevel::LOW, cS1), a, PSet[0]);
    kit.addConstraint("least", a, b, PSet[0]);
  }
  if (PSet.size() > 1) {
    kit.addConstraint("least", kit.constant(RLLevel::MID, cS4), b, PSet[1]);
  }
  if (PSet.size() > 2) {
    kit.addConstraint("least", kit.constant(RLLevel::MID, cS2), b, PSet[2]);
    kit.addConstraint("least", b, c, PSet[2]);
  }

  // Testing kit for greatest solution
  if (PSet.size() > 0) {
    kit.addConstraint("greatest", a, kit.constant(RLLevel::LOW, cS3), PSet[0]);
    kit.addConstraint("greatest", a, b, PSet[0]);
    kit.addConstraint("greatest", b, kit.constant(RLLevel::MID, cS1), PSet[0]);
  }
  if (PSet.size() > 1) {
    kit.addConstraint("greatest", c, kit.constant(RLLevel::HIGH, cS1), PSet[1]);
    kit.addConstraint("greatest", c, a, PSet[1]);
  }
  if (PSet.size() > 2) {
  }

  std::set<std::string> kinds{"least"};
  std::set<std::string> greatest{"greatest"};
  kit.partitionPredicateSet(PSet);

  llvm::errs() << "\n===== Least solution ====="
               << "\n";

  for (auto P : PSet) {
    P->dump();
    ConsSoln *leastSoln = kit.leastSolution(kinds, P);
    for (auto elem : elemVec) {
      llvm::errs() << "\t";
      elem->dump(llvm::errs());
      llvm::errs() << ": ";
      leastSoln->subst(*elem).dump(llvm::errs());
    }
    delete leastSoln;
  }

  llvm::errs() << "\n===== Greatest solution ====="
               << "\n";

  for (auto P : PSet) {
    P->dump();
    ConsSoln *greatestSoln = kit.greatestSolution(greatest, P);
    for (auto elem : elemVec) {
      llvm::errs() << "\t";
      elem->dump(llvm::errs());
      llvm::errs() << ": ";
      greatestSoln->subst(*elem).dump(llvm::errs());
    }
    delete greatestSoln;
  }
}

int main(void) {
  test();
  return 0;
}
