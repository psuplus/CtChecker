#include <stdlib.h>

struct data {
  int a;
  // union {
  //   struct {
  //     int p1;
  //     int p2;
  //   } path;
  //   struct {
  //     const int *type;
  //     const int *dir;
  //     const int *dev;
  //     unsigned long flags;
  //     int need_dev;
  //   } mount;
  // } param;
  int b;
};

// int key = 11;

// __attribute__((always_inline))
// int bar(int c);
// __attribute__((always_inline))
int foo(struct data *d) { return d->a; }
// int boo(struct data *e) { return e->b; }

// int moo(int m, struct data *f) { return foo(f); }

int main_function(struct data *key) {
  // struct data nokey;
  // struct data *key = malloc(sizeof(struct data));
  // if (bar(key.a))
  //   ;
  // bar(nokey.b);
  // nokey->a = 5;
  // key->b = 3;
  // if (foo(nokey))
  // int a = 3, b = 5, c = 6, d;
  // if (a == 5)
  //   ;
  // struct data dd;
  // dd.param.path.p2 = key;
  if (foo(key))
    ;
  // if (moo(1, nokey))
  ;
  // if (boo(key))
  //   ;
  // if (boo(&nokey))
  //   ;
  // // boo(key);
  // int wl = foo(key);
  // if (wl)
  //   ;
  // int next = wl;
  // if (next)
  //   ;
  return 0;
}
