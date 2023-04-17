LEVEL=../../../../../

CC=$(LEVEL)Debug+Asserts/bin/clang
LD=$(LEVEL)Debug+Asserts/bin/llvm-link


CFLAGS= -isystem -I v4_4_include -O0 -emit-llvm -g

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
FULL_LIB+=mpi/mpi-scan.c
FULL_LIB+=mpi/mpiutil.c

FULL_SRC=$(FULL_LIB:.c=.bc)

v4_test.bc: v4.bc
	$(LD) $^ -o $@

v4_test_all.bc: v4.bc $(FULL_SRC)
	$(LD) $^ -o $@

v4_test: v4_test.bc
	./run.sh $< results_with_source_v4.txt

v3_test.bc: v3.bc
	$(LD) $^ -o $@

v3_test_all.bc: v3.bc $(FULL_SRC)
	$(LD) $^ -o $@

v3_test: v3_test.bc
	./run.sh $< results_with_source_v3.txt

v2_test.bc: v2.bc
	$(LD) $^ -o $@

v2_test_all.bc: v2.bc $(FULL_SRC)
	$(LD) $^ -o $@

v2_test: v2_test.bc
	./run.sh $< results_with_source_v2.txt

v1_test.bc: v1.bc
	$(LD) $^ -o $@

v1_test_all.bc: v1.bc $(FULL_SRC)
	$(LD) $^ -o $@

v1_test: v1_test.bc
	./run.sh $< results_with_source_v1.txt

esizetest.bc: esize.bc
	$(LD) $^ -o $@

esizetest: esizetest.bc
	./run.sh $< results_with_source_esize.txt

%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -Iinclude

clean:
	rm *.bc
