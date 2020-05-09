#include "Constraints/PredicatedConstraints.h"
#include "Constraints/Intervals.h"
#include <algorithm>
#include <iostream>
#include <vector>

namespace deps {

void Predicate::dump() {
  llvm::errs() << pred->intervals->L << " <= " << pred->intervals->var
               << " <= " << pred->intervals->U << ": \n";
}

bool Predicate::isOverlapping(Predicate *P1, Predicate *P2) {

  // Check if Predicates are empty!
  if (P1->empty() || P2->empty())
    return false;

  // Check if variables match;
  if (P1->pred->intervals->var != P2->pred->intervals->var)
    return false;

  long L1, L2, U1, U2;
  L1 = P1->pred->intervals->L;
  U1 = P1->pred->intervals->U;
  L2 = P2->pred->intervals->L;
  U2 = P2->pred->intervals->U;

  // Works for infinite intervals too
  if (L1 <= L2 && U1 >= L2)
    return true;
  if (L2 <= L1 && U2 >= L1)
    return true;

  return false;
}

long add1_extend(long x) { return (x == P_INF) ? P_INF : (x + 1); }

long sub1_extend(long x) { return (x == P_NEGINF) ? P_NEGINF : (x - 1); }

Predicate *Predicate::partitionPredicatePair(Predicate *P1, Predicate *P2,
                                             int *flag) {

  long L1, L2, U1, U2, L3, U3;
  L1 = P1->pred->intervals->L;
  U1 = P1->pred->intervals->U;
  L2 = P2->pred->intervals->L;
  U2 = P2->pred->intervals->U;

  // P3 = intersection(P1,P2)
  Predicate *P3 = new Predicate(std::max(L1, L2), std::min(U1, U2),
                                P1->pred->intervals->var);
  L3 = P3->pred->intervals->L;
  U3 = P3->pred->intervals->U;

  // Checks for infinite cases
  if (L1 <= L2 && U1 < U2) {
    *flag = 0;
    P1->pred->intervals->U = deps::sub1_extend(L3);
    P2->pred->intervals->L = deps::add1_extend(U3);
  } else if (L1 <= L2 && U1 >= U2) {
    *flag = 1;
    P3->pred->intervals->U = P1->pred->intervals->U;
    P1->pred->intervals->U = deps::sub1_extend(L2);
    P3->pred->intervals->L = deps::add1_extend(U2);
  } else if (L2 < L1 && U2 < U1) {
    *flag = 0;
    P2->pred->intervals->U = deps::sub1_extend(L3);
    P1->pred->intervals->L = deps::add1_extend(U3);
  } else {
    *flag = -1;
    P3->pred->intervals->U = P2->pred->intervals->U;
    P2->pred->intervals->U = deps::sub1_extend(L1);
    P3->pred->intervals->L = deps::add1_extend(U1);
  }

  // Check if any predicate has become empty;
  P1->validate();
  P2->validate();
  P3->validate();

  return P3;
}

void Predicate::validate() {
  bool b1, b2;
  b1 = (pred->intervals->L > pred->intervals->U);
  b2 = (pred->intervals->L == P_INF) && (pred->intervals->U == P_INF);
  if (b1 || b2) {
    pred->intervals->L = P_NEGINF;
    pred->intervals->U = P_NEGINF;
  }
}

bool Predicate::empty() {
  return (pred->intervals->L == P_NEGINF && pred->intervals->U == P_NEGINF);
}

bool Predicate::compare(Predicate *P1, Predicate *P2) {
  if (P1->pred->intervals->var != P2->pred->intervals->var)
    return (P1->pred->intervals->var < P2->pred->intervals->var);
  else
    return (P1->pred->intervals->L < P2->pred->intervals->L);
}

}