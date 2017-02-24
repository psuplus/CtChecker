#!/bin/bash

function printUsage {
  echo "USAGE:"
  echo "      ./cp_and_compile.sh <version>"
  echo "      <version> varies from 1 to 41"
  exit
}

if [[ $# -lt 1 ]]; then
  printUsage
elif [[ $1 -lt 1 ]]; then
  printUsage
elif [[ $1 -gt 41 ]]; then
  printUsage
fi

ver=$1

cp ../versions.alt/versions.orig/v$ver/tcas.c ../source

cd ../source

# Start instrumentation

## Check virtual environment
if [ -z $VTENV ]; then
	echo "
Run \`source ./env.sh\` in \`ResearchTests\` to activate the virtual environment"
  exit
fi

clang $CPPFLAGS -O0 -emit-llvm -c tcas.c -o tcas.bc

echo 0 > /tmp/llvm0
opt -load ../../../../Debug+Asserts/lib/Research.so -prtLnTrace tcas.bc -o tcas.g.bc &> ../nodes

clang $CPPFLAGS -O0 -emit-llvm -c ../../../../ResearchTests/instrumentation/BBInfo/printLine.cpp

llvm-link tcas.g.bc printLine.bc -o tcas.linked.bc

llc -filetype=obj tcas.linked.bc -o tcas.o

g++ -std=c++11 tcas.o -o tcas.c.inst.exe
