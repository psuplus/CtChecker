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

#include "Constraints/LHConstraintKit.h"
#include "Constraints/PredicatedConstraints.h"
#include "llvm/Support/Casting.h"
#include <iostream>

using namespace deps;

void test(void) {

  std::vector<Predicate *> PSet;

  // Test 0
  PSet.push_back(new Predicate(-1, 5, 'x'));
  PSet.push_back(new Predicate(2, 7, 'x'));

  // // Test 1
  // PSet.push_back(new Predicate(-1,5,'x'));
  // PSet.push_back(new Predicate(2,7,'y'));

  // // Test 2
  // PSet.push_back(new Predicate(-1,2,'x'));
  // PSet.push_back(new Predicate(5,2,'x'));
  // PSet.push_back(new Predicate(1 ,6,'x'));

  // // Test 3
  // PSet.push_back(new Predicate(-1,6,'x'));
  // PSet.push_back(new Predicate(4,8,'x'));
  // PSet.push_back(new Predicate(0,5,'x'));
  // PSet.push_back(new Predicate(-3,7,'x'));

  // // Test 4
  // PSet.push_back(new Predicate(P_NEGINF,P_INF,'x'));
  // PSet.push_back(new Predicate(P_NEGINF,5,'x'));
  // PSet.push_back(new Predicate(-2,P_INF,'x'));

  // unsigned long i;
  // std::cout << "Before: \n";
  // for (i = 0; i < PSet.size(); i++) {
  //   Predicate *P = PSet[i];
  //   std::cout << P->pred->intervals->L << " <= " << P->pred->intervals->var
  //             << " <= " << P->pred->intervals->U << "\n";
  // }



  // std::cout << "After: \n";
  // for (i = 0; i < PSet.size(); i++) {
  //   Predicate *P = PSet[i];
  //   std::cout << P->pred->intervals->L << " <= " << P->pred->intervals->var
  //             << " <= " << P->pred->intervals->U << "\n";
  // }

  LHConstraintKit kit;

  const ConsElem &a = kit.newVar("a");
  const ConsElem &b = kit.newVar("b");
  const ConsElem &c = kit.newVar("c");

  std::vector<const ConsElem *> elemVec{&a, &b, &c};

  CompartmentSet emptySet{};
  CompartmentSet cS1{NUCLEAR};
  CompartmentSet cS2{NUCLEAR, CRYPTO};
  CompartmentSet cS3{CRYPTO};
  CompartmentSet cS4{BIO};

  // const ConsElem &ln1 = kit.constant(LHLevel::LOW, cS1);
  // const ConsElem &ln2 = kit.constant(LHLevel::LOW, cS2);
  // const ConsElem &ln3 = kit.constant(LHLevel::LOW, cS3);
  // const ConsElem &ln4 = kit.constant(LHLevel::MID, cS4);

  // ln1.dump(llvm::errs());
  // ln2.dump(llvm::errs());
  // ln3.dump(llvm::errs());
  // ln4.dump(llvm::errs());

  // if (ln3 == ln4) {
  //   llvm::errs() << "YES!\n";
  // } else {
  //   llvm::errs() << "NO!\n";
  // }

  // std::cout << ln4.leq(ln1) << "\n";
  // std::cout << ln4.leq(ln2) << "\n";
  // std::cout << ln4.leq(ln3) << "\n";
  // std::cout << ln4.leq(ln4) << "\n";

  // Testing kit for least solution
  // L, cs1 <= a <= b <= TOP; MID, cs4 <= b <= c 
  kit.addConstraint("default", kit.constant(LHLevel::LOW, cS1), a, PSet[0]); // ,p3
  // kit.addConstraint("default", a, b, PSet[0]);
  kit.addConstraint("default", b, kit.topConstant(), PSet[1]);
  // kit.addConstraint("default", kit.constant(LHLevel::MID, cS4), b, PSet[0]);
  // kit.addConstraint("default", b, c, PSet[0]);

  // Testing kit for greatest solution
  kit.addConstraint("greatest", a, kit.constant(LHLevel::LOW, cS3), PSet[0]);
  kit.addConstraint("greatest", a, b, PSet[0]);
  kit.addConstraint("greatest", b, kit.constant(LHLevel::MID, cS1), PSet[0]);
  kit.addConstraint("greatest", c, kit.constant(LHLevel::HIGH, cS1), PSet[0]);
  kit.addConstraint("greatest", c, a, PSet[0]);

  std::set<std::string> kinds{"default"};
  std::set<std::string> greatest{"greatest"};

  NonOverlappingConstraints(PSet, &kit);

    std::cout << "Least solution" << std::endl;

  for (auto i: PSet) {
    Predicate *P = i;
    llvm::errs() << P->pred->intervals->L << " <= " << P->pred->intervals->var
              << " <= " << P->pred->intervals->U << ": \n";  
  ConsSoln *leastSoln = kit.leastSolution(kinds, i);
  for (auto elem : elemVec) {
    elem->dump(llvm::errs());
    llvm::errs() << ": ";
    leastSoln->subst(*elem).dump(llvm::errs());
  }
  delete leastSoln;    
  }

  std::cout << "Greatest solution" << std::endl;  
  for (auto i: PSet) {
    Predicate *P = i;
    llvm::errs() << P->pred->intervals->L << " <= " << P->pred->intervals->var
              << " <= " << P->pred->intervals->U << ": \n";    
  ConsSoln *greatestSoln = kit.greatestSolution(greatest,i );
  for (auto elem : elemVec) {
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
