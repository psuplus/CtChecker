#!/bin/bash

# Make output directories
CUR=$(pwd)
PROJ_DIR=..
OUT_DIR=results
OUT_DIR_CT_VERIF=$OUT_DIR/ct_verif_files
OUT_DIR_CT_VERIF_FULL=$OUT_DIR/ct_verif_files_full
OUT_FULL_DIR=$OUT_DIR/full
OUT_MIN_DIR=$OUT_DIR/min
mkdir -p $OUT_FULL_DIR
mkdir -p $OUT_MIN_DIR

rm_file_if_exists()
{
    if [ -f $1 ]; then
        rm $1
    fi
}

pool_results()
{
    mkdir -p ${2}/${1}/raw
    mv ${1}/results_with_source*.txt ${2}/${1}
    mv ${1}/constraints*.con ${2}/${1}
    mv ${1}/tmp*.dat  ${2}/${1}/raw
}

execute_test()
{
    echo
    echo ":::: Changing to $1 directory"
    cd $1
    echo "::::: Running $2 $3"
    # rm_file_if_exists results_with_source.txt
    # rm_file_if_exists tmp.dat

    # flags: $2 $3 [white_list] [flow_sensitivity] [source]
    if [ $5 = true ] ; then 
        # $2 $3 false false $5    # FS/SRC
        # $2 $3 false true $5     # FS/FlS/SRC
        
        $2 $3 true false $5     # WL/FS/SRC
        $2 $3 true true $5      # WL/FS/FlS/SRC
    else 
        # $2 $3 false true $5     # FS/FlS
        
        $2 $3 false false $5    # FS
        $2 $3 true false $5     # WL/FS
        $2 $3 true true $5      # WL/FS/FlS
    fi

    cd $CUR
    pool_results $1 $4
}

execute_ct_verif()
{
    echo
    echo ":::: Changing to $1 directory"
    cd "ct-verif-files/"$1
    echo "::::: Running $2 $3"
        
    $2 $3 $5

    cd $CUR
    pool_results "ct-verif-files/"$1 $4
}

full_library_tests()
{
    printf "\n==== Running full library tests ====\n"
	
	# execute_test "BearSSL0.5" "./run.sh" "testall.bc" $OUT_FULL_DIR true
    #execute_test "mbedtls2.9.0" "./run.sh" "test2.bc" $OUT_FULL_DIR true
    #execute_test "libgcrypt1.8.2" "./run.sh" "full.bc" $OUT_FULL_DIR true
    #execute_test "openSSL_1_1_0g" "./run.sh" "test4.bc" $OUT_FULL_DIR true
	
    execute_test "BearSSL0.6" "./run.sh" "testall.bc" $OUT_FULL_DIR true
    execute_test "mbedtls3.2.1" "./run.sh" "test2.bc" $OUT_FULL_DIR true
    execute_test "libgcrypt1.10.1" "./run.sh" "full.bc" $OUT_FULL_DIR true
    execute_test "openSSL_1_1_1q" "./run.sh" "test4.bc" $OUT_FULL_DIR true
}

min_library_tests()
{
    printf "\n==== Running min library tests ====\n"
	
	# execute_test "BearSSL0.5" "./run.sh" "test2.bc" $OUT_MIN_DIR false
    #execute_test "mbedtls2.9.0" "./run.sh" "test1.bc" $OUT_MIN_DIR false
    #execute_test "libgcrypt1.8.2" "./run.sh" "mpi-pow.bc" $OUT_MIN_DIR false
    #execute_test "openSSL_1_1_0g" "./run.sh" "test1.bc" $OUT_MIN_DIR false
	
    execute_test "BearSSL0.6" "./run.sh" "test2.bc" $OUT_MIN_DIR false
    execute_test "mbedtls3.2.1" "./run.sh" "test1.bc" $OUT_MIN_DIR false
    execute_test "libgcrypt1.10.1" "./run.sh" "mpi-pow.bc" $OUT_MIN_DIR false
    execute_test "openSSL_1_1_1q" "./run.sh" "test1.bc" $OUT_MIN_DIR false
}

ct_verif_tests()
{
    execute_ct_verif "BearSSL0.6" "./run.sh" "v4_testall.bc" $OUT_DIR_CT_VERIF "v4"
    execute_ct_verif "BearSSL0.6" "./run.sh" "v3_testall.bc" $OUT_DIR_CT_VERIF "v3"
    execute_ct_verif "BearSSL0.6" "./run.sh" "v2_testall.bc" $OUT_DIR_CT_VERIF "v2"
    execute_ct_verif "BearSSL0.6" "./run.sh" "v1_testall.bc" $OUT_DIR_CT_VERIF "v1"

    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test.bc" $OUT_DIR_CT_VERIF "v4"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test.bc" $OUT_DIR_CT_VERIF "v3"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test.bc" $OUT_DIR_CT_VERIF "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test.bc" $OUT_DIR_CT_VERIF "v1"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test_mont_recp.bc" $OUT_DIR_CT_VERIF "v4"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test_mont_recp.bc" $OUT_DIR_CT_VERIF "v3"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test_mont_recp.bc" $OUT_DIR_CT_VERIF "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test_mont_recp.bc" $OUT_DIR_CT_VERIF "v1"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test_mont_word.bc" $OUT_DIR_CT_VERIF "v4"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test_mont_word.bc" $OUT_DIR_CT_VERIF "v3"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test_mont_word.bc" $OUT_DIR_CT_VERIF "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test_mont_word.bc" $OUT_DIR_CT_VERIF "v1"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test_mont_consttime.bc" $OUT_DIR_CT_VERIF "v4"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test_mont_consttime.bc" $OUT_DIR_CT_VERIF "v3"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test_mont_consttime.bc" $OUT_DIR_CT_VERIF "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test_mont_consttime.bc" $OUT_DIR_CT_VERIF "v1"

    execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v4_test.bc" $OUT_DIR_CT_VERIF "v4"
    execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v3_test.bc" $OUT_DIR_CT_VERIF "v3"
    execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v2_test.bc" $OUT_DIR_CT_VERIF "v2"
    execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v1_test.bc" $OUT_DIR_CT_VERIF "v1"

    execute_ct_verif "mbedtls3.2.1" "./run.sh" "v4_min_test.bc" $OUT_DIR_CT_VERIF "v4"
    execute_ct_verif "mbedtls3.2.1" "./run.sh" "v3_min_test.bc" $OUT_DIR_CT_VERIF "v3"
    execute_ct_verif "mbedtls3.2.1" "./run.sh" "v2_min_test.bc" $OUT_DIR_CT_VERIF "v2"
    execute_ct_verif "mbedtls3.2.1" "./run.sh" "v1_min_test.bc" $OUT_DIR_CT_VERIF "v1"

#     execute_ct_verif "ct-verif-files/BearSSL0.5" "make" "v4_testall" $OUT_MIN_DIR "v4"
#     execute_ct_verif "ct-verif-files/BearSSL0.5" "make" "v3_testall" $OUT_MIN_DIR "v3"
#     execute_ct_verif "ct-verif-files/BearSSL0.5" "make" "v2_testall" $OUT_MIN_DIR "v2"

#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v4_test" $OUT_MIN_DIR "v4"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v3_test" $OUT_MIN_DIR "v3"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v2_test" $OUT_MIN_DIR "v2"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v4_test_mont_recp" $OUT_MIN_DIR "v4"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v3_test_mont_recp" $OUT_MIN_DIR "v3"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v2_test_mont_recp" $OUT_MIN_DIR "v2"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v4_test_mont_word" $OUT_MIN_DIR "v4"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v3_test_mont_word" $OUT_MIN_DIR "v3"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v2_test_mont_word" $OUT_MIN_DIR "v2"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v4_test_mont_consttime" $OUT_MIN_DIR "v4"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v3_test_mont_consttime" $OUT_MIN_DIR "v3"
#     execute_ct_verif "ct-verif-files/openSSL_1_1_0g" "make" "v2_test_mont_consttime" $OUT_MIN_DIR "v2"

#     execute_ct_verif "ct-verif-files/libgcrypt1.8.2" "make" "v4_test" $OUT_MIN_DIR "v4"
#     execute_ct_verif "ct-verif-files/libgcrypt1.8.2" "make" "v3_test" $OUT_MIN_DIR "v3"
#     execute_ct_verif "ct-verif-files/libgcrypt1.8.2" "make" "v2_test" $OUT_MIN_DIR "v2"

#     execute_ct_verif "ct-verif-files/mbedtls2.9.0" "make" "v4_bign2_4_25_test" $OUT_MIN_DIR "v4"
#    execute_ct_verif "ct-verif-files/mbedtls2.9.0" "make" "v3_bign2_4_25_test" $OUT_MIN_DIR "v3"
#    execute_ct_verif "ct-verif-files/mbedtls2.9.0" "make" "v2_bign2_4_25_test" $OUT_MIN_DIR "v2"
}

ct_verif_full_tests()
{
    # execute_ct_verif "BearSSL0.6" "./run.sh" "v4_testall.bc" $OUT_DIR_CT_VERIF_FULL "v4"
    # execute_ct_verif "BearSSL0.6" "./run.sh" "v3_testall.bc" $OUT_DIR_CT_VERIF_FULL "v3"
    # execute_ct_verif "BearSSL0.6" "./run.sh" "v2_testall.bc" $OUT_DIR_CT_VERIF_FULL "v2"
    execute_ct_verif "BearSSL0.6" "./run.sh" "v1_testall.bc" $OUT_DIR_CT_VERIF_FULL "v1"

    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v4"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v3"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v1"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test_mont_recp_all.bc" $OUT_DIR_CT_VERIF_FULL "v4"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test_mont_recp_all.bc" $OUT_DIR_CT_VERIF_FULL "v3"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test_mont_recp_all.bc" $OUT_DIR_CT_VERIF_FULL "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test_mont_recp_all.bc" $OUT_DIR_CT_VERIF_FULL "v1"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test_mont_word_all.bc" $OUT_DIR_CT_VERIF_FULL "v4"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test_mont_word_all.bc" $OUT_DIR_CT_VERIF_FULL "v3"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test_mont_word_all.bc" $OUT_DIR_CT_VERIF_FULL "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test_mont_word_all.bc" $OUT_DIR_CT_VERIF_FULL "v1"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v4_test_mont_consttime_all.bc" $OUT_DIR_CT_VERIF_FULL "v4"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v3_test_mont_consttime_all.bc" $OUT_DIR_CT_VERIF_FULL "v3"
    # execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v2_test_mont_consttime_all.bc" $OUT_DIR_CT_VERIF_FULL "v2"
    execute_ct_verif "openSSL_1_1_1q" "./run.sh" "v1_test_mont_consttime_all.bc" $OUT_DIR_CT_VERIF_FULL "v1"

    # execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v4_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v4"
    # execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v3_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v3"
    # execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v2_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v2"
    execute_ct_verif "libgcrypt1.10.1" "./run.sh" "v1_test_all.bc" $OUT_DIR_CT_VERIF_FULL "v1"

    # execute_ct_verif "mbedtls3.2.1" "./run.sh" "v4_test.bc" $OUT_DIR_CT_VERIF_FULL "v4"
    # execute_ct_verif "mbedtls3.2.1" "./run.sh" "v3_test.bc" $OUT_DIR_CT_VERIF_FULL "v3"
    # execute_ct_verif "mbedtls3.2.1" "./run.sh" "v2_test.bc" $OUT_DIR_CT_VERIF_FULL "v2"
    execute_ct_verif "mbedtls3.2.1" "./run.sh" "v1_test.bc" $OUT_DIR_CT_VERIF_FULL "v1"
}

main()
{
    cd $PROJ_DIR/../poolalloc/
    pwd
    make
    cd -
    cd $PROJ_DIR
    pwd
    make
    cd $CUR

    # min_library_tests
    # full_library_tests
    ct_verif_tests
    ct_verif_full_tests
}

# Run the actual tests
main
