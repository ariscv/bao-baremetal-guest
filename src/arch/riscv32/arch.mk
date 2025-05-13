CROSS_COMPILE ?= riscv64-linux-gnu-
ARCH_GENERIC_FLAGS = -fno-pic \
				-mstrict-align -mcmodel=medany \
				-march=rv32ima_zicsr -mabi=ilp32 
ARCH_ASFLAGS = 
ARCH_CFLAGS = 
ARCH_CPPFLAGS =	
ARCH_LDFLAGS = -melf32lriscv
