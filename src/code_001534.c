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

// https://www.decomp.me/scratch/573U1
__attribute__((naked)) void fun_080015b8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    mov         r2,#0x0\n\
    ldr         r5,DAT_080015ec\n\
    ldr         r6,DAT_080015f0\n\
    add         r4,r5,#0x0\n\
LAB_080015c6:\n\
    lsl         r1,r2,#0x2\n\
    add         r0,r1,r4\n\
    mov         r7,#0x0\n\
    ldrsh       r0,[r0,r7]\n\
    cmp         r3,r0\n\
    beq         LAB_080015f4\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x97\n\
    bls         LAB_080015c6\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_080015e0:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldrh        r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080015fe\n\
    b           LAB_08001624\n\
DAT_080015ec:\n\
    .word 0x0875678C\n\
DAT_080015f0:\n\
    .word 0x02005750\n\
LAB_080015f4:\n\
    add         r0,r5,#0x2\n\
    add         r0,r1,r0\n\
    mov         r7,#0x0\n\
    ldrsh       r0,[r0,r7]\n\
    b           LAB_080015e0\n\
LAB_080015fe:\n\
    lsl         r0,r4,#0x10\n\
    asr         r1,r0,#0x10\n\
    mov         r2,#0x2\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r3,r0,#0x0\n\
    cmp         r1,r2\n\
    beq         LAB_08001624\n\
    cmp         r1,r2\n\
    bgt         LAB_0800161a\n\
    mov         r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    beq         LAB_0800163c\n\
    b           LAB_0800167c\n\
LAB_0800161a:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bne         LAB_0800167c\n\
    b           LAB_080016a4\n\
LAB_08001624:\n\
    mov         r0,#0x3\n\
    bl          fun_08041bfc\n\
    ldr         r1,DAT_08001638\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    b           LAB_080016a4\n\
\n\
.space 2\n\
\n\
DAT_08001638:\n\
    .word 0x020025D0\n\
LAB_0800163c:\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_08001674\n\
    add         r0,r0,r4\n\
    ldrb        r1,[r0,#0x0]\n\
    ldr         r5,DAT_08001678\n\
    mov         r7,#0x0\n\
    ldrsh       r0,[r5,r7]\n\
    cmp         r1,r0\n\
    beq         LAB_080016a4\n\
    bl          fun_08001118\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bne         LAB_080016a4\n\
    mov         r0,#0x3\n\
    bl          fun_08041bfc\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r4,[r0,#0x0]\n\
    b           LAB_08001698\n\
\n\
.space 2\n\
\n\
DAT_08001674:\n\
    .word 0x00000D21\n\
DAT_08001678:\n\
    .word 0x020025D0\n\
LAB_0800167c:\n\
    ldr         r5,DAT_080016ac\n\
    ldrh        r2,[r5,#0x0]\n\
    lsl         r0,r2,#0x10\n\
    cmp         r3,r0\n\
    beq         LAB_080016a4\n\
    mov         r0,#0x3\n\
    bl          fun_08041bfc\n\
    mov         r7,#0x1\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
    add         r0,r7,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    lsl         r4,r4,#0x18\n\
    lsr         r4,r4,#0x18\n\
LAB_08001698:\n\
    add         r0,r4,#0x0\n\
    bl          fun_08041a44\n\
    bl          fun_08042614\n\
    strh        r4,[r5,#0x0]\n\
LAB_080016a4:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080016ac:\n\
    .word 0x020025D0\n\
    ");
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
