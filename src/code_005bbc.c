#include "functions.h"
#include "gba.h"
#include "variables.h"
#include <stdio.h>

__attribute__((naked)) void fun_08005bbc()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    lsl         r2,r2,#0x10\n\
    lsr         r5,r2,#0x10\n\
    lsl         r3,r3,#0x10\n\
    lsr         r2,r3,#0x10\n\
    mov         r3,#0x0\n\
    cmp         r4,#0x1f\n\
    bls         LAB_08005be0\n\
    mov         r3,#0x80\n\
    lsl         r3,r3,#0x3\n\
    add         r0,r4,#0x0\n\
    sub         r0,#0x20\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
LAB_08005be0:\n\
    lsl         r0,r1,#0x5\n\
    add         r0,r0,r4\n\
    add         r3,r3,r0\n\
    lsl         r3,r3,#0x1\n\
    ldr         r1,DAT_08005bfc\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r3\n\
    strh        r5,[r0,#0x0]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005bfc:\n\
    .word 0x02007FA0\n\
    ");
}
__attribute__((naked)) void fun_08005c00()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r3,r0,#0x0\n\
    add         r4,r2,#0x0\n\
    mov         r2,#0x0\n\
    cmp         r3,#0x1f\n\
    bls         LAB_08005c12\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x3\n\
    sub         r3,#0x20\n\
LAB_08005c12:\n\
    lsl         r0,r1,#0x5\n\
    add         r0,r0,r3\n\
    add         r2,r2,r0\n\
    lsl         r2,r2,#0x1\n\
    ldr         r3,DAT_08005c74\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x20\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c30\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c30:\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x40\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c44\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0x4]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x2]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c44:\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x80\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c58\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0x8]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x4]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c58:\n\
    ldr         r0,[r3,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005c6e\n\
    ldr         r0,DAT_08005c78\n\
    ldr         r0,[r0,#0xc]\n\
    add         r0,r0,r2\n\
    ldrh        r1,[r4,#0x6]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08005c6e:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08005c74:\n\
    .word 0x02007FB4\n\
DAT_08005c78:\n\
    .word 0x02007FA0\n\
    ");
}
__attribute__((naked)) void fun_08005c7c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r3,r2,#0x0\n\
    ldr         r2,DAT_08005cd4\n\
    ldrh        r2,[r2,#0x0]\n\
    mul         r1,r2\n\
    lsl         r0,r0,#0x1\n\
    add         r2,r1,r0\n\
    ldr         r4,DAT_08005cd8\n\
    ldr         r1,[r4,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005c9c\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x0]\n\
LAB_08005c9c:\n\
    ldr         r1,[r4,#0x4]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005cac\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x2]\n\
LAB_08005cac:\n\
    ldr         r1,[r4,#0x8]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005cbc\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x4]\n\
LAB_08005cbc:\n\
    ldr         r1,[r4,#0xc]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005ccc\n\
    add         r1,r1,r2\n\
    ldr         r0,DAT_08005cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    strh        r0,[r3,#0x6]\n\
LAB_08005ccc:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005cd4:\n\
    .word 0x02009040\n\
DAT_08005cd8:\n\
    .word 0x02007F80\n\
DAT_08005cdc:\n\
    .word 0x0000F3FF\n\
    ");
}
__attribute__((naked)) void fun_08005ce0()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    add         r6,r4,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r3,r1,#0x10\n\
    add         r5,r3,#0x0\n\
    ldr         r2,DAT_08005d3c\n\
    ldr         r0,[r2,#0x0]\n\
    mov         r1,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005d02\n\
    ldr         r0,DAT_08005d40\n\
    strh        r4,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r3,[r0,#0x0]\n\
LAB_08005d02:\n\
    ldr         r2,[r2,#0x0]\n\
    mov         r0,#0x2\n\
    and         r0,r2\n\
    add         r1,r2,#0x0\n\
    cmp         r0,#0x0\n\
    beq         LAB_08005d16\n\
    ldr         r0,DAT_08005d44\n\
    strh        r4,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r3,[r0,#0x0]\n\
LAB_08005d16:\n\
    mov         r0,#0x4\n\
    and         r1,r0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08005d26\n\
    ldr         r0,DAT_08005d48\n\
    strh        r4,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r3,[r0,#0x0]\n\
LAB_08005d26:\n\
    mov         r0,#0x8\n\
    and         r2,r0\n\
    cmp         r2,#0x0\n\
    beq         LAB_08005d36\n\
    ldr         r0,DAT_08005d4c\n\
    strh        r6,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r5,[r0,#0x0]\n\
LAB_08005d36:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08005d3c:\n\
    .word 0x02007FB4\n\
DAT_08005d40:\n\
    .word 0x04000010\n\
DAT_08005d44:\n\
    .word 0x04000014\n\
DAT_08005d48:\n\
    .word 0x04000018\n\
DAT_08005d4c:\n\
    .word 0x0400001C\n\
    ");
}

#ifdef NONMATCHING
// https://www.decomp.me/scratch/dNBAK
s32 fun_08005d50()
{
    s16 unk_24[2];
    s16 unk_20[2];
    unk_24[0] = 0;
    DmaSet(3, unk_24, 0x06000000, 0x8100c000);
    unk_24[0] = 0;
    DmaSet(3, unk_24, 0x05000000, 0x81000200);
    REG_DISPCNT = 0x1f04;
    DAT_02009ad4 = 0;
    fun_08002bcc();
    unk_20[0] = 0;
    DmaSet(3, unk_20, 0x05000000, 0x81000100);
    LZ77UnCompVram(DAT_08756d44, (void*)0x06000000);
    fun_08002bcc();
    REG_DISPCNT = 0x1f04;
    DmaCopy16(3, DAT_08756d50, 0x05000000, 0x200);
    DAT_02009ad0 = 0xb4;
    return 0;
}
#else
__attribute__((naked)) s32 fun_08005d50()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r10\n\
    mov         r5,r9\n\
    mov         r4,r8\n\
    push        {r4,r5,r6}\n\
    sub         sp,#0x8\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r4,DAT_08005de4\n\
    str         r0,[r4,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    mov         r10,r0\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08005de8\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,sp\n\
    strh        r1,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    mov         r6,#0xa0\n\
    lsl         r6,r6,#0x13\n\
    str         r6,[r4,#0x4]\n\
    ldr         r0,DAT_08005dec\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x13\n\
    mov         r9,r2\n\
    ldr         r0,DAT_08005df0\n\
    mov         r8,r0\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r0,DAT_08005df4\n\
    strb        r1,[r0,#0x0]\n\
    mov         r5,#0x0\n\
    bl          fun_08002bcc\n\
    add         r0,sp,#0x4\n\
    strh        r5,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    str         r6,[r4,#0x4]\n\
    ldr         r0,DAT_08005df8\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r0,DAT_08005dfc\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,r10\n\
    bl          LZ77UnCompVram\n\
    bl          fun_08002bcc\n\
    mov         r2,r8\n\
    mov         r1,r9\n\
    strh        r2,[r1,#0x0]\n\
    ldr         r0,DAT_08005e00\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    str         r6,[r4,#0x4]\n\
    ldr         r0,DAT_08005e04\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r1,DAT_08005e08\n\
    mov         r0,#0xb4\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x8\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08005de4:\n\
    .word 0x040000D4\n\
DAT_08005de8:\n\
    .word 0x8100C000\n\
DAT_08005dec:\n\
    .word 0x81000200\n\
DAT_08005df0:\n\
    .word 0x00001F04\n\
DAT_08005df4:\n\
    .word 0x02009AD4\n\
DAT_08005df8:\n\
    .word 0x81000100\n\
DAT_08005dfc:\n\
    .word 0x08756D44\n\
DAT_08005e00:\n\
    .word 0x08756D50\n\
DAT_08005e04:\n\
    .word 0x80000100\n\
DAT_08005e08:\n\
    .word 0x02009AD0\n\
    ");
}
#endif

s32 fun_08005e0c()
{
    u32 index;

    DAT_02009ad0--;
    if (DAT_02009ad0 != 0)
    {
        if (fun_0800140c() == 0 && fun_080013f4() == 0 && fun_0800132c() == 0)
        {
            return 0;
        }

        if (DAT_02009ad4 == 0)
        {
            return 0;
        }
    }

    index = ++DAT_02009ad4;

    if (index > 2)
    {
        fun_080010d8();
    }
    else
    {
        fun_08002bcc();

        DmaFill16(3, 0, 0x05000000, 0x200);
        if ((index & 1) != 0)
        {
            LZ77UnCompVram(DAT_08756d44[index], (void*)0x0600a000);
            fun_08002bcc();
            REG_DISPCNT = 0x1f14;
            DmaCopy16(3, DAT_08756d50[index], 0x05000000, 0x200);
        }
        else
        {
            LZ77UnCompVram(DAT_08756d44[index], (void*)0x06000000);
            fun_08002bcc();
            REG_DISPCNT = 0x1f04;
            DmaCopy16(3, DAT_08756d50[index], 0x05000000, 0x200);
        }
        DAT_02009ad0 = 0xb4;
    }
    return 0;
}

s32 fun_08005f08()
{
    return 0;
}

void fun_08005f0c(u8 param_1)
{
    fun_08002bcc();

    DmaFill16(3, 0, 0x05000000, 0x200);
    if ((param_1 & 1) != 0)
    {
        LZ77UnCompVram(DAT_08756d44[param_1], (void*)0x0600a000);
        fun_08002bcc();
        REG_DISPCNT = 0x1f14;
        DmaCopy16(3, DAT_08756d50[param_1], 0x05000000, 0x200);
    }
    else
    {
        LZ77UnCompVram(DAT_08756d44[param_1], (void*)0x06000000);
        fun_08002bcc();
        REG_DISPCNT = 0x1f04;
        DmaCopy16(3, DAT_08756d50[param_1], 0x05000000, 0x200);
    }
}

__attribute__((naked)) s32 fun_08005fac()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r10\n\
    mov         r5,r9\n\
    mov         r4,r8\n\
    push        {r4,r5,r6}\n\
    sub         sp,#0x4\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r4,DAT_08006050\n\
    str         r0,[r4,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    mov         r10,r0\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08006054\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,sp\n\
    strh        r1,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    mov         r1,#0xa0\n\
    lsl         r1,r1,#0x13\n\
    mov         r8,r1\n\
    str         r1,[r4,#0x4]\n\
    ldr         r0,DAT_08006058\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r5,#0x80\n\
    lsl         r5,r5,#0x13\n\
    ldr         r0,DAT_0800605c\n\
    mov         r9,r0\n\
    strh        r0,[r5,#0x0]\n\
    ldr         r6,DAT_08006060\n\
    ldr         r1,DAT_08006064\n\
    add         r0,r6,#0x0\n\
    bl          LZ77UnCompVram\n\
    bl          fun_08002bcc\n\
    ldr         r0,DAT_08006068\n\
    str         r0,[r4,#0x0]\n\
    mov         r1,r8\n\
    str         r1,[r4,#0x4]\n\
    ldr         r0,DAT_0800606c\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r1,DAT_08006070\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    add         r0,r6,#0x0\n\
    mov         r1,r10\n\
    bl          LZ77UnCompVram\n\
    bl          fun_08002bcc\n\
    mov         r0,r9\n\
    strh        r0,[r5,#0x0]\n\
    bl          fun_08006180\n\
    ldr         r1,DAT_08006074\n\
    mov         r0,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_0803c1ec\n\
    ldr         r1,DAT_08006078\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x0]\n\
    bl          fun_08002188\n\
    ldr         r1,DAT_0800607c\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08006050:\n\
    .word 0x040000D4\n\
DAT_08006054:\n\
    .word 0x8100C000\n\
DAT_08006058:\n\
    .word 0x81000200\n\
DAT_0800605c:\n\
    .word 0x00001F44\n\
DAT_08006060:\n\
    .word 0x08064540\n\
DAT_08006064:\n\
    .word 0x0600A000\n\
DAT_08006068:\n\
    .word 0x08064340\n\
DAT_0800606c:\n\
    .word 0x80000100\n\
DAT_08006070:\n\
    .word 0x00001F14\n\
DAT_08006074:\n\
    .word 0x00007FFF\n\
DAT_08006078:\n\
    .word 0x020025B4\n\
DAT_0800607c:\n\
    .word 0x02009AD8\n\
    ");
}

void fun_08006080()
{
    if (fun_0800135c() || fun_080013dc())
    {
        fun_080016f0(0xF);
        if (selected_language)
        {
            selected_language--;
        }
        else
        {
            selected_language = 1;
        }
    }

    if (fun_08001374() || fun_080013c4())
    {
        fun_080016f0(0xF);
        selected_language = (selected_language + 1) & 1;
    }

    if (fun_0800132c() || fun_080013f4())
    {
        fun_080016f0(1);
        if (selected_language == 1)
        {
            selected_language = 3;
        }
        fun_0803d040();
        if (DAT_02009ad8)
        {
            fun_080010d8();
        }
        else
        {
            DAT_0200254c = 0xd;
            fun_08001070(0x29);
        }
    }
}

const LevelInfo logo_screens = {
    0,
    0,
    2,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    fun_08005d50,
    fun_08005f08,
    fun_08005e0c,
    NULL,
    NULL,
    NULL,
    0,
    0,
    "Logo Screens",
    "Blank",
    "Blank",
    "Blank",
    "Blank",
};

const LevelInfo language_select = {
    0,
    0,
    4,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    fun_08005fac,
    fun_08006174,
    fun_0800612c,
    NULL,
    NULL,
    NULL,
    0,
    0,
    "Language Select",
    "Blank",
    "Blank",
    "Blank",
    "Blank",
};

s32 fun_0800612c()
{
    u8 abStack_18[20];

    fun_0803c1a4();
    sprintf(abStack_18, "%s %s", LANG_STRINGS_0875e864[selected_language], "     ");
    fun_0803c010(abStack_18, 0x37, &DAT_0865fd94);
    fun_08006080();
    return 0;
}

// for some reason, the alignment doesn't "work"
// (should add those 2 NUL bytes, linkerscript issue?)
const char bytes[2] = { 0, 0 };

s32 fun_08006174()
{
    fun_0800457c();
    return 0;
}
