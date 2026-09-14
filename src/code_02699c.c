__attribute__((naked)) void fun_0802699c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r4,PTR_DAT_08026aac\n\
     ldrh       r1,[r4,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_080269ac\n\
     b          LAB_08026b14\n\
LAB_080269ac:\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080269b8\n\
     b          LAB_08026b14\n\
LAB_080269b8:\n\
     ldr        r6,PTR_DAT_08026ab0\n\
     mov        r7,#0x0\n\
     ldrsh      r0,[r6,r7]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080269e2\n\
     ldr        r0,PTR_DAT_08026ab4\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08026ab8\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,PTR_DAT_08026abc\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x4]\n\
     mov        r1,#0x5\n\
     strh       r1,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_08026ac0\n\
     ldrh       r3,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
LAB_080269e2:\n\
     mov        r0,#0x0\n\
     ldrsh      r5,[r6,r0]\n\
     cmp        r5,#0x1\n\
     bne        LAB_08026a28\n\
     ldr        r0,PTR_DAT_08026ab4\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08026ac4\n\
     ldr        r3,PTR_DAT_08026ac8\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r3,r7]\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r2,PTR_DAT_08026acc\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r3,r7]\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x4]\n\
     mov        r1,#0x5\n\
     strh       r1,[r4,#0x0]\n\
     ldr        r2,PTR_DAT_08026ad0\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r3,r7]\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r2\n\
     ldrh       r3,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
     ldr        r0,PTR_DAT_08026ad4\n\
     strh       r5,[r0,#0x0]\n\
LAB_08026a28:\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_08026a4e\n\
     ldr        r0,PTR_DAT_08026ab4\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08026ab8\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,PTR_DAT_08026abc\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x4]\n\
     mov        r1,#0x5\n\
     strh       r1,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_08026ac0\n\
     ldrh       r3,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
LAB_08026a4e:\n\
     ldrh       r6,[r6,#0x0]\n\
     cmp        r6,#0x3\n\
     bne        LAB_08026a80\n\
     ldr        r2,PTR_DAT_08026ab4\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x59\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x81\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x11\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_08026ad8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08026a72\n\
     ldr        r1,PTR_DAT_08026adc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08026a72:\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_08026ad0\n\
     ldrh       r3,[r1,#0x8]\n\
     mov        r1,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
LAB_08026a80:\n\
     ldr        r0,PTR_DAT_08026ab0\n\
     add        r3,r0,#0x0\n\
     ldrh       r1,[r3,#0x0]\n\
     cmp        r1,#0x4\n\
     bne        LAB_08026aee\n\
     ldr        r0,PTR_DAT_08026ad8\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08026ae8\n\
     ldr        r1,PTR_DAT_08026aac\n\
     mov        r0,#0xc8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08026ae0\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08026ae4\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x8]\n\
     b          LAB_08026aee\n\
.space 1\n\
.space 1\n\
PTR_DAT_08026aac:\n\
     .4byte       DAT_0200f4f8\n\
PTR_DAT_08026ab0:\n\
     .4byte       DAT_0200f488\n\
PTR_DAT_08026ab4:\n\
     .4byte       DAT_0200f514\n\
PTR_DAT_08026ab8:\n\
     .4byte       DAT_0200f484\n\
PTR_DAT_08026abc:\n\
     .4byte       DAT_0200f518\n\
PTR_DAT_08026ac0:\n\
     .4byte       DAT_0200f464\n\
PTR_DAT_08026ac4:\n\
     .4byte       DAT_0200f4b0\n\
PTR_DAT_08026ac8:\n\
     .4byte       DAT_0200f480\n\
PTR_DAT_08026acc:\n\
     .4byte       DAT_0200f490\n\
PTR_DAT_08026ad0:\n\
     .4byte       DAT_0200f580\n\
PTR_DAT_08026ad4:\n\
     .4byte       DAT_0200f59c\n\
PTR_DAT_08026ad8:\n\
     .4byte       DAT_0200f474\n\
PTR_DAT_08026adc:\n\
     .4byte       DAT_0200f450\n\
PTR_DAT_08026ae0:\n\
     .4byte       DAT_0200f458\n\
DAT_08026ae4:\n\
     .4byte 0x0000FDFF\n\
LAB_08026ae8:\n\
     ldr        r0,DAT_08026b1c\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
LAB_08026aee:\n\
     ldrh       r4,[r3,#0x0]\n\
     cmp        r4,#0x5\n\
     bne        LAB_08026b0e\n\
     ldr        r0,DAT_08026b20\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x2\n\
     add        r0,r7,#0x0\n\
     mov        r2,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     strh       r2,[r1,#0x8]\n\
     ldr        r0,DAT_08026b1c\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
LAB_08026b0e:\n\
     ldrh       r0,[r3,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_08026b14:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08026b1c:\n\
     .4byte 0x0200F514\n\
DAT_08026b20:\n\
     .4byte 0x0200F458\n\
    ");
}
__attribute__((naked)) void fun_08026b24()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r1,PTR_DAT_08026be0\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08026be4\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r5,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026b80\n\
     ldr        r3,PTR_DAT_08026be8\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026b4a\n\
     mov        r2,#0x11\n\
     mov        r6,#0x43\n\
     mov        r0,#0x0\n\
     strh       r0,[r5,#0x0]\n\
LAB_08026b4a:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026b5c\n\
     mov        r2,#0x59\n\
     mov        r6,#0x61\n\
     mov        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
LAB_08026b5c:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026b6e\n\
     mov        r2,#0xa1\n\
     mov        r6,#0x43\n\
     mov        r0,#0x2\n\
     strh       r0,[r5,#0x0]\n\
LAB_08026b6e:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026b80\n\
     mov        r2,#0x59\n\
     mov        r6,#0x24\n\
     mov        r0,#0x3\n\
     strh       r0,[r5,#0x0]\n\
LAB_08026b80:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x4\n\
     beq        LAB_08026bd8\n\
     ldr        r1,PTR_DAT_08026bec\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08026bf0\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     lsl        r1,r2,#0x10\n\
     lsl        r2,r6,#0x10\n\
     ldr        r3,PTR_DAT_08026bf4\n\
     ldr        r0,DAT_08026bf8\n\
     add        r1,r1,r0\n\
     asr        r0,r1,#0x10\n\
     lsr        r1,r1,#0x1f\n\
     add        r0,r0,r1\n\
     asr        r0,r0,#0x1\n\
     add        r0,#0x59\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r1,DAT_08026bfc\n\
     ldr        r3,DAT_08026c00\n\
     add        r2,r2,r3\n\
     asr        r0,r2,#0x10\n\
     lsr        r2,r2,#0x1f\n\
     add        r0,r0,r2\n\
     asr        r0,r0,#0x1\n\
     add        r0,#0x81\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_08026c04\n\
     ldr        r1,PTR_DAT_08026c08\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r1,[r1,#0x8]\n\
     add        r0,r0,r1\n\
     asr        r0,r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08026c0c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08026c10\n\
     strh       r4,[r0,#0x0]\n\
LAB_08026bd8:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08026be0:\n\
     .4byte       DAT_0200f480\n\
PTR_DAT_08026be4:\n\
     .4byte       DAT_0200f4a0\n\
PTR_DAT_08026be8:\n\
     .4byte       DAT_02005ce0\n\
PTR_DAT_08026bec:\n\
     .4byte       DAT_0200f4f8\n\
PTR_DAT_08026bf0:\n\
     .4byte       DAT_0200f488\n\
PTR_DAT_08026bf4:\n\
     .4byte       DAT_0200f484\n\
DAT_08026bf8:\n\
     .4byte 0xFFA70000\n\
DAT_08026bfc:\n\
     .4byte 0x0200F518\n\
DAT_08026c00:\n\
     .4byte 0xFF7F0000\n\
PTR_DAT_08026c04:\n\
     .4byte       DAT_0200f464\n\
PTR_DAT_08026c08:\n\
     .4byte       DAT_0200f580\n\
PTR_DAT_08026c0c:\n\
     .4byte       DAT_0200f474\n\
PTR_DAT_08026c10:\n\
     .4byte       DAT_0200f450\n\
    ");
}
__attribute__((naked)) void fun_08026c14()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x64\n\
     ldr        r4,DAT_08026dd0\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     blt        LAB_08026c30\n\
     mov        r1,#0x5\n\
     bl         fun_08002ff0\n\
     ldr        r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08026c56\n\
LAB_08026c30:\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08026dd4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08026dd8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08026ddc\n\
     ldr        r0,DAT_08026de0\n\
     ldrh       r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08026de4\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_08026c56:\n\
     bl         fun_080029c8\n\
     ldr        r0,DAT_08026dd4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026c66\n\
     bl         fun_08026f00\n\
LAB_08026c66:\n\
     ldr        r3,DAT_08026de8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026c8e\n\
     ldr        r0,DAT_08026dec\n\
     ldr        r1,DAT_08026df0\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     beq        LAB_08026c80\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
LAB_08026c80:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026c8e\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
LAB_08026c8e:\n\
     ldr        r1,DAT_08026df4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08026df8\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026ca6\n\
     ldr        r0,DAT_08026dfc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026caa\n\
LAB_08026ca6:\n\
     bl         fun_08026b24\n\
LAB_08026caa:\n\
     ldr        r0,DAT_08026df8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026cb8\n\
     bl         fun_0802699c\n\
LAB_08026cb8:\n\
     mov        r7,#0x0\n\
     ldr        r0,DAT_08026df4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08026cc4\n\
     b          LAB_08026e46\n\
LAB_08026cc4:\n\
     ldr        r4,DAT_08026e00\n\
     ldr        r5,DAT_08026e04\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r5,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r1,r0,#0x3\n\
     add        r0,r1,r4\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026d3a\n\
     add        r6,r4,#0x0\n\
     add        r6,#0x10\n\
     add        r0,r1,r6\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     bgt        LAB_08026d3a\n\
     mov        r7,#0x1\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r5,r0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r4\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r5,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r4,#0x0\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1a\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08026e08\n\
     ldr        r2,[r0,#0x0]\n\
     strh       r7,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r5,r0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r6\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08026d34\n\
     mov        r0,#0x2\n\
     strh       r0,[r2,#0x0]\n\
LAB_08026d34:\n\
     mov        r0,#0xc\n\
     bl         fun_080016f0\n\
LAB_08026d3a:\n\
     ldr        r0,DAT_08026df4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08026d44\n\
     b          LAB_08026e46\n\
LAB_08026d44:\n\
     ldr        r4,DAT_08026e00\n\
     ldr        r5,DAT_08026e04\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r5,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r1,r0,#0x3\n\
     add        r0,r1,r4\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026e16\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_08026e16\n\
     mov        r7,#0x1\n\
     ldr        r0,DAT_08026e08\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r6,DAT_08026e0c\n\
     mov        r2,#0x0\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r5,r0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x14]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08026d86\n\
     mov        r2,#0x1\n\
LAB_08026d86:\n\
     strh       r2,[r6,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r5,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r5,r0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r4\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r5,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r4,#0x0\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1a\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026e10\n\
     mov        r0,#0xe\n\
     bl         fun_080016f0\n\
     b          LAB_08026e16\n\
DAT_08026dd0:\n\
     .4byte 0x0200F48C\n\
DAT_08026dd4:\n\
     .4byte 0x0200F4A0\n\
DAT_08026dd8:\n\
     .4byte 0x020025B8\n\
DAT_08026ddc:\n\
     .4byte 0x020025FC\n\
DAT_08026de0:\n\
     .4byte 0x0200F460\n\
DAT_08026de4:\n\
     .4byte 0x02002558\n\
DAT_08026de8:\n\
     .4byte 0x0200ECC0\n\
DAT_08026dec:\n\
     .4byte 0x02005830\n\
DAT_08026df0:\n\
     .4byte 0x0200ECE0\n\
DAT_08026df4:\n\
     .4byte 0x0200F59C\n\
DAT_08026df8:\n\
     .4byte 0x0200F4F8\n\
DAT_08026dfc:\n\
     .4byte 0x0200F450\n\
DAT_08026e00:\n\
     .4byte 0x0200F520\n\
DAT_08026e04:\n\
     .4byte 0x0200F480\n\
DAT_08026e08:\n\
     .4byte 0x0200F514\n\
DAT_08026e0c:\n\
     .4byte 0x0200F474\n\
LAB_08026e10:\n\
     mov        r0,#0xc\n\
     bl         fun_080016f0\n\
LAB_08026e16:\n\
     ldr        r0,DAT_08026ed4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026e46\n\
     ldr        r2,DAT_08026ed8\n\
     ldr        r0,DAT_08026edc\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r1,r0,#0x3\n\
     add        r0,r1,r2\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026e46\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x5\n\
     bne        LAB_08026e46\n\
     mov        r0,#0xd\n\
     bl         fun_080016f0\n\
LAB_08026e46:\n\
     ldr        r0,DAT_08026ed4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08026e74\n\
     ldr        r0,DAT_08026ee0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08026e74\n\
     cmp        r7,#0x1\n\
     bne        LAB_08026e74\n\
     ldr        r1,DAT_08026ee4\n\
     ldrh       r2,[r1,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08026ee8\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_08026e74\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x1e\n\
     strh       r0,[r1,#0x0]\n\
LAB_08026e74:\n\
     bl         fun_08027058\n\
     bl         fun_0803c1a4\n\
     mov        r1,#0x8b\n\
     lsl        r1,r1,#0x1\n\
     ldr        r2,DAT_08026eec\n\
     mov        r0,#0x46\n\
     bl         fun_0803c1ec\n\
     ldr        r5,DAT_08026ee4\n\
     ldr        r1,DAT_08026ef0\n\
     ldrh       r2,[r5,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r4,DAT_08026ef4\n\
     mov        r0,sp\n\
     mov        r1,#0x10\n\
     mov        r2,#0xb\n\
     add        r3,r4,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,DAT_08026ef8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,sp\n\
     bl         fun_08002f00\n\
     mov        r0,sp\n\
     mov        r1,#0x8c\n\
     mov        r2,#0xb\n\
     add        r3,r4,#0x0\n\
     bl         fun_0803c138\n\
     bl         fun_0800467c\n\
     ldr        r2,DAT_08026efc\n\
     ldrh       r3,[r5,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_080032a0\n\
     mov        r0,#0x0\n\
     add        sp,#0x64\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08026ed4:\n\
     .4byte 0x0200F59C\n\
DAT_08026ed8:\n\
     .4byte 0x0200F520\n\
DAT_08026edc:\n\
     .4byte 0x0200F480\n\
DAT_08026ee0:\n\
     .4byte 0x0200F474\n\
DAT_08026ee4:\n\
     .4byte 0x0200F460\n\
DAT_08026ee8:\n\
     .4byte 0x0200F514\n\
DAT_08026eec:\n\
     .4byte 0x00006B7A\n\
DAT_08026ef0:\n\
     .4byte 0x0854CFD0\n\
DAT_08026ef4:\n\
     .4byte 0x0865FB7C\n\
DAT_08026ef8:\n\
     .4byte 0x0200F48C\n\
DAT_08026efc:\n\
     .4byte 0x0854CFD4\n\
    ");
}
__attribute__((naked)) void fun_08026f00()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x10\n\
     mov        r3,#0x0\n\
     ldr        r2,DAT_08026f68\n\
     mov        r1,#0x3\n\
LAB_08026f12:\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026f1a\n\
     add        r3,#0x1\n\
LAB_08026f1a:\n\
     add        r2,#0x18\n\
     sub        r1,#0x1\n\
     cmp        r1,#0x0\n\
     bge        LAB_08026f12\n\
     cmp        r3,#0x2\n\
     bne        LAB_08026f28\n\
     b          LAB_0802702e\n\
LAB_08026f28:\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x2\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x9\n\
     bls        LAB_0802702e\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     add        r4,r0,#0x0\n\
     ldr        r0,DAT_08026f68\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r4\n\
     lsl        r1,r1,#0x3\n\
     add        r0,#0x8\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0802702e\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0xc]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x8]\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x27\n\
     bhi        LAB_08026f6c\n\
     mov        r2,#0x1\n\
     str        r2,[sp,#0x8]\n\
     b          LAB_08026f7a\n\
.space 1\n\
.space 1\n\
DAT_08026f68:\n\
     .4byte 0x0200F520\n\
LAB_08026f6c:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x27\n\
     bhi        LAB_08026f7a\n\
     mov        r3,#0x1\n\
     str        r3,[sp,#0xc]\n\
LAB_08026f7a:\n\
     ldr        r0,DAT_08027040\n\
     lsl        r1,r4,#0x2\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,DAT_08027044\n\
     add        r1,r1,r0\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[sp,#0x4]\n\
     mov        r0,#0x32\n\
     bl         fun_08002c04\n\
     add        r0,#0x3c\n\
     mov        r9,r0\n\
     ldr        r0,DAT_08027048\n\
     mov        r8,r0\n\
     lsl        r1,r4,#0x1\n\
     mov        r10,r1\n\
     add        r0,r1,r4\n\
     lsl        r5,r0,#0x3\n\
     mov        r2,r8\n\
     add        r6,r5,r2\n\
     ldr        r7,[r6,#0x0]\n\
     cmp        r7,#0x0\n\
     bne        LAB_0802702e\n\
     bl         fun_0802712c\n\
     add        r4,r0,#0x0\n\
     ldr        r3,[sp,#0x8]\n\
     cmp        r3,#0x0\n\
     beq        LAB_08026fba\n\
     mov        r4,#0x4\n\
LAB_08026fba:\n\
     ldr        r0,[sp,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026fc2\n\
     mov        r4,#0x5\n\
LAB_08026fc2:\n\
     ldr        r0,DAT_0802704c\n\
     ldr        r2,DAT_08027050\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x4]\n\
     mov        r1,#0x9\n\
     strh       r1,[r0,#0x6]\n\
     bl         fun_08003998\n\
     mov        r1,r8\n\
     add        r1,#0xc\n\
     add        r1,r5,r1\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,sp\n\
     ldrh       r2,[r2,#0x0]\n\
     strh       r2,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,sp\n\
     ldrh       r3,[r3,#0x4]\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r2,[r0,#0x10]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r7,[r0,#0x8]\n\
     mov        r0,r9\n\
     str        r0,[r6,#0x0]\n\
     mov        r0,r8\n\
     add        r0,#0x4\n\
     add        r0,r5,r0\n\
     mov        r3,r9\n\
     str        r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     add        r0,#0x10\n\
     add        r0,r5,r0\n\
     str        r4,[r0,#0x0]\n\
     strh       r2,[r6,#0x14]\n\
     mov        r0,r8\n\
     add        r0,#0x8\n\
     add        r0,r5,r0\n\
     str        r7,[r0,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08027054\n\
     add        r1,r10\n\
     ldrh       r3,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
LAB_0802702e:\n\
     add        sp,#0x10\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08027040:\n\
     .4byte 0x0200F4B0\n\
DAT_08027044:\n\
     .4byte 0x0200F490\n\
DAT_08027048:\n\
     .4byte 0x0200F520\n\
DAT_0802704c:\n\
     .4byte 0x0200F500\n\
DAT_08027050:\n\
     .4byte 0x0200F4D0\n\
DAT_08027054:\n\
     .4byte 0x0200F580\n\
    ");
}
__attribute__((naked)) void fun_08027058()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r7,DAT_08027124\n\
     mov        r6,#0x0\n\
     mov        r8,r6\n\
     add        r4,r7,#0x0\n\
LAB_08027066:\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080270fa\n\
     add        r0,r7,#0x0\n\
     add        r0,#0xc\n\
     add        r5,r6,r0\n\
     ldr        r1,[r5,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x7\n\
     bls        LAB_08027084\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x8]\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
LAB_08027084:\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080270fa\n\
     sub        r1,r0,#0x1\n\
     str        r1,[r4,#0x0]\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r6,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_080270ce\n\
     ldr        r0,[r4,#0x4]\n\
     sub        r0,r0,r1\n\
     cmp        r0,#0x1b\n\
     bne        LAB_080270ce\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x3e\n\
     bhi        LAB_080270ce\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r2,#0x0\n\
     mov        r0,#0x55\n\
     strh       r0,[r1,#0x8]\n\
     mov        r0,#0x39\n\
     str        r0,[r4,#0x0]\n\
     strh       r2,[r4,#0x14]\n\
     ldr        r0,DAT_08027128\n\
     mov        r3,r8\n\
     add        r1,r3,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080270ce\n\
     strh       r2,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
LAB_080270ce:\n\
     ldr        r5,DAT_08027124\n\
     add        r0,r6,r5\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_080270fa\n\
     ldr        r0,DAT_08027128\n\
     add        r0,r8\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     add        r1,r5,#0x0\n\
     add        r1,#0xc\n\
     add        r1,r6,r1\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     bl         fun_08003b00\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x8\n\
     add        r0,r6,r0\n\
     mov        r1,#0x1a\n\
     str        r1,[r0,#0x0]\n\
LAB_080270fa:\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x8\n\
     add        r1,r6,r0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802710a\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_0802710a:\n\
     add        r6,#0x18\n\
     mov        r0,#0x2\n\
     add        r8,r0\n\
     add        r4,#0x18\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x48\n\
     cmp        r4,r0\n\
     ble        LAB_08027066\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08027124:\n\
     .4byte 0x0200F520\n\
DAT_08027128:\n\
     .4byte 0x0200F590\n\
    ");
}
__attribute__((naked)) void fun_0802712c()
{
    asm("\n\
     ldr        r2,DAT_08027148\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r1,r0,#0x2\n\
     str        r1,[r2,#0x0]\n\
     ldr        r1,DAT_0802714c\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r0,r1\n\
     bne        LAB_08027142\n\
     ldr        r0,DAT_08027150\n\
     str        r0,[r2,#0x0]\n\
LAB_08027142:\n\
     add        r0,r3,#0x0\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08027148:\n\
     .4byte 0x0200F47C\n\
DAT_0802714c:\n\
     .4byte 0x00004001\n\
DAT_08027150:\n\
     .4byte 0x087A1004\n\
    ");
}
