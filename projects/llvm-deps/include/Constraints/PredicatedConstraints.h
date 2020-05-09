#ifndef PREDCONSTRAINTS_H_
#define PREDCONSTRAINTS_H_

#include "Constraints/Intervals.h"
#include "llvm/Support/raw_ostream.h"
#include <iostream>
#include <vector>

namespace deps {

class Predicate {
public:
  Predicate(long L, long U, char var) { pred = new Interval(L, U, var); }
  ~Predicate() {}

  void dump();
  Interval *pred;

  /*Output:
  flag >= 0, copy constraints of P1 into P3
  flag <= 0, copy constraints of P2 into P3
  */
  static Predicate *partitionPredicatePair(Predicate *P1, Predicate *P2,
                                           int *flag);

  /*Utility functions - name implies usage */
  static bool isOverlapping(Predicate *P1, Predicate *P2);

  bool empty();

  // Checks if L > U, and if so makes P empty.
  void validate();

  long add1_extend(long x);
  long sub1_extend(long x);

  // Defines a < relation on predicates, assuming they are non-overlapping
  static bool compare(Predicate *P1, Predicate *P2);
};

} // namespace deps

#endif