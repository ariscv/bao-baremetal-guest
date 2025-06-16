#ifndef PLAT_H
#define PLAT_H

#define PLAT_MEM_BASE 0x90000000
#define PLAT_MEM_SIZE 0x4000000

#define PLAT_TIMER_FREQ (10000000ull) //10 MHz

#define PLAT_UART_ADDR (0x10000000)
#define UART_IRQ_ID (1)

/* 没加pmp的时候为了获取Load/Store异常用的 */
#define PLAT_PLIC_BASE  (0x1c000000)

#endif
