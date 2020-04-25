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
#include "llvm/Support/Casting.h"
#include <iostream>

using namespace deps;

void test(void) {

  LHConstraintKit kit;

  const ConsElem &a = kit.newVar("a");
  const ConsElem &b = kit.newVar("b");
  const ConsElem &c = kit.newVar("c");

  kit.addConstraint("default", a, b);
  kit.addConstraint("default", a, kit.lowConstant());
  kit.addConstraint("default", a, kit.midConstant());
  kit.addConstraint("default", b, kit.highConstant());
  kit.addConstraint("default", kit.midConstant(), b);
  kit.addConstraint("default", c, kit.midConstant());
  kit.addConstraint("default", kit.midConstant(), c);

  std::set<std::string> kinds;
  kinds.insert("default");

  std::cout << "Least solution" << std::endl;

  ConsSoln *soln = kit.leastSolution(kinds);

  //   delete (soln);

  if (soln->subst(a) == kit.lowConstant()) {
    std::cout << "a : L\n";
  } else if (soln->subst(a) == kit.highConstant()) {
    std::cout << "a : H\n";
  } else {
    std::cout << "a : M\n";
  }

  if (soln->subst(b) == kit.lowConstant()) {
    std::cout << "b : L\n";
  } else if (soln->subst(b) == kit.highConstant()) {
    std::cout << "b : H\n";
  } else {
    std::cout << "b : M\n";
  }

  if (soln->subst(c) == kit.lowConstant()) {
    std::cout << "c : L\n";
  } else if (soln->subst(c) == kit.highConstant()) {
    std::cout << "c : H\n";
  } else {
    std::cout << "c : M\n";
  }

  std::cout << "Greatest solution" << std::endl;

  //   delete soln;

  soln = kit.greatestSolution(kinds);

  if (soln->subst(a) == kit.lowConstant()) {
    std::cout << "a : L\n";
  } else if (soln->subst(a) == kit.highConstant()) {
    std::cout << "a : H\n";
  } else {
    std::cout << "a : M\n";
  }

  if (soln->subst(b) == kit.lowConstant()) {
    std::cout << "b : L\n";
  } else if (soln->subst(b) == kit.highConstant()) {
    std::cout << "b : H\n";
  } else {
    std::cout << "b : M\n";
  }

  if (soln->subst(c) == kit.lowConstant()) {
    std::cout << "c : L\n";
  } else if (soln->subst(c) == kit.highConstant()) {
    std::cout << "c : H\n";
  } else {
    std::cout << "c : M\n";
  }

  delete soln;
}

int main(void) {
  test();
  return 0;
}
