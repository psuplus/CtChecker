#include <stdio.h>
#include <stdlib.h>

struct KeyS {
  int k0;
  int k1;
};

struct Data {
  struct KeyS *f0;
  int *f1;
};

int regular_func(struct KeyS *a2, int a1);
int regular_func(struct KeyS *a2, int a1) { return a2->k1; }

int foo(struct KeyS *key, struct KeyS *notkey, int x) {
  int i = 2;

  struct Data *dataStruct = malloc(sizeof(struct Data));
  dataStruct->f0 = key;
  dataStruct->f1 = &i;

  if (regular_func(key, i)) {
    printf("hello\n");
  }

  if (regular_func(notkey, i)) {
    printf("hello\n");
  }

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
