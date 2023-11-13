#!/usr/bin/env bash
# linking example

if [ "$(uname)" == "Darwin" ]; then
        EXT="dylib"
else
        EXT="so"
fi

CPPFLAGS=
LLVMLIBS=
LDFLAGS=
LEVEL="../../../../../"



if [[ $1 == *"recp"* ]] ; then
        FILE="mont_recp/"$2"_recp.c"
        FUNC="recp_algorithm"
        START=161
        END=295
elif [[ $1 == *"word"* ]] ; then
        FILE="mont_word/"$2"_word.c"
        FUNC="mont_word_algorithm"
        START=1138
        END=1283
elif [[ $1 == *"consttime"* ]] ; then
        FILE="mont_consttime/"$2"_consttime.c"
        FUNC="mont_consttime_algorithm"
        START=593
        END=1136
else
        FILE=$2"_mont.c"
        FUNC="mont_algorithm"
        START=297
        END=471
fi

FN="BN_mod_exp_"$FUNC
sed -i -r "s/BN_mod_exp[A-Za-z_]*/$FN/g" "config.json"

# if your instrumentation code calls into LLVM libraries, then comment out the above and use these instead:
#CPPFLAGS=`llvm-config --cppflags`
#LLVMLIBS=`llvm-config --libs`
#LDFLAGS=`llvm-config --ldflags`

#use makefile
make clean
make $1

$LEVEL/Debug+Asserts/bin/opt -mem2reg -instnamer $1 -o $1
# $LEVEL/Debug+Asserts/bin/opt -inline -inline-threshold=0 $1 -o $1
$LEVEL/Debug+Asserts/bin/llvm-dis $1

## opt -load *.so -infoflow < $BENCHMARKS/welcome/welcome.bc -o welcome.bc
$LEVEL/Debug+Asserts/bin/opt -load $LEVEL/projects/poolalloc/Debug+Asserts/lib/LLVMDataStructure.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Constraints.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/sourcesinkanalysis.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/pointstointerface.$EXT \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Deps.$EXT  \
  -load $LEVEL/projects/llvm-deps/Debug+Asserts/lib/Security.$EXT  \
  -vulnerablebranchwrapper  -debug < $1 2>tmp-$FUNC-$2.dat > /dev/null

CONS_FILENAME=$( echo 'constraints-'$FUNC'-'$2'.con' | tr '/' '-')

# ITER=$(cat tmp-$FUNC-$2.dat | grep -Ei 'Done after [0-9]* iterations.' | grep -oEi '[0-9]*')
# ITER=$((ITER))
# ITERTAG=$(expr $ITER \* 2)
# cat tmp-$FUNC-$2.dat | grep '^'$ITERTAG':.*<:' | sed -nr 's/^[0-9]+:(.*)/\1/p' > $CONS_FILENAME

cat tmp-$FUNC-$2.dat | grep '^3:.*<:' | sed -nr 's/^[0-9]+:(.*)/\1/p' > $CONS_FILENAME

FILENAME=$( echo 'results_with_source-'$FUNC'-'$2'.txt' | tr '/' '-')

export PATH="$PATH:../../../processing_tools" # tmp change to path to have post-processing tools
python ../../../processing_tools/post_analysis_ct_verif.py tmp-$FUNC-$2.dat $START $END $FILE > $FILENAME
#SPLITPY="../utils/split.py"
#$SPLITPY > split.txt
#mv split.txt results_with_source.txt


## link instrumentation module
#llvm-link welcome.bc sample.bc -o welcome.linked.bc

## compile to native object file
#llc -filetype=obj welcome.linked.bc -o=welcome.o

## generate native executable
#g++ welcome.o $LLVMLIBS $LDFLAGS -o welcome

#./welcome
