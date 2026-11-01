#include "functions.h"
#include "variables.h"

void fun_080017ac()
{
    fun_0803fbf8();
}

void fun_080017b8(u16 param_1)
{
    DAT_02002608 = param_1;

    if (param_1 != 0x3f)
    {
        struct_02002620* ptr = fun_080020a4();
        ptr->unk0d2a[param_1] = DAT_087568bc[param_1];
        DAT_020006a0[DAT_02000690 + param_1].unk08 = 4;
    }
    DAT_0200260c = &DAT_08063750;
    DAT_02002604 = DAT_087568bc[param_1];
    DAT_02002600 = &DAT_020006a0[DAT_02000690 + param_1];

    switch (param_1)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        fun_08001088(0x12);
    }

    if (DAT_08756942[param_1][0] != 0)
    {
        fun_08001a14(DAT_08756942[param_1][0], 1);
    }
    if (DAT_08756942[param_1][1] != 0)
    {
        fun_08001a14(DAT_08756942[param_1][1], 0);
    }
}

void fun_0800186c()
{
    u16 i;
    for (i = 0; i < 0x46; i++)
    {
        fun_080020a4()->unk0d2a[i] = 0;
    }
}
