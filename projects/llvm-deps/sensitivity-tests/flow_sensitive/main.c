int dummy_func(int *dum) { return *dum + 1; }
int dummy_func2(int *dum) { return 23; }

int func(int br_arg) {

  if (dummy_func(&br_arg))
    ;
  if (dummy_func2(&br_arg))
    ;
  if (dummy_func(&br_arg))
    ;

  return 0;
}
