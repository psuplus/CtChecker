#include <stdlib.h>

struct KeyS {
  int *k0;
  int *k1;
};

struct Data {
  struct KeyS *f0;
  int *f1;
};

void regular_func(struct Data *a2);
void regular_func(struct Data *a2) { return; }

int foo(struct KeyS *key) {
  int i = 2;

  struct Data *dataStruct = malloc(sizeof(struct Data));
  dataStruct->f0 = key;
  dataStruct->f1 = &i;

  // if (dataStruct->f0) {
  //   ;
  // }
  regular_func(dataStruct);

  return 0;
}

int main(void) { return 0; }
