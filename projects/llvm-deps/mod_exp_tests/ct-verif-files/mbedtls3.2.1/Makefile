LEVEL=../../../../../

CC=$(LEVEL)Debug+Asserts/bin/clang
LD=$(LEVEL)Debug+Asserts/bin/llvm-link
NM=$(LEVEL)Debug+Asserts/bin/llvm-nm

CFLAGS= -isystem newv4/v4_lib -O0 -emit-llvm -g

###################
LEVEL=../../../../../

CC=$(LEVEL)Debug+Asserts/bin/clang
LD=$(LEVEL)Debug+Asserts/bin/llvm-link
NM=$(LEVEL)Debug+Asserts/bin/llvm-nm

CFLAGS= -isystem newv4/v4_lib -O0 -emit-llvm -g

###################
v4_bign2_4_25_test.bc: bign2/v4_bign2_4_25.bc
	$(LD) $^ -o $@

v4_bign2_4_25_test: v4_bign2_4_25_test.bc
	./run.sh $< results_with_source_v4_bign2_4_25.txt

v3_bign2_4_25_test.bc: bign2/v3_bign2_4_25.bc
	$(LD) $^ -o $@

v3_bign2_4_25_test: v3_bign2_4_25_test.bc
	./run.sh $< results_with_source_v3_bign2_4_25.txt

v2_bign2_4_25_test.bc: bign2/v2_bign2_4_25.bc
	$(LD) $^ -o $@

v2_bign2_4_25_test: v2_bign2_4_25_test.bc
	./run.sh $< results_with_source_v2_bign2_4_25.txt

###############################################################

v4_min_test.bc: bign2/v4_min.bc
	$(LD) $^ -o $@

v4_test.bc: bign2/v4.bc
	$(LD) $^ -o $@

v4_min_test: v4_min_test.bc
	./run.sh $< results_with_source_v4_min.txt

v3_min_test.bc: bign2/v3_min.bc
	$(LD) $^ -o $@

v3_test.bc: bign2/v3.bc
	$(LD) $^ -o $@

v3_min_test: v3_min_test.bc
	./run.sh $< results_with_source_v3_min.txt

v2_min_test.bc: bign2/v2_min.bc
	$(LD) $^ -o $@

v2_test.bc: bign2/v2.bc
	$(LD) $^ -o $@

v2_min_test: v2_min_test.bc
	./run.sh $< results_with_source_v2_min.txt

v1_min_test.bc: bign2/v1_min.bc
	$(LD) $^ -o $@

v1_test.bc: bign2/v1.bc constant_time.bc
	$(LD) $^ -o $@

v1_min_test: v1_min_test.bc
	./run.sh $< results_with_source_v1_min.txt
###################


%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $<


clean:
	$(RM) *.bc
	$(RM) bign2/*.bc
