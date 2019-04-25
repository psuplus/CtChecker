/*
 * Code simplified from openssl. Somehow, top gets tainted in the PREFBUF function 
 */
int dummy = 0;
#include <stdlib.h>

struct bignum_st {
    long *d;                /* Pointer to an array of 'BN_BITS2' bit
                                 * chunks. */
    int top;                    /* Index of last used d +1. */
    /* The next are internal book keeping for bn_expand. */
    int dmax;                   /* Size of the d array. */
    int neg;                    /* one if the number is negative */
    int flags;
};

typedef struct bignum_st BIGNUM;

static int MOD_EXP_CTIME_COPY_FROM_PREBUF(BIGNUM *b, int top,
                                          unsigned char *buf, int idx,
                                          int window)
{
    int i, j;
    int width = 1 << window;


    int xstride = 1 << (window - 2);

    i = idx >> (window - 2);        
    for (i = 0; i < top; i++) {    // should not be a positive
    }

    return 1;
}

int BN_mod_exp_mont_consttime_algorithm(BIGNUM *rr, const BIGNUM *a, const BIGNUM *p,
                                        const BIGNUM *m)
{
    int i, bits, ret = 0, window, wvalue;
    int top; 
    unsigned char *powerbufFree = NULL;
    int powerbufLen = 0;
    unsigned char *powerbuf = NULL;
    BIGNUM tmp, am;

    top = m->top;
    if (top == 0)
        ;

    wvalue = p->d[0];
    MOD_EXP_CTIME_COPY_FROM_PREBUF(&am, top, powerbuf, wvalue, window);
    return (ret);
}
