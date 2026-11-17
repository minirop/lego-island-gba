#ifndef DEFINES_H
#define DEFINES_H

#include "gba.h"

#define IS_BIT_SET(FUNC, VAR, BIT) \
    s16 FUNC()                     \
    {                              \
        if (VAR & BIT)             \
        {                          \
            return 1;              \
        }                          \
        else                       \
        {                          \
            return 0;              \
        }                          \
    }

#define SET_DAT_u8_u16(arr, idx0, idx1) (*(u16*)((u8*)arr[idx0] + idx1))

// useful math macros

// Converts a number to Q8.8 fixed-point format
#define Q_8_8(n) ((s16)((n) * 256))

// Converts a number to Q16.16 fixed-point format
#define Q_16_16(n) ((s32)((n) * 0x10000))

// Converts a number to Q4.12 fixed-point format
#define Q_4_12(n) ((s16)((n) * 4096))

#endif
