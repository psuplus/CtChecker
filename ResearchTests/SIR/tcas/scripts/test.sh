#!/bin/bash

function printUsage {
  echo "USAGE:"
  echo "      $0 <version> <py script>"
  echo "      <version> varies from 1 to 41"
  echo "      <py script> for calculating error nodes,
                    default: computeErrorNodes.py"
  exit
}

if [[ $# -lt 1 ]]; then
  printUsage
elif [[ $# -lt 2 ]]; then
  py=../../../computeErrorNodes.py
elif [[ $1 -lt 1 ]]; then
  printUsage
elif [[ $1 -gt 41 ]]; then
  printUsage
else
  py=$2
fi

mkdir -p ../newoutputs ../orgoutputs ../t_all

# copy the original source code and compile
mkdir -p ../source
rm -f ../source/*
cp ../source.alt/source.orig/tcas.c ../source

(
  cd ../source;
  gcc tcas.c -o tcas.exe
) &> /dev/null

# run the tests on original code
## skip for efficiency
if false; then
  echo Running ./runall.sh
  (./runall.sh) &> /dev/null
  mkdir -p ../orgoutputs
  rm -f ../orgoutputs/*
  mv -f ../outputs/* ../orgoutputs
fi

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

cp ../trace ../t_all/a$1.tr

# diff the source files to see where has been changed
echo "diff <original tcas.c> <new tcas.c>"
diff ../source.alt/source.orig/tcas.c ../versions.alt/versions.orig/v$1/tcas.c

# Generate the output
echo
echo Generate the output
if [[ $# -lt 2 ]]; then
    python ../../../calculateErrorNodes.py ../nodes ../trace ../errorInfo $1
else
    python $py ../nodes ../trace ../errorInfo $1
fi
