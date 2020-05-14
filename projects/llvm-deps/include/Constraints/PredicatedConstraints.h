#ifndef PREDCONSTRAINTS_H_
#define PREDCONSTRAINTS_H_

#include "Constraints/Intervals.h"
#include "llvm/Support/raw_ostream.h"
#include <iostream>
#include <vector>

namespace deps {

class Predicate {
public:
  // If want to add constructors for 2 or 3 intervals, make sure to 
  // check for the conflicting variables case, and sort finally (check addinequality function) 
  Predicate(long L, long U, char var) { pred = new Interval(L, U, var); }
  Predicate(long L1, long U1, char var1, long L2, long U2, char var2) { 
    pred = new Interval(L1, U1, var1);
    addinequality (L2, U2, var2);
  }
  Predicate(long L1, long U1, char var1, long L2, long U2, char var2, long L3, long U3, char var3) { 
    pred = new Interval(L1, U1, var1);
    addinequality (L2, U2, var2);
    addinequality (L3, U3, var3);
  }  
  
  ~Predicate() {}

  void dump();
  Interval *pred;

  // Adds another inequality to the predicate
  void addinequality (long L, long U, char var);


  /* Assumes P1 and P2 have non-empty intersection.
     flag = 1: Returns P1/P2 as vector of n-dimensional intervals. Makes P1 empty.
     flag = -1; Returns P2/P1 as vector of n-dimensional intervals. Makes P2 empty.
     flag = 0; Returns P1/P2 and P2/P1 and intersection(P1,P2) as a vector of n-dimensional intervals. In
     this case, if 'i' is an iteration variable on the vector returned, then:
        0 <= i < *index1 : vector of P1/P2 as n-dimensional intervals.
        *index1 <= i < *index1 + *index2: vector of P2/P1 as n-dimensional intervals
        i = *index1 + *index2: intersection(P1,P2)
        Makes P1 and P2 empty.
  */
  static std::vector<Predicate*> partitionPredicatePair(Predicate *P1, Predicate *P2, int flag, int* index1, int* index2);

  /* Assumes P2 is a subset of P1.  Returns P1/P2 as a vector of n-dimensional 
     intervals. Doesn't change P1 and P2.*/
  static std::vector<Predicate*> partitionsubsetPredicatePair(Predicate *P1, Predicate *P2);
  
  /*Utility functions - name implies usage:
  If return value = true, then:
  flag = 1: P2 is contained in P1, or P1 = P2; need to copy constraints of P1 into P3 and P2
  flag = -1, P1 is contained in P2, but P1 != P2; need to copy constraints of P2 into P3 and P1
  flag = 0; intersect but no containment; need to copy constraints of P1 and P2 into P3
   */
  static bool isOverlapping(Predicate *P1, Predicate *P2, int * flag);

  bool empty();

  // Checks if L > U, and if so makes P empty.
  void validate();

  long add1_extend(long x);
  long sub1_extend(long x);

  /* Defines a < relation on predicates, assuming they are non-overlapping*/
  static bool predcompare(Predicate *P1, Predicate *P2);

  // Defines a < relation on Interval_1D
  static bool intervalcompare(Interval_1D* I1, Interval_1D* I2);

  // Finds v's interval in P, and returns it's index; if not find return P_INF 
  static unsigned long char_to_index (Predicate* P, char v) ;

  // Returns intersection(P1, P2)
  static Predicate* intersection( Predicate* P1, Predicate* P2) ;

};

} // namespace deps

#endif