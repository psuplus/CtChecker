CC=../../../../Debug+Asserts/bin/clang
LD=../../../../Debug+Asserts/bin/llvm-link

CFLAGS=-isystem include -I include -O0 -g -emit-llvm


test1.bc : i32_modpow.bc
	$(LD) $^ -o $@

test2.bc: i32_add.bc i32_bitlen.bc i32_decmod.bc i32_decode.bc i32_decred.bc i32_div32.bc i32_encode.bc i32_fmont.bc i32_iszero.bc i32_modpow.bc i32_montmul.bc i32_mulacc.bc i32_muladd.bc i32_ninv32.bc i32_reduce.bc i32_sub.bc i32_tmont.bc ccopy.bc
	$(LD) $^ -o $@

testall.bc : i32_add.bc i32_bitlen.bc i32_decmod.bc i32_decode.bc i32_decred.bc i32_div32.bc i32_encode.bc i32_fmont.bc i32_iszero.bc i32_modpow.bc i32_montmul.bc i32_mulacc.bc i32_muladd.bc i32_ninv32.bc i32_reduce.bc i32_sub.bc i32_tmont.bc ccopy.bc
	$(LD) $^ -o $@

%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: testall
testall: testall.bc
	./run.sh $< results_with_source.txt

clean:
	rm *.ll *.bc

