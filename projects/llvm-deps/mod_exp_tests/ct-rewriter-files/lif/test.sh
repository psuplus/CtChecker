RUN="./run.sh"
MAIN1="main1_isochr.c"
MAIN1OPT="main1_isochr.opt.c"
MAIN2="main2_isochr.c"
MAIN2OPT="main2_isochr.opt.c"
MAIN3="main3_isochr.c"
MAIN3OPT="main3_isochr.opt.c"
MAIN4="main4_isochr.c"
MAIN4OPT="main4_isochr.opt.c"

echo "Change into comp"
cd comp
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT
# $RUN $MAIN3
# $RUN $MAIN3OPT

echo "Change into ctbench/bearssl"
cd ../ctbench/bearssl/hash/md5
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into ctbench/dudect/aes32"
cd ../../../dudect/aes32
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT
# $RUN $MAIN3
# $RUN $MAIN3OPT

echo "Change into ctbench/dudect/donnabad"
# cd ctbench/dudect/donnabad
cd ../donnabad
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/appliedCryp/3way"
cd ../../../issta18/appliedCryp/3way
# cd issta18/appliedCryp/3way
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT
# $RUN $MAIN3
# $RUN $MAIN3OPT
# $RUN $MAIN4
# $RUN $MAIN4OPT

echo "Change into issta18/appliedCryp/des"
cd ../des
# cd issta18/appliedCryp/des
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/appliedCryp/loki91"
cd ../loki91
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/aes"
# cd issta18/chronos/aes
cd ../../chronos/aes
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/anubis"
cd ../anubis
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/cast5"
cd ../cast5
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/cast6"
cd ../cast6
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/des"
cd ../des
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/des3"
cd ../des3
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/fcrypt"
cd ../fcrypt
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/chronos/khazad"
cd ../khazad
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/libg/camellia"
cd ../../libg/camellia
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/libg/des"
cd ../des
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/libg/seed"
cd ../seed
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/libg/twofish"
cd ../twofish
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/supercop/aes"
cd ../../supercop/aes
# cd issta18/supercop/aes
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT

echo "Change into issta18/supercop/cast"
cd ../cast
$RUN $MAIN1
$RUN $MAIN1OPT
# $RUN $MAIN2
# $RUN $MAIN2OPT