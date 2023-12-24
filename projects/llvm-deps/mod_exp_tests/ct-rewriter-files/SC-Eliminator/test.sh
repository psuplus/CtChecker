RUN="./run.sh"

echo "Change into appliedCryp"
cd appliedCryp
$RUN 3way1_opt
$RUN 3way1_wo_opt
$RUN des1_opt
$RUN des1_wo_opt
$RUN loki911_opt
$RUN loki911_wo_opt

echo "Change into chronos"
# cd chronos
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

echo "Change into libg"
cd ../libg
# cd libg
$RUN camellia1_opt
$RUN camellia1_wo_opt
$RUN des1_opt
$RUN des1_wo_opt
$RUN seed1_opt
$RUN seed1_wo_opt
$RUN twofish1_opt
$RUN twofish1_wo_opt

echo "Change into supercop"
cd ../supercop
$RUN aes_core1_opt
$RUN aes_core1_wo_opt
$RUN cast-ssl1_opt
$RUN cast-ssl1_wo_opt