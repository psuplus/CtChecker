LEVEL=../../../../../
CC=$(LEVEL)Debug+Asserts/bin/clang
LD=$(LEVEL)Debug+Asserts/bin/llvm-link

CFLAGS=-isystem include -I include -O0 -g -emit-llvm

# Left out v4_lib/i32_reduce.bc. Its function is unused
v4_testall.bc : v4.bc v4_lib/i32_add.bc v4_lib/i32_bitlen.bc v4_lib/i32_decmod.bc v4_lib/i32_decode.bc v4_lib/i32_div32.bc v4_lib/i32_encode.bc v4_lib/i32_fmont.bc v4_lib/i32_iszero.bc v4_lib/i32_montmul.bc v4_lib/i32_mulacc.bc v4_lib/i32_muladd.bc v4_lib/i32_ninv32.bc v4_lib/i32_sub.bc v4_lib/i32_tmont.bc v4_lib/ccopy.bc 
	$(LD) $^ -o $@

# Left out v3_lib/i32_reduce.bc. Its function is unused
v3_testall.bc : v3.bc v3_lib/i32_add.bc v3_lib/i32_bitlen.bc v3_lib/i32_decmod.bc v3_lib/i32_decode.bc v3_lib/i32_div32.bc v3_lib/i32_encode.bc v3_lib/i32_fmont.bc v3_lib/i32_iszero.bc v3_lib/i32_montmul.bc v3_lib/i32_mulacc.bc v3_lib/i32_muladd.bc v3_lib/i32_ninv32.bc v3_lib/i32_sub.bc v3_lib/i32_tmont.bc v3_lib/ccopy.bc 
	$(LD) $^ -o $@

# Left out v2_lib/i32_reduce.bc. Its function is unused
v2_testall.bc : v2.bc v2_lib/i32_add.bc v2_lib/i32_bitlen.bc v2_lib/i32_decmod.bc v2_lib/i32_decode.bc v2_lib/i32_div32.bc v2_lib/i32_encode.bc v2_lib/i32_fmont.bc v2_lib/i32_iszero.bc v2_lib/i32_montmul.bc v2_lib/i32_mulacc.bc v2_lib/i32_muladd.bc v2_lib/i32_ninv32.bc v2_lib/i32_sub.bc v2_lib/i32_tmont.bc v2_lib/ccopy.bc 
	$(LD) $^ -o $@

%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: testall
testall: testall.bc
	./run.sh $< results_with_source.txt

v4_testall: v4_testall.bc
	./run.sh $< results_with_source_v4.txt
v3_testall: v3_testall.bc
	./run.sh $< results_with_source_v3.txt
v2_testall: v2_testall.bc
	./run.sh $< results_with_source_v2.txt