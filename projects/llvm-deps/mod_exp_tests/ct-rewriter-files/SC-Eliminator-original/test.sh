RUN="./run.sh"

echo "Change into appliedCryp"
cd appliedCryp
$RUN 3way
$RUN des
$RUN loki91

echo "Change into chronos"
cd ../chronos
$RUN aes
$RUN anubis
$RUN cast5
$RUN cast6
$RUN des
$RUN des3
$RUN fcrypt
$RUN khazad

echo "Change into libg"
cd ../libg
$RUN camellia
$RUN des
$RUN seed
$RUN twofish

echo "Change into supercop"
cd ../supercop
$RUN aes_core
$RUN cast-ssl

# echo "Change into botan"
# cd ../botan
# $RUN aes
# $RUN cast128
# $RUN des
# $RUN kasumi
# $RUN seed
# $RUN twofish