#include "bn_local.h"
// #include <string.h>
// #include <assert.h>
int BN_ucmp_0(const BIGNUM *a, const BIGNUM *b, int pub_BRANCH0);
int BN_is_bit_set_0(const BIGNUM *a, int n, int pub_BRANCH0);
static int MOD_EXP_CTIME_COPY_FROM_PREBUF_0(BIGNUM *b, int top,
                                            unsigned char *buf, int idx,
                                            int window, int pub_BRANCH0);

// typedef struct bignum_ctx_stack {
//     /* Array of indexes into the bignum stack */
//     unsigned int *indexes;
//     /* Number of stack frames, and the size of the allocated array */
//     unsigned int depth, size;
// } BN_STACK;

// typedef struct bignum_pool_item {
//     /* The bignum values */
//     BIGNUM vals[16];
//     /* Linked-list admin */
//     struct bignum_pool_item *prev, *next;
// } BN_POOL_ITEM;

// typedef struct bignum_pool {
//     /* Linked-list admin */
//     BN_POOL_ITEM *head, *current, *tail;
//     /* Stack depth and allocation size */
//     unsigned used, size;
// } BN_POOL;

// struct bignum_ctx {
//     /* The bignum bundles */
//     BN_POOL pool;
//     /* The "stack frames", if you will */
//     BN_STACK stack;
//     /* The number of bignums currently assigned */
//     unsigned int used;
//     /* Depth of stack overflow */
//     int err_stack;
//     /* Block "gets" until an "end" (compatibility behaviour) */
//     int too_many;
//     /* Flags. */
//     int flags;
// };

// int BN_get_flags(const BIGNUM *b, int n)
// {
//     return b->flags & n;
// }

// int BN_is_odd(const BIGNUM *a)
// {
//     return (a->top > 0) && (a->d[0] & 1);
// }

// int BN_num_bits(const BIGNUM *a)
// {
//     int i = a->top - 1;
//     bn_check_top(a);

//     if (a->flags & BN_FLG_CONSTTIME) {
//         /*
//          * We assume that BIGNUMs flagged as CONSTTIME have also been expanded
//          * so that a->dmax is not leaking secret information.
//          *
//          * In other words, it's the caller's responsibility to ensure `a` has
//          * been preallocated in advance to a public length if we hit this
//          * branch.
//          *
//          */
//         return 0;//bn_num_bits_consttime(a);
//     }

//     if (BN_is_zero(a))
//         return 0;

//     return ((i * BN_BITS2) + BN_num_bits_word(a->d[i]));
// }

// int BN_is_zero(const BIGNUM *a)
// {
//     return a->top == 0;
// }

// static void ctxdbg(BN_CTX *ctx)
// {
//     unsigned int bnidx = 0, fpidx = 0;
//     BN_POOL_ITEM *item = ctx->pool.head;
//     BN_STACK *stack = &ctx->stack;
//     //fprintf(stderr, "(%16p): ", ctx);
//     while (bnidx < ctx->used) {
//         //fprintf(stderr, "%03x ", item->vals[bnidx++ % BN_CTX_POOL_SIZE].dmax);
//         if (!(bnidx % 16))
//             item = item->next;
//     }
//     //fprintf(stderr, "\n");
//     bnidx = 0;
//     //fprintf(stderr, "          : ");
//     while (fpidx < stack->depth) {
//         while (bnidx++ < stack->indexes[fpidx])
//             //fprintf(stderr, "    ");
//         //fprintf(stderr, "^^^ ");
//         bnidx++;
//         fpidx++;
//     }
//     //fprintf(stderr, "\n");
// }

// static BN_ULONG *bn_expand_internal(const BIGNUM *b, int words)
// {
//     BN_ULONG *a = NULL;

//     if (words > (INT_MAX / (4 * BN_BITS2))) {
//         //BNerr(BN_F_BN_EXPAND_INTERNAL, BN_R_BIGNUM_TOO_LONG);
//         return NULL;
//     }
//     if (BN_get_flags(b, BN_FLG_STATIC_DATA)) {
//         //BNerr(BN_F_BN_EXPAND_INTERNAL, BN_R_EXPAND_ON_STATIC_BIGNUM_DATA);
//         return NULL;
//     }
//     if (BN_get_flags(b, BN_FLG_SECURE))
//         a = OPENSSL_secure_zalloc(words * sizeof(*a));
//     else
//         a = OPENSSL_zalloc(words * sizeof(*a));
//     if (a == NULL) {
//         //BNerr(BN_F_BN_EXPAND_INTERNAL, ERR_R_MALLOC_FAILURE);
//         return NULL;
//     }
//     assert(b->top <= words);
//     if (b->top > 0)
//         memcpy(a, b->d, sizeof(*a) * b->top);

//     return a;
// }

// static void bn_free_d(BIGNUM *a, int clear)
// {
//     if (BN_get_flags(a, BN_FLG_SECURE))
//         OPENSSL_secure_clear_free(a->d, a->dmax * sizeof(a->d[0]));
//     else if (clear != 0)
//         OPENSSL_clear_free(a->d, a->dmax * sizeof(a->d[0]));
//     else
//         OPENSSL_free(a->d);
// }

// static const char *ctxdbg_cur = NULL;
// # define CTXDBG_ENTRY(str, ctx)  do { \
//                                 ctxdbg_cur = (str); \
//                                 fprintf(stderr,"Starting %s\n", ctxdbg_cur); \
//                                 ctxdbg(ctx); \
//                                 } while(0)

// # define CTXDBG_EXIT(ctx)        do { \
//                                 fprintf(stderr,"Ending %s\n", ctxdbg_cur); \
//                                 ctxdbg(ctx); \
//                                 } while(0)

// int BN_num_bits_word(BN_ULONG l)
// {
//     BN_ULONG x, mask;
//     int bits = (l != 0);

// #if BN_BITS2 > 32
//     x = l >> 32;
//     mask = (0 - x) & BN_MASK2;
//     mask = (0 - (mask >> (BN_BITS2 - 1)));
//     bits += 32 & mask;
//     l ^= (x ^ l) & mask;
// #endif

//     x = l >> 16;
//     mask = (0 - x) & BN_MASK2;
//     mask = (0 - (mask >> (BN_BITS2 - 1)));
//     bits += 16 & mask;
//     l ^= (x ^ l) & mask;

//     x = l >> 8;
//     mask = (0 - x) & BN_MASK2;
//     mask = (0 - (mask >> (BN_BITS2 - 1)));
//     bits += 8 & mask;
//     l ^= (x ^ l) & mask;

//     x = l >> 4;
//     mask = (0 - x) & BN_MASK2;
//     mask = (0 - (mask >> (BN_BITS2 - 1)));
//     bits += 4 & mask;
//     l ^= (x ^ l) & mask;

//     x = l >> 2;
//     mask = (0 - x) & BN_MASK2;
//     mask = (0 - (mask >> (BN_BITS2 - 1)));
//     bits += 2 & mask;
//     l ^= (x ^ l) & mask;

//     x = l >> 1;
//     mask = (0 - x) & BN_MASK2;
//     mask = (0 - (mask >> (BN_BITS2 - 1)));
//     bits += 1 & mask;

//     return bits;
// }

// int BN_abs_is_word(const BIGNUM *a, const BN_ULONG w)
// {
//     return ((a->top == 1) && (a->d[0] == w)) || ((w == 0) && (a->top == 0));
// }

// void BN_zero_ex(BIGNUM *a)
// {
//     a->neg = 0;
//     a->top = 0;
//     a->flags &= ~BN_FLG_FIXED_TOP;
// }

// static int BN_STACK_push(BN_STACK *st, unsigned int idx)
// {
//     if (st->depth == st->size) {
//         /* Need to expand */
//         unsigned int newsize =
//             st->size ? (st->size * 3 / 2) : 32;
//         unsigned int *newitems;

//         if (newitems == NULL) {
//             //BNerr(BN_F_BN_STACK_PUSH, ERR_R_MALLOC_FAILURE);
//             return 0;
//         }
//         if (st->depth)
//             memcpy(newitems, st->indexes, sizeof(*newitems) * st->depth);
//         //OPENSSL_free(st->indexes);
//         st->indexes = newitems;
//         st->size = newsize;
//     }
//     st->indexes[(st->depth)++] = idx;
//     return 1;
// }

// void BN_CTX_start(BN_CTX *ctx)
// {
//     CTXDBG_ENTRY("BN_CTX_start", ctx);
//     /* If we're already overflowing ... */
//     if (ctx->err_stack || ctx->too_many)
//         ctx->err_stack++;
//     /* (Try to) get a new frame pointer */
//     else if (!BN_STACK_push(&ctx->stack, ctx->used)) {
//         //BNerr(BN_F_BN_CTX_START, BN_R_TOO_MANY_TEMPORARY_VARIABLES);
//         ctx->err_stack++;
//     }
//     CTXDBG_EXIT(ctx);
// }

// static BIGNUM *BN_POOL_get(BN_POOL *p, int flag)
// {
//     BIGNUM *bn;
//     unsigned int loop;

//     /* Full; allocate a new pool item and link it in. */
//     if (p->used == p->size) {
//         BN_POOL_ITEM *item;

//         if ((item = OPENSSL_malloc(sizeof(*item))) == NULL) {
//             //BNerr(BN_F_BN_POOL_GET, ERR_R_MALLOC_FAILURE);
//             return NULL;
//         }
//         for (loop = 0, bn = item->vals; loop++ < 16; bn++) {
//             bn_init(bn);
//             if ((flag & 0x08) != 0)
//                 BN_set_flags(bn, 0x08);
//         }
//         item->prev = p->tail;
//         item->next = NULL;

//         if (p->head == NULL)
//             p->head = p->current = p->tail = item;
//         else {
//             p->tail->next = item;
//             p->tail = item;
//             p->current = item;
//         }
//         p->size += 16;
//         p->used++;
//         /* Return the first bignum from the new pool */
//         return item->vals;
//     }

//     if (!p->used)
//         p->current = p->head;
//     else if ((p->used % 16) == 0)
//         p->current = p->current->next;
//     return p->current->vals + ((p->used++) % 16);
// }

// BIGNUM *BN_CTX_get(BN_CTX *ctx)
// {
//     BIGNUM *ret;

//     CTXDBG_ENTRY("BN_CTX_get", ctx);
//     if (ctx->err_stack || ctx->too_many)
//         return NULL;
//     if ((ret = BN_POOL_get(&ctx->pool, ctx->flags)) == NULL) {
//         /*
//          * Setting too_many prevents repeated "get" attempts from cluttering
//          * the error stack.
//          */
//         ctx->too_many = 1;
//         //BNerr(BN_F_BN_CTX_GET, BN_R_TOO_MANY_TEMPORARY_VARIABLES);
//         return NULL;
//     }
//     /* OK, make sure the returned bignum is "zero" */
//     BN_zero(ret);
//     /* clear BN_FLG_CONSTTIME if leaked from previous frames */
//     ret->flags &= (~BN_FLG_CONSTTIME);
//     ctx->used++;
//     //CTXDBG_RET(ctx, ret);
//     return ret;
// }

// void bn_init(BIGNUM *a)
// {
//     static BIGNUM nilbn;

//     *a = nilbn;
//     bn_check_top(a);
// }

// int BN_MONT_CTX_set(BN_MONT_CTX *mont, const BIGNUM *mod, BN_CTX *ctx)
// {
//     int i, ret = 0;
//     BIGNUM *Ri, *R;

//     if (BN_is_zero(mod))
//         return 0;

//     BN_CTX_start(ctx);
//     if ((Ri = BN_CTX_get(ctx)) == NULL)
//         goto err;
//     R = &(mont->RR);            /* grab RR as a temp */
//     if (!BN_copy(&(mont->N), mod))
//         goto err;               /* Set N */
//     if (BN_get_flags(mod, BN_FLG_CONSTTIME) != 0)
//         BN_set_flags(&(mont->N), BN_FLG_CONSTTIME);
//     mont->N.neg = 0;

// #ifdef MONT_WORD
//     {
//         BIGNUM tmod;
//         BN_ULONG buf[2];

//         bn_init(&tmod);
//         tmod.d = buf;
//         tmod.dmax = 2;
//         tmod.neg = 0;

//         if (BN_get_flags(mod, BN_FLG_CONSTTIME) != 0)
//             BN_set_flags(&tmod, BN_FLG_CONSTTIME);

//         mont->ri = (BN_num_bits(mod) + (BN_BITS2 - 1)) / BN_BITS2 * BN_BITS2;

// # if defined(OPENSSL_BN_ASM_MONT) && (BN_BITS2<=32)
//         /*
//          * Only certain BN_BITS2<=32 platforms actually make use of n0[1],
//          * and we could use the #else case (with a shorter R value) for the
//          * others.  However, currently only the assembler files do know which
//          * is which.
//          */

//         BN_zero(R);
//         if (!(BN_set_bit(R, 2 * BN_BITS2)))
//             goto err;

//         tmod.top = 0;
//         if ((buf[0] = mod->d[0]))
//             tmod.top = 1;
//         if ((buf[1] = mod->top > 1 ? mod->d[1] : 0))
//             tmod.top = 2;

//         if (BN_is_one(&tmod))
//             BN_zero(Ri);
//         else if ((BN_mod_inverse(Ri, R, &tmod, ctx)) == NULL)
//             goto err;
//         if (!BN_lshift(Ri, Ri, 2 * BN_BITS2))
//             goto err;           /* R*Ri */
//         if (!BN_is_zero(Ri)) {
//             if (!BN_sub_word(Ri, 1))
//                 goto err;
//         } else {                /* if N mod word size == 1 */

//             if (bn_expand(Ri, (int)sizeof(BN_ULONG) * 2) == NULL)
//                 goto err;
//             /* Ri-- (mod double word size) */
//             Ri->neg = 0;
//             Ri->d[0] = BN_MASK2;
//             Ri->d[1] = BN_MASK2;
//             Ri->top = 2;
//         }
//         if (!BN_div(Ri, NULL, Ri, &tmod, ctx))
//             goto err;
//         /*
//          * Ni = (R*Ri-1)/N, keep only couple of least significant words:
//          */
//         mont->n0[0] = (Ri->top > 0) ? Ri->d[0] : 0;
//         mont->n0[1] = (Ri->top > 1) ? Ri->d[1] : 0;
// # else
//         BN_zero(R);
//         if (!(BN_set_bit(R, BN_BITS2)))
//             goto err;           /* R */

//         buf[0] = mod->d[0];     /* tmod = N mod word size */
//         buf[1] = 0;
//         tmod.top = buf[0] != 0 ? 1 : 0;
//         /* Ri = R^-1 mod N */
//         if (BN_is_one(&tmod))
//             BN_zero(Ri);
//         else if ((BN_mod_inverse(Ri, R, &tmod, ctx)) == NULL)
//             goto err;
//         if (!BN_lshift(Ri, Ri, BN_BITS2))
//             goto err;           /* R*Ri */
//         if (!BN_is_zero(Ri)) {
//             if (!BN_sub_word(Ri, 1))
//                 goto err;
//         } else {                /* if N mod word size == 1 */

//             if (!BN_set_word(Ri, BN_MASK2))
//                 goto err;       /* Ri-- (mod word size) */
//         }
//         if (!BN_div(Ri, NULL, Ri, &tmod, ctx))
//             goto err;
//         /*
//          * Ni = (R*Ri-1)/N, keep only least significant word:
//          */
//         mont->n0[0] = (Ri->top > 0) ? Ri->d[0] : 0;
//         mont->n0[1] = 0;
// # endif
//     }
// #else                           /* !MONT_WORD */
//     {                           /* bignum version */
//         mont->ri = BN_num_bits(&mont->N);
//         BN_zero(R);
//         if (!BN_set_bit(R, mont->ri))
//             goto err;           /* R = 2^ri */
//         /* Ri = R^-1 mod N */
//         if ((BN_mod_inverse(Ri, R, &mont->N, ctx)) == NULL)
//             goto err;
//         if (!BN_lshift(Ri, Ri, mont->ri))
//             goto err;           /* R*Ri */
//         if (!BN_sub_word(Ri, 1))
//             goto err;
//         /*
//          * Ni = (R*Ri-1) / N
//          */
//         if (!BN_div(&(mont->Ni), NULL, Ri, &mont->N, ctx))
//             goto err;
//     }
// #endif

//     /* setup RR for conversions */
//     BN_zero(&(mont->RR));
//     if (!BN_set_bit(&(mont->RR), mont->ri * 2))
//         goto err;
//     if (!BN_mod(&(mont->RR), &(mont->RR), &(mont->N), ctx))
//         goto err;

//     for (i = mont->RR.top, ret = mont->N.top; i < ret; i++)
//         mont->RR.d[i] = 0;
//     mont->RR.top = ret;
//     mont->RR.flags |= BN_FLG_FIXED_TOP;

//     ret = 1;
//  err:
//     BN_CTX_end(ctx);
//     return ret;
// }

// BIGNUM *BN_copy(BIGNUM *a, const BIGNUM *b)
// {
//     int bn_words;

//     bn_check_top(b);

//     bn_words = BN_get_flags(b, BN_FLG_CONSTTIME) ? b->dmax : b->top;

//     if (a == b)
//         return a;
//     if (bn_wexpand(a, bn_words) == NULL)
//         return NULL;

//     if (b->top > 0)
//         memcpy(a->d, b->d, sizeof(b->d[0]) * bn_words);

//     a->neg = b->neg;
//     a->top = b->top;
//     a->flags |= b->flags & BN_FLG_FIXED_TOP;
//     bn_check_top(a);
//     return a;
// }

// BIGNUM *bn_wexpand(BIGNUM *a, int words)
// {
//     return (words <= a->dmax) ? a : bn_expand2(a, words);
// }

// BIGNUM *bn_expand2(BIGNUM *b, int words)
// {
//     if (words > b->dmax) {
//         BN_ULONG *a = bn_expand_internal(b, words);
//         if (!a)
//             return NULL;
//         if (b->d != NULL)
//             bn_free_d(b, 1);
//         b->d = a;
//         b->dmax = words;
//     }

//     return b;
// }

// int BN_set_bit(BIGNUM *a, int n)
// {
//     int i, j, k;

//     if (n < 0)
//         return 0;

//     i = n / BN_BITS2;
//     j = n % BN_BITS2;
//     if (a->top <= i) {
//         if (bn_wexpand(a, i + 1) == NULL)
//             return 0;
//         for (k = a->top; k < i + 1; k++)
//             a->d[k] = 0;
//         a->top = i + 1;
//         a->flags &= ~BN_FLG_FIXED_TOP;
//     }

//     a->d[i] |= (((BN_ULONG)1) << j);
//     bn_check_top(a);
//     return 1;
// }

// int BN_div(BIGNUM *dv, BIGNUM *rm, const BIGNUM *num, const BIGNUM *divisor,
//            BN_CTX *ctx)
// {
//     int ret;

//     if (BN_is_zero(divisor)) {
//         //BNerr(BN_F_BN_DIV, BN_R_DIV_BY_ZERO);
//         return 0;
//     }

//     /*
//      * Invalid zero-padding would have particularly bad consequences so don't
//      * just rely on bn_check_top() here (bn_check_top() works only for
//      * BN_DEBUG builds)
//      */
//     if (divisor->d[divisor->top - 1] == 0) {
//         //BNerr(BN_F_BN_DIV, BN_R_NOT_INITIALIZED);
//         return 0;
//     }

//     ret = bn_div_fixed_top(dv, rm, num, divisor, ctx);

//     if (ret) {
//         if (dv != NULL)
//             bn_correct_top(dv);
//         if (rm != NULL)
//             bn_correct_top(rm);
//     }

//     return ret;
// }