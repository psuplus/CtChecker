CC=../../../../Debug+Asserts/bin/clang
LD=../../../../Debug+Asserts/bin/llvm-link

CFLAGS = -isystem include -I include -O0 -g -emit-llvm
LDFLAGS=

TARGET=bn_full.bc

SRCS += bn_add.bc
SRCS += bn_asm.bc
SRCS += bn_blind.bc
SRCS += bn_const.bc
SRCS += bn_ctx.bc
SRCS += bn_depr.bc
SRCS += bn_dh.bc
SRCS += bn_div.bc
SRCS += bn_err.bc
SRCS += bn_exp2.bc
SRCS += bn_exp.bc
SRCS += bn_gcd.bc
SRCS += bn_gf2m.bc
SRCS += bn_intern.bc
SRCS += bn_kron.bc
SRCS += bn_lib.bc
SRCS += bn_mod.bc
SRCS += bn_mont.bc
SRCS += bn_mpi.bc
SRCS += bn_mul.bc
SRCS += bn_nist.bc
SRCS += bn_prime.bc
SRCS += bn_print.bc
SRCS += bn_rand.bc
SRCS += bn_recp.bc
SRCS += bn_shift.bc
SRCS += bn_sqr.bc
SRCS += bn_sqrt.bc
SRCS += bn_srp.bc
SRCS += bn_word.bc
SRCS += bn_x931p.bc
SRCS += rsaz_exp.bc

OBJ_DIR=obj

OBJS=$(SRCS:%.bc=$(OBJ_DIR)/%.bc)

$(TARGET) : $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $^


$(OBJ_DIR)/%.bc : src/%.c obj
	$(CC) $(CFLAGS) -c -o $@ $<


obj:
	 mkdir -p obj

.PHONY: clean
clean:
	rm -r obj


