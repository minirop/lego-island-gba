#include "variables.h"

u16* fun_08004694(u16 param_1)
{
    return DAT_03001800[param_1];
}

void fun_080046a4()
{
    u16 i;
    DmaCopy32(3, 0x03002000, OAM, OAM_SIZE);

    for (i = 0; i < DAT_02006d50; i++)
    {
        struct_03001a00* ptr = &DAT_03001a00[i];
        DmaCopy32(3, ptr->unk00, ptr->unk04, ptr->unk08);
    }

    DAT_02006d50 = 0;
}

void fun_08004710()
{
    DAT_02005cf8 = 0;
}
