#include "Constraints/PredicatedConstraints.h"
#include<iostream>
#include<vector>
#include "Constraints/Intervals.h"
#include <algorithm>

void NonOverlappingConstraints(std::vector<Predicate* >& P) {
    long unsigned i,j;
    for (i = 0; i < P.size(); i++) {
        for (j = i + 1; j < P.size(); j++) {
            if (doPredicateOverlap(P[i], P[j]) ) {
                int* flag = new int(0);
                P.push_back(PredicatePartition(P[i],P[j], flag));
            }
        }
    }
    
    // Sort the constraints
    std::sort (P.begin(), P.end(), Compare);

    // Remove the empty predicates
    for (i = 0; i < P.size(); i++) {
        if (isPredicateEmpty(P[i])) {
            P.erase(P.begin() + i);
            i--;
        }
    }
}


bool doPredicateOverlap (Predicate* P1, Predicate* P2) {

    // Check if Predicates are empty!
    if (isPredicateEmpty(P1) || isPredicateEmpty(P2)) 
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


Predicate* PredicatePartition (Predicate* P1, Predicate* P2, int* flag ) {
    
    long L1, L2, U1, U2, L3, U3;
    L1 = P1->pred->intervals->L;
    U1 = P1->pred->intervals->U;
    L2 = P2->pred->intervals->L;
    U2 = P2->pred->intervals->U;  

    // P3 = intersection(P1,P2)
    Predicate* P3 = new Predicate(std::max(L1,L2), std::min(U1,U2), P1->pred->intervals->var );
    L3 = P3->pred->intervals->L;
    U3 = P3->pred->intervals->U;    

    // Checks for infinite cases
    if (L1 <= L2 && U1 < U2) {
        *flag = 0;
        P1->pred->intervals->U = sub1_extend(L3);
        P2->pred->intervals->L = add1_extend(U3);
    }
    else if (L1 <= L2 && U1 >= U2) {
        *flag = 1;
        P3->pred->intervals->U = P1->pred->intervals->U;
        P1->pred->intervals->U = sub1_extend(L2);
        P3->pred->intervals->L = add1_extend(U2);        
    }
    else if (L2 < L1 && U2 < U1) {
        *flag = 0;
        P2->pred->intervals->U = sub1_extend(L3);
        P1->pred->intervals->L = add1_extend(U3);
    }
    else {
        *flag = -1;
        P3->pred->intervals->U = P2->pred->intervals->U;
        P2->pred->intervals->U = sub1_extend(L1);
        P3->pred->intervals->L = add1_extend(U1);              
    }

    // Check if any predicate has become empty;
    validPredicate(P1);
    validPredicate(P2);
    validPredicate(P3);

    return P3;
}

void validPredicate (Predicate* P) {
    bool b1, b2;
    b1 = (P->pred->intervals->L > P->pred->intervals->U) ;
    b2 = (P->pred->intervals->L == P_INF) && (P->pred->intervals->U == P_INF) ;
    if (b1 || b2) {
        P->pred->intervals->L = P_NEGINF;
        P->pred->intervals->U = P_NEGINF;        
    }
}

long add1_extend(long x) {
    return (x == P_INF) ? P_INF : (x+1) ;
}

long sub1_extend(long x) {
    return (x == P_NEGINF) ? P_NEGINF : (x-1) ;
}

bool isPredicateEmpty (Predicate* P) {
    return (P->pred->intervals->L == P_NEGINF && P->pred->intervals->U == P_NEGINF) ;
}

bool Compare (Predicate* P1, Predicate* P2) { 
    if (P1->pred->intervals->var != P2->pred->intervals->var)
        return (P1->pred->intervals->var < P2->pred->intervals->var) ;   
    else
        return (P1->pred->intervals->L < P2->pred->intervals->L) ; 
     
}