void bar(int *k, int *l) { return; }

// void boo(int *k, int l) { *k = l; }

void foo(int key) {
  int m = 0, r;
  // int test;
  // test = key;
  // if (test) {
  // }

  int x;
  x = key;
  // r = key;
  // m = key;
  // int y;
  bar(&r, &x);
  bar(&x, &x);
  // bar(&m, &r);

  if (x) {
  }
  // if (m) {
  // }

  // bar(&x, m); // << Try uncommenting
  // bar(&r, x); // << Try uncommenting
  // if (r) {} // << Try uncommenting
  // if (m) {} // << Try uncommenting

  // bar(&m, r); // << Try uncommenting
}
