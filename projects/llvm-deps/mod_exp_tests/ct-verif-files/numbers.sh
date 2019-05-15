#!/bin/bash

CUR=$(pwd)

countPositives()
{
    cd $1
    cp $3$2 $3TEMP_$2
    gsed -E 's/\+\*/\+\*\n/g' $3TEMP_$2 | grep -c "\+\*"
    rm $3TEMP_$2

    cd $CUR
#    for f in /$2/*; do
#        cp $f TEMP_$f
#        gsed 's/\+\*/\+\*\n/g' TEMP_$f | grep -c "\+\*"
#        rm TEMP_$f
#    done
}

echo "---------------"
echo "BearSSL0.5"
countPositives "BearSSL0.5" v4.c
echo "---"
echo "mbedtls2.9.0"
countPositives "mbedtls2.9.0/bign2" "v4_bign2_4_25.c"
echo "---"
echo "libgcrypt1.8.2"
countPositives "libgcrypt1.8.2" v4_4.c
echo "---"
echo "openSSL_1_1_0g"
echo "mont"
countPositives "openSSL_1_1_0g" v4_4_mont.c
echo "mont word"
countPositives "openSSL_1_1_0g" v4_4_mont_word.c  mont_word/
echo "mont recp"
countPositives "openSSL_1_1_0g" v4_4_mont_recp.c  mont_recp/
echo "mont consttime"
countPositives "openSSL_1_1_0g" v4_4_mont_consttime.c  mont_consttime/
echo "---------------"


