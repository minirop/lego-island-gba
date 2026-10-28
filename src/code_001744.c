#include "functions.h"
#include "variables.h"

u16 fun_08001744()
{
    return fun_0803dda4();
}

void fun_08001754(s32 param_1, u16 param_2)
{
    fun_0803da44(param_1, param_2);
}

u16 fun_08001764()
{
    return fun_0803de40();
}

// unused
#ifdef NONMATCHING
s16 fun_08001774(u16 param_1)
{
    u16 i;

    for (i = 0; i < 76; i += 2)
    {
        if (param_1 == DAT_0875678c[i].unk00)
        {
            return DAT_0875678c[i].unk02;
        }
    }

    return -1;
}
#else
__attribute__((naked)) s16 fun_08001774(u16 param_1)
{
    asm("\n\
    push       {r4,r5,r6,lr}\n\
    lsl        r0,r0,#0x10\n\
    lsr        r4,r0,#0x10\n\
    mov        r2,#0x0\n\
    ldr        r3,DAT_08001794\n\
    add        r5,r3,#0x2\n\
LAB_08001780:\n\
    lsl        r1,r2,#0x2\n\
    add        r0,r1,r3\n\
    mov        r6,#0x0\n\
    ldrsh      r0,[r0,r6]\n\
    cmp        r4,r0\n\
    bne        LAB_08001798\n\
    add        r0,r1,r5\n\
    mov        r1,#0x0\n\
    ldrsh      r0,[r0,r1]\n\
    b          LAB_080017a6\n\
DAT_08001794:\n\
    .word     DAT_0875678c\n\
LAB_08001798:\n\
    add        r0,r2,#0x1\n\
    lsl        r0,r0,#0x10\n\
    lsr        r2,r0,#0x10\n\
    cmp        r2,#0x97\n\
    bls        LAB_08001780\n\
    mov        r0,#0x1\n\
.syntax unified\n\
    rsbs       r0,r0,#0\n\
.syntax divided\n\
LAB_080017a6:\n\
    pop        {r4,r5,r6}\n\
    pop        {r1}\n\
    bx         r1\n\
    ");
}
#endif
