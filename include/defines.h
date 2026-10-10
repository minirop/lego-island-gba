#ifndef DEFINES_H
#define DEFINES_H

#include "types.h"

#define IS_BIT_SET(FUNC, VAR, BIT) \
    s32 FUNC()                     \
    {                              \
        if (VAR & BIT) {           \
            return 1;              \
        } else {                   \
            return 0;              \
        }                          \
    }

#endif
