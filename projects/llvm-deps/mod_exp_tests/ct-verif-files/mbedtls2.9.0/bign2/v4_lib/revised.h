#define MBEDTLS_MPI_CHK_0(f) if( ( ret = f ) != 0 ) goto cleanup;

#define MBEDTLS_MPI_CHK_1(f) ret = f;

void memcpy_0( mbedtls_mpi *_RR, mbedtls_mpi *RR );
void memset_uint_0(mbedtls_mpi_uint *p, int val);
void memcpy_uint_0( mbedtls_mpi_uint *p1, mbedtls_mpi_uint *p2 );

//int mbedtls_mpi_cmp_mpi_0( const mbedtls_mpi *X, const mbedtls_mpi *Y, int pub_BRANCH0 );
//int mbedtls_mpi_cmp_int_0( const mbedtls_mpi *X, mbedtls_mpi_sint z, int pub_branch0 );
//int mbedtls_mpi_mod_mpi_0( mbedtls_mpi *R, const mbedtls_mpi *A, const mbedtls_mpi *B, int pub_branch0 );
