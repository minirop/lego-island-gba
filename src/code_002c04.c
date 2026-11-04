#include "functions.h"
#include "gba.h"
#include "variables.h"

u32 fun_08002c04(u32 param_1)
{
    u32 value;
    u32 r2;

    if (param_1 == 0)
        return 0;

    r2 = 37;
    DAT_02005cd4 = DAT_02005cd4 * r2 + 9;

    value = DAT_02005cd4 % (param_1 + 1);
    if (value == param_1)
    {
        return fun_08002c04(param_1);
    }
    return value;
}

void fun_08002c30()
{
    gHeldKeys = 0;
    gNewKeys = 0;
}

void fun_08002c44()
{
    u16 keys = ~REG_KEYINPUT;
    gNewKeys = keys & ~gHeldKeys;
    gHeldKeys = keys;
    gNewKeys &= 0x3FF;
    gHeldKeys &= 0x3FF;
}

s16 fun_08002c84(s16 param_1, s16 param_2)
{
    s32 r0;

    r0 = param_1 * param_2;
    r0 /= 256;
    return r0;
}

s16 fun_08002c9c(s16 param_1, s16 param_2)
{
    return param_1 * 256 / param_2;
}

s16 fun_08002cb4(s16 param_1)
{
    s32 tmp = 0x10000;
    tmp /= param_1;
    return tmp;
}

void fun_08002ccc(u16 param_1)
{
    switch (param_1)
    {
    case 1:
        REG_BLDCNT = 0;
        REG_BLDY = 0;
        break;
    case 0:
        REG_BLDCNT = 0xff;
        REG_BLDY = 0x10;
        break;
    case 2:
        REG_BLDCNT = 0xbf;
        REG_BLDY = 0x10;
        break;
    }

    DAT_02005770 = 0;
}

void fun_08002d20(u16 a, u16 b)
{
    fun_08002d34(a, b, 0x10);
}
