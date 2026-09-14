__attribute__((naked)) void fun_080171fc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     mov        r1,#0xf\n\
     mov        r10,r1\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1f\n\
     mov        r9,r2\n\
     mov        r7,#0x3f\n\
LAB_08017216:\n\
     mov        r4,#0x0\n\
     mov        r2,r10\n\
     add        r0,r2,r1\n\
     add        r6,r1,#0x1\n\
     mov        r1,r9\n\
     and        r0,r1\n\
     lsl        r5,r0,#0x10\n\
LAB_08017224:\n\
     mov        r2,r8\n\
     add        r0,r2,r4\n\
     and        r0,r7\n\
     lsr        r1,r5,#0x10\n\
     mov        r2,#0x0\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
     add        r4,#0x1\n\
     cmp        r4,#0x1d\n\
     bls        LAB_08017224\n\
     add        r1,r6,#0x0\n\
     cmp        r1,#0x4\n\
     bls        LAB_08017216\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08017250()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r4,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r6,r2,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_0801727e\n\
     ldr        r0,DAT_08017298\n\
     cmp        r2,r0\n\
     beq        LAB_08017284\n\
     mov        r0,#0xe0\n\
     lsl        r0,r0,#0x7\n\
     add        r2,r2,r0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
LAB_0801727e:\n\
     ldr        r0,DAT_08017298\n\
     cmp        r6,r0\n\
     bne        LAB_08017290\n\
LAB_08017284:\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     mov        r2,#0x0\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
LAB_08017290:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08017298:\n\
     .4byte 0x0000EA60\n\
    ");
}
__attribute__((naked)) void fun_0801729c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0xc\n\
     add        r2,sp,#0x8\n\
     mov        r4,#0x0\n\
     strh       r4,[r2,#0x0]\n\
     ldr        r0,DAT_08017344\n\
     str        r2,[r0,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     str        r1,[r0,#0x4]\n\
     ldr        r1,DAT_08017348\n\
     str        r1,[r0,#0x8]\n\
     ldr        r1,[r0,#0x8]\n\
     strh       r4,[r2,#0x0]\n\
     str        r2,[r0,#0x0]\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x13\n\
     str        r1,[r0,#0x4]\n\
     ldr        r1,DAT_0801734c\n\
     str        r1,[r0,#0x8]\n\
     ldr        r0,[r0,#0x8]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     ldr        r2,DAT_08017350\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08017354\n\
     bl         fun_080045f0\n\
     ldr        r2,DAT_08017358\n\
     ldr        r1,DAT_0801735c\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803c1ec\n\
     bl         fun_0803dd5c\n\
     mov        r0,#0x0\n\
     bl         fun_08002f58\n\
     ldr        r0,PTR_DAT_08017360\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08017364\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08017368\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801736c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08017370\n\
     mov        r3,#0x96\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08017374\n\
     mov        r0,#0x60\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0803c1a4\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     add        r2,r1,#0x0\n\
     cmp        r1,#0xf\n\
     beq        LAB_0801740a\n\
     ldr        r0,PTR_DAT_08017378\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080173ec\n\
     ldr        r0,DAT_0801737c\n\
     cmp        r1,r0\n\
     beq        LAB_080173c8\n\
     cmp        r1,r0\n\
     bgt        LAB_08017380\n\
     sub        r0,#0x11\n\
     cmp        r1,r0\n\
     beq        LAB_080173a4\n\
     add        r0,#0xf\n\
     cmp        r1,r0\n\
     beq        LAB_080173e0\n\
     b          LAB_08017404\n\
.space 1\n\
.space 1\n\
DAT_08017344:\n\
     .4byte 0x040000D4\n\
DAT_08017348:\n\
     .4byte 0x8100C000\n\
DAT_0801734c:\n\
     .4byte 0x81000200\n\
DAT_08017350:\n\
     .4byte 0x00001F44\n\
DAT_08017354:\n\
     .4byte 0x08063990\n\
DAT_08017358:\n\
     .4byte 0x00007FFF\n\
DAT_0801735c:\n\
     .4byte 0x00007CC2\n\
PTR_DAT_08017360:\n\
     .4byte       DAT_0200dcd8\n\
PTR_DAT_08017364:\n\
     .4byte       DAT_0200dcac\n\
PTR_DAT_08017368:\n\
     .4byte       DAT_0200dcc8\n\
PTR_DAT_0801736c:\n\
     .4byte       DAT_0200dcb4\n\
PTR_DAT_08017370:\n\
     .4byte       DAT_0200dcd0\n\
PTR_DAT_08017374:\n\
     .4byte       DAT_0200dcc4\n\
PTR_DAT_08017378:\n\
     .4byte       DAT_02005750\n\
DAT_0801737c:\n\
     .4byte 0x000007EB\n\
LAB_08017380:\n\
     ldr        r0,DAT_08017394\n\
     cmp        r1,r0\n\
     beq        LAB_080173d4\n\
     cmp        r1,r0\n\
     bgt        LAB_08017398\n\
     sub        r0,#0x1\n\
     cmp        r1,r0\n\
     beq        LAB_080173bc\n\
     b          LAB_08017404\n\
.space 1\n\
.space 1\n\
DAT_08017394:\n\
     .4byte 0x0000138A\n\
LAB_08017398:\n\
     ldr        r0,DAT_080173a0\n\
     cmp        r1,r0\n\
     beq        LAB_080173b0\n\
     b          LAB_08017404\n\
DAT_080173a0:\n\
     .4byte 0x0000138C\n\
LAB_080173a4:\n\
     ldr        r1,DAT_080173ac\n\
     mov        r0,#0x23\n\
     b          LAB_08017402\n\
.space 1\n\
.space 1\n\
DAT_080173ac:\n\
     .4byte 0x0200DCA8\n\
LAB_080173b0:\n\
     ldr        r1,DAT_080173b8\n\
     mov        r0,#0x21\n\
     b          LAB_08017402\n\
.space 1\n\
.space 1\n\
DAT_080173b8:\n\
     .4byte 0x0200DCA8\n\
LAB_080173bc:\n\
     ldr        r1,DAT_080173c4\n\
     mov        r0,#0x1e\n\
     b          LAB_08017402\n\
.space 1\n\
.space 1\n\
DAT_080173c4:\n\
     .4byte 0x0200DCA8\n\
LAB_080173c8:\n\
     ldr        r1,DAT_080173d0\n\
     mov        r0,#0x22\n\
     b          LAB_08017402\n\
.space 1\n\
.space 1\n\
DAT_080173d0:\n\
     .4byte 0x0200DCA8\n\
LAB_080173d4:\n\
     ldr        r1,DAT_080173dc\n\
     mov        r0,#0x1f\n\
     b          LAB_08017402\n\
.space 1\n\
.space 1\n\
DAT_080173dc:\n\
     .4byte 0x0200DCA8\n\
LAB_080173e0:\n\
     ldr        r1,DAT_080173e8\n\
     mov        r0,#0x20\n\
     b          LAB_08017402\n\
.space 1\n\
.space 1\n\
DAT_080173e8:\n\
     .4byte 0x0200DCA8\n\
LAB_080173ec:\n\
     cmp        r1,#0x19\n\
     bne        LAB_080173fc\n\
     ldr        r1,DAT_080173f8\n\
     mov        r0,#0x8\n\
     b          LAB_08017402\n\
.space 1\n\
.space 1\n\
DAT_080173f8:\n\
     .4byte 0x0200DCA8\n\
LAB_080173fc:\n\
     ldr        r1,DAT_08017490\n\
     ldr        r5,DAT_08017494\n\
     add        r0,r2,r5\n\
LAB_08017402:\n\
     strh       r0,[r1,#0x0]\n\
LAB_08017404:\n\
     ldr        r1,DAT_08017498\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801740a:\n\
     ldr        r4,DAT_0801749c\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r2,DAT_080174a0\n\
     ldr        r3,DAT_080174a4\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r5,DAT_080174a8\n\
     add        r1,r2,r5\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     ldr        r6,DAT_080174ac\n\
     ldr        r7,DAT_080174b0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801743a\n\
     add        r5,r4,#0x0\n\
LAB_0801742c:\n\
     add        r1,#0x1\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801742c\n\
LAB_0801743a:\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x3\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r3,DAT_080174b4\n\
     add        r1,r2,r3\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017466\n\
     add        r2,r6,#0x0\n\
LAB_08017458:\n\
     add        r1,#0x1\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017458\n\
LAB_08017466:\n\
     ldr        r1,DAT_080174ac\n\
     ldrh       r5,[r1,#0x0]\n\
     lsl        r0,r5,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     add        r4,r7,#0x0\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080174c0\n\
     ldr        r0,DAT_080174b8\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080174bc\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x3c\n\
     strh       r1,[r0,#0x4]\n\
     mov        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     b          LAB_080174fa\n\
.space 1\n\
.space 1\n\
DAT_08017490:\n\
     .4byte 0x0200DCA8\n\
DAT_08017494:\n\
     .4byte 0xFFFFF830\n\
DAT_08017498:\n\
     .4byte 0x0200DCD8\n\
DAT_0801749c:\n\
     .4byte 0x0200DCC0\n\
DAT_080174a0:\n\
     .4byte 0x08669620\n\
DAT_080174a4:\n\
     .4byte 0x020025B4\n\
DAT_080174a8:\n\
     .4byte 0x0000BE24\n\
DAT_080174ac:\n\
     .4byte 0x0200DCD4\n\
DAT_080174b0:\n\
     .4byte 0x0200DCCC\n\
DAT_080174b4:\n\
     .4byte 0x0000C1E4\n\
DAT_080174b8:\n\
     .4byte 0x08063710\n\
DAT_080174bc:\n\
     .4byte 0x0200DCDC\n\
LAB_080174c0:\n\
     cmp        r0,#0x1\n\
     bne        LAB_080174e4\n\
     ldr        r0,DAT_080174dc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080174e0\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x3c\n\
     strh       r1,[r0,#0x4]\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x0]\n\
     b          LAB_080174fa\n\
DAT_080174dc:\n\
     .4byte 0x08063700\n\
DAT_080174e0:\n\
     .4byte 0x0200DCB0\n\
LAB_080174e4:\n\
     ldr        r0,DAT_08017588\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0801758c\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x3c\n\
     strh       r1,[r0,#0x4]\n\
     strb       r2,[r7,#0x0]\n\
LAB_080174fa:\n\
     ldr        r1,DAT_08017590\n\
     ldr        r4,PTR_DAT_08017594\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r2,PTR_DAT_08017598\n\
     ldr        r1,PTR_DAT_0801759c\n\
     ldrh       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x3\n\
     add        r2,#0x14\n\
     add        r0,r0,r2\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r1,r0\n\
     bcc        LAB_080175d0\n\
     ldr        r0,PTR_DAT_080175a0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080175d0\n\
     ldr        r1,DAT_080175a4\n\
     ldr        r0,DAT_080175a8\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_080175ac\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r0,DAT_080175b0\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     ldr        r4,DAT_080175b4\n\
     ldr        r5,DAT_080175b8\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_080175bc\n\
     add        r1,r4,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r6,DAT_080175c0\n\
     mov        r1,#0x2d\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r3,DAT_080175c4\n\
     add        r4,r4,r3\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x55\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r2,DAT_080175c8\n\
     mov        r0,sp\n\
     mov        r1,#0x3c\n\
     bl         fun_0803c0a4\n\
     ldr        r1,DAT_080175cc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
     b          LAB_0801762e\n\
DAT_08017588:\n\
     .4byte 0x08063720\n\
DAT_0801758c:\n\
     .4byte 0x0200DCA4\n\
DAT_08017590:\n\
     .4byte 0x0846A53C\n\
PTR_DAT_08017594:\n\
     .4byte       DAT_020025fc\n\
PTR_DAT_08017598:\n\
     .4byte       DAT_02005210\n\
PTR_DAT_0801759c:\n\
     .4byte       DAT_0200dca8\n\
PTR_DAT_080175a0:\n\
     .4byte       DAT_0200dcd8\n\
DAT_080175a4:\n\
     .4byte 0x040000D4\n\
DAT_080175a8:\n\
     .4byte 0x0846A540\n\
DAT_080175ac:\n\
     .4byte 0x80000100\n\
DAT_080175b0:\n\
     .4byte 0x0846A740\n\
DAT_080175b4:\n\
     .4byte 0x08669620\n\
DAT_080175b8:\n\
     .4byte 0x020025B4\n\
DAT_080175bc:\n\
     .4byte 0x0000BD64\n\
DAT_080175c0:\n\
     .4byte 0x0865FD94\n\
DAT_080175c4:\n\
     .4byte 0x0000C094\n\
DAT_080175c8:\n\
     .4byte 0x0865FB7C\n\
DAT_080175cc:\n\
     .4byte 0x0200DCB4\n\
LAB_080175d0:\n\
     ldr        r1,DAT_08017680\n\
     ldr        r0,DAT_08017684\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08017688\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r0,DAT_0801768c\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     ldr        r6,DAT_08017690\n\
     ldr        r4,DAT_08017694\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r5,DAT_08017698\n\
     add        r1,r6,r5\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r5,DAT_0801769c\n\
     mov        r1,#0x2d\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r0,DAT_080176a0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017624\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_080176a4\n\
     add        r1,r6,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xa\n\
     mov        r2,#0x85\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
LAB_08017624:\n\
     ldr        r2,DAT_080176a8\n\
     mov        r0,sp\n\
     mov        r1,#0x41\n\
     bl         fun_0803c0a4\n\
LAB_0801762e:\n\
     ldr        r1,DAT_08017690\n\
     ldr        r0,DAT_08017694\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r3,DAT_080176ac\n\
     add        r1,r1,r3\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r4,DAT_080176b0\n\
     mov        r1,#0xe4\n\
     ldrh       r5,[r4,#0x0]\n\
     sub        r1,r1,r5\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     ldr        r3,DAT_0801769c\n\
     mov        r2,#0x85\n\
     bl         fun_0803c138\n\
     ldr        r0,DAT_080176b4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080176b8\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xd8\n\
     ldrh       r4,[r4,#0x0]\n\
     sub        r1,r1,r4\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x85\n\
     strh       r1,[r0,#0x4]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     add        r1,r3,#0x0\n\
     bl         fun_080040d4\n\
     mov        r0,#0x0\n\
     add        sp,#0xc\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08017680:\n\
     .4byte 0x040000D4\n\
DAT_08017684:\n\
     .4byte 0x0846A540\n\
DAT_08017688:\n\
     .4byte 0x80000100\n\
DAT_0801768c:\n\
     .4byte 0x0846A740\n\
DAT_08017690:\n\
     .4byte 0x08669620\n\
DAT_08017694:\n\
     .4byte 0x020025B4\n\
DAT_08017698:\n\
     .4byte 0x0000BD64\n\
DAT_0801769c:\n\
     .4byte 0x0865FD94\n\
DAT_080176a0:\n\
     .4byte 0x02005750\n\
DAT_080176a4:\n\
     .4byte 0x0000BE24\n\
DAT_080176a8:\n\
     .4byte 0x0865FB7C\n\
DAT_080176ac:\n\
     .4byte 0x0000C1E4\n\
DAT_080176b0:\n\
     .4byte 0x0200DCD4\n\
DAT_080176b4:\n\
     .4byte 0x08063740\n\
DAT_080176b8:\n\
     .4byte 0x0200DCBC\n\
    ");
}
__attribute__((naked)) void fun_080176bc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x8\n\
     ldr        r0,DAT_08017760\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801779c\n\
     ldr        r1,DAT_08017764\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08017794\n\
     mov        r1,#0x19\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017756\n\
     ldr        r4,DAT_08017768\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r4,#0x0]\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_0801776c\n\
     ldr        r0,DAT_08017770\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r7,DAT_08017774\n\
     ldr        r5,DAT_08017778\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0801777c\n\
     add        r1,r7,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r6,DAT_08017780\n\
     mov        r1,#0x2d\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803c010\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08017784\n\
     add        r1,r7,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_08017788\n\
     mov        r1,#0xe4\n\
     ldrh       r2,[r2,#0x0]\n\
     sub        r1,r1,r2\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r2,#0x85\n\
     add        r3,r6,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r2,DAT_0801778c\n\
     mov        r0,sp\n\
     mov        r1,#0x3c\n\
     bl         fun_0803c0a4\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017756\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08017790\n\
     add        r1,r7,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x55\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803c010\n\
LAB_08017756:\n\
     ldr        r1,DAT_08017764\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     b          LAB_0801779a\n\
.space 1\n\
.space 1\n\
DAT_08017760:\n\
     .4byte 0x0200DCB4\n\
DAT_08017764:\n\
     .4byte 0x0200DCD0\n\
DAT_08017768:\n\
     .4byte 0x0200DCC8\n\
DAT_0801776c:\n\
     .4byte 0x0846A53C\n\
DAT_08017770:\n\
     .4byte 0x020025FC\n\
DAT_08017774:\n\
     .4byte 0x08669620\n\
DAT_08017778:\n\
     .4byte 0x020025B4\n\
DAT_0801777c:\n\
     .4byte 0x0000BD64\n\
DAT_08017780:\n\
     .4byte 0x0865FD94\n\
DAT_08017784:\n\
     .4byte 0x0000C1E4\n\
DAT_08017788:\n\
     .4byte 0x0200DCD4\n\
DAT_0801778c:\n\
     .4byte 0x0865FB7C\n\
DAT_08017790:\n\
     .4byte 0x0000C094\n\
LAB_08017794:\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
LAB_0801779a:\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801779c:\n\
     ldr        r0,PTR_DAT_080177e8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017836\n\
     ldr        r0,PTR_DAT_080177ec\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017836\n\
     ldr        r2,PTR_DAT_080177f0\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x0\n\
     beq        LAB_08017800\n\
     ldr        r4,PTR_DAT_080177f4\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r3,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_080177f8\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0xe\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x85\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,PTR_DAT_080177fc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
     b          LAB_08017836\n\
PTR_DAT_080177e8:\n\
     .4byte       DAT_0200dcb4\n\
PTR_DAT_080177ec:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_080177f0:\n\
     .4byte       DAT_02005ce0\n\
PTR_DAT_080177f4:\n\
     .4byte       DAT_0200dcbc\n\
PTR_DAT_080177f8:\n\
     .4byte       DAT_0200dcc0\n\
PTR_DAT_080177fc:\n\
     .4byte       DAT_0200dcac\n\
LAB_08017800:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017836\n\
     ldr        r4,PTR_DAT_08017880\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     add        r1,r3,#0x0\n\
     bl         fun_080040d4\n\
     ldr        r2,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_08017884\n\
     mov        r0,#0xd8\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r0,r0,r1\n\
     strh       r0,[r2,#0x2]\n\
     mov        r0,#0x85\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_08017888\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_08017836:\n\
     mov        r4,#0x0\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017856\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08017856\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017858\n\
LAB_08017856:\n\
     mov        r4,#0x1\n\
LAB_08017858:\n\
     add        r1,r4,#0x0\n\
     ldr        r0,PTR_DAT_0801788c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08017894\n\
     cmp        r1,#0x0\n\
     beq        LAB_080178ec\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     ldr        r1,PTR_DAT_08017890\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080178ec\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_08001088\n\
     b          LAB_080178ec\n\
PTR_DAT_08017880:\n\
     .4byte       DAT_0200dcbc\n\
PTR_DAT_08017884:\n\
     .4byte       DAT_0200dcd4\n\
PTR_DAT_08017888:\n\
     .4byte       DAT_0200dcac\n\
PTR_DAT_0801788c:\n\
     .4byte       DAT_0200dcb4\n\
PTR_DAT_08017890:\n\
     .4byte       DAT_0200dcd8\n\
LAB_08017894:\n\
     ldr        r0,DAT_080178a8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080178ac\n\
     cmp        r1,#0x0\n\
     beq        LAB_080178ec\n\
     bl         fun_080010d8\n\
     b          LAB_080178ec\n\
.space 1\n\
.space 1\n\
DAT_080178a8:\n\
     .4byte 0x02005750\n\
LAB_080178ac:\n\
     cmp        r1,#0x0\n\
     beq        LAB_080178ec\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_080178c8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080178cc\n\
     mov        r0,#0x22\n\
     bl         fun_08001070\n\
     b          LAB_080178ec\n\
.space 1\n\
.space 1\n\
DAT_080178c8:\n\
     .4byte 0x0200DCAC\n\
LAB_080178cc:\n\
     ldr        r2,DAT_080178e4\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_080178e8\n\
     ldrh       r0,[r2,#0x0]\n\
     bl         fun_08001070\n\
     b          LAB_080178ec\n\
.space 1\n\
.space 1\n\
DAT_080178e4:\n\
     .4byte 0x020025C8\n\
LAB_080178e8:\n\
     bl         fun_080010d8\n\
LAB_080178ec:\n\
     mov        r0,#0x0\n\
     add        sp,#0x8\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
