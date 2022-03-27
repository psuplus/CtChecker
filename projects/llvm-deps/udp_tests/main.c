void bar() { return; }

int foo(int key) {
  if (key > 3)
    bar();
  return 0;
}
