#!/bin/bash
YELLOW='\033[1;33m'
WHITE='\033[1;37m'
NC='\033[0m' # No Color

CUR=$(pwd)

countPositives()
{
    cd $1
    cp $3 TEMP_$3
    pos=0
    if [ $# -eq 4 ]
    then
        pos=$((pos + $4))
    else
        pos=$((pos + 0))
    fi
        pos=$((pos + $(fgrep -o $2 TEMP_$3 | wc -l | tr -d '\n')))

printf "${pos}\t"
    rm TEMP_$3

    cd $CUR
}

printf "${YELLOW}"
printf "==> CtChecker \n"
printf "${NC}"
#echo "libgcrypt1.8.2"
printf "libgcrypt1.8.2\t\t"
countPositives "libgcrypt1.8.2" "_4.c" results_with_source_v2.txt
countPositives "libgcrypt1.8.2" "_4.c" results_with_source_v3.txt
countPositives "libgcrypt1.8.2" "_4.c" results_with_source_v4.txt; echo ""
echo "---------------"

#echo "BearSSL0.5"
printf "BearSSL0.5\t\t"

countPositives "BearSSL0.5" 'v2' results_with_source_v2.txt
countPositives "BearSSL0.5" 'v3' results_with_source_v3.txt
countPositives "BearSSL0.5" 'v4' results_with_source_v4.txt; echo ""
echo "---------------"

#echo "mbedtls2.9.0"
printf "mbedtls2.9.0\t\t"
countPositives "mbedtls2.9.0/" 'v2' results_with_source_v2_bign2_4_25.txt
countPositives "mbedtls2.9.0/" 'v3' results_with_source_v3_bign2_4_25.txt
countPositives "mbedtls2.9.0/" 'v4' results_with_source_v4_bign2_4_25.txt; echo ""
echo "---------------"

#echo "openSSL_1_1_0g"
printf "openSSL_1_1_0g\n"
#echo "mont recp"
printf "   mont recp\t\t"
#countPositives "openSSL_1_1_0g" "mont_recp/" results_with_source_v2_mont_recp.txt 7
countPositives "openSSL_1_1_0g" "mont_recp/" results_with_source_v3_mont_recp.txt 5
countPositives "openSSL_1_1_0g" "mont_recp/" results_with_source_v3_mont_recp.txt 5
countPositives "openSSL_1_1_0g" "mont_recp/" results_with_source_v4_mont_recp.txt; echo ""
printf "   mont\t\t\t"
countPositives "openSSL_1_1_0g" "line" results_with_source_v2.txt 4
countPositives "openSSL_1_1_0g" "line" results_with_source_v3.txt 4
countPositives "openSSL_1_1_0g" "line" results_with_source_v4.txt; echo ""
printf "   mont consttime\t"
countPositives "openSSL_1_1_0g" "mont_consttime/" results_with_source_v2_mont_consttime.txt 5
countPositives "openSSL_1_1_0g" "mont_consttime/" results_with_source_v3_mont_consttime.txt 5
countPositives "openSSL_1_1_0g" "mont_consttime/" results_with_source_v4_mont_consttime.txt; echo ""
printf "   mont word\t\t"
countPositives "openSSL_1_1_0g" "mont_word/" results_with_source_v2_mont_word.txt 7
countPositives "openSSL_1_1_0g" "mont_word/" results_with_source_v3_mont_word.txt 7
countPositives "openSSL_1_1_0g" "mont_word/" results_with_source_v4_mont_word.txt; echo ""


#gsed -E 's/\+\*/\+\*\n/g' $3TEMP_$2 | grep -c "\+\*"
#awk -F '\/' '/\*\+/ {print '\n'; print $0}' greptest.c > GREPTEST_OUT.txt
#fgrep -o *+ greptest.c | wc -l
