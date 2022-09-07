CC=../../../../Debug+Asserts/bin/clang
LD=../../../../Debug+Asserts/bin/llvm-link

FULL_BC=
FULL_LIB+=mpi/ec-ed25519.c
FULL_LIB+=mpi/mpi-add.c
FULL_LIB+=mpi/mpi-bit.c
FULL_LIB+=mpi/mpi-cmp.c
FULL_LIB+=mpi/mpicoder.c
FULL_LIB+=mpi/mpi-div.c
FULL_LIB+=mpi/mpi-gcd.c
FULL_LIB+=mpi/mpih-div.c
FULL_LIB+=mpi/mpih-mul.c
FULL_LIB+=mpi/mpi-inline.c
FULL_LIB+=mpi/mpi-inv.c
FULL_LIB+=mpi/mpi-mod.c
FULL_LIB+=mpi/mpi-mpow.c
FULL_LIB+=mpi/mpi-mul.c
FULL_LIB+=mpi/mpi-pow.c
FULL_LIB+=mpi/mpi-scan.c
FULL_LIB+=mpi/mpiutil.c

FULL_SRC=$(FULL_LIB:.c=.bc)

MIN_LIB+=mpi/mpi-pow.c
MIN_LIB+=mpi/mpiutil.c
MIN_SRC=$(MIN_LIB:.c=.bc)

CFLAGS= -isystem include -O0 -emit-llvm -g
LDFLAGS=

all: full min

full.bc: $(FULL_SRC)
	$(LD) $(LDFLAGS)  $^ -o $@

min.bc: $(MIN_SRC)
	$(LD) $(LDFLAGS)  $^ -o $@

%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) *.bc
	$(RM) mpi/*.bc