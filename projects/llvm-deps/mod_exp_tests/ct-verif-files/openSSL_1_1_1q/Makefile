LEVEL=../../../../../
CC=$(LEVEL)Debug+Asserts/bin/clang
LD=$(LEVEL)Debug+Asserts/bin/llvm-link


CFLAGS= -isystem v4_3_2_include -O0 -emit-llvm -g

################

v4_test.bc: v4_4_mont_lib/bn_lib.bc v4_mont.bc
	$(LD) $^ -o $@

v4_test: v4_test.bc
	echo 'BN_mod_exp_mont_algorithm' > entry.txt
	./run.sh $< results_with_source_v4.txt

####

v3_test.bc: v3_4_mont_lib/bn_lib.bc v3_mont.bc
	$(LD) $^ -o $@

v3_test: v3_test.bc
	echo 'BN_mod_exp_mont_algorithm' > entry.txt
	./run.sh $< results_with_source_v3.txt

####

v2_test.bc: v2_4_mont_lib/bn_lib.bc v2_mont.bc
	$(LD) $^ -o $@

v2_test: v2_test.bc
	echo 'BN_mod_exp_mont_algorithm' > entry.txt
	./run.sh $< results_with_source_v2.txt

####

v1_test.bc: bn_lib.bc v1_mont.bc
	$(LD) $^ -o $@

v1_test: v1_test.bc
	echo 'BN_mod_exp_mont_algorithm' > entry.txt
	./run.sh $< results_with_source_v1.txt

################
################

v4_test_mont_recp.bc: mont_recp/v4_4_mont_recp_lib/bn_lib.bc mont_recp/v4_recp.bc
	$(LD) $^ -o $@

v4_test_mont_recp: v4_test_mont_recp.bc
	echo 'BN_mod_exp_recp_algorithm' > entry.txt
	./run.sh $< results_with_source_v4_mont_recp.txt

####

v3_test_mont_recp.bc: mont_recp/v3_4_mont_recp_lib/bn_lib.bc mont_recp/v3_recp.bc
	$(LD) $^ -o $@

v3_test_mont_recp: v3_test_mont_recp.bc
	echo 'BN_mod_exp_recp_algorithm' > entry.txt
	./run.sh $< results_with_source_v3_mont_recp.txt

####

v2_test_mont_recp.bc: mont_recp/v2_4_mont_recp_lib/bn_lib.bc mont_recp/v2_recp.bc
	$(LD) $^ -o $@

v2_test_mont_recp: v2_test_mont_recp.bc.bc
	echo 'BN_mod_exp_recp_algorithm' > entry.txt
	./run.sh $< results_with_source_v2_mont_recp.txt

####

v1_test_mont_recp.bc: mont_recp/bn_lib.bc mont_recp/v1_recp.bc
	$(LD) $^ -o $@

v1_test_mont_recp: v1_test_mont_recp.bc.bc
	echo 'BN_mod_exp_recp_algorithm' > entry.txt
	./run.sh $< results_with_source_v1_mont_recp.txt

################

v4_test_mont_word.bc: mont_word/v4_4_mont_word_lib/bn_lib.bc mont_word/v4_word.bc
	$(LD) $^ -o $@

v4_test_mont_word: v4_test_mont_word.bc
	echo 'BN_mod_exp_mont_word_algorithm' > entry.txt
	./run.sh $< results_with_source_v4_mont_word.txt

####

v3_test_mont_word.bc: mont_word/v3_4_mont_word_lib/bn_lib.bc mont_word/v3_word.bc
	$(LD) $^ -o $@

v3_test_mont_word: v3_test_mont_word.bc
	echo 'BN_mod_exp_mont_word_algorithm' > entry.txt
	./run.sh $< results_with_source_v3_mont_word.txt

####

v2_test_mont_word.bc: mont_word/v2_4_mont_word_lib/bn_lib.bc mont_word/v2_word.bc
	$(LD) $^ -o $@

v2_test_mont_word: v2_test_mont_word.bc
	echo 'BN_mod_exp_mont_word_algorithm' > entry.txt
	./run.sh $< results_with_source_v2_mont_word.txt

####

v1_test_mont_word.bc: mont_word/bn_lib.bc mont_word/v1_word.bc
	$(LD) $^ -o $@

v1_test_mont_word: v1_test_mont_word.bc
	echo 'BN_mod_exp_mont_word_algorithm' > entry.txt
	./run.sh $< results_with_source_v1_mont_word.txt

################
################

v4_test_mont_consttime.bc: mont_consttime/v4_4_mont_consttime_lib/bn_lib.bc mont_consttime/v4_consttime.bc
	$(LD) $^ -o $@

v4_test_mont_consttime: v4_test_mont_consttime.bc
	echo 'BN_mod_exp_mont_consttime_algorithm' > entry.txt
	./run.sh $< results_with_source_v4_mont_consttime.txt

####

v3_test_mont_consttime.bc: mont_consttime/v3_4_mont_consttime_lib/bn_lib.bc mont_consttime/v3_consttime.bc
	$(LD) $^ -o $@

v3_test_mont_consttime: v3_test_mont_consttime.bc
	echo 'BN_mod_exp_mont_consttime_algorithm' > entry.txt
	./run.sh $< results_with_source_v3_mont_consttime.txt

####

v2_test_mont_consttime.bc: mont_consttime/v2_4_mont_consttime_lib/bn_lib.bc mont_consttime/v2_consttime.bc
	$(LD) $^ -o $@

v2_test_mont_consttime: v2_test_mont_consttime.bc
	echo 'BN_mod_exp_mont_consttime_algorithm' > entry.txt
	./run.sh $< results_with_source_v2_mont_consttime.txt

####

v1_test_mont_consttime.bc: mont_consttime/bn_lib.bc mont_consttime/v1_consttime.bc
	$(LD) $^ -o $@

v1_test_mont_consttime: v1_test_mont_consttime.bc
	echo 'BN_mod_exp_mont_consttime_algorithm' > entry.txt
	./run.sh $< results_with_source_v1_mont_consttime.txt

################

%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm *.bc
	rm mont_recp/*.bc
	rm mont_word/*.bc
	rm mont_consttime/*.bc
