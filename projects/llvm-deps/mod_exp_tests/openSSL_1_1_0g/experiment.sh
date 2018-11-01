#!/bin/bash


FUNCS="BN_mod_exp_recp BN_mod_exp_mont BN_mod_exp_mont_word BN_mod_exp_mont_consttime BN_mod_exp_simple"
TESTS="test1 test2 test3"

for f in $FUNCS; do
    mkdir -p tests/$f-only
    echo $f > entry.txt
    echo "Beginning Test ["$f"] entry.txt:"
    cat entry.txt

    for k in $TESTS; do
        TESTFILE=$k.bc
        TESTOUT=$k-with-entry.txt
        echo "Running with" $TESTFILE "with output to" $TESTOUT
        ./run.sh $TESTFILE $TESTOUT
    done
    mv test*-with-entry.txt tests/$f-only/
done

