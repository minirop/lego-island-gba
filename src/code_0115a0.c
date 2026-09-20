__attribute__((naked)) void fun_080115a0()
{
    asm("\n\
     ldr        r2,DAT_080115bc\n\
     mov        r3,#0xae\n\
     lsl        r3,r3,#0x2\n\
     add        r1,r2,r3\n\
     mov        r3,#0x1\n\
     strb       r3,[r1,#0x0]\n\
     mov        r1,#0xaa\n\
     lsl        r1,r1,#0x2\n\
     add        r2,r2,r1\n\
     mov        r1,#0x2\n\
     str        r1,[r2,#0x0]\n\
     strb       r3,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_080115bc:\n\
     .word 0x020006A0\n\
    ");
}
__attribute__((naked)) void fun_080115c0()
{
    asm("\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080115c4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x10\n\
     ldr        r1,DAT_080115f4\n\
     mov        r0,sp\n\
     mov        r2,#0xe\n\
     bl         memcpy\n\
     mov        r4,#0x0\n\
     mov        r5,#0x1\n\
LAB_080115d6:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_080034c0\n\
     strh       r5,[r0,#0x4]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x6\n\
     bls        LAB_080115d6\n\
     add        sp,#0x10\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080115f4:\n\
     .word 0x0844D968\n\
    ");
}
__attribute__((naked)) void fun_080115f8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r7,r0,#0x0\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801165c\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_08011660\n\
     mov        r8,r2\n\
     add        r0,r8\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011678\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08011660\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08011664\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r1\n\
     bne        LAB_08011678\n\
     ldr        r0,DAT_08011668\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_0801166c\n\
     ldr        r2,DAT_08011670\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     bl         fun_080020a4\n\
     add        r0,r8\n\
     ldr        r1,DAT_08011674\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_0801169e\n\
.space 1\n\
.space 1\n\
DAT_0801165c:\n\
     .word 0x00000DFA\n\
DAT_08011660:\n\
     .word 0x00000DFC\n\
DAT_08011664:\n\
     .word 0x00000ADF\n\
DAT_08011668:\n\
     .word 0x0200DCA0\n\
DAT_0801166c:\n\
     .word 0x0200DC90\n\
DAT_08011670:\n\
     .word 0x00000693\n\
DAT_08011674:\n\
     .word 0x00000A9A\n\
LAB_08011678:\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080116a8\n\
     add        r0,r0,r1\n\
     ldrh       r5,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r5,r0\n\
     bne        LAB_0801169e\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_080116ac\n\
     add        r0,r0,r2\n\
     ldrh       r6,[r6,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r6,r0\n\
     bne        LAB_0801169e\n\
     mov        r0,#0x1\n\
     str        r0,[r7,#0x8]\n\
     strb       r0,[r7,#0x18]\n\
LAB_0801169e:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080116a8:\n\
     .word 0x00000DFA\n\
DAT_080116ac:\n\
     .word 0x00000DFC\n\
    ");
}
__attribute__((naked)) void fun_080116b0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080116b8()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080116c4\n\
     bl         fun_0800ebb4\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080116c4:\n\
     .word 0x00000505\n\
    ");
}
__attribute__((naked)) void fun_080116c8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080116d0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080116ec\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xa\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080116f4\n\
     ldr        r1,DAT_080116f0\n\
     b          LAB_080116f6\n\
DAT_080116ec:\n\
     .word 0x00000E84\n\
DAT_080116f0:\n\
     .word 0x00000502\n\
LAB_080116f4:\n\
     ldr        r1,DAT_0801170c\n\
LAB_080116f6:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011706\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
LAB_08011706:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801170c:\n\
     .word 0x0000031D\n\
    ");
}
__attribute__((naked)) void fun_08011710()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_08011740\n\
     ldr        r2,DAT_08011744\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08011748\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801174c\n\
     ldr        r2,DAT_08011750\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_08011754\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08011740:\n\
     .word 0x0200E030\n\
DAT_08011744:\n\
     .word 0x020006A0\n\
DAT_08011748:\n\
     .word 0x0200DD70\n\
DAT_0801174c:\n\
     .word 0x020025E8\n\
DAT_08011750:\n\
     .word 0x00000285\n\
DAT_08011754:\n\
     .word 0x02002520\n\
    ");
}
__attribute__((naked)) void fun_08011758()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08011760()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x16\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08011780\n\
     ldr        r1,DAT_0801177c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08011788\n\
.space 1\n\
.space 1\n\
DAT_0801177c:\n\
     .word 0x00000305\n\
LAB_08011780:\n\
     ldr        r1,DAT_08011790\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_08011788:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08011790:\n\
     .word 0x000002FF\n\
    ");
}
__attribute__((naked)) void fun_08011794()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801179c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080117b4\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080117b0\n\
     ldr        r1,DAT_080117b8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_080117b0:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080117b4:\n\
     .word 0x00000325\n\
DAT_080117b8:\n\
     .word 0x0200DC54\n\
    ");
}
__attribute__((naked)) void fun_080117bc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 2\n\
    ");
}
