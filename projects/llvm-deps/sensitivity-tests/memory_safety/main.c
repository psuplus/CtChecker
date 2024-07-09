#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *data;
  int size;
} S;

int foo(S *A) {
  if (A->size)
    ; // do something
  if (A->data[5])
    ; // do something

  int copy[A->size];
  for (int i = 0; i < A->size; i++) {
    copy[i] = A->data[i];
  }

  if (copy[0])
    ; // do something

  int bad[A->size];
  for (int j = 0; j < A->size * 2; j++) {
    if (bad[j]) {
      // printf("%d\n", a[0]);
      ; // do something
    }
  }

  return 0;
}
