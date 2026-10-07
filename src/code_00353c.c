#include "functions.h"

int fun_0800353c(int param_1, int param_2)
{
    int value = param_1 * param_2;
    value /= 256;
    return value;
}

int fun_0800354c(int param_1, int param_2)
{
    return (param_1 * 256 / param_2);
}

int fun_08003558()
{
    return 1;
}

__attribute__((naked)) void fun_0800355c()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    ldr         r3,[r2,#0x0]\n\
    ldr         r0,[r1,#0x0]\n\
    mul         r3,r0\n\
    add         r0,r3,#0x0\n\
    cmp         r3,#0x0\n\
    bge         LAB_0800356c\n\
    add         r0,#0xff\n\
LAB_0800356c:\n\
    asr         r3,r0,#0x8\n\
    ldr         r2,[r2,#0x4]\n\
    ldr         r0,[r1,#0x4]\n\
    mul         r2,r0\n\
    add         r0,r2,#0x0\n\
    cmp         r2,#0x0\n\
    bge         LAB_0800357c\n\
    add         r0,#0xff\n\
LAB_0800357c:\n\
    asr         r2,r0,#0x8\n\
    add         r0,r3,r2\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}

void fun_08003584(s32* param_1)
{
    s32 tmp = param_1[0];
    param_1[0] = -param_1[1];
    param_1[1] = tmp;
}

__attribute__((naked)) void fun_08003590()
{
    asm("\n\
        ldr        r2,[r0,#0x0]\n\
        mul        r2,r1\n\
        add        r3,r2,#0x0\n\
        cmp        r2,#0x0\n\
        bge        LAB_0800359c\n\
        add        r3,#0xff\n\
LAB_0800359c:\n\
        asr        r2,r3,#0x8\n\
        str        r2,[r0,#0x0]\n\
        ldr        r2,[r0,#0x4]\n\
        mul        r2,r1\n\
        add        r1,r2,#0x0\n\
        cmp        r2,#0x0\n\
        bge        LAB_080035ac\n\
        add        r1,#0xff\n\
LAB_080035ac:\n\
        asr        r2,r1,#0x8\n\
        str        r2,[r0,#0x4]\n\
        bx         lr\n\
.space 2\n\
    ");
}
