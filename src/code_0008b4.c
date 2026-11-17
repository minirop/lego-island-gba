#include "functions.h"
#include "variables.h"
#include <string.h>

struct_02005210* fun_080008b4(struct_02005210* param_1, int param_2, int param_3)
{
    struct_02005210 local;
    local.unk04 = DAT_02005210[param_2][param_3].unk04;
    strcpy(local.unk00, DAT_02005210[param_2][param_3].unk00);
    memcpy(param_1, &local, 8);
    return param_1;
}

void fun_080008f0()
{
    fun_08002160();
    DAT_020025d0 = 0xf;
    fun_080011a8(0);
    fun_080011b4(0);
    memcpy(DAT_020025c0, "   ", 4);
    DAT_02002528 = 0;
    fun_08001534();
    DAT_0200252c = 0;
    DAT_020025bc = 0;
    DAT_020025f8 = 0;
    DAT_02005570 = 0;
    DAT_020025d4 = 0;
    DAT_02002524 = -1;
    DAT_02002530 = 0;
    DAT_020025e0 = 0;
    current_level = 0;
    DAT_020025d8 = 0x2329;
    DAT_02000000 = 0;
    DAT_020025c8 = -1;
    DAT_02005750.unk00 = 0;
    selected_language = 0;
    fun_08002bb4(fun_08000d1c);
    DAT_02002548 = 0;
    fun_08002c30();
    fun_080011d8();
    DAT_02002544 = 0;
    DAT_020025ec = 0;
    DAT_020025f0 = NULL;
    fun_08002ccc(1);

    while (1)
    {
        DAT_020025f4 = 0;
        fun_08002c44();
        if (DAT_02005750.unk00 != 0)
        {
            DAT_02005750.unk02 = fun_080026f0();
            DAT_02005750.unk0c = fun_08002968();
            DAT_02005750.unk04 = fun_08002878();
        }
        if (DAT_020025e0 != 0)
        {
            levels[current_level]->unk2c();
            DAT_020025c4 = DAT_020025c4 + 1;
        }
        fun_08003cfc();
        if (DAT_02005750.unk00 != 0)
        {
            if (1999 < DAT_020025e0)
            {
                if ((DAT_02005750.unk04 == 0) && IS_START_PRESSED)
                {
                    DAT_02005760[0] = 4;
                    fun_08000dbc();
                }
                else if (DAT_02005710[0][0] == 4)
                {
                    fun_08000dbc();
                }
            }
        }
        else
        {
            if (((is_start_pressed() != 0) && (DAT_020025e0 != 0x7d4)) && ((DAT_020025e0 == 0x14 || ((DAT_020025e0 == 0x16 || (1999 < DAT_020025e0))))))
            {
                fun_08000dbc();
            }
        }

        if (DAT_020025d8 != 0)
        {
            fun_08000b44();
        }
        if ((DAT_020025e0 == 0x14) || (DAT_020025e0 == 0x16) || (DAT_020025e0 == 0x7e2) || (DAT_020025e0 == 0x3ea) || (DAT_020025e0 == 0x3eb) || (DAT_020025e0 == 0x7e8) || (DAT_020025e0 == 0x3e9))
        {
            while (DAT_020025f4 < 2)
            {
                fun_08002bcc();
            }
        }
        else
        {
            fun_08002bcc();
        }
        fun_08002df8();
        fun_080046a4();
        if ((DAT_020025e0 != 0) && (DAT_020025f0 != NULL))
        {
            DAT_020025f0();
        }
    }
}

// https://www.decomp.me/scratch/MFFkQ
__attribute__((naked)) void fun_08000b44()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    ldr         r1,DAT_08000b84\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_08000b88\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000b56\n\
    b           LAB_08000d0a\n\
LAB_08000b56:\n\
    ldr         r0,DAT_08000b8c\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000bc4\n\
    ldr         r0,DAT_08000b90\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000b9e\n\
    mov         r2,#0x0\n\
    ldr         r3,DAT_08000b94\n\
    add         r0,r1,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1b\n\
    bhi         LAB_08000b76\n\
    mov         r2,#0x1\n\
LAB_08000b76:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08000b98\n\
    mov         r0,#0x14\n\
    bl          fun_080012c0\n\
    b           LAB_08000b9e\n\
\n\
.space 2\n\
\n\
DAT_08000b84:\n\
    .word 0x020025F0\n\
DAT_08000b88:\n\
    .word 0x020025D8\n\
DAT_08000b8c:\n\
    .word 0x020025E0\n\
DAT_08000b90:\n\
    .word 0x020025B0\n\
DAT_08000b94:\n\
    .word 0xFFFFF830\n\
LAB_08000b98:\n\
    mov         r0,#0x4\n\
    bl          fun_080012c0\n\
LAB_08000b9e:\n\
    ldr         r1,DAT_08000bb8\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08000bbc\n\
    ldr         r0,DAT_08000bc0\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x28]\n\
    bl          _call_via_r0\n\
    b           LAB_08000bca\n\
DAT_08000bb8:\n\
    .word 0x020025B0\n\
DAT_08000bbc:\n\
    .word 0x08756AEC\n\
DAT_08000bc0:\n\
    .word 0x02002560\n\
LAB_08000bc4:\n\
    mov         r0,#0x2\n\
    bl          fun_08002ccc\n\
LAB_08000bca:\n\
    ldr         r1,DAT_08000bec\n\
    ldr         r2,DAT_08000bf0\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08000bf4\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r3,DAT_08000bf8\n\
    add         r7,r0,#0x0\n\
    add         r4,r2,#0x0\n\
    cmp         r1,r3\n\
    beq         LAB_08000c0c\n\
    cmp         r1,r3\n\
    bgt         LAB_08000bfc\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000c08\n\
    b           LAB_08000c54\n\
\n\
.space 2\n\
\n\
DAT_08000bec:\n\
    .word 0x02002534\n\
DAT_08000bf0:\n\
    .word 0x020025E0\n\
DAT_08000bf4:\n\
    .word 0x020025D8\n\
DAT_08000bf8:\n\
    .word 0x00002329\n\
LAB_08000bfc:\n\
    ldr         r0,DAT_08000c04\n\
    cmp         r1,r0\n\
    beq         LAB_08000c24\n\
    b           LAB_08000c54\n\
DAT_08000c04:\n\
    .word 0x0000232A\n\
LAB_08000c08:\n\
    strh        r1,[r4,#0x0]\n\
    b           LAB_08000c8a\n\
LAB_08000c0c:\n\
    ldr         r1,DAT_08000c1c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08000c20\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x8]\n\
    b           LAB_08000c88\n\
\n\
.space 2\n\
\n\
DAT_08000c1c:\n\
    .word 0x02002560\n\
DAT_08000c20:\n\
    .word 0x08756AEC\n\
LAB_08000c24:\n\
    ldr         r2,DAT_08000c44\n\
    ldrh        r1,[r2,#0x0]\n\
    ldr         r0,DAT_08000c48\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,#0x1\n\
    cmp         r1,r0\n\
    bge         LAB_08000c36\n\
    add         r0,r1,#0x1\n\
    strh        r0,[r2,#0x0]\n\
LAB_08000c36:\n\
    ldr         r1,DAT_08000c4c\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x8]\n\
    b           LAB_08000c88\n\
DAT_08000c44:\n\
    .word 0x02002560\n\
DAT_08000c48:\n\
    .word 0x08756BC0\n\
DAT_08000c4c:\n\
    .word 0x08756AEC\n\
LAB_08000c50:\n\
    add         r0,r1,#0x0\n\
    b           LAB_08000c82\n\
LAB_08000c54:\n\
    ldrh        r3,[r7,#0x0]\n\
    mov         r1,#0x0\n\
    ldr         r0,DAT_08000cdc\n\
    ldrh        r2,[r0,#0x0]\n\
    ldr         r5,DAT_08000ce0\n\
    mov         r12,r5\n\
    add         r6,r0,#0x0\n\
    cmp         r1,r2\n\
    bcs         LAB_08000c7e\n\
    ldr         r5,DAT_08000ce4\n\
LAB_08000c68:\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r5\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x8]\n\
    cmp         r0,r3\n\
    beq         LAB_08000c50\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    cmp         r1,r2\n\
    bcc         LAB_08000c68\n\
LAB_08000c7e:\n\
    ldrh        r0,[r6,#0x0]\n\
    add         r0,#0x1\n\
LAB_08000c82:\n\
    mov         r1,r12\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r0,[r7,#0x0]\n\
LAB_08000c88:\n\
    strh        r0,[r4,#0x0]\n\
LAB_08000c8a:\n\
    mov         r5,#0x0\n\
    strh        r5,[r7,#0x0]\n\
    ldrh        r1,[r4,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000cfc\n\
    ldr         r1,DAT_08000ce4\n\
    ldr         r0,DAT_08000ce0\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x24]\n\
    bl          _call_via_r0\n\
    ldr         r0,DAT_08000ce8\n\
    strh        r5,[r0,#0x0]\n\
    ldrh        r0,[r4,#0x0]\n\
    bl          fun_080015b8\n\
    ldr         r0,DAT_08000cec\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000d00\n\
    mov         r1,#0x0\n\
    ldrh        r4,[r4,#0x0]\n\
    ldr         r2,DAT_08000cf0\n\
    add         r0,r4,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1b\n\
    bhi         LAB_08000cca\n\
    mov         r1,#0x1\n\
LAB_08000cca:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000cf4\n\
    mov         r0,#0x14\n\
    bl          fun_0800122c\n\
    bl          fun_08000e68\n\
    b           LAB_08000d00\n\
\n\
.space 2\n\
\n\
DAT_08000cdc:\n\
    .word 0x08756BC0\n\
DAT_08000ce0:\n\
    .word 0x02002560\n\
DAT_08000ce4:\n\
    .word 0x08756AEC\n\
DAT_08000ce8:\n\
    .word 0x020025EC\n\
DAT_08000cec:\n\
    .word 0x020025B0\n\
DAT_08000cf0:\n\
    .word 0xFFFFF830\n\
LAB_08000cf4:\n\
    mov         r0,#0x4\n\
    bl          fun_0800122c\n\
    b           LAB_08000d00\n\
LAB_08000cfc:\n\
    ldr         r0,DAT_08000d10\n\
    strh        r1,[r0,#0x0]\n\
LAB_08000d00:\n\
    ldr         r0,DAT_08000d14\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000d18\n\
    strh        r1,[r0,#0x0]\n\
LAB_08000d0a:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08000d10:\n\
    .word 0x020025EC\n\
DAT_08000d14:\n\
    .word 0x02002548\n\
DAT_08000d18:\n\
    .word 0x020025C4\n\
    ");
}

void fun_08000d1c()
{
    u32 tmp;

    if (DAT_02005750.unk00 != 0)
    {
        fun_0800294c();
    }

    tmp = DAT_02000000++;
    if (!tmp)
    {
        fun_080496e8();
        fun_0803f0d0();
    }
    DAT_02000000--;
    DAT_020025f4++;

    if (levels[current_level]->unk34 != NULL)
    {
        levels[current_level]->unk34();
    }
    DAT_02002548++;

    if (DAT_020025e0 != 5)
    {
        fun_080020a4()->unk1c++;
        if (fun_080020a4()->unk1c == 0x3c)
        {
            fun_080020a4()->unk1c = 0;
            fun_080020a4()->unk18++;
        }
    }
}

// body generated at the end of the TU
inline u16 fun_080012e8(u16 param_1)
{
    u16 i;
    for (i = 0; i < levels_count; ++i)
    {
        if (levels[i]->unk08 == param_1)
        {
            return i;
        }
    }
    return levels_count + 1;
}

void fun_08000dbc()
{
    u16 level_id = fun_080012e8(0xbb9);

    if (level_id <= levels_count)
    {
        s32 ret;
        levels[level_id]->unk24();

        do
        {
            fun_08002c44();
            if (DAT_02005750.unk00 != 0)
            {
                DAT_02005750.unk02 = fun_080026f0();
                DAT_02005750.unk0c = fun_08002968();
                DAT_02005750.unk04 = fun_08002878();
            }
            ret = levels[level_id]->unk2c();
            fun_08003cfc();
            fun_08002bcc();
            fun_080046a4();
        } while (ret == 0);
        levels[level_id]->unk28();
    }
}

__attribute__((naked)) void fun_08000e68()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r5,#0xb4\n\
    mov         r6,#0x3c\n\
    ldr         r0,DAT_08000e98\n\
    bl          fun_08003998\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    beq         LAB_08000edc\n\
    mov         r1,#0x0\n\
    mov         r0,#0x68\n\
    strh        r0,[r4,#0x2]\n\
    mov         r0,#0x30\n\
    strh        r0,[r4,#0x4]\n\
    strh        r1,[r4,#0x6]\n\
    mov         r0,#0x2\n\
    strh        r0,[r4,#0x0]\n\
LAB_08000e8a:\n\
    lsl         r0,r5,#0x10\n\
    asr         r1,r0,#0x10\n\
    add         r2,r0,#0x0\n\
    cmp         r1,#0x3c\n\
    bne         LAB_08000e9c\n\
    mov         r0,#0x0\n\
    b           LAB_08000ea2\n\
DAT_08000e98:\n\
    .word 0x08063730\n\
LAB_08000e9c:\n\
    cmp         r1,#0x78\n\
    bne         LAB_08000ea6\n\
    mov         r0,#0x1\n\
LAB_08000ea2:\n\
    strh        r0,[r4,#0x0]\n\
    mov         r6,#0x3c\n\
LAB_08000ea6:\n\
    ldr         r1,DAT_08000ee4\n\
    add         r0,r2,r1\n\
    lsr         r5,r0,#0x10\n\
    lsl         r1,r6,#0x10\n\
    ldr         r0,DAT_08000ee4\n\
    add         r1,r1,r0\n\
    lsr         r6,r1,#0x10\n\
    lsl         r1,r1,#0x2\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x10\n\
    add         r1,r1,r0\n\
    lsr         r1,r1,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_080047d0\n\
    bl          fun_08003cfc\n\
    bl          fun_08002bcc\n\
    bl          fun_080046a4\n\
    lsl         r0,r5,#0x10\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08000e8a\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003b00\n\
LAB_08000edc:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08000ee4:\n\
    .word 0xFFFF0000\n\
    ");
}
__attribute__((naked)) u16 fun_08000ee8(u16 param_1)
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    add         r2,r1,#0x0\n\
    ldr         r0,DAT_08000f18\n\
    cmp         r1,r0\n\
    bne         LAB_08000ef6\n\
    b           LAB_0800100e\n\
LAB_08000ef6:\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f60\n\
    sub         r0,#0xc\n\
    cmp         r1,r0\n\
    bne         LAB_08000f02\n\
    b           LAB_08000fec\n\
LAB_08000f02:\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f30\n\
    sub         r0,#0x6\n\
    cmp         r1,r0\n\
    beq         LAB_08000fd2\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f1c\n\
    sub         r0,#0x3d\n\
    cmp         r1,r0\n\
    beq         LAB_08000fcc\n\
    b           LAB_0800106c\n\
DAT_08000f18:\n\
    .word 0x0000028D\n\
LAB_08000f1c:\n\
    ldr         r0,DAT_08000f2c\n\
    cmp         r1,r0\n\
    beq         LAB_08000fdc\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08000fe4\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f2c:\n\
    .word 0x0000027D\n\
LAB_08000f30:\n\
    ldr         r0,DAT_08000f48\n\
    cmp         r1,r0\n\
    beq         LAB_08001004\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f4c\n\
    sub         r0,#0x4\n\
    cmp         r1,r0\n\
    beq         LAB_08000ff4\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08000ffc\n\
    b           LAB_0800106c\n\
DAT_08000f48:\n\
    .word 0x00000287\n\
LAB_08000f4c:\n\
    ldr         r0,DAT_08000f5c\n\
    cmp         r1,r0\n\
    beq         LAB_08001008\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001018\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f5c:\n\
    .word 0x00000289\n\
LAB_08000f60:\n\
    ldr         r0,DAT_08000f80\n\
    cmp         r1,r0\n\
    bne         LAB_08000f68\n\
    b           LAB_08001040\n\
LAB_08000f68:\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f98\n\
    sub         r0,#0x6\n\
    cmp         r1,r0\n\
    beq         LAB_08001028\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f84\n\
    sub         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001020\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f80:\n\
    .word 0x00000297\n\
LAB_08000f84:\n\
    ldr         r0,DAT_08000f94\n\
    cmp         r1,r0\n\
    beq         LAB_08001030\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001036\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f94:\n\
    .word 0x00000293\n\
LAB_08000f98:\n\
    ldr         r0,DAT_08000fb0\n\
    cmp         r1,r0\n\
    beq         LAB_08001058\n\
    cmp         r1,r0\n\
    bgt         LAB_08000fb4\n\
    sub         r0,#0x4\n\
    cmp         r1,r0\n\
    beq         LAB_08001048\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001050\n\
    b           LAB_0800106c\n\
DAT_08000fb0:\n\
    .word 0x0000029D\n\
LAB_08000fb4:\n\
    ldr         r0,DAT_08000fc4\n\
    cmp         r2,r0\n\
    beq         LAB_08001060\n\
    ldr         r0,DAT_08000fc8\n\
    cmp         r2,r0\n\
    beq         LAB_08001068\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000fc4:\n\
    .word 0x0000029F\n\
DAT_08000fc8:\n\
    .word 0x00000441\n\
LAB_08000fcc:\n\
    mov         r0,#0xfa\n\
    lsl         r0,r0,#0x3\n\
    b           LAB_0800106e\n\
LAB_08000fd2:\n\
    ldr         r0,DAT_08000fd8\n\
    b           LAB_0800106e\n\
\n\
.space 2\n\
\n\
DAT_08000fd8:\n\
    .word 0x000007EA\n\
LAB_08000fdc:\n\
    ldr         r0,DAT_08000fe0\n\
    b           LAB_0800106e\n\
DAT_08000fe0:\n\
    .word 0x000007E6\n\
LAB_08000fe4:\n\
    ldr         r0,DAT_08000fe8\n\
    b           LAB_0800106e\n\
DAT_08000fe8:\n\
    .word 0x000007DE\n\
LAB_08000fec:\n\
    ldr         r0,DAT_08000ff0\n\
    b           LAB_0800106e\n\
DAT_08000ff0:\n\
    .word 0x000007D2\n\
LAB_08000ff4:\n\
    ldr         r0,DAT_08000ff8\n\
    b           LAB_0800106e\n\
DAT_08000ff8:\n\
    .word 0x000007E5\n\
LAB_08000ffc:\n\
    ldr         r0,DAT_08001000\n\
    b           LAB_0800106e\n\
DAT_08001000:\n\
    .word 0x000007D1\n\
LAB_08001004:\n\
    mov         r0,#0x18\n\
    b           LAB_0800106e\n\
LAB_08001008:\n\
    mov         r0,#0xfc\n\
    lsl         r0,r0,#0x3\n\
    b           LAB_0800106e\n\
LAB_0800100e:\n\
    ldr         r0,DAT_08001014\n\
    b           LAB_0800106e\n\
\n\
.space 2\n\
\n\
DAT_08001014:\n\
    .word 0x000007E1\n\
LAB_08001018:\n\
    ldr         r0,DAT_0800101c\n\
    b           LAB_0800106e\n\
DAT_0800101c:\n\
    .word 0x000007DF\n\
LAB_08001020:\n\
    ldr         r0,DAT_08001024\n\
    b           LAB_0800106e\n\
DAT_08001024:\n\
    .word 0x000007E9\n\
LAB_08001028:\n\
    ldr         r0,DAT_0800102c\n\
    b           LAB_0800106e\n\
DAT_0800102c:\n\
    .word 0x000007D4\n\
LAB_08001030:\n\
    mov         r0,#0xfd\n\
    lsl         r0,r0,#0x3\n\
    b           LAB_0800106e\n\
LAB_08001036:\n\
    ldr         r0,DAT_0800103c\n\
    b           LAB_0800106e\n\
\n\
.space 2\n\
\n\
DAT_0800103c:\n\
    .word 0x000007E3\n\
LAB_08001040:\n\
    ldr         r0,DAT_08001044\n\
    b           LAB_0800106e\n\
DAT_08001044:\n\
    .word 0x000007EB\n\
LAB_08001048:\n\
    ldr         r0,DAT_0800104c\n\
    b           LAB_0800106e\n\
DAT_0800104c:\n\
    .word 0x000007E2\n\
LAB_08001050:\n\
    ldr         r0,DAT_08001054\n\
    b           LAB_0800106e\n\
DAT_08001054:\n\
    .word 0x000007E4\n\
LAB_08001058:\n\
    ldr         r0,DAT_0800105c\n\
    b           LAB_0800106e\n\
DAT_0800105c:\n\
    .word 0x000007DA\n\
LAB_08001060:\n\
    ldr         r0,DAT_08001064\n\
    b           LAB_0800106e\n\
DAT_08001064:\n\
    .word 0x000007D6\n\
LAB_08001068:\n\
    mov         r0,#0x29\n\
    b           LAB_0800106e\n\
LAB_0800106c:\n\
    mov         r0,#0x0\n\
LAB_0800106e:\n\
    bx          lr\n\
    ");
}

void fun_08001070(u16 param_1)
{
    DAT_020025d8 = param_1;
    fun_08002114(param_1);
}

void fun_08001088(u16 param_1)
{
    if (DAT_02002544 != 0x20)
    {
        fun_08002114(param_1);
        DAT_02002570[DAT_02002544] = DAT_020025e0;
        DAT_02002544++;
        DAT_020025d8 = param_1;
        if (param_1 == 0x1a)
        {
            DAT_020025b0 = 1;
        }
    }
}

void fun_080010d8()
{
    s32 ret;
    vu16* ptr;

    if (DAT_02002544 == 0)
    {
        ptr = &DAT_020025d8;
        *ptr = 0x232a;
    }
    else
    {
        DAT_02002544--;
        DAT_020025d8 = DAT_02002570[DAT_02002544];
        ptr = &DAT_020025ec;
        *ptr = 1;
    }
}

u8 fun_08001118()
{
    return DAT_020025ec;
}

u16 fun_08001124()
{
    return DAT_02002534;
}

__attribute__((naked)) void fun_08001130()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    ldr         r0,DAT_08001164\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,#0x3b\n\
    bls         LAB_08001158\n\
    mov         r5,#0x0\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r6,DAT_08001168\n\
    ldr         r4,DAT_0800116c\n\
    ldrh        r1,[r4,#0x0]\n\
    lsl         r0,r1,#0x8\n\
    mov         r1,#0xf0\n\
    lsl         r1,r1,#0x6\n\
    bl          fun_0800354c\n\
    mov         r1,#0x3c\n\
    bl          fun_0800353c\n\
    str         r0,[r6,#0x0]\n\
    strh        r5,[r4,#0x0]\n\
LAB_08001158:\n\
    ldr         r0,DAT_08001168\n\
    ldrh        r0,[r0,#0x0]\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08001164:\n\
    .word 0x02002548\n\
DAT_08001168:\n\
    .word 0x02002540\n\
DAT_0800116c:\n\
    .word 0x020025C4\n\
    ");
}

void fun_08001170(Callback param_1)
{
    DAT_020025f0 = param_1;
}

void fun_0800117c()
{
    DAT_020025b0 = 1;
}

void fun_08001188()
{
    u16 tmp;
    DAT_02002544 = 0;
    tmp = 0xe;
    DAT_020025d8 = tmp;
    fun_08002114(0xe);
}

void fun_080011a8(Callback param_1)
{
    DAT_020025dc = param_1;
}

void fun_080011b4(Callback param_1)
{
    DAT_020025cc = param_1;
}

s32 fun_080011c0()
{
    return DAT_020025dc;
}

s32 fun_080011cc()
{
    return DAT_020025cc;
}

void fun_080011d8()
{
    u16 i;

    for (i = 0; i < levels_count; i++)
    {
        if (levels[i]->unk38 != NULL)
        {
            levels[i]->unk38();
        }
    }
}

s32 fun_08001214(u32 param_1)
{
    s32 tmp = Q_16_16(param_1);
    return ((tmp + 0xf8300000) / 0x10000) < 0x1c;
}

void fun_0800122c(u16 param_1)
{
    s32 cond = 1;
    fun_08002d34(0, 1, param_1);
    fun_08002c44();

    while (fun_08002dd8())
    {
        fun_08002bcc();
        fun_08002df8();
        fun_080046a4();

        if (cond && DAT_020025e0 != 0)
        {
            if (DAT_020025f0 != NULL)
            {
                DAT_020025f0();
            }

            levels[current_level]->unk2c();

            if (DAT_020025d8)
            {
                fun_08000b44();
            }
            DAT_020025c4++;
            cond = false;
        }

        fun_08003cfc();
    }
}

void fun_080012c0(u16 param_1)
{
    fun_08002d34(1, 0, param_1);
    while (true)
    {
        if (fun_08002dd8() == 0)
            break;
        fun_08002bcc();
        fun_08002df8();
    }
}
