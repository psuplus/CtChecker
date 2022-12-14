#!/usr/bin/env bash
# linking example

CUR_DIR=$(pwd)
PARENT_DIR=../../../../../../Mediator-Documentation/Mediator-Analysis-Data/Gaps/Raw
SETTING=$(echo $(pwd) | sed 's/^.*_\(.*\)/\1/')

cd $CUR_DIR/apparmor/results/
rm -rf $PARENT_DIR/$SETTING/apparmor
mkdir -p $PARENT_DIR/$SETTING/apparmor
find . -name 'config.json' -exec cp --parents \{\} $PARENT_DIR/$SETTING/apparmor/ \;
find . -name 'gaps.log'    -exec cp --parents \{\} $PARENT_DIR/$SETTING/apparmor/ \;

cd $CUR_DIR/tomoyo/results/
rm -rf $PARENT_DIR/$SETTING/tomoyo
mkdir -p $PARENT_DIR/$SETTING/tomoyo
find . -name 'config.json' -exec cp --parents \{\} $PARENT_DIR/$SETTING/tomoyo/ \;
find . -name 'gaps.log'    -exec cp --parents \{\} $PARENT_DIR/$SETTING/tomoyo/ \;

cd $CUR_DIR/selinux/results/
rm -rf $PARENT_DIR/$SETTING/selinux
mkdir -p $PARENT_DIR/$SETTING/selinux
find . -name 'config.json' -exec cp --parents \{\} $PARENT_DIR/$SETTING/selinux/ \;
find . -name 'gaps.log'    -exec cp --parents \{\} $PARENT_DIR/$SETTING/selinux/ \;