#include "Constraints/PredicatedConstraints.h"
#include "Constraints/Intervals.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

namespace deps {

void Predicate::dump() {
  for (unsigned long i = 0 ; i < pred->intervals.size() ; i++) {
  llvm::errs() << pred->intervals[i]->L << " <= " << pred->intervals[i]->var
               << " <= " << pred->intervals[i]->U ;
  if (i < pred->intervals.size() - 1)
    llvm::errs() << ", ";
  else
  llvm::errs() << ": \n";
  }
}

bool Predicate::isOverlapping(Predicate *P1, Predicate *P2, int* flag) {
  // Check if Predicates are empty!
  if (P1->empty() || P2->empty())
    return false;

  bool overlap = true;
  std::vector<int > flags;

  unsigned long i,j;
  for (i = 0, j = 0; (i < P1->pred->intervals.size())  || (j < P2->pred->intervals.size() ); ++i, ++j  ) {
    if (i >= P1->pred->intervals.size() ) {
      flags.push_back(1);
      break;
    }  
    if ( j >= P2->pred->intervals.size() ) {
      flags.push_back(-1);
      break;
    }  

    char v1 = P1->pred->intervals[i]->var;
    char v2 = P2->pred->intervals[j]->var;
    
    // We can do this as variables are in sorted order
    if (v1 < v2) {
      flags.push_back(-1);
      j--;
      continue;
    }
    else if (v1 > v2) {
      flags.push_back(1);
      i--;
      continue;
    }

    long L1, L2, U1, U2;
    L1 = P1->pred->intervals[i]->L;
    U1 = P1->pred->intervals[i]->U;
    L2 = P2->pred->intervals[j]->L;
    U2 = P2->pred->intervals[j]->U;

    overlap = overlap && ((L1 <= L2 && U1 >= L2) || (L2 <= L1 && U2 >= L1));

    if (!overlap)  
      break;

    if (L1 == L2 && U2 < U1) {
      flags.push_back(1);
    }
    else if (L1 == L2 && U1 < U2) {
      flags.push_back(-1);
    }
    else if (L1 == L2 && U1 == U2) {
      flags.push_back(2); //  It can be either 1,-1 or 0 for this whole iteration  
    }
    else if (L1 < L2 &&  U2 <= U1) {
      flags.push_back(1);
    }
    else if (L2 < L1 && U1 <= U2) {
      flags.push_back(-1);
    }  
    else {
      flags.push_back(0);
    }
  }
  
  // Check for equal case - this can happen, just work out test case 4!
  bool eq = true;
  for (auto K: flags) {
    if (flags[K] != 2) {
      eq = false;
      break;
    }
  }
  if (eq) {
    *flag = 1;
    return overlap;
  }
  
  int temp;
  unsigned long K;
  for (K = 0; K < flags.size(); K++) {
    if (flags[K] != 2)
      temp = flags[K];
      break;
  }
  for (unsigned long L = (K + 1); L < flags.size() ; L++) {
    if (flags[L] == 2)
      continue;
    if (temp != flags[L])
      temp = 0;
    if (temp == 0)
      break;
  }
  *flag = temp;
  return overlap;
} 

long add1_extend(long x) { return (x == P_INF) ? P_INF : (x + 1); }

long sub1_extend(long x) { return (x == P_NEGINF) ? P_NEGINF : (x - 1); }

// In C++11, return vector by value is preferred.
std::vector<Predicate*> Predicate::partitionPredicatePair(Predicate *P1, Predicate *P2, int flag,
    int* index1, int* index2) {

  std::vector<Predicate* > retval;
  if (flag == 1) {
    retval = partitionsubsetPredicatePair(P1, P2);

    // debugging purposes
    llvm::errs() << "---------------\n";
    for (auto II: retval)
      II->dump();
    llvm::errs() << "---------------\n";
    
    // Make P1 empty
    P1->pred->intervals[0]->L = P_NEGINF;
    P1->pred->intervals[0]->U = P_NEGINF;
    P1->validate();
  }
  if (flag == -1) {
    retval = partitionsubsetPredicatePair(P2, P1);

    // Make P2 empty
    P2->pred->intervals[0]->L = P_NEGINF;
    P2->pred->intervals[0]->U = P_NEGINF;
    P2->validate();    
  }
  if (flag == 0) {
    Predicate* P3 = P1->intersection(P1, P2);
    std::vector<Predicate* > temp, temp2;
  
    temp = partitionsubsetPredicatePair(P1, P3);
    temp2 = partitionsubsetPredicatePair(P2, P3);
    
 
    
    *index1 = temp.size();
    *index2 = temp2.size();

    // Add temp, temp2 and P3 to retval
    for (auto I: temp)
      retval.push_back(I);
    for (auto I: temp2)
      retval.push_back(I);
    retval.push_back(P3);

    // Make P1 and P2 empty
    P1->pred->intervals[0]->L = P_NEGINF;
    P1->pred->intervals[0]->U = P_NEGINF;
    P1->validate();
    P2->pred->intervals[0]->L = P_NEGINF;
    P2->pred->intervals[0]->U = P_NEGINF;
    P2->validate(); 
  }

  return retval;
}

void Predicate::validate() {
  bool b = false;
  
  // Check if Predicate is valid.
  for (unsigned long i = 0 ; i < pred->intervals.size(); ++i) {
    bool b1, b2, b3;
    b1 = (pred->intervals[i]->L > pred->intervals[i]->U);
    b2 = (pred->intervals[i]->L == P_INF) && (pred->intervals[i]->U == P_INF);
    b3 = (pred->intervals[i]->L == P_NEGINF) && (pred->intervals[i]->U == P_NEGINF);
    b = (b1 || b2 || b3);
    if (b)
      break;
  }

  if (!b)
    return;
  
  // If predicate is invalid, make it empty
  for (unsigned long i = 0; i < pred->intervals.size(); ++i) {
      pred->intervals[i]->L = P_NEGINF;
      pred->intervals[i]->U = P_NEGINF;
  }

  return;
}

bool Predicate::empty() {
  bool b = false;
  for (unsigned long i = 0; i < pred->intervals.size(); i++) {
    b = b || (pred->intervals[i]->L == P_NEGINF && pred->intervals[i]->U == P_NEGINF);
  }
  return b;
}

bool Predicate::predcompare(Predicate *P1, Predicate *P2) {
  unsigned long size = std::min(P1->pred->intervals.size(), P2->pred->intervals.size());
  
  for (unsigned long i = 0; i < size ; i++) {
    if (P1->pred->intervals[i]->var != P2->pred->intervals[i]->var)
      return (P1->pred->intervals[i]->var < P2->pred->intervals[i]->var);
    else if (P1->pred->intervals[i]->L != P2->pred->intervals[i]->L)
      return (P1->pred->intervals[i]->L < P2->pred->intervals[i]->L);
    else
      continue;
  } 

  if (P1->pred->intervals.size() != P2->pred->intervals.size())
    return (P1->pred->intervals.size() < P2->pred->intervals.size());

  return true; // Control should reach here only if P1 = P2.  
}

bool Predicate::intervalcompare(Interval_1D* I1, Interval_1D* I2) { return (I1->var < I2->var);}


void Predicate::addinequality (long L, long U, char var) {
  if (!pred)
    pred = new Interval(L, U, var);
  else
    pred->intervals.push_back( new Interval_1D(L, U, var) );

  // Modify conflicting constraints i.e. multiple inequalities in same variable
  for (auto i = pred->intervals.begin(); i != pred->intervals.end(); ++i) {
    long L1 = (*i)->L;
    long U1 = (*i)->U;
    char v1 = (*i)->var;
    bool done = false;
    for (auto j = i+1; j != pred->intervals.end(); ++j) {
      long L2 = (*j)->L;
      long U2 = (*j)->U;
      char v2 = (*j)->var;
      if (v1 == v2) {
        if ((L1 <= L2 && U1 >= L2) || (L2 <= L1 && U2 >= L1)) {
          (*i)->L = std::max(L1, L2);
          (*i)->U = std::min(U1, U2);
          pred->intervals.erase(j);
          j--;
        } // This takes care of the case [L1,U1] = [L2,U2]
        else {
          (*i)->L = P_NEGINF;
          (*j)->U = P_NEGINF;
          done = true;
          break;
        } // In this case, the constraint should be an empty set
      }
    }
    if (done)
      break;
  }

  // Validate the constraints
  validate();

  // Sort interval_1D by variable name
  std::sort(pred->intervals.begin(), pred->intervals.end(), intervalcompare);
}


// P2 is a subset of P1
// Output vector is correct, and P1 and P2 don't change - verified
std::vector<Predicate*> Predicate::partitionsubsetPredicatePair(Predicate *P1, Predicate *P2) {

  std::vector<Predicate* > retval;

  // There could be variables in P2 which are not in P1 but not vice versa as P2 is subset of P1
  Predicate* tempconstraint = NULL;
  for (unsigned long j = 0; j < P2->pred->intervals.size(); j++) {
    
    char t = P2->pred->intervals[j]->var;
    long L2 = P2->pred->intervals[j]->L;
    long U2 = P2->pred->intervals[j]->U;
  
    unsigned long i = char_to_index(P1, t); 

    long L1, U1;
  
    if (i != P_INF) {  
      L1 = P1->pred->intervals[i]->L;
      U1 = P1->pred->intervals[i]->U;
    } // Variable found in P1 
    else {
      L1 = P_NEGINF;
      U1 = P_INF;
    } // Variable not found in P1

    Predicate* P3 = new Predicate(L1, deps::sub1_extend(L2), t); 
    Predicate* P4 = new Predicate(deps::add1_extend(U2) , U1, t); 
    P3->validate();

    
    // Copy constraints of P1 and tempconstraint in (both) P3 and P4
    for (unsigned long k = 0; k < P1->pred->intervals.size(); k++) {
      char var = P1->pred->intervals[k]->var;
      unsigned long L = P1->pred->intervals[k]->L;
      unsigned long U = P1->pred->intervals[k]->U;      
      // Doesn't matter if I add the same inequality again, or an obvious inequality, as addinequality takes care of that
      P3->addinequality(L,U,var); 
      P4->addinequality(L,U,var);
    }
    
    if (tempconstraint) { 
      for (unsigned long k = 0; k < tempconstraint->pred->intervals.size(); k++) {
        char var = tempconstraint->pred->intervals[k]->var;      
        unsigned long L = tempconstraint->pred->intervals[k]->L;
        unsigned long U = tempconstraint->pred->intervals[k]->U;
        P3->addinequality(L,U,var);
        P4->addinequality(L,U,var);
      }
    }      

    // Update retval
    retval.push_back(P3);
    retval.push_back(P4);

    // Update tempconstraint
    if (!tempconstraint)
      tempconstraint = new Predicate(L2, U2, t);
    else
      tempconstraint->addinequality(L2, U2, t);
  }

  // Remove empty predicates
  for (unsigned long i = 0; i < retval.size(); i++) {
    if (retval[i]->empty()) {
      retval.erase(retval.begin() + i);
      i--;
    }
  }
  return retval;

}

unsigned long Predicate::char_to_index (Predicate* P, char v) {
  for (unsigned long i = 0; i < P->pred->intervals.size(); i++) {
    if (P->pred->intervals[i]->var == v)
      return i;
  }
  return P_INF; // If not found, return P_INF
} 


Predicate* Predicate::intersection( Predicate* P1, Predicate* P2)  {
  Predicate* P3 = NULL;
  long L1, U1, L2, U2;
  char v1, v2;
  for (unsigned long i = 0, j = 0; (i < P1->pred->intervals.size()) || (j < P2->pred->intervals.size());
    i++, j++) {
      if (i >= P1->pred->intervals.size() ) {
        L2 = P2->pred->intervals[j]->L;
        U2 = P2->pred->intervals[j]->U;
        v2 = P2->pred->intervals[j]->var;
        if (!P3)
          P3 = new Predicate(L2, U2, v2);
        else
          P3->addinequality(L2, U2, v2);
        continue;
      }
      if (j >= P2->pred->intervals.size() ) {
        L1 = P1->pred->intervals[i]->L;
        U1 = P1->pred->intervals[i]->U;
        v1 = P1->pred->intervals[i]->var;
        if (!P3)
          P3 = new Predicate(L1, U1, v1);
        else
          P3->addinequality(L1, U1, v1);
        continue;
      }

      L1 = P1->pred->intervals[i]->L;
      U1 = P1->pred->intervals[i]->U;
      v1 = P1->pred->intervals[i]->var;
      L2 = P2->pred->intervals[j]->L;
      U2 = P2->pred->intervals[j]->U;
      v2 = P2->pred->intervals[j]->var;

      if (v1 < v2) {
        if (!P3)
          P3 = new Predicate(L1, U1, v1);
        else
          P3->addinequality(L1, U1, v1);
        j--;
        continue;
      }
      else if (v1 > v2) {
        if (!P3)
          P3 = new Predicate(L2, U2, v2);
        else
          P3->addinequality(L2, U2, v2);
        i--;
        continue;        
      }

      if (!P3)
        P3 = new Predicate(std::max(L1, L2), std::min(U1, U2), v1);
      else
        P3->addinequality(std::max(L1, L2), std::min(U1, U2), v1);
  }
  P3->validate();
  
  return P3;

}


}