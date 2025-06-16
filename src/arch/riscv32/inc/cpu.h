#ifndef CPU_H
#define CPU_H

#include <core.h>
#include <stdint.h>
#include <csrs.h>

extern int primary_hart;

static inline uint32_t get_cpuid(){
    return CSRR(sscratch);
}

static inline bool cpu_is_master(){
    return get_cpuid() == primary_hart;
}

#endif
