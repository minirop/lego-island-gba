#include "variables.h"
#include <string.h>

void fun_080004ac(struct_020006a0* param_1, struct_0877bde8* param_2)
{
    param_1->unk00 = &param_2->unk00;
    param_1->unk04 = param_2->unk00;
    param_1->unk06 = param_2->unk02;
    param_1->unk08 = param_2->unk08;
    param_1->unk0c = 0;
    param_1->unk12 = param_2->unk1c;
    param_1->unk14 = param_2->unk1e;
    param_1->unk16 = param_2->unk20;
    param_1->unk10 = param_2->unk10;
    param_1->unk18 = 0;
    param_1->unk1c = NULL;
}

void fun_080004dc(u32 param_1, u32 param_2, char* param_3)
{
    s32 var_sl = DAT_02005210[param_1][0].unk04;
    s32 var_r4 = DAT_02005210[param_1][1].unk04;
    s32 var_ip = DAT_02005210[param_1][2].unk04;
    char* var_r8 = DAT_02005210[param_1][0].unk00;
    char* var_r5 = DAT_02005210[param_1][1].unk00;
    char* var_r0 = DAT_02005210[param_1][2].unk00;

    if (param_2 >= var_sl)
    {
        DAT_02005210[param_1][2].unk04 = var_r4;
        strncpy(DAT_02005210[param_1][2].unk00, var_r5, 3);
        DAT_02005210[param_1][1].unk04 = var_sl;
        strncpy(DAT_02005210[param_1][1].unk00, var_r8, 3);
        DAT_02005210[param_1][0].unk04 = param_2;
        strncpy(DAT_02005210[param_1][0].unk00, param_3, 3);
    }
    else if (param_2 >= var_r4)
    {
        DAT_02005210[param_1][2].unk04 = var_r4;
        strncpy(DAT_02005210[param_1][2].unk00, var_r5, 3);
        DAT_02005210[param_1][1].unk04 = param_2;
        strncpy(DAT_02005210[param_1][1].unk00, param_3, 3);
    }
    else if (param_2 >= var_ip)
    {
        DAT_02005210[param_1][2].unk04 = param_2;
        strncpy(DAT_02005210[param_1][2].unk00, param_3, 3);
    }
}

void fun_08000584()
{
    memset(&DAT_02005210, 0, 0x360);
    fun_080004dc(0x1a, 300, "NOR");
    fun_080004dc(0x1a, 0x96, "KTS");
    fun_080004dc(0x1a, 0x46, "PIH");
    fun_080004dc(4, 0x211, "DAL");
    fun_080004dc(4, 0x1a6, "LAR");
    fun_080004dc(4, 0x67, "JEO");
    fun_080004dc(1, 0x121, "MAT");
    fun_080004dc(1, 0x8c, "DEB");
    fun_080004dc(1, 0x4e, "PIH");
    fun_080004dc(6, 0x12e, "PIH");
    fun_080004dc(6, 0x9a, "MSG");
    fun_080004dc(6, 0x47, "KTS");
    fun_080004dc(8, 0x136, "JEO");
    fun_080004dc(8, 0x92, "DEB");
    fun_080004dc(8, 0x40, "MOS");
    fun_080004dc(10, 0x137, "SAM");
    fun_080004dc(10, 0x8f, "KTS");
    fun_080004dc(10, 0x43, "PIH");
    fun_080004dc(0xe, 0x141, "JEO");
    fun_080004dc(0xe, 0x96, "MOS");
    fun_080004dc(0xe, 0x46, "DEB");
    fun_080004dc(0x10, 300, "JEO");
    fun_080004dc(0x10, 0x96, "MSG");
    fun_080004dc(0x10, 0x4b, "JON");
    fun_080004dc(0x11, 300, "NOR");
    fun_080004dc(0x11, 0x96, "KTS");
    fun_080004dc(0x11, 0x4b, "JEO");
    fun_080004dc(0x1b, 300, "PIH");
    fun_080004dc(0x1b, 0x96, "MOS");
    fun_080004dc(0x1b, 0x40, "JEO");
    fun_080004dc(0x14, 300, "JEO");
    fun_080004dc(0x14, 0x96, "MSG");
    fun_080004dc(0x14, 0x4b, "ROS");
    fun_080004dc(0x15, 300, "KTS");
    fun_080004dc(0x15, 0x96, "ROS");
    fun_080004dc(0x15, 0x4b, "DEB");
    fun_080004dc(0x16, 300, "NOR");
    fun_080004dc(0x16, 0x96, "KTS");
    fun_080004dc(0x16, 0x4b, "DEB");
    fun_080004dc(0x18, 300, "NOR");
    fun_080004dc(0x18, 0x96, "DEB");
    fun_080004dc(0x18, 0x4b, "MOS");
    fun_080004dc(0x19, 300, "KTS");
    fun_080004dc(0x19, 0x96, "DEB");
    fun_080004dc(0x19, 0x4b, "MOS");
    fun_080004dc(0, 300, "NOR");
    fun_080004dc(0, 0x96, "KTS");
    fun_080004dc(0, 0x4b, "LEE");
    fun_080004dc(0x21, 0x7d, "LOA");
    fun_080004dc(0x21, 100, "EIC");
    fun_080004dc(0x21, 0x37, "GSE");
    fun_080004dc(0x22, 0x5f, "HPA");
    fun_080004dc(0x22, 0x37, "AYY");
    fun_080004dc(0x22, 0x19, "PDS");
    fun_080004dc(0x20, 300, "EOH");
    fun_080004dc(0x20, 0x96, "NYI");
    fun_080004dc(0x20, 0x4b, "JTS");
}

int fun_08000870(int param_1, int param_2)
{
    if (DAT_02005210[param_1][0].unk04 == param_2)
    {
        return 0;
    }
    if (DAT_02005210[param_1][1].unk04 == param_2)
    {
        return 1;
    }
    if (DAT_02005210[param_1][2].unk04 == param_2)
    {
        return 2;
    }
    return -1;
}

asm(".space 2");
