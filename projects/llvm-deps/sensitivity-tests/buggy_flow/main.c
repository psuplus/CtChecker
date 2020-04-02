void bar(int *k, int l)
{
    *k = l;
}

void foo()
{
  int key;
  int m, r;

  int test = key;
  if (test) {}
  
  int x;
  if (x) {}
  // if (r) {} // << Try uncommenting 
  // if (m) {} // << Try uncommenting 

  bar(&r, x); // << Try uncommenting 
  bar(&x, m); // << Try uncommenting 
  // bar(&m, r); // << Try uncommenting 
  x = key;
}