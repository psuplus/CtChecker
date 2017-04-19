#!/bin/bash
PROGRAM=schedule
source=schedule.c
CPPFLAGS="$CPPFLAGS -Wno-return-type"

if [ "$(uname)" == "Darwin" ]; then
  EXT=dylib
else
  EXT=so
fi

function printUsage {
  echo "USAGE:"
  echo "      ./cp_and_compile.sh <version>"
  echo "      <version> varies from 1 to 9"
  exit
}

if [[ $# -lt 1 ]]; then
  printUsage
elif [[ $1 -lt 1 ]]; then
  printUsage
elif [[ $1 -gt 9 ]]; then
  printUsage
fi

ver=$1

cp ../versions.alt/versions.orig/v$ver/$source ../source

cd ../source

# Start instrumentation

## Check virtual environment
if [ -z $VTENV ]; then
	echo "
Run \`source ./env.sh\` in \`ResearchTests\` to activate the virtual environment"
  exit
fi

clang -g $CPPFLAGS -O0 -emit-llvm -c $PROGRAM.c &&

echo 0 > /tmp/llvm0 &&
opt -load ../../../../Debug+Asserts/lib/Research.$EXT -prtLnTrace $PROGRAM.bc -o $PROGRAM.g.bc &> ../nodes  &&

echo "#define __SOURCE__ \"$source\"" > printLine.cpp &&
cat ../../../../ResearchTests/instrumentation/BBInfo/printLine.cpp >> printLine.cpp &&
clang $CPPFLAGS -O0 -emit-llvm -c printLine.cpp &&

llvm-link $PROGRAM.g.bc printLine.bc -o $PROGRAM.linked.bc &&

llc -filetype=obj $PROGRAM.linked.bc -o $PROGRAM.o &&

g++ $CPPFLAGS $PROGRAM.o -o $PROGRAM.c.inst.exe
