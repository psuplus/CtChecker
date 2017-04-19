#!/bin/bash

export PROGRAM=schedule

diff ../source.alt/source.orig/$PROGRAM.c ../versions.alt/versions.orig/v$1/$PROGRAM.c
