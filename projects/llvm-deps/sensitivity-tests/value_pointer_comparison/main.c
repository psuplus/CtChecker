#include <stdio.h>
#include <stdlib.h>

struct KeyS {
  int k0;
  int k1;
  union {
    struct {
      int *f0;
      int f1;
    } s0;
    struct {
      int f0;
      int f1;
      int f2;
    } s1;
  } u;
};

// struct Data {
//   struct KeyS *f0;
//   int *f1;
// };

int regular_func(struct KeyS *a2, int a1);
// int regular_func(struct KeyS *a2, int a1) {
//   a2->k0 = 1;
//   a2->u.s1.f1 = a1;
//   return a2->u.s1.f2;
// }

int foo(struct KeyS *pkey, struct KeyS *notkey, int x) {
  // int i = 2;

  // struct Data *dataStruct = malloc(sizeof(struct Data));
  // dataStruct->f0 = key;
  // dataStruct->f1 = &i;

  if (regular_func(pkey, x)) {
  }

  if (notkey->k0) {
  }

  if (x) {
  }

  if (pkey->k0) {
  }

  // if (key->k0) {
  // }

  // if (regular_func(notkey, i)) {
  //   printf("hello\n");
  // }

  // regular_func(key, &x);
  // if (x) {
  //   printf("x\n");
  // }

  // if (key) {
  //   printf("hello\n");
  // }

  return 0;
}

int main(void) { return 0; }
