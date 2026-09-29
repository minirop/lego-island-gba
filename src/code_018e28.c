#include "functions.h"
#include "variables.h"

s32 fun_08018e28()
{
    return 1;
}

s32 fun_08018e2c()
{
    return 1;
}

void fun_08018e30()
{
    fun_0803a9ec();
}

__attribute__((naked)) void fun_08018e3c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018e88\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x14\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018e84\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018e88\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0xa\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,DAT_08018e8c\n\
     ldr        r0,DAT_08018e90\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08018e84\n\
     mov        r0,#0x8\n\
     bl         fun_080017b8\n\
     ldr        r1,DAT_08018e94\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018e84:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08018e88:\n\
     .word 0x00000E84\n\
DAT_08018e8c:\n\
     .word 0x020006A0\n\
DAT_08018e90:\n\
     .word 0x02000690\n\
DAT_08018e94:\n\
     .word 0x02002520\n\
    ");
}
__attribute__((naked)) void fun_08018e98()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018ed8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x12\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018ed4\n\
     ldr        r1,DAT_08018edc\n\
     ldr        r0,DAT_08018ee0\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x32\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08018ed4\n\
     mov        r0,#0x32\n\
     bl         fun_080017b8\n\
     mov        r0,#0x1e\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_08018ee4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018ed4:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08018ed8:\n\
     .word 0x00000E84\n\
DAT_08018edc:\n\
     .word 0x020006A0\n\
DAT_08018ee0:\n\
     .word 0x02000690\n\
DAT_08018ee4:\n\
     .word 0x0200255C\n\
    ");
}
__attribute__((naked)) void fun_08018ee8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018f28\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018f24\n\
     ldr        r1,DAT_08018f2c\n\
     ldr        r0,DAT_08018f30\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x33\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08018f24\n\
     mov        r0,#0x33\n\
     bl         fun_080017b8\n\
     mov        r0,#0x1e\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_08018f34\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018f24:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08018f28:\n\
     .word 0x00000E84\n\
DAT_08018f2c:\n\
     .word 0x020006A0\n\
DAT_08018f30:\n\
     .word 0x02000690\n\
DAT_08018f34:\n\
     .word 0x02002550\n\
    ");
}
__attribute__((naked)) void fun_08018f38()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     mov        r1,#0x0\n\
     ldr        r4,DAT_08018f64\n\
     ldr        r3,DAT_08018f68\n\
LAB_08018f42:\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x30\n\
     beq        LAB_08018f52\n\
     lsl        r0,r5,#0x5\n\
     add        r0,r0,r3\n\
     str        r2,[r0,#0x0]\n\
LAB_08018f52:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0xa\n\
     bls        LAB_08018f42\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08018f64:\n\
     .word 0x087803D4\n\
DAT_08018f68:\n\
     .word 0x020006A8\n\
    ");
}
__attribute__((naked)) void fun_08018f6c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r5,#0x0]\n\
     ldrh       r1,[r6,#0x0]\n\
     bl         fun_08003330\n\
     mov        r5,#0xde\n\
     lsl        r5,r5,#0x4\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r4,DAT_08018fc0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r1,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r1,r0\n\
     beq        LAB_08018fb8\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018fc4\n\
     ldr        r2,DAT_08018fc8\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08018fcc\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018fb8:\n\
     mov        r0,#0x0\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08018fc0:\n\
     .word 0x0200E440\n\
DAT_08018fc4:\n\
     .word 0x0200E030\n\
DAT_08018fc8:\n\
     .word 0x020006A0\n\
DAT_08018fcc:\n\
     .word 0x0200DD70\n\
    ");
}

void fun_08018fd0()
{
}

void fun_08018fd4()
{
}

__attribute__((naked)) void fun_08018fd8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_08019020\n\
     ldr        r0,DAT_08019024\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08019028\n\
     str        r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801902c\n\
     str        r1,[r0,#0x0]\n\
     ldr        r3,DAT_08019030\n\
     str        r3,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     add        r1,#0x48\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bcs        LAB_08019018\n\
     add        r6,r3,#0x0\n\
     ldr        r5,DAT_08019034\n\
     mov        r3,#0x0\n\
     add        r4,r0,#0x0\n\
LAB_08019000:\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r6\n\
     lsl        r1,r2,#0x5\n\
     add        r1,r1,r5\n\
     str        r1,[r0,#0x0]\n\
     strh       r3,[r0,#0x4]\n\
     strh       r3,[r0,#0x6]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,r4\n\
     bcc        LAB_08019000\n\
LAB_08019018:\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08019020:\n\
     .word 0x0200E470\n\
DAT_08019024:\n\
     .word 0x08487CCC\n\
DAT_08019028:\n\
     .word 0x0200E450\n\
DAT_0801902c:\n\
     .word 0x08487C68\n\
DAT_08019030:\n\
     .word 0x0200E460\n\
DAT_08019034:\n\
     .word 0x08487B10\n\
    ");
}

const LevelInfo castle_island = {
    1,
    0,
    22,
    &DAT_08487c68,
    &DAT_0200e470,
    0,
    0,
    0,
    0,
    fun_0801894c,
    fun_08018ccc,
    fun_08018b28,
    fun_08018e28,
    fun_08018e2c,
    fun_08018fd8,
    1,
    141,
    "Castle Island",
    "Malcolm Grant",
    "15:33 Wed 29th Nov 2000",
    "Malcolm Grant",
    "17:06 Sat 02nd Jun 2001",
};

__attribute__((naked)) void fun_08019038()
{
    asm("\n\
     ldr        r2,DAT_08019050\n\
     ldr        r0,DAT_08019054\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08019058\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0801905c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08019050:\n\
     .word 0x0200E480\n\
DAT_08019054:\n\
     .word 0x0848EE90\n\
DAT_08019058:\n\
     .word 0x0200E490\n\
DAT_0801905c:\n\
     .word 0x0848EE2C\n\
    ");
}
__attribute__((naked)) void fun_08019060()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x14\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019076\n\
     ldr        r0,DAT_08019170\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1a\n\
     beq        LAB_0801915a\n\
LAB_08019076:\n\
     add        r1,sp,#0x10\n\
     mov        r4,#0x0\n\
     strh       r4,[r1,#0x0]\n\
     ldr        r5,DAT_08019174\n\
     str        r1,[r5,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,DAT_08019178\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     strh       r4,[r1,#0x0]\n\
     str        r1,[r5,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,DAT_0801917c\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     bl         fun_08019038\n\
     ldr        r6,DAT_08019180\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xca\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08039e64\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08019184\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_08019188\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     cmp        r1,#0x0\n\
     bne        LAB_080190dc\n\
     ldr        r0,DAT_0801918c\n\
     strh       r1,[r0,#0x0]\n\
LAB_080190dc:\n\
     bl         fun_08019248\n\
     mov        r1,sp\n\
     ldr        r3,[r6,#0x0]\n\
     ldrh       r0,[r3,#0x0]\n\
     mov        r2,#0x0\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r3,#0x0]\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x8]\n\
     strh       r2,[r0,#0xc]\n\
     str        r2,[sp,#0x0]\n\
     strh       r2,[r0,#0xa]\n\
     mov        r1,#0x3\n\
     bl         fun_08004da8\n\
     mov        r0,#0x3\n\
     mov        r1,#0x3\n\
     bl         fun_08005b40\n\
     ldr        r0,DAT_08019190\n\
     str        r0,[r5,#0x0]\n\
     ldr        r0,DAT_08019194\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,DAT_08019198\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     bl         fun_08004c10\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_0801919c\n\
     and        r0,r1\n\
     bl         fun_08004c04\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     ldr        r4,DAT_080191a0\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_0803aa14\n\
     ldr        r5,DAT_080191a4\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_080004ac\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x20\n\
     ldr        r1,DAT_080191a8\n\
     bl         fun_080004ac\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_0803c830\n\
     ldr        r0,DAT_080191ac\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080191b0\n\
     str        r0,[r1,#0x0]\n\
LAB_0801915a:\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_080191b8\n\
     ldr        r1,DAT_080191b4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_080191a0\n\
     b          LAB_080191d4\n\
.space 1\n\
.space 1\n\
DAT_08019170:\n\
     .word 0x02002534\n\
DAT_08019174:\n\
     .word 0x040000D4\n\
DAT_08019178:\n\
     .word 0x8100C000\n\
DAT_0801917c:\n\
     .word 0x81000200\n\
DAT_08019180:\n\
     .word 0x0200E490\n\
DAT_08019184:\n\
     .word 0x084496C8\n\
DAT_08019188:\n\
     .word 0x0200E4A4\n\
DAT_0801918c:\n\
     .word 0x0200E4C8\n\
DAT_08019190:\n\
     .word 0x0844993C\n\
DAT_08019194:\n\
     .word 0x0600C000\n\
DAT_08019198:\n\
     .word 0x80002000\n\
DAT_0801919c:\n\
     .word 0x0000FEF7\n\
DAT_080191a0:\n\
     .word 0x0200DD90\n\
DAT_080191a4:\n\
     .word 0x084736F4\n\
DAT_080191a8:\n\
     .word 0x087803EC\n\
DAT_080191ac:\n\
     .word 0x08449588\n\
DAT_080191b0:\n\
     .word 0x0200E4A0\n\
DAT_080191b4:\n\
     .word 0x0200E02C\n\
LAB_080191b8:\n\
     ldr        r2,PTR_DAT_0801922c\n\
     ldr        r0,PTR_DAT_08019230\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_08019234\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r0,PTR_DAT_08019238\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x10]\n\
LAB_080191d4:\n\
     ldr        r0,DAT_0801923c\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r2,#0x1c]\n\
     mov        r0,#0x4\n\
     strb       r0,[r2,#0x18]\n\
     ldr        r1,DAT_08019240\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019208\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019208\n\
     mov        r0,#0x2\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019208\n\
     mov        r0,#0x2\n\
     bl         fun_080017b8\n\
LAB_08019208:\n\
     ldr        r4,DAT_08019244\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x4\n\
     mov        r2,#0x4\n\
     bl         fun_08004894\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x0\n\
     add        sp,#0x14\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
PTR_DAT_0801922c:\n\
     .word       DAT_0200dd90\n\
PTR_DAT_08019230:\n\
     .word       DAT_0200e030\n\
PTR_DAT_08019234:\n\
     .word       DAT_0200dd70\n\
PTR_DAT_08019238:\n\
     .word       DAT_0200e02c\n\
DAT_0801923c:\n\
     .word 0x0877F91C\n\
DAT_08019240:\n\
     .word 0x0200E4C8\n\
DAT_08019244:\n\
     .word 0x0200E4A0\n\
    ");
}
__attribute__((naked)) void fun_08019248()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r4,#0x0\n\
LAB_0801924c:\n\
     ldr        r0,DAT_08019294\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_08019298\n\
     lsl        r2,r4,#0x2\n\
     add        r2,r2,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,DAT_0801929c\n\
     lsl        r1,r4,#0x1\n\
     add        r0,r1,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x2]\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,DAT_080192a0\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x5\n\
     bls        LAB_0801924c\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08019294:\n\
     .word 0x0848F360\n\
DAT_08019298:\n\
     .word 0x0200E4B0\n\
DAT_0801929c:\n\
     .word 0x08780418\n\
DAT_080192a0:\n\
     .word 0x08780424\n\
    ");
}
__attribute__((naked)) void fun_080192a4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r5,DAT_080192d0\n\
     ldrh       r0,[r5,#0x4]\n\
     ldrh       r1,[r5,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     add        r0,r4,#0x0\n\
     bl         fun_08019438\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019390\n\
     cmp        r4,#0x0\n\
     beq        LAB_080192d4\n\
     cmp        r4,#0x1\n\
     beq        LAB_08019314\n\
     b          LAB_08019390\n\
.space 1\n\
.space 1\n\
DAT_080192d0:\n\
     .word 0x0200DD90\n\
LAB_080192d4:\n\
     ldr        r1,PTR_DAT_080192fc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08019300\n\
     ldrh       r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08019304\n\
     ldrh       r0,[r5,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08019308\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801930c\n\
     ldr        r2,DAT_08019310\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     b          LAB_08019390\n\
.space 1\n\
.space 1\n\
PTR_DAT_080192fc:\n\
     .word       DAT_0200e4c8\n\
PTR_DAT_08019300:\n\
     .word       DAT_0200e030\n\
PTR_DAT_08019304:\n\
     .word       DAT_0200dd70\n\
PTR_DAT_08019308:\n\
     .word       DAT_02002530\n\
PTR_DAT_0801930c:\n\
     .word       DAT_020025e8\n\
DAT_08019310:\n\
     .word 0x0000023E\n\
LAB_08019314:\n\
     ldr        r1,DAT_08019358\n\
     ldrh       r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801935c\n\
     ldrh       r0,[r5,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x34\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019364\n\
     ldr        r1,DAT_08019360\n\
     mov        r0,#0xda\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x7\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x8\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x22\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x34\n\
     bl         fun_080018e4\n\
     b          LAB_08019390\n\
DAT_08019358:\n\
     .word 0x0200E030\n\
DAT_0801935c:\n\
     .word 0x0200DD70\n\
DAT_08019360:\n\
     .word 0x0200DC90\n\
LAB_08019364:\n\
     mov        r0,#0x34\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801938c\n\
     ldr        r1,DAT_08019388\n\
     mov        r0,#0xce\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x22\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08019390\n\
.space 1\n\
.space 1\n\
DAT_08019388:\n\
     .word 0x0200DC90\n\
LAB_0801938c:\n\
     bl         fun_0800193c\n\
LAB_08019390:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08019398()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_080193bc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1a\n\
     beq        LAB_080193b6\n\
     bl         fun_0803abbc\n\
     bl         fun_0803a980\n\
     ldr        r0,DAT_080193c0\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0800457c\n\
LAB_080193b6:\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080193bc:\n\
     .word 0x020025D8\n\
DAT_080193c0:\n\
     .word 0x0200E4A0\n\
    ");
}
__attribute__((naked)) void fun_080193c4()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803a9dc\n\
     bl         fun_080192a4\n\
     bl         fun_0803ab30\n\
     bl         fun_080193f4\n\
     bl         fun_0801948c\n\
     ldr        r1,DAT_080193e8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080193e8:\n\
     .word 0x0200E4A4\n\
    ");
}
__attribute__((naked)) void fun_080193ec()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080193f0()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080193f4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_08019430\n\
LAB_080193fa:\n\
     ldrh       r0,[r5,#0x0]\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r4\n\
     add        r1,#0xa\n\
     bl         __modsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019420\n\
     ldr        r1,DAT_08019434\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r3,[r0,#0x0]\n\
     ldrh       r1,[r3,#0x0]\n\
     add        r2,r1,#0x1\n\
     add        r0,r2,#0x0\n\
     asr        r0,r0,#0x2\n\
     lsl        r0,r0,#0x2\n\
     sub        r0,r2,r0\n\
     strh       r0,[r3,#0x0]\n\
LAB_08019420:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x5\n\
     bls        LAB_080193fa\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08019430:\n\
     .word 0x0200E4A4\n\
DAT_08019434:\n\
     .word 0x0200E4B0\n\
    ");
}
__attribute__((naked)) void fun_08019438()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801944c\n\
     cmp        r0,#0x1\n\
     beq        LAB_08019450\n\
     ldr        r2,DAT_08019448\n\
     b          LAB_08019452\n\
DAT_08019448:\n\
     .word 0x0000FFFF\n\
LAB_0801944c:\n\
     mov        r2,#0xc\n\
     b          LAB_08019452\n\
LAB_08019450:\n\
     mov        r2,#0x1\n\
LAB_08019452:\n\
     ldr        r0,DAT_08019468\n\
     cmp        r2,r0\n\
     beq        LAB_08019474\n\
     ldr        r0,DAT_0801946c\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_08019470\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     b          LAB_08019482\n\
.space 1\n\
.space 1\n\
DAT_08019468:\n\
     .word 0x0000FFFF\n\
DAT_0801946c:\n\
     .word 0x0200E4A0\n\
DAT_08019470:\n\
     .word 0x0000FDFF\n\
LAB_08019474:\n\
     ldr        r0,DAT_08019488\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
LAB_08019482:\n\
     strh       r0,[r1,#0x12]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08019488:\n\
     .word 0x0200E4A0\n\
    ");
}
__attribute__((naked)) void fun_0801948c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0801949c\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0xa0\n\
     bgt        LAB_080194a0\n\
     mov        r0,#0x0\n\
     b          LAB_080194a6\n\
DAT_0801949c:\n\
     .word 0x0200DD90\n\
LAB_080194a0:\n\
     bl         fun_080010d8\n\
     mov        r0,#0x1\n\
LAB_080194a6:\n\
     pop        {r1}\n\
     bx         r1\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_080194ac()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080194dc\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080194d8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080194d8\n\
     mov        r0,#0x2\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080194d8\n\
     mov        r0,#0x2\n\
     bl         fun_080017b8\n\
LAB_080194d8:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080194dc:\n\
     .4byte 0x0200E4C8\n\
    ");
}
__attribute__((naked)) void fun_080194e0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     ldr        r0,DAT_0801951c\n\
     ldrb       r6,[r0,#0x0]\n\
     mov        r7,#0x0\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r9,r0\n\
     ldr        r1,DAT_08019520\n\
     mov        r8,r1\n\
LAB_080194f8:\n\
     ldr        r0,DAT_08019524\n\
     lsl        r1,r6,#0x1\n\
     add        r5,r1,r0\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,r9\n\
     bne        LAB_08019528\n\
     lsl        r0,r7,#0x2\n\
     add        r0,r8\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r3,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_0801954e\n\
.space 1\n\
.space 1\n\
DAT_0801951c:\n\
     .4byte 0x0200E5B4\n\
DAT_08019520:\n\
     .4byte 0x0200E570\n\
DAT_08019524:\n\
     .4byte 0x0200E4E0\n\
LAB_08019528:\n\
     lsl        r4,r7,#0x2\n\
     add        r4,r8\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r3,DAT_08019558\n\
     add        r0,r3,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     bl         fun_080020a4\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r5,r3]\n\
     lsl        r1,r1,#0x1\n\
     ldr        r3,DAT_0801955c\n\
     add        r0,r0,r3\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
LAB_0801954e:\n\
     cmp        r7,#0x8\n\
     bne        LAB_08019560\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x37\n\
     b          LAB_08019562\n\
DAT_08019558:\n\
     .4byte 0x0000FDFF\n\
DAT_0801955c:\n\
     .4byte 0x00000D2A\n\
LAB_08019560:\n\
     add        r0,r6,#0x1\n\
LAB_08019562:\n\
     mov        r1,#0x46\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     cmp        r7,#0xf\n\
     bls        LAB_080194f8\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08019584()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x10\n\
     ldr        r0,PTR_DAT_08019674\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     ble        LAB_080195c6\n\
     cmp        r1,#0x8\n\
     bne        LAB_080195ac\n\
     ldr        r4,PTR_DAT_08019678\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     add        r0,#0x1\n\
     mov        r1,#0x46\n\
     bl         __modsi3\n\
     strh       r0,[r4,#0x0]\n\
     bl         fun_080194e0\n\
LAB_080195ac:\n\
     ldr        r1,PTR_DAT_0801967c\n\
     ldrh       r2,[r1,#0x0]\n\
     sub        r0,r2,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_080195c0\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x1c\n\
     strh       r0,[r1,#0x0]\n\
LAB_080195c0:\n\
     ldrh       r0,[r5,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
LAB_080195c6:\n\
     ldrh       r4,[r5,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801960c\n\
     ldr        r3,PTR_DAT_0801967c\n\
     mov        r0,#0x0\n\
     ldrsh      r2,[r3,r0]\n\
     add        r1,r2,#0x4\n\
     add        r0,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_080195e2\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x23\n\
LAB_080195e2:\n\
     asr        r0,r0,#0x5\n\
     lsl        r0,r0,#0x5\n\
     sub        r0,r1,r0\n\
     strh       r0,[r3,#0x0]\n\
     add        r0,r4,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801960c\n\
     ldr        r1,PTR_DAT_08019678\n\
     ldrh       r2,[r1,#0x0]\n\
     sub        r0,r2,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_08019608\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x45\n\
     strh       r0,[r1,#0x0]\n\
LAB_08019608:\n\
     bl         fun_080194e0\n\
LAB_0801960c:\n\
     ldr        r0,PTR_DAT_08019680\n\
     mov        r1,#0xb4\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x23\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0xb0\n\
     str        r1,[sp,#0x8]\n\
     ldr        r1,PTR_DAT_0801967c\n\
     ldrh       r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x11\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0xc]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x78\n\
     mov        r3,#0x54\n\
     bl         fun_08019778\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019640\n\
     bl         fun_080198c0\n\
LAB_08019640:\n\
     bl         fun_0803c1a4\n\
     ldr        r4,PTR_DAT_08019678\n\
     ldrh       r0,[r4,#0x0]\n\
     bl         fun_08019ae4\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019668\n\
     ldr        r1,PTR_DAT_08019684\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_08019ae4\n\
     ldr        r2,DAT_08019688\n\
     mov        r1,#0x85\n\
     bl         fun_0803c010\n\
LAB_08019668:\n\
     mov        r0,#0x0\n\
     add        sp,#0x10\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
PTR_DAT_08019674:\n\
     .4byte       DAT_0200e5b0\n\
PTR_DAT_08019678:\n\
     .4byte       DAT_0200e5b4\n\
PTR_DAT_0801967c:\n\
     .4byte       DAT_0200e4d0\n\
PTR_DAT_08019680:\n\
     .4byte       DAT_0200e570\n\
PTR_DAT_08019684:\n\
     .4byte       DAT_0200e4e0\n\
DAT_08019688:\n\
     .4byte 0x0865FD94\n\
    ");
}
