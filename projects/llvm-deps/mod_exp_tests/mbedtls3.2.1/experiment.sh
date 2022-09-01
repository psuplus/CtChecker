#!/bin/bash

TESTS="test1"

for TEST in $TESTS; do
    echo "Running experiment " $TEST
    ./run.sh  $TEST.bc $TEST-out.txt
done
