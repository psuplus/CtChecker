int dummy_func(int *dum) {
  return *dum + 1;
}

int func(int arg, int br_arg)
{
  int *a = &br_arg;
  int bits;
  
  bits = dummy_func(a);
  if (bits == 0) {
    return arg;
  }

  return 0;
}
