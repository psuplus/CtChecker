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

  if (k->top < 4) // Not tainted only k 0 tainted
    ;
  if (k->dmax) // Not tainted only k 0 tainted
    ;
  if (k->neg) // Not tainted only k 0 tainted
    ;
  if (k->flags) // Not tainted only k 0 tainted
    ;

  //if (undefined_function(k, 3))
  //;
}

int defined_function_2(BIGNUM * k) {
  if (k->top < 4) // Tainted due to passing through undefined signature
    ;
  if (k->dmax) // Tainted due to passing through undefined signature
    ;
  if (k->neg) // Tainted due to passing through undefined signature
    ;
  if (k->flags) // Tainted due to passing through undefined signature
    ;

  if (undefined_function(k, 3)) // Undefined signature taints all elements in k
    ;
}

int defined_function_3(BIGNUM * k) {
  if (undefined_function(k, 2)) // Tainted, k 0 is tainted so the result should be tainted
    ;
}
