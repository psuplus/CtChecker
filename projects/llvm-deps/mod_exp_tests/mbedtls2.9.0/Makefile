CC=../../../Debug+Asserts/bin/clang
LD=../../../Debug+Asserts/bin/llvm-link
NM=../../../Debug+Asserts/bin/llvm-nm

CFLAGS= -isystem include -O0 -emit-llvm -g
LDFLAGS=

TEST1=bignum_min.c
TEST1BC=$(TEST1:.c=.bc)

TEST2=bignum.c
TEST2BC=$(TEST2:.c=.bc)

test1.bc: $(TEST1BC)
	$(LD) $(LDFLAGS)  $^ -o $@

test2.bc: $(TEST2BC)
	$(LD) $(LDFLAGS)  $^ -o $@

%.fn : %.bc
	$(NM) $< > $@

%.bc: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

%.ll : %.c
	$(CC) $(CFLAGS) -S $<

clean:
	$(RM) *.bc
