#include "functions.h"
#include "variables.h"

u32 fun_080003e0(s32 param_1, u8 param_2, u16 param_3)
{
    u8 value = fun_08002c04(0x28);
    while ((param_2 != 0xfe && DAT_087566f9[value][0] != param_2) || fun_080020a4()->unk0e5a[value] == 'd')
    {
        value = (value + 1) % 0x28;
    }

    fun_080020a4()->unk0e5a[value] += 1;
    DAT_02000694 = value;

    fun_080017b8(0x3f);
    if (param_3 != 0)
    {
        fun_08001088(0x1e);
    }
    return value;
}

// unused
__attribute__((naked)) void fun_0800045c()
{
    asm("\n\
    push       {r4,r5,r6,lr}\n\
    lsl        r1,r1,#0x18\n\
    lsr        r5,r1,#0x18\n\
    mov        r0,#0x28\n\
    bl         fun_08002c04\n\
    lsl        r0,r0,#0x18\n\
    lsr        r4,r0,#0x18\n\
    ldr        r6,DAT_08000470\n\
    b          LAB_08000480\n\
DAT_08000470:\n\
    .word DAT_087566f9\n\
LAB_08000474:\n\
    add        r0,r4,#0x1\n\
    mov        r1,#0x28\n\
    bl         __modsi3\n\
    lsl        r0,r0,#0x18\n\
    lsr        r4,r0,#0x18\n\
LAB_08000480:\n\
    cmp        r5,#0xfe\n\
    beq        LAB_08000490\n\
    lsl        r0,r4,#0x1\n\
    add        r0,r0,r4\n\
    add        r0,r0,r6\n\
    ldrb       r0,[r0,#0x0]\n\
    cmp        r0,r5\n\
    bne        LAB_08000474\n\
LAB_08000490:\n\
    bl         fun_080020a4\n\
    ldr        r1,DAT_080004a8\n\
    add        r0,r0,r1\n\
    add        r0,r0,r4\n\
    ldrb       r0,[r0,#0x0]\n\
    cmp        r0,#0x64\n\
    beq        LAB_08000474\n\
    add        r0,r4,#0x0\n\
    pop        {r4,r5,r6}\n\
    pop        {r1}\n\
    bx         r1\n\
DAT_080004a8:\n\
    .word 0x00000E5A\n\
    ");
}
