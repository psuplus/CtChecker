typedef unsigned int mpi_limb_t;
typedef mpi_limb_t *mpi_ptr_t;
struct gcry_mpi
{
  int alloced;         /* Array size (# of allocated limbs). */
  int nlimbs;          /* Number of valid limbs. */
  int sign;	       /* Indicates a negative number and is also used
		          for opaque MPIs to store the length.  */
  unsigned int flags; /* Bit 0: Array to be allocated in secure memory space.*/
                      /* Bit 2: The limb is a pointer to some m_alloced data.*/
                      /* Bit 4: Immutable MPI - the MPI may not be modified.  */
                      /* Bit 5: Constant MPI - the MPI will not be freed.  */
  mpi_limb_t *d;      /* Array with the limbs */
};
typedef struct gcry_mpi *gcry_mpi_t;

static int SP8[64] = {
    0x10001040, 0x00001000, 0x00040000, 0x10041040, 0x10000000, 0x10001040,
    0x00000040, 0x10000000, 0x00040040, 0x10040000, 0x10041040, 0x00041000,
    0x10041000, 0x00041040, 0x00001000, 0x00000040, 0x10040000, 0x10000040,
    0x10001000, 0x00001040, 0x00041000, 0x00040040, 0x10040040, 0x10041000,
    0x00001040, 0x00000000, 0x00000000, 0x10040040, 0x10000040, 0x10001000,
    0x00041040, 0x00040000, 0x00041040, 0x00040000, 0x10041000, 0x00001000,
    0x00000040, 0x10040040, 0x00001000, 0x00041040, 0x10001000, 0x00000040,
    0x10000040, 0x10040000, 0x10040040, 0x10000000, 0x00040000, 0x10001040,
    0x00000000, 0x10041040, 0x00040040, 0x10000040, 0x10040000, 0x10001000,
    0x10001040, 0x00000000, 0x10041040, 0x00041000, 0x00041000, 0x00001040,
    0x00001040, 0x00040040, 0x10000000, 0x10041000};

static int PUB_ARR[16] = {0x10001040, 0x00001000, 0x00040000, 0x10041040,
                          0x10000000, 0x10001040, 0x00000040, 0x10000000,
                          0x00040040, 0x10040000, 0x10041040, 0x00041000,
                          0x10041000, 0x00041040, 0x00001000, 0x00000040};

void foo(long sec, long pub, long val, gcry_mpi_t expo) {
  mpi_ptr_t ep = expo->d;
  int j = ep[pub];
  int k = expo->d[pub];
  int l = expo->d[sec];

  int *x = &SP8;
  int y  = x[pub];

  int e = SP8[0];
  int f = SP8[10];
  int a = SP8[pub];
  int b = SP8[pub + 5];
  int c = SP8[sec];     // Cache side-channel
  int d = SP8[sec + 5]; // Cache side-channel
  int g = x[0];
  int h = x[10];
  int i = x[sec];       // Cache side-channel

  SP8[0] = val;
  SP8[10] = val;
  SP8[pub] = val;
  SP8[pub + 5] = val;
  SP8[sec] = val;     // Cache side-channel
  SP8[sec + 5] = val; // Cache side-channel

  PUB_ARR[1] = val;
  PUB_ARR[pub] = val;
  PUB_ARR[sec] = val; // Cache side-channel
  PUB_ARR[a] = val;   // Cache side-channel
  PUB_ARR[y] = val;

  if(a)
  ;
  if(y)
  ;
}
