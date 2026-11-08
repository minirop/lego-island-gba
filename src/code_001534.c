#include "functions.h"
#include "variables.h"

s32 fun_08001534(void)
{
    struct_08001534 unk;

    unk.unk00 = 0x2c85;
    unk.unk03 = 0;
    unk.unk02 = 8;
    unk.unk04 = 0;
    unk.unk08 = DAT_086ccfe0;
    if (0x1800 < fun_08042838(&unk, unk.unk1c))
    {
        do
        {
        } while (true);
    }
    fun_08042a24(unk.unk1c, &DAT_03000000, &unk.unk0c);
    fun_0803d20c(&unk, &unk.unk0c);
    fun_0803d4b0(0x7fff, 0xffff, 0x7fff);
    DAT_020025d0 = -1;

    return 0;
}

// should be fun_08001774
static inline s16 fun_080015b8_inlined(u16 param_1)
{
    u16 i;

    for (i = 0; i < 0x98; i += 1)
    {
        if (param_1 == DAT_0875678c[i][0])
        {
            return DAT_0875678c[i][1];
        }
    }

    return -1;
}

void fun_080015b8(u16 param_1)
{
    u8 eight;
    s16 unk = fun_080015b8_inlined(param_1);

    if (DAT_02005750[0] != 0)
    {
        fun_08041bfc(3);
        DAT_020025d0 = -1;
        return;
    }

    switch (unk)
    {
    case -1:
        break;
    case -2:
        fun_08041bfc(3);
        DAT_020025d0 = -1;
        break;
    case -3:
        if (fun_080020a4()->unk0d20[1] != DAT_020025d0 && fun_08001118() == 0)
        {
            fun_08041bfc(3);
            DAT_020025d0 = -1;
            unk = fun_080020a4()->unk0d20[1];
            fun_08041a44(unk);
            fun_08042614();
            DAT_020025d0 = unk;
        }
        break;
    default:
        if (unk - DAT_020025d0 != 0)
        {
            fun_08041bfc(3);
            DAT_020025d0 = -1;
            eight = unk;
            fun_08041a44(eight);
            fun_08042614();
            DAT_020025d0 = eight;
        }
    }
}

s32 fun_080016b0(u8 param_1)
{
    fun_08041a44(param_1);
    fun_08042614();
    DAT_020025d0 = param_1;
    return 0;
}

s32 fun_080016d4()
{
    fun_08041bfc(3);
    DAT_020025d0 = -1;
    return 0;
}

s32 fun_080016f0(u16 param_1)
{
    return fun_0803d60c(param_1, 0xff, 0x7f, 0x40);
}

void fun_08001704()
{
    fun_0803dd20();
}

void fun_08001710()
{
    fun_0803d518();
    fun_0803d5bc();
}

void fun_08001720()
{
    u8 b;
    u16 a = DAT_020025d0;
    fun_08001534();
    b = a;
    fun_08041a44(b);
    fun_08042614();
    DAT_020025d0 = b;
}
