#ifndef INTERVALS_H_
#define INTERVALS_H_


#include <climits>
#include<iostream>


#define P_INF LONG_MAX 
#define P_NEGINF LONG_MIN

class Interval_1D {
    public:
        Interval_1D(long l, long u, char V) { 
            var = V;
            if (l <= u) {
                L = l;
                U = u;
            }
            else
            {
                L = P_NEGINF;
                U = P_NEGINF;
            }
        }
        ~Interval_1D() { }
        
        long L;
        long U;
        char var;
};

class Interval
{
public: 
    Interval(long L, long U, char var) {
        intervals = new Interval_1D(L,U,var) ; 
    }    
    ~Interval() { }

    Interval_1D* intervals;
};


#endif 