#include <stdlib.h>

typedef struct
{
  int *a;
  int *b;
} S;
typedef struct
{
  int *a;
  int *b;
} H;

int* dummy_func(S *X, H *Y) {
  // return Y->b;
  // S k = *X;
  // if (k.b != 0) {
  //   return NULL;
  // }
  if (X->b != 0) {
    return X->b;
    // return NULL;
  }
  return (void*)0xFFFFEEEE;
}

int* func(S* A, H *B)
// int* func()
{
  // S tmp = *A;
  // tmp.a = NULL;
  // tmp.b = NULL;
  // S* C = &tmp;
  // S* A = (S*)malloc(sizeof(S));
  // int* bits;
  // if (A->b != 0) {
  //   bits = A->a;
  // } else {
  //   bits = NULL;
  // }
  // int* bits = dummy_func(A);
  // int* bits = A->b;
  // S *C = (S*)malloc(sizeof(S));
  // C->b = A->b;
  // if (dummy_func(C, B) == 0) {
    // return A->a;
  // }
  if (A->a) {
    return B->a;
  }
  return (void *)0;
}
