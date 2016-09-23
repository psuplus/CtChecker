#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
  int x;
  int y;
} context;

// the program analysis should return the first branch condition, since its
// both tainted and untrusted
int main() {
  int key = 6; // pretend this is the secret key. It is tainted.
  int plain = 10; // pretend this is the plaintext given by user. It is untrusted.
  // int N = 15;     // some constant, neither tainted, nor untrusted.
  // int x=0;
  context c;

  // if (key < plain)  // we should identify this branch condition.
  //    x = 1;
  // if (key < N)      // this branch condition is tainted, but not untrusted.
  //    x = 2;
  // if (plain < N)    // this branch is untrusted, but not tainted.
  //    x = 3;
  c.x = key; // tainted
  c.y = 0;   // not tainted
  plain = c.y; // not tainted
  // if (plain < c.y)  // this branch is untrusted, but not tainted.
  //   ; 
}
