RUN="./run.sh"

# Taint only key
echo "Change into appliedCryp"
cd appliedCryp
$RUN 3way false
$RUN des false
$RUN loki91 false

echo "Change into chronos"
cd ../chronos
$RUN aes false
$RUN anubis false
$RUN cast5 false
$RUN cast6 false
$RUN des false
$RUN des3 false
$RUN fcrypt false
$RUN khazad false

echo "Change into libg"
cd ../libg
$RUN camellia false
$RUN des false
$RUN seed false
$RUN twofish false

echo "Change into supercop"
cd ../supercop
$RUN aes_core false
$RUN cast-ssl false

# echo "Change into botan"
# cd ../botan
# $RUN aes false
# $RUN cast128 false
# $RUN des false
# $RUN kasumi false
# $RUN seed false
# $RUN twofish false

# cd ..
# # How SC-Eliminator taint
# echo "Change into appliedCryp"
# cd appliedCryp
# $RUN 3way true
# $RUN des true
# $RUN loki91 true

# echo "Change into chronos"
# cd ../chronos
# $RUN aes true
# $RUN anubis true
# $RUN cast5 true
# $RUN cast6 true
# $RUN des true
# $RUN des3 true
# $RUN fcrypt true
# $RUN khazad true

# echo "Change into libg"
# cd ../libg
# $RUN camellia true
# $RUN des true
# $RUN seed true
# $RUN twofish true

# echo "Change into supercop"
# cd ../supercop
# $RUN aes_core true
# $RUN cast-ssl true

# # echo "Change into botan"
# # cd ../botan
# # $RUN aes true
# # $RUN cast128 true
# # $RUN des true
# # $RUN kasumi true
# # $RUN seed true
# # $RUN twofish true