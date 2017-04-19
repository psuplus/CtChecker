#!/bin/bash

export PROGRAM=schedule

function printUsage {
  echo "USAGE:"
  echo "      $0 <version> <py script>"
  echo "      <version> varies from 1 to 9"
  echo "      <py script> for calculating error nodes,
                    default: computeErrorNodes.py"
  exit
}

if [[ $# -lt 1 ]]; then
  printUsage
elif [[ $1 -lt 1 ]]; then
  printUsage
elif [[ $1 -gt 9 ]]; then
  printUsage
elif [[ $# -lt 2 ]]; then
  pyscripts="../../../computeErrorNodes.py"
else
  pyscripts=$2
fi

mkdir -p ../newoutputs ../orgoutputs

# copy the original source code and compile
mkdir -p ../source
rm -f ../source/*
cp ../source.alt/source.orig/$PROGRAM.c ../source

(
  cd ../source;
  gcc $PROGRAM.c -o $PROGRAM.exe
) &> /dev/null

# run the tests on original code
## skip for efficiency
echo Running ./runall.sh
(./runall.sh) &> /dev/null
mkdir -p ../orgoutputs ../outputs
rm -f ../orgoutputs/*
mv -f ../outputs/* ../orgoutputs

# cp intrument and compile version $1
echo "Running rm ../traces/*"
mkdir -p ../traces
rm -f ../traces/*

echo Running ./cp_inst_compile.sh $1
(./cp_inst_compile.sh $1) &> /dev/null

echo Running ./gettraces.sh
(./gettraces.sh) &> /dev/null

echo Running ./collect_traces.sh
./collect_traces.sh

# diff the source files to see where has been changed
echo "diff <original $PROGRAM.c> <new $PROGRAM.c>"
diff ../source.alt/source.orig/$PROGRAM.c ../versions.alt/versions.orig/v$1/$PROGRAM.c

# Generate the output
echo
echo Generate the output
python $pyscripts ../nodes ../trace ../errorInfo $1
