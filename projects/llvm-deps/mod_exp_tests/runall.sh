#!/bin/bash

# Make output directories
CUR=$(pwd)
PROJ_DIR=../..
OUT_DIR=results
OUT_FULL_DIR=$OUT_DIR/full
OUT_MIN_DIR=$OUT_DIR/min
mkdir -p $OUT_FULL_DIR
mkdir -p $OUT_FULL_DIR/raw
mkdir -p $OUT_MIN_DIR
mkdir -p $OUT_MIN_DIR/raw

#
rm_file_if_exists()
{
    if [ -f $1 ]; then
        rm $1
    fi
}

pool_results()
{
    cp ${1}/results_with_source.txt ${2}/${1}.txt
    cp ${1}/tmp.dat  ${2}/raw/${1}.txt
}

execute_test()
{
    echo ":::: Changing to $1 directory"
    cd $1
    echo "::::: Running $2 $3"
    rm_file_if_exists results_with_source.txt
    rm_file_if_exists tmp.dat
    $2 $3
    cd $CUR
    pool_results $1 $4
}

full_library_tests()
{
    execute_test "BearSSL0.5" "make"  "testall" $OUT_FULL_DIR
    execute_test "openSSL_1_1_0g" "./run.sh" "test4.bc" $OUT_FULL_DIR
    execute_test "libgcrypt1.8.2" "./run.sh" "full.bc" $OUT_FULL_DIR
    execute_test "mbedtls2.9.0" "./run.sh" "test2.bc" $OUT_FULL_DIR
}

min_library_tests()
{
    execute_test "BearSSL0.5" "make"  "testall" $OUT_MIN_DIR
    execute_test "openSSL_1_1_0g" "./run.sh" "test1.bc" $OUT_MIN_DIR
    execute_test "libgcrypt1.8.2" "./run.sh" "mpi-pow.bc" $OUT_MIN_DIR
    execute_test "mbedtls2.9.0" "./run.sh" "test1.bc" $OUT_MIN_DIR
}

main()
{
    cd $PROJ_DIR
    make
    cd $CUR

    full_library_tests
    min_library_tests
}

# Run the actual tests
main
