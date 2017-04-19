#!/bin/bash


export PROGRAM=schedule

(printf "{\n"
for f in {1..9}; do
  diff ../source.alt/source.orig/$PROGRAM.c ../versions.alt/versions.orig/v$f/$PROGRAM.c 1>&2
  read error
  echo "$f: ($error,),"
done

printf "}\n"
) > ../errorInfo
