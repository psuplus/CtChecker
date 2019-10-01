#include <stdio.h>
/**/int dummy = 0;
#if !defined(MBEDTLS_CONFIG_FILE)
#include "v4_lib/config.h"
#else
#include MBEDTLS_CONFIG_FILE
#endif

#if defined(MBEDTLS_BIGNUM_C)

#include "v4_lib/bignum.h"
#include "v4_lib/bn_mul.h"
#include "v4_lib/revised.h"
#include <string.h>

#if defined(MBEDTLS_PLATFORM_C)
#include "v4_lib/platform.h"
#else
#include <stdio.h>
#include <stdlib.h>
#define mbedtls_printf     printf
#define mbedtls_calloc    calloc
#define mbedtls_free       free
#endif

/* Implementation that should never be optimized out by the compiler */
static void mbedtls_mpi_zeroize( mbedtls_mpi_uint *v, size_t n ) {
	volatile mbedtls_mpi_uint *p = v; while( n-- ) *p++ = 0;
}

#define ciL    (sizeof(mbedtls_mpi_uint))         /* chars in limb  */
#define biL    (ciL << 3)               /* bits  in limb  */
#define biH    (ciL << 2)               /* half limb size */

#define MPI_SIZE_T_MAX  ( (size_t) -1 ) /* SIZE_T_MAX is not standard */

/*
 * Convert between bits/chars and number of limbs
 * Divide first in order to avoid potential overflows
 */
#define BITS_TO_LIMBS(i)  ( (i) / biL + ( (i) % biL != 0 ) )
#define CHARS_TO_LIMBS(i) ( (i) / ciL + ( (i) % ciL != 0 ) )

#endif

int mbed ( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *E, const mbedtls_mpi *N, mbedtls_mpi *_RR, int pub_branch3, pub_branch34, int pub_branch36 )
{
	int ret;
	size_t wbits, wsize, one = 1;
	size_t i, j, nblimbs;
	size_t bufsize, nbits;
	mbedtls_mpi_uint ei, mm, state;
	mbedtls_mpi RR, T, W[ 2 << MBEDTLS_MPI_WINDOW_SIZE ], Apos;
	int neg;
	
	i = mbedtls_mpi_bitlen_0( E, pub_branch3 );
	/*
	 * process the remaining bits
	 */
	for( i = 0; i < nbits; i++ )
	{
	
		wbits <<= 1;
	}
	
}


