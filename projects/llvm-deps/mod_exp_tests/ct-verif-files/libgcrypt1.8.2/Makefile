LEVEL=../../../../../

CC=$(LEVEL)Debug+Asserts/bin/clang
LD=$(LEVEL)Debug+Asserts/bin/llvm-link


CFLAGS= -isystem -I v4_4_include -O0 -emit-llvm -g

v4_test.bc: v4_4.bc
	$(LD) $^ -o $@

v4_test: v4_test.bc
	./run.sh $< results_with_source_v4.txt

v3_test.bc: v3_4.bc
	$(LD) $^ -o $@

v3_test: v3_test.bc
	./run.sh $< results_with_source_v3.txt

v2_test.bc: v2_4.bc
	$(LD) $^ -o $@

v2_test: v2_test.bc
	./run.sh $< results_with_source_v2.txt

esizetest.bc: esize.bc
	$(LD) $^ -o $@

esizetest: esizetest.bc
	./run.sh $< results_with_source_esize.txt

%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
