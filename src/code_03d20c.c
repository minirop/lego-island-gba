#include "functions.h"
#include "variables.h"

__attribute__((naked)) void fun_0803d20c(struct_08001534* param_1, u32* param_2)
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x3\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d21e\n\
     b          LAB_0803d388\n\
LAB_0803d21e:\n\
     ldr        r0,[r6,#0x4]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d228\n\
     b          LAB_0803d388\n\
LAB_0803d228:\n\
     ldr        r0,[r6,#0x8]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d232\n\
     b          LAB_0803d388\n\
LAB_0803d232:\n\
     ldr        r0,[r6,#0xc]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d23c\n\
     b          LAB_0803d388\n\
LAB_0803d23c:\n\
     bl         fun_0803e164\n\
     ldr        r0,DAT_0803d384\n\
     ldr        r1,[r6,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     mov        r4,#0x9a\n\
     lsl        r4,r4,#0x1\n\
     mov        r0,#0x0\n\
LAB_0803d24c:\n\
     strb       r0,[r1,#0x0]\n\
     add        r1,#0x1\n\
     sub        r4,#0x1\n\
     cmp        r4,#0x0\n\
     bne        LAB_0803d24c\n\
     ldr        r3,DAT_0803d384\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r1,#0x1\n\
     str        r1,[r0,#0x4]\n\
     add        r0,#0xba\n\
     mov        r1,#0xff\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r0,[r3,#0x0]\n\
     add        r1,#0x11\n\
     add        r2,r0,r1\n\
     ldr        r1,[r5,#0x8]\n\
     str        r1,[r2,#0x0]\n\
     add        r0,#0xbb\n\
     strb       r4,[r0,#0x0]\n\
     ldr        r2,[r3,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     strh       r1,[r2,#0xc]\n\
     strh       r1,[r2,#0xe]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xbc\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,#0x2\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r4,#0x9a\n\
     lsl        r4,r4,#0x1\n\
     add        r1,r0,r4\n\
     sub        r4,#0x20\n\
     add        r0,r2,r4\n\
     str        r1,[r0,#0x0]\n\
     ldrb       r2,[r5,#0x2]\n\
     lsl        r0,r2,#0x4\n\
     add        r0,#0x40\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d2ac\n\
     mov        r4,#0x0\n\
LAB_0803d2a2:\n\
     strb       r4,[r2,#0x0]\n\
     add        r2,#0x1\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d2a2\n\
LAB_0803d2ac:\n\
     ldrb       r0,[r5,#0x2]\n\
     add        r0,#0x4\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xc4\n\
     str        r1,[r0,#0x0]\n\
     ldrb       r4,[r5,#0x2]\n\
     lsl        r0,r4,#0x2\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d2d0\n\
     mov        r4,#0x0\n\
LAB_0803d2c6:\n\
     strb       r4,[r2,#0x0]\n\
     add        r2,#0x1\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d2c6\n\
LAB_0803d2d0:\n\
     ldrb       r2,[r5,#0x2]\n\
     lsl        r0,r2,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xc0\n\
     str        r1,[r0,#0x0]\n\
     ldrb       r4,[r5,#0x2]\n\
     lsl        r0,r4,#0x3\n\
     sub        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d2f6\n\
     mov        r4,#0x0\n\
LAB_0803d2ec:\n\
     strb       r4,[r2,#0x0]\n\
     add        r2,#0x1\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d2ec\n\
LAB_0803d2f6:\n\
     ldrb       r2,[r5,#0x2]\n\
     lsl        r0,r2,#0x3\n\
     sub        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xcc\n\
     str        r1,[r0,#0x0]\n\
     ldrb       r4,[r5,#0x2]\n\
     lsl        r0,r4,#0x2\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d31c\n\
     mov        r4,#0x0\n\
LAB_0803d312:\n\
     strb       r4,[r2,#0x0]\n\
     add        r2,#0x1\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d312\n\
LAB_0803d31c:\n\
     ldrb       r2,[r5,#0x2]\n\
     lsl        r0,r2,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xc8\n\
     str        r1,[r0,#0x0]\n\
     ldrb       r4,[r5,#0x2]\n\
     lsl        r0,r4,#0x6\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d33e\n\
     mov        r4,#0x0\n\
LAB_0803d334:\n\
     strb       r4,[r2,#0x0]\n\
     add        r2,#0x1\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d334\n\
LAB_0803d33e:\n\
     ldrb       r2,[r5,#0x2]\n\
     lsl        r0,r2,#0x6\n\
     add        r1,r1,r0\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r4,#0x90\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r0,r4\n\
     str        r1,[r0,#0x0]\n\
     ldrb       r2,[r5,#0x2]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d366\n\
     mov        r3,#0x0\n\
LAB_0803d35c:\n\
     strb       r3,[r2,#0x0]\n\
     add        r2,#0x1\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d35c\n\
LAB_0803d366:\n\
     ldrb       r0,[r5,#0x2]\n\
     add        r0,#0x4\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     add        r0,r5,#0x0\n\
     bl         fun_080426c0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d388\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0803f6d8\n\
     mov        r0,#0x1\n\
     b          LAB_0803d38a\n\
DAT_0803d384:\n\
     .word 0x02027048\n\
LAB_0803d388:\n\
     mov        r0,#0x0\n\
LAB_0803d38a:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803d390()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     ldr        r1,DAT_0803d41c\n\
     ldr        r0,[r1,#0x0]\n\
     add        r2,r0,#0x0\n\
     add        r2,#0xbc\n\
     ldrh       r5,[r2,#0x0]\n\
     strh       r3,[r2,#0x0]\n\
     add        r4,r1,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803d3ac\n\
     add        r0,r3,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_0803d3ac:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0xbc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r5\n\
     beq        LAB_0803d416\n\
     mov        r3,#0x0\n\
     add        r7,r4,#0x0\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x9\n\
     mov        r5,#0x80\n\
LAB_0803d3c0:\n\
     ldr        r0,[r7,#0x0]\n\
     lsl        r1,r3,#0x2\n\
     add        r0,#0x10\n\
     add        r2,r0,r1\n\
     ldr        r1,[r2,#0x0]\n\
     add        r0,r1,#0x0\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d3d6\n\
     orr        r1,r5\n\
     str        r1,[r2,#0x0]\n\
LAB_0803d3d6:\n\
     add        r3,#0x1\n\
     cmp        r3,#0x3\n\
     ble        LAB_0803d3c0\n\
     mov        r3,#0x0\n\
     ldr        r0,[r4,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r3,r0\n\
     bge        LAB_0803d416\n\
     add        r7,r4,#0x0\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x9\n\
     mov        r5,#0x80\n\
LAB_0803d3ee:\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803d40c\n\
     ldr        r1,[r2,#0x38]\n\
     add        r0,r1,#0x0\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d40c\n\
     orr        r1,r5\n\
     str        r1,[r2,#0x38]\n\
LAB_0803d40c:\n\
     add        r3,#0x1\n\
     ldr        r0,[r4,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r3,r0\n\
     blt        LAB_0803d3ee\n\
LAB_0803d416:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803d41c:\n\
     .word 0x02027048\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803d420()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     ldr        r1,DAT_0803d4ac\n\
     ldr        r0,[r1,#0x0]\n\
     add        r2,r0,#0x0\n\
     add        r2,#0xbe\n\
     ldrh       r5,[r2,#0x0]\n\
     strh       r3,[r2,#0x0]\n\
     add        r4,r1,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803d43c\n\
     add        r0,r3,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_0803d43c:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0xbe\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r5\n\
     beq        LAB_0803d4a6\n\
     mov        r3,#0x0\n\
     add        r7,r4,#0x0\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x9\n\
     mov        r5,#0x80\n\
LAB_0803d450:\n\
     ldr        r0,[r7,#0x0]\n\
     lsl        r1,r3,#0x2\n\
     add        r0,#0x10\n\
     add        r2,r0,r1\n\
     ldr        r1,[r2,#0x0]\n\
     add        r0,r1,#0x0\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d466\n\
     orr        r1,r5\n\
     str        r1,[r2,#0x0]\n\
LAB_0803d466:\n\
     add        r3,#0x1\n\
     cmp        r3,#0x3\n\
     ble        LAB_0803d450\n\
     mov        r3,#0x0\n\
     ldr        r0,[r4,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r3,r0\n\
     bge        LAB_0803d4a6\n\
     add        r7,r4,#0x0\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x9\n\
     mov        r5,#0x80\n\
LAB_0803d47e:\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803d49c\n\
     ldr        r1,[r2,#0x38]\n\
     add        r0,r1,#0x0\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d49c\n\
     orr        r1,r5\n\
     str        r1,[r2,#0x38]\n\
LAB_0803d49c:\n\
     add        r3,#0x1\n\
     ldr        r0,[r4,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r3,r0\n\
     blt        LAB_0803d47e\n\
LAB_0803d4a6:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803d4ac:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803d4b0(u16 param_1, u16 param_2, u16 param_3)
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r7,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     mov        r8,r2\n\
     ldr        r4,DAT_0803d514\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0xbb\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     mov        r5,#0xff\n\
     lsl        r1,r1,#0x18\n\
     lsr        r1,r1,#0x18\n\
     cmp        r1,#0x1\n\
     bne        LAB_0803d4de\n\
     bl         fun_080496f0\n\
LAB_0803d4de:\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x84\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r1,r2\n\
     strh       r6,[r0,#0x0]\n\
     add        r2,#0x2\n\
     add        r0,r1,r2\n\
     strh       r7,[r0,#0x0]\n\
     add        r2,#0x2\n\
     add        r0,r1,r2\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x0]\n\
     add        r1,#0xbb\n\
     ldrb       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d508\n\
     bl         fun_080496f8\n\
LAB_0803d508:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803d514:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803d518()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r2,DAT_0803d5b4\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r3,DAT_0803d5b8\n\
     add        r1,r0,r3\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     ldr        r0,[r2,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     bge        LAB_0803d56e\n\
     add        r6,r2,#0x0\n\
     mov        r5,#0x0\n\
LAB_0803d53e:\n\
     ldr        r2,[r6,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r2,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x4\n\
     add        r0,r0,r1\n\
     str        r5,[r0,#0x0]\n\
     mov        r3,#0x90\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r2,r3\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     str        r5,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803e344\n\
     add        r4,#0x1\n\
     ldr        r0,[r6,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     blt        LAB_0803d53e\n\
LAB_0803d56e:\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_0803d5b4\n\
     ldr        r1,[r0,#0x0]\n\
     add        r6,r0,#0x0\n\
     ldrb       r1,[r1,#0x0]\n\
     cmp        r4,r1\n\
     bge        LAB_0803d5a2\n\
     add        r5,r6,#0x0\n\
     mov        r3,#0x0\n\
LAB_0803d580:\n\
     ldr        r2,[r5,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     str        r3,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x6\n\
     add        r0,r0,r1\n\
     str        r3,[r0,#0x38]\n\
     add        r4,#0x1\n\
     ldrb       r2,[r2,#0x0]\n\
     cmp        r4,r2\n\
     blt        LAB_0803d580\n\
LAB_0803d5a2:\n\
     ldr        r1,[r6,#0x0]\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x1]\n\
     bl         fun_0803fe84\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803d5b4:\n\
     .word 0x02027048\n\
DAT_0803d5b8:\n\
     .word 0x00000151\n\
    ");
}
__attribute__((naked)) void fun_0803d5bc()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0803d608\n\
     ldr        r1,[r4,#0x0]\n\
     add        r1,#0xbb\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803d5d6\n\
     bl         fun_080496f0\n\
LAB_0803d5d6:\n\
     bl         fun_0803d518\n\
     mov        r2,#0x0\n\
     ldr        r1,[r4,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d602\n\
     mov        r3,#0x8c\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r1,r3\n\
     ldr        r0,[r0,#0x0]\n\
     add        r3,#0x3a\n\
     add        r0,r0,r3\n\
     ldrb       r3,[r0,#0x0]\n\
     cmp        r2,r3\n\
     bls        LAB_0803d5f8\n\
     ldrb       r2,[r0,#0x0]\n\
LAB_0803d5f8:\n\
     strb       r2,[r1,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803d602\n\
     bl         fun_0803fb78\n\
LAB_0803d602:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803d608:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) u32 fun_0803d60c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     add        r5,r0,#0x0\n\
     mov        r9,r1\n\
     add        r7,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r1,DAT_0803d688\n\
     ldr        r6,[r1,#0x0]\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r6,r2\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0xc]\n\
     add        r4,r2,r0\n\
     ldr        r0,[r4,#0x0]\n\
     add        r3,r1,#0x0\n\
     cmp        r5,r0\n\
     bcc        LAB_0803d63a\n\
     b          LAB_0803d730\n\
LAB_0803d63a:\n\
     lsl        r0,r5,#0x3\n\
     add        r0,#0x4\n\
     add        r5,r4,r0\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r4,[r5,#0x0]\n\
     lsl        r1,r4,#0x2\n\
     add        r0,r2,r0\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r2,r2,r0\n\
     mov        r10,r2\n\
     ldrb       r4,[r2,#0x0]\n\
     cmp        r4,#0xff\n\
     bne        LAB_0803d65c\n\
     ldrb       r4,[r5,#0x4]\n\
     cmp        r4,#0xff\n\
     beq        LAB_0803d664\n\
LAB_0803d65c:\n\
     ldrb       r0,[r6,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     bge        LAB_0803d730\n\
LAB_0803d664:\n\
     mov        r0,r9\n\
     cmp        r0,#0x7f\n\
     ble        LAB_0803d66e\n\
     ldrb       r1,[r5,#0x7]\n\
     mov        r9,r1\n\
LAB_0803d66e:\n\
     cmp        r7,#0x7f\n\
     ble        LAB_0803d674\n\
     ldrb       r7,[r5,#0x5]\n\
LAB_0803d674:\n\
     ldr        r0,[r3,#0x0]\n\
     ldrh       r0,[r0,#0xe]\n\
     mul        r0,r7\n\
     asr        r7,r0,#0x8\n\
     mov        r2,r8\n\
     cmp        r2,#0x80\n\
     ble        LAB_0803d68c\n\
     ldrb       r0,[r5,#0x6]\n\
     mov        r8,r0\n\
     b          LAB_0803d696\n\
DAT_0803d688:\n\
     .word 0x02027048\n\
LAB_0803d68c:\n\
     mov        r1,r8\n\
     cmp        r1,#0x80\n\
     bne        LAB_0803d696\n\
     mov        r2,#0xff\n\
     mov        r8,r2\n\
LAB_0803d696:\n\
     cmp        r4,#0x3\n\
     bgt        LAB_0803d718\n\
     ldrb       r1,[r5,#0x2]\n\
     mov        r0,#0x1\n\
     add        r2,r4,#0x0\n\
     bl         fun_080427c0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d730\n\
     ldr        r0,DAT_0803d6e8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x8e\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r0,r2\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d6c2\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803d6c2:\n\
     mov        r0,#0x80\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d6ec\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     ldrb       r2,[r5,#0x2]\n\
     orr        r0,r2\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,r9\n\
     mov        r2,r8\n\
     add        r3,r7,#0x0\n\
     bl         fun_08042524\n\
     b          LAB_0803d6fe\n\
.space 1\n\
.space 1\n\
DAT_0803d6e8:\n\
     .word 0x02027048\n\
LAB_0803d6ec:\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     ldrb       r0,[r5,#0x2]\n\
     orr        r3,r0\n\
     add        r0,r4,#0x0\n\
     mov        r1,r9\n\
     add        r2,r7,#0x0\n\
     bl         fun_080425bc\n\
LAB_0803d6fe:\n\
     ldr        r3,DAT_0803d714\n\
     ldr        r1,[r3,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x9\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0803d7ae\n\
DAT_0803d714:\n\
     .word 0x02027048\n\
LAB_0803d718:\n\
     cmp        r4,#0xff\n\
     beq        LAB_0803d71e\n\
     sub        r4,#0x4\n\
LAB_0803d71e:\n\
     ldrb       r1,[r5,#0x2]\n\
     mov        r0,#0x1\n\
     mov        r2,#0xff\n\
     add        r3,r4,#0x0\n\
     bl         fun_08042738\n\
     add        r4,r0,#0x0\n\
     cmp        r4,#0x0\n\
     bge        LAB_0803d734\n\
LAB_0803d730:\n\
     mov        r0,#0x0\n\
     b          LAB_0803d824\n\
LAB_0803d734:\n\
     ldr        r0,DAT_0803d77c\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r4,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r6,r0,r1\n\
     mov        r0,#0x8e\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r2,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d758\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803d758:\n\
     mov        r0,#0x80\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803d780\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     ldrb       r2,[r5,#0x2]\n\
     orr        r0,r2\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r6,#0x0\n\
     mov        r1,r9\n\
     mov        r2,r8\n\
     add        r3,r7,#0x0\n\
     bl         fun_080424b4\n\
     b          LAB_0803d792\n\
DAT_0803d77c:\n\
     .word 0x02027048\n\
LAB_0803d780:\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     ldrb       r0,[r5,#0x2]\n\
     orr        r3,r0\n\
     add        r0,r6,#0x0\n\
     mov        r1,r9\n\
     add        r2,r7,#0x0\n\
     bl         fun_080427e8\n\
LAB_0803d792:\n\
     ldr        r0,[r6,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     orr        r0,r1\n\
     str        r0,[r6,#0x38]\n\
     ldr        r2,DAT_0803d834\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     str        r6,[r0,#0x0]\n\
     add        r4,#0x4\n\
     add        r3,r2,#0x0\n\
LAB_0803d7ae:\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r1,r2\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,r1,r0\n\
     mov        r2,#0x0\n\
     strb       r2,[r1,#0x4]\n\
     mov        r0,#0xff\n\
     strb       r0,[r1,#0x5]\n\
     ldrb       r0,[r5,#0x5]\n\
     strb       r0,[r1,#0x6]\n\
     ldrb       r0,[r5,#0x5]\n\
     strb       r0,[r1,#0x8]\n\
     ldrb       r0,[r5,#0x7]\n\
     strb       r0,[r1,#0x7]\n\
     ldr        r3,[r3,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     lsl        r1,r4,#0x4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     strh       r2,[r0,#0x8]\n\
     strh       r2,[r0,#0xa]\n\
     str        r2,[r0,#0x4]\n\
     mov        r1,r10\n\
     add        r1,#0x4\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     strh       r1,[r0,#0xc]\n\
     ldr        r1,[r3,#0x4]\n\
     ldr        r0,DAT_0803d838\n\
     mul        r1,r0\n\
     str        r1,[r3,#0x4]\n\
     lsl        r1,r1,#0xb\n\
     lsr        r1,r1,#0x11\n\
     mov        r0,#0x8e\n\
     lsl        r0,r0,#0x1\n\
     add        r2,r3,r0\n\
     lsl        r0,r4,#0x10\n\
     ldrh       r2,[r2,#0x0]\n\
     orr        r0,r2\n\
     lsl        r1,r1,#0x18\n\
     orr        r0,r1\n\
     mov        r2,#0x90\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r3,r2\n\
     ldr        r2,[r1,#0x0]\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r2\n\
     str        r0,[r1,#0x0]\n\
LAB_0803d824:\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0803d834:\n\
     .word 0x02027048\n\
DAT_0803d838:\n\
     .word 0xA8351D63\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803d83c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803d864\n\
     lsr        r3,r4,#0x10\n\
     mov        r0,#0xff\n\
     and        r3,r0\n\
     ldr        r2,DAT_0803d86c\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r6,r2,#0x0\n\
     cmp        r0,r4\n\
     beq        LAB_0803d870\n\
LAB_0803d864:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_0803d8d4\n\
.space 1\n\
.space 1\n\
DAT_0803d86c:\n\
     .word 0x02027048\n\
LAB_0803d870:\n\
     cmp        r5,#0x0\n\
     bge        LAB_0803d878\n\
     mov        r5,#0x0\n\
     b          LAB_0803d87e\n\
LAB_0803d878:\n\
     cmp        r5,#0x7f\n\
     ble        LAB_0803d87e\n\
     mov        r5,#0x7f\n\
LAB_0803d87e:\n\
     cmp        r3,#0x3\n\
     bgt        LAB_0803d8a0\n\
     lsl        r0,r3,#0x3\n\
     add        r0,#0x8c\n\
     ldr        r1,[r6,#0x0]\n\
     add        r2,r1,r0\n\
     ldrb       r4,[r2,#0x7]\n\
     strb       r5,[r2,#0x7]\n\
     ldr        r1,[r6,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0803d8d2\n\
LAB_0803d8a0:\n\
     sub        r3,#0x4\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r3,r3,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r3\n\
     add        r2,r0,#0x0\n\
     add        r2,#0x24\n\
     ldrb       r0,[r2,#0x7]\n\
     lsr        r4,r0,#0x1\n\
     lsl        r1,r5,#0x1\n\
     strb       r1,[r2,#0x7]\n\
     lsl        r0,r1,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803d8c2\n\
     add        r0,r1,#0x1\n\
     strb       r0,[r2,#0x7]\n\
LAB_0803d8c2:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,r3,r1\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r2,#0x80\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_0803d8d2:\n\
     add        r0,r4,#0x0\n\
LAB_0803d8d4:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803d8dc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r4,r0,#0x0\n\
     add        r3,r1,#0x0\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803d904\n\
     lsr        r5,r4,#0x10\n\
     mov        r0,#0xff\n\
     and        r5,r0\n\
     ldr        r2,DAT_0803d90c\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r6,r2,#0x0\n\
     cmp        r0,r4\n\
     beq        LAB_0803d910\n\
LAB_0803d904:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_0803d9c6\n\
.space 1\n\
.space 1\n\
DAT_0803d90c:\n\
     .word 0x02027048\n\
LAB_0803d910:\n\
     cmp        r3,#0x80\n\
     bne        LAB_0803d918\n\
     mov        r3,#0xff\n\
     b          LAB_0803d926\n\
LAB_0803d918:\n\
     cmp        r3,#0x0\n\
     bge        LAB_0803d920\n\
     mov        r3,#0x0\n\
     b          LAB_0803d926\n\
LAB_0803d920:\n\
     cmp        r3,#0x7f\n\
     ble        LAB_0803d926\n\
     mov        r3,#0x7f\n\
LAB_0803d926:\n\
     cmp        r5,#0x3\n\
     bgt        LAB_0803d998\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x15\n\
     lsl        r0,r5\n\
     lsr        r2,r0,#0x18\n\
     ldr        r1,[r6,#0x0]\n\
     add        r1,#0xba\n\
     add        r0,r2,#0x0\n\
     ldrb       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     asr        r0,r5\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r4,#0x2a\n\
     cmp        r0,#0x10\n\
     beq        LAB_0803d950\n\
     mov        r4,#0x40\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803d950\n\
     mov        r4,#0x55\n\
LAB_0803d950:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0xba\n\
     ldrb       r1,[r0,#0x0]\n\
     bic        r1,r2\n\
     strb       r1,[r0,#0x0]\n\
     cmp        r3,#0xff\n\
     beq        LAB_0803d974\n\
     cmp        r3,#0x29\n\
     bgt        LAB_0803d968\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x15\n\
     b          LAB_0803d970\n\
LAB_0803d968:\n\
     cmp        r3,#0x55\n\
     ble        LAB_0803d974\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x11\n\
LAB_0803d970:\n\
     lsl        r0,r5\n\
     lsr        r2,r0,#0x18\n\
LAB_0803d974:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0xba\n\
     ldrb       r1,[r0,#0x0]\n\
     orr        r2,r1\n\
     strb       r2,[r0,#0x0]\n\
     ldr        r2,DAT_0803d994\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r1,#0xff\n\
     and        r1,r0\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0xba\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     orr        r1,r0\n\
     strh       r1,[r2,#0x0]\n\
     b          LAB_0803d9be\n\
DAT_0803d994:\n\
     .word 0x04000080\n\
LAB_0803d998:\n\
     ldr        r1,[r6,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r5,#0x6\n\
     ldr        r2,DAT_0803d9cc\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x3c\n\
     ldrb       r4,[r0,#0x0]\n\
     strb       r3,[r0,#0x0]\n\
     lsl        r0,r3,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,r4\n\
     beq        LAB_0803d9be\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803d9be:\n\
     cmp        r4,#0x7f\n\
     ble        LAB_0803d9c4\n\
     mov        r4,#0x80\n\
LAB_0803d9c4:\n\
     add        r0,r4,#0x0\n\
LAB_0803d9c6:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0803d9cc:\n\
     .word 0xFFFFFF00\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803d9d0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803d9f4\n\
     lsr        r2,r3,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r0,DAT_0803d9fc\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r3\n\
     beq        LAB_0803da00\n\
LAB_0803d9f4:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_0803da3e\n\
.space 1\n\
.space 1\n\
DAT_0803d9fc:\n\
     .word 0x02027048\n\
LAB_0803da00:\n\
     cmp        r2,#0x3\n\
     bgt        LAB_0803da2a\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x15\n\
     lsl        r0,r2\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xba\n\
     ldrb       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     asr        r0,r2\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     mov        r0,#0x2a\n\
     cmp        r1,#0x10\n\
     beq        LAB_0803da38\n\
     mov        r0,#0x40\n\
     cmp        r1,#0x1\n\
     bne        LAB_0803da38\n\
     mov        r0,#0x55\n\
     b          LAB_0803da38\n\
LAB_0803da2a:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     sub        r1,#0xc4\n\
     ldrb       r0,[r1,#0x0]\n\
LAB_0803da38:\n\
     cmp        r0,#0x7f\n\
     ble        LAB_0803da3e\n\
     mov        r0,#0x80\n\
LAB_0803da3e:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803da44(s32 param_1, u16 param_2)
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r3,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r5,r1,#0x10\n\
     add        r6,r5,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803da72\n\
     lsr        r2,r3,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r0,DAT_0803da78\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r4,#0x90\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r1,r4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r4,r2,#0x2\n\
     add        r0,r4,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r3\n\
     bne        LAB_0803da72\n\
     cmp        r2,#0x3\n\
     bne        LAB_0803da7c\n\
LAB_0803da72:\n\
     mov        r0,#0x0\n\
     b          LAB_0803dab6\n\
.space 1\n\
.space 1\n\
DAT_0803da78:\n\
     .word 0x02027048\n\
LAB_0803da7c:\n\
     cmp        r2,#0x2\n\
     bgt        LAB_0803da9a\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r1,r0\n\
     ldrh       r3,[r0,#0x20]\n\
     strh       r5,[r0,#0x20]\n\
     add        r1,#0x10\n\
     add        r1,r1,r4\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x40\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0803dab4\n\
LAB_0803da9a:\n\
     sub        r2,#0x4\n\
     add        r1,#0xc8\n\
     ldr        r0,[r1,#0x0]\n\
     lsl        r2,r2,#0x6\n\
     add        r0,r2,r0\n\
     ldrh       r3,[r0,#0x0]\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803dab4:\n\
     add        r0,r3,#0x0\n\
LAB_0803dab6:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803dabc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x1c\n\
     mov        r8,r0\n\
     str        r1,[sp,#0x10]\n\
     str        r2,[sp,#0x14]\n\
     str        r3,[sp,#0x18]\n\
     cmp        r0,#0x3\n\
     bgt        LAB_0803dbca\n\
     lsl        r0,r0,#0x2\n\
     mov        r1,#0x92\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r2,DAT_0803db9c\n\
     ldr        r1,[r2,#0x0]\n\
     add        r7,r1,r0\n\
     ldr        r0,[r7,#0x0]\n\
     mov        r9,r0\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803dbca\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x5\n\
     mov        r10,r1\n\
     mov        r0,#0x1\n\
     mov        r2,#0xff\n\
     mov        r3,#0xff\n\
     bl         fun_08042738\n\
     add        r6,r0,#0x0\n\
     cmp        r6,#0x0\n\
     blt        LAB_0803dbca\n\
     ldr        r2,DAT_0803db9c\n\
     ldr        r1,[r2,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r5,r6,#0x2\n\
     add        r0,r5,r0\n\
     mov        r2,r9\n\
     str        r2,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r6,#0x6\n\
     ldr        r4,[r1,#0x0]\n\
     add        r4,r4,r0\n\
     mov        r0,r10\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x0\n\
     ldr        r2,[sp,#0x3c]\n\
     ldr        r3,[sp,#0x18]\n\
     bl         fun_080424b4\n\
     ldr        r0,[r4,#0x38]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0xa\n\
     orr        r0,r1\n\
     str        r0,[r4,#0x38]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x3e\n\
     mov        r1,r8\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r2,DAT_0803db9c\n\
     ldr        r1,[r2,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     add        r5,r5,r0\n\
     str        r4,[r5,#0x0]\n\
     ldr        r0,[sp,#0x10]\n\
     str        r0,[r7,#0x0]\n\
     ldr        r2,[sp,#0x14]\n\
     lsl        r0,r2,#0xc\n\
     ldrh       r1,[r1,#0x2]\n\
     bl         __udivsi3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     lsr        r0,r0,#0x15\n\
     add        r0,#0x2\n\
     add        r2,sp,#0x8\n\
     add        r3,sp,#0xc\n\
     mov        r1,r8\n\
     str        r1,[sp,#0x0]\n\
     ldr        r4,[r7,#0x0]\n\
     add        r1,sp,#0x4\n\
     bl         _call_via_r4\n\
     add        r4,r0,#0x0\n\
     ldr        r2,DAT_0803db9c\n\
     ldr        r3,[r2,#0x0]\n\
     add        r1,r3,#0x0\n\
     add        r1,#0xc0\n\
     lsl        r0,r6,#0x3\n\
     sub        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     strh       r5,[r2,#0x14]\n\
     mov        r0,r9\n\
     strh       r0,[r2,#0x16]\n\
     ldr        r0,[sp,#0x40]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803dba0\n\
     mov        r1,#0x87\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     b          LAB_0803dba2\n\
.space 1\n\
.space 1\n\
DAT_0803db9c:\n\
     .word 0x02027048\n\
LAB_0803dba0:\n\
     mov        r0,#0x0\n\
LAB_0803dba2:\n\
     mov        r1,#0x0\n\
     strb       r0,[r2,#0x1b]\n\
     str        r1,[r2,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     str        r0,[r2,#0x4]\n\
     ldr        r0,[sp,#0x4]\n\
     add        r0,r0,r4\n\
     str        r0,[r2,#0x8]\n\
     str        r1,[r2,#0xc]\n\
     str        r1,[r2,#0x10]\n\
     add        r0,r6,#0x0\n\
     bl         fun_0803efb8\n\
     lsl        r1,r6,#0x10\n\
     mov        r2,r8\n\
     orr        r1,r2\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x18\n\
     orr        r0,r1\n\
     b          LAB_0803dbcc\n\
LAB_0803dbca:\n\
     mov        r0,#0x0\n\
LAB_0803dbcc:\n\
     add        sp,#0x1c\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
