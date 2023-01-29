export WD =${PWD}

verify-v1:
	ENTRYPOINTS=fragment_wrapper EXAMPLE=bign2/v1.c make -C ../../../bin verify

verify-v2:
	ENTRYPOINTS=fragment_wrapper EXAMPLE=bign2/v2.c make -C ../../../bin verify

verify-v3:
	ENTRYPOINTS=fragment_wrapper EXAMPLE=bign2/v3.c make -C ../../../bin verify

verify-v4:
	ENTRYPOINTS=fragment_wrapper EXAMPLE=bign2/v4.c make -C ../../../bin verify

clean:
	rm -f v1.bpl v1-instrumented.bpl
	rm -f v2.bpl v2-instrumented.bpl
	rm -f v3.bpl v3-instrumented.bpl
	rm -f v4.bpl v4-instrumented.bpl