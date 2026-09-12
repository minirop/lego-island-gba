__attribute__((naked)) void fun_0801b5d8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_0801b620\n\
     ldr        r0,DAT_0801b624\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801b628\n\
     str        r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801b62c\n\
     str        r1,[r0,#0x0]\n\
     ldr        r3,DAT_0801b630\n\
     str        r3,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     add        r1,#0x48\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bcs        LAB_0801b618\n\
     add        r6,r3,#0x0\n\
     ldr        r5,DAT_0801b634\n\
     mov        r3,#0x0\n\
     add        r4,r0,#0x0\n\
LAB_0801b600:\n\
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
     bcc        LAB_0801b600\n\
LAB_0801b618:\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801b620:\n\
     .4byte 0x0200ECA8\n\
DAT_0801b624:\n\
     .4byte 0x084BCA40\n\
DAT_0801b628:\n\
     .4byte 0x0200EC90\n\
DAT_0801b62c:\n\
     .4byte 0x084BC9DC\n\
DAT_0801b630:\n\
     .4byte 0x0200ECA0\n\
DAT_0801b634:\n\
     .4byte 0x084BC908\n\
    ");
}
__attribute__((naked)) void fun_0801b638()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     sub        sp,#0x14\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1a\n\
     beq        LAB_0801b730\n\
     add        r1,sp,#0x10\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_0801b78c\n\
     str        r1,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0801b790\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r2,r8\n\
     strh       r2,[r1,#0x0]\n\
     str        r1,[r4,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0801b794\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r6,DAT_0801b798\n\
     add        r0,r6,#0x0\n\
     bl         fun_08039e64\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0801b79c\n\
     bl         fun_080045f0\n\
     ldr        r7,DAT_0801b7a0\n\
     ldr        r1,DAT_0801b7a4\n\
     add        r0,r7,#0x0\n\
     bl         fun_080004ac\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x20\n\
     ldr        r1,DAT_0801b7a8\n\
     bl         fun_080004ac\n\
     mov        r5,#0x0\n\
     strh       r5,[r7,#0x30]\n\
     mov        r1,sp\n\
     ldr        r2,[r6,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r2,#0x2]\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,sp\n\
     strh       r5,[r0,#0x8]\n\
     strh       r5,[r0,#0xc]\n\
     str        r5,[sp,#0x0]\n\
     strh       r5,[r0,#0xa]\n\
     mov        r1,#0x3\n\
     bl         fun_08004da8\n\
     mov        r0,#0x3\n\
     mov        r1,#0x3\n\
     bl         fun_08005b40\n\
     ldr        r0,DAT_0801b7ac\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_0801b7b0\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0801b7b4\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     bl         fun_08004c10\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_0801b7b8\n\
     and        r0,r1\n\
     bl         fun_08004c04\n\
     ldr        r0,DAT_0801b7bc\n\
     strh       r5,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801b7c0\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b710\n\
     mov        r0,#0x2\n\
     str        r0,[r7,#0x28]\n\
LAB_0801b710:\n\
     ldr        r0,DAT_0801b7c4\n\
     bl         fun_08003998\n\
     ldr        r4,DAT_0801b7c8\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0x4\n\
     mov        r2,#0x4\n\
     bl         fun_08004894\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_0801b730:\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801b7cc\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b742\n\
     bl         fun_0801be9c\n\
LAB_0801b742:\n\
     ldr        r0,PTR_DAT_0801b7d0\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801b7d4\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801b7d8\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801b7dc\n\
     mov        r5,#0x1\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801b7e0\n\
     ldr        r0,PTR_DAT_0801b7e4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_0801b7a0\n\
     ldr        r0,DAT_0801b7e8\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r4,#0x1c]\n\
     ldr        r1,DAT_0801b7a4\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803c830\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0801b7c0\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b7f0\n\
     strb       r5,[r4,#0x18]\n\
     ldr        r0,DAT_0801b7ec\n\
     str        r0,[r4,#0x3c]\n\
     b          LAB_0801b7f4\n\
.space 1\n\
.space 1\n\
DAT_0801b78c:\n\
     .4byte 0x040000D4\n\
DAT_0801b790:\n\
     .4byte 0x8100C000\n\
DAT_0801b794:\n\
     .4byte 0x81000200\n\
DAT_0801b798:\n\
     .4byte 0x0200EC90\n\
DAT_0801b79c:\n\
     .4byte 0x084496C8\n\
DAT_0801b7a0:\n\
     .4byte 0x0200DD90\n\
DAT_0801b7a4:\n\
     .4byte 0x084736F4\n\
DAT_0801b7a8:\n\
     .4byte 0x084BCB10\n\
DAT_0801b7ac:\n\
     .4byte 0x0844993C\n\
DAT_0801b7b0:\n\
     .4byte 0x0600C000\n\
DAT_0801b7b4:\n\
     .4byte 0x80002000\n\
DAT_0801b7b8:\n\
     .4byte 0x0000FEF7\n\
DAT_0801b7bc:\n\
     .4byte 0x0200DD80\n\
DAT_0801b7c0:\n\
     .4byte 0x00000E84\n\
DAT_0801b7c4:\n\
     .4byte 0x08449588\n\
DAT_0801b7c8:\n\
     .4byte 0x0200ECEC\n\
DAT_0801b7cc:\n\
     .4byte 0x00000E55\n\
PTR_DAT_0801b7d0:\n\
     .4byte       DAT_0200ecb4\n\
PTR_DAT_0801b7d4:\n\
     .4byte       DAT_0200ecb0\n\
PTR_DAT_0801b7d8:\n\
     .4byte       DAT_0200ecb8\n\
PTR_DAT_0801b7dc:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_0801b7e0:\n\
     .4byte       DAT_0200ece0\n\
PTR_DAT_0801b7e4:\n\
     .4byte       DAT_02005830\n\
DAT_0801b7e8:\n\
     .4byte 0x0877F91C\n\
DAT_0801b7ec:\n\
     .4byte 0x08786960\n\
LAB_0801b7f0:\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
LAB_0801b7f4:\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b818\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1a\n\
     beq        LAB_0801b818\n\
     ldr        r1,PTR_DAT_0801b854\n\
     ldr        r0,PTR_DAT_0801b858\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_0801b85c\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x6]\n\
LAB_0801b818:\n\
     ldr        r4,PTR_DAT_0801b860\n\
     ldr        r1,DAT_0801b864\n\
     ldr        r2,DAT_0801b868\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803c9fc\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801b86c\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     sub        r4,#0x20\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_0803aa14\n\
     ldr        r2,DAT_0801b870\n\
     add        r0,r2,#0x0\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     add        sp,#0x14\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801b854:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801b858:\n\
     .4byte       DAT_0200ece4\n\
PTR_DAT_0801b85c:\n\
     .4byte       DAT_0200ecdc\n\
PTR_DAT_0801b860:\n\
     .4byte       DAT_0200ddb0\n\
DAT_0801b864:\n\
     .4byte 0x084BCB10\n\
DAT_0801b868:\n\
     .4byte 0x0200ECD0\n\
DAT_0801b86c:\n\
     .4byte 0x00000DD8\n\
DAT_0801b870:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_0801b874()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x64\n\
     ldr        r0,PTR_DAT_0801b904\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0801b892\n\
     ldr        r0,PTR_DAT_0801b908\n\
     ldr        r1,PTR_DAT_0801b90c\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     beq        LAB_0801b892\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
LAB_0801b892:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b89e\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
LAB_0801b89e:\n\
     bl         fun_0803c1a4\n\
     bl         fun_0801c020\n\
     bl         fun_0801ba04\n\
     bl         fun_0803a9dc\n\
     bl         fun_0803ab30\n\
     ldr        r1,PTR_DAT_0801b910\n\
     ldr        r2,PTR_DAT_0801b914\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801b918\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801b91c\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b930\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r3,DAT_0801b920\n\
     ldr        r0,DAT_0801b924\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,DAT_0801b928\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r3,#0x4\n\
     add        r1,r1,r3\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r0,sp\n\
     bl         fun_080455fc\n\
     ldr        r3,DAT_0801b92c\n\
     mov        r0,sp\n\
     mov        r1,#0x46\n\
     mov        r2,#0x8c\n\
     bl         fun_0803c138\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     b          LAB_0801b93a\n\
PTR_DAT_0801b904:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_0801b908:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_0801b90c:\n\
     .4byte       DAT_0200ece0\n\
PTR_DAT_0801b910:\n\
     .4byte       DAT_0200ece4\n\
PTR_DAT_0801b914:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801b918:\n\
     .4byte       DAT_0200ecdc\n\
PTR_DAT_0801b91c:\n\
     .4byte       DAT_0200ecb4\n\
DAT_0801b920:\n\
     .4byte 0x08669620\n\
DAT_0801b924:\n\
     .4byte 0x020025B4\n\
DAT_0801b928:\n\
     .4byte 0x0200ECB8\n\
DAT_0801b92c:\n\
     .4byte 0x0865FD94\n\
LAB_0801b930:\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
LAB_0801b93a:\n\
     mov        r0,#0x0\n\
     add        sp,#0x64\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801b944()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r0,DAT_0801b96c\n\
     add        r3,r0,#0x0\n\
     ldrb       r0,[r3,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_0801b970\n\
     cmp        r2,#0x19\n\
     bls        LAB_0801b970\n\
     cmp        r2,#0x46\n\
     bhi        LAB_0801b970\n\
     cmp        r1,#0x40\n\
     bls        LAB_0801b970\n\
     cmp        r1,#0x5a\n\
     bhi        LAB_0801b970\n\
     mov        r0,#0x3\n\
     b          LAB_0801ba00\n\
.space 1\n\
.space 1\n\
DAT_0801b96c:\n\
     .4byte 0x020117E0\n\
LAB_0801b970:\n\
     ldrb       r0,[r3,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_0801b98a\n\
     cmp        r2,#0xa8\n\
     bls        LAB_0801b98a\n\
     cmp        r2,#0xef\n\
     bhi        LAB_0801b98a\n\
     cmp        r1,#0x3c\n\
     bls        LAB_0801b98a\n\
     cmp        r1,#0x68\n\
     bhi        LAB_0801b98a\n\
     mov        r0,#0x1\n\
     b          LAB_0801ba00\n\
LAB_0801b98a:\n\
     ldrb       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801b9a8\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x49\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x46\n\
     bhi        LAB_0801b9a8\n\
     cmp        r1,#0x3d\n\
     bls        LAB_0801b9a8\n\
     cmp        r1,#0x69\n\
     bhi        LAB_0801b9a8\n\
     mov        r0,#0x2\n\
     b          LAB_0801ba00\n\
LAB_0801b9a8:\n\
     ldrb       r0,[r3,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_0801b9c2\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x39\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x17\n\
     bhi        LAB_0801b9c2\n\
     cmp        r1,#0x72\n\
     bls        LAB_0801b9c2\n\
     cmp        r1,#0xa0\n\
     bls        LAB_0801b9dc\n\
LAB_0801b9c2:\n\
     ldrb       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801b9e0\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x1c\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1d\n\
     bhi        LAB_0801b9e0\n\
     cmp        r1,#0x68\n\
     bls        LAB_0801b9e0\n\
     cmp        r1,#0x82\n\
     bhi        LAB_0801b9e0\n\
LAB_0801b9dc:\n\
     mov        r0,#0x5\n\
     b          LAB_0801ba00\n\
LAB_0801b9e0:\n\
     ldrb       r3,[r3,#0x0]\n\
     cmp        r3,#0x2\n\
     bne        LAB_0801b9fe\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x1c\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1d\n\
     bhi        LAB_0801b9fe\n\
     cmp        r1,#0x59\n\
     bls        LAB_0801b9fe\n\
     cmp        r1,#0x7a\n\
     bhi        LAB_0801b9fe\n\
     mov        r0,#0x4\n\
     b          LAB_0801ba00\n\
LAB_0801b9fe:\n\
     mov        r0,#0x0\n\
LAB_0801ba00:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801ba04()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,DAT_0801ba38\n\
     ldrh       r0,[r1,#0x4]\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_0801b944\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     add        r0,r4,#0x0\n\
     bl         fun_0801c0f8\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ba26\n\
     b          switchD_0801ba36_caseD_5\n\
LAB_0801ba26:\n\
     sub        r0,r4,#0x1\n\
     cmp        r0,#0x4\n\
     bls        LAB_0801ba2e\n\
     b          switchD_0801ba36_caseD_5\n\
LAB_0801ba2e:\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_0801ba40_0801ba3c\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_0801ba38:\n\
     .4byte 0x0200DD90\n\
PTR_switchdataD_0801ba40_0801ba3c:\n\
     .4byte       switchD_0801ba36_switchdataD_0801ba40\n\
switchD_0801ba36_switchdataD_0801ba40:\n\
     .4byte       switchD_0801ba36_caseD_1\n\
     .4byte       switchD_0801ba36_caseD_2\n\
     .4byte       switchD_0801ba36_caseD_3\n\
     .4byte       switchD_0801ba36_caseD_4\n\
     .4byte       switchD_0801ba36_caseD_5_2\n\
switchD_0801ba36_caseD_3:\n\
     ldr        r1,DAT_0801ba6c\n\
     ldr        r2,DAT_0801ba70\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801ba74\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x6\n\
     bl         fun_08001088\n\
     b          switchD_0801ba36_caseD_5\n\
.space 1\n\
.space 1\n\
DAT_0801ba6c:\n\
     .4byte 0x0200ECE4\n\
DAT_0801ba70:\n\
     .4byte 0x0200DD90\n\
DAT_0801ba74:\n\
     .4byte 0x0200ECDC\n\
switchD_0801ba36_caseD_2:\n\
     ldr        r1,DAT_0801ba90\n\
     ldr        r2,DAT_0801ba94\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801ba98\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x9\n\
     bl         fun_08001088\n\
     b          switchD_0801ba36_caseD_5\n\
.space 1\n\
.space 1\n\
DAT_0801ba90:\n\
     .4byte 0x0200ECE4\n\
DAT_0801ba94:\n\
     .4byte 0x0200DD90\n\
DAT_0801ba98:\n\
     .4byte 0x0200ECDC\n\
switchD_0801ba36_caseD_1:\n\
     ldr        r1,DAT_0801bab4\n\
     ldr        r2,DAT_0801bab8\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801babc\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0xa\n\
     bl         fun_08001088\n\
     b          switchD_0801ba36_caseD_5\n\
.space 1\n\
.space 1\n\
DAT_0801bab4:\n\
     .4byte 0x0200ECE4\n\
DAT_0801bab8:\n\
     .4byte 0x0200DD90\n\
DAT_0801babc:\n\
     .4byte 0x0200ECDC\n\
switchD_0801ba36_caseD_4:\n\
     ldr        r1,PTR_DAT_0801baf0\n\
     ldr        r2,PTR_DAT_0801baf4\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801baf8\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_0801bafc\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801bb50\n\
     ldr        r4,PTR_DAT_0801bb00\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801bb08\n\
     ldr        r1,PTR_DAT_0801bb04\n\
     mov        r0,#0x3\n\
     b          LAB_0801bb20\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801baf0:\n\
     .4byte       DAT_0200ece4\n\
PTR_DAT_0801baf4:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801baf8:\n\
     .4byte       DAT_0200ecdc\n\
PTR_DAT_0801bafc:\n\
     .4byte       DAT_0200ecbc\n\
PTR_DAT_0801bb00:\n\
     .4byte       DAT_0200ece8\n\
PTR_DAT_0801bb04:\n\
     .4byte       DAT_0200254c\n\
LAB_0801bb08:\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801bb18\n\
     ldr        r1,DAT_0801bb14\n\
     mov        r0,#0x4\n\
     b          LAB_0801bb20\n\
.space 1\n\
.space 1\n\
DAT_0801bb14:\n\
     .4byte 0x0200254C\n\
LAB_0801bb18:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0801bb30\n\
     ldr        r1,DAT_0801bb2c\n\
     mov        r0,#0x5\n\
LAB_0801bb20:\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x29\n\
     bl         fun_08001088\n\
     b          LAB_0801bb40\n\
.space 1\n\
.space 1\n\
DAT_0801bb2c:\n\
     .4byte 0x0200254C\n\
LAB_0801bb30:\n\
     cmp        r0,#0x3\n\
     bne        LAB_0801bb40\n\
     ldr        r1,DAT_0801bb48\n\
     mov        r0,#0x6\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x29\n\
     bl         fun_08001088\n\
LAB_0801bb40:\n\
     ldr        r1,DAT_0801bb4c\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     b          switchD_0801ba36_caseD_5\n\
DAT_0801bb48:\n\
     .4byte 0x0200254C\n\
DAT_0801bb4c:\n\
     .4byte 0x0200ECBC\n\
LAB_0801bb50:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0801bb58\n\
     mov        r0,#0x0\n\
     b          LAB_0801bb68\n\
LAB_0801bb58:\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801bb74\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801bb78\n\
     mov        r0,#0x1\n\
LAB_0801bb68:\n\
     strb       r0,[r4,#0x0]\n\
     mov        r0,#0x24\n\
     bl         fun_08001088\n\
     b          switchD_0801ba36_caseD_5\n\
.space 1\n\
.space 1\n\
DAT_0801bb74:\n\
     .4byte 0x00000DF8\n\
LAB_0801bb78:\n\
     mov        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     mov        r0,#0x8\n\
     bl         fun_08001088\n\
     b          switchD_0801ba36_caseD_5\n\
switchD_0801ba36_caseD_5_2:\n\
     ldr        r1,DAT_0801bbd8\n\
     ldr        r2,DAT_0801bbdc\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801bbe0\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0801be9c\n\
     bl         fun_080020a4\n\
     ldr        r4,DAT_0801bbe4\n\
     add        r0,r0,r4\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801bbae\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     mov        r1,#0x4\n\
     strb       r1,[r0,#0x0]\n\
LAB_0801bbae:\n\
     bl         fun_080016d4\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldrb       r0,[r0,#0x0]\n\
     bl         fun_080016b0\n\
     ldr        r4,DAT_0801bbe8\n\
     bl         fun_0801c040\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,DAT_0801bbec\n\
     mov        r0,#0xb4\n\
     strh       r0,[r1,#0x0]\n\
switchD_0801ba36_caseD_5:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801bbd8:\n\
     .4byte 0x0200ECE4\n\
DAT_0801bbdc:\n\
     .4byte 0x0200DD90\n\
DAT_0801bbe0:\n\
     .4byte 0x0200ECDC\n\
DAT_0801bbe4:\n\
     .4byte 0x00000E55\n\
DAT_0801bbe8:\n\
     .4byte 0x0200ECB8\n\
DAT_0801bbec:\n\
     .4byte 0x0200ECB4\n\
    ");
}
__attribute__((naked)) void fun_0801bbf0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r2,#0x0\n\
     add        r5,r3,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801bc30\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801bc0a\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bc0a:\n\
     ldr        r2,DAT_0801bc34\n\
     ldr        r0,DAT_0801bc38\n\
     ldrh       r3,[r0,#0x30]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r0,DAT_0801bc3c\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0x7\n\
     bls        LAB_0801bc24\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bc24:\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_0801bc44_0801bc40\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
.space 1\n\
.space 1\n\
DAT_0801bc30:\n\
     .4byte 0x00000E84\n\
DAT_0801bc34:\n\
     .4byte 0x084BCB3C\n\
DAT_0801bc38:\n\
     .4byte 0x0200DD90\n\
DAT_0801bc3c:\n\
     .4byte 0x0200DD80\n\
PTR_switchdataD_0801bc44_0801bc40:\n\
     .4byte       switchD_0801bc2c_switchdataD_0801bc44\n\
switchD_0801bc2c_switchdataD_0801bc44:\n\
     .4byte       switchD_0801bc2c_caseD_0\n\
     .4byte       switchD_0801bc2c_caseD_1\n\
     .4byte       switchD_0801bc2c_caseD_2\n\
     .4byte       switchD_0801bc2c_caseD_3\n\
     .4byte       switchD_0801bc2c_caseD_4\n\
     .4byte       switchD_0801bc2c_caseD_5\n\
     .4byte       switchD_0801bc2c_caseD_6\n\
     .4byte       switchD_0801bc2c_caseD_7\n\
switchD_0801bc2c_caseD_0:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x68\n\
     mov        r3,#0x68\n\
     bl         fun_0800eaa4\n\
     ldrh       r4,[r4,#0x0]\n\
     cmp        r4,#0x68\n\
     beq        LAB_0801bc78\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bc78:\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0x68\n\
     beq        LAB_0801bc80\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bc80:\n\
     ldr        r1,PTR_DAT_0801bc98\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_0801bc9c\n\
     mov        r1,#0x0\n\
     strh       r1,[r4,#0x30]\n\
     ldr        r0,PTR_DAT_0801bca0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801bca4\n\
     ldr        r2,DAT_0801bca8\n\
     b          LAB_0801be0e\n\
PTR_DAT_0801bc98:\n\
     .4byte       DAT_0200dd80\n\
PTR_DAT_0801bc9c:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801bca0:\n\
     .4byte       DAT_0200dca0\n\
PTR_DAT_0801bca4:\n\
     .4byte       DAT_0200dc90\n\
DAT_0801bca8:\n\
     .4byte 0x000003C1\n\
switchD_0801bc2c_caseD_1:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0xa9\n\
     mov        r3,#0x68\n\
     bl         fun_0800eaa4\n\
     ldrh       r4,[r4,#0x0]\n\
     cmp        r4,#0xa9\n\
     beq        LAB_0801bcc0\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bcc0:\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0x68\n\
     beq        LAB_0801bcc8\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bcc8:\n\
     ldr        r1,PTR_DAT_0801bcf0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_0801bcf4\n\
     mov        r1,#0x0\n\
     mov        r0,#0xa\n\
     strh       r0,[r4,#0x30]\n\
     ldr        r0,PTR_DAT_0801bcf8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801bcfc\n\
     ldr        r2,DAT_0801bd00\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x15\n\
     strh       r0,[r4,#0x10]\n\
     b          switchD_0801bc2c_caseD_8\n\
PTR_DAT_0801bcf0:\n\
     .4byte       DAT_0200dd80\n\
PTR_DAT_0801bcf4:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801bcf8:\n\
     .4byte       DAT_0200dca0\n\
PTR_DAT_0801bcfc:\n\
     .4byte       DAT_0200dc90\n\
DAT_0801bd00:\n\
     .4byte 0x000003C2\n\
switchD_0801bc2c_caseD_2:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x8f\n\
     mov        r3,#0x69\n\
     bl         fun_0800eaa4\n\
     ldrh       r4,[r4,#0x0]\n\
     cmp        r4,#0x8f\n\
     beq        LAB_0801bd18\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bd18:\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0x69\n\
     beq        LAB_0801bd20\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bd20:\n\
     ldr        r1,PTR_DAT_0801bd3c\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_0801bd40\n\
     mov        r1,#0x0\n\
     mov        r0,#0xa\n\
     strh       r0,[r4,#0x30]\n\
     ldr        r0,PTR_DAT_0801bd44\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801bd48\n\
     ldr        r2,DAT_0801bd4c\n\
     b          LAB_0801be0e\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801bd3c:\n\
     .4byte       DAT_0200dd80\n\
PTR_DAT_0801bd40:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801bd44:\n\
     .4byte       DAT_0200dca0\n\
PTR_DAT_0801bd48:\n\
     .4byte       DAT_0200dc90\n\
DAT_0801bd4c:\n\
     .4byte 0x000003C3\n\
switchD_0801bc2c_caseD_3:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x46\n\
     mov        r3,#0x69\n\
     bl         fun_0800eaa4\n\
     ldrh       r4,[r4,#0x0]\n\
     cmp        r4,#0x46\n\
     beq        LAB_0801bd64\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bd64:\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0x69\n\
     beq        LAB_0801bd6c\n\
     b          switchD_0801bc2c_caseD_8\n\
LAB_0801bd6c:\n\
     ldr        r1,PTR_DAT_0801bd88\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_0801bd8c\n\
     mov        r1,#0x0\n\
     mov        r0,#0x5\n\
     strh       r0,[r4,#0x30]\n\
     ldr        r0,PTR_DAT_0801bd90\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801bd94\n\
     mov        r2,#0xf1\n\
     lsl        r2,r2,#0x2\n\
     b          LAB_0801be0e\n\
PTR_DAT_0801bd88:\n\
     .4byte       DAT_0200dd80\n\
PTR_DAT_0801bd8c:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801bd90:\n\
     .4byte       DAT_0200dca0\n\
PTR_DAT_0801bd94:\n\
     .4byte       DAT_0200dc90\n\
switchD_0801bc2c_caseD_4:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x39\n\
     mov        r3,#0x7a\n\
     bl         fun_0800eaa4\n\
     ldrh       r4,[r4,#0x0]\n\
     cmp        r4,#0x39\n\
     bne        switchD_0801bc2c_caseD_8\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0x7a\n\
     bne        switchD_0801bc2c_caseD_8\n\
     ldr        r1,PTR_DAT_0801bdcc\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_0801bdd0\n\
     mov        r1,#0x0\n\
     mov        r0,#0x5\n\
     strh       r0,[r4,#0x30]\n\
     ldr        r0,PTR_DAT_0801bdd4\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801bdd8\n\
     ldr        r2,DAT_0801bddc\n\
     b          LAB_0801be0e\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801bdcc:\n\
     .4byte       DAT_0200dd80\n\
PTR_DAT_0801bdd0:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801bdd4:\n\
     .4byte       DAT_0200dca0\n\
PTR_DAT_0801bdd8:\n\
     .4byte       DAT_0200dc90\n\
DAT_0801bddc:\n\
     .4byte 0x000003C5\n\
switchD_0801bc2c_caseD_5:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x39\n\
     mov        r3,#0x7a\n\
     bl         fun_0800eaa4\n\
     ldrh       r4,[r4,#0x0]\n\
     cmp        r4,#0x39\n\
     bne        switchD_0801bc2c_caseD_8\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0x7a\n\
     bne        switchD_0801bc2c_caseD_8\n\
     ldr        r1,PTR_DAT_0801be20\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,PTR_DAT_0801be24\n\
     mov        r1,#0x0\n\
     strh       r1,[r4,#0x30]\n\
     ldr        r0,PTR_DAT_0801be28\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801be2c\n\
     ldr        r2,DAT_0801be30\n\
LAB_0801be0e:\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0xe\n\
     strh       r0,[r4,#0x10]\n\
     b          switchD_0801bc2c_caseD_8\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801be20:\n\
     .4byte       DAT_0200dd80\n\
PTR_DAT_0801be24:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_0801be28:\n\
     .4byte       DAT_0200dca0\n\
PTR_DAT_0801be2c:\n\
     .4byte       DAT_0200dc90\n\
DAT_0801be30:\n\
     .4byte 0x000003C6\n\
switchD_0801bc2c_caseD_6:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0xd8\n\
     mov        r3,#0x90\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_0801bc2c_caseD_7\n\
     ldr        r1,DAT_0801be50\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          switchD_0801bc2c_caseD_8\n\
DAT_0801be50:\n\
     .4byte 0x0200DD80\n\
switchD_0801bc2c_caseD_7:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0xd8\n\
     mov        r3,#0xa0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_0801bc2c_caseD_8\n\
     ldr        r1,DAT_0801be90\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801be94\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x1\n\
     orr        r1,r3\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,DAT_0801be98\n\
     mov        r2,#0x0\n\
     mov        r0,#0x4\n\
     strb       r0,[r1,#0x18]\n\
     strh       r2,[r1,#0x10]\n\
     str        r3,[r1,#0x28]\n\
switchD_0801bc2c_caseD_8:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801be90:\n\
     .4byte 0x0200DD80\n\
DAT_0801be94:\n\
     .4byte 0x00000E84\n\
DAT_0801be98:\n\
     .4byte 0x0200DD90\n\
    ");
}
__attribute__((naked)) void fun_0801be9c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
switchD_0801bee8_caseD_c:\n\
     bl         fun_080020a4\n\
     add        r5,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r4,DAT_0801beec\n\
     add        r0,r0,r4\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r2,r1,#0x1\n\
     add        r0,r2,#0x0\n\
     asr        r0,r0,#0x4\n\
     lsl        r0,r0,#0x4\n\
     sub        r0,r2,r0\n\
     add        r1,r5,r4\n\
     strb       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801bed2\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     mov        r1,#0x4\n\
     strb       r1,[r0,#0x0]\n\
LAB_0801bed2:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x4\n\
     cmp        r0,#0xb\n\
     bhi        switchD_0801bee8_caseD_c\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_0801bef4_0801bef0\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
.space 1\n\
.space 1\n\
DAT_0801beec:\n\
     .4byte 0x00000E55\n\
PTR_switchdataD_0801bef4_0801bef0:\n\
     .4byte       switchD_0801bee8_switchdataD_0801bef4\n\
switchD_0801bee8_switchdataD_0801bef4:\n\
     .4byte       switchD_0801bee8_caseD_4\n\
     .4byte       switchD_0801bee8_caseD_5\n\
     .4byte       switchD_0801bee8_caseD_6\n\
     .4byte       switchD_0801bee8_caseD_7\n\
     .4byte       switchD_0801bee8_caseD_8\n\
     .4byte       switchD_0801bee8_caseD_9\n\
     .4byte       switchD_0801bee8_caseD_a\n\
     .4byte       switchD_0801bee8_caseD_b\n\
     .4byte       switchD_0801bee8_caseD_c\n\
     .4byte       switchD_0801bee8_caseD_d\n\
     .4byte       switchD_0801bee8_caseD_e\n\
     .4byte       switchD_0801bee8_caseD_a\n\
switchD_0801bee8_caseD_4:\n\
     ldr        r0,DAT_0801bf28\n\
     b          LAB_0801bfc2\n\
DAT_0801bf28:\n\
     .4byte 0x000007E9\n\
switchD_0801bee8_caseD_5:\n\
     ldr        r0,DAT_0801bf30\n\
     b          LAB_0801bfc2\n\
DAT_0801bf30:\n\
     .4byte 0x000007D1\n\
switchD_0801bee8_caseD_6:\n\
     ldr        r0,DAT_0801bf44\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     ldr        r0,DAT_0801bf48\n\
     b          LAB_0801bfc2\n\
DAT_0801bf44:\n\
     .4byte 0x000007D9\n\
DAT_0801bf48:\n\
     .4byte 0x000007E2\n\
switchD_0801bee8_caseD_7:\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x3\n\
     b          LAB_0801bfc2\n\
switchD_0801bee8_caseD_8:\n\
     ldr        r0,DAT_0801bf64\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     ldr        r0,DAT_0801bf68\n\
     b          LAB_0801bfc2\n\
.space 1\n\
.space 1\n\
DAT_0801bf64:\n\
     .4byte 0x000007DE\n\
DAT_0801bf68:\n\
     .4byte 0x000007E1\n\
switchD_0801bee8_caseD_9:\n\
     ldr        r0,DAT_0801bf8c\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     ldr        r0,DAT_0801bf90\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     mov        r0,#0xfd\n\
     lsl        r0,r0,#0x3\n\
     b          LAB_0801bfc2\n\
.space 1\n\
.space 1\n\
DAT_0801bf8c:\n\
     .4byte 0x000007E6\n\
DAT_0801bf90:\n\
     .4byte 0x000007D6\n\
switchD_0801bee8_caseD_b:\n\
     mov        r0,#0xfc\n\
     lsl        r0,r0,#0x3\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     mov        r0,#0x18\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     ldr        r0,DAT_0801bfb4\n\
     b          LAB_0801bfc2\n\
.space 1\n\
.space 1\n\
DAT_0801bfb4:\n\
     .4byte 0x000007D1\n\
switchD_0801bee8_caseD_c_2:\n\
     ldr        r0,DAT_0801bfbc\n\
     b          LAB_0801bfc2\n\
DAT_0801bfbc:\n\
     .4byte 0x000007DA\n\
switchD_0801bee8_caseD_d:\n\
     ldr        r0,DAT_0801bfd0\n\
LAB_0801bfc2:\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     b          switchD_0801bee8_caseD_c\n\
.space 1\n\
.space 1\n\
DAT_0801bfd0:\n\
     .4byte 0x000007EA\n\
switchD_0801bee8_caseD_e:\n\
     ldr        r0,DAT_0801bfe8\n\
     bl         fun_080020bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        switchD_0801bee8_caseD_a\n\
     b          switchD_0801bee8_caseD_c\n\
switchD_0801bee8_caseD_a:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801bfe8:\n\
     .4byte 0x000007E4\n\
    ");
}
__attribute__((naked)) void fun_0801bfec()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803abbc\n\
     ldr        r0,DAT_0801c010\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1a\n\
     beq        LAB_0801c00a\n\
     bl         fun_0803a980\n\
     ldr        r0,DAT_0801c014\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0800457c\n\
LAB_0801c00a:\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801c010:\n\
     .4byte 0x020025D8\n\
DAT_0801c014:\n\
     .4byte 0x0200ECEC\n\
    ");
}
__attribute__((naked)) void fun_0801c018()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801c01c()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801c020()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0801c030\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x9b\n\
     bgt        LAB_0801c034\n\
     mov        r0,#0x0\n\
     b          LAB_0801c03a\n\
DAT_0801c030:\n\
     .4byte 0x0200DD90\n\
LAB_0801c034:\n\
     bl         fun_080010d8\n\
     mov        r0,#0x1\n\
LAB_0801c03a:\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801c040()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801c05c\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x4\n\
     cmp        r0,#0xb\n\
     bhi        switchD_0801c05a_caseD_f\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_0801c064_0801c060\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_0801c05c:\n\
     .4byte 0x00000E55\n\
PTR_switchdataD_0801c064_0801c060:\n\
     .4byte       switchD_0801c05a_switchdataD_0801c064\n\
switchD_0801c05a_switchdataD_0801c064:\n\
     .4byte       switchD_0801c05a_caseD_4\n\
     .4byte       switchD_0801c05a_caseD_5\n\
     .4byte       switchD_0801c05a_caseD_6\n\
     .4byte       switchD_0801c05a_caseD_7\n\
     .4byte       switchD_0801c05a_caseD_8\n\
     .4byte       switchD_0801c05a_caseD_9\n\
     .4byte       switchD_0801c05a_caseD_a\n\
     .4byte       switchD_0801c05a_caseD_b\n\
     .4byte       switchD_0801c05a_caseD_c\n\
     .4byte       switchD_0801c05a_caseD_d\n\
     .4byte       switchD_0801c05a_caseD_e\n\
     .4byte       switchD_0801c05a_caseD_f\n\
switchD_0801c05a_caseD_4:\n\
     ldr        r0,DAT_0801c098\n\
     b          LAB_0801c0ee\n\
DAT_0801c098:\n\
     .4byte 0x0000063B\n\
switchD_0801c05a_caseD_5:\n\
     ldr        r0,DAT_0801c0a0\n\
     b          LAB_0801c0ee\n\
DAT_0801c0a0:\n\
     .4byte 0x0000063D\n\
switchD_0801c05a_caseD_6:\n\
     ldr        r0,DAT_0801c0a8\n\
     b          LAB_0801c0ee\n\
DAT_0801c0a8:\n\
     .4byte 0x00000634\n\
switchD_0801c05a_caseD_7:\n\
     ldr        r0,DAT_0801c0b0\n\
     b          LAB_0801c0ee\n\
DAT_0801c0b0:\n\
     .4byte 0x00000633\n\
switchD_0801c05a_caseD_8:\n\
     ldr        r0,DAT_0801c0b8\n\
     b          LAB_0801c0ee\n\
DAT_0801c0b8:\n\
     .4byte 0x00000635\n\
switchD_0801c05a_caseD_9:\n\
     ldr        r0,DAT_0801c0c0\n\
     b          LAB_0801c0ee\n\
DAT_0801c0c0:\n\
     .4byte 0x00000632\n\
switchD_0801c05a_caseD_a:\n\
     ldr        r0,DAT_0801c0c8\n\
     b          LAB_0801c0ee\n\
DAT_0801c0c8:\n\
     .4byte 0x00000639\n\
switchD_0801c05a_caseD_b:\n\
     mov        r0,#0xc7\n\
     lsl        r0,r0,#0x3\n\
     b          LAB_0801c0ee\n\
switchD_0801c05a_caseD_c:\n\
     ldr        r0,DAT_0801c0d8\n\
     b          LAB_0801c0ee\n\
.space 1\n\
.space 1\n\
DAT_0801c0d8:\n\
     .4byte 0x00000637\n\
switchD_0801c05a_caseD_d:\n\
     ldr        r0,DAT_0801c0e0\n\
     b          LAB_0801c0ee\n\
DAT_0801c0e0:\n\
     .4byte 0x00000636\n\
switchD_0801c05a_caseD_e:\n\
     ldr        r0,DAT_0801c0e8\n\
     b          LAB_0801c0ee\n\
DAT_0801c0e8:\n\
     .4byte 0x0000063A\n\
switchD_0801c05a_caseD_f:\n\
     ldr        r0,DAT_0801c0f4\n\
LAB_0801c0ee:\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801c0f4:\n\
     .4byte 0x0000063C\n\
    ");
}
__attribute__((naked)) void fun_0801c0f8()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x5\n\
     bhi        switchD_0801c108_caseD_0\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_0801c110_0801c10c\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
.space 1\n\
.space 1\n\
PTR_switchdataD_0801c110_0801c10c:\n\
     .4byte       switchD_0801c108_switchdataD_0801c110\n\
switchD_0801c108_switchdataD_0801c110:\n\
     .4byte       switchD_0801c108_caseD_0\n\
     .4byte       switchD_0801c108_caseD_1\n\
     .4byte       switchD_0801c108_caseD_2\n\
     .4byte       switchD_0801c108_caseD_3\n\
     .4byte       switchD_0801c108_caseD_4\n\
     .4byte       switchD_0801c108_caseD_5\n\
switchD_0801c108_caseD_1:\n\
     mov        r2,#0xd\n\
     b          LAB_0801c13e\n\
switchD_0801c108_caseD_2:\n\
     mov        r2,#0xa\n\
     b          LAB_0801c13e\n\
switchD_0801c108_caseD_3:\n\
     mov        r2,#0xb\n\
     b          LAB_0801c13e\n\
switchD_0801c108_caseD_4:\n\
     mov        r2,#0xe\n\
     b          LAB_0801c13e\n\
switchD_0801c108_caseD_5:\n\
     mov        r2,#0x8\n\
     b          LAB_0801c13e\n\
switchD_0801c108_caseD_0:\n\
     ldr        r2,DAT_0801c154\n\
LAB_0801c13e:\n\
     ldr        r0,DAT_0801c154\n\
     cmp        r2,r0\n\
     beq        LAB_0801c160\n\
     ldr        r0,DAT_0801c158\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_0801c15c\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     b          LAB_0801c16e\n\
.space 1\n\
.space 1\n\
DAT_0801c154:\n\
     .4byte 0x0000FFFF\n\
DAT_0801c158:\n\
     .4byte 0x0200ECEC\n\
DAT_0801c15c:\n\
     .4byte 0x0000FDFF\n\
LAB_0801c160:\n\
     ldr        r0,DAT_0801c174\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
LAB_0801c16e:\n\
     strh       r0,[r1,#0x12]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0801c174:\n\
     .4byte 0x0200ECEC\n\
    ");
}
__attribute__((naked)) void fun_0801c178()
{
    asm("\n\
     ldr        r2,DAT_0801c190\n\
     ldr        r0,DAT_0801c194\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801c198\n\
     str        r1,[r2,#0x4]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0801c190:\n\
     .4byte 0x0200ED00\n\
DAT_0801c194:\n\
     .4byte 0x084BCBB4\n\
DAT_0801c198:\n\
     .4byte 0x0200ECF0\n\
    ");
}
__attribute__((naked)) void fun_0801c19c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x13\n\
     mov        r1,#0x0\n\
     strh       r1,[r6,#0x0]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_0801c220\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0801c224\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r5,#0xa0\n\
     lsl        r5,r5,#0x13\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0801c228\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0801c22c\n\
     ldr        r1,DAT_0801c230\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_0801c234\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0801c238\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r1,DAT_0801c23c\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_0801c240\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     bl         fun_08001aa8\n\
     bl         fun_0801c3d4\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     cmp        r1,#0x0\n\
     bne        LAB_0801c20a\n\
     ldr        r0,DAT_0801c244\n\
     strh       r1,[r0,#0x0]\n\
LAB_0801c20a:\n\
     ldr        r0,DAT_0801c248\n\
     bl         fun_080011a8\n\
     ldr        r0,DAT_0801c24c\n\
     bl         fun_080011b4\n\
     mov        r0,#0x1\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801c220:\n\
     .4byte 0x040000D4\n\
DAT_0801c224:\n\
     .4byte 0x8100C000\n\
DAT_0801c228:\n\
     .4byte 0x81000200\n\
DAT_0801c22c:\n\
     .4byte 0x084BDEA8\n\
DAT_0801c230:\n\
     .4byte 0x0600A000\n\
DAT_0801c234:\n\
     .4byte 0x084BDCA8\n\
DAT_0801c238:\n\
     .4byte 0x80000100\n\
DAT_0801c23c:\n\
     .4byte 0x00001F54\n\
DAT_0801c240:\n\
     .4byte 0x0200ED0C\n\
DAT_0801c244:\n\
     .4byte 0x0200ED08\n\
DAT_0801c248:\n\
     .4byte 0x0801C439\n\
DAT_0801c24c:\n\
     .4byte 0x0801C459\n\
    ");
}
__attribute__((naked)) void fun_0801c250()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800135c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c26c\n\
     ldr        r1,DAT_0801c298\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c26c\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     bl         fun_0801c3f0\n\
LAB_0801c26c:\n\
     bl         fun_08001374\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c286\n\
     ldr        r1,DAT_0801c298\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_0801c286\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     bl         fun_0801c3f0\n\
LAB_0801c286:\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c29c\n\
     mov        r0,#0xe\n\
     bl         fun_08001070\n\
     b          LAB_0801c2e2\n\
DAT_0801c298:\n\
     .4byte 0x02005570\n\
LAB_0801c29c:\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801c2b0\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c2e2\n\
LAB_0801c2b0:\n\
     ldr        r0,DAT_0801c2d0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c2d8\n\
     ldr        r0,DAT_0801c2d4\n\
     ldrb       r0,[r0,#0x0]\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c2d8\n\
     mov        r0,#0x2a\n\
     bl         fun_08001070\n\
     b          LAB_0801c2e2\n\
.space 1\n\
.space 1\n\
DAT_0801c2d0:\n\
     .4byte 0x020025D4\n\
DAT_0801c2d4:\n\
     .4byte 0x02005570\n\
LAB_0801c2d8:\n\
     bl         fun_08002038\n\
     mov        r0,#0x14\n\
     bl         fun_08001070\n\
LAB_0801c2e2:\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801c2e8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x28\n\
     mov        r0,#0x0\n\
     mov        r9,r0\n\
     mov        r5,#0x0\n\
     mov        r6,#0x0\n\
     ldr        r1,DAT_0801c394\n\
     mov        r8,r1\n\
     ldrb       r0,[r1,#0x0]\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c346\n\
     bl         fun_080020a4\n\
     ldr        r0,[r0,#0x18]\n\
     mov        r1,#0xe1\n\
     lsl        r1,r1,#0x4\n\
     bl         fun_080436a0\n\
     add        r6,r0,#0x0\n\
     bl         fun_080020a4\n\
     lsl        r4,r6,#0x3\n\
     sub        r4,r4,r6\n\
     lsl        r4,r4,#0x5\n\
     add        r4,r4,r6\n\
     lsl        r4,r4,#0x4\n\
     ldr        r0,[r0,#0x18]\n\
     sub        r0,r0,r4\n\
     mov        r1,#0x3c\n\
     bl         fun_080436a0\n\
     add        r5,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,[r0,#0x18]\n\
     sub        r1,r1,r4\n\
     lsl        r0,r5,#0x4\n\
     sub        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     sub        r1,r1,r0\n\
     mov        r9,r1\n\
LAB_0801c346:\n\
     ldr        r1,DAT_0801c398\n\
     ldr        r4,DAT_0801c39c\n\
     ldr        r0,DAT_0801c3a0\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r2,r2,#0x2\n\
     mov        r7,r8\n\
     ldrb       r7,[r7,#0x0]\n\
     mov        r0,#0x84\n\
     lsl        r0,r0,#0x3\n\
     add        r3,r7,r0\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x4\n\
     add        r2,r2,r0\n\
     add        r4,#0x4\n\
     add        r2,r2,r4\n\
     ldr        r2,[r2,#0x0]\n\
     str        r5,[sp,#0x0]\n\
     mov        r4,r9\n\
     str        r4,[sp,#0x4]\n\
     add        r0,sp,#0x8\n\
     add        r3,r6,#0x0\n\
     bl         fun_080455fc\n\
     bl         fun_0803c1a4\n\
     ldr        r2,DAT_0801c3a4\n\
     add        r0,sp,#0x8\n\
     mov        r1,#0x85\n\
     bl         fun_0803c010\n\
     add        sp,#0x28\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801c394:\n\
     .4byte 0x02005570\n\
DAT_0801c398:\n\
     .4byte 0x084BCC84\n\
DAT_0801c39c:\n\
     .4byte 0x08669620\n\
DAT_0801c3a0:\n\
     .4byte 0x020025B4\n\
DAT_0801c3a4:\n\
     .4byte 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_0801c3a8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     ldr        r1,DAT_0801c3bc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801c3bc:\n\
     .4byte 0x020025D4\n\
    ");
}
__attribute__((naked)) void fun_0801c3c0()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0801c250\n\
     mov        r0,#0x1\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
int fun_0801c3cc()
{
    return 1;
}
int fun_0801c3d0()
{
    return 1;
}
__attribute__((naked)) void fun_0801c3d4()
{
    asm("\n\
     push       {lr}\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0801c3ec\n\
     bl         fun_080045f0\n\
     bl         fun_0801c3f0\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801c3ec:\n\
     .4byte 0x08063990\n\
    ");
}
__attribute__((naked)) void fun_0801c3f0()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0801c428\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c3fe\n\
     bl         fun_08003b00\n\
LAB_0801c3fe:\n\
     ldr        r1,DAT_0801c42c\n\
     ldr        r0,DAT_0801c430\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x4\n\
     ldr        r1,DAT_0801c434\n\
     add        r0,r0,r1\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0x58\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x40\n\
     strh       r1,[r0,#0x4]\n\
     bl         fun_0801c2e8\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801c428:\n\
     .4byte 0x0200ED0C\n\
DAT_0801c42c:\n\
     .4byte 0x08786964\n\
DAT_0801c430:\n\
     .4byte 0x02005570\n\
DAT_0801c434:\n\
     .4byte 0x08063700\n\
    ");
}
__attribute__((naked)) void fun_0801c438()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800200c\n\
     ldr        r1,DAT_0801c454\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_08002038\n\
     mov        r0,#0x14\n\
     bl         fun_08001070\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801c454:\n\
     .4byte 0x020025D4\n\
    ");
}
__attribute__((naked)) void fun_0801c458()
{
    asm("\n\
     push       {lr}\n\
     mov        r0,#0xe\n\
     bl         fun_08001070\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801c464()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_0801c4c8\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,DAT_0801c4cc\n\
     strh       r4,[r0,#0x0]\n\
     mov        r0,sp\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_0801c4d0\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801c4d4\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r4,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801c4d8\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_0801c4dc\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r5,DAT_0801c4e0\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801c4ec\n\
     ldr        r0,DAT_0801c4e4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801c4e8\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x3c\n\
     strh       r1,[r0,#0x4]\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x0]\n\
     b          LAB_0801c524\n\
.space 1\n\
.space 1\n\
DAT_0801c4c8:\n\
     .4byte 0x0200ED10\n\
DAT_0801c4cc:\n\
     .4byte 0x0200ED18\n\
DAT_0801c4d0:\n\
     .4byte 0x040000D4\n\
DAT_0801c4d4:\n\
     .4byte 0x8100C000\n\
DAT_0801c4d8:\n\
     .4byte 0x81000200\n\
DAT_0801c4dc:\n\
     .4byte 0x00001F44\n\
DAT_0801c4e0:\n\
     .4byte 0x0200DCCC\n\
DAT_0801c4e4:\n\
     .4byte 0x08063710\n\
DAT_0801c4e8:\n\
     .4byte 0x0200DCDC\n\
LAB_0801c4ec:\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801c510\n\
     ldr        r0,DAT_0801c508\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801c50c\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x3c\n\
     strh       r1,[r0,#0x4]\n\
     mov        r0,#0x2\n\
     strb       r0,[r5,#0x0]\n\
     b          LAB_0801c524\n\
DAT_0801c508:\n\
     .4byte 0x08063700\n\
DAT_0801c50c:\n\
     .4byte 0x0200DCB0\n\
LAB_0801c510:\n\
     ldr        r0,DAT_0801c578\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801c57c\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x3c\n\
     strh       r1,[r0,#0x4]\n\
     strb       r4,[r5,#0x0]\n\
LAB_0801c524:\n\
     ldr        r0,DAT_0801c580\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801c584\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801c588\n\
     bl         fun_080045f0\n\
     mov        r0,#0xf\n\
     mov        r1,#0xf\n\
     mov        r2,#0xf\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     bl         fun_08002f58\n\
     ldr        r1,DAT_0801c58c\n\
     ldr        r0,DAT_0801c590\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801c594\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r0,DAT_0801c598\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     ldr        r2,DAT_0801c59c\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801c5a0\n\
     ldr        r0,DAT_0801c5a4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r3,DAT_0801c5a8\n\
     add        r1,r1,r3\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     b          LAB_0801c5b4\n\
DAT_0801c578:\n\
     .4byte 0x08063720\n\
DAT_0801c57c:\n\
     .4byte 0x0200DCA4\n\
DAT_0801c580:\n\
     .4byte 0x08063740\n\
DAT_0801c584:\n\
     .4byte 0x0200DCBC\n\
DAT_0801c588:\n\
     .4byte 0x08063990\n\
DAT_0801c58c:\n\
     .4byte 0x040000D4\n\
DAT_0801c590:\n\
     .4byte 0x084C1D68\n\
DAT_0801c594:\n\
     .4byte 0x80000100\n\
DAT_0801c598:\n\
     .4byte 0x084C1F68\n\
DAT_0801c59c:\n\
     .4byte 0x0200DCC0\n\
DAT_0801c5a0:\n\
     .4byte 0x08669620\n\
DAT_0801c5a4:\n\
     .4byte 0x020025B4\n\
DAT_0801c5a8:\n\
     .4byte 0x0000C304\n\
LAB_0801c5ac:\n\
     add        r1,#0x1\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_0801c5b4:\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801c5ac\n\
     ldr        r1,DAT_0801c678\n\
     ldrh       r2,[r1,#0x0]\n\
     lsl        r0,r2,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801c67c\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801c680\n\
     ldr        r0,DAT_0801c684\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r3,DAT_0801c688\n\
     add        r1,r1,r3\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r7,r2,#0x0\n\
     ldr        r3,DAT_0801c68c\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c5f0\n\
LAB_0801c5e2:\n\
     add        r1,#0x1\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801c5e2\n\
LAB_0801c5f0:\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r7,r0]\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r7,#0x0]\n\
     mov        r0,#0xd4\n\
     sub        r0,r0,r1\n\
     strh       r0,[r3,#0x0]\n\
     bl         fun_0803c1a4\n\
     ldr        r4,DAT_0801c680\n\
     ldr        r5,DAT_0801c684\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801c690\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r6,DAT_0801c694\n\
     mov        r1,#0x41\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r3,DAT_0801c698\n\
     add        r1,r4,r3\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x85\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801c688\n\
     add        r4,r4,r1\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xe0\n\
     ldrh       r7,[r7,#0x0]\n\
     sub        r1,r1,r7\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r2,#0x85\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,DAT_0801c69c\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801c678\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,#0x14\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x85\n\
     strh       r1,[r0,#0x4]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r3,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801c678:\n\
     .4byte 0x0200DCC0\n\
DAT_0801c67c:\n\
     .4byte 0x0200DCD4\n\
DAT_0801c680:\n\
     .4byte 0x08669620\n\
DAT_0801c684:\n\
     .4byte 0x020025B4\n\
DAT_0801c688:\n\
     .4byte 0x0000C2D4\n\
DAT_0801c68c:\n\
     .4byte 0x0200ED14\n\
DAT_0801c690:\n\
     .4byte 0x0000C814\n\
DAT_0801c694:\n\
     .4byte 0x0865FD94\n\
DAT_0801c698:\n\
     .4byte 0x0000C304\n\
DAT_0801c69c:\n\
     .4byte 0x0200DCBC\n\
    ");
}
__attribute__((naked)) void fun_0801c6a0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r2,DAT_0801c72c\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     cmp        r7,#0x0\n\
     beq        LAB_0801c758\n\
     bl         fun_0803c1a4\n\
     ldr        r4,DAT_0801c730\n\
     ldr        r5,DAT_0801c734\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801c738\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r6,DAT_0801c73c\n\
     mov        r1,#0x41\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801c740\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x85\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801c744\n\
     add        r4,r4,r1\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_0801c748\n\
     mov        r1,#0xe0\n\
     ldrh       r2,[r2,#0x0]\n\
     sub        r1,r1,r2\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r2,#0x85\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,PTR_DAT_0801c74c\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801c750\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,#0x14\n\
     mov        r4,#0x0\n\
     strh       r1,[r0,#0x2]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r3,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
     ldr        r0,PTR_DAT_0801c754\n\
     strh       r4,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
     b          LAB_0801c7d8\n\
DAT_0801c72c:\n\
     .4byte 0x02005CE0\n\
DAT_0801c730:\n\
     .4byte 0x08669620\n\
DAT_0801c734:\n\
     .4byte 0x020025B4\n\
DAT_0801c738:\n\
     .4byte 0x0000C814\n\
DAT_0801c73c:\n\
     .4byte 0x0865FD94\n\
DAT_0801c740:\n\
     .4byte 0x0000C304\n\
DAT_0801c744:\n\
     .4byte 0x0000C2D4\n\
PTR_DAT_0801c748:\n\
     .4byte       DAT_0200dcd4\n\
PTR_DAT_0801c74c:\n\
     .4byte       DAT_0200dcbc\n\
PTR_DAT_0801c750:\n\
     .4byte       DAT_0200dcc0\n\
PTR_DAT_0801c754:\n\
     .4byte       DAT_0200ed10\n\
LAB_0801c758:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c7d8\n\
     bl         fun_0803c1a4\n\
     ldr        r4,DAT_0801c81c\n\
     ldr        r5,DAT_0801c820\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801c824\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r6,DAT_0801c828\n\
     mov        r1,#0x41\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801c82c\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_0801c830\n\
     mov        r1,#0xe0\n\
     ldrh       r2,[r2,#0x0]\n\
     sub        r1,r1,r2\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r2,#0x85\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0801c834\n\
     add        r4,r4,r1\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x85\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,DAT_0801c838\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801c83c\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     add        r1,r3,#0x0\n\
     bl         fun_080040d4\n\
     ldr        r0,DAT_0801c840\n\
     strh       r7,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0801c7d8:\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801c7f6\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801c7f6\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c854\n\
LAB_0801c7f6:\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_0801c838\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801c83c\n\
     ldrh       r1,[r1,#0x2]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801c844\n\
     bl         fun_080011c0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c854\n\
     bl         fun_080011c0\n\
     bl         fun_080434c8\n\
     b          LAB_0801c854\n\
DAT_0801c81c:\n\
     .4byte 0x08669620\n\
DAT_0801c820:\n\
     .4byte 0x020025B4\n\
DAT_0801c824:\n\
     .4byte 0x0000C814\n\
DAT_0801c828:\n\
     .4byte 0x0865FD94\n\
DAT_0801c82c:\n\
     .4byte 0x0000C2D4\n\
DAT_0801c830:\n\
     .4byte 0x0200DCD4\n\
DAT_0801c834:\n\
     .4byte 0x0000C304\n\
DAT_0801c838:\n\
     .4byte 0x0200DCBC\n\
DAT_0801c83c:\n\
     .4byte 0x0200ED14\n\
DAT_0801c840:\n\
     .4byte 0x0200ED10\n\
LAB_0801c844:\n\
     bl         fun_080011cc\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801c854\n\
     bl         fun_080011cc\n\
     bl         fun_080434c8\n\
LAB_0801c854:\n\
     mov        r0,#0x0\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0801c85c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0801c868()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     ldr        r1,DAT_0801cb28\n\
     ldr        r0,DAT_0801cb2c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801cb30\n\
     ldr        r3,DAT_0801cb34\n\
     str        r3,[r0,#0x0]\n\
     ldr        r1,DAT_0801cb38\n\
     ldr        r0,DAT_0801cb3c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801cb40\n\
     mov        r0,#0xc8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_0801cb44\n\
     ldr        r1,PTR_DAT_0801cb48\n\
     mov        r0,#0xb4\n\
     strh       r0,[r1,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_0801cb4c\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801cb50\n\
     ldr        r0,DAT_0801cb54\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801cb58\n\
     mov        r0,#0x96\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801cb5c\n\
     mov        r2,#0x28\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801cb60\n\
     ldr        r0,DAT_0801cb64\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb68\n\
     str        r3,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801cb6c\n\
     mov        r0,#0x63\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb70\n\
     mov        r2,#0x0\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb74\n\
     mov        r3,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb78\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb7c\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb80\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb84\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb88\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb8c\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb90\n\
     strb       r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb94\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cb98\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801cb9c\n\
     mov        r0,#0x32\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801cba0\n\
     mov        r0,#0x19\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801cba4\n\
     mov        r0,#0x14\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801cba8\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801cbac\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cbb0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cbb4\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cbb8\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801cbbc\n\
     strb       r3,[r0,#0x0]\n\
     ldr        r4,PTR_DAT_0801cbc0\n\
     add        r3,r0,#0x0\n\
     mov        r7,#0x11\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
     mov        r8,r7\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r12,r0\n\
     mov        r1,#0x7f\n\
     mov        r10,r1\n\
     sub        r2,#0x41\n\
     mov        r9,r2\n\
     mov        r5,#0x5\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     mov        r6,#0x2\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
LAB_0801c940:\n\
     ldrb       r7,[r3,#0x0]\n\
     lsl        r1,r7,#0x2\n\
     add        r1,r1,r4\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r1,#0x0]\n\
     and        r0,r2\n\
     mov        r7,r8\n\
     and        r0,r7\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,r12\n\
     ldrb       r2,[r1,#0x2]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x2]\n\
     ldrb       r7,[r3,#0x0]\n\
     lsl        r1,r7,#0x2\n\
     add        r1,r1,r4\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r1,#0x2]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x2]\n\
     mov        r0,r10\n\
     ldrb       r7,[r1,#0x1]\n\
     and        r0,r7\n\
     mov        r2,r9\n\
     and        r0,r2\n\
     mov        r7,#0x21\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
     and        r0,r7\n\
     strb       r0,[r1,#0x1]\n\
     ldrb       r0,[r3,#0x0]\n\
     lsl        r2,r0,#0x2\n\
     add        r2,r2,r4\n\
     mov        r1,r12\n\
     ldrb       r7,[r2,#0x0]\n\
     and        r1,r7\n\
     and        r1,r5\n\
     add        r0,r6,#0x0\n\
     ldrb       r7,[r2,#0x2]\n\
     and        r0,r7\n\
     strb       r0,[r2,#0x2]\n\
     and        r1,r6\n\
     strb       r1,[r2,#0x0]\n\
     ldrb       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x2\n\
     add        r1,r1,r4\n\
     add        r0,r6,#0x0\n\
     ldrb       r2,[r1,#0x1]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x1]\n\
     mov        r0,r10\n\
     ldrb       r7,[r1,#0x0]\n\
     and        r0,r7\n\
     mov        r2,r9\n\
     and        r0,r2\n\
     mov        r7,#0x3\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
     and        r0,r7\n\
     strb       r0,[r1,#0x0]\n\
     ldrb       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x2\n\
     add        r1,r1,r4\n\
     mov        r0,r8\n\
     ldrb       r2,[r1,#0x1]\n\
     and        r0,r2\n\
     mov        r7,r12\n\
     and        r0,r7\n\
     and        r0,r5\n\
     mov        r2,#0x3\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x1]\n\
     ldrb       r7,[r3,#0x0]\n\
     lsl        r1,r7,#0x2\n\
     add        r1,r1,r4\n\
     add        r0,r5,#0x0\n\
     ldrb       r2,[r1,#0x2]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x2]\n\
     ldrb       r7,[r3,#0x0]\n\
     lsl        r1,r7,#0x2\n\
     add        r1,r1,r4\n\
     mov        r0,r8\n\
     ldrb       r2,[r1,#0x2]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x2]\n\
     ldrb       r0,[r3,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x3\n\
     bls        LAB_0801c940\n\
     mov        r0,#0x0\n\
     ldr        r4,PTR_DAT_0801cbbc\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r3,PTR_DAT_0801cbc4\n\
     add        r1,r4,#0x0\n\
     mov        r2,#0x0\n\
LAB_0801ca08:\n\
     ldrb       r7,[r1,#0x0]\n\
     lsl        r0,r7,#0x2\n\
     add        r0,r0,r3\n\
     strb       r2,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x4\n\
     bls        LAB_0801ca08\n\
     mov        r0,#0xa\n\
     ldr        r1,PTR_DAT_0801cbc8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_0801cbcc\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x3c\n\
     ldr        r4,PTR_DAT_0801cbd0\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     ldr        r7,PTR_DAT_0801cbd4\n\
     strh       r0,[r7,#0x0]\n\
     ldr        r1,PTR_DAT_0801cbd8\n\
     ldrh       r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_0801cbdc\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0xf\n\
     ldr        r4,PTR_DAT_0801cbe0\n\
     strb       r0,[r4,#0x0]\n\
     mov        r0,sp\n\
     mov        r2,#0xff\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0801cbe4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801cbe8\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801cbec\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r7,DAT_0801cbf0\n\
     add        r0,r7,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0801cc2c\n\
     ldr        r1,DAT_0801cbf4\n\
     mov        r0,#0x40\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801cbf8\n\
     mov        r0,#0x1f\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801cbfc\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     mov        r5,#0x0\n\
     ldr        r6,DAT_0801cc00\n\
LAB_0801ca92:\n\
     ldr        r4,DAT_0801cc04\n\
     add        r4,r5,r4\n\
     ldr        r0,DAT_0801cbfc\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     asr        r0,r0,#0x18\n\
     mul        r0,r5\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     add        r0,r0,r6\n\
     ldrb       r0,[r0,#0x0]\n\
     ldr        r1,DAT_0801cbf8\n\
     ldrb       r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x18\n\
     asr        r1,r1,#0x18\n\
     lsl        r1,r1,#0x2\n\
     bl         fun_08043504\n\
     strb       r0,[r4,#0x0]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0xfe\n\
     bls        LAB_0801ca92\n\
     mov        r1,sp\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_0801cbe4\n\
     str        r1,[r4,#0x0]\n\
     mov        r5,#0xa0\n\
     lsl        r5,r5,#0x13\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0801cc08\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0801cc0c\n\
     ldr        r1,DAT_0801cc10\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_0801cc14\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0801cc18\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     ldr        r2,DAT_0801cc1c\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801cc20\n\
     mov        r0,#0x3c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801cc24\n\
     ldr        r2,DAT_0801cc28\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     bl         fun_0800117c\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801cb28:\n\
     .4byte 0x0200ED28\n\
DAT_0801cb2c:\n\
     .4byte 0x3E800000\n\
DAT_0801cb30:\n\
     .4byte 0x0200ED80\n\
DAT_0801cb34:\n\
     .4byte 0x3F800000\n\
DAT_0801cb38:\n\
     .4byte 0x0200ED38\n\
DAT_0801cb3c:\n\
     .4byte 0x40400000\n\
PTR_DAT_0801cb40:\n\
     .4byte       DAT_0200eddc\n\
PTR_DAT_0801cb44:\n\
     .4byte       DAT_0200ed88\n\
PTR_DAT_0801cb48:\n\
     .4byte       DAT_0200ed4c\n\
PTR_DAT_0801cb4c:\n\
     .4byte       DAT_0200ee14\n\
PTR_DAT_0801cb50:\n\
     .4byte       DAT_0200ee24\n\
DAT_0801cb54:\n\
     .4byte 0x41A00000\n\
DAT_0801cb58:\n\
     .4byte 0x0200ED7C\n\
DAT_0801cb5c:\n\
     .4byte 0x0200ED24\n\
DAT_0801cb60:\n\
     .4byte 0x0200ED44\n\
DAT_0801cb64:\n\
     .4byte 0x42B00000\n\
PTR_DAT_0801cb68:\n\
     .4byte       DAT_0200ee40\n\
PTR_DAT_0801cb6c:\n\
     .4byte       DAT_0200ee20\n\
PTR_DAT_0801cb70:\n\
     .4byte       DAT_0200edd4\n\
PTR_DAT_0801cb74:\n\
     .4byte       DAT_0200edec\n\
PTR_DAT_0801cb78:\n\
     .4byte       DAT_0200edf0\n\
PTR_DAT_0801cb7c:\n\
     .4byte       DAT_0200ee04\n\
PTR_DAT_0801cb80:\n\
     .4byte       DAT_0200ed48\n\
PTR_DAT_0801cb84:\n\
     .4byte       DAT_0200ee00\n\
PTR_DAT_0801cb88:\n\
     .4byte       DAT_0200ee08\n\
PTR_DAT_0801cb8c:\n\
     .4byte       DAT_0200ed34\n\
PTR_DAT_0801cb90:\n\
     .4byte       DAT_0200ed3c\n\
PTR_DAT_0801cb94:\n\
     .4byte       DAT_0200ee1c\n\
PTR_DAT_0801cb98:\n\
     .4byte       DAT_0200ee0c\n\
PTR_DAT_0801cb9c:\n\
     .4byte       DAT_0200ee3c\n\
PTR_DAT_0801cba0:\n\
     .4byte       DAT_0200ee60\n\
PTR_DAT_0801cba4:\n\
     .4byte       DAT_0200edd8\n\
PTR_DAT_0801cba8:\n\
     .4byte       DAT_0200ee18\n\
PTR_DAT_0801cbac:\n\
     .4byte       DAT_0200ee38\n\
PTR_DAT_0801cbb0:\n\
     .4byte       DAT_0200ed30\n\
PTR_DAT_0801cbb4:\n\
     .4byte       DAT_0200ee28\n\
PTR_DAT_0801cbb8:\n\
     .4byte       DAT_0200ed8c\n\
PTR_DAT_0801cbbc:\n\
     .4byte       DAT_02009b58\n\
PTR_DAT_0801cbc0:\n\
     .4byte       DAT_0200ee50\n\
PTR_DAT_0801cbc4:\n\
     .4byte       DAT_0200edc0\n\
PTR_DAT_0801cbc8:\n\
     .4byte       DAT_0200edf8\n\
PTR_DAT_0801cbcc:\n\
     .4byte       DAT_0200ee30\n\
PTR_DAT_0801cbd0:\n\
     .4byte       DAT_0200ed40\n\
PTR_DAT_0801cbd4:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_0801cbd8:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_0801cbdc:\n\
     .4byte       DAT_0200ece0\n\
PTR_DAT_0801cbe0:\n\
     .4byte       DAT_0200edfc\n\
DAT_0801cbe4:\n\
     .4byte 0x040000D4\n\
DAT_0801cbe8:\n\
     .4byte 0x8100C000\n\
DAT_0801cbec:\n\
     .4byte 0x81000200\n\
DAT_0801cbf0:\n\
     .4byte 0x00001F44\n\
DAT_0801cbf4:\n\
     .4byte 0x02000558\n\
DAT_0801cbf8:\n\
     .4byte 0x02000559\n\
DAT_0801cbfc:\n\
     .4byte 0x0200055A\n\
DAT_0801cc00:\n\
     .4byte 0x08756BC4\n\
DAT_0801cc04:\n\
     .4byte 0x02000458\n\
DAT_0801cc08:\n\
     .4byte 0x81000100\n\
DAT_0801cc0c:\n\
     .4byte 0x084CF284\n\
DAT_0801cc10:\n\
     .4byte 0x0600A000\n\
DAT_0801cc14:\n\
     .4byte 0x084CF084\n\
DAT_0801cc18:\n\
     .4byte 0x80000100\n\
DAT_0801cc1c:\n\
     .4byte 0x00001F54\n\
DAT_0801cc20:\n\
     .4byte 0x0200EE2C\n\
DAT_0801cc24:\n\
     .4byte 0x0000037F\n\
DAT_0801cc28:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_0801cc2c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     ldr        r0,DAT_0801ccdc\n\
     bl         fun_080045f0\n\
     mov        r5,#0x0\n\
     ldr        r6,DAT_0801cce0\n\
LAB_0801cc44:\n\
     ldr        r0,DAT_0801cce4\n\
     bl         fun_08003998\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r1,r6\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r1,r2,#0x0\n\
     mov        r4,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     orr        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x7\n\
     bls        LAB_0801cc44\n\
     ldr        r4,DAT_0801cce8\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801ccec\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x6]\n\
     mov        r1,#0x58\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x97\n\
     strh       r1,[r0,#0x4]\n\
     strh       r2,[r0,#0x0]\n\
     sub        r4,#0x10\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801ccf0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801ccf4\n\
     strh       r2,[r0,#0x2]\n\
     mov        r1,#0x26\n\
     strh       r1,[r0,#0x4]\n\
     mov        r1,#0x3\n\
     strh       r1,[r0,#0x6]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x10]\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_0801ccf8\n\
     mov        r6,#0x0\n\
     add        r7,r2,#0x0\n\
LAB_0801cca6:\n\
     ldr        r0,DAT_0801ccfc\n\
     bl         fun_08003998\n\
     lsl        r1,r5,#0x2\n\
     add        r2,r1,r4\n\
     str        r0,[r2,#0x0]\n\
     strh       r7,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r6,[r0,#0xa]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0801cd00\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x32\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xb4\n\
     bl         fun_080047d0\n\
     b          LAB_0801cd18\n\
DAT_0801ccdc:\n\
     .4byte 0x084C8D7C\n\
DAT_0801cce0:\n\
     .4byte 0x0200ED90\n\
DAT_0801cce4:\n\
     .4byte 0x084C8D2C\n\
DAT_0801cce8:\n\
     .4byte 0x084C8D5C\n\
DAT_0801ccec:\n\
     .4byte 0x0200EE34\n\
DAT_0801ccf0:\n\
     .4byte 0x0200EDB0\n\
DAT_0801ccf4:\n\
     .4byte 0x0000FFD8\n\
DAT_0801ccf8:\n\
     .4byte 0x0200EDE0\n\
DAT_0801ccfc:\n\
     .4byte 0x084C8D1C\n\
LAB_0801cd00:\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0xdc\n\
     bl         fun_080047d0\n\
LAB_0801cd18:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x1\n\
     bls        LAB_0801cca6\n\
     ldr        r0,DAT_0801ce00\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801ce04\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r0,#0x6]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x10]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r1,r2,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     orr        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0x63\n\
     strh       r1,[r0,#0xa]\n\
     mov        r5,#0x0\n\
     mov        r6,#0x0\n\
     ldr        r4,DAT_0801ce08\n\
LAB_0801cd4c:\n\
     ldr        r0,PTR_DAT_0801ce0c\n\
     bl         fun_08003998\n\
     lsl        r2,r5,#0x2\n\
     add        r2,r2,r4\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_0801ce10\n\
     add        r1,r5,r1\n\
     ldrb       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0801ce14\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x10]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x1\n\
     bls        LAB_0801cd4c\n\
     mov        r5,#0x0\n\
LAB_0801cd7e:\n\
     ldr        r0,PTR_DAT_0801ce0c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801ce08\n\
     lsl        r4,r5,#0x2\n\
     add        r4,r4,r1\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xdc\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0801ce18\n\
     add        r0,r5,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0801ce1c\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x1\n\
     bls        LAB_0801cd7e\n\
     mov        r5,#0x0\n\
LAB_0801cdbc:\n\
     ldr        r0,PTR_DAT_0801ce0c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801ce08\n\
     lsl        r4,r5,#0x2\n\
     add        r4,r4,r1\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xc5\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,PTR_LAB_0801ce20\n\
     add        r0,r5,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,PTR_LAB_08786976_0801ce24\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801cdbc\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801ce00:\n\
     .4byte 0x084C8D6C\n\
DAT_0801ce04:\n\
     .4byte 0x0200ED20\n\
DAT_0801ce08:\n\
     .4byte 0x0200ED60\n\
PTR_DAT_0801ce0c:\n\
     .4byte       DAT_084c8d3c\n\
PTR_DAT_0801ce10:\n\
     .4byte       DAT_08786970\n\
PTR_DAT_0801ce14:\n\
     .4byte       DAT_08786972\n\
PTR_DAT_0801ce18:\n\
     .4byte       DAT_08786973\n\
PTR_DAT_0801ce1c:\n\
     .4byte       DAT_08786975\n\
PTR_LAB_0801ce20:\n\
     .4byte       LAB_08786976\n\
PTR_LAB_08786976_0801ce24:\n\
     .4byte       LAB_08786976\n\
    ");
}
__attribute__((naked)) void fun_0801ce28()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r0,DAT_0801ce58\n\
     ldr        r1,[r0,#0x0]\n\
     add        r2,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0801ce50\n\
     ldr        r0,DAT_0801ce5c\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ce64\n\
     ldr        r1,DAT_0801ce60\n\
     mov        r0,#0x3\n\
     ldrb       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ce64\n\
LAB_0801ce50:\n\
     bl         fun_0801f398\n\
     bl         LAB_0801de36\n\
DAT_0801ce58:\n\
     .4byte 0x0200EE2C\n\
DAT_0801ce5c:\n\
     .4byte 0x0200EDFC\n\
DAT_0801ce60:\n\
     .4byte 0x0200EE50\n\
LAB_0801ce64:\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x5\n\
     bhi        LAB_0801ce86\n\
     ldr        r4,DAT_0801cf20\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ce86\n\
     mov        r0,#0x3d\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,DAT_0801cf24\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801ce86:\n\
     ldr        r3,DAT_0801cf28\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ceaa\n\
     ldr        r0,DAT_0801cf2c\n\
     ldr        r1,DAT_0801cf30\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     beq        LAB_0801ce9e\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
LAB_0801ce9e:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ceaa\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
LAB_0801ceaa:\n\
     ldr        r2,DAT_0801cf34\n\
     ldrb       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x7f\n\
     and        r0,r1\n\
     strb       r0,[r2,#0x0]\n\
     mov        r0,#0xc\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ced0\n\
     mov        r0,#0xc\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ced0\n\
     b          LAB_0801cffe\n\
LAB_0801ced0:\n\
     ldr        r0,DAT_0801cf38\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ceda\n\
     b          LAB_0801cffe\n\
LAB_0801ceda:\n\
     ldr        r1,DAT_0801cf3c\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x15\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x13\n\
     bls        LAB_0801cee8\n\
     b          LAB_0801cfe4\n\
LAB_0801cee8:\n\
     ldr        r4,DAT_0801cf40\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x63\n\
     bne        LAB_0801cfe4\n\
     ldr        r1,DAT_0801cf44\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r0,DAT_0801cf48\n\
     ldr        r3,[r0,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     strh       r0,[r3,#0xa]\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_0801cf5c\n\
     ldr        r2,DAT_0801cf4c\n\
     ldr        r0,DAT_0801cf50\n\
     ldrb       r4,[r4,#0x0]\n\
     add        r0,r4,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0xc\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801cf54\n\
     ldr        r0,DAT_0801cf58\n\
     b          LAB_0801cf74\n\
DAT_0801cf20:\n\
     .4byte 0x0200EDB8\n\
DAT_0801cf24:\n\
     .4byte 0x0200ED8C\n\
DAT_0801cf28:\n\
     .4byte 0x0200ECC0\n\
DAT_0801cf2c:\n\
     .4byte 0x02005830\n\
DAT_0801cf30:\n\
     .4byte 0x0200ECE0\n\
DAT_0801cf34:\n\
     .4byte 0x02000558\n\
DAT_0801cf38:\n\
     .4byte 0x02002530\n\
DAT_0801cf3c:\n\
     .4byte 0x0200EE2C\n\
DAT_0801cf40:\n\
     .4byte 0x0200EE20\n\
DAT_0801cf44:\n\
     .4byte 0x0200EE00\n\
DAT_0801cf48:\n\
     .4byte 0x0200ED20\n\
DAT_0801cf4c:\n\
     .4byte 0x0200EDE8\n\
DAT_0801cf50:\n\
     .4byte 0x08786970\n\
DAT_0801cf54:\n\
     .4byte 0x0200ED2C\n\
DAT_0801cf58:\n\
     .4byte 0x08786972\n\
LAB_0801cf5c:\n\
     cmp        r0,#0x3\n\
     bhi        LAB_0801cf90\n\
     ldr        r2,DAT_0801cf80\n\
     ldr        r1,DAT_0801cf84\n\
     ldrb       r0,[r4,#0x0]\n\
     sub        r0,#0x2\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0xd\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801cf88\n\
     ldr        r0,DAT_0801cf8c\n\
LAB_0801cf74:\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x28\n\
     strh       r0,[r1,#0x0]\n\
     add        r5,r1,#0x0\n\
     b          LAB_0801cfb6\n\
.space 1\n\
.space 1\n\
DAT_0801cf80:\n\
     .4byte 0x0200EDE8\n\
DAT_0801cf84:\n\
     .4byte 0x08786973\n\
DAT_0801cf88:\n\
     .4byte 0x0200ED2C\n\
DAT_0801cf8c:\n\
     .4byte 0x08786975\n\
LAB_0801cf90:\n\
     ldr        r2,DAT_0801cfcc\n\
     ldr        r5,DAT_0801cfd0\n\
     cmp        r0,#0x4\n\
     bhi        LAB_0801cfb6\n\
     ldr        r1,DAT_0801cfd4\n\
     ldrb       r0,[r4,#0x0]\n\
     sub        r0,#0x4\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0xc\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_0801cfd8\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x28\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x6]\n\
     mov        r0,#0x5\n\
     strh       r0,[r3,#0x10]\n\
LAB_0801cfb6:\n\
     ldr        r0,DAT_0801cfdc\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801cfe0\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_0801cffe\n\
DAT_0801cfcc:\n\
     .4byte 0x0200EDE8\n\
DAT_0801cfd0:\n\
     .4byte 0x0200ED2C\n\
DAT_0801cfd4:\n\
     .4byte 0x08786976\n\
DAT_0801cfd8:\n\
     .4byte 0x08786977\n\
DAT_0801cfdc:\n\
     .4byte 0x0200ED20\n\
DAT_0801cfe0:\n\
     .4byte 0x0000FDFF\n\
LAB_0801cfe4:\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x13\n\
     bhi        LAB_0801cffe\n\
     ldr        r0,DAT_0801d05c\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r3,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x63\n\
     strh       r0,[r1,#0xa]\n\
LAB_0801cffe:\n\
     ldr        r0,DAT_0801d060\n\
     ldrb       r5,[r0,#0x0]\n\
     lsl        r1,r5,#0x1f\n\
     mov        r10,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0801d00c\n\
     b          LAB_0801d1b4\n\
LAB_0801d00c:\n\
     ldr        r4,DAT_0801d064\n\
     ldr        r5,[r4,#0x0]\n\
     ldr        r6,DAT_0801d068\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_08044d00\n\
     add        r7,r4,#0x0\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d078\n\
     mov        r0,#0x1\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x2]\n\
     orr        r0,r1\n\
     mov        r2,r10\n\
     strb       r0,[r2,#0x2]\n\
     ldr        r0,DAT_0801d06c\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801d070\n\
     strh       r0,[r1,#0x2]\n\
     str        r6,[r7,#0x0]\n\
     mov        r3,#0x0\n\
     mov        r2,#0x0\n\
     ldr        r5,DAT_0801d074\n\
     mov        r4,#0x0\n\
LAB_0801d03e:\n\
     lsl        r0,r2,#0x2\n\
     add        r1,r0,r5\n\
     ldrb       r6,[r1,#0x0]\n\
     cmp        r6,#0x1\n\
     bne        LAB_0801d04e\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
LAB_0801d04e:\n\
     strb       r4,[r1,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x4\n\
     bls        LAB_0801d03e\n\
     b          LAB_0801d0c2\n\
DAT_0801d05c:\n\
     .4byte 0x0200ED20\n\
DAT_0801d060:\n\
     .4byte 0x0200EE50\n\
DAT_0801d064:\n\
     .4byte 0x0200ED44\n\
DAT_0801d068:\n\
     .4byte 0xC2000000\n\
DAT_0801d06c:\n\
     .4byte 0x0200EE34\n\
DAT_0801d070:\n\
     .4byte 0x0000FFE0\n\
DAT_0801d074:\n\
     .4byte 0x0200EDC0\n\
LAB_0801d078:\n\
     ldr        r4,DAT_0801d0e4\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_08044c70\n\
     cmp        r0,#0x0\n\
     ble        LAB_0801d0fc\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x2]\n\
     and        r0,r1\n\
     mov        r2,r10\n\
     strb       r0,[r2,#0x2]\n\
     ldr        r0,DAT_0801d0e8\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0xf2\n\
     strh       r0,[r1,#0x2]\n\
     str        r4,[r7,#0x0]\n\
     mov        r3,#0x0\n\
     mov        r2,#0x0\n\
     ldr        r5,DAT_0801d0ec\n\
     mov        r4,#0x0\n\
LAB_0801d0a6:\n\
     lsl        r0,r2,#0x2\n\
     add        r1,r0,r5\n\
     ldrb       r6,[r1,#0x0]\n\
     cmp        r6,#0x1\n\
     bne        LAB_0801d0b6\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
LAB_0801d0b6:\n\
     strb       r4,[r1,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x4\n\
     bls        LAB_0801d0a6\n\
LAB_0801d0c2:\n\
     cmp        r3,#0x5\n\
     bne        LAB_0801d1a6\n\
     ldr        r2,DAT_0801d0f0\n\
     ldr        r1,DAT_0801d0f4\n\
     mov        r0,#0x64\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0x64\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801d0f8\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x7\n\
     bl         fun_080016f0\n\
     b          LAB_0801d1a6\n\
.space 1\n\
.space 1\n\
DAT_0801d0e4:\n\
     .4byte 0x43720000\n\
DAT_0801d0e8:\n\
     .4byte 0x0200EE34\n\
DAT_0801d0ec:\n\
     .4byte 0x0200EDC0\n\
DAT_0801d0f0:\n\
     .4byte 0x0200EDD4\n\
DAT_0801d0f4:\n\
     .4byte 0x0200ED48\n\
DAT_0801d0f8:\n\
     .4byte 0x0200ED34\n\
LAB_0801d0fc:\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x2]\n\
     lsl        r0,r1,#0x1f\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d170\n\
     ldr        r0,DAT_0801d138\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x5\n\
     bl         fun_08043718\n\
     ldr        r5,DAT_0801d13c\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801d128\n\
     ldr        r0,DAT_0801d140\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3c\n\
     bne        LAB_0801d128\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,DAT_0801d144\n\
     bl         fun_08044824\n\
     str        r0,[r5,#0x0]\n\
LAB_0801d128:\n\
     ldr        r0,DAT_0801d148\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[r5,#0x0]\n\
     bl         fun_08044824\n\
     b          LAB_0801d19e\n\
.space 1\n\
.space 1\n\
DAT_0801d138:\n\
     .4byte 0x0200EE2C\n\
DAT_0801d13c:\n\
     .4byte 0x0200EE40\n\
DAT_0801d140:\n\
     .4byte 0x0200ED40\n\
DAT_0801d144:\n\
     .4byte 0x3DCCCCCD\n\
DAT_0801d148:\n\
     .4byte 0x0200EE34\n\
LAB_0801d14c:\n\
     mov        r0,#0x4\n\
     mov        r2,r10\n\
     ldrb       r2,[r2,#0x0]\n\
     orr        r0,r2\n\
     mov        r3,r10\n\
     strb       r0,[r3,#0x0]\n\
     ldr        r1,DAT_0801d168\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x8]\n\
     ldr        r0,DAT_0801d16c\n\
     ldr        r1,[r0,#0xc]\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0xa]\n\
     b          LAB_0801d21c\n\
DAT_0801d168:\n\
     .4byte 0x0200EDC0\n\
DAT_0801d16c:\n\
     .4byte 0x0200ED90\n\
LAB_0801d170:\n\
     ldr        r0,DAT_0801d268\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x5\n\
     bl         fun_08043718\n\
     ldr        r5,DAT_0801d26c\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801d192\n\
     ldr        r0,DAT_0801d270\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3c\n\
     bne        LAB_0801d192\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,DAT_0801d274\n\
     bl         fun_08044824\n\
     str        r0,[r5,#0x0]\n\
LAB_0801d192:\n\
     ldr        r0,DAT_0801d278\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[r5,#0x0]\n\
     bl         fun_08044850\n\
LAB_0801d19e:\n\
     str        r0,[r7,#0x0]\n\
     bl         fun_08044df0\n\
     strh       r0,[r4,#0x2]\n\
LAB_0801d1a6:\n\
     ldr        r0,DAT_0801d27c\n\
     ldrb       r4,[r0,#0x0]\n\
     lsl        r1,r4,#0x1f\n\
     mov        r10,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0801d1b4\n\
     b          LAB_0801d45a\n\
LAB_0801d1b4:\n\
     ldr        r2,DAT_0801d280\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d1c4\n\
     b          LAB_0801d45a\n\
LAB_0801d1c4:\n\
     mov        r5,r10\n\
     ldrb       r1,[r5,#0x0]\n\
     lsl        r0,r1,#0x1e\n\
     lsr        r3,r0,#0x1f\n\
     cmp        r3,#0x0\n\
     beq        LAB_0801d1d2\n\
     b          LAB_0801d424\n\
LAB_0801d1d2:\n\
     mov        r0,#0x8\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     orr        r1,r0\n\
     mov        r0,#0x40\n\
     orr        r1,r0\n\
     mov        r0,#0x2\n\
     orr        r1,r0\n\
     strb       r1,[r5,#0x0]\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r2,r0,#0x1f\n\
     cmp        r2,#0x0\n\
     beq        LAB_0801d298\n\
     ldr        r1,DAT_0801d284\n\
     strb       r3,[r1,#0x0]\n\
     ldr        r6,DAT_0801d288\n\
     mov        r9,r6\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r6,r2]\n\
     add        r4,r0,#0x0\n\
     add        r4,#0x10\n\
     ldr        r5,DAT_0801d28c\n\
LAB_0801d1fe:\n\
     ldrb       r3,[r1,#0x0]\n\
     add        r0,r3,r5\n\
     ldrb       r2,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x8\n\
     cmp        r4,r0\n\
     ble        LAB_0801d212\n\
     add        r0,#0x10\n\
     cmp        r4,r0\n\
     blt        LAB_0801d14c\n\
LAB_0801d212:\n\
     add        r0,r3,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d1fe\n\
LAB_0801d21c:\n\
     ldr        r2,DAT_0801d27c\n\
     ldrb       r3,[r2,#0x0]\n\
     lsl        r0,r3,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d228\n\
     b          LAB_0801d45a\n\
LAB_0801d228:\n\
     ldrb       r3,[r2,#0x2]\n\
     mov        r0,#0xa\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d234\n\
     b          LAB_0801d45a\n\
LAB_0801d234:\n\
     ldr        r0,DAT_0801d290\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801d23e\n\
     b          LAB_0801d45a\n\
LAB_0801d23e:\n\
     mov        r4,r9\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r4,r5]\n\
     add        r1,r0,#0x0\n\
     add        r1,#0x10\n\
     ldr        r0,DAT_0801d294\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r0,r6]\n\
     cmp        r1,r0\n\
     bgt        LAB_0801d256\n\
     b          LAB_0801d45a\n\
LAB_0801d256:\n\
     add        r0,#0x20\n\
     cmp        r1,r0\n\
     blt        LAB_0801d25e\n\
     b          LAB_0801d45a\n\
LAB_0801d25e:\n\
     mov        r0,#0x2\n\
     orr        r0,r3\n\
     strb       r0,[r2,#0x2]\n\
     b          LAB_0801d45a\n\
.space 1\n\
.space 1\n\
DAT_0801d268:\n\
     .4byte 0x0200EE2C\n\
DAT_0801d26c:\n\
     .4byte 0x0200EE40\n\
DAT_0801d270:\n\
     .4byte 0x0200ED40\n\
DAT_0801d274:\n\
     .4byte 0x3DCCCCCD\n\
DAT_0801d278:\n\
     .4byte 0x0200EE34\n\
DAT_0801d27c:\n\
     .4byte 0x0200EE50\n\
DAT_0801d280:\n\
     .4byte 0x0200ED84\n\
DAT_0801d284:\n\
     .4byte 0x02000450\n\
DAT_0801d288:\n\
     .4byte 0x0200EDF4\n\
DAT_0801d28c:\n\
     .4byte 0x08786976\n\
DAT_0801d290:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d294:\n\
     .4byte 0x0200EDB0\n\
LAB_0801d298:\n\
     lsl        r0,r1,#0x1b\n\
     lsr        r3,r0,#0x1f\n\
     cmp        r3,#0x0\n\
     bne        LAB_0801d2a2\n\
     b          LAB_0801d3a0\n\
LAB_0801d2a2:\n\
     ldr        r0,DAT_0801d2e4\n\
     strb       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0801d2e8\n\
     mov        r9,r1\n\
     ldr        r2,DAT_0801d2ec\n\
     mov        r8,r2\n\
     add        r4,r0,#0x0\n\
     ldr        r6,DAT_0801d2f0\n\
     mov        r5,#0x1\n\
     ldr        r7,DAT_0801d2f4\n\
     mov        r12,r10\n\
LAB_0801d2b8:\n\
     mov        r3,r9\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     add        r2,r0,#0x0\n\
     add        r2,#0x10\n\
     ldrb       r3,[r4,#0x0]\n\
     mov        r1,r8\n\
     add        r0,r3,r1\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x8\n\
     cmp        r2,r0\n\
     ble        LAB_0801d30e\n\
     add        r0,#0x10\n\
     cmp        r2,r0\n\
     bge        LAB_0801d30e\n\
     cmp        r3,#0x0\n\
     bne        LAB_0801d2f8\n\
     strb       r5,[r6,#0xc]\n\
     ldr        r1,[r7,#0x8]\n\
     mov        r0,#0x2\n\
     b          LAB_0801d2fe\n\
DAT_0801d2e4:\n\
     .4byte 0x02000450\n\
DAT_0801d2e8:\n\
     .4byte 0x0200EDF4\n\
DAT_0801d2ec:\n\
     .4byte 0x08786973\n\
DAT_0801d2f0:\n\
     .4byte 0x0200EDC0\n\
DAT_0801d2f4:\n\
     .4byte 0x0200ED90\n\
LAB_0801d2f8:\n\
     strb       r5,[r6,#0x4]\n\
     ldr        r1,[r7,#0x1c]\n\
     mov        r0,#0x3\n\
LAB_0801d2fe:\n\
     strh       r0,[r1,#0xa]\n\
     mov        r0,#0x4\n\
     mov        r2,r12\n\
     ldrb       r2,[r2,#0x0]\n\
     orr        r0,r2\n\
     mov        r3,r12\n\
     strb       r0,[r3,#0x0]\n\
     b          LAB_0801d31c\n\
LAB_0801d30e:\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     bls        LAB_0801d2b8\n\
LAB_0801d31c:\n\
     ldr        r5,DAT_0801d38c\n\
     ldrb       r4,[r5,#0x0]\n\
     lsl        r0,r4,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d328\n\
     b          LAB_0801d45a\n\
LAB_0801d328:\n\
     ldr        r0,DAT_0801d390\n\
     ldr        r2,[r0,#0x4]\n\
     ldrh       r6,[r2,#0x4]\n\
     cmp        r6,#0x4b\n\
     beq        LAB_0801d334\n\
     b          LAB_0801d45a\n\
LAB_0801d334:\n\
     ldr        r0,DAT_0801d394\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801d33e\n\
     b          LAB_0801d45a\n\
LAB_0801d33e:\n\
     ldrb       r3,[r5,#0x2]\n\
     mov        r4,#0x14\n\
     and        r4,r3\n\
     cmp        r4,#0x0\n\
     beq        LAB_0801d34a\n\
     b          LAB_0801d45a\n\
LAB_0801d34a:\n\
     mov        r1,r9\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r1,r6]\n\
     add        r1,r0,#0x0\n\
     add        r1,#0x10\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r2,r6]\n\
     cmp        r1,r0\n\
     bgt        LAB_0801d35e\n\
     b          LAB_0801d45a\n\
LAB_0801d35e:\n\
     add        r0,#0x20\n\
     cmp        r1,r0\n\
     blt        LAB_0801d366\n\
     b          LAB_0801d45a\n\
LAB_0801d366:\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x15\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xa6\n\
     bhi        LAB_0801d45a\n\
     mov        r0,#0x4\n\
     orr        r0,r3\n\
     strb       r0,[r5,#0x2]\n\
     ldr        r5,DAT_0801d398\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d45a\n\
     ldr        r0,DAT_0801d39c\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     strh       r4,[r5,#0x0]\n\
     b          LAB_0801d45a\n\
DAT_0801d38c:\n\
     .4byte 0x0200EE50\n\
DAT_0801d390:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d394:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d398:\n\
     .4byte 0x0200EE28\n\
DAT_0801d39c:\n\
     .4byte 0x0200ED50\n\
LAB_0801d3a0:\n\
     lsl        r0,r1,#0x1a\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d45a\n\
     ldr        r0,DAT_0801d3ec\n\
     strb       r3,[r0,#0x0]\n\
     ldr        r1,DAT_0801d3f0\n\
     mov        r9,r1\n\
     ldr        r2,DAT_0801d3f4\n\
     mov        r8,r2\n\
     add        r4,r0,#0x0\n\
     ldr        r6,DAT_0801d3f8\n\
     mov        r5,#0x1\n\
     ldr        r7,DAT_0801d3fc\n\
     mov        r12,r10\n\
LAB_0801d3bc:\n\
     mov        r3,r9\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     add        r2,r0,#0x0\n\
     add        r2,#0x10\n\
     ldrb       r3,[r4,#0x0]\n\
     mov        r1,r8\n\
     add        r0,r3,r1\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x8\n\
     cmp        r2,r0\n\
     ble        LAB_0801d414\n\
     add        r0,#0x10\n\
     cmp        r2,r0\n\
     bge        LAB_0801d414\n\
     add        r1,r3,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0801d400\n\
     strb       r5,[r6,#0x10]\n\
     ldr        r0,[r7,#0x4]\n\
     strh       r1,[r0,#0xa]\n\
     b          LAB_0801d406\n\
.space 1\n\
.space 1\n\
DAT_0801d3ec:\n\
     .4byte 0x02000450\n\
DAT_0801d3f0:\n\
     .4byte 0x0200EDF4\n\
DAT_0801d3f4:\n\
     .4byte 0x08786970\n\
DAT_0801d3f8:\n\
     .4byte 0x0200EDC0\n\
DAT_0801d3fc:\n\
     .4byte 0x0200ED90\n\
LAB_0801d400:\n\
     strb       r5,[r6,#0x0]\n\
     ldr        r0,[r7,#0x14]\n\
     strh       r5,[r0,#0xa]\n\
LAB_0801d406:\n\
     mov        r0,#0x4\n\
     mov        r2,r12\n\
     ldrb       r2,[r2,#0x0]\n\
     orr        r0,r2\n\
     mov        r3,r12\n\
     strb       r0,[r3,#0x0]\n\
     b          LAB_0801d45a\n\
LAB_0801d414:\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     bls        LAB_0801d3bc\n\
     b          LAB_0801d45a\n\
LAB_0801d424:\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d438\n\
     ldr        r0,DAT_0801d434\n\
     ldrb       r0,[r0,#0x0]\n\
     bl         fun_0801def4\n\
     b          LAB_0801d45a\n\
DAT_0801d434:\n\
     .4byte 0x02000450\n\
LAB_0801d438:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d44c\n\
     ldr        r0,DAT_0801d448\n\
     ldrb       r0,[r0,#0x0]\n\
     bl         fun_0801e604\n\
     b          LAB_0801d45a\n\
DAT_0801d448:\n\
     .4byte 0x02000450\n\
LAB_0801d44c:\n\
     lsl        r0,r1,#0x1a\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d45a\n\
     ldr        r0,DAT_0801d490\n\
     ldrb       r0,[r0,#0x0]\n\
     bl         fun_0801ece0\n\
LAB_0801d45a:\n\
     ldr        r1,DAT_0801d494\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d46a\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0801f258\n\
LAB_0801d46a:\n\
     ldr        r6,DAT_0801d498\n\
     ldr        r5,[r6,#0x0]\n\
     ldr        r4,DAT_0801d49c\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_08044d00\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d4fc\n\
     ldr        r3,DAT_0801d4a0\n\
     ldrb       r1,[r3,#0x0]\n\
     cmp        r1,#0x2\n\
     bne        LAB_0801d4a8\n\
     ldr        r0,DAT_0801d4a4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x2\n\
     add        r2,r5,#0x0\n\
     b          LAB_0801d51c\n\
DAT_0801d490:\n\
     .4byte 0x02000450\n\
DAT_0801d494:\n\
     .4byte 0x0200EE1C\n\
DAT_0801d498:\n\
     .4byte 0x0200EE24\n\
DAT_0801d49c:\n\
     .4byte 0xC2200000\n\
DAT_0801d4a0:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d4a4:\n\
     .4byte 0x0200EDB0\n\
LAB_0801d4a8:\n\
     ldr        r2,DAT_0801d4e8\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d4b8\n\
     b          LAB_0801d65e\n\
LAB_0801d4b8:\n\
     cmp        r1,#0x3\n\
     bne        LAB_0801d4c0\n\
     mov        r0,#0x2\n\
     strb       r0,[r3,#0x0]\n\
LAB_0801d4c0:\n\
     ldr        r1,DAT_0801d4ec\n\
     mov        r0,#0x20\n\
     ldrb       r3,[r1,#0x1]\n\
     orr        r0,r3\n\
     strb       r0,[r1,#0x1]\n\
     mov        r0,#0xc8\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_0801d4f0\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,DAT_0801d4f4\n\
     ldrh       r5,[r2,#0x12]\n\
     and        r0,r5\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,DAT_0801d4f8\n\
     strh       r0,[r2,#0x2]\n\
     str        r4,[r6,#0x0]\n\
     b          LAB_0801d65e\n\
.space 1\n\
.space 1\n\
DAT_0801d4e8:\n\
     .4byte 0x0200EDDC\n\
DAT_0801d4ec:\n\
     .4byte 0x0200EE50\n\
DAT_0801d4f0:\n\
     .4byte 0x0200EDB0\n\
DAT_0801d4f4:\n\
     .4byte 0x0000FDFF\n\
DAT_0801d4f8:\n\
     .4byte 0x0000FFD8\n\
LAB_0801d4fc:\n\
     ldr        r4,DAT_0801d540\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_08044c70\n\
     cmp        r0,#0x0\n\
     ble        LAB_0801d5ac\n\
     ldr        r3,DAT_0801d544\n\
     ldrb       r2,[r3,#0x0]\n\
     cmp        r2,#0x2\n\
     bne        LAB_0801d554\n\
     ldr        r0,DAT_0801d548\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
LAB_0801d51c:\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_0801d54c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_0801d550\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r1,#0x2]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x2]\n\
     mov        r0,#0x1\n\
     strb       r0,[r3,#0x0]\n\
     str        r4,[r6,#0x0]\n\
     b          LAB_0801d65e\n\
DAT_0801d540:\n\
     .4byte 0x43880000\n\
DAT_0801d544:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d548:\n\
     .4byte 0x0200EDB0\n\
DAT_0801d54c:\n\
     .4byte 0x0200ED90\n\
DAT_0801d550:\n\
     .4byte 0x0200EE50\n\
LAB_0801d554:\n\
     ldr        r1,DAT_0801d598\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d564\n\
     b          LAB_0801d65e\n\
LAB_0801d564:\n\
     cmp        r2,#0x3\n\
     bne        LAB_0801d56c\n\
     mov        r0,#0x2\n\
     strb       r0,[r3,#0x0]\n\
LAB_0801d56c:\n\
     mov        r0,#0xc8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801d59c\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,DAT_0801d5a0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     ldr        r1,DAT_0801d5a4\n\
     and        r0,r1\n\
     strh       r0,[r2,#0x12]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     str        r4,[r6,#0x0]\n\
     ldr        r1,DAT_0801d5a8\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r4,[r1,#0x1]\n\
     and        r0,r4\n\
     strb       r0,[r1,#0x1]\n\
     b          LAB_0801d65e\n\
.space 1\n\
.space 1\n\
DAT_0801d598:\n\
     .4byte 0x0200EDDC\n\
DAT_0801d59c:\n\
     .4byte 0x0200EDB0\n\
DAT_0801d5a0:\n\
     .4byte 0x0000FDFF\n\
DAT_0801d5a4:\n\
     .4byte 0x0000FFBF\n\
DAT_0801d5a8:\n\
     .4byte 0x0200EE50\n\
LAB_0801d5ac:\n\
     ldr        r0,DAT_0801d5e8\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801d65e\n\
     ldr        r1,DAT_0801d5ec\n\
     ldrb       r2,[r1,#0x1]\n\
     lsl        r0,r2,#0x1a\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d614\n\
     ldrb       r1,[r1,#0x2]\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d5fc\n\
     ldr        r0,DAT_0801d5f0\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r0,DAT_0801d5f4\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08044824\n\
     str        r0,[r6,#0x0]\n\
     bl         fun_08044df0\n\
     strh       r0,[r4,#0x2]\n\
     ldr        r1,DAT_0801d5f8\n\
     ldr        r1,[r1,#0x0]\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0801d65e\n\
.space 1\n\
.space 1\n\
DAT_0801d5e8:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d5ec:\n\
     .4byte 0x0200EE50\n\
DAT_0801d5f0:\n\
     .4byte 0x0200EDB0\n\
DAT_0801d5f4:\n\
     .4byte 0x0200ED28\n\
DAT_0801d5f8:\n\
     .4byte 0x0200ED90\n\
LAB_0801d5fc:\n\
     ldr        r0,DAT_0801d60c\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r0,DAT_0801d610\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08044824\n\
     b          LAB_0801d656\n\
DAT_0801d60c:\n\
     .4byte 0x0200EDB0\n\
DAT_0801d610:\n\
     .4byte 0x0200ED28\n\
LAB_0801d614:\n\
     ldrb       r1,[r1,#0x2]\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d648\n\
     ldr        r0,DAT_0801d63c\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r0,DAT_0801d640\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08044850\n\
     str        r0,[r6,#0x0]\n\
     bl         fun_08044df0\n\
     strh       r0,[r4,#0x2]\n\
     ldr        r1,DAT_0801d644\n\
     ldr        r1,[r1,#0x0]\n\
     sub        r0,#0x6\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0801d65e\n\
DAT_0801d63c:\n\
     .4byte 0x0200EDB0\n\
DAT_0801d640:\n\
     .4byte 0x0200ED28\n\
DAT_0801d644:\n\
     .4byte 0x0200ED90\n\
LAB_0801d648:\n\
     ldr        r0,DAT_0801d6a0\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r0,DAT_0801d6a4\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08044850\n\
LAB_0801d656:\n\
     str        r0,[r6,#0x0]\n\
     bl         fun_08044df0\n\
     strh       r0,[r4,#0x2]\n\
LAB_0801d65e:\n\
     ldr        r1,DAT_0801d6a8\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d672\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0801f2f4\n\
     bl         fun_0801f684\n\
LAB_0801d672:\n\
     ldr        r0,DAT_0801d6ac\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x1f\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x87\n\
     lsl        r1,r1,#0x11\n\
     cmp        r0,r1\n\
     bhi        LAB_0801d6b8\n\
     ldr        r4,DAT_0801d6b0\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801d6cc\n\
     mov        r0,#0x2f\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,DAT_0801d6b4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801d6cc\n\
DAT_0801d6a0:\n\
     .4byte 0x0200EDB0\n\
DAT_0801d6a4:\n\
     .4byte 0x0200ED28\n\
DAT_0801d6a8:\n\
     .4byte 0x0200EE0C\n\
DAT_0801d6ac:\n\
     .4byte 0x0200ED7C\n\
DAT_0801d6b0:\n\
     .4byte 0x0200ED50\n\
DAT_0801d6b4:\n\
     .4byte 0x0200EE28\n\
LAB_0801d6b8:\n\
     ldr        r4,DAT_0801d704\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d6cc\n\
     ldr        r0,DAT_0801d708\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0801d6cc:\n\
     ldr        r0,DAT_0801d70c\n\
     ldrb       r3,[r0,#0x2]\n\
     lsl        r1,r3,#0x1d\n\
     mov        r10,r0\n\
     cmp        r1,#0x0\n\
     bge        LAB_0801d6da\n\
     b          LAB_0801da7e\n\
LAB_0801d6da:\n\
     ldr        r1,DAT_0801d710\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0801d71a\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801d714\n\
     ldr        r1,[r0,#0x4]\n\
     mov        r3,#0x1\n\
     add        r0,r3,#0x0\n\
     ldrh       r4,[r1,#0x0]\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801d718\n\
     strh       r2,[r1,#0x0]\n\
     b          LAB_0801d71a\n\
.space 1\n\
.space 1\n\
DAT_0801d704:\n\
     .4byte 0x0200EE28\n\
DAT_0801d708:\n\
     .4byte 0x0200ED50\n\
DAT_0801d70c:\n\
     .4byte 0x0200EE50\n\
DAT_0801d710:\n\
     .4byte 0x0200EE30\n\
DAT_0801d714:\n\
     .4byte 0x0200EDE0\n\
LAB_0801d718:\n\
     strh       r3,[r1,#0x0]\n\
LAB_0801d71a:\n\
     ldr        r0,DAT_0801d77c\n\
     mov        r5,#0x0\n\
     ldrsh      r1,[r0,r5]\n\
     mov        r0,#0x28\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     blt        LAB_0801d72a\n\
     b          LAB_0801d850\n\
LAB_0801d72a:\n\
     ldr        r1,DAT_0801d780\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r6,r0,#0x10\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801d73c\n\
     b          LAB_0801da7e\n\
LAB_0801d73c:\n\
     ldr        r0,DAT_0801d784\n\
     ldrb       r7,[r0,#0x0]\n\
     cmp        r7,#0x1\n\
     bne        LAB_0801d798\n\
     ldr        r5,DAT_0801d788\n\
     ldr        r4,DAT_0801d78c\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r4,DAT_0801d790\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x4b\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r7,[r0,#0x6]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r6,[r0,#0xa]\n\
     ldr        r0,DAT_0801d794\n\
     strh       r6,[r0,#0x0]\n\
     b          LAB_0801d7c8\n\
DAT_0801d77c:\n\
     .4byte 0x0200ED7C\n\
DAT_0801d780:\n\
     .4byte 0x0200ED88\n\
DAT_0801d784:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d788:\n\
     .4byte 0x0200EDD8\n\
DAT_0801d78c:\n\
     .4byte 0x08786978\n\
DAT_0801d790:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d794:\n\
     .4byte 0x0200EE38\n\
LAB_0801d798:\n\
     ldr        r5,DAT_0801d7ec\n\
     ldr        r4,DAT_0801d7f0\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r4,DAT_0801d7f4\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r1,#0xdc\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r6,[r0,#0xa]\n\
LAB_0801d7c8:\n\
     ldr        r0,DAT_0801d7f8\n\
     ldr        r6,DAT_0801d7fc\n\
     mov        r10,r6\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_0801d80c\n\
     ldrb       r1,[r6,#0x2]\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d80c\n\
     ldr        r1,DAT_0801d800\n\
     ldr        r0,DAT_0801d804\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801d808\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801d812\n\
.space 1\n\
.space 1\n\
DAT_0801d7ec:\n\
     .4byte 0x0200EDD8\n\
DAT_0801d7f0:\n\
     .4byte 0x08786978\n\
DAT_0801d7f4:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d7f8:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d7fc:\n\
     .4byte 0x0200EE50\n\
DAT_0801d800:\n\
     .4byte 0x0200ED80\n\
DAT_0801d804:\n\
     .4byte 0x40000000\n\
DAT_0801d808:\n\
     .4byte 0x0200EE38\n\
LAB_0801d80c:\n\
     ldr        r1,DAT_0801d838\n\
     ldr        r0,DAT_0801d83c\n\
     str        r0,[r1,#0x0]\n\
LAB_0801d812:\n\
     mov        r0,#0x40\n\
     mov        r2,r10\n\
     ldrb       r2,[r2,#0x1]\n\
     orr        r0,r2\n\
     mov        r3,r10\n\
     strb       r0,[r3,#0x1]\n\
     ldr        r1,DAT_0801d840\n\
     mov        r0,#0xb4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801d844\n\
     ldr        r2,[r0,#0x4]\n\
     ldr        r1,DAT_0801d848\n\
     mov        r4,#0x28\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     add        r0,r4,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801d84c\n\
     strh       r0,[r2,#0x2]\n\
     b          LAB_0801da7e\n\
DAT_0801d838:\n\
     .4byte 0x0200ED80\n\
DAT_0801d83c:\n\
     .4byte 0x3F800000\n\
DAT_0801d840:\n\
     .4byte 0x0200ED88\n\
DAT_0801d844:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d848:\n\
     .4byte 0x0200ED7C\n\
DAT_0801d84c:\n\
     .4byte 0x0000FFD8\n\
LAB_0801d850:\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     cmp        r1,r0\n\
     bgt        LAB_0801d85a\n\
     b          LAB_0801d97c\n\
LAB_0801d85a:\n\
     ldr        r1,DAT_0801d8ac\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r7,r0,#0x10\n\
     cmp        r7,#0x0\n\
     beq        LAB_0801d86c\n\
     b          LAB_0801da7e\n\
LAB_0801d86c:\n\
     ldr        r0,DAT_0801d8b0\n\
     ldrb       r6,[r0,#0x0]\n\
     cmp        r6,#0x1\n\
     bne        LAB_0801d8c4\n\
     ldr        r5,DAT_0801d8b4\n\
     ldr        r4,DAT_0801d8b8\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r4,DAT_0801d8bc\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x4b\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r7,[r0,#0xa]\n\
     ldr        r0,DAT_0801d8c0\n\
     strh       r7,[r0,#0x0]\n\
     b          LAB_0801d8f4\n\
DAT_0801d8ac:\n\
     .4byte 0x0200ED88\n\
DAT_0801d8b0:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d8b4:\n\
     .4byte 0x0200EDD8\n\
DAT_0801d8b8:\n\
     .4byte 0x08786978\n\
DAT_0801d8bc:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d8c0:\n\
     .4byte 0x0200EE38\n\
LAB_0801d8c4:\n\
     ldr        r4,DAT_0801d918\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r1,#0xdc\n\
     bl         fun_080047d0\n\
     ldr        r6,DAT_0801d91c\n\
     ldr        r5,DAT_0801d920\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r7,[r0,#0x10]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r7,[r0,#0xa]\n\
LAB_0801d8f4:\n\
     ldr        r0,DAT_0801d924\n\
     ldr        r5,DAT_0801d928\n\
     mov        r10,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_0801d938\n\
     ldrb       r6,[r5,#0x2]\n\
     lsl        r0,r6,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801d938\n\
     ldr        r1,DAT_0801d92c\n\
     ldr        r0,DAT_0801d930\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801d934\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801d93e\n\
.space 1\n\
.space 1\n\
DAT_0801d918:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d91c:\n\
     .4byte 0x0200EDD8\n\
DAT_0801d920:\n\
     .4byte 0x08786978\n\
DAT_0801d924:\n\
     .4byte 0x0200ED3C\n\
DAT_0801d928:\n\
     .4byte 0x0200EE50\n\
DAT_0801d92c:\n\
     .4byte 0x0200ED80\n\
DAT_0801d930:\n\
     .4byte 0x40000000\n\
DAT_0801d934:\n\
     .4byte 0x0200EE38\n\
LAB_0801d938:\n\
     ldr        r1,DAT_0801d968\n\
     ldr        r0,DAT_0801d96c\n\
     str        r0,[r1,#0x0]\n\
LAB_0801d93e:\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x1]\n\
     and        r0,r1\n\
     mov        r2,r10\n\
     strb       r0,[r2,#0x1]\n\
     ldr        r1,DAT_0801d970\n\
     mov        r0,#0xb4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801d974\n\
     ldr        r2,[r0,#0x4]\n\
     ldr        r1,DAT_0801d978\n\
     mov        r3,#0x88\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r2,#0x2]\n\
     b          LAB_0801da7e\n\
.space 1\n\
.space 1\n\
DAT_0801d968:\n\
     .4byte 0x0200ED80\n\
DAT_0801d96c:\n\
     .4byte 0x3F800000\n\
DAT_0801d970:\n\
     .4byte 0x0200ED88\n\
DAT_0801d974:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d978:\n\
     .4byte 0x0200ED7C\n\
LAB_0801d97c:\n\
     mov        r5,#0x14\n\
     add        r0,r5,#0x0\n\
     mov        r4,r10\n\
     ldrb       r4,[r4,#0x2]\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801da7e\n\
     ldr        r0,DAT_0801d9bc\n\
     ldrh       r3,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     bne        LAB_0801da2a\n\
     ldr        r4,DAT_0801d9c0\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     add        r6,r4,#0x0\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0801da2a\n\
     ldr        r0,DAT_0801d9c4\n\
     ldr        r2,[r0,#0x4]\n\
     ldrh       r0,[r2,#0xa]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801da20\n\
     ldrh       r2,[r2,#0x4]\n\
     cmp        r2,#0x4b\n\
     bne        LAB_0801d9d0\n\
     ldr        r1,DAT_0801d9c8\n\
     ldr        r0,DAT_0801d9cc\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0801d9f4\n\
.space 1\n\
.space 1\n\
DAT_0801d9bc:\n\
     .4byte 0x0200EE38\n\
DAT_0801d9c0:\n\
     .4byte 0x0200EDD8\n\
DAT_0801d9c4:\n\
     .4byte 0x0200EDE0\n\
DAT_0801d9c8:\n\
     .4byte 0x0200ED80\n\
DAT_0801d9cc:\n\
     .4byte 0x40000000\n\
LAB_0801d9d0:\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801d9ec\n\
     ldr        r1,DAT_0801d9e4\n\
     ldr        r0,DAT_0801d9e8\n\
     b          LAB_0801d9f0\n\
.space 1\n\
.space 1\n\
DAT_0801d9e4:\n\
     .4byte 0x0200ED80\n\
DAT_0801d9e8:\n\
     .4byte 0x40000000\n\
LAB_0801d9ec:\n\
     ldr        r1,DAT_0801da10\n\
     ldr        r0,DAT_0801da14\n\
LAB_0801d9f0:\n\
     str        r0,[r1,#0x0]\n\
     add        r6,r4,#0x0\n\
LAB_0801d9f4:\n\
     ldr        r0,DAT_0801da18\n\
     ldr        r1,[r0,#0x4]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0xa]\n\
     ldr        r4,DAT_0801da1c\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
     b          LAB_0801da2a\n\
.space 1\n\
.space 1\n\
DAT_0801da10:\n\
     .4byte 0x0200ED80\n\
DAT_0801da14:\n\
     .4byte 0x40400000\n\
DAT_0801da18:\n\
     .4byte 0x0200EDE0\n\
DAT_0801da1c:\n\
     .4byte 0x08786978\n\
LAB_0801da20:\n\
     ldr        r1,DAT_0801da4c\n\
     ldr        r0,SUB_0801da50\n\
     str        r0,[r1,#0x0]\n\
     strh       r3,[r2,#0xa]\n\
     strh       r5,[r4,#0x0]\n\
LAB_0801da2a:\n\
     ldr        r0,DAT_0801da54\n\
     ldrb       r0,[r0,#0x1]\n\
     lsl        r0,r0,#0x19\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801da60\n\
     ldr        r0,DAT_0801da58\n\
     ldr        r5,[r0,#0x4]\n\
     ldr        r4,DAT_0801da5c\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r4,r6]\n\
     bl         fun_08044d90\n\
     ldr        r1,DAT_0801da4c\n\
     ldr        r1,[r1,#0x0]\n\
     bl         fun_08044824\n\
     b          LAB_0801da76\n\
DAT_0801da4c:\n\
     .4byte 0x0200ED80\n\
SUB_0801da50:\n\
     .4byte 0x00000000\n\
DAT_0801da54:\n\
     .4byte 0x0200EE50\n\
DAT_0801da58:\n\
     .4byte 0x0200EDE0\n\
DAT_0801da5c:\n\
     .4byte 0x0200ED7C\n\
LAB_0801da60:\n\
     ldr        r0,DAT_0801daa8\n\
     ldr        r5,[r0,#0x4]\n\
     ldr        r4,DAT_0801daac\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     bl         fun_08044d90\n\
     ldr        r1,SUB_0801dab0\n\
     ldr        r1,[r1,#0x0]\n\
     bl         fun_08044850\n\
LAB_0801da76:\n\
     bl         fun_08044df0\n\
     strh       r0,[r4,#0x0]\n\
     strh       r0,[r5,#0x2]\n\
LAB_0801da7e:\n\
     ldr        r1,DAT_0801dab4\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0801daba\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801daa8\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x1\n\
     add        r0,r3,#0x0\n\
     ldrh       r4,[r1,#0x0]\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801dab8\n\
     strh       r2,[r1,#0x0]\n\
     b          LAB_0801daba\n\
.space 1\n\
.space 1\n\
DAT_0801daa8:\n\
     .4byte 0x0200EDE0\n\
DAT_0801daac:\n\
     .4byte 0x0200ED7C\n\
SUB_0801dab0:\n\
     .4byte 0x0200ED80\n\
DAT_0801dab4:\n\
     .4byte 0x0200EDF8\n\
LAB_0801dab8:\n\
     strh       r3,[r1,#0x0]\n\
LAB_0801daba:\n\
     ldr        r5,DAT_0801db10\n\
     mov        r8,r5\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r5,r6]\n\
     mov        r7,#0x28\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
     cmp        r0,r7\n\
     bge        LAB_0801db2c\n\
     ldr        r6,DAT_0801db14\n\
     ldrh       r0,[r6,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_0801dada\n\
     b          LAB_0801dc62\n\
LAB_0801dada:\n\
     ldr        r5,DAT_0801db18\n\
     ldr        r4,DAT_0801db1c\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_0801db20\n\
     mov        r0,#0x80\n\
     ldrb       r2,[r1,#0x1]\n\
     orr        r0,r2\n\
     strb       r0,[r1,#0x1]\n\
     mov        r0,#0xb4\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_0801db24\n\
    ");
}
__attribute__((naked)) void fun_0801dafc()
{
    asm("\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r3,r8\n\
     strh       r7,[r3,#0x0]\n\
     mov        r3,#0x0\n\
     ldr        r0,DAT_0801db28\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r3,[r0,#0xa]\n\
     b          LAB_0801dc62\n\
.space 1\n\
.space 1\n\
DAT_0801db10:\n\
     .4byte 0x0200ED24\n\
DAT_0801db14:\n\
     .4byte 0x0200ED4C\n\
DAT_0801db18:\n\
     .4byte 0x0200EE18\n\
DAT_0801db1c:\n\
     .4byte 0x08786978\n\
DAT_0801db20:\n\
     .4byte 0x0200EE50\n\
DAT_0801db24:\n\
     .4byte 0x0200EDE0\n\
DAT_0801db28:\n\
     .4byte 0x0000FFD8\n\
LAB_0801db2c:\n\
     mov        r7,#0x88\n\
     lsl        r7,r7,#0x1\n\
     cmp        r0,r7\n\
     ble        LAB_0801db8c\n\
     ldr        r6,DAT_0801db78\n\
     ldrh       r0,[r6,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_0801db44\n\
     b          LAB_0801dc62\n\
LAB_0801db44:\n\
     ldr        r5,DAT_0801db7c\n\
     ldr        r4,DAT_0801db80\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_0801db84\n\
     mov        r0,#0x7f\n\
     ldrb       r4,[r1,#0x1]\n\
     and        r0,r4\n\
     strb       r0,[r1,#0x1]\n\
     mov        r0,#0xb4\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r2,DAT_0801db88\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r5,r8\n\
     strh       r7,[r5,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r7,[r0,#0x2]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r1,[r0,#0xa]\n\
     b          LAB_0801dc62\n\
.space 1\n\
.space 1\n\
DAT_0801db78:\n\
     .4byte 0x0200ED4C\n\
DAT_0801db7c:\n\
     .4byte 0x0200EE18\n\
DAT_0801db80:\n\
     .4byte 0x08786978\n\
DAT_0801db84:\n\
     .4byte 0x0200EE50\n\
DAT_0801db88:\n\
     .4byte 0x0200EDE0\n\
LAB_0801db8c:\n\
     ldr        r3,DAT_0801dbb8\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0801dc0e\n\
     ldr        r0,DAT_0801dbbc\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0xa]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801dc00\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801dbc8\n\
     ldr        r1,DAT_0801dbc0\n\
     ldr        r0,DAT_0801dbc4\n\
     b          LAB_0801dbcc\n\
.space 1\n\
.space 1\n\
DAT_0801dbb8:\n\
     .4byte 0x0200EE18\n\
DAT_0801dbbc:\n\
     .4byte 0x0200EDE0\n\
DAT_0801dbc0:\n\
     .4byte 0x0200ED38\n\
DAT_0801dbc4:\n\
     .4byte 0x40400000\n\
LAB_0801dbc8:\n\
     ldr        r1,DAT_0801dbec\n\
     ldr        r0,DAT_0801dbf0\n\
LAB_0801dbcc:\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801dbf4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0xa]\n\
     ldr        r5,DAT_0801dbf8\n\
     ldr        r4,DAT_0801dbfc\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_0801dc0e\n\
.space 1\n\
.space 1\n\
DAT_0801dbec:\n\
     .4byte 0x0200ED38\n\
DAT_0801dbf0:\n\
     .4byte 0x40000000\n\
DAT_0801dbf4:\n\
     .4byte 0x0200EDE0\n\
DAT_0801dbf8:\n\
     .4byte 0x0200EE18\n\
DAT_0801dbfc:\n\
     .4byte 0x08786978\n\
LAB_0801dc00:\n\
     ldr        r1,DAT_0801dc30\n\
     ldr        r0,DAT_0801dc34\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0xa]\n\
     mov        r0,#0x1e\n\
     strh       r0,[r3,#0x0]\n\
LAB_0801dc0e:\n\
     ldr        r0,DAT_0801dc38\n\
     ldrb       r0,[r0,#0x1]\n\
     lsr        r0,r0,#0x7\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801dc44\n\
     ldr        r0,DAT_0801dc3c\n\
     ldr        r5,[r0,#0x0]\n\
     ldr        r4,DAT_0801dc40\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r4,r6]\n\
     bl         fun_08044d90\n\
     ldr        r1,DAT_0801dc30\n\
     ldr        r1,[r1,#0x0]\n\
     bl         fun_08044824\n\
     b          LAB_0801dc5a\n\
DAT_0801dc30:\n\
     .4byte 0x0200ED38\n\
DAT_0801dc34:\n\
     .4byte 0x00000000\n\
DAT_0801dc38:\n\
     .4byte 0x0200EE50\n\
DAT_0801dc3c:\n\
     .4byte 0x0200EDE0\n\
DAT_0801dc40:\n\
     .4byte 0x0200ED24\n\
LAB_0801dc44:\n\
     ldr        r0,DAT_0801dc88\n\
     ldr        r5,[r0,#0x0]\n\
     ldr        r4,DAT_0801dc8c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     bl         fun_08044d90\n\
     ldr        r1,DAT_0801dc90\n\
     ldr        r1,[r1,#0x0]\n\
     bl         fun_08044850\n\
LAB_0801dc5a:\n\
     bl         fun_08044df0\n\
     strh       r0,[r4,#0x0]\n\
     strh       r0,[r5,#0x2]\n\
LAB_0801dc62:\n\
     ldr        r0,DAT_0801dc94\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     add        r2,r0,#0x0\n\
     cmp        r1,#0x0\n\
     ble        LAB_0801dcd0\n\
     mov        r0,#0x1\n\
     ldrh       r3,[r2,#0x0]\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801dc98\n\
     ldr        r0,DAT_0801dc88\n\
     ldr        r1,[r0,#0x4]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x2\n\
     add        r0,r4,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     orr        r0,r5\n\
     b          LAB_0801dca2\n\
DAT_0801dc88:\n\
     .4byte 0x0200EDE0\n\
DAT_0801dc8c:\n\
     .4byte 0x0200ED24\n\
DAT_0801dc90:\n\
     .4byte 0x0200ED38\n\
DAT_0801dc94:\n\
     .4byte 0x0200EE08\n\
LAB_0801dc98:\n\
     ldr        r0,DAT_0801dcf8\n\
     ldr        r1,[r0,#0x4]\n\
     ldr        r0,DAT_0801dcfc\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
LAB_0801dca2:\n\
     strh       r0,[r1,#0x12]\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801dcd0\n\
     ldr        r1,DAT_0801dd00\n\
     mov        r0,#0x11\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r1,#0x2]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x2]\n\
     ldr        r4,DAT_0801dd04\n\
     ldrb       r3,[r4,#0x0]\n\
     cmp        r3,#0x1\n\
     bne        LAB_0801dccc\n\
     bl         fun_0801f258\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x0]\n\
LAB_0801dccc:\n\
     bl         fun_0801f2f4\n\
LAB_0801dcd0:\n\
     ldr        r0,DAT_0801dd08\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r0,r4]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     ble        LAB_0801dd56\n\
     mov        r0,#0x1\n\
     ldrh       r5,[r3,#0x0]\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801dd10\n\
     ldr        r2,DAT_0801dd0c\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x2\n\
     add        r0,r6,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     b          LAB_0801dd1a\n\
.space 1\n\
.space 1\n\
DAT_0801dcf8:\n\
     .4byte 0x0200EDE0\n\
DAT_0801dcfc:\n\
     .4byte 0x0000FDFF\n\
DAT_0801dd00:\n\
     .4byte 0x0200EE50\n\
DAT_0801dd04:\n\
     .4byte 0x0200ED3C\n\
DAT_0801dd08:\n\
     .4byte 0x0200EE00\n\
DAT_0801dd0c:\n\
     .4byte 0x0200ED20\n\
LAB_0801dd10:\n\
     ldr        r2,DAT_0801dd40\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,DAT_0801dd44\n\
     ldrh       r5,[r1,#0x12]\n\
     and        r0,r5\n\
LAB_0801dd1a:\n\
     strh       r0,[r1,#0x12]\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801dd56\n\
     ldr        r0,DAT_0801dd48\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801dd4c\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x2\n\
     add        r1,r6,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     orr        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     b          LAB_0801dd56\n\
DAT_0801dd40:\n\
     .4byte 0x0200ED20\n\
DAT_0801dd44:\n\
     .4byte 0x0000FDFF\n\
DAT_0801dd48:\n\
     .4byte 0x0200ED30\n\
LAB_0801dd4c:\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,DAT_0801dda0\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
LAB_0801dd56:\n\
     ldr        r0,DAT_0801dda4\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r0,r4]\n\
     add        r4,r0,#0x0\n\
     cmp        r1,#0x0\n\
     ble        LAB_0801de2a\n\
     mov        r0,#0x1\n\
     ldrh       r5,[r4,#0x0]\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ddac\n\
     ldr        r3,DAT_0801dda8\n\
     ldr        r1,[r3,#0x4]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x2\n\
     add        r2,r6,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0x8]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0xc]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0x14]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0x1c]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_0801dde0\n\
.space 1\n\
.space 1\n\
DAT_0801dda0:\n\
     .4byte 0x0000FDFF\n\
DAT_0801dda4:\n\
     .4byte 0x0200ED34\n\
DAT_0801dda8:\n\
     .4byte 0x0200ED90\n\
LAB_0801ddac:\n\
     ldr        r3,DAT_0801de48\n\
     ldr        r2,[r3,#0x4]\n\
     ldr        r1,DAT_0801de4c\n\
     add        r0,r1,#0x0\n\
     ldrh       r5,[r2,#0x12]\n\
     and        r0,r5\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r2,[r3,#0x8]\n\
     add        r0,r1,#0x0\n\
     ldrh       r6,[r2,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r2,[r3,#0xc]\n\
     add        r0,r1,#0x0\n\
     ldrh       r5,[r2,#0x12]\n\
     and        r0,r5\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r2,[r3,#0x14]\n\
     add        r0,r1,#0x0\n\
     ldrh       r6,[r2,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,[r3,#0x1c]\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
LAB_0801dde0:\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801de2a\n\
     ldr        r1,[r3,#0x4]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x2\n\
     add        r2,r4,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0x8]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0xc]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0x14]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r3,#0x1c]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_0801de50\n\
     ldrb       r5,[r1,#0x0]\n\
     cmp        r5,#0x1\n\
     bne        LAB_0801de2a\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     bl         fun_0801f258\n\
LAB_0801de2a:\n\
     bl         fun_0801f1b8\n\
     bl         fun_0801f59c\n\
     bl         fun_0801de54\n\
LAB_0801de36:\n\
     mov        r0,#0x0\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801de48:\n\
     .4byte 0x0200ED90\n\
DAT_0801de4c:\n\
     .4byte 0x0000FDFF\n\
DAT_0801de50:\n\
     .4byte 0x0200ED3C\n\
    ");
}
__attribute__((naked)) void fun_0801de54()
{
    asm("\n\
     push       {r4,lr}\n\
     bl         fun_080013f4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801deea\n\
     ldr        r4,DAT_0801deb4\n\
     mov        r0,#0x3\n\
     ldrb       r1,[r4,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801deea\n\
     mov        r0,#0x2\n\
     bl         fun_080016f0\n\
     mov        r0,#0x1\n\
     ldrb       r2,[r4,#0x0]\n\
     orr        r0,r2\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r1,DAT_0801deb8\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801debc\n\
     ldr        r0,DAT_0801dec0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801dec4\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801dea4\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801dea4\n\
     ldr        r1,DAT_0801dec8\n\
     mov        r2,#0x82\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801dea4:\n\
     bl         fun_080014bc\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801decc\n\
     ldr        r1,DAT_0801deb4\n\
     mov        r0,#0x8\n\
     b          LAB_0801dee4\n\
.space 1\n\
.space 1\n\
DAT_0801deb4:\n\
     .4byte 0x0200EE50\n\
DAT_0801deb8:\n\
     .4byte 0x0200ED84\n\
DAT_0801debc:\n\
     .4byte 0x0200EDF4\n\
DAT_0801dec0:\n\
     .4byte 0x0200EE34\n\
DAT_0801dec4:\n\
     .4byte 0x0200EDFC\n\
DAT_0801dec8:\n\
     .4byte 0x0200EDF0\n\
LAB_0801decc:\n\
     bl         fun_080014d4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801dee0\n\
     ldr        r1,DAT_0801dedc\n\
     mov        r0,#0x20\n\
     b          LAB_0801dee4\n\
.space 1\n\
.space 1\n\
DAT_0801dedc:\n\
     .4byte 0x0200EE50\n\
LAB_0801dee0:\n\
     ldr        r1,DAT_0801def0\n\
     mov        r0,#0x10\n\
LAB_0801dee4:\n\
     ldrb       r2,[r1,#0x0]\n\
     orr        r0,r2\n\
     strb       r0,[r1,#0x0]\n\
LAB_0801deea:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801def0:\n\
     .4byte 0x0200EE50\n\
    ");
}
__attribute__((naked)) void fun_0801def4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r8,r0\n\
     ldr        r7,DAT_0801df54\n\
     ldrb       r1,[r7,#0x0]\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     bne        LAB_0801df0e\n\
     b          LAB_0801e128\n\
LAB_0801df0e:\n\
     lsr        r5,r1,#0x7\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801df60\n\
     ldr        r4,DAT_0801df58\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,[r4,#0xc]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0xc]\n\
     ldr        r0,DAT_0801df5c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0xc]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2d\n\
     strh       r0,[r2,#0x4]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0xc]\n\
     b          LAB_0801e408\n\
DAT_0801df54:\n\
     .4byte 0x0200EE50\n\
DAT_0801df58:\n\
     .4byte 0x0200ED90\n\
DAT_0801df5c:\n\
     .4byte 0x0200EE34\n\
LAB_0801df60:\n\
     lsl        r0,r1,#0x19\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801df94\n\
     ldr        r4,DAT_0801df90\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0xc]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0xc]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0xc]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x14\n\
     b          LAB_0801e464\n\
.space 1\n\
.space 1\n\
DAT_0801df90:\n\
     .4byte 0x0200ED90\n\
LAB_0801df94:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801dfd8\n\
     ldr        r4,DAT_0801dfd0\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0xe8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,[r4,#0xc]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0xc]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801dfd4\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x4\n\
     b          LAB_0801e47a\n\
DAT_0801dfd0:\n\
     .4byte 0x0200ED90\n\
DAT_0801dfd4:\n\
     .4byte 0x0200ED84\n\
LAB_0801dfd8:\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e028\n\
     ldr        r4,DAT_0801e01c\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0xd8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,[r4,#0xc]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0801e020\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e024\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x8\n\
     b          LAB_0801e47a\n\
DAT_0801e01c:\n\
     .4byte 0x0200ED90\n\
DAT_0801e020:\n\
     .4byte 0x08786977\n\
DAT_0801e024:\n\
     .4byte 0x0200ED84\n\
LAB_0801e028:\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e0c4\n\
     ldr        r4,DAT_0801e0a4\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0801e0a8\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r1,[r1,#0xa]\n\
     ldrh       r0,[r2,#0xa]\n\
     cmp        r1,r0\n\
     bne        LAB_0801e054\n\
     ldr        r1,DAT_0801e0ac\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801e0b0\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x63\n\
     strh       r0,[r2,#0xa]\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
LAB_0801e054:\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0xc8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0801e0b4\n\
     add        r0,r8\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0801e0b8\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x10\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801e0bc\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801e0c0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xf\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc\n\
     bl         fun_080016f0\n\
     b          LAB_0801e5ea\n\
.space 1\n\
.space 1\n\
DAT_0801e0a4:\n\
     .4byte 0x0200ED90\n\
DAT_0801e0a8:\n\
     .4byte 0x0200ED20\n\
DAT_0801e0ac:\n\
     .4byte 0x0200ED30\n\
DAT_0801e0b0:\n\
     .4byte 0x0200EE00\n\
DAT_0801e0b4:\n\
     .4byte 0x08786976\n\
DAT_0801e0b8:\n\
     .4byte 0x08786977\n\
DAT_0801e0bc:\n\
     .4byte 0x0200ED84\n\
DAT_0801e0c0:\n\
     .4byte 0x0200EDD4\n\
LAB_0801e0c4:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     blt        LAB_0801e0cc\n\
     b          LAB_0801e5ea\n\
LAB_0801e0cc:\n\
     ldr        r4,DAT_0801e114\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0xb8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0801e118\n\
     add        r0,r8\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0801e11c\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x19\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0xc]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,DAT_0801e120\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801e124\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x5\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldrb       r0,[r7,#0x0]\n\
     and        r1,r0\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     sub        r0,#0xf\n\
     b          LAB_0801e5d8\n\
DAT_0801e114:\n\
     .4byte 0x0200ED90\n\
DAT_0801e118:\n\
     .4byte 0x08786976\n\
DAT_0801e11c:\n\
     .4byte 0x08786977\n\
DAT_0801e120:\n\
     .4byte 0x0200EE34\n\
DAT_0801e124:\n\
     .4byte 0x0000FDFF\n\
LAB_0801e128:\n\
     ldrb       r2,[r7,#0x2]\n\
     lsl        r0,r2,#0x1e\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     bne        LAB_0801e134\n\
     b          LAB_0801e3c4\n\
LAB_0801e134:\n\
     lsl        r0,r1,#0x18\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e19c\n\
     ldr        r4,DAT_0801e190\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x0]\n\
     ldr        r0,DAT_0801e194\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2d\n\
     strh       r0,[r2,#0x4]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e198\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x7f\n\
     ldrb       r1,[r7,#0x0]\n\
     and        r0,r1\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x0]\n\
     b          LAB_0801e57c\n\
.space 1\n\
.space 1\n\
DAT_0801e190:\n\
     .4byte 0x0200ED90\n\
DAT_0801e194:\n\
     .4byte 0x0200EE34\n\
DAT_0801e198:\n\
     .4byte 0x0000FDFF\n\
LAB_0801e19c:\n\
     lsl        r0,r1,#0x19\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e1d8\n\
     ldr        r4,DAT_0801e1d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e1d4\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x8\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x4]\n\
     add        r0,#0x19\n\
     b          LAB_0801e464\n\
.space 1\n\
.space 1\n\
DAT_0801e1d0:\n\
     .4byte 0x0200ED90\n\
DAT_0801e1d4:\n\
     .4byte 0x0200EDB0\n\
LAB_0801e1d8:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e22c\n\
     ldr        r4,DAT_0801e220\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xe0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e224\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x8\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e228\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x4\n\
     b          LAB_0801e47a\n\
.space 1\n\
.space 1\n\
DAT_0801e220:\n\
     .4byte 0x0200ED90\n\
DAT_0801e224:\n\
     .4byte 0x0200EDB0\n\
DAT_0801e228:\n\
     .4byte 0x0200ED84\n\
LAB_0801e22c:\n\
     lsl        r0,r1,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e280\n\
     ldr        r4,DAT_0801e274\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xd0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r2,#0x2\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e278\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x8\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e27c\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x8\n\
     b          LAB_0801e47a\n\
.space 1\n\
.space 1\n\
DAT_0801e274:\n\
     .4byte 0x0200ED90\n\
DAT_0801e278:\n\
     .4byte 0x0200EDB0\n\
DAT_0801e27c:\n\
     .4byte 0x0200ED84\n\
LAB_0801e280:\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e2cc\n\
     ldr        r4,DAT_0801e2c4\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xb0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r2,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e2c8\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x8\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0xf\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x10\n\
     ldrb       r2,[r7,#0x1]\n\
     orr        r0,r2\n\
     mov        r1,#0x9\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     b          LAB_0801e57a\n\
DAT_0801e2c4:\n\
     .4byte 0x0200ED90\n\
DAT_0801e2c8:\n\
     .4byte 0x0200EDB0\n\
LAB_0801e2cc:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     blt        LAB_0801e2d4\n\
     b          LAB_0801e5ea\n\
LAB_0801e2d4:\n\
     ldr        r4,DAT_0801e364\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xa0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e368\n\
     ldr        r6,[r0,#0x0]\n\
     ldrh       r0,[r6,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r6,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     mov        r8,r0\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,DAT_0801e36c\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801e370\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x5\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldrb       r0,[r7,#0x0]\n\
     and        r1,r0\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     mov        r4,#0x11\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r4,r2\n\
     strb       r4,[r7,#0x1]\n\
     sub        r0,#0x1\n\
     and        r1,r0\n\
     mov        r2,#0x9\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     and        r1,r2\n\
     strb       r1,[r7,#0x0]\n\
     ldrb       r1,[r7,#0x2]\n\
     and        r0,r1\n\
     mov        r1,#0x8\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x2]\n\
     ldr        r5,DAT_0801e374\n\
     ldr        r0,[r5,#0x0]\n\
     bl         fun_08044e94\n\
     ldr        r2,DAT_0801e378\n\
     ldr        r3,DAT_0801e37c\n\
     bl         fun_08043c64\n\
     bl         fun_08044530\n\
     str        r0,[r5,#0x0]\n\
     lsl        r4,r4,#0x1a\n\
     cmp        r4,#0x0\n\
     bge        LAB_0801e380\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r6,r2]\n\
     cmp        r0,#0xcc\n\
     ble        LAB_0801e388\n\
     b          LAB_0801e394\n\
DAT_0801e364:\n\
     .4byte 0x0200ED90\n\
DAT_0801e368:\n\
     .4byte 0x0200EDB0\n\
DAT_0801e36c:\n\
     .4byte 0x0200EE34\n\
DAT_0801e370:\n\
     .4byte 0x0000FDFF\n\
DAT_0801e374:\n\
     .4byte 0x0200ED28\n\
DAT_0801e378:\n\
     .4byte 0x3FD00000\n\
DAT_0801e37c:\n\
     .4byte 0x00000000\n\
LAB_0801e380:\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r6,r2]\n\
     cmp        r0,#0x13\n\
     ble        LAB_0801e394\n\
LAB_0801e388:\n\
     ldr        r1,DAT_0801e390\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     b          LAB_0801e39a\n\
DAT_0801e390:\n\
     .4byte 0x0200ED3C\n\
LAB_0801e394:\n\
     ldr        r0,DAT_0801e3b8\n\
     mov        r1,r8\n\
     strb       r1,[r0,#0x0]\n\
LAB_0801e39a:\n\
     ldr        r3,DAT_0801e3bc\n\
     ldr        r1,DAT_0801e3c0\n\
     mov        r0,#0x0\n\
     ldrsh      r2,[r1,r0]\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,r0,r2\n\
     str        r0,[r3,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x19\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1b\n\
     bl         fun_080016f0\n\
     b          LAB_0801e5ea\n\
.space 1\n\
.space 1\n\
DAT_0801e3b8:\n\
     .4byte 0x0200ED3C\n\
DAT_0801e3bc:\n\
     .4byte 0x0200EDD4\n\
DAT_0801e3c0:\n\
     .4byte 0x0200EE3C\n\
LAB_0801e3c4:\n\
     lsl        r0,r1,#0x18\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801e434\n\
     ldr        r4,DAT_0801e424\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x18]\n\
     ldr        r0,DAT_0801e428\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x37\n\
     strh       r0,[r2,#0x4]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x18]\n\
LAB_0801e408:\n\
     ldr        r0,DAT_0801e42c\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_0801e430\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x7f\n\
     ldrb       r1,[r7,#0x0]\n\
     and        r0,r1\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x0]\n\
     b          LAB_0801e5ea\n\
DAT_0801e424:\n\
     .4byte 0x0200ED90\n\
DAT_0801e428:\n\
     .4byte 0x0200EE34\n\
DAT_0801e42c:\n\
     .4byte 0x0000FDFF\n\
DAT_0801e430:\n\
     .4byte 0x0200ED84\n\
LAB_0801e434:\n\
     lsl        r0,r1,#0x19\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e48c\n\
     ldr        r4,DAT_0801e480\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801e484\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0xa\n\
LAB_0801e464:\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e488\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x0]\n\
     and        r0,r2\n\
     strb       r0,[r7,#0x0]\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r7,#0x1]\n\
LAB_0801e47a:\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     b          LAB_0801e5ea\n\
DAT_0801e480:\n\
     .4byte 0x0200ED90\n\
DAT_0801e484:\n\
     .4byte 0x08786975\n\
DAT_0801e488:\n\
     .4byte 0x0200ED84\n\
LAB_0801e48c:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801e4e0\n\
     ldr        r4,DAT_0801e4d4\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xe8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     sub        r0,#0x4\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x4\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801e4d8\n\
     mov        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801e4dc\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801e5ea\n\
DAT_0801e4d4:\n\
     .4byte 0x0200ED90\n\
DAT_0801e4d8:\n\
     .4byte 0x0200ED84\n\
DAT_0801e4dc:\n\
     .4byte 0x0200EDEC\n\
LAB_0801e4e0:\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e53c\n\
     ldr        r4,DAT_0801e530\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xd8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801e534\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x8\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801e538\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2c\n\
     bl         fun_080016f0\n\
     b          LAB_0801e5ea\n\
.space 1\n\
.space 1\n\
DAT_0801e530:\n\
     .4byte 0x0200ED90\n\
DAT_0801e534:\n\
     .4byte 0x08786977\n\
DAT_0801e538:\n\
     .4byte 0x0200ED84\n\
LAB_0801e53c:\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801e590\n\
     ldr        r4,DAT_0801e584\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xc8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801e588\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x23\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     sub        r0,#0xa\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x10\n\
     orr        r0,r1\n\
LAB_0801e57a:\n\
     strb       r0,[r7,#0x1]\n\
LAB_0801e57c:\n\
     ldr        r1,DAT_0801e58c\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801e5ea\n\
DAT_0801e584:\n\
     .4byte 0x0200ED90\n\
DAT_0801e588:\n\
     .4byte 0x08786977\n\
DAT_0801e58c:\n\
     .4byte 0x0200ED84\n\
LAB_0801e590:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e5ea\n\
     ldr        r4,DAT_0801e5f4\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xc0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801e5f8\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x28\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801e5fc\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801e600\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x2\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldrb       r0,[r7,#0x0]\n\
     and        r1,r0\n\
     mov        r0,#0x11\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_0801e5d8:\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     strb       r0,[r7,#0x1]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     sub        r0,#0x6\n\
     and        r1,r0\n\
     strb       r1,[r7,#0x0]\n\
LAB_0801e5ea:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801e5f4:\n\
     .4byte 0x0200ED90\n\
DAT_0801e5f8:\n\
     .4byte 0x08786977\n\
DAT_0801e5fc:\n\
     .4byte 0x0200EE34\n\
DAT_0801e600:\n\
     .4byte 0x0000FDFF\n\
    ");
}
__attribute__((naked)) void fun_0801e604()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r8,r0\n\
     mov        r9,r8\n\
     mov        r4,#0x7\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801e61c\n\
     mov        r4,#0x2\n\
LAB_0801e61c:\n\
     ldr        r7,DAT_0801e688\n\
     ldrb       r1,[r7,#0x0]\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     bne        LAB_0801e62a\n\
     b          LAB_0801e880\n\
LAB_0801e62a:\n\
     lsr        r5,r1,#0x7\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e69c\n\
     ldr        r0,DAT_0801e68c\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x0]\n\
     ldr        r0,DAT_0801e690\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2d\n\
     strh       r0,[r2,#0x4]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e694\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_0801e698\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x7f\n\
     ldrb       r3,[r7,#0x0]\n\
     and        r0,r3\n\
     b          LAB_0801eaf0\n\
DAT_0801e688:\n\
     .4byte 0x0200EE50\n\
DAT_0801e68c:\n\
     .4byte 0x0200ED90\n\
DAT_0801e690:\n\
     .4byte 0x0200EE34\n\
DAT_0801e694:\n\
     .4byte 0x0000FDFF\n\
DAT_0801e698:\n\
     .4byte 0x0200ED84\n\
LAB_0801e69c:\n\
     lsl        r0,r1,#0x19\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e6f0\n\
     ldr        r0,DAT_0801e6e8\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e6ec\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x0]\n\
     and        r0,r1\n\
     strb       r0,[r7,#0x0]\n\
     mov        r0,#0x2\n\
     ldrb       r2,[r7,#0x1]\n\
     orr        r0,r2\n\
     strb       r0,[r7,#0x1]\n\
     b          LAB_0801ecc4\n\
DAT_0801e6e8:\n\
     .4byte 0x0200ED90\n\
DAT_0801e6ec:\n\
     .4byte 0x0200ED84\n\
LAB_0801e6f0:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e73c\n\
     ldr        r0,DAT_0801e730\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xe8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e734\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x5\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e738\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r3,[r7,#0x1]\n\
     and        r0,r3\n\
     mov        r1,#0x4\n\
     b          LAB_0801e9c0\n\
DAT_0801e730:\n\
     .4byte 0x0200ED90\n\
DAT_0801e734:\n\
     .4byte 0x08786975\n\
DAT_0801e738:\n\
     .4byte 0x0200ED84\n\
LAB_0801e73c:\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e78c\n\
     ldr        r0,DAT_0801e780\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xd8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e784\n\
     add        r0,r8\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e788\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x8\n\
     b          LAB_0801ec50\n\
DAT_0801e780:\n\
     .4byte 0x0200ED90\n\
DAT_0801e784:\n\
     .4byte 0x08786973\n\
DAT_0801e788:\n\
     .4byte 0x08786975\n\
LAB_0801e78c:\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e81c\n\
     ldr        r1,DAT_0801e800\n\
     lsl        r0,r4,#0x2\n\
     add        r4,r0,r1\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e804\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r1,[r1,#0xa]\n\
     ldrh       r3,[r2,#0xa]\n\
     cmp        r1,r3\n\
     bne        LAB_0801e7bc\n\
     ldr        r1,DAT_0801e808\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801e80c\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x63\n\
     strh       r0,[r2,#0xa]\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
LAB_0801e7bc:\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xc8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e810\n\
     add        r0,r8\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e814\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x16\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,DAT_0801e818\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xa\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc\n\
     bl         fun_080016f0\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     b          LAB_0801ec4e\n\
.space 1\n\
.space 1\n\
DAT_0801e800:\n\
     .4byte 0x0200ED90\n\
DAT_0801e804:\n\
     .4byte 0x0200ED20\n\
DAT_0801e808:\n\
     .4byte 0x0200ED30\n\
DAT_0801e80c:\n\
     .4byte 0x0200EE00\n\
DAT_0801e810:\n\
     .4byte 0x08786973\n\
DAT_0801e814:\n\
     .4byte 0x08786975\n\
DAT_0801e818:\n\
     .4byte 0x0200EDD4\n\
LAB_0801e81c:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     blt        LAB_0801e824\n\
     b          LAB_0801ecc4\n\
LAB_0801e824:\n\
     ldr        r0,DAT_0801e86c\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xc0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e870\n\
     add        r0,r9\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e874\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x18\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,DAT_0801e878\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801e87c\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x5\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldrb       r3,[r7,#0x0]\n\
     and        r1,r3\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     b          LAB_0801ecae\n\
DAT_0801e86c:\n\
     .4byte 0x0200ED90\n\
DAT_0801e870:\n\
     .4byte 0x08786973\n\
DAT_0801e874:\n\
     .4byte 0x08786975\n\
DAT_0801e878:\n\
     .4byte 0x0200EE34\n\
DAT_0801e87c:\n\
     .4byte 0x0000FDFF\n\
LAB_0801e880:\n\
     ldrb       r2,[r7,#0x2]\n\
     lsl        r0,r2,#0x1d\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     bne        LAB_0801e88c\n\
     b          LAB_0801ea98\n\
LAB_0801e88c:\n\
     lsl        r0,r1,#0x18\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801e8f4\n\
     ldr        r4,DAT_0801e8e8\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x0]\n\
     ldr        r0,DAT_0801e8ec\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2d\n\
     strh       r0,[r2,#0x4]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r3,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e8f0\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x7f\n\
     ldrb       r1,[r7,#0x0]\n\
     and        r0,r1\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x0]\n\
     b          LAB_0801ec54\n\
.space 1\n\
.space 1\n\
DAT_0801e8e8:\n\
     .4byte 0x0200ED90\n\
DAT_0801e8ec:\n\
     .4byte 0x0200EE34\n\
DAT_0801e8f0:\n\
     .4byte 0x0000FDFF\n\
LAB_0801e8f4:\n\
     lsl        r0,r1,#0x19\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e928\n\
     ldr        r4,DAT_0801e924\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x14\n\
     b          LAB_0801eb38\n\
.space 1\n\
.space 1\n\
DAT_0801e924:\n\
     .4byte 0x0200ED90\n\
LAB_0801e928:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e97c\n\
     ldr        r4,DAT_0801e970\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xe8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r2,DAT_0801e974\n\
     ldr        r0,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e978\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x4\n\
     b          LAB_0801e9c0\n\
DAT_0801e970:\n\
     .4byte 0x0200ED90\n\
DAT_0801e974:\n\
     .4byte 0x0200EDE0\n\
DAT_0801e978:\n\
     .4byte 0x0200ED84\n\
LAB_0801e97c:\n\
     lsl        r0,r1,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801e9d8\n\
     ldr        r4,DAT_0801e9c8\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xd0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e9cc\n\
     ldr        r0,[r0,#0x4]\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801e9d0\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x5\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801e9d4\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x8\n\
LAB_0801e9c0:\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     b          LAB_0801ecc4\n\
.space 1\n\
.space 1\n\
DAT_0801e9c8:\n\
     .4byte 0x0200ED90\n\
DAT_0801e9cc:\n\
     .4byte 0x0200EDE0\n\
DAT_0801e9d0:\n\
     .4byte 0x08786975\n\
DAT_0801e9d4:\n\
     .4byte 0x0200ED84\n\
LAB_0801e9d8:\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     blt        LAB_0801e9e0\n\
     b          LAB_0801ecc4\n\
LAB_0801e9e0:\n\
     ldr        r4,DAT_0801ea78\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xc8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r5,#0x1\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r6,DAT_0801ea7c\n\
     ldr        r0,[r6,#0x4]\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801ea80\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801ea84\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801ea88\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r2,#0x5\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r1,r2,#0x0\n\
     ldrb       r0,[r7,#0x0]\n\
     and        r1,r0\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     sub        r0,#0x7\n\
     ldrb       r3,[r7,#0x1]\n\
     and        r0,r3\n\
     strb       r0,[r7,#0x1]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     sub        r0,#0xe\n\
     and        r1,r0\n\
     strb       r1,[r7,#0x0]\n\
     ldrb       r0,[r7,#0x2]\n\
     and        r2,r0\n\
     mov        r0,#0x10\n\
     orr        r2,r0\n\
     strb       r2,[r7,#0x2]\n\
     ldr        r2,DAT_0801ea8c\n\
     ldr        r0,DAT_0801ea90\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0x25\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_0801ea94\n\
     mov        r0,#0x2d\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r6,#0x4]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_0801ecc4\n\
.space 1\n\
.space 1\n\
DAT_0801ea78:\n\
     .4byte 0x0200ED90\n\
DAT_0801ea7c:\n\
     .4byte 0x0200EDE0\n\
DAT_0801ea80:\n\
     .4byte 0x08786975\n\
DAT_0801ea84:\n\
     .4byte 0x0200EE34\n\
DAT_0801ea88:\n\
     .4byte 0x0000FDFF\n\
DAT_0801ea8c:\n\
     .4byte 0x0200EDD4\n\
DAT_0801ea90:\n\
     .4byte 0x0200EE60\n\
DAT_0801ea94:\n\
     .4byte 0x0200EE08\n\
LAB_0801ea98:\n\
     lsl        r0,r1,#0x18\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801eb08\n\
     ldr        r4,DAT_0801eaf8\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801eafc\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0x37\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801eb00\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r1,DAT_0801eb04\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x7f\n\
     ldrb       r1,[r7,#0x0]\n\
     and        r0,r1\n\
LAB_0801eaf0:\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x0]\n\
     b          LAB_0801ecc4\n\
DAT_0801eaf8:\n\
     .4byte 0x0200ED90\n\
DAT_0801eafc:\n\
     .4byte 0x0200EE34\n\
DAT_0801eb00:\n\
     .4byte 0x0000FDFF\n\
DAT_0801eb04:\n\
     .4byte 0x0200ED84\n\
LAB_0801eb08:\n\
     lsl        r0,r1,#0x19\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801eb60\n\
     ldr        r4,DAT_0801eb54\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801eb58\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0xa\n\
LAB_0801eb38:\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801eb5c\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x0]\n\
     and        r0,r2\n\
     strb       r0,[r7,#0x0]\n\
     mov        r0,#0x2\n\
     ldrb       r3,[r7,#0x1]\n\
     orr        r0,r3\n\
     strb       r0,[r7,#0x1]\n\
     b          LAB_0801ecc4\n\
DAT_0801eb54:\n\
     .4byte 0x0200ED90\n\
DAT_0801eb58:\n\
     .4byte 0x08786972\n\
DAT_0801eb5c:\n\
     .4byte 0x0200ED84\n\
LAB_0801eb60:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801ebb8\n\
     ldr        r4,DAT_0801ebac\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xe8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x4\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801ebb0\n\
     mov        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801ebb4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801ecc4\n\
DAT_0801ebac:\n\
     .4byte 0x0200ED90\n\
DAT_0801ebb0:\n\
     .4byte 0x0200ED84\n\
DAT_0801ebb4:\n\
     .4byte 0x0200EDEC\n\
LAB_0801ebb8:\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801ec14\n\
     ldr        r4,DAT_0801ec08\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xd8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801ec0c\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x8\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801ec10\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2c\n\
     bl         fun_080016f0\n\
     b          LAB_0801ecc4\n\
DAT_0801ec08:\n\
     .4byte 0x0200ED90\n\
DAT_0801ec0c:\n\
     .4byte 0x08786975\n\
DAT_0801ec10:\n\
     .4byte 0x0200ED84\n\
LAB_0801ec14:\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801ec68\n\
     ldr        r4,DAT_0801ec5c\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xd0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801ec60\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x23\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r3,[r7,#0x1]\n\
     and        r0,r3\n\
LAB_0801ec4e:\n\
     mov        r1,#0x10\n\
LAB_0801ec50:\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
LAB_0801ec54:\n\
     ldr        r1,DAT_0801ec64\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801ecc4\n\
DAT_0801ec5c:\n\
     .4byte 0x0200ED90\n\
DAT_0801ec60:\n\
     .4byte 0x08786975\n\
DAT_0801ec64:\n\
     .4byte 0x0200ED84\n\
LAB_0801ec68:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801ecc4\n\
     ldr        r4,DAT_0801ecd0\n\
     ldr        r0,[r4,#0x18]\n\
     mov        r1,#0xc8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldr        r0,DAT_0801ecd4\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x28\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801ecd8\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801ecdc\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x2\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldrb       r3,[r7,#0x0]\n\
     and        r1,r3\n\
LAB_0801ecae:\n\
     mov        r2,#0x11\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     ldrb       r3,[r7,#0x1]\n\
     and        r0,r3\n\
     strb       r0,[r7,#0x1]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     and        r1,r2\n\
     strb       r1,[r7,#0x0]\n\
LAB_0801ecc4:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801ecd0:\n\
     .4byte 0x0200ED90\n\
DAT_0801ecd4:\n\
     .4byte 0x08786975\n\
DAT_0801ecd8:\n\
     .4byte 0x0200EE34\n\
DAT_0801ecdc:\n\
     .4byte 0x0000FDFF\n\
    ");
}
__attribute__((naked)) void fun_0801ece0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r8,r0\n\
     mov        r9,r8\n\
     mov        r4,#0x5\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801ecf8\n\
     mov        r4,#0x1\n\
LAB_0801ecf8:\n\
     ldr        r7,DAT_0801ed68\n\
     ldrb       r1,[r7,#0x0]\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     bne        LAB_0801ed06\n\
     b          LAB_0801ef78\n\
LAB_0801ed06:\n\
     lsr        r5,r1,#0x7\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801ed7c\n\
     ldr        r0,DAT_0801ed6c\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x0]\n\
     ldr        r0,DAT_0801ed70\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2d\n\
     strh       r0,[r2,#0x4]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801ed74\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_0801ed78\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x7f\n\
     ldrb       r1,[r7,#0x0]\n\
     and        r0,r1\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     b          LAB_0801f198\n\
DAT_0801ed68:\n\
     .4byte 0x0200EE50\n\
DAT_0801ed6c:\n\
     .4byte 0x0200ED90\n\
DAT_0801ed70:\n\
     .4byte 0x0200EE34\n\
DAT_0801ed74:\n\
     .4byte 0x0000FDFF\n\
DAT_0801ed78:\n\
     .4byte 0x0200ED84\n\
LAB_0801ed7c:\n\
     lsl        r0,r1,#0x19\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801edb4\n\
     ldr        r0,DAT_0801edb0\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xf8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x14\n\
     b          LAB_0801f018\n\
DAT_0801edb0:\n\
     .4byte 0x0200ED90\n\
LAB_0801edb4:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801ee0c\n\
     ldr        r0,DAT_0801ee00\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801ee04\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x5\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801ee08\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x4\n\
     b          LAB_0801f02e\n\
DAT_0801ee00:\n\
     .4byte 0x0200ED90\n\
DAT_0801ee04:\n\
     .4byte 0x08786972\n\
DAT_0801ee08:\n\
     .4byte 0x0200ED84\n\
LAB_0801ee0c:\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801ee5c\n\
     ldr        r0,DAT_0801ee50\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xe8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801ee54\n\
     add        r0,r8\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801ee58\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x8\n\
     b          LAB_0801f128\n\
.space 1\n\
.space 1\n\
DAT_0801ee50:\n\
     .4byte 0x0200ED90\n\
DAT_0801ee54:\n\
     .4byte 0x08786970\n\
DAT_0801ee58:\n\
     .4byte 0x08786972\n\
LAB_0801ee5c:\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801eefc\n\
     ldr        r1,DAT_0801eedc\n\
     lsl        r0,r4,#0x2\n\
     add        r4,r0,r1\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801eee0\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r1,[r1,#0xa]\n\
     ldrh       r0,[r2,#0xa]\n\
     cmp        r1,r0\n\
     bne        LAB_0801ee8e\n\
     ldr        r1,DAT_0801eee4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801eee8\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x63\n\
     strh       r0,[r2,#0xa]\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
LAB_0801ee8e:\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xe0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801eeec\n\
     add        r0,r8\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801eef0\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,DAT_0801eef4\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x5\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x10\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801eef8\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0xc\n\
     bl         fun_080016f0\n\
     b          LAB_0801f19a\n\
DAT_0801eedc:\n\
     .4byte 0x0200ED90\n\
DAT_0801eee0:\n\
     .4byte 0x0200ED20\n\
DAT_0801eee4:\n\
     .4byte 0x0200ED30\n\
DAT_0801eee8:\n\
     .4byte 0x0200EE00\n\
DAT_0801eeec:\n\
     .4byte 0x08786970\n\
DAT_0801eef0:\n\
     .4byte 0x08786972\n\
DAT_0801eef4:\n\
     .4byte 0x0200EDD4\n\
DAT_0801eef8:\n\
     .4byte 0x0200ED84\n\
LAB_0801eefc:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     blt        LAB_0801ef04\n\
     b          LAB_0801f19a\n\
LAB_0801ef04:\n\
     ldr        r0,DAT_0801ef64\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xd8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801ef68\n\
     add        r0,r9\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0801ef6c\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x19\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_0801ef70\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801ef74\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x2\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldrb       r0,[r7,#0x0]\n\
     and        r1,r0\n\
     mov        r0,#0x11\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     strb       r0,[r7,#0x1]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     sub        r0,#0x1e\n\
     and        r1,r0\n\
     add        r0,#0x1c\n\
     and        r1,r0\n\
     strb       r1,[r7,#0x0]\n\
     b          LAB_0801f19a\n\
DAT_0801ef64:\n\
     .4byte 0x0200ED90\n\
DAT_0801ef68:\n\
     .4byte 0x08786970\n\
DAT_0801ef6c:\n\
     .4byte 0x08786972\n\
DAT_0801ef70:\n\
     .4byte 0x0200EE34\n\
DAT_0801ef74:\n\
     .4byte 0x0000FDFF\n\
LAB_0801ef78:\n\
     lsl        r0,r1,#0x18\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801efe8\n\
     ldr        r4,DAT_0801efd8\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x10]\n\
     ldr        r0,DAT_0801efdc\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x37\n\
     strh       r0,[r2,#0x4]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0801efe0\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_0801efe4\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x7f\n\
     ldrb       r1,[r7,#0x0]\n\
     and        r0,r1\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     b          LAB_0801f198\n\
.space 1\n\
.space 1\n\
DAT_0801efd8:\n\
     .4byte 0x0200ED90\n\
DAT_0801efdc:\n\
     .4byte 0x0200EE34\n\
DAT_0801efe0:\n\
     .4byte 0x0000FDFF\n\
DAT_0801efe4:\n\
     .4byte 0x0200ED84\n\
LAB_0801efe8:\n\
     lsl        r0,r1,#0x19\n\
     lsr        r0,r0,#0x1f\n\
     mov        r8,r0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801f040\n\
     ldr        r4,DAT_0801f034\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0xf8\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0801f038\n\
     ldrb       r0,[r0,#0x0]\n\
LAB_0801f018:\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801f03c\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x0]\n\
     and        r0,r2\n\
     strb       r0,[r7,#0x0]\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r7,#0x1]\n\
LAB_0801f02e:\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     b          LAB_0801f19a\n\
DAT_0801f034:\n\
     .4byte 0x0200ED90\n\
DAT_0801f038:\n\
     .4byte 0x08786972\n\
DAT_0801f03c:\n\
     .4byte 0x0200ED84\n\
LAB_0801f040:\n\
     ldrb       r1,[r7,#0x1]\n\
     lsl        r0,r1,#0x1e\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801f0a4\n\
     ldr        r4,DAT_0801f094\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0xf0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0801f098\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     sub        r0,#0x4\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x4\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801f09c\n\
     mov        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801f0a0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2c\n\
     bl         fun_080016f0\n\
     b          LAB_0801f19a\n\
.space 1\n\
.space 1\n\
DAT_0801f094:\n\
     .4byte 0x0200ED90\n\
DAT_0801f098:\n\
     .4byte 0x08786972\n\
DAT_0801f09c:\n\
     .4byte 0x0200ED84\n\
DAT_0801f0a0:\n\
     .4byte 0x0200EDEC\n\
LAB_0801f0a4:\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r6,r0,#0x1f\n\
     cmp        r6,#0x0\n\
     beq        LAB_0801f0ec\n\
     ldr        r4,DAT_0801f0e4\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0xe8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0801f0e8\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1e\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     mov        r1,#0x8\n\
     b          LAB_0801f128\n\
.space 1\n\
.space 1\n\
DAT_0801f0e4:\n\
     .4byte 0x0200ED90\n\
DAT_0801f0e8:\n\
     .4byte 0x08786972\n\
LAB_0801f0ec:\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r5,r0,#0x1f\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801f140\n\
     ldr        r4,DAT_0801f134\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0xe0\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0801f138\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x28\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     sub        r0,#0xa\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     mov        r1,#0x10\n\
LAB_0801f128:\n\
     orr        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     ldr        r1,DAT_0801f13c\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0801f19a\n\
DAT_0801f134:\n\
     .4byte 0x0200ED90\n\
DAT_0801f138:\n\
     .4byte 0x08786972\n\
DAT_0801f13c:\n\
     .4byte 0x0200ED84\n\
LAB_0801f140:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801f19a\n\
     ldr        r4,DAT_0801f1a8\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0xd8\n\
     bl         fun_080047d0\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r2,#0x2\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0801f1ac\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x2a\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r2,[r0,#0x10]\n\
     ldr        r0,DAT_0801f1b0\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801f1b4\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x11\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     strb       r0,[r7,#0x1]\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r7,#0x0]\n\
     and        r0,r2\n\
     mov        r1,#0x21\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     add        r1,#0x1f\n\
     and        r0,r1\n\
LAB_0801f198:\n\
     strb       r0,[r7,#0x0]\n\
LAB_0801f19a:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801f1a8:\n\
     .4byte 0x0200ED90\n\
DAT_0801f1ac:\n\
     .4byte 0x08786972\n\
DAT_0801f1b0:\n\
     .4byte 0x0200EE34\n\
DAT_0801f1b4:\n\
     .4byte 0x0000FDFF\n\
    ");
}
__attribute__((naked)) void fun_0801f1b8()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0xc\n\
     ldr        r1,DAT_0801f23c\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801f1fc\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801f240\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r4,r0,#0x1\n\
     str        r4,[r1,#0x0]\n\
     cmp        r4,#0x0\n\
     bne        LAB_0801f1fc\n\
     ldr        r0,DAT_0801f244\n\
     mov        r2,#0x82\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r2,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r5,DAT_0801f248\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801f1f6\n\
     ldr        r0,DAT_0801f24c\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     strh       r4,[r5,#0x0]\n\
LAB_0801f1f6:\n\
     mov        r0,#0x11\n\
     bl         fun_080016f0\n\
LAB_0801f1fc:\n\
     ldr        r0,DAT_0801f240\n\
     ldr        r4,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x3c\n\
     bl         fun_080436a0\n\
     add        r2,r0,#0x0\n\
     lsl        r2,r2,#0x18\n\
     lsr        r2,r2,#0x18\n\
     lsl        r0,r2,#0x4\n\
     sub        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     sub        r4,r4,r0\n\
     lsl        r4,r4,#0x18\n\
     lsr        r4,r4,#0x18\n\
     ldr        r1,DAT_0801f250\n\
     mov        r0,sp\n\
     add        r3,r4,#0x0\n\
     bl         fun_080455fc\n\
     bl         fun_0803c1a4\n\
     ldr        r3,DAT_0801f254\n\
     mov        r0,sp\n\
     mov        r1,#0x3\n\
     mov        r2,#0x3\n\
     bl         fun_0803c138\n\
     add        sp,#0xc\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801f23c:\n\
     .4byte 0x0200ED40\n\
DAT_0801f240:\n\
     .4byte 0x0200EE2C\n\
DAT_0801f244:\n\
     .4byte 0x0200EDF0\n\
DAT_0801f248:\n\
     .4byte 0x0200ED8C\n\
DAT_0801f24c:\n\
     .4byte 0x0200EDB8\n\
DAT_0801f250:\n\
     .4byte 0x084C6E94\n\
DAT_0801f254:\n\
     .4byte 0x0865FB7C\n\
    ");
}
__attribute__((naked)) void fun_0801f258()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,DAT_0801f28c\n\
     ldr        r1,DAT_0801f290\n\
     str        r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801f2a8\n\
     ldr        r1,DAT_0801f294\n\
     ldr        r0,DAT_0801f298\n\
     str        r0,[r1,#0x0]\n\
     ldr        r3,DAT_0801f29c\n\
     ldr        r2,[r3,#0x0]\n\
     ldr        r0,DAT_0801f2a0\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r1,DAT_0801f2a4\n\
     mov        r0,#0x20\n\
     ldrb       r4,[r1,#0x1]\n\
     orr        r0,r4\n\
     strb       r0,[r1,#0x1]\n\
     mov        r0,#0x40\n\
     ldrh       r1,[r2,#0x12]\n\
     orr        r0,r1\n\
     b          LAB_0801f2ca\n\
.space 1\n\
.space 1\n\
DAT_0801f28c:\n\
     .4byte 0x0200ED28\n\
DAT_0801f290:\n\
     .4byte 0x3E800000\n\
DAT_0801f294:\n\
     .4byte 0x0200EE24\n\
DAT_0801f298:\n\
     .4byte 0xC2200000\n\
DAT_0801f29c:\n\
     .4byte 0x0200EDB0\n\
DAT_0801f2a0:\n\
     .4byte 0x0000FFD8\n\
DAT_0801f2a4:\n\
     .4byte 0x0200EE50\n\
LAB_0801f2a8:\n\
     ldr        r1,DAT_0801f2dc\n\
     ldr        r0,DAT_0801f2e0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r3,DAT_0801f2e4\n\
     ldr        r2,[r3,#0x0]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r1,DAT_0801f2e8\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r4,[r1,#0x1]\n\
     and        r0,r4\n\
     strb       r0,[r1,#0x1]\n\
     ldr        r0,DAT_0801f2ec\n\
     ldrh       r1,[r2,#0x12]\n\
     and        r0,r1\n\
LAB_0801f2ca:\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r0,DAT_0801f2f0\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801f2dc:\n\
     .4byte 0x0200EE24\n\
DAT_0801f2e0:\n\
     .4byte 0x43880000\n\
DAT_0801f2e4:\n\
     .4byte 0x0200EDB0\n\
DAT_0801f2e8:\n\
     .4byte 0x0200EE50\n\
DAT_0801f2ec:\n\
     .4byte 0x0000FFBF\n\
DAT_0801f2f0:\n\
     .4byte 0x0000FDFF\n\
    ");
}
__attribute__((naked)) void fun_0801f2f4()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801f32c\n\
     ldr        r1,DAT_0801f31c\n\
     mov        r2,#0x28\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801f320\n\
     ldr        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0801f324\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,DAT_0801f328\n\
     mov        r0,#0x40\n\
     ldrb       r3,[r1,#0x1]\n\
     orr        r0,r3\n\
     b          LAB_0801f34a\n\
DAT_0801f31c:\n\
     .4byte 0x0200ED7C\n\
DAT_0801f320:\n\
     .4byte 0x0200EDE0\n\
DAT_0801f324:\n\
     .4byte 0x0000FFD8\n\
DAT_0801f328:\n\
     .4byte 0x0200EE50\n\
LAB_0801f32c:\n\
     ldr        r1,DAT_0801f380\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801f384\n\
     ldr        r1,[r2,#0x4]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,DAT_0801f388\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r3,[r1,#0x1]\n\
     and        r0,r3\n\
LAB_0801f34a:\n\
     strb       r0,[r1,#0x1]\n\
     add        r4,r2,#0x0\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r1,#0xdc\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r2,#0x0\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r2,[r0,#0x10]\n\
     ldr        r1,DAT_0801f38c\n\
     mov        r0,#0xb4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801f390\n\
     ldr        r0,DAT_0801f394\n\
     str        r0,[r1,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801f380:\n\
     .4byte 0x0200ED7C\n\
DAT_0801f384:\n\
     .4byte 0x0200EDE0\n\
DAT_0801f388:\n\
     .4byte 0x0200EE50\n\
DAT_0801f38c:\n\
     .4byte 0x0200ED88\n\
DAT_0801f390:\n\
     .4byte 0x0200ED80\n\
DAT_0801f394:\n\
     .4byte 0x3F800000\n\
    ");
}
__attribute__((naked)) void fun_0801f398()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x8\n\
     ldr        r0,DAT_0801f518\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     cmp        r1,#0x0\n\
     bgt        LAB_0801f3a8\n\
     b          LAB_0801f510\n\
LAB_0801f3a8:\n\
     mov        r0,#0x82\n\
     lsl        r0,r0,#0x1\n\
     cmp        r1,r0\n\
     bne        LAB_0801f42c\n\
     mov        r3,#0x0\n\
     mov        r2,#0x0\n\
     ldr        r5,DAT_0801f51c\n\
     mov        r4,#0x0\n\
LAB_0801f3b8:\n\
     lsl        r0,r2,#0x2\n\
     add        r1,r0,r5\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0801f3c8\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
LAB_0801f3c8:\n\
     strb       r4,[r1,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x4\n\
     bls        LAB_0801f3b8\n\
     cmp        r3,#0x5\n\
     bne        LAB_0801f3f2\n\
     ldr        r2,DAT_0801f520\n\
     ldr        r1,DAT_0801f524\n\
     mov        r0,#0x64\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0x64\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801f528\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x7\n\
     bl         fun_080016f0\n\
LAB_0801f3f2:\n\
     bl         fun_0803c1a4\n\
     mov        r0,#0xf\n\
     mov        r1,#0xf\n\
     mov        r2,#0xf\n\
     bl         fun_0803c1ec\n\
     ldr        r1,DAT_0801f52c\n\
     ldr        r0,DAT_0801f530\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801f534\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_0801f538\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
     ldr        r4,DAT_0801f53c\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801f42c\n\
     ldr        r0,DAT_0801f540\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0801f42c:\n\
     ldr        r0,DAT_0801f544\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801f492\n\
     ldr        r0,DAT_0801f548\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801f492\n\
     ldr        r1,DAT_0801f518\n\
     mov        r0,#0x82\n\
     lsl        r0,r0,#0x1\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801f492\n\
     ldr        r1,DAT_0801f520\n\
     ldr        r5,DAT_0801f524\n\
     mov        r0,#0xc8\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xc8\n\
     str        r0,[r1,#0x0]\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_0801f52c\n\
     ldr        r0,DAT_0801f530\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801f54c\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r4,DAT_0801f538\n\
     mov        r1,#0x19\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r1,DAT_0801f550\n\
     mov        r0,#0x0\n\
     ldrsh      r2,[r5,r0]\n\
     mov        r0,sp\n\
     bl         fun_080455fc\n\
     mov        r0,sp\n\
     mov        r1,#0x25\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r1,DAT_0801f554\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801f492:\n\
     ldr        r0,DAT_0801f554\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801f4de\n\
     ldr        r0,DAT_0801f518\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x81\n\
     bgt        LAB_0801f4de\n\
     bl         fun_0803c1a4\n\
     mov        r0,#0xf\n\
     mov        r1,#0xf\n\
     mov        r2,#0xf\n\
     bl         fun_0803c1ec\n\
     ldr        r1,DAT_0801f52c\n\
     ldr        r0,DAT_0801f530\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801f534\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_0801f538\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
     ldr        r4,DAT_0801f53c\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801f4de\n\
     ldr        r0,DAT_0801f540\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0801f4de:\n\
     ldr        r1,DAT_0801f518\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r3,r0,#0x10\n\
     cmp        r3,#0x0\n\
     bne        LAB_0801f510\n\
     ldr        r0,DAT_0801f558\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0801f520\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801f55c\n\
     cmp        r0,r2\n\
     ble        LAB_0801f500\n\
     str        r2,[r1,#0x0]\n\
LAB_0801f500:\n\
     ldr        r0,DAT_0801f560\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0801f564\n\
     str        r3,[r0,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_0801f510:\n\
     add        sp,#0x8\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801f518:\n\
     .4byte 0x0200EDF0\n\
DAT_0801f51c:\n\
     .4byte 0x0200EDC0\n\
DAT_0801f520:\n\
     .4byte 0x0200EDD4\n\
DAT_0801f524:\n\
     .4byte 0x0200ED48\n\
DAT_0801f528:\n\
     .4byte 0x0200ED34\n\
DAT_0801f52c:\n\
     .4byte 0x08669620\n\
DAT_0801f530:\n\
     .4byte 0x020025B4\n\
DAT_0801f534:\n\
     .4byte 0x0000C124\n\
DAT_0801f538:\n\
     .4byte 0x0865FD94\n\
DAT_0801f53c:\n\
     .4byte 0x0200EE28\n\
DAT_0801f540:\n\
     .4byte 0x0200ED50\n\
DAT_0801f544:\n\
     .4byte 0x0200EDFC\n\
DAT_0801f548:\n\
     .4byte 0x0200EDEC\n\
DAT_0801f54c:\n\
     .4byte 0x0000C154\n\
DAT_0801f550:\n\
     .4byte 0x084C6EA4\n\
DAT_0801f554:\n\
     .4byte 0x0200EE04\n\
DAT_0801f558:\n\
     .4byte 0x020025B8\n\
DAT_0801f55c:\n\
     .4byte 0x000003E7\n\
DAT_0801f560:\n\
     .4byte 0x020025FC\n\
DAT_0801f564:\n\
     .4byte 0x02002558\n\
    ");
}
__attribute__((naked)) void fun_0801f568()
{
    asm("\n\
     push       {r4,lr}\n\
     bl         fun_0800457c\n\
     ldr        r4,DAT_0801f58c\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801f582\n\
     ldr        r0,DAT_0801f590\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0801f582:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0801f58c:\n\
     .4byte 0x0200EE28\n\
DAT_0801f590:\n\
     .4byte 0x0200ED50\n\
    ");
}
__attribute__((naked)) void fun_0801f594()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801f598()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801f59c()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0xc\n\
     ldr        r1,DAT_0801f5c0\n\
     ldr        r0,DAT_0801f5c4\n\
     ldrb       r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         fun_080455fc\n\
     ldr        r3,DAT_0801f5c8\n\
     mov        r0,sp\n\
     mov        r1,#0xbc\n\
     mov        r2,#0x3\n\
     bl         fun_0803c138\n\
     add        sp,#0xc\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801f5c0:\n\
     .4byte 0x084C6EA0\n\
DAT_0801f5c4:\n\
     .4byte 0x0200EDFC\n\
DAT_0801f5c8:\n\
     .4byte 0x0865FB7C\n\
    ");
}
