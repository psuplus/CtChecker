/*
 * Copyright (c) 2016 Thomas Pornin <pornin@bolet.org>
 *
 * Permission is hereby granted, free of charge, to any person obtaining 
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be 
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "include/inner.h"
int dummy;
/* see inner.h */
void
br_i32_modpow (uint32_t *x,
	const unsigned char *e, size_t elen,
	const uint32_t *m, uint32_t m0i, uint32_t *t1, uint32_t *t2, uint32_t public_0,uint32_t public_1,uint32_t public_2)
{
	size_t mlen;
	uint32_t k;

	/*
	 * 'mlen' is the length of m[] expressed in bytes (including
	 * the "bit length" first field).
	 */
	mlen = ((m[0] + 63) >> 5) * sizeof m[0];

	/*
	 * Throughout the algorithm:
	 * -- t1[] is in Montgomery representation; it contains x, x^2,
	 * x^4, x^8...
	 * -- The result is accumulated, in normal representation, in
	 * the x[] array.
	 * -- t2[] is used as destination buffer for each multiplication.
	 *
	 * Note that there is no need to call br_i32_from_monty().
	 */
	memcpy(t1, x, mlen);
	br_i32_to_monty(t1, m, public_0, public_1, public_2);
	br_i32_zero(x, m[0]);
	x[1] = 1;
	for (k = 0; k < ((uint32_t)elen << 3); k ++) {
		uint32_t ctl;

		ctl = (e[elen - 1 - (k >> 3)] >> (k & 7)) & 1;
		br_i32_montymul(t2, x, t1, m, m0i);
		CCOPY(ctl, x, t2, mlen);
		br_i32_montymul(t2, t1, t1, m, m0i);
		memcpy(t1, t2, mlen);
	}
}

// /**********************/
// #include <smack.h>
// #include "../../ct-verif.h"

// #define ARRAY_SIZE 32
// static uint32_t public_0;static uint32_t public_1;static uint32_t public_2;
// void
// fragment_wrapper (uint32_t *x,
//                  const unsigned char *e,
//                  size_t elen,
//                  const uint32_t *m,
//                  uint32_t m0i,
//                  uint32_t *t1,
//                  uint32_t *t2,
// 				 uint32_t public_0) {

// 	public_in(__SMACK_value(public_0));
// 	public_0 = public_0;
//     public_1 = public_0;
//     public_2 = public_0;

//     public_in(__SMACK_value(x));
//     public_in(__SMACK_value(e));
//     public_in(__SMACK_value(elen));
//     public_in(__SMACK_value(m));
//     public_in(__SMACK_value(m0i));
//     public_in(__SMACK_value(t1));
//     public_in(__SMACK_value(t2));

//     public_in(__SMACK_values(x,ARRAY_SIZE));
//     /* show tainted variables *e */
//     //public_in(__SMACK_values(e,ARRAY_SIZE));
//     public_in(__SMACK_values(m,ARRAY_SIZE));

//     public_in(__SMACK_values(t1,ARRAY_SIZE));
//     public_in(__SMACK_values(t2,ARRAY_SIZE));

//     br_i32_modpow_algorithm(x,e,elen,m,m0i,t1,t2,public_0, public_1, public_2);
// }
// /**********************/
// /* link down here to keep code aligned with original */
// #include "i32_tmont.c"
// #include "i32_montmul.c"
// #include "i32_muladd.c"

// #include "i32_add.c"
// #include "i32_bitlen.c"
// #include "i32_decmod.c"
// #include "i32_decode.c"
// #include "i32_decred.c"
// #include "i32_div32.c"
// #include "i32_encode.c"
// #include "i32_fmont.c"
// #include "i32_iszero.c"
// #include "i32_mulacc.c"
// #include "i32_ninv32.c"
// // #include "i32_reduce.c"
// #include "i32_sub.c"
