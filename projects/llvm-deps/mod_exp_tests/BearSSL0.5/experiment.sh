#!/bin/bash


TESTS="test1 test2 testall"

mkdir -p tests
for k in $TESTS; do
    TESTFILE=$k.bc
    TESTOUT=$k.txt
    echo "Running with" $TESTFILE "with output to" $TESTOUT
    ./run.sh $TESTFILE $TESTOUT
    mv $k.txt tests/
done

