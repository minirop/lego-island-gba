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

#endif
