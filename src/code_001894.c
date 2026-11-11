#include "functions.h"
#include "variables.h"
#include <string.h>

u32 fun_08001894(u16 param_1)
{
    struct_02002620* ptr = fun_080020a4();
    return ptr->unk0d2a[param_1] != 0;
}

u16 fun_080018bc(u16 param_1)
{
    return DAT_020006a0[DAT_02000690 + param_1].unk08 == 5;
}

void fun_080018e4(u16 param_1)
{
    fun_080020a4()->unk0d2a[param_1] = 0;
    DAT_020006a0[DAT_02000690 + param_1].unk08 = 5;
    fun_080016f0(7);
    if (DAT_08756942[param_1][0] != 0)
    {
        fun_08001a14(DAT_08756942[param_1][0], 0);
    }
}

extern const u16 USHORT_ARRAY_08756a64[];
const u16 USHORT_ARRAY_08049760[] = {
    0x03BE, 0x03BF, 0x03C0, 0x03DC,
    0x03DD, 0x03DE, 0x03DF, 0x03E0,
    0x03E1, 0x03E2, 0x03E3, 0x03E4,
    0x03E5, 0x03E6, 0x03E7, 0x03E8,
    0x03E9, 0x03EA, 0x03EB, 0x03EC,
    0x03ED, 0x03EE
};

static inline u16 foo(u32 x)
{
    return x;
}

void fun_0800193c()
{
    struct_02002620* ptr;
    u16 array[22];

    memcpy(array, USHORT_ARRAY_08049760, 44);

    fun_080016f0(8);
    ptr = fun_080020a4();

    if (ptr->unk0df8 != 0)
    {
        DAT_020025e8 = array[fun_08002c04(100) % 22];
        fun_08001088(0x22);
    }
    else
    {
        u16 i;
        DAT_02002610++;

        for (i = 0; i < 0x46; i++)
        {
            // WTF? https://www.decomp.me/scratch/ExQIt
            // u16 x = (DAT_02002610 << 0x10) >> 0x10;
            u16 x = foo(DAT_02002610);
            if (x)
            {
                u32 p8 = x / 8;
                u8 r4 = 1 << (x & 7);
                if ((fun_080020a4()->unk0e40[p8] & r4) != 0)
                {
                    DAT_020025e8 = USHORT_ARRAY_08756a64[DAT_02002610];
                    fun_08001088(0x22);
                    return;
                }
            }

            DAT_02002610 = (DAT_02002610 + 1) % 0x46;
        }
        DAT_020025e8 = USHORT_ARRAY_08756a64[0];
        fun_08001088(0x22);
    }
}

void fun_08001a14(u16 param_1, u16 param_2)
{
    u32 p8;
    u8 r4;
    u8* dest;

    p8 = param_1 / 8;
    r4 = 1 << (param_1 & 7);

    if (param_2 != 0)
    {
        fun_080020a4()->unk0e40[p8] |= r4;
    }
    else
    {
        fun_080020a4()->unk0e40[p8] &= ~r4;
    }
}

void fun_08001a5c()
{
    memset(&fun_080020a4()->unk0e40, 0, 9);
}

u32 fun_08001a74(u16 param_1)
{
    u32 p8;
    u8 r4;
    struct_02002620* value;

    p8 = param_1 / 8;
    r4 = 1 << (param_1 & 7);

    value = fun_080020a4();
    return (value->unk0e40[p8] & r4) != 0;
}

asm(".space 2");
