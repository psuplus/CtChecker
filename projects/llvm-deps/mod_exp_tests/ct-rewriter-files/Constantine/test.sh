RUN="./run.sh"
# $RUN source_file MEM2REG(true or false)

for MEM2REG in true false ;
    do
        echo "Change into binsec"
        cd binsec
        $RUN aes_big $MEM2REG
        $RUN des_tab $MEM2REG
        $RUN tls-rempad-luk13 $MEM2REG

        echo "Change into appliedCryp"
        cd ../issta18/appliedCryp
        $RUN 3way $MEM2REG
        $RUN des $MEM2REG
        $RUN loki91 $MEM2REG

        # echo "Change into chronos"
        # cd ../chronos
        # $RUN aes1_opt $MEM2REG
        # $RUN aes1_wo_opt $MEM2REG
        # $RUN anubis1_opt $MEM2REG
        # $RUN anubis1_wo_opt $MEM2REG
        # $RUN cast51_opt $MEM2REG
        # $RUN cast51_wo_opt $MEM2REG
        # $RUN cast61_opt $MEM2REG
        # $RUN cast61_wo_opt $MEM2REG
        # $RUN des_1_opt $MEM2REG
        # $RUN des_1_wo_opt $MEM2REG
        # $RUN des31_opt $MEM2REG
        # $RUN des31_wo_opt $MEM2REG
        # $RUN fcrypt1_opt $MEM2REG
        # $RUN fcrypt1_wo_opt $MEM2REG
        # $RUN khazad1_opt $MEM2REG
        # $RUN khazad1_wo_opt $MEM2REG

        echo "Change into ghostrider"
        cd ../ghostrider
        $RUN findmax $MEM2REG
        $RUN matmul $MEM2REG

        # echo "Change into libg"
        # cd ../libg
        # $RUN des $MEM2REG

        # echo "Change into supercop"
        # cd ../supercop $MEM2REG
        # $RUN aes_core1_opt $MEM2REG
        # $RUN aes_core1_wo_opt $MEM2REG
        # $RUN cast-ssl1_opt $MEM2REG
        # $RUN cast-ssl1_wo_opt $MEM2REG

        echo "Change into pycrypto"
        cd ../../pycrypto
        # cd pycrypto
        $RUN ARC4 $MEM2REG

        cd ..
    done