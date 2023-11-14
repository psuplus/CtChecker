RUN="./run.sh"

echo "Change into binsec"
cd binsec
$RUN aes_big
$RUN des_tab
$RUN tls-rempad-luk13

echo "Change into appliedCryp"
cd ../issta18/appliedCryp
$RUN 3way
$RUN des
$RUN loki91

echo "Change into chronos"
cd ../chronos
$RUN aes1_opt
$RUN aes1_wo_opt
$RUN anubis1_opt
$RUN anubis1_wo_opt
$RUN cast51_opt
$RUN cast51_wo_opt
$RUN cast61_opt
$RUN cast61_wo_opt
$RUN des_1_opt
$RUN des_1_wo_opt
$RUN des31_opt
$RUN des31_wo_opt
$RUN fcrypt1_opt
$RUN fcrypt1_wo_opt
$RUN khazad1_opt
$RUN khazad1_wo_opt

echo "Change into ghostrider"
cd ../ghostrider
$RUN findmax
$RUN matmul

echo "Change into libg"
cd ../libg

$RUN des

echo "Change into supercop"
cd ../supercop
$RUN aes_core1_opt
$RUN aes_core1_wo_opt
$RUN cast-ssl1_opt
$RUN cast-ssl1_wo_opt

echo "Change into pycrypto"
cd ../../pycrypto
# cd pycrypto
$RUN ARC4