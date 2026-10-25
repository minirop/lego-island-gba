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

#ifdef NONMATCHING
void fun_080004dc(u32 param_1, u32 param_2, char* param_3)
{
    if (param_2 >= DAT_02005210[param_1][0].unk04)
    {
        DAT_02005210[param_1][2].unk04 = DAT_02005210[param_1][1].unk04;
        strncpy(DAT_02005210[param_1][2].unk00, DAT_02005210[param_1][1].unk00, 3);
        DAT_02005210[param_1][1].unk04 = DAT_02005210[param_1][0].unk04;
        strncpy(DAT_02005210[param_1][1].unk00, DAT_02005210[param_1][0].unk00, 3);
        DAT_02005210[param_1][0].unk04 = param_2;
        strncpy(DAT_02005210[param_1][0].unk00, param_3, 3);
    }
    else if (param_2 >= DAT_02005210[param_1][1].unk04)
    {
        DAT_02005210[param_1][2].unk04 = DAT_02005210[param_1][1].unk04;
        strncpy(DAT_02005210[param_1][2].unk00, DAT_02005210[param_1][1].unk00, 3);
        DAT_02005210[param_1][1].unk04 = param_2;
        strncpy(DAT_02005210[param_1][1].unk00, param_3, 3);
    }
    else if (param_2 >= DAT_02005210[param_1][2].unk04)
    {
        DAT_02005210[param_1][2].unk04 = param_2;
        strncpy(DAT_02005210[param_1][2].unk00, param_3, 3);
    }
}
#else
__attribute__((naked)) void fun_080004dc(u32 param_1, u32 param_2, char* param_3)
{
    asm("\n\
    push       {r4,r5,r6,r7,lr}\n\
    mov        r7,r10\n\
    mov        r6,r9\n\
    mov        r5,r8\n\
    push       {r5,r6,r7}\n\
    sub        sp,#0x4\n\
    add        r6,r1,#0x0\n\
    mov        r9,r2\n\
    ldr        r2,DAT_08000540\n\
    lsl        r1,r0,#0x1\n\
    add        r1,r1,r0\n\
    lsl        r1,r1,#0x3\n\
    add        r0,r2,#0x4\n\
    add        r0,r1,r0\n\
    str        r0,[sp,#0x0]\n\
    ldr        r0,[r0,#0x0]\n\
    mov        r10,r0\n\
    add        r0,r2,#0x0\n\
    add        r0,#0xc\n\
    add        r7,r1,r0\n\
    ldr        r4,[r7,#0x0]\n\
    add        r0,#0x8\n\
    add        r3,r1,r0\n\
    ldr        r0,[r3,#0x0]\n\
    mov        r12,r0\n\
    add        r0,r1,r2\n\
    mov        r8,r0\n\
    add        r0,r2,#0x0\n\
    add        r0,#0x8\n\
    add        r5,r1,r0\n\
    add        r0,#0x8\n\
    cmp        r6,r10\n\
    bcc        LAB_08000544\n\
    str        r4,[r3,#0x0]\n\
    add        r0,r1,r0\n\
    add        r1,r5,#0x0\n\
    mov        r2,#0x3\n\
    bl         strncpy\n\
    mov        r3,r10\n\
    str        r3,[r7,#0x0]\n\
    add        r0,r5,#0x0\n\
    mov        r1,r8\n\
    mov        r2,#0x3\n\
    bl         strncpy\n\
    ldr        r0,[sp,#0x0]\n\
    str        r6,[r0,#0x0]\n\
    mov        r0,r8\n\
    b          LAB_08000558\n\
DAT_08000540: .word 0x02005210\n\
LAB_08000544:\n\
    cmp        r6,r4\n\
    bcc        LAB_08000562\n\
    str        r4,[r3,#0x0]\n\
    add        r0,r1,r0\n\
    add        r1,r5,#0x0\n\
    mov        r2,#0x3\n\
    bl         strncpy\n\
    str        r6,[r7,#0x0]\n\
    add        r0,r5,#0x0\n\
LAB_08000558:\n\
    mov        r1,r9\n\
    mov        r2,#0x3\n\
    bl         strncpy\n\
    b          LAB_08000572\n\
LAB_08000562:\n\
    cmp        r6,r12\n\
    bcc        LAB_08000572\n\
    str        r6,[r3,#0x0]\n\
    add        r0,r1,r0\n\
    mov        r1,r9\n\
    mov        r2,#0x3\n\
    bl         strncpy\n\
LAB_08000572:\n\
    add        sp,#0x4\n\
    pop        {r3,r4,r5}\n\
    mov        r8,r3\n\
    mov        r9,r4\n\
    mov        r10,r5\n\
    pop        {r4,r5,r6,r7}\n\
    pop        {r0}\n\
    bx         r0\n\
    ");
}
#endif

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
