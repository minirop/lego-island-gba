#include "defines.h"
#include "functions.h"
#include "variables.h"

void fun_080029c8()
{
    volatile u16 local_18;

    if ((DAT_0200583c == 0) || (DAT_02005cd0 == 0))
    {
        u16 iVar1 = DAT_02005cdc / 256;

        if (0xf < iVar1)
        {
            iVar1 = 0xf;
        }
        local_18 = 0xff;
        if ((DAT_02005838 & 1) != 0)
        {
            local_18 -= 0x40;
        }
        REG_BLDCNT = local_18;
        REG_BLDY = iVar1;
        DAT_02005cdc += DAT_02005840;
        if (0x1700 < (u16)DAT_02005cdc)
        {
            DAT_0200583c = 1;
            DAT_02005cd0 = 1;
            REG_BLDCNT = 0;
            REG_BLDY = 0;
        }
    }
}

void fun_08002a60()
{
    if (DAT_02005834 != NULL)
    {
        u16 i;
        for (i = 0; i < 8; i++)
        {
            if (DAT_02005780[i].unk00 != 0)
            {
                DAT_02005780[i].unk08 += 0x444;

                if (DAT_02005780[i].unk08 >= DAT_02005780[i].unk04)
                {
                    DAT_02005780[i].unk00 = 0;
                    DAT_02005834(DAT_02005780[i].unk02);
                }
            }
        }
    }
}

void fun_08002ac0(u16 param_1, s32 param_2)
{
    u16 uVar2;

    if (DAT_02005834 != NULL)
    {
        uVar2 = 0;
        while (uVar2 < 8 && DAT_02005780[uVar2].unk00 != 0)
        {
            uVar2++;
        }
        assert(uVar2 < 8, "No sequence controllers available");
        DAT_02005780[uVar2].unk00 = 1;
        DAT_02005780[uVar2].unk08 = 0;
        DAT_02005780[uVar2].unk04 = param_2;
        DAT_02005780[uVar2].unk02 = param_1;
    }
}

void fun_08002b34()
{
    u16 i;
    for (i = 0; i < 14; i++)
    {
        DAT_020057f0[i] = DAT_080497ec[i];
    }

    DmaCopy16(3, &GlobalIRQHandler, &DAT_02005850, 0x480);
    INTR_VECTOR = &DAT_02005850;
    fun_08002bb4(fun_0800329c);
}

void fun_08002b94()
{
    fun_08002ba0();
}

void fun_08002ba0()
{
    DAT_02005cd8 &= 0xfffe;
}

void fun_08002bb4(Callback param_1)
{
    DAT_020057e4 = param_1;
    if (param_1 == 0)
    {
        DAT_020057e4 = &fun_0800329c;
    }
}

void fun_08002bcc()
{
    DAT_02005cd8 &= 0xFFFE;
    do
    {
        asm("svc 2");
    } while ((DAT_02005cd8 & 1) == 0);
}

void fun_08002bf0()
{
    IF = 1;
    DAT_02005cd8 = 1;
}
