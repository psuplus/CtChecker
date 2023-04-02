#!/usr/bin/env bash

llc="../../../../../Debug+Asserts/bin/llc"

for dir in "./*"
do
    for file in $dir/*
    do
        name=${file%.*}
        echo $name
        $llc -march=cpp -o $name".cpp" $file
    done
done