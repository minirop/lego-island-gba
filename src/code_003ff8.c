#include "functions.h"
#include "variables.h"
#include <stdlib.h>

void fun_08003ff8(struct_08003998* param_1, u16 param_2, u16 param_3)
{
    u16 i = param_1->unk1a * 4;
    assert(param_1->unk12 & 0x10, "CAN\'T ROTATE THIS SPRITE!");

    3 [DAT_03002000[i + 0]] = fun_08002c84(COS(param_2), fun_08002cb4(param_3));
    3 [DAT_03002000[i + 1]] = fun_08002c84(SIN(param_2), fun_08002cb4(param_3));
    3 [DAT_03002000[i + 2]] = fun_08002c84(-SIN(param_2), fun_08002cb4(param_3));
    3 [DAT_03002000[i + 3]] = fun_08002c84(COS(param_2), fun_08002cb4(param_3));
}

__attribute__((naked)) void fun_080040d4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r9,r0\n\
    add         r5,r1,#0x0\n\
    add         r4,r2,#0x0\n\
    add         r6,r3,#0x0\n\
    lsl         r5,r5,#0x10\n\
    lsr         r5,r5,#0x10\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    lsl         r6,r6,#0x10\n\
    lsr         r6,r6,#0x10\n\
    ldrh        r1,[r0,#0x1a]\n\
    lsl         r1,r1,#0x12\n\
    lsr         r1,r1,#0x10\n\
    mov         r8,r1\n\
    mov         r0,#0x10\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x12]\n\
    and         r0,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_080041b8\n\
    bl          assert\n\
    ldr         r0,DAT_080041bc\n\
    mov         r9,r0\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x40\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r9\n\
    mov         r1,#0x0\n\
    ldrsh       r7,[r0,r1]\n\
    lsl         r4,r4,#0x10\n\
    asr         r4,r4,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r7,#0x0\n\
    bl          fun_08002c84\n\
    mov         r2,r8\n\
    lsl         r2,r2,#0x3\n\
    mov         r8,r2\n\
    ldr         r1,DAT_080041c0\n\
    mov         r10,r1\n\
    mov         r1,r8\n\
    add         r1,r10\n\
    strh        r0,[r1,#0x0]\n\
    lsl         r5,r5,#0x1\n\
    add         r5,r9\n\
    mov         r0,#0x0\n\
    ldrsh       r2,[r5,r0]\n\
    mov         r9,r2\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    mov         r0,r9\n\
    bl          fun_08002c84\n\
    mov         r1,r10\n\
    add         r1,#0x8\n\
    add         r1,r8\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r5,[r5,#0x0]\n\
.syntax unified\n\
    rsbs        r4,r5,#0\n\
.syntax divided\n\
    lsl         r4,r4,#0x10\n\
    asr         r4,r4,#0x10\n\
    lsl         r6,r6,#0x10\n\
    asr         r6,r6,#0x10\n\
    add         r0,r6,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002c84\n\
    mov         r1,r10\n\
    add         r1,#0x10\n\
    add         r1,r8\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r6,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r7,#0x0\n\
    bl          fun_08002c84\n\
    mov         r1,#0x18\n\
    add         r10,r1\n\
    add         r8,r10\n\
    mov         r2,r8\n\
    strh        r0,[r2,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080041b8:\n\
    .word 0x08049CB4\n\
DAT_080041bc:\n\
    .word 0x08049824\n\
DAT_080041c0:\n\
    .word 0x03002006\n\
    ");
}

// https://decomp.me/scratch/BPhz6
__attribute__((naked)) void fun_080041c4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r9,r0\n\
    mov         r8,r1\n\
    add         r5,r2,#0x0\n\
    add         r4,r3,#0x0\n\
    mov         r0,r8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
    lsl         r5,r5,#0x10\n\
    lsr         r5,r5,#0x10\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    mov         r6,#0x10\n\
    add         r0,r6,#0x0\n\
    mov         r1,r9\n\
    ldrh        r1,[r1,#0x12]\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_080042b0\n\
    bl          assert\n\
    lsl         r5,r5,#0x10\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
    lsl         r4,r4,#0x10\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
    ldr         r2,DAT_080042b4\n\
    mov         r10,r2\n\
    mov         r3,r8\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
    mov         r1,#0xff\n\
    and         r0,r1\n\
    add         r1,r0,#0x0\n\
    add         r1,#0x40\n\
    lsl         r1,r1,#0x1\n\
    add         r1,r10\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r10\n\
    asr         r5,r5,#0x10\n\
    mov         r7,#0x0\n\
    ldrsh       r3,[r1,r7]\n\
    add         r1,r5,#0x0\n\
    mul         r1,r3\n\
    asr         r4,r4,#0x10\n\
    mov         r7,#0x0\n\
    ldrsh       r2,[r0,r7]\n\
    add         r0,r4,#0x0\n\
    mul         r0,r2\n\
    add         r1,r1,r0\n\
    lsl         r1,r1,#0x8\n\
    add         r0,r4,#0x0\n\
    mul         r0,r3\n\
    mul         r2,r5\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x8\n\
    asr         r1,r1,#0x10\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x2]\n\
    add         r1,r2,r1\n\
    mov         r3,r9\n\
    strh        r1,[r3,#0x2]\n\
    asr         r0,r0,#0x10\n\
    ldrh        r5,[r3,#0x4]\n\
    add         r0,r5,r0\n\
    strh        r0,[r3,#0x4]\n\
    ldrh        r7,[r3,#0x1a]\n\
    lsl         r4,r7,#0x12\n\
    lsr         r4,r4,#0x10\n\
    ldrh        r0,[r3,#0x12]\n\
    and         r6,r0\n\
    lsl         r6,r6,#0x10\n\
    lsr         r6,r6,#0x10\n\
    add         r0,r6,#0x0\n\
    ldr         r1,DAT_080042b0\n\
    bl          assert\n\
    lsl         r4,r4,#0x3\n\
    ldr         r3,DAT_080042b8\n\
    add         r1,r4,r3\n\
    mov         r2,r8\n\
    add         r2,#0x40\n\
    lsl         r2,r2,#0x1\n\
    add         r2,r10\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,r3,#0x0\n\
    add         r1,#0x8\n\
    add         r1,r4,r1\n\
    mov         r5,r8\n\
    lsl         r5,r5,#0x1\n\
    mov         r8,r5\n\
    add         r8,r10\n\
    mov         r6,r8\n\
    ldrh        r0,[r6,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r3,#0x0\n\
    add         r0,#0x10\n\
    add         r0,r4,r0\n\
    ldrh        r7,[r6,#0x0]\n\
.syntax unified\n\
    rsbs        r1,r7,#0\n\
.syntax divided\n\
    strh        r1,[r0,#0x0]\n\
    add         r3,#0x18\n\
    add         r4,r4,r3\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r4,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080042b0:\n\
    .word 0x08049CB4\n\
DAT_080042b4:\n\
    .word 0x08049824\n\
DAT_080042b8:\n\
    .word 0x03002006\n\
    ");
}
__attribute__((naked)) void fun_080042bc()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r0,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r1,[r5,#0x8]\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004364\n\
    ldr         r2,DAT_08004314\n\
    ldrh        r3,[r5,#0x4]\n\
    lsl         r1,r3,#0x2\n\
    add         r0,r1,r2\n\
    ldr         r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_08004322\n\
    add         r3,r2,#0x0\n\
    add         r0,r1,#0x0\n\
    mov         r2,#0x0\n\
LAB_080042e4:\n\
    ldrh        r6,[r4,#0x10]\n\
    ldrh        r1,[r5,#0x6]\n\
    cmp         r6,r1\n\
    bne         LAB_08004318\n\
    add         r1,r0,r3\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r4,r0\n\
    bne         LAB_080042f8\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x0]\n\
LAB_080042f8:\n\
    ldr         r1,[r4,#0x1c]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004302\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x18]\n\
LAB_08004302:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800430c\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_0800430c:\n\
    str         r2,[r4,#0x1c]\n\
    str         r2,[r4,#0x18]\n\
    b           LAB_0800431e\n\
\n\
.space 2\n\
\n\
DAT_08004314:\n\
    .word 0x02000148\n\
LAB_08004318:\n\
    ldr         r4,[r4,#0x18]\n\
    cmp         r4,#0x0\n\
    bne         LAB_080042e4\n\
LAB_0800431e:\n\
    cmp         r4,#0x0\n\
    bne         LAB_08004414\n\
LAB_08004322:\n\
    ldr         r2,DAT_08004358\n\
    ldrh        r3,[r5,#0x4]\n\
    lsl         r1,r3,#0x2\n\
    add         r0,r1,r2\n\
    ldr         r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_080043bc\n\
    add         r3,r2,#0x0\n\
    add         r0,r1,#0x0\n\
    mov         r2,#0x0\n\
LAB_08004336:\n\
    ldrh        r6,[r4,#0x10]\n\
    ldrh        r1,[r5,#0x6]\n\
    cmp         r6,r1\n\
    bne         LAB_0800435c\n\
    add         r1,r0,r3\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r4,r0\n\
    bne         LAB_0800434a\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x0]\n\
LAB_0800434a:\n\
    ldr         r1,[r4,#0x1c]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004380\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x18]\n\
    b           LAB_08004380\n\
\n\
.space 2\n\
\n\
DAT_08004358:\n\
    .word 0x02000088\n\
LAB_0800435c:\n\
    ldr         r4,[r4,#0x18]\n\
    cmp         r4,#0x0\n\
    bne         LAB_08004336\n\
    b           LAB_080043b8\n\
LAB_08004364:\n\
    ldr         r0,DAT_08004390\n\
    ldrh        r3,[r5,#0x4]\n\
    lsl         r1,r3,#0x2\n\
    add         r0,r1,r0\n\
    ldr         r4,[r0,#0x0]\n\
    add         r3,r4,#0x0\n\
    cmp         r4,#0x0\n\
    beq         LAB_08004394\n\
    ldr         r1,[r4,#0x18]\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,[r4,#0x1c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004380\n\
    str         r1,[r0,#0x18]\n\
LAB_08004380:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800438a\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_0800438a:\n\
    str         r2,[r4,#0x1c]\n\
    str         r2,[r4,#0x18]\n\
    b           LAB_080043b8\n\
DAT_08004390:\n\
    .word 0x020000E8\n\
LAB_08004394:\n\
    ldr         r0,DAT_080043c8\n\
    add         r0,r1,r0\n\
    ldr         r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_080043bc\n\
    ldr         r1,[r4,#0x18]\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,[r4,#0x1c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080043aa\n\
    str         r1,[r0,#0x18]\n\
LAB_080043aa:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080043b4\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_080043b4:\n\
    str         r3,[r4,#0x1c]\n\
    str         r3,[r4,#0x18]\n\
LAB_080043b8:\n\
    cmp         r4,#0x0\n\
    bne         LAB_08004414\n\
LAB_080043bc:\n\
    ldr         r2,DAT_080043cc\n\
    ldr         r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080043d0\n\
    mov         r0,#0x0\n\
    b           LAB_08004426\n\
DAT_080043c8:\n\
    .word 0x02000028\n\
DAT_080043cc:\n\
    .word 0x020001A8\n\
LAB_080043d0:\n\
    add         r4,r0,#0x0\n\
    ldr         r1,[r4,#0x18]\n\
    str         r1,[r2,#0x0]\n\
    ldr         r0,[r4,#0x1c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080043de\n\
    str         r1,[r0,#0x18]\n\
LAB_080043de:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080043e8\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_080043e8:\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x1c]\n\
    str         r0,[r4,#0x18]\n\
    ldrh        r0,[r5,#0x4]\n\
    strh        r0,[r4,#0x4]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r6,[r5,#0x8]\n\
    and         r0,r6\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004404\n\
    mov         r0,#0x1\n\
LAB_08004404:\n\
    strh        r0,[r4,#0x12]\n\
    ldrh        r0,[r5,#0x6]\n\
    strh        r0,[r4,#0x10]\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a6c\n\
    cmp         r4,#0x0\n\
    beq         LAB_08004424\n\
LAB_08004414:\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r4,#0xc]\n\
    mov         r1,#0x0\n\
    mov         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
    strh        r1,[r4,#0x14]\n\
    ldrh        r0,[r5,#0x6]\n\
    strh        r0,[r4,#0x10]\n\
LAB_08004424:\n\
    add         r0,r4,#0x0\n\
LAB_08004426:\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800442c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldrh        r0,[r4,#0x2]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08004458\n\
    ldr         r2,DAT_08004454\n\
    ldrh        r1,[r4,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800444c\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x1c]\n\
    str         r1,[r4,#0x18]\n\
    str         r4,[r1,#0x1c]\n\
LAB_0800444c:\n\
    ldrh        r3,[r4,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    b           LAB_080044c0\n\
\n\
.space 2\n\
\n\
DAT_08004454:\n\
    .word 0x02000028\n\
LAB_08004458:\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a68\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004480\n\
    ldr         r2,DAT_0800447c\n\
    ldr         r1,[r2,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004476\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x1c]\n\
    str         r1,[r4,#0x18]\n\
    str         r4,[r1,#0x1c]\n\
LAB_08004476:\n\
    str         r4,[r2,#0x0]\n\
    b           LAB_080044c4\n\
\n\
.space 2\n\
\n\
DAT_0800447c:\n\
    .word 0x020001A8\n\
LAB_08004480:\n\
    ldrh        r1,[r4,#0x12]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080044a8\n\
    ldr         r1,DAT_080044a4\n\
    ldrh        r3,[r4,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800449a\n\
    str         r2,[r4,#0x1c]\n\
    str         r0,[r4,#0x18]\n\
    str         r4,[r0,#0x1c]\n\
LAB_0800449a:\n\
    ldrh        r2,[r4,#0x4]\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    b           LAB_080044c2\n\
\n\
.space 2\n\
\n\
DAT_080044a4:\n\
    .word 0x02000148\n\
LAB_080044a8:\n\
    ldr         r2,DAT_080044cc\n\
    ldrh        r3,[r4,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080044bc\n\
    str         r1,[r4,#0x1c]\n\
    str         r0,[r4,#0x18]\n\
    str         r4,[r0,#0x1c]\n\
LAB_080044bc:\n\
    ldrh        r1,[r4,#0x4]\n\
    lsl         r0,r1,#0x2\n\
LAB_080044c0:\n\
    add         r0,r0,r2\n\
LAB_080044c2:\n\
    str         r4,[r0,#0x0]\n\
LAB_080044c4:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080044cc:\n\
    .word 0x020000E8\n\
    ");
}

void fun_080044d0()
{
    struct_08003998* ptr;
    u16 i;

    if (DAT_02007f60 != 0)
    {
        if (DAT_02007f60 == 1)
        {
            for (i = 0; i < DAT_02005cf8; i++)
            {
                ptr = DAT_03001800[i];
                ptr->unk20 = ptr->unk06 * 0x4000 + ptr->unk10;
            }
        }

        if (DAT_02007f60 == 2)
        {
            for (i = 0; i < DAT_02005cf8; i++)
            {
                ptr = DAT_03001800[i];
                ptr->unk20 = ptr->unk06 * 0x4000 + (-ptr->unk04 + 0x400);
            }
        }
        qsort(DAT_03001800, DAT_02005cf8, 4, fun_08004ac4);
    }
}

void fun_0800457c()
{
    DAT_02006d50 = 0;
    DAT_02005cf8 = 0;
    DAT_02005cfc = 0;
}

void fun_08004598()
{
    fun_08003bf8();
    DAT_02007f64 = DAT_02005cf4;
    DAT_02005d08 = DAT_02005d04;
    DAT_02005d04 = DAT_02005cf0;
    DAT_02005cf4 = DAT_02005cf0;
    DAT_02005d00 = 1;
}

void fun_080045d8(u16 param_1)
{
    DAT_02000270 = param_1;
}

u16 fun_080045e4()
{
    return DAT_02000270;
}
void fun_080045f0(void* param_1)
{
    DmaCopy16(3, param_1, OBJ_PLTT, OBJ_PLTT_SIZE);
}

void fun_0800460c(void* param_1, u16 param_2)
{
    DmaCopy16(3, param_1, OBJ_PLTT + param_2 * 0x20, 0x20);
}

void fun_08004630(void* param_1)
{
    DmaCopy16(3, OBJ_PLTT, param_1, OBJ_PLTT_SIZE);
}

void fun_0800464c(void* param_1, u16 param_2)
{
    DmaCopy16(3, OBJ_PLTT + param_2 * 0x20, param_1, 0x20);
}

void fun_08004670(u16 param_1)
{
    DAT_02007f60 = param_1;
}

// get sprite count?
u16 fun_0800467c()
{
    return DAT_02005cf8;
}

u16 fun_08004688()
{
    return DAT_02005cfc;
}

struct_08003998* fun_08004694(u16 param_1)
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

void fun_0800471c(struct_08003998* param_1)
{
    u16 i = param_1->unk1a * 4; // probably some META sprite
    assert(param_1->unk12 & 0x10, "CAN\'T ROTATE THIS SPRITE!");

    // ugly code that matches
    3 [DAT_03002000[i + 0]] = 0x100;
    3 [DAT_03002000[i + 1]] = 0;
    3 [DAT_03002000[i + 2]] = 0;
    3 [DAT_03002000[i + 3]] = 0x100;
}

void fun_0800476c(struct_08003998* param_1, u16 param_2)
{
    s16 k, v;
    u16 i = param_1->unk1a * 4;
    assert(param_1->unk12 & 0x10, "CAN\'T ROTATE THIS SPRITE!");

    3 [DAT_03002000[i + 0]] = COS(param_2);
    3 [DAT_03002000[i + 1]] = SIN(param_2);
    3 [DAT_03002000[i + 2]] = -SIN(param_2);
    3 [DAT_03002000[i + 3]] = COS(param_2);
}

void fun_080047d0(struct_08003998* param_1, u16 param_2)
{
    u16 i = param_1->unk1a * 4;
    assert(param_1->unk12 & 0x10, "CAN\'T ROTATE THIS SPRITE!");

    3 [DAT_03002000[i + 0]] = fun_08002cb4(param_2);
    3 [DAT_03002000[i + 1]] = 0;
    3 [DAT_03002000[i + 2]] = 0;
    3 [DAT_03002000[i + 3]] = fun_08002cb4(param_2);
}

void fun_0800482c(struct_08003998* param_1, u16 param_2, u16 param_3)
{
    u16 i = param_1->unk1a * 4;
    assert(param_1->unk12 & 0x10, "CAN\'T ROTATE THIS SPRITE!");

    3 [DAT_03002000[i + 0]] = fun_08002cb4(param_2);
    3 [DAT_03002000[i + 1]] = 0;
    3 [DAT_03002000[i + 2]] = 0;
    3 [DAT_03002000[i + 3]] = fun_08002cb4(param_3);
}

void fun_08004894(struct_08003998* param_1, u16 param_2, u16 param_3)
{
    param_1->unk02 = param_2;
    param_1->unk04 = param_3;
}

void fun_0800489c(struct_08003998* param_1, u16 param_2)
{
    param_1->unk12 = param_1->unk12 & 0xfff0 | param_2 & 0xf;
}

void fun_080048b4(u16 param_1, u16 param_2, u16 param_3, u16 param_4, u16 param_5)
{
    u16 r2 = 0;
    if (param_2 != 0)
    {
        r2 |= 0x100;
    }
    if (param_3 != 0)
    {
        r2 |= 0x200;
    }
    if (param_4 != 0)
    {
        r2 |= 0x400;
    }
    if (param_5 != 0)
    {
        r2 |= 0x800;
    }

    REG_BLDCNT = r2;
    REG_BLDALPHA = (param_1 << 8) | (0x10 - param_1);
}

struct_08003998* fun_08004920(u16 index)
{
    return DAT_03001800[index];
}

void fun_08004930(u16 param_1, u16 param_2)
{
    u16 uVar1;
    u16* puVar2;
    u16* puVar3;
    puVar3 = DAT_03001800[param_1]->unk14;
    puVar2 = &DAT_03002000[param_1][2];
    uVar1 = *puVar2;
    *puVar2 = uVar1 & 0xfc00;
    *puVar2 = (uVar1 & 0xfc00) | (puVar3[3] + puVar3[5] * param_2);
}

__attribute__((naked)) void fun_08004970()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r5,r1,#0x10\n\
    ldr         r1,DAT_080049c4\n\
    lsr         r0,r0,#0xe\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,r5\n\
    beq         LAB_080049bc\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r4,[r0,#0x14]\n\
    ldrh        r2,[r4,#0x8]\n\
    lsl         r3,r2,#0x15\n\
    lsr         r3,r3,#0x10\n\
    ldr         r2,DAT_080049c8\n\
    ldrh        r0,[r2,#0x0]\n\
    add         r1,r0,#0x1\n\
    strh        r1,[r2,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r0,#0x1\n\
    add         r1,r1,r0\n\
    lsl         r1,r1,#0x2\n\
    ldr         r0,DAT_080049cc\n\
    add         r1,r1,r0\n\
    add         r2,r5,#0x0\n\
    mul         r2,r3\n\
    ldr         r0,[r4,#0xc]\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x0]\n\
    ldrh        r4,[r4,#0x6]\n\
    lsl         r0,r4,#0x5\n\
    ldr         r2,DAT_080049d0\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x4]\n\
    strh        r3,[r1,#0x8]\n\
LAB_080049bc:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080049c4:\n\
    .word 0x03001800\n\
DAT_080049c8:\n\
    .word 0x02006D50\n\
DAT_080049cc:\n\
    .word 0x03001A00\n\
DAT_080049d0:\n\
    .word 0x06010000\n\
    ");
}
__attribute__((naked)) void fun_080049d4()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r1,[r2,#0x8]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004a0c\n\
    ldr         r1,DAT_08004a08\n\
    ldrh        r3,[r2,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    ldr         r2,[r2,#0x0]\n\
    cmp         r0,r2\n\
    beq         LAB_08004a2e\n\
LAB_080049f8:\n\
    ldr         r1,[r1,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    cmp         r0,r2\n\
    bne         LAB_080049f8\n\
    b           LAB_08004a2e\n\
\n\
.space 2\n\
\n\
DAT_08004a08:\n\
    .word 0x02000210\n\
LAB_08004a0c:\n\
    ldr         r1,DAT_08004a34\n\
    ldrh        r3,[r2,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    ldr         r2,[r2,#0x0]\n\
    cmp         r0,r2\n\
    beq         LAB_08004a2e\n\
LAB_08004a22:\n\
    ldr         r1,[r1,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    cmp         r0,r2\n\
    bne         LAB_08004a22\n\
LAB_08004a2e:\n\
    add         r0,r1,#0x0\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004a34:\n\
    .word 0x020001B0\n\
    ");
}
__attribute__((naked)) void fun_08004a38()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a46\n\
    mov         r0,#0x0\n\
    str         r0,[r2,#0x1c]\n\
    str         r1,[r2,#0x18]\n\
    str         r2,[r1,#0x1c]\n\
LAB_08004a46:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08004a48()
{
    asm("\n\
    add         r1,r0,#0x0\n\
    ldr         r2,[r1,#0x1c]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004a54\n\
    ldr         r0,[r1,#0x18]\n\
    str         r0,[r2,#0x18]\n\
LAB_08004a54:\n\
    ldr         r2,[r1,#0x18]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004a5e\n\
    ldr         r0,[r1,#0x1c]\n\
    str         r0,[r2,#0x1c]\n\
LAB_08004a5e:\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x1c]\n\
    str         r0,[r1,#0x18]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}

s32 fun_08004a68()
{
    return 0;
}

__attribute__((naked)) void fun_08004a6c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r3,r0,#0x0\n\
    ldrh        r0,[r3,#0x12]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004a94\n\
    ldr         r1,DAT_08004a90\n\
    ldrh        r2,[r3,#0x4]\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r5,[r3,#0x10]\n\
    ldrh        r6,[r0,#0x0]\n\
    add         r4,r5,#0x0\n\
    mul         r4,r6\n\
    add         r0,r4,#0x0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    b           LAB_08004aa0\n\
\n\
.space 2\n\
\n\
DAT_08004a90:\n\
    .word 0x08049CD0\n\
LAB_08004a94:\n\
    ldr         r0,DAT_08004abc\n\
    ldrh        r2,[r3,#0x4]\n\
    lsl         r1,r2,#0x1\n\
    add         r1,r1,r0\n\
    ldrh        r4,[r1,#0x0]\n\
    add         r1,r0,#0x0\n\
LAB_08004aa0:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0xa]\n\
    strh        r4,[r3,#0x8]\n\
    ldr         r1,DAT_08004ac0\n\
    ldrh        r0,[r1,#0x0]\n\
    strh        r0,[r3,#0x6]\n\
    add         r0,r4,r0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08004abc:\n\
    .word 0x08049CD0\n\
DAT_08004ac0:\n\
    .word 0x02005CF4\n\
    ");
}

__attribute__((naked)) s32 fun_08004ac4(s32* param_1, s32* param_2)
{
    asm("\n\
    ldr         r2,[r0,#0x0]\n\
    ldr         r0,[r1,#0x0]\n\
    ldrh        r2,[r2,#0x20]\n\
    ldrh        r0,[r0,#0x20]\n\
    cmp         r2,r0\n\
    bcs         LAB_08004ad6\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08004ad8\n\
LAB_08004ad6:\n\
    mov         r0,#0x1\n\
LAB_08004ad8:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}

void fun_08004adc()
{
    DAT_02007fb4 = 0;
    DAT_02007f90 = 0;
    DAT_02007f74 = 1;
    DAT_02007fb0 = 0;
    DAT_02007f94 = 0;
    DAT_02007f7c = 0;
    DAT_02007f70 = 0;
    DAT_02007f78 = 0;
    fun_08004cd0();
}

__attribute__((naked)) void fun_08004b2c()
{
    asm("\n\
    ldr         r0,DAT_08004b58\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    add         r2,r1,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    add         r0,#0x2\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r2,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004b58:\n\
    .word 0x04000020\n\
\n\
    ");
}

void fun_08004b5c(u16 param_1)
{
    DAT_02007f90 = param_1;
}
void fun_08004b68(u16 param_1)
{
    DAT_02007f74 = param_1;
}
