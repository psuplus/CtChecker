#ifndef PREDCONSTRAINTS_H_
#define PREDCONSTRAINTS_H_

#include "Constraints/Intervals.h"
#include <iostream>
#include <vector>

class Predicate {
public:
  Predicate(long L, long U, char var) { pred = new Interval(L, U, var); }
  ~Predicate() {}

  Interval *pred;
};

void NonOverlappingConstraints(std::vector<Predicate *> &P);

/*Output:
flag >= 0, copy constraints of P1 into P3
flag <= 0, copy constraints of P2 into P3
*/
Predicate *PredicatePartition(Predicate *P1, Predicate *P2, int *flag);

/*Utility functions - name implies usage */
bool doPredicateOverlap(Predicate *P1, Predicate *P2);

bool isPredicateEmpty(Predicate *P);

// Checks if L > U, and if so makes P empty.
void validPredicate(Predicate *P);

long add1_extend(long x);
long sub1_extend(long x);

// Defines a < relation on predicates, assuming they are non-overlapping
bool Compare(Predicate *P1, Predicate *P2);

#endif