#!/bin/bash

# Make output directories
CUR=$(pwd)
PROJ_DIR=..
OUT_DIR=results
OUT_FULL_DIR=$OUT_DIR/full
OUT_MIN_DIR=$OUT_DIR/min
mkdir -p $OUT_FULL_DIR
# mkdir -p $OUT_FULL_DIR/raw
mkdir -p $OUT_MIN_DIR
# mkdir -p $OUT_MIN_DIR/raw

#
rm_file_if_exists()
{
    if [ -f $1 ]; then
        rm $1
    fi
}

pool_results()
{
    # mkdir -p ${2}/${1}
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
        # $2 $3 false true $5     # FS/Fls/SRC
        $2 $3 true false $5     # WL/FS/SRC
        $2 $3 true true $5      # WL/FS/FlS/SRC
    else 
        $2 $3 false false $5    # FS
        # $2 $3 false true $5     # FS/Fls
        $2 $3 true false $5     # WL/FS
        $2 $3 true true $5      # WL/FS/FlS
    fi

    cd $CUR
    pool_results $1 $4
}

full_library_tests()
{
    execute_test "BearSSL0.5" "./run.sh" "testall.bc" $OUT_FULL_DIR true
    execute_test "openSSL_1_1_0g" "./run.sh" "test4.bc" $OUT_FULL_DIR true
    execute_test "libgcrypt1.8.2" "./run.sh" "full.bc" $OUT_FULL_DIR true
    execute_test "mbedtls2.9.0" "./run.sh" "test2.bc" $OUT_FULL_DIR true
}

min_library_tests()
{
    execute_test "BearSSL0.5" "./run.sh" "test2.bc" $OUT_MIN_DIR false
    execute_test "openSSL_1_1_0g" "./run.sh" "test1.bc" $OUT_MIN_DIR false
    execute_test "libgcrypt1.8.2" "./run.sh" "mpi-pow.bc" $OUT_MIN_DIR false
    execute_test "mbedtls2.9.0" "./run.sh" "test1.bc" $OUT_MIN_DIR false
}

ct_verif_tests()
{
     execute_test "ct-verif-files/BearSSL0.5" "make" "v4_testall" $OUT_MIN_DIR "v4"
#     execute_test "ct-verif-files/BearSSL0.5" "make" "v3_testall" $OUT_MIN_DIR "v3"
#     execute_test "ct-verif-files/BearSSL0.5" "make" "v2_testall" $OUT_MIN_DIR "v2"

#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v4_test" $OUT_MIN_DIR "v4"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v3_test" $OUT_MIN_DIR "v3"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v2_test" $OUT_MIN_DIR "v2"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v4_test_mont_recp" $OUT_MIN_DIR "v4"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v3_test_mont_recp" $OUT_MIN_DIR "v3"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v2_test_mont_recp" $OUT_MIN_DIR "v2"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v4_test_mont_word" $OUT_MIN_DIR "v4"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v3_test_mont_word" $OUT_MIN_DIR "v3"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v2_test_mont_word" $OUT_MIN_DIR "v2"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v4_test_mont_consttime" $OUT_MIN_DIR "v4"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v3_test_mont_consttime" $OUT_MIN_DIR "v3"
#     execute_test "ct-verif-files/openSSL_1_1_0g" "make" "v2_test_mont_consttime" $OUT_MIN_DIR "v2"

#     execute_test "ct-verif-files/libgcrypt1.8.2" "make" "v4_test" $OUT_MIN_DIR "v4"
#     execute_test "ct-verif-files/libgcrypt1.8.2" "make" "v3_test" $OUT_MIN_DIR "v3"
#     execute_test "ct-verif-files/libgcrypt1.8.2" "make" "v2_test" $OUT_MIN_DIR "v2"

#     execute_test "ct-verif-files/mbedtls2.9.0" "make" "v4_bign2_4_25_test" $OUT_MIN_DIR "v4"
#    execute_test "ct-verif-files/mbedtls2.9.0" "make" "v3_bign2_4_25_test" $OUT_MIN_DIR "v3"
#    execute_test "ct-verif-files/mbedtls2.9.0" "make" "v2_bign2_4_25_test" $OUT_MIN_DIR "v2"
}

main()
{
    cd $PROJ_DIR
    pwd
    make
    cd $CUR

    min_library_tests
    full_library_tests
    # ct_verif_tests
}

# Run the actual tests
main
