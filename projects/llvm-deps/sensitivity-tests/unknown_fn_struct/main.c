typedef struct {
  unsigned long * d;
  int top;                    /* Index of last used d +1. */
  /* The next are internal book keeping for bn_expand. */
  int dmax;                   /* Size of the d array. */
  int neg;                    /* one if the number is negative */
  int flags;
} BIGNUM;

int undefined_function(BIGNUM * a, int n);

int defined_function (BIGNUM * k) {

  if (k->top < 4)
    ;
  if (k->dmax)
    ;
  if (k->neg)
    ;
  if (k->flags)
    ;

  //if (undefined_function(k, 3))
  //;
}

int defined_function_2(BIGNUM * k) {
  if (k->top < 4)
    ;
  if (k->dmax)
    ;
  if (k->neg)
    ;
  if (k->flags)
    ;

  if (undefined_function(k, 3))
    ;
}


