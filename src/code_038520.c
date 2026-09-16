__attribute__((naked)) void fun_08038520()
{
    asm("\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08038524()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r4,[sp,#0xc]\n\
     ldr        r5,[sp,#0x10]\n\
     sub        r0,r0,r3\n\
     sub        r1,r1,r4\n\
     add        r3,r0,#0x0\n\
     mul        r3,r0\n\
     add        r0,r1,#0x0\n\
     mul        r0,r1\n\
     add        r3,r3,r0\n\
     add        r2,r2,r5\n\
     add        r0,r2,#0x0\n\
     mul        r0,r2\n\
     add        r2,r0,#0x0\n\
     cmp        r3,r2\n\
     blt        LAB_08038548\n\
     mov        r0,#0x0\n\
     b          LAB_0803854a\n\
LAB_08038548:\n\
     mov        r0,#0x1\n\
LAB_0803854a:\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08038550()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r4,DAT_080385a8\n\
     mov        r0,#0x23\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_080385ac\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,DAT_080385b0\n\
     add        r0,r1,r2\n\
     ldr        r3,DAT_080385b4\n\
     cmp        r0,r3\n\
     bhi        LAB_0803856a\n\
     mov        r0,#0x19\n\
     str        r0,[r4,#0x0]\n\
LAB_0803856a:\n\
     ldr        r5,DAT_080385b8\n\
     add        r0,r1,r5\n\
     add        r2,r1,#0x0\n\
     cmp        r0,r3\n\
     bhi        LAB_08038578\n\
     mov        r0,#0xf\n\
     str        r0,[r4,#0x0]\n\
LAB_08038578:\n\
     ldr        r3,DAT_080385bc\n\
     add        r0,r2,r3\n\
     ldr        r3,DAT_080385c0\n\
     cmp        r0,r3\n\
     bhi        LAB_08038586\n\
     mov        r0,#0x7\n\
     str        r0,[r4,#0x0]\n\
LAB_08038586:\n\
     ldr        r5,DAT_080385c4\n\
     add        r0,r2,r5\n\
     cmp        r0,r3\n\
     bhi        LAB_08038592\n\
     mov        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
LAB_08038592:\n\
     ldr        r0,DAT_080385c8\n\
     add        r1,r1,r0\n\
     ldr        r0,DAT_080385cc\n\
     cmp        r1,r0\n\
     bhi        LAB_080385a0\n\
     mov        r0,#0x1\n\
     str        r0,[r4,#0x0]\n\
LAB_080385a0:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080385a8:\n\
     .4byte 0x02011228\n\
DAT_080385ac:\n\
     .4byte 0x020111A4\n\
DAT_080385b0:\n\
     .4byte 0xFFFF0217\n\
DAT_080385b4:\n\
     .4byte 0x00007EF2\n\
DAT_080385b8:\n\
     .4byte 0xFFFE8323\n\
DAT_080385bc:\n\
     .4byte 0xFFFE042F\n\
DAT_080385c0:\n\
     .4byte 0x00003F78\n\
DAT_080385c4:\n\
     .4byte 0xFFFDC4B5\n\
DAT_080385c8:\n\
     .4byte 0xFFFD853B\n\
DAT_080385cc:\n\
     .4byte 0x00017CDA\n\
    ");
}
__attribute__((naked)) void fun_080385d0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     mov        r0,#0x1c\n\
     bl         fun_080016f0\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x20\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_080385fa\n\
     ldrh       r0,[r4,#0x18]\n\
     cmp        r0,#0x10\n\
     bne        LAB_080385fa\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r1,[r4,#0xc]\n\
     bl         fun_080383a4\n\
     mov        r0,#0x20\n\
     bl         fun_080016f0\n\
LAB_080385fa:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x20\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x2\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     bls        LAB_08038610\n\
     add        r0,r4,#0x0\n\
     bl         fun_08038218\n\
LAB_08038610:\n\
     mov        r0,#0x0\n\
     strh       r0,[r5,#0x12]\n\
     ldr        r0,[r5,#0x4]\n\
     bl         fun_08003b00\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08038620()
{
    asm("\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08038624()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     bl         fun_0803a980\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08038634()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08038638()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0803863c()
{
    asm("\n\
     ldr        r2,DAT_08038654\n\
     ldr        r0,DAT_08038658\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0803865c\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_08038660\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08038654:\n\
     .4byte 0x020112B0\n\
DAT_08038658:\n\
     .4byte 0x0864250C\n\
DAT_0803865c:\n\
     .4byte 0x020112C0\n\
DAT_08038660:\n\
     .4byte 0x086424A8\n\
    ");
}
__attribute__((naked)) void fun_08038664()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     sub        sp,#0x4\n\
     mov        r0,#0x0\n\
     bl         fun_08002f58\n\
     mov        r0,sp\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_080387e4\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_080387e8\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r5,#0xa0\n\
     lsl        r5,r5,#0x13\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_080387ec\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x13\n\
     ldr        r1,DAT_080387f0\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,DAT_080387f4\n\
     ldr        r1,DAT_080387f8\n\
     bl         fun_0803d070\n\
     ldr        r0,DAT_080387fc\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_08038800\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     bl         fun_08002bcc\n\
     ldr        r2,DAT_08038804\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08038808\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     ldr        r0,DAT_0803880c\n\
     bl         fun_080045f0\n\
     mov        r4,#0x0\n\
     ldr        r6,DAT_08038810\n\
     ldr        r5,DAT_08038814\n\
LAB_080386e0:\n\
     ldr        r0,DAT_08038818\n\
     bl         fun_08003998\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r6\n\
     str        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x4]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x1\n\
     bls        LAB_080386e0\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_0803881c\n\
     mov        r8,r0\n\
     mov        r6,#0x0\n\
     ldr        r5,DAT_08038814\n\
LAB_08038706:\n\
     ldr        r0,DAT_08038820\n\
     bl         fun_08003998\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r8\n\
     str        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r7,#0x1\n\
     strh       r7,[r0,#0x6]\n\
     ldr        r0,PTR_DAT_08038824\n\
     add        r0,r4,r0\n\
     strb       r6,[r0,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x6\n\
     bls        LAB_08038706\n\
     ldr        r3,PTR_DAT_08038828\n\
     mov        r0,#0x0\n\
     strb       r0,[r3,#0x0]\n\
     ldr        r2,DAT_08038810\n\
     mov        r6,#0x0\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     mov        r0,#0x68\n\
     strh       r0,[r1,#0x2]\n\
     ldrb       r3,[r3,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x9c\n\
     strh       r0,[r1,#0x4]\n\
     bl         fun_080392d0\n\
     ldr        r1,PTR_DAT_0803882c\n\
     mov        r0,#0xf\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08038830\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08038834\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r4,DAT_08038838\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r5,PTR_DAT_0803883c\n\
     str        r0,[r5,#0x0]\n\
     sub        r4,#0x20\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08038840\n\
     str        r0,[r1,#0x0]\n\
     ldr        r2,[r5,#0x0]\n\
     mov        r3,#0x5d\n\
     strh       r3,[r2,#0x2]\n\
     mov        r1,#0x5e\n\
     strh       r1,[r2,#0x4]\n\
     strh       r3,[r0,#0x2]\n\
     mov        r1,#0x5f\n\
     strh       r1,[r0,#0x4]\n\
     mov        r3,#0x1\n\
     strh       r7,[r2,#0x6]\n\
     mov        r1,#0x96\n\
     strh       r1,[r2,#0x10]\n\
     strh       r7,[r0,#0x6]\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,PTR_DAT_08038844\n\
     str        r6,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08038848\n\
     strb       r3,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0803884c\n\
     mov        r0,#0xc\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08038850\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08038854\n\
     str        r6,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08038858\n\
     str        r6,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0803885c\n\
     mov        r0,#0x8\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08038860\n\
     ldr        r0,PTR_DAT_08038864\n\
     mov        r2,r8\n\
     strb       r2,[r0,#0x0]\n\
     strb       r2,[r1,#0x0]\n\
     ldr        r1,DAT_08038868\n\
     ldr        r2,DAT_0803886c\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080387e4:\n\
     .4byte 0x040000D4\n\
DAT_080387e8:\n\
     .4byte 0x8100C000\n\
DAT_080387ec:\n\
     .4byte 0x81000200\n\
DAT_080387f0:\n\
     .4byte 0x00001F44\n\
DAT_080387f4:\n\
     .4byte 0x0865D974\n\
DAT_080387f8:\n\
     .4byte 0x0600A000\n\
DAT_080387fc:\n\
     .4byte 0x0865D774\n\
DAT_08038800:\n\
     .4byte 0x80000100\n\
DAT_08038804:\n\
     .4byte 0x00001F54\n\
DAT_08038808:\n\
     .4byte 0x0400000C\n\
DAT_0803880c:\n\
     .4byte 0x0865D574\n\
DAT_08038810:\n\
     .4byte 0x020112E0\n\
DAT_08038814:\n\
     .4byte 0x0000FFC0\n\
DAT_08038818:\n\
     .4byte 0x0865D564\n\
DAT_0803881c:\n\
     .4byte 0x02011340\n\
DAT_08038820:\n\
     .4byte 0x0865D504\n\
PTR_DAT_08038824:\n\
     .4byte       DAT_02011398\n\
PTR_DAT_08038828:\n\
     .4byte       DAT_020112d0\n\
PTR_DAT_0803882c:\n\
     .4byte       DAT_020113f0\n\
PTR_DAT_08038830:\n\
     .4byte       DAT_020112d8\n\
PTR_DAT_08038834:\n\
     .4byte       DAT_02011388\n\
DAT_08038838:\n\
     .4byte 0x0865D554\n\
PTR_DAT_0803883c:\n\
     .4byte       DAT_0201137c\n\
PTR_DAT_08038840:\n\
     .4byte       DAT_020113fc\n\
PTR_DAT_08038844:\n\
     .4byte       DAT_02011394\n\
PTR_DAT_08038848:\n\
     .4byte       DAT_020113f4\n\
PTR_DAT_0803884c:\n\
     .4byte       DAT_02011380\n\
PTR_DAT_08038850:\n\
     .4byte       DAT_0201138c\n\
PTR_DAT_08038854:\n\
     .4byte       DAT_020025fc\n\
PTR_DAT_08038858:\n\
     .4byte       DAT_02002558\n\
PTR_DAT_0803885c:\n\
     .4byte       DAT_02011338\n\
PTR_DAT_08038860:\n\
     .4byte       DAT_02011390\n\
PTR_DAT_08038864:\n\
     .4byte       DAT_020113a0\n\
DAT_08038868:\n\
     .4byte 0x0000037F\n\
DAT_0803886c:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08038870()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     mov        r0,#0xff\n\
     str        r0,[sp,#0x4]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x0]\n\
     ldr        r1,PTR_DAT_08038918\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08038890\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_08038890:\n\
     mov        r7,#0x0\n\
LAB_08038892:\n\
     ldr        r0,PTR_DAT_0803891c\n\
     add        r0,r7,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803889e\n\
     b          LAB_08038aa8\n\
LAB_0803889e:\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     ldr        r3,PTR_DAT_08038920\n\
     lsl        r4,r7,#0x3\n\
     add        r5,r4,r3\n\
     ldr        r2,PTR_DAT_08038924\n\
     lsl        r6,r7,#0x2\n\
     add        r0,r6,r2\n\
     mov        r12,r0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r8,r0\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,r8\n\
     str        r0,[r5,#0x0]\n\
     add        r3,#0x4\n\
     add        r4,r4,r3\n\
     add        r2,#0x2\n\
     add        r2,r6,r2\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_08038928\n\
     add        r2,r6,r0\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,[r5,#0x0]\n\
     asr        r0,r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     asr        r0,r0,#0x4\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_0803892c\n\
     ldrb       r0,[r0,#0x0]\n\
     mov        r8,r6\n\
     cmp        r0,#0x7\n\
     beq        LAB_080388f6\n\
     cmp        r0,#0x9\n\
     bne        LAB_08038944\n\
LAB_080388f6:\n\
     mov        r1,r12\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08038930\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_08002c9c\n\
     add        r0,#0x80\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     b          LAB_08038932\n\
.space 1\n\
.space 1\n\
PTR_DAT_08038918:\n\
     .4byte       DAT_020113f0\n\
PTR_DAT_0803891c:\n\
     .4byte       DAT_02011398\n\
PTR_DAT_08038920:\n\
     .4byte       DAT_02011300\n\
PTR_DAT_08038924:\n\
     .4byte       DAT_02011360\n\
PTR_DAT_08038928:\n\
     .4byte       DAT_02011340\n\
PTR_DAT_0803892c:\n\
     .4byte       DAT_020113f4\n\
LAB_08038930:\n\
     mov        r1,#0x80\n\
LAB_08038932:\n\
     ldr        r0,DAT_08038940\n\
     add        r0,r8\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_080047d0\n\
     b          LAB_0803894e\n\
.space 1\n\
.space 1\n\
DAT_08038940:\n\
     .4byte 0x02011340\n\
LAB_08038944:\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_080047d0\n\
LAB_0803894e:\n\
     ldr        r0,DAT_08038968\n\
     add        r0,r8\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r4,r2]\n\
     cmp        r0,#0xb4\n\
     ble        LAB_08038970\n\
     ldr        r0,DAT_0803896c\n\
     add        r0,r7,r0\n\
     mov        r1,#0x0\n\
     strb       r1,[r0,#0x0]\n\
     add        r5,r7,#0x1\n\
     b          LAB_08038aae\n\
DAT_08038968:\n\
     .4byte 0x02011340\n\
DAT_0803896c:\n\
     .4byte 0x02011398\n\
LAB_08038970:\n\
     ldr        r1,DAT_080389e0\n\
     ldr        r0,DAT_080389e4\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     ldrsh      r2,[r3,r0]\n\
     mov        r0,#0x2\n\
     ldrsh      r1,[r4,r0]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x10\n\
     cmp        r2,r0\n\
     ble        LAB_08038a40\n\
     add        r0,#0x20\n\
     cmp        r2,r0\n\
     bge        LAB_08038a40\n\
     mov        r1,#0x4\n\
     ldrsh      r2,[r3,r1]\n\
     mov        r3,#0x4\n\
     ldrsh      r1,[r4,r3]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x10\n\
     cmp        r2,r0\n\
     ble        LAB_08038a40\n\
     add        r0,#0x20\n\
     cmp        r2,r0\n\
     bge        LAB_08038a40\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     mov        r6,#0x4\n\
     mov        r4,#0x0\n\
     add        r5,r7,#0x1\n\
     ldr        r0,DAT_080389e8\n\
     mov        r9,r0\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     mov        r10,r1\n\
     ldr        r2,DAT_080389ec\n\
     mov        r12,r2\n\
LAB_080389c2:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r9\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r3,[r2,#0x0]\n\
     cmp        r3,#0x0\n\
     beq        LAB_080389fe\n\
     ldrh       r1,[r2,#0x12]\n\
     mov        r0,r10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080389f0\n\
     mov        r0,r12\n\
     and        r0,r1\n\
     strh       r0,[r2,#0x12]\n\
     b          LAB_080389f4\n\
DAT_080389e0:\n\
     .4byte 0x020112E0\n\
DAT_080389e4:\n\
     .4byte 0x020112D0\n\
DAT_080389e8:\n\
     .4byte 0x020113B0\n\
DAT_080389ec:\n\
     .4byte 0x0000FDFF\n\
LAB_080389f0:\n\
     sub        r0,r3,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_080389f4:\n\
     lsl        r0,r6,#0x18\n\
     mov        r3,#0xff\n\
     lsl        r3,r3,#0x18\n\
     add        r0,r0,r3\n\
     lsr        r6,r0,#0x18\n\
LAB_080389fe:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0xf\n\
     bhi        LAB_08038a0e\n\
     lsl        r0,r6,#0x18\n\
     cmp        r0,#0x0\n\
     bgt        LAB_080389c2\n\
LAB_08038a0e:\n\
     ldr        r1,PTR_DAT_08038a30\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x2a\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08038a34\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08038a38\n\
     add        r0,r8\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x0\n\
     mov        r0,#0xb5\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_08038a3c\n\
     add        r0,r7,r0\n\
     strb       r2,[r0,#0x0]\n\
     b          LAB_08038aae\n\
PTR_DAT_08038a30:\n\
     .4byte       DAT_020025fc\n\
PTR_DAT_08038a34:\n\
     .4byte       DAT_0201138c\n\
PTR_DAT_08038a38:\n\
     .4byte       DAT_02011340\n\
PTR_DAT_08038a3c:\n\
     .4byte       DAT_02011398\n\
LAB_08038a40:\n\
     ldr        r0,DAT_08038a54\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r5,r7,#0x1\n\
     cmp        r0,#0x9\n\
     bhi        LAB_08038aae\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_PTR_08038a58\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_08038a54:\n\
     .4byte 0x020113F4\n\
PTR_PTR_08038a58:\n\
     .4byte       PTR_LAB_08038a5c\n\
PTR_LAB_08038a5c:\n\
     .4byte       LAB_08038aae\n\
     .4byte       LAB_08038aae\n\
     .4byte       LAB_08038aae\n\
     .4byte       LAB_08038a84\n\
     .4byte       LAB_08038aae\n\
     .4byte       LAB_08038a84\n\
     .4byte       LAB_08038aae\n\
     .4byte       LAB_08038a84\n\
     .4byte       LAB_08038aae\n\
     .4byte       LAB_08038a84\n\
LAB_08038a84:\n\
     ldr        r0,DAT_08038aa4\n\
     add        r0,#0x2\n\
     mov        r1,r8\n\
     add        r6,r1,r0\n\
     ldrh       r0,[r6,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r5,r7,#0x1\n\
     cmp        r0,#0x30\n\
     ble        LAB_08038aae\n\
     mov        r0,#0x30\n\
     strh       r0,[r6,#0x0]\n\
     b          LAB_08038aae\n\
.space 1\n\
.space 1\n\
DAT_08038aa4:\n\
     .4byte 0x02011360\n\
LAB_08038aa8:\n\
     str        r7,[sp,#0x4]\n\
     add        r5,r7,#0x0\n\
     add        r5,#0x1\n\
LAB_08038aae:\n\
     lsl        r0,r5,#0x18\n\
     lsr        r7,r0,#0x18\n\
     cmp        r7,#0x6\n\
     bhi        LAB_08038ab8\n\
     b          LAB_08038892\n\
LAB_08038ab8:\n\
     ldr        r0,DAT_08038afc\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08038ac2\n\
     b          LAB_08038e76\n\
LAB_08038ac2:\n\
     ldr        r5,DAT_08038b00\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08038b36\n\
     ldr        r2,[sp,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_08038ad2\n\
     b          LAB_08038e76\n\
LAB_08038ad2:\n\
     ldr        r4,DAT_08038b04\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0xa\n\
     bl         __modsi3\n\
     strb       r0,[r4,#0x0]\n\
     mov        r0,#0xa\n\
     bl         fun_08002c04\n\
     add        r0,#0xc\n\
     strb       r0,[r5,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x8\n\
     bhi        LAB_08038b36\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_PTR_08038b08\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
.space 1\n\
.space 1\n\
DAT_08038afc:\n\
     .4byte 0x020113F0\n\
DAT_08038b00:\n\
     .4byte 0x02011380\n\
DAT_08038b04:\n\
     .4byte 0x020113F4\n\
PTR_PTR_08038b08:\n\
     .4byte       PTR_LAB_08038b0c\n\
PTR_LAB_08038b0c:\n\
     .4byte       LAB_08038b30\n\
     .4byte       LAB_08038b36\n\
     .4byte       LAB_08038b30\n\
     .4byte       LAB_08038b36\n\
     .4byte       LAB_08038b30\n\
     .4byte       LAB_08038b36\n\
     .4byte       LAB_08038b30\n\
     .4byte       LAB_08038b36\n\
     .4byte       LAB_08038b30\n\
LAB_08038b30:\n\
     ldr        r1,DAT_08038b4c\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_08038b36:\n\
     ldr        r0,DAT_08038b50\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x9\n\
     bls        LAB_08038b40\n\
     b          LAB_08038e76\n\
LAB_08038b40:\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_PTR_08038b54\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
.space 1\n\
.space 1\n\
DAT_08038b4c:\n\
     .4byte 0x02011390\n\
DAT_08038b50:\n\
     .4byte 0x020113F4\n\
PTR_PTR_08038b54:\n\
     .4byte       PTR_LAB_08038b58\n\
PTR_LAB_08038b58:\n\
     .4byte       LAB_08038c30\n\
     .4byte       LAB_08038b80\n\
     .4byte       LAB_08038c30\n\
     .4byte       LAB_08038cf4\n\
     .4byte       LAB_08038c30\n\
     .4byte       LAB_08038cf4\n\
     .4byte       LAB_08038c30\n\
     .4byte       LAB_08038db0\n\
     .4byte       LAB_08038c30\n\
     .4byte       LAB_08038db0\n\
LAB_08038b80:\n\
     ldr        r3,[sp,#0x0]\n\
     cmp        r3,#0x2\n\
     bls        LAB_08038b88\n\
     b          LAB_08038e76\n\
LAB_08038b88:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x4\n\
     bls        LAB_08038b9a\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08038b9a\n\
     b          LAB_08038e76\n\
LAB_08038b9a:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08038bc0\n\
     mov        r0,#0xc8\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08038bbc\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r2,r3,#0x3\n\
     add        r1,r2,r1\n\
     add        r0,#0x14\n\
     lsl        r0,r0,#0x4\n\
     str        r0,[r1,#0x0]\n\
     add        r4,r2,#0x0\n\
     b          LAB_08038bde\n\
DAT_08038bbc:\n\
     .4byte 0x02011300\n\
LAB_08038bc0:\n\
     ldr        r1,PTR_DAT_08038c18\n\
     ldr        r0,[sp,#0x4]\n\
     lsl        r3,r0,#0x3\n\
     add        r1,r3,r1\n\
     ldr        r2,PTR_DAT_08038c1c\n\
     ldr        r0,PTR_DAT_08038c20\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r0,r2]\n\
     lsl        r0,r0,#0x4\n\
     str        r0,[r1,#0x0]\n\
     add        r4,r3,#0x0\n\
LAB_08038bde:\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_08038c18\n\
     add        r0,#0x4\n\
     add        r0,r4,r0\n\
     mov        r1,#0x11\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08038c24\n\
     ldr        r3,[sp,#0x4]\n\
     add        r0,r3,r0\n\
     mov        r3,#0x0\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08038c28\n\
     mov        r0,#0xf\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08038c2c\n\
     ldr        r1,[sp,#0x4]\n\
     lsl        r2,r1,#0x2\n\
     add        r1,r2,r0\n\
     strh       r3,[r1,#0x0]\n\
     add        r0,#0x2\n\
     add        r2,r2,r0\n\
     mov        r0,#0x20\n\
     strh       r0,[r2,#0x0]\n\
     b          LAB_08038e6e\n\
.space 1\n\
.space 1\n\
PTR_DAT_08038c18:\n\
     .4byte       DAT_02011300\n\
PTR_DAT_08038c1c:\n\
     .4byte       DAT_020112e0\n\
PTR_DAT_08038c20:\n\
     .4byte       DAT_020112d0\n\
PTR_DAT_08038c24:\n\
     .4byte       DAT_02011398\n\
PTR_DAT_08038c28:\n\
     .4byte       DAT_020113f0\n\
PTR_DAT_08038c2c:\n\
     .4byte       DAT_02011360\n\
LAB_08038c30:\n\
     ldr        r0,PTR_DAT_08038c8c\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08038c3a\n\
     b          LAB_08038e76\n\
LAB_08038c3a:\n\
     ldr        r0,PTR_DAT_08038c90\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08038c44\n\
     b          LAB_08038e76\n\
LAB_08038c44:\n\
     mov        r0,#0x1c\n\
     bl         fun_080016f0\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     mov        r7,#0x0\n\
     ldr        r4,PTR_DAT_08038c94\n\
     add        r2,r4,#0x4\n\
     mov        r9,r2\n\
     ldr        r5,PTR_DAT_08038c98\n\
     add        r3,r5,#0x2\n\
     mov        r8,r3\n\
     mov        r6,#0x0\n\
LAB_08038c60:\n\
     cmp        r7,#0x0\n\
     bne        LAB_08038ca4\n\
     ldr        r1,PTR_DAT_08038c9c\n\
     ldr        r0,PTR_DAT_08038ca0\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x2\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0xb\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     lsl        r1,r0,#0x2\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x6\n\
     str        r1,[r4,#0x0]\n\
     mov        r2,#0x0\n\
     b          LAB_08038cbc\n\
.space 1\n\
.space 1\n\
PTR_DAT_08038c8c:\n\
     .4byte       DAT_02011390\n\
PTR_DAT_08038c90:\n\
     .4byte       DAT_020113a0\n\
PTR_DAT_08038c94:\n\
     .4byte       DAT_02011300\n\
PTR_DAT_08038c98:\n\
     .4byte       DAT_02011360\n\
PTR_DAT_08038c9c:\n\
     .4byte       DAT_020112e0\n\
PTR_DAT_08038ca0:\n\
     .4byte       DAT_020112d0\n\
LAB_08038ca4:\n\
     mov        r0,#0xb\n\
     bl         fun_08002c04\n\
     lsl        r2,r7,#0x3\n\
     add        r3,r2,r4\n\
     lsl        r1,r0,#0x2\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x6\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
     str        r1,[r3,#0x0]\n\
LAB_08038cbc:\n\
     mov        r3,r9\n\
     add        r1,r2,r3\n\
     ldr        r0,DAT_08038ce8\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08038cec\n\
     add        r0,r7,r0\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     lsl        r1,r7,#0x2\n\
     add        r0,r1,r5\n\
     strh       r6,[r0,#0x0]\n\
     add        r1,r8\n\
     mov        r0,#0x20\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     cmp        r7,#0x6\n\
     bls        LAB_08038c60\n\
     ldr        r1,DAT_08038cf0\n\
     mov        r0,#0x0\n\
     b          LAB_08038e74\n\
DAT_08038ce8:\n\
     .4byte 0xFFFFFEF0\n\
DAT_08038cec:\n\
     .4byte 0x02011398\n\
DAT_08038cf0:\n\
     .4byte 0x02011380\n\
LAB_08038cf4:\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r0,#0x2\n\
     bls        LAB_08038cfc\n\
     b          LAB_08038e76\n\
LAB_08038cfc:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x4\n\
     bls        LAB_08038d0e\n\
     ldr        r1,[sp,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08038d0e\n\
     b          LAB_08038e76\n\
LAB_08038d0e:\n\
     ldr        r0,DAT_08038d28\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_08038d30\n\
     mov        r0,#0x20\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08038d2c\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r2,r3,#0x2\n\
     add        r1,r2,r1\n\
     add        r0,#0x10\n\
     b          LAB_08038d42\n\
DAT_08038d28:\n\
     .4byte 0x020113F4\n\
DAT_08038d2c:\n\
     .4byte 0x02011360\n\
LAB_08038d30:\n\
     mov        r0,#0x20\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08038d68\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r2,r3,#0x2\n\
     add        r1,r2,r1\n\
     add        r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08038d42:\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08038d68\n\
     add        r0,#0x2\n\
     add        r0,r2,r0\n\
     ldr        r1,DAT_08038d6c\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_08038d70\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_08038d7c\n\
     ldr        r0,DAT_08038d74\n\
     ldr        r1,[sp,#0x4]\n\
     lsl        r2,r1,#0x3\n\
     add        r0,r2,r0\n\
     ldr        r1,DAT_08038d78\n\
     b          LAB_08038d88\n\
DAT_08038d68:\n\
     .4byte 0x02011360\n\
DAT_08038d6c:\n\
     .4byte 0x0000FFF0\n\
DAT_08038d70:\n\
     .4byte 0x020113F4\n\
DAT_08038d74:\n\
     .4byte 0x02011300\n\
DAT_08038d78:\n\
     .4byte 0xFFFFFEF0\n\
LAB_08038d7c:\n\
     ldr        r0,DAT_08038da8\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r2,r3,#0x3\n\
     add        r0,r2,r0\n\
     mov        r1,#0x81\n\
     lsl        r1,r1,#0x5\n\
LAB_08038d88:\n\
     str        r1,[r0,#0x0]\n\
     add        r4,r2,#0x0\n\
     mov        r0,#0x1e\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08038da8\n\
     add        r1,#0x4\n\
     add        r1,r4,r1\n\
     add        r0,#0x14\n\
     lsl        r0,r0,#0x4\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08038dac\n\
     ldr        r1,[sp,#0x4]\n\
     add        r0,r1,r0\n\
     b          LAB_08038e64\n\
.space 1\n\
.space 1\n\
DAT_08038da8:\n\
     .4byte 0x02011300\n\
DAT_08038dac:\n\
     .4byte 0x02011398\n\
LAB_08038db0:\n\
     ldr        r2,[sp,#0x0]\n\
     cmp        r2,#0x2\n\
     bhi        LAB_08038e76\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x4\n\
     bls        LAB_08038dc6\n\
     ldr        r3,[sp,#0x0]\n\
     cmp        r3,#0x0\n\
     bne        LAB_08038e76\n\
LAB_08038dc6:\n\
     ldr        r0,DAT_08038de0\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x7\n\
     bne        LAB_08038de8\n\
     mov        r0,#0x20\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08038de4\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r2,r3,#0x2\n\
     add        r1,r2,r1\n\
     b          LAB_08038df8\n\
.space 1\n\
.space 1\n\
DAT_08038de0:\n\
     .4byte 0x020113F4\n\
DAT_08038de4:\n\
     .4byte 0x02011360\n\
LAB_08038de8:\n\
     mov        r0,#0x20\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08038e28\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r2,r3,#0x2\n\
     add        r1,r2,r1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08038df8:\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08038e28\n\
     add        r0,#0x2\n\
     add        r0,r2,r0\n\
     ldr        r1,DAT_08038e2c\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_08038e30\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x7\n\
     bne        LAB_08038e38\n\
     mov        r0,#0xf0\n\
     lsl        r0,r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08038e34\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r2,r3,#0x3\n\
     add        r1,r2,r1\n\
     str        r0,[r1,#0x0]\n\
     add        r4,r2,#0x0\n\
     b          LAB_08038e52\n\
DAT_08038e28:\n\
     .4byte 0x02011360\n\
DAT_08038e2c:\n\
     .4byte 0x0000FFF0\n\
DAT_08038e30:\n\
     .4byte 0x020113F4\n\
DAT_08038e34:\n\
     .4byte 0x02011300\n\
LAB_08038e38:\n\
     mov        r0,#0xf0\n\
     lsl        r0,r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r2,PTR_DAT_08038e88\n\
     ldr        r1,[sp,#0x4]\n\
     lsl        r3,r1,#0x3\n\
     add        r2,r3,r2\n\
     mov        r1,#0xe0\n\
     lsl        r1,r1,#0x4\n\
     sub        r1,r1,r0\n\
     str        r1,[r2,#0x0]\n\
     add        r4,r3,#0x0\n\
LAB_08038e52:\n\
     ldr        r0,PTR_DAT_08038e88\n\
     add        r0,#0x4\n\
     add        r0,r4,r0\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x1\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08038e8c\n\
     ldr        r2,[sp,#0x4]\n\
     add        r0,r2,r0\n\
LAB_08038e64:\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08038e90\n\
     mov        r0,#0xf\n\
     strb       r0,[r1,#0x0]\n\
LAB_08038e6e:\n\
     ldr        r1,PTR_DAT_08038e94\n\
     ldrb       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
LAB_08038e74:\n\
     strb       r0,[r1,#0x0]\n\
LAB_08038e76:\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08038e88:\n\
     .4byte       DAT_02011300\n\
PTR_DAT_08038e8c:\n\
     .4byte       DAT_02011398\n\
PTR_DAT_08038e90:\n\
     .4byte       DAT_020113f0\n\
PTR_DAT_08038e94:\n\
     .4byte       DAT_02011380\n\
    ");
}
__attribute__((naked)) void fun_08038e98()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r4,DAT_08038efc\n\
     ldrb       r2,[r4,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsr        r1,r0,#0x1\n\
     lsl        r1,r1,#0x1\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x18\n\
     ldr        r3,DAT_08038f00\n\
     lsr        r0,r0,#0x16\n\
     add        r0,r0,r3\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r5,#0x4\n\
     ldrsh      r1,[r0,r5]\n\
     mov        r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bgt        LAB_08038ef6\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r3\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x4]\n\
     ldrb       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r3\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r2,[r0,#0x2]\n\
     add        r1,#0x1\n\
     lsr        r0,r1,#0x1\n\
     lsl        r0,r0,#0x1\n\
     sub        r1,r1,r0\n\
     strb       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r3\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r2,[r0,#0x2]\n\
     ldrb       r4,[r4,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r3\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x9c\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x2\n\
     bl         fun_080016f0\n\
LAB_08038ef6:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08038efc:\n\
     .4byte 0x020112D0\n\
DAT_08038f00:\n\
     .4byte 0x020112E0\n\
    ");
}
__attribute__((naked)) void fun_08038f04()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r6,r0,#0x0\n\
     mov        r7,#0x0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     mov        r9,r0\n\
     mov        r8,r0\n\
LAB_08038f18:\n\
     ldr        r1,DAT_08038f7c\n\
     lsl        r0,r7,#0x2\n\
     add        r4,r0,r1\n\
     ldr        r3,[r4,#0x0]\n\
     mov        r0,r8\n\
     ldrh       r1,[r3,#0x12]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08038f94\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r3,r2]\n\
     cmp        r0,#0x59\n\
     ble        LAB_08038f94\n\
     mov        r0,#0x2\n\
     ldrsh      r2,[r6,r0]\n\
     mov        r0,#0x2\n\
     ldrsh      r1,[r3,r0]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x10\n\
     cmp        r2,r0\n\
     ble        LAB_08038f94\n\
     add        r0,#0x20\n\
     cmp        r2,r0\n\
     bge        LAB_08038f94\n\
     mov        r1,#0x4\n\
     ldrsh      r2,[r6,r1]\n\
     mov        r0,#0x4\n\
     ldrsh      r1,[r3,r0]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x10\n\
     cmp        r2,r0\n\
     ble        LAB_08038f94\n\
     add        r0,#0x20\n\
     cmp        r2,r0\n\
     bge        LAB_08038f94\n\
     ldr        r0,DAT_08038f80\n\
     strh       r0,[r6,#0x4]\n\
     ldr        r1,DAT_08038f84\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x7\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_08038f88\n\
     mov        r0,r8\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_08038f8c\n\
DAT_08038f7c:\n\
     .4byte 0x020113B0\n\
DAT_08038f80:\n\
     .4byte 0x0000FFF0\n\
DAT_08038f84:\n\
     .4byte 0x020025FC\n\
LAB_08038f88:\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08038f8c:\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     b          LAB_0803904e\n\
LAB_08038f94:\n\
     mov        r0,r9\n\
     ldrh       r1,[r6,#0x12]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08039042\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r6,r2]\n\
     cmp        r0,#0x4d\n\
     ble        LAB_08039042\n\
     cmp        r0,#0xac\n\
     bgt        LAB_08039042\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r6,r1]\n\
     cmp        r0,#0x5e\n\
     bgt        LAB_08039042\n\
     cmp        r0,#0x59\n\
     ble        LAB_08039042\n\
     mov        r0,#0xb\n\
     bl         fun_080016f0\n\
     ldr        r4,DAT_0803905c\n\
     ldr        r0,[r4,#0x0]\n\
     add        r5,r0,#0x0\n\
     add        r5,#0x32\n\
     str        r5,[r4,#0x0]\n\
     ldr        r1,DAT_08039060\n\
     ldrb       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803903e\n\
     ldr        r0,DAT_08039064\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,DAT_08039068\n\
     cmp        r2,r0\n\
     bhi        LAB_08038ff0\n\
     mov        r1,#0xe1\n\
     lsl        r1,r1,#0x4\n\
     sub        r1,r1,r2\n\
     lsr        r1,r1,#0x6\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     add        r0,r5,r0\n\
     str        r0,[r4,#0x0]\n\
LAB_08038ff0:\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08038ff8\n\
     str        r3,[r4,#0x0]\n\
LAB_08038ff8:\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r5,DAT_0803906c\n\
     cmp        r0,r5\n\
     ble        LAB_0803900a\n\
     mov        r0,#0x46\n\
     bl         fun_08002c04\n\
     sub        r0,r5,r0\n\
     str        r0,[r4,#0x0]\n\
LAB_0803900a:\n\
     ldr        r0,DAT_08039070\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08039032\n\
     ldr        r1,DAT_08039074\n\
     mov        r0,#0xb\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08039078\n\
     ldr        r2,DAT_0803907c\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08039080\n\
     mov        r0,#0x22\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08039084\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
LAB_08039032:\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_0803903e:\n\
     ldr        r0,DAT_08039088\n\
     strh       r0,[r6,#0x4]\n\
LAB_08039042:\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     cmp        r7,#0xf\n\
     bhi        LAB_0803904e\n\
     b          LAB_08038f18\n\
LAB_0803904e:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803905c:\n\
     .4byte 0x020025FC\n\
DAT_08039060:\n\
     .4byte 0x0201138C\n\
DAT_08039064:\n\
     .4byte 0x02011394\n\
DAT_08039068:\n\
     .4byte 0x00000E0F\n\
DAT_0803906c:\n\
     .4byte 0x000003E7\n\
DAT_08039070:\n\
     .4byte 0x02002530\n\
DAT_08039074:\n\
     .4byte 0x0200254C\n\
DAT_08039078:\n\
     .4byte 0x020025E8\n\
DAT_0803907c:\n\
     .4byte 0x00000441\n\
DAT_08039080:\n\
     .4byte 0x020025C8\n\
DAT_08039084:\n\
     .4byte 0x00000DF8\n\
DAT_08039088:\n\
     .4byte 0x0000FFC0\n\
    ");
}
__attribute__((naked)) void fun_0803908c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r4,#0x0\n\
     mov        r5,#0x10\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
LAB_08039094:\n\
     ldr        r0,DAT_080390cc\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r3,r2]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080390bc\n\
     ldrh       r0,[r3,#0x4]\n\
     mov        r6,#0x4\n\
     ldrsh      r2,[r3,r6]\n\
     cmp        r2,#0x9b\n\
     bgt        LAB_080390bc\n\
     cmp        r2,r5\n\
     ble        LAB_080390bc\n\
     sub        r0,#0x2\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     bl         fun_08038f04\n\
LAB_080390bc:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x1\n\
     bls        LAB_08039094\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080390cc:\n\
     .4byte 0x020112E0\n\
    ");
}
__attribute__((naked)) void fun_080390d0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x10\n\
     ldr        r1,DAT_08039148\n\
     mov        r0,sp\n\
     mov        r2,#0x10\n\
     bl         memcpy\n\
     ldr        r7,PTR_DAT_0803914c\n\
     ldrb       r0,[r7,#0x0]\n\
     sub        r0,#0x1\n\
     strb       r0,[r7,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803913e\n\
     ldr        r0,PTR_DAT_08039150\n\
     ldr        r4,[r0,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_08039154\n\
     ldr        r5,[r0,#0x0]\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     ldrh       r3,[r4,#0x0]\n\
     ldr        r6,PTR_DAT_08039158\n\
     ldrb       r0,[r6,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     mov        r0,sp\n\
     add        r2,r0,r1\n\
     add        r0,#0x2\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     add        r0,r0,r2\n\
     cmp        r3,r0\n\
     bne        LAB_0803913a\n\
     ldr        r1,PTR_DAT_0803915c\n\
     ldrb       r0,[r1,#0x0]\n\
     strb       r0,[r6,#0x0]\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     ldrb       r1,[r6,#0x0]\n\
     lsl        r0,r1,#0x3\n\
     add        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x0]\n\
     ldrb       r6,[r6,#0x0]\n\
     lsl        r1,r6,#0x3\n\
     add        r0,sp,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
LAB_0803913a:\n\
     mov        r0,#0x8\n\
     strb       r0,[r7,#0x0]\n\
LAB_0803913e:\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08039148:\n\
     .4byte 0x086425DC\n\
PTR_DAT_0803914c:\n\
     .4byte       DAT_02011338\n\
PTR_DAT_08039150:\n\
     .4byte       DAT_0201137c\n\
PTR_DAT_08039154:\n\
     .4byte       DAT_020113fc\n\
PTR_DAT_08039158:\n\
     .4byte       DAT_020113a0\n\
PTR_DAT_0803915c:\n\
     .4byte       DAT_02011390\n\
    ");
}
__attribute__((naked)) void fun_08039160()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x10\n\
     bl         fun_080390d0\n\
     ldr        r0,DAT_0803925c\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     str        r1,[r0,#0x0]\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039194\n\
     ldr        r1,DAT_08039260\n\
     ldr        r0,DAT_08039264\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r2,[r1,#0x2]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r0,#0x10\n\
     ble        LAB_08039194\n\
     sub        r0,r2,#0x2\n\
     strh       r0,[r1,#0x2]\n\
LAB_08039194:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080391b8\n\
     ldr        r1,DAT_08039260\n\
     ldr        r0,DAT_08039264\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r2,[r1,#0x2]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r0,#0xdf\n\
     bgt        LAB_080391b8\n\
     add        r0,r2,#0x2\n\
     strh       r0,[r1,#0x2]\n\
LAB_080391b8:\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080391c6\n\
     bl         fun_08038e98\n\
LAB_080391c6:\n\
     bl         fun_0803908c\n\
     bl         fun_08038870\n\
     ldr        r5,DAT_08039268\n\
     ldr        r4,DAT_0803926c\n\
     ldrh       r0,[r4,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x32\n\
     bl         fun_08002c04\n\
     add        r0,#0x32\n\
     ldrh       r1,[r4,#0x0]\n\
     add        r0,r1,r0\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r1,r0,#0x10\n\
     cmp        r1,#0x0\n\
     ble        LAB_080391f4\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08039200\n\
LAB_080391f4:\n\
     cmp        r1,#0x0\n\
     bge        LAB_0803920e\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803920e\n\
LAB_08039200:\n\
     ldr        r0,DAT_0803925c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803920e\n\
     mov        r0,#0x15\n\
     bl         fun_080016f0\n\
LAB_0803920e:\n\
     ldr        r3,DAT_08039270\n\
     ldr        r2,DAT_08039274\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r2,r0]\n\
     ldrh       r1,[r3,#0x0]\n\
     add        r0,r1,r0\n\
     strh       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r1,r0,#0x10\n\
     cmp        r1,#0xff\n\
     bgt        LAB_08039228\n\
     mov        r0,#0x1\n\
     strb       r0,[r2,#0x0]\n\
LAB_08039228:\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x2\n\
     cmp        r1,r0\n\
     ble        LAB_08039238\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r0,r1,#0x0\n\
     strb       r0,[r2,#0x0]\n\
LAB_08039238:\n\
     ldr        r0,DAT_0803926c\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803927c\n\
     ldr        r0,DAT_08039278\n\
     mov        r1,#0x0\n\
     ldrsh      r2,[r3,r1]\n\
     ldr        r1,[r0,#0x0]\n\
     sub        r1,r1,r2\n\
     str        r1,[r0,#0x0]\n\
     add        r2,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_08039298\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xa\n\
     b          LAB_08039296\n\
.space 1\n\
.space 1\n\
DAT_0803925c:\n\
     .4byte 0x02011394\n\
DAT_08039260:\n\
     .4byte 0x020112E0\n\
DAT_08039264:\n\
     .4byte 0x020112D0\n\
DAT_08039268:\n\
     .4byte 0x020112D4\n\
DAT_0803926c:\n\
     .4byte 0x0200C650\n\
DAT_08039270:\n\
     .4byte 0x020112D8\n\
DAT_08039274:\n\
     .4byte 0x02011388\n\
DAT_08039278:\n\
     .4byte 0x02011384\n\
LAB_0803927c:\n\
     ldr        r2,DAT_080392c4\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r3,r0]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r1,r0,r1\n\
     add        r0,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_08039290\n\
     ldr        r3,DAT_080392c8\n\
     add        r0,r1,r3\n\
LAB_08039290:\n\
     asr        r0,r0,#0x11\n\
     lsl        r0,r0,#0x11\n\
     sub        r0,r1,r0\n\
LAB_08039296:\n\
     str        r0,[r2,#0x0]\n\
LAB_08039298:\n\
     ldr        r0,DAT_080392cc\n\
     mov        r1,#0xb4\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x23\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0xb0\n\
     str        r1,[sp,#0x8]\n\
     ldr        r1,[r2,#0x0]\n\
     lsl        r1,r1,#0x8\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0xc]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x78\n\
     mov        r3,#0x54\n\
     bl         fun_08039370\n\
     mov        r0,#0x0\n\
     add        sp,#0x10\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_080392c4:\n\
     .4byte 0x02011384\n\
DAT_080392c8:\n\
     .4byte 0x0001FFFF\n\
DAT_080392cc:\n\
     .4byte 0x020113B0\n\
    ");
}
__attribute__((naked)) void fun_080392d0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x1c\n\
     ldr        r1,DAT_08039360\n\
     add        r0,sp,#0x10\n\
     mov        r2,#0x6\n\
     bl         memcpy\n\
     mov        r7,#0x0\n\
     mov        r6,#0x0\n\
     mov        r9,r6\n\
     ldr        r0,DAT_08039364\n\
     mov        r8,r0\n\
LAB_080392ee:\n\
     lsl        r0,r7,#0x1\n\
     add        r0,sp\n\
     add        r0,#0x10\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x4\n\
     ldr        r1,DAT_08039368\n\
     add        r0,r0,r1\n\
     bl         fun_08003998\n\
     add        r5,r0,#0x0\n\
     ldr        r2,DAT_0803936c\n\
     lsl        r4,r6,#0x2\n\
     add        r4,r4,r2\n\
     str        r5,[r4,#0x0]\n\
     add        r0,r7,#0x1\n\
     mov        r1,#0x3\n\
     str        r2,[sp,#0x18]\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     mov        r1,r8\n\
     strh       r1,[r5,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     ldr        r2,[sp,#0x18]\n\
     cmp        r6,#0xf\n\
     bls        LAB_080392ee\n\
     mov        r0,#0xb4\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x23\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0xb0\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r2,#0x0\n\
     mov        r1,#0x10\n\
     mov        r2,#0x78\n\
     mov        r3,#0x54\n\
     bl         fun_08039370\n\
     add        sp,#0x1c\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08039360:\n\
     .4byte 0x086425EC\n\
DAT_08039364:\n\
     .4byte 0x0000FFEF\n\
DAT_08039368:\n\
     .4byte 0x0865D4F4\n\
DAT_0803936c:\n\
     .4byte 0x020113B0\n\
    ");
}
__attribute__((naked)) void fun_08039370()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x20\n\
     str        r0,[sp,#0x0]\n\
     ldr        r5,[sp,#0x40]\n\
     ldr        r6,[sp,#0x44]\n\
     ldr        r0,[sp,#0x48]\n\
     ldr        r4,[sp,#0x4c]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r10,r1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[sp,#0x4]\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     str        r3,[sp,#0x8]\n\
     lsl        r5,r5,#0x10\n\
     lsl        r6,r6,#0x10\n\
     lsr        r1,r6,#0x10\n\
     str        r1,[sp,#0xc]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     str        r4,[sp,#0x10]\n\
     mov        r2,#0x0\n\
     mov        r8,r2\n\
     cmp        r8,r10\n\
     bcs        LAB_080394a4\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r4,#0x0\n\
     mov        r1,r10\n\
     bl         __divsi3\n\
     str        r0,[sp,#0x14]\n\
     sub        r4,r4,r7\n\
     lsl        r4,r4,#0x10\n\
     str        r4,[sp,#0x1c]\n\
     lsr        r0,r5,#0x11\n\
     lsl        r0,r0,#0x10\n\
     str        r0,[sp,#0x18]\n\
     lsr        r6,r6,#0x11\n\
     mov        r9,r6\n\
LAB_080393d0:\n\
     ldr        r3,[sp,#0x14]\n\
     mov        r0,r8\n\
     mul        r0,r3\n\
     ldr        r1,[sp,#0x10]\n\
     add        r4,r0,r1\n\
     add        r0,r4,#0x0\n\
     cmp        r4,#0x0\n\
     bge        LAB_080393e2\n\
     add        r0,#0xff\n\
LAB_080393e2:\n\
     asr        r0,r0,#0x8\n\
     lsl        r0,r0,#0x8\n\
     sub        r0,r4,r0\n\
     lsl        r0,r0,#0x1\n\
     ldr        r2,DAT_080394b4\n\
     add        r0,r0,r2\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     ldr        r2,[sp,#0x18]\n\
     asr        r1,r2,#0x10\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r1,r4,#0x0\n\
     add        r1,#0x40\n\
     add        r0,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_0803940c\n\
     ldr        r3,DAT_080394b8\n\
     add        r0,r4,r3\n\
LAB_0803940c:\n\
     asr        r0,r0,#0x8\n\
     lsl        r0,r0,#0x8\n\
     sub        r0,r1,r0\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_080394b4\n\
     add        r0,r0,r1\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     mov        r3,r9\n\
     lsl        r1,r3,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     add        r5,r0,#0x0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     mov        r0,r8\n\
     lsl        r6,r0,#0x2\n\
     ldr        r1,[sp,#0x0]\n\
     add        r6,r6,r1\n\
     ldr        r1,[r6,#0x0]\n\
     ldr        r2,[sp,#0x4]\n\
     add        r0,r2,r7\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r6,#0x0]\n\
     ldr        r3,[sp,#0x8]\n\
     add        r0,r3,r5\n\
     strh       r0,[r1,#0x4]\n\
     lsl        r5,r5,#0x10\n\
     asr        r5,r5,#0x10\n\
     mov        r1,r9\n\
     add        r0,r5,r1\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0xc]\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c9c\n\
     add        r4,r0,#0x0\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     ldr        r3,[sp,#0x1c]\n\
     asr        r0,r3,#0x10\n\
     add        r1,r4,#0x0\n\
     bl         fun_08002c84\n\
     mov        r0,#0x4\n\
     add        r1,r4,#0x0\n\
     bl         fun_08002c84\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r3,DAT_080394bc\n\
     add        r1,r3,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r1,r3\n\
     strh       r1,[r2,#0x12]\n\
     ldr        r2,[r6,#0x0]\n\
     mov        r1,#0x4\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     sub        r1,r1,r0\n\
     ldrh       r0,[r2,#0x12]\n\
     orr        r1,r0\n\
     strh       r1,[r2,#0x12]\n\
     ldr        r1,[r6,#0x0]\n\
     mov        r0,#0xa0\n\
     sub        r0,r0,r5\n\
     strh       r0,[r1,#0x10]\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     cmp        r8,r10\n\
     bcc        LAB_080393d0\n\
LAB_080394a4:\n\
     add        sp,#0x20\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080394b4:\n\
     .4byte 0x08049824\n\
DAT_080394b8:\n\
     .4byte 0x0000013F\n\
DAT_080394bc:\n\
     .4byte 0x0000FFF0\n\
    ");
}
__attribute__((naked)) void fun_080394c0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_08039504\n\
     mov        r1,#0xc6\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r1,DAT_08039508\n\
     strh       r1,[r0,#0x6]\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_0803950c\n\
LAB_080394d2:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x1\n\
     bls        LAB_080394d2\n\
     ldr        r0,DAT_08039510\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,DAT_08039514\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08039504:\n\
     .4byte 0x020006A0\n\
DAT_08039508:\n\
     .4byte 0x00000888\n\
DAT_0803950c:\n\
     .4byte 0x020112E0\n\
DAT_08039510:\n\
     .4byte 0x0201137C\n\
DAT_08039514:\n\
     .4byte 0x020113FC\n\
    ");
}
__attribute__((naked)) void fun_08039518()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0803951c()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08039520()
{
    asm("\n\
     add        r2,r0,#0x0\n\
     ldr        r0,DAT_08039534\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x9\n\
     bhi        switchD_08039532_caseD_0\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_0803953c_08039538\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_08039534:\n\
     .4byte 0x020113F4\n\
PTR_switchdataD_0803953c_08039538:\n\
     .4byte       switchD_08039532_switchdataD_0803953c\n\
switchD_08039532_switchdataD_0803953c:\n\
     .4byte       switchD_08039532_caseD_0\n\
     .4byte       switchD_08039532_caseD_0\n\
     .4byte       switchD_08039532_caseD_0\n\
     .4byte       switchD_08039532_caseD_3\n\
     .4byte       switchD_08039532_caseD_0\n\
     .4byte       switchD_08039532_caseD_3\n\
     .4byte       switchD_08039532_caseD_0\n\
     .4byte       switchD_08039532_caseD_3\n\
     .4byte       switchD_08039532_caseD_0\n\
     .4byte       switchD_08039532_caseD_3\n\
switchD_08039532_caseD_3:\n\
     ldr        r0,DAT_08039580\n\
     lsl        r1,r2,#0x2\n\
     add        r0,#0x2\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x30\n\
     ble        switchD_08039532_caseD_0\n\
     mov        r0,#0x30\n\
     strh       r0,[r1,#0x0]\n\
switchD_08039532_caseD_0:\n\
     bx         lr\n\
DAT_08039580:\n\
     .4byte 0x02011360\n\
    ");
}
__attribute__((naked)) void fun_08039584()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r6,r0,#0x0\n\
     mov        r1,#0x0\n\
     ldr        r4,DAT_080395d8\n\
     add        r5,r4,#0x0\n\
LAB_0803958e:\n\
     lsl        r3,r1,#0x10\n\
     asr        r1,r3,#0x10\n\
     lsl        r0,r1,#0x5\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803959e\n\
     lsr        r2,r3,#0x10\n\
LAB_0803959e:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803958e\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0xb\n\
     add        r0,r2,r4\n\
     mov        r3,#0x0\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     add        r1,r4,#0x0\n\
     add        r1,#0x8\n\
     add        r2,r2,r1\n\
     str        r6,[r2,#0x0]\n\
     mov        r1,#0x1e\n\
     strh       r1,[r0,#0xe]\n\
     strh       r3,[r0,#0x14]\n\
     strh       r3,[r0,#0x2]\n\
     strh       r3,[r0,#0x4]\n\
     add        r1,#0xe2\n\
     strh       r1,[r0,#0x18]\n\
     strh       r1,[r0,#0x1a]\n\
     strh       r3,[r0,#0x1c]\n\
     strh       r3,[r0,#0x1e]\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080395d8:\n\
     .4byte 0x02011400\n\
    ");
}
__attribute__((naked)) void fun_080395dc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r1,#0x0\n\
     ldr        r5,DAT_0803962c\n\
     add        r6,r5,#0x0\n\
     add        r6,#0x8\n\
LAB_080395e6:\n\
     lsl        r0,r1,#0x10\n\
     asr        r3,r0,#0xb\n\
     add        r2,r3,r5\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803963a\n\
     ldrh       r1,[r2,#0x16]\n\
     mov        r7,#0x16\n\
     ldrsh      r0,[r2,r7]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803963a\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r2,#0x16]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803963a\n\
     mov        r1,#0x14\n\
     ldrsh      r0,[r2,r1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039630\n\
     add        r0,r3,r6\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0xc\n\
     ldrsb      r0,[r2,r0]\n\
     ldrh       r3,[r1,#0x0]\n\
     add        r0,r3,r0\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r2,#0x14]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x14]\n\
     ldrh       r0,[r2,#0xe]\n\
     strh       r0,[r2,#0x16]\n\
     b          LAB_0803963a\n\
.space 1\n\
.space 1\n\
DAT_0803962c:\n\
     .4byte 0x02011400\n\
LAB_08039630:\n\
     ldrh       r0,[r2,#0xe]\n\
     strh       r0,[r2,#0x16]\n\
     add        r0,r2,#0x0\n\
     bl         fun_080396c0\n\
LAB_0803963a:\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x9\n\
     add        r0,r4,r7\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     ble        LAB_080395e6\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08039650()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r5,r0,#0x0\n\
     bl         fun_08039840\n\
     add        r2,r0,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_080396b8\n\
     ldrh       r3,[r2,#0x18]\n\
     ldrh       r4,[r2,#0x1a]\n\
     ldrh       r1,[r2,#0x2]\n\
     mov        r7,#0x1\n\
     add        r0,r7,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039674\n\
     lsl        r0,r3,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r3,r0,#0x10\n\
LAB_08039674:\n\
     mov        r6,#0x2\n\
     add        r0,r6,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039684\n\
     lsl        r0,r4,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r4,r0,#0x10\n\
LAB_08039684:\n\
     ldrh       r1,[r2,#0x4]\n\
     add        r0,r7,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039694\n\
     lsl        r0,r3,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r3,r0,#0x10\n\
LAB_08039694:\n\
     add        r0,r6,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080396a2\n\
     lsl        r0,r4,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r4,r0,#0x10\n\
LAB_080396a2:\n\
     mov        r0,#0x10\n\
     ldrh       r1,[r5,#0x12]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080396b8\n\
     ldrh       r1,[r2,#0x1c]\n\
     add        r2,r3,#0x0\n\
     add        r3,r4,#0x0\n\
     add        r0,r5,#0x0\n\
     bl         fun_080040d4\n\
LAB_080396b8:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080396c0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r3,r0,#0x0\n\
     ldr        r2,[r3,#0x10]\n\
     mov        r0,#0x1e\n\
     ldrsh      r1,[r3,r0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r4,[r0,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r5,r1,#0x10\n\
     mov        r1,#0x0\n\
     mov        r12,r1\n\
     mov        r7,#0x0\n\
     strh       r5,[r3,#0x1e]\n\
     ldrh       r0,[r3,#0xe]\n\
     strh       r0,[r3,#0x16]\n\
     ldr        r1,DAT_080396fc\n\
     and        r1,r4\n\
     add        r6,r1,#0x0\n\
     mov        r2,#0xf8\n\
     lsl        r2,r2,#0x8\n\
     and        r2,r4\n\
     add        r4,r2,#0x0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x4\n\
     cmp        r2,r0\n\
     bne        LAB_08039700\n\
     strh       r1,[r3,#0xe]\n\
     b          LAB_0803978e\n\
DAT_080396fc:\n\
     .4byte 0x000007FF\n\
LAB_08039700:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x6\n\
     cmp        r2,r0\n\
     bne        LAB_08039714\n\
     strh       r7,[r3,#0x16]\n\
     ldr        r0,DAT_08039710\n\
     strh       r0,[r3,#0x1e]\n\
     b          LAB_0803979a\n\
DAT_08039710:\n\
     .4byte 0x0000FFFF\n\
LAB_08039714:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x5\n\
     cmp        r2,r0\n\
     bne        LAB_08039724\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r3,#0x14]\n\
     mov        r0,#0x1\n\
     b          LAB_08039732\n\
LAB_08039724:\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x5\n\
     cmp        r2,r0\n\
     bne        LAB_08039742\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r3,#0x14]\n\
     mov        r0,#0xff\n\
LAB_08039732:\n\
     strb       r0,[r3,#0xc]\n\
     ldr        r1,[r3,#0x8]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r3,#0xe]\n\
     strh       r0,[r3,#0x16]\n\
     b          LAB_0803979a\n\
LAB_08039742:\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x6\n\
     cmp        r2,r0\n\
     bne        LAB_0803974e\n\
     strh       r7,[r3,#0x1e]\n\
     b          LAB_0803978e\n\
LAB_0803974e:\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x6\n\
     cmp        r2,r0\n\
     bne        LAB_0803975e\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r3,#0x2]\n\
     orr        r0,r1\n\
     b          LAB_0803978c\n\
LAB_0803975e:\n\
     mov        r0,#0xe0\n\
     lsl        r0,r0,#0x6\n\
     cmp        r2,r0\n\
     bne        LAB_0803976c\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_08039788\n\
LAB_0803976c:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x7\n\
     cmp        r2,r0\n\
     bne        LAB_0803977c\n\
     mov        r0,#0x2\n\
     ldrh       r1,[r3,#0x2]\n\
     orr        r0,r1\n\
     b          LAB_0803978c\n\
LAB_0803977c:\n\
     mov        r0,#0x90\n\
     lsl        r0,r0,#0x7\n\
     cmp        r4,r0\n\
     bne        LAB_08039796\n\
     mov        r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08039788:\n\
     ldrh       r1,[r3,#0x2]\n\
     and        r0,r1\n\
LAB_0803978c:\n\
     strh       r0,[r3,#0x2]\n\
LAB_0803978e:\n\
     add        r0,r3,#0x0\n\
     bl         fun_080396c0\n\
     b          LAB_0803979a\n\
LAB_08039796:\n\
     ldr        r0,[r3,#0x8]\n\
     strh       r6,[r0,#0x0]\n\
LAB_0803979a:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080397a0()
{
    asm("\n\
     mov        r0,#0x0\n\
     ldr        r3,DAT_080397c0\n\
     mov        r2,#0x0\n\
LAB_080397a6:\n\
     lsl        r1,r0,#0x10\n\
     asr        r1,r1,#0x10\n\
     lsl        r0,r1,#0x5\n\
     add        r0,r0,r3\n\
     strh       r2,[r0,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r0,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     cmp        r1,#0x1\n\
     ble        LAB_080397a6\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_080397c0:\n\
     .4byte 0x02011400\n\
    ");
}
__attribute__((naked)) void fun_080397c4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r1,#0x0\n\
     lsl        r4,r2,#0x10\n\
     lsr        r4,r4,#0x10\n\
     bl         fun_08039840\n\
     str        r5,[r0,#0x10]\n\
     strh       r4,[r0,#0x1e]\n\
     bl         fun_080396c0\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080397e0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r1,#0x0\n\
     bl         fun_08039840\n\
     str        r4,[r0,#0x10]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x1e]\n\
     bl         fun_080396c0\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080397f8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r1,#0x0\n\
     ldr        r3,DAT_0803982c\n\
     add        r6,r3,#0x0\n\
     add        r6,#0x10\n\
     mov        r5,#0x0\n\
LAB_08039806:\n\
     lsl        r0,r1,#0x10\n\
     asr        r2,r0,#0x10\n\
     lsl        r1,r2,#0x5\n\
     add        r0,r1,r6\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r4\n\
     bne        LAB_08039818\n\
     add        r0,r1,r3\n\
     strh       r5,[r0,#0x0]\n\
LAB_08039818:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     ble        LAB_08039806\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803982c:\n\
     .4byte 0x02011400\n\
    ");
}
__attribute__((naked)) void fun_08039830()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_08039840\n\
     mov        r1,#0x1e\n\
     ldrsh      r0,[r0,r1]\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08039840()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r1,#0x0\n\
     ldr        r4,DAT_08039868\n\
     add        r6,r4,#0x0\n\
     add        r6,#0x8\n\
LAB_0803984c:\n\
     lsl        r0,r1,#0x10\n\
     asr        r1,r0,#0xb\n\
     add        r2,r1,r4\n\
     add        r3,r0,#0x0\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803986c\n\
     add        r0,r1,r6\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r5\n\
     bne        LAB_0803986c\n\
     add        r0,r2,#0x0\n\
     b          LAB_0803987c\n\
.space 1\n\
.space 1\n\
DAT_08039868:\n\
     .4byte 0x02011400\n\
LAB_0803986c:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     add        r0,r3,r1\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803984c\n\
     mov        r0,#0x0\n\
LAB_0803987c:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08039884()
{
    asm("\n\
     push       {r4,lr}\n\
     lsl        r1,r1,#0x10\n\
     lsr        r4,r1,#0x10\n\
     bl         fun_08039840\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039894\n\
     strh       r4,[r0,#0x4]\n\
LAB_08039894:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803989c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,PTR_DAT_08039a74\n\
     mov        r8,r0\n\
     lsr        r2,r1,#0x10\n\
     str        r2,[sp,#0x8]\n\
     asr        r1,r1,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x0]\n\
     ldr        r5,PTR_DAT_08039a78\n\
     ldr        r4,PTR_DAT_08039a7c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     ldr        r2,PTR_DAT_08039a80\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     sub        r0,r0,r1\n\
     ldr        r2,PTR_DAT_08039a84\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     bl         __modsi3\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,PTR_DAT_08039a88\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_08039a8c\n\
     ldr        r0,DAT_08039a90\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r0,r1]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x1\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08039a94\n\
     ldr        r0,DAT_08039a98\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r0,r1]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x2\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08039a9c\n\
     ldr        r3,DAT_08039aa0\n\
     mov        r10,r3\n\
     mov        r0,#0x0\n\
     ldrsh      r3,[r3,r0]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x3\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08039aa4\n\
     ldr        r7,DAT_08039aa8\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r7,r1]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x4\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08039aac\n\
     ldr        r0,DAT_08039ab0\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r0,r1]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x9\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08039ab4\n\
     ldr        r0,DAT_08039ab8\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r1,#0xa\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08039abc\n\
     mov        r0,#0x0\n\
     ldrsh      r3,[r4,r0]\n\
     mov        r0,#0x1\n\
     mov        r1,#0xb\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08039ac0\n\
     mov        r1,r8\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r1,#0xc\n\
     bl         fun_080032a0\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x9\n\
     ble        LAB_08039968\n\
     b          LAB_08039b42\n\
LAB_08039968:\n\
     ldr        r0,PTR_DAT_08039ac4\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x14\n\
     mov        r2,r8\n\
     ldr        r3,[r2,#0x0]\n\
     cmp        r3,r0\n\
     ble        LAB_08039980\n\
     add        r0,#0x28\n\
     cmp        r3,r0\n\
     bge        LAB_08039980\n\
     b          LAB_08039b42\n\
LAB_08039980:\n\
     ldrh       r0,[r7,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r7,#0x0]\n\
     ldr        r0,PTR_DAT_08039ac8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039a06\n\
     ldr        r1,PTR_DAT_08039acc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r3,DAT_08039a98\n\
     ldrh       r0,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_08039a80\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,r10\n\
     ldrh       r0,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_08039a84\n\
     strh       r0,[r3,#0x0]\n\
     mov        r6,#0x0\n\
LAB_080399a6:\n\
     mov        r0,r9\n\
     asr        r0,r6\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080399ea\n\
     ldr        r5,PTR_DAT_08039a84\n\
     ldrh       r0,[r5,#0x0]\n\
     bl         fun_08039bb4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     ldr        r4,DAT_08039a98\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     bge        LAB_080399ce\n\
     add        r0,#0x7\n\
LAB_080399ce:\n\
     asr        r0,r0,#0x3\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x4]\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_080059c8\n\
     ldr        r1,PTR_DAT_08039ad0\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08039ad4\n\
     ldrh       r0,[r4,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
LAB_080399ea:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x3\n\
     bls        LAB_080399a6\n\
     ldr        r0,PTR_DAT_08039ac8\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08039aa8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08039ab8\n\
     strh       r1,[r0,#0x0]\n\
     bl         fun_08039c9c\n\
LAB_08039a06:\n\
     ldr        r1,PTR_DAT_08039ac4\n\
     ldr        r0,PTR_DAT_08039a74\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08039aa8\n\
     ldr        r1,DAT_08039a90\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r0,r3]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r2,r0\n\
     bge        LAB_08039a20\n\
     b          LAB_08039b42\n\
LAB_08039a20:\n\
     ldr        r1,DAT_08039a98\n\
     ldr        r0,DAT_08039ad8\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08039adc\n\
     ldr        r4,PTR_DAT_08039a84\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x7\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     bl         fun_08039bb4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldr        r5,PTR_DAT_08039a80\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08039a4a\n\
     add        r0,#0x7\n\
LAB_08039a4a:\n\
     asr        r0,r0,#0x3\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x4]\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0x1\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     bl         fun_080059c8\n\
     ldr        r1,PTR_DAT_08039ad0\n\
     ldrh       r0,[r4,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08039ad4\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08039ab8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08039b7e\n\
.space 1\n\
.space 1\n\
PTR_DAT_08039a74:\n\
     .4byte       DAT_02011480\n\
PTR_DAT_08039a78:\n\
     .4byte       DAT_0201146c\n\
PTR_DAT_08039a7c:\n\
     .4byte       DAT_02011478\n\
PTR_DAT_08039a80:\n\
     .4byte       DAT_02011474\n\
PTR_DAT_08039a84:\n\
     .4byte       DAT_02011460\n\
PTR_DAT_08039a88:\n\
     .4byte       DAT_02011444\n\
DAT_08039a8c:\n\
     .4byte 0x0865F9B4\n\
DAT_08039a90:\n\
     .4byte 0x02011464\n\
DAT_08039a94:\n\
     .4byte 0x0865F9C8\n\
DAT_08039a98:\n\
     .4byte 0x087D5EA8\n\
DAT_08039a9c:\n\
     .4byte 0x0865F9E0\n\
DAT_08039aa0:\n\
     .4byte 0x02011458\n\
DAT_08039aa4:\n\
     .4byte 0x0865F9F8\n\
DAT_08039aa8:\n\
     .4byte 0x0201144C\n\
DAT_08039aac:\n\
     .4byte 0x0865FA0C\n\
DAT_08039ab0:\n\
     .4byte 0x02011468\n\
DAT_08039ab4:\n\
     .4byte 0x0865FA1C\n\
DAT_08039ab8:\n\
     .4byte 0x02011484\n\
DAT_08039abc:\n\
     .4byte 0x0865FA30\n\
DAT_08039ac0:\n\
     .4byte 0x0865FA3C\n\
PTR_DAT_08039ac4:\n\
     .4byte       DAT_02011448\n\
PTR_DAT_08039ac8:\n\
     .4byte       DAT_02011440\n\
PTR_DAT_08039acc:\n\
     .4byte       DAT_0201145c\n\
PTR_DAT_08039ad0:\n\
     .4byte       DAT_02011454\n\
PTR_DAT_08039ad4:\n\
     .4byte       DAT_0201147c\n\
DAT_08039ad8:\n\
     .4byte 0x00007FFF\n\
LAB_08039adc:\n\
     mov        r6,#0x0\n\
LAB_08039ade:\n\
     mov        r0,r9\n\
     asr        r0,r6\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039b28\n\
     ldr        r5,PTR_DAT_08039b90\n\
     ldrh       r1,[r5,#0x0]\n\
     lsl        r0,r1,#0x11\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_08039bb4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     ldr        r4,PTR_DAT_08039b94\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08039b0a\n\
     add        r0,#0x7\n\
LAB_08039b0a:\n\
     asr        r0,r0,#0x3\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x4]\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_080059c8\n\
     ldr        r1,PTR_DAT_08039b98\n\
     ldrh       r5,[r5,#0x0]\n\
     lsl        r0,r5,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08039b9c\n\
     ldrh       r0,[r4,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
LAB_08039b28:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x3\n\
     bls        LAB_08039ade\n\
     ldr        r1,PTR_DAT_08039ba0\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08039ba4\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08039ba8\n\
     strh       r1,[r0,#0x0]\n\
LAB_08039b42:\n\
     ldr        r2,PTR_DAT_08039bac\n\
     ldr        r0,PTR_DAT_08039b90\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08039ba8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039b5a\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x5\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r2,#0x0]\n\
LAB_08039b5a:\n\
     ldr        r5,PTR_DAT_08039bb0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     ldr        r4,PTR_DAT_08039b94\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r4,r3]\n\
     sub        r0,r0,r1\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     bl         __modsi3\n\
     ldrh       r4,[r4,#0x0]\n\
     add        r0,r4,r0\n\
     ldr        r2,[sp,#0x8]\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r1,r1,r0\n\
     strh       r1,[r5,#0x0]\n\
LAB_08039b7e:\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08039b90:\n\
     .4byte       DAT_02011460\n\
PTR_DAT_08039b94:\n\
     .4byte       DAT_02011474\n\
PTR_DAT_08039b98:\n\
     .4byte       DAT_02011454\n\
PTR_DAT_08039b9c:\n\
     .4byte       DAT_0201147c\n\
PTR_DAT_08039ba0:\n\
     .4byte       DAT_0201144c\n\
PTR_DAT_08039ba4:\n\
     .4byte       DAT_02011440\n\
PTR_DAT_08039ba8:\n\
     .4byte       DAT_02011484\n\
PTR_DAT_08039bac:\n\
     .4byte       DAT_02011468\n\
PTR_DAT_08039bb0:\n\
     .4byte       DAT_02011478\n\
    ");
}
__attribute__((naked)) void fun_08039bb4()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x13\n\
     cmp        r1,#0x1\n\
     bne        LAB_08039bc0\n\
     mov        r0,#0x1\n\
     b          LAB_08039c26\n\
LAB_08039bc0:\n\
     cmp        r1,#0x4\n\
     bne        LAB_08039bc8\n\
     mov        r0,#0x3\n\
     b          LAB_08039c26\n\
LAB_08039bc8:\n\
     cmp        r1,#0x8\n\
     bne        LAB_08039bd0\n\
     mov        r0,#0x7\n\
     b          LAB_08039c26\n\
LAB_08039bd0:\n\
     cmp        r1,#0x10\n\
     bne        LAB_08039bd8\n\
     mov        r0,#0xf\n\
     b          LAB_08039c26\n\
LAB_08039bd8:\n\
     cmp        r1,#0x20\n\
     bne        LAB_08039be0\n\
     mov        r0,#0x1f\n\
     b          LAB_08039c26\n\
LAB_08039be0:\n\
     cmp        r1,#0x40\n\
     bne        LAB_08039be8\n\
     mov        r0,#0x3f\n\
     b          LAB_08039c26\n\
LAB_08039be8:\n\
     cmp        r1,#0x80\n\
     bne        LAB_08039bf0\n\
     mov        r0,#0x7f\n\
     b          LAB_08039c26\n\
LAB_08039bf0:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     cmp        r1,r0\n\
     bne        LAB_08039bfc\n\
     mov        r0,#0xff\n\
     b          LAB_08039c26\n\
LAB_08039bfc:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     cmp        r1,r0\n\
     beq        LAB_08039c14\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x3\n\
     cmp        r1,r0\n\
     beq        LAB_08039c14\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x4\n\
     cmp        r1,r0\n\
     bne        LAB_08039c18\n\
LAB_08039c14:\n\
     sub        r0,#0x1\n\
     b          LAB_08039c26\n\
LAB_08039c18:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x5\n\
     cmp        r1,r0\n\
     beq        LAB_08039c24\n\
     mov        r0,#0x0\n\
     b          LAB_08039c26\n\
LAB_08039c24:\n\
     ldr        r0,DAT_08039c28\n\
LAB_08039c26:\n\
     bx         lr\n\
DAT_08039c28:\n\
     .4byte 0x00000FFF\n\
    ");
}
__attribute__((naked)) void fun_08039c2c()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,PTR_DAT_08039c70\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08039c74\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08039c78\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08039c7c\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_08039c9c\n\
     ldr        r0,PTR_DAT_08039c80\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08039c84\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08039c88\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08039c8c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08039c90\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08039c94\n\
     ldr        r0,DAT_08039c98\n\
     str        r0,[r1,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08039c70:\n\
     .4byte       DAT_02011470\n\
PTR_DAT_08039c74:\n\
     .4byte       DAT_02011460\n\
PTR_DAT_08039c78:\n\
     .4byte       DAT_02011474\n\
PTR_DAT_08039c7c:\n\
     .4byte       DAT_0201144c\n\
PTR_DAT_08039c80:\n\
     .4byte       DAT_02011444\n\
PTR_DAT_08039c84:\n\
     .4byte       DAT_02011440\n\
PTR_DAT_08039c88:\n\
     .4byte       DAT_02011484\n\
PTR_DAT_08039c8c:\n\
     .4byte       DAT_02011478\n\
PTR_DAT_08039c90:\n\
     .4byte       DAT_02011480\n\
PTR_DAT_08039c94:\n\
     .4byte       DAT_02011448\n\
DAT_08039c98:\n\
     .4byte 0xFFFFD8F0\n\
    ");
}
__attribute__((naked)) void fun_08039c9c()
{
    asm("\n\
     ldr        r2,DAT_08039cc0\n\
     ldr        r3,DAT_08039cc4\n\
     ldr        r0,[r3,#0x0]\n\
     ldrh       r1,[r0,#0x0]\n\
     strh       r1,[r2,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r3,#0x0]\n\
     ldr        r2,DAT_08039cc8\n\
     ldrh       r1,[r0,#0x0]\n\
     strh       r1,[r2,#0x0]\n\
     add        r1,r0,#0x2\n\
     str        r1,[r3,#0x0]\n\
     ldr        r2,DAT_08039ccc\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r2,#0x0]\n\
     add        r1,#0x2\n\
     str        r1,[r3,#0x0]\n\
     bx         lr\n\
DAT_08039cc0:\n\
     .4byte 0x02011464\n\
DAT_08039cc4:\n\
     .4byte 0x02011470\n\
DAT_08039cc8:\n\
     .4byte 0x087D5EA8\n\
DAT_08039ccc:\n\
     .4byte 0x02011458\n\
    ");
}
__attribute__((naked)) void fun_08039cd0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     add        r2,r1,#0x0\n\
     cmp        r4,#0x1\n\
     bhi        LAB_08039d10\n\
     cmp        r1,#0x0\n\
     beq        LAB_08039d10\n\
     mov        r0,#0x3c\n\
     add        r1,r2,#0x0\n\
     bl         __divsi3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     ldr        r5,DAT_08039d14\n\
     lsl        r4,r4,#0x3\n\
     add        r0,r5,#0x4\n\
     add        r0,r4,r0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x3c\n\
     bl         __umodsi3\n\
     cmp        r0,r6\n\
     bcs        LAB_08039d1c\n\
     add        r0,r4,r5\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08039d18\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_08039d10:\n\
     mov        r0,#0x0\n\
     b          LAB_08039d32\n\
DAT_08039d14:\n\
     .4byte 0x02011490\n\
DAT_08039d18:\n\
     .4byte 0x0000FDFF\n\
LAB_08039d1c:\n\
     cmp        r0,r6\n\
     bne        LAB_08039d10\n\
     add        r0,r4,r5\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x1\n\
LAB_08039d32:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08039d38()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x2\n\
     bhi        LAB_08039d68\n\
     mov        r4,#0x0\n\
     cmp        r4,r5\n\
     bcs        LAB_08039d68\n\
     ldr        r6,DAT_08039d70\n\
     add        r7,r6,#0x4\n\
LAB_08039d4c:\n\
     ldr        r0,DAT_08039d74\n\
     bl         fun_08003998\n\
     lsl        r2,r4,#0x3\n\
     add        r1,r2,r6\n\
     str        r0,[r1,#0x0]\n\
     add        r2,r2,r7\n\
     mov        r0,#0x0\n\
     str        r0,[r2,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,r5\n\
     bcc        LAB_08039d4c\n\
LAB_08039d68:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08039d70:\n\
     .4byte 0x02011490\n\
DAT_08039d74:\n\
     .4byte 0x084495D8\n\
    ");
}
__attribute__((naked)) void fun_08039d78()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x2\n\
     bhi        LAB_08039d9e\n\
     mov        r4,#0x0\n\
     cmp        r4,r5\n\
     bcs        LAB_08039d9e\n\
     ldr        r6,DAT_08039da4\n\
LAB_08039d8a:\n\
     lsl        r0,r4,#0x3\n\
     add        r0,r0,r6\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,r5\n\
     bcc        LAB_08039d8a\n\
LAB_08039d9e:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08039da4:\n\
     .4byte 0x02011490\n\
    ");
}
__attribute__((naked)) void fun_08039da8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r1,[sp,#0x18]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     lsl        r3,r3,#0x10\n\
     lsr        r7,r3,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r8,r1\n\
     cmp        r0,#0x1\n\
     bhi        LAB_08039e0e\n\
     ldr        r6,DAT_08039e18\n\
     lsl        r5,r0,#0x3\n\
     add        r1,r6,#0x4\n\
     add        r1,r5,r1\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r1,#0x80\n\
     bl         fun_08002c9c\n\
     add        r4,r0,#0x0\n\
     add        r5,r5,r6\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r4,r4,#0x10\n\
     lsr        r1,r4,#0x10\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_0800482c\n\
     asr        r4,r4,#0x10\n\
     mov        r0,#0x40\n\
     add        r1,r4,#0x0\n\
     bl         fun_08002c84\n\
     ldr        r2,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x11\n\
     lsl        r1,r7,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r1,r1,r0\n\
     strh       r1,[r2,#0x2]\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x4]\n\
LAB_08039e0e:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08039e18:\n\
     .4byte 0x02011490\n\
    ");
}
__attribute__((naked)) void fun_08039e1c()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bhi        LAB_08039e38\n\
     ldr        r1,DAT_08039e3c\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_08039e38:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08039e3c:\n\
     .4byte 0x02011490\n\
    ");
}
__attribute__((naked)) void fun_08039e40()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bhi        LAB_08039e58\n\
     ldr        r1,DAT_08039e5c\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08039e60\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_08039e58:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08039e5c:\n\
     .4byte 0x02011490\n\
DAT_08039e60:\n\
     .4byte 0x0000FDFF\n\
    ");
}
__attribute__((naked)) void fun_08039e64()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     ldr        r0,DAT_08039ecc\n\
     bl         fun_0803aabc\n\
     bl         fun_08004adc\n\
     ldr        r1,DAT_08039ed0\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08039ed4\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08039ed8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r5,[r4,#0x0]\n\
     ldr        r0,DAT_08039edc\n\
     str        r5,[r0,#0x0]\n\
     ldr        r0,DAT_08039ee0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,[r5,#0x4]\n\
     mov        r1,#0x4\n\
     and        r0,r1\n\
     mov        r1,#0x1\n\
     mov        r8,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039ea4\n\
     mov        r2,#0x0\n\
     mov        r8,r2\n\
LAB_08039ea4:\n\
     mov        r6,#0x0\n\
     ldrh       r0,[r5,#0x8]\n\
     cmp        r6,r0\n\
     bcs        LAB_08039f7c\n\
     mov        r4,sp\n\
     mov        r7,#0x1\n\
LAB_08039eb0:\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     ldrh       r0,[r5,#0x2]\n\
     strh       r0,[r4,#0x6]\n\
     mov        r1,r8\n\
     strh       r1,[r4,#0x8]\n\
     strh       r7,[r4,#0xc]\n\
     cmp        r6,#0x1\n\
     beq        LAB_08039f10\n\
     cmp        r6,#0x1\n\
     bgt        LAB_08039ee4\n\
     cmp        r6,#0x0\n\
     beq        LAB_08039eee\n\
     b          LAB_08039f70\n\
DAT_08039ecc:\n\
     .4byte 0x0803A921\n\
DAT_08039ed0:\n\
     .4byte 0x020114B0\n\
DAT_08039ed4:\n\
     .4byte 0x020114A4\n\
DAT_08039ed8:\n\
     .4byte 0x0200056E\n\
DAT_08039edc:\n\
     .4byte 0x02005CE8\n\
DAT_08039ee0:\n\
     .4byte 0x02005CEC\n\
LAB_08039ee4:\n\
     cmp        r6,#0x2\n\
     beq        LAB_08039f32\n\
     cmp        r6,#0x3\n\
     beq        LAB_08039f52\n\
     b          LAB_08039f70\n\
LAB_08039eee:\n\
     ldr        r0,[r5,#0x4]\n\
     mov        r1,#0x8\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08039f70\n\
     ldr        r0,[r5,#0xc]\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r4,#0xa]\n\
     mov        r0,sp\n\
     mov        r1,#0x0\n\
     bl         fun_08004da8\n\
     mov        r0,#0x0\n\
     bl         fun_08004c1c\n\
     b          LAB_08039f70\n\
LAB_08039f10:\n\
     ldr        r0,[r5,#0x4]\n\
     mov        r1,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08039f70\n\
     ldr        r0,[r5,#0x10]\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r4,#0xa]\n\
     mov        r0,sp\n\
     mov        r1,#0x1\n\
     bl         fun_08004da8\n\
     mov        r0,#0x1\n\
     bl         fun_08004c1c\n\
     b          LAB_08039f70\n\
LAB_08039f32:\n\
     ldr        r0,[r5,#0x4]\n\
     mov        r1,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08039f70\n\
     ldr        r0,[r5,#0x14]\n\
     str        r0,[sp,#0x0]\n\
     strh       r7,[r4,#0xa]\n\
     mov        r0,sp\n\
     mov        r1,#0x2\n\
     bl         fun_08004da8\n\
     mov        r0,#0x2\n\
     bl         fun_08004c1c\n\
     b          LAB_08039f70\n\
LAB_08039f52:\n\
     ldr        r1,[r5,#0x4]\n\
     mov        r0,#0x40\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08039f70\n\
     ldr        r0,[r5,#0x18]\n\
     str        r0,[sp,#0x0]\n\
     strh       r1,[r4,#0xa]\n\
     mov        r0,sp\n\
     mov        r1,#0x3\n\
     bl         fun_08004da8\n\
     mov        r0,#0x3\n\
     bl         fun_08004c1c\n\
LAB_08039f70:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     ldrh       r2,[r5,#0x8]\n\
     cmp        r6,r2\n\
     bcc        LAB_08039eb0\n\
LAB_08039f7c:\n\
     ldr        r0,[r5,#0x20]\n\
     bl         fun_08004bb0\n\
     ldr        r0,[r5,#0x28]\n\
     bl         fun_08004b74\n\
     ldr        r1,[r5,#0x4]\n\
     mov        r0,#0x3\n\
     and        r1,r0\n\
     ldr        r0,[r5,#0x24]\n\
     bl         fun_08004bcc\n\
     ldr        r0,[r5,#0x50]\n\
     bl         fun_08004bec\n\
     ldr        r0,[r5,#0x3c]\n\
     bl         fun_08004bf8\n\
     ldr        r0,[r5,#0x4]\n\
     mov        r1,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08039fb0\n\
     mov        r0,#0x1\n\
     bl         fun_08004be0\n\
LAB_08039fb0:\n\
     ldr        r1,DAT_08039fec\n\
     ldrh       r2,[r5,#0x0]\n\
     lsl        r0,r2,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08039ff0\n\
     ldrh       r5,[r5,#0x2]\n\
     lsl        r0,r5,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08039ff4\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08039ff8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08039ffc\n\
     ldr        r2,DAT_0803a000\n\
     add        r1,r2,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_0803a004\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0803a008\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        sp,#0x10\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08039fec:\n\
     .4byte 0x020101C4\n\
DAT_08039ff0:\n\
     .4byte 0x0200F944\n\
DAT_08039ff4:\n\
     .4byte 0x020114A0\n\
DAT_08039ff8:\n\
     .4byte 0x020114A8\n\
DAT_08039ffc:\n\
     .4byte 0x020114AC\n\
DAT_0803a000:\n\
     .4byte 0x00002328\n\
DAT_0803a004:\n\
     .4byte 0x020114B4\n\
DAT_0803a008:\n\
     .4byte 0x0200056C\n\
    ");
}
__attribute__((naked)) void fun_0803a00c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r0,#0x0\n\
     b          LAB_0803a126\n\
LAB_0803a016:\n\
     ldr        r0,DAT_0803a0bc\n\
     mov        r2,r8\n\
     lsl        r1,r2,#0x5\n\
     ldr        r0,[r0,#0x0]\n\
     add        r4,r0,r1\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r7,[r0,#0xc]\n\
     ldr        r1,DAT_0803a0c0\n\
     ldrh       r3,[r4,#0x4]\n\
     ldrh       r5,[r7,#0xc]\n\
     add        r0,r3,r5\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldr        r1,DAT_0803a0c4\n\
     ldrh       r3,[r4,#0x6]\n\
     ldrh       r5,[r7,#0xe]\n\
     add        r0,r3,r5\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     ldr        r0,DAT_0803a0c8\n\
     ldrh       r3,[r7,#0x4]\n\
     lsl        r1,r3,#0x1\n\
     add        r0,r1,r0\n\
     ldrh       r3,[r0,#0x0]\n\
     ldr        r0,DAT_0803a0cc\n\
     add        r1,r1,r0\n\
     ldrh       r5,[r1,#0x0]\n\
     mov        r0,#0x30\n\
     ldrh       r1,[r7,#0x8]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a066\n\
     lsl        r0,r3,#0x11\n\
     lsr        r3,r0,#0x10\n\
     lsl        r0,r5,#0x11\n\
     lsr        r5,r0,#0x10\n\
LAB_0803a066:\n\
     add        r2,r2,r3\n\
     lsl        r2,r2,#0x10\n\
     add        r0,r6,r5\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     mov        r0,#0x8c\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     add        r0,r5,#0x0\n\
     add        r0,#0xa0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r2,r1\n\
     bcs        LAB_0803a110\n\
     cmp        r6,r0\n\
     bcs        LAB_0803a110\n\
     ldr        r6,[r4,#0x8]\n\
     cmp        r6,#0x2\n\
     bne        LAB_0803a110\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803a09c\n\
     add        r0,r7,#0x0\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0xc]\n\
LAB_0803a09c:\n\
     ldr        r5,[r4,#0xc]\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     mov        r2,#0x1\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r4,#0x12]\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a0d0\n\
     ldrb       r0,[r4,#0x14]\n\
     strh       r0,[r5,#0x6]\n\
     b          LAB_0803a0e8\n\
DAT_0803a0bc:\n\
     .4byte 0x020114A4\n\
DAT_0803a0c0:\n\
     .4byte 0x020114A0\n\
DAT_0803a0c4:\n\
     .4byte 0x020114A8\n\
DAT_0803a0c8:\n\
     .4byte 0x08049D60\n\
DAT_0803a0cc:\n\
     .4byte 0x08049D90\n\
LAB_0803a0d0:\n\
     mov        r0,#0x3\n\
     strh       r0,[r5,#0x6]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a0de\n\
     strh       r6,[r5,#0x6]\n\
LAB_0803a0de:\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a0e8\n\
     strh       r2,[r5,#0x6]\n\
LAB_0803a0e8:\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0803a108\n\
     ldrh       r5,[r4,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,r5,r0\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0803a10c\n\
     ldrh       r2,[r4,#0x6]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,r2,r0\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0xc]\n\
     ldrh       r0,[r4,#0x10]\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803a11e\n\
DAT_0803a108:\n\
     .4byte 0x020114A0\n\
DAT_0803a10c:\n\
     .4byte 0x020114A8\n\
LAB_0803a110:\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a11e\n\
     bl         fun_08003b00\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0xc]\n\
LAB_0803a11e:\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
LAB_0803a126:\n\
     mov        r8,r0\n\
     ldr        r0,DAT_0803a13c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r8,r0\n\
     bcs        LAB_0803a132\n\
     b          LAB_0803a016\n\
LAB_0803a132:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803a13c:\n\
     .4byte 0x020114B0\n\
    ");
}
__attribute__((naked)) void fun_0803a140()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r4,DAT_0803a1c4\n\
     sub        r0,#0x78\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r6,DAT_0803a1c8\n\
     sub        r1,#0x50\n\
     strh       r1,[r6,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a160\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0803a160:\n\
     lsl        r0,r1,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a16a\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
LAB_0803a16a:\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r4,r0]\n\
     ldr        r0,DAT_0803a1cc\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xf0\n\
     cmp        r1,r0\n\
     ble        LAB_0803a17a\n\
     strh       r0,[r4,#0x0]\n\
LAB_0803a17a:\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r6,r2]\n\
     ldr        r0,DAT_0803a1d0\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xa0\n\
     cmp        r1,r0\n\
     ble        LAB_0803a18a\n\
     strh       r0,[r6,#0x0]\n\
LAB_0803a18a:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r6,r2]\n\
     bl         fun_08005ac8\n\
     mov        r0,#0x0\n\
     ldrsh      r5,[r4,r0]\n\
     ldr        r0,DAT_0803a1d4\n\
     mov        r1,#0x0\n\
     ldrsh      r4,[r0,r1]\n\
     sub        r0,r5,r4\n\
     cmp        r0,#0x8\n\
     bgt        LAB_0803a1b8\n\
     mov        r2,#0x0\n\
     ldrsh      r3,[r6,r2]\n\
     ldr        r0,DAT_0803a1d8\n\
     mov        r1,#0x0\n\
     ldrsh      r2,[r0,r1]\n\
     sub        r1,r3,r2\n\
     add        r6,r0,#0x0\n\
     cmp        r1,#0x8\n\
     ble        LAB_0803a1e0\n\
LAB_0803a1b8:\n\
     ldr        r1,DAT_0803a1dc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r6,DAT_0803a1d8\n\
     b          LAB_0803a1f2\n\
.space 1\n\
.space 1\n\
DAT_0803a1c4:\n\
     .4byte 0x020114A0\n\
DAT_0803a1c8:\n\
     .4byte 0x020114A8\n\
DAT_0803a1cc:\n\
     .4byte 0x020101C4\n\
DAT_0803a1d0:\n\
     .4byte 0x0200F944\n\
DAT_0803a1d4:\n\
     .4byte 0x020114AC\n\
DAT_0803a1d8:\n\
     .4byte 0x020114B4\n\
DAT_0803a1dc:\n\
     .4byte 0x0200056E\n\
LAB_0803a1e0:\n\
     sub        r0,r4,r5\n\
     cmp        r0,#0x8\n\
     bgt        LAB_0803a1ec\n\
     sub        r0,r2,r3\n\
     cmp        r0,#0x8\n\
     ble        LAB_0803a1f2\n\
LAB_0803a1ec:\n\
     ldr        r1,DAT_0803a208\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803a1f2:\n\
     ldr        r1,DAT_0803a20c\n\
     ldr        r0,DAT_0803a210\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0803a214\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803a208:\n\
     .4byte 0x0200056E\n\
DAT_0803a20c:\n\
     .4byte 0x020114AC\n\
DAT_0803a210:\n\
     .4byte 0x020114A0\n\
DAT_0803a214:\n\
     .4byte 0x020114A8\n\
    ");
}
__attribute__((naked)) void fun_0803a218()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x40\n\
     str        r3,[sp,#0x8]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x0]\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[sp,#0x4]\n\
     ldrh       r6,[r0,#0x0]\n\
     ldrh       r4,[r0,#0x2]\n\
     ldrh       r7,[r0,#0x4]\n\
     ldrh       r0,[r0,#0x6]\n\
     str        r0,[sp,#0x20]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x1c]\n\
     ldrh       r2,[r3,#0x0]\n\
     sub        r1,r1,r2\n\
     lsl        r1,r1,#0x10\n\
     ldr        r5,[sp,#0x4]\n\
     ldr        r3,[sp,#0x60]\n\
     ldrh       r3,[r3,#0x0]\n\
     sub        r0,r5,r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x10]\n\
     ldr        r5,[sp,#0x8]\n\
     ldrh       r0,[r5,#0x0]\n\
     lsr        r2,r1,#0x10\n\
     str        r2,[sp,#0xc]\n\
     cmp        r1,#0x0\n\
     ble        LAB_0803a264\n\
     add        r0,#0x7\n\
     b          LAB_0803a266\n\
LAB_0803a264:\n\
     sub        r0,#0x7\n\
LAB_0803a266:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x14]\n\
     lsl        r5,r0,#0x10\n\
     asr        r5,r5,#0x10\n\
     lsl        r6,r6,#0x10\n\
     str        r6,[sp,#0x24]\n\
     asr        r6,r6,#0x10\n\
     add        r6,r5,r6\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     ldr        r3,[sp,#0x60]\n\
     mov        r0,#0x0\n\
     ldrsh      r3,[r3,r0]\n\
     mov        r8,r3\n\
     lsl        r4,r4,#0x10\n\
     str        r4,[sp,#0x28]\n\
     asr        r4,r4,#0x10\n\
     add        r4,r8\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     ldr        r1,DAT_0803a34c\n\
     ldr        r2,[r1,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x18]\n\
     lsl        r7,r7,#0x10\n\
     mov        r10,r7\n\
     mov        r2,r10\n\
     asr        r0,r2,#0x10\n\
     add        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     ldr        r3,DAT_0803a34c\n\
     ldr        r2,[r3,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     ldr        r0,[sp,#0x20]\n\
     lsl        r4,r0,#0x10\n\
     asr        r0,r4,#0x10\n\
     add        r8,r0\n\
     mov        r1,r8\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r8,r1\n\
     ldr        r3,DAT_0803a34c\n\
     ldr        r2,[r3,#0x0]\n\
     add        r0,r6,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r0,DAT_0803a34c\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     mov        r1,r8\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     ldr        r5,[sp,#0x24]\n\
     ldr        r2,[sp,#0x28]\n\
     str        r2,[sp,#0x2c]\n\
     mov        r3,r10\n\
     str        r3,[sp,#0x30]\n\
     str        r4,[sp,#0x34]\n\
     ldr        r0,[sp,#0x18]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803a310\n\
     mov        r2,r9\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803a310\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803a310\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803a314\n\
LAB_0803a310:\n\
     mov        r3,#0x1\n\
     str        r3,[sp,#0x1c]\n\
LAB_0803a314:\n\
     ldr        r2,[sp,#0xc]\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803a350\n\
     mov        r3,r9\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803a328\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803a382\n\
LAB_0803a328:\n\
     ldr        r1,[sp,#0x14]\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x30]\n\
     asr        r4,r2,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r3,#0x8\n\
     mul        r0,r3\n\
     sub        r0,r0,r4\n\
     sub        r0,#0x1\n\
     ldr        r1,[sp,#0x0]\n\
     cmp        r1,r0\n\
     ble        LAB_0803a382\n\
     b          LAB_0803a37c\n\
.space 1\n\
.space 1\n\
DAT_0803a34c:\n\
     .4byte 0x020114B8\n\
LAB_0803a350:\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a382\n\
     ldr        r2,[sp,#0x18]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803a35e\n\
     cmp        r7,#0x0\n\
     beq        LAB_0803a382\n\
LAB_0803a35e:\n\
     ldr        r3,[sp,#0x14]\n\
     lsl        r0,r3,#0x10\n\
     asr        r0,r0,#0x10\n\
     asr        r4,r5,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r1,#0x8\n\
     mul        r0,r1\n\
     sub        r0,r0,r4\n\
     add        r0,#0x8\n\
     ldr        r2,[sp,#0x0]\n\
     cmp        r2,r0\n\
     bge        LAB_0803a382\n\
LAB_0803a37c:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
LAB_0803a382:\n\
     ldr        r3,[sp,#0x0]\n\
     str        r3,[sp,#0x14]\n\
     ldr        r0,[sp,#0x60]\n\
     ldrh       r1,[r0,#0x0]\n\
     ldr        r2,[sp,#0x10]\n\
     lsl        r0,r2,#0x10\n\
     str        r0,[sp,#0x38]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803a398\n\
     add        r0,r1,#0x7\n\
     b          LAB_0803a39a\n\
LAB_0803a398:\n\
     sub        r0,r1,#0x7\n\
LAB_0803a39a:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     ldr        r3,DAT_0803a468\n\
     mov        r8,r3\n\
     ldr        r0,[sp,#0x14]\n\
     lsl        r6,r0,#0x10\n\
     asr        r6,r6,#0x10\n\
     asr        r2,r5,#0x10\n\
     add        r2,r6,r2\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     mov        r1,r10\n\
     lsl        r5,r1,#0x10\n\
     asr        r5,r5,#0x10\n\
     ldr        r3,[sp,#0x2c]\n\
     asr        r4,r3,#0x10\n\
     add        r4,r5,r4\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r0,r8\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r1,r4,#0x0\n\
     str        r2,[sp,#0x3c]\n\
     bl         _call_via_r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x18]\n\
     ldr        r1,[sp,#0x30]\n\
     asr        r0,r1,#0x10\n\
     add        r6,r6,r0\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     mov        r0,r8\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         _call_via_r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     ldr        r1,[sp,#0x34]\n\
     asr        r0,r1,#0x10\n\
     add        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     mov        r0,r8\n\
     ldr        r3,[r0,#0x0]\n\
     ldr        r2,[sp,#0x3c]\n\
     add        r0,r2,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         _call_via_r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r1,r8\n\
     ldr        r2,[r1,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     ldr        r2,[sp,#0x18]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803a432\n\
     mov        r3,r9\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803a432\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803a432\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803a436\n\
LAB_0803a432:\n\
     mov        r5,#0x1\n\
     str        r5,[sp,#0x1c]\n\
LAB_0803a436:\n\
     ldr        r2,[sp,#0x38]\n\
     asr        r0,r2,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803a46c\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803a446\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803a4a2\n\
LAB_0803a446:\n\
     mov        r3,r10\n\
     lsl        r0,r3,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r5,[sp,#0x34]\n\
     asr        r4,r5,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r1,#0x8\n\
     mul        r0,r1\n\
     sub        r0,r0,r4\n\
     sub        r0,#0x1\n\
     ldr        r2,[sp,#0x4]\n\
     cmp        r2,r0\n\
     ble        LAB_0803a4a2\n\
     b          LAB_0803a49c\n\
DAT_0803a468:\n\
     .4byte 0x020114B8\n\
LAB_0803a46c:\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a4a2\n\
     ldr        r3,[sp,#0x18]\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803a47c\n\
     mov        r5,r9\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803a4a2\n\
LAB_0803a47c:\n\
     mov        r1,r10\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x2c]\n\
     asr        r4,r2,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r3,#0x8\n\
     mul        r0,r3\n\
     sub        r0,r0,r4\n\
     add        r0,#0x8\n\
     ldr        r5,[sp,#0x4]\n\
     cmp        r5,r0\n\
     bge        LAB_0803a4a2\n\
LAB_0803a49c:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x4]\n\
LAB_0803a4a2:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     ldr        r0,[sp,#0x8]\n\
     strh       r1,[r0,#0x0]\n\
     mov        r2,sp\n\
     ldrh       r3,[r2,#0x4]\n\
     ldr        r2,[sp,#0x60]\n\
     strh       r3,[r2,#0x0]\n\
     ldr        r0,[sp,#0x1c]\n\
     add        sp,#0x40\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803a4c4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x50\n\
     str        r0,[sp,#0x4]\n\
     str        r3,[sp,#0x10]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x8]\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[sp,#0xc]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x30]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x34]\n\
     ldr        r2,[sp,#0x4]\n\
     ldrh       r6,[r2,#0x0]\n\
     ldrh       r4,[r2,#0x2]\n\
     ldrh       r7,[r2,#0x4]\n\
     ldrh       r3,[r2,#0x6]\n\
     str        r3,[sp,#0x2c]\n\
     mov        r5,#0x0\n\
     str        r5,[sp,#0x28]\n\
     ldr        r2,[sp,#0x8]\n\
     ldr        r0,[sp,#0x10]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r1,r2,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r3,[sp,#0xc]\n\
     ldr        r2,[sp,#0x70]\n\
     ldrh       r2,[r2,#0x0]\n\
     sub        r0,r3,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x18]\n\
     ldr        r3,[sp,#0x10]\n\
     ldrh       r0,[r3,#0x0]\n\
     lsr        r5,r1,#0x10\n\
     str        r5,[sp,#0x14]\n\
     cmp        r1,#0x0\n\
     ble        LAB_0803a520\n\
     add        r0,#0x7\n\
     b          LAB_0803a522\n\
LAB_0803a520:\n\
     sub        r0,#0x7\n\
LAB_0803a522:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x1c]\n\
     lsl        r5,r0,#0x10\n\
     asr        r5,r5,#0x10\n\
     lsl        r6,r6,#0x10\n\
     str        r6,[sp,#0x38]\n\
     asr        r6,r6,#0x10\n\
     add        r6,r5,r6\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     ldr        r0,[sp,#0x70]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r8,r0\n\
     lsl        r4,r4,#0x10\n\
     str        r4,[sp,#0x3c]\n\
     asr        r4,r4,#0x10\n\
     add        r4,r8\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     ldr        r3,DAT_0803a5ec\n\
     ldr        r2,[r3,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x24]\n\
     lsl        r7,r7,#0x10\n\
     mov        r10,r7\n\
     mov        r1,r10\n\
     asr        r0,r1,#0x10\n\
     add        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     ldr        r3,DAT_0803a5ec\n\
     ldr        r2,[r3,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     ldr        r0,[sp,#0x2c]\n\
     lsl        r4,r0,#0x10\n\
     asr        r0,r4,#0x10\n\
     add        r8,r0\n\
     mov        r1,r8\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r8,r1\n\
     ldr        r3,DAT_0803a5ec\n\
     ldr        r2,[r3,#0x0]\n\
     add        r0,r6,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r0,DAT_0803a5ec\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     mov        r1,r8\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldr        r5,[sp,#0x38]\n\
     ldr        r1,[sp,#0x3c]\n\
     str        r1,[sp,#0x40]\n\
     mov        r3,r10\n\
     str        r3,[sp,#0x44]\n\
     str        r4,[sp,#0x48]\n\
     ldr        r0,[sp,#0x24]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803a5cc\n\
     mov        r1,r9\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803a5cc\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803a5cc\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803a5d0\n\
LAB_0803a5cc:\n\
     mov        r3,#0x1\n\
     str        r3,[sp,#0x28]\n\
LAB_0803a5d0:\n\
     ldr        r1,[sp,#0x14]\n\
     lsl        r0,r1,#0x10\n\
     add        r1,r0,#0x0\n\
     cmp        r1,#0x0\n\
     ble        LAB_0803a5fe\n\
     mov        r3,r9\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803a5f0\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803a5fe\n\
     ldr        r0,[sp,#0x34]\n\
     add        r0,#0x1\n\
     b          LAB_0803a5f8\n\
.space 1\n\
.space 1\n\
DAT_0803a5ec:\n\
     .4byte 0x020114B8\n\
LAB_0803a5f0:\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803a5fe\n\
     ldr        r0,[sp,#0x34]\n\
     sub        r0,#0x1\n\
LAB_0803a5f8:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x34]\n\
LAB_0803a5fe:\n\
     cmp        r1,#0x0\n\
     bge        LAB_0803a620\n\
     ldr        r0,[sp,#0x24]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a612\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803a620\n\
     ldr        r0,[sp,#0x34]\n\
     add        r0,#0x1\n\
     b          LAB_0803a61a\n\
LAB_0803a612:\n\
     cmp        r7,#0x0\n\
     beq        LAB_0803a620\n\
     ldr        r0,[sp,#0x34]\n\
     sub        r0,#0x1\n\
LAB_0803a61a:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x34]\n\
LAB_0803a620:\n\
     asr        r0,r1,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803a652\n\
     mov        r1,r9\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803a630\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803a684\n\
LAB_0803a630:\n\
     ldr        r2,[sp,#0x1c]\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r3,[sp,#0x44]\n\
     asr        r4,r3,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r1,#0x8\n\
     mul        r0,r1\n\
     sub        r0,r0,r4\n\
     sub        r0,#0x1\n\
     ldr        r2,[sp,#0x8]\n\
     cmp        r2,r0\n\
     ble        LAB_0803a684\n\
     b          LAB_0803a67e\n\
LAB_0803a652:\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a684\n\
     ldr        r3,[sp,#0x24]\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803a660\n\
     cmp        r7,#0x0\n\
     beq        LAB_0803a684\n\
LAB_0803a660:\n\
     ldr        r1,[sp,#0x1c]\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     asr        r4,r5,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r2,#0x8\n\
     mul        r0,r2\n\
     sub        r0,r0,r4\n\
     add        r0,#0x8\n\
     ldr        r3,[sp,#0x8]\n\
     cmp        r3,r0\n\
     bge        LAB_0803a684\n\
LAB_0803a67e:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x8]\n\
LAB_0803a684:\n\
     ldr        r0,[sp,#0x8]\n\
     str        r0,[sp,#0x1c]\n\
     ldr        r2,[sp,#0x70]\n\
     ldrh       r1,[r2,#0x0]\n\
     ldr        r3,[sp,#0x18]\n\
     lsl        r0,r3,#0x10\n\
     mov        r10,r0\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803a69a\n\
     add        r0,r1,#0x7\n\
     b          LAB_0803a69c\n\
LAB_0803a69a:\n\
     sub        r0,r1,#0x7\n\
LAB_0803a69c:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,DAT_0803a74c\n\
     mov        r8,r0\n\
     ldr        r1,[sp,#0x1c]\n\
     lsl        r6,r1,#0x10\n\
     asr        r6,r6,#0x10\n\
     asr        r2,r5,#0x10\n\
     add        r2,r6,r2\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     ldr        r3,[sp,#0x20]\n\
     lsl        r5,r3,#0x10\n\
     asr        r5,r5,#0x10\n\
     ldr        r0,[sp,#0x40]\n\
     asr        r4,r0,#0x10\n\
     add        r4,r5,r4\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r1,r8\n\
     ldr        r3,[r1,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r1,r4,#0x0\n\
     str        r2,[sp,#0x4c]\n\
     bl         _call_via_r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x24]\n\
     ldr        r3,[sp,#0x44]\n\
     asr        r0,r3,#0x10\n\
     add        r6,r6,r0\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     mov        r0,r8\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         _call_via_r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     ldr        r1,[sp,#0x48]\n\
     asr        r0,r1,#0x10\n\
     add        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     mov        r0,r8\n\
     ldr        r3,[r0,#0x0]\n\
     ldr        r2,[sp,#0x4c]\n\
     add        r0,r2,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         _call_via_r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r1,r8\n\
     ldr        r2,[r1,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         _call_via_r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldr        r3,[sp,#0x24]\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803a734\n\
     mov        r5,r9\n\
     cmp        r5,#0x0\n\
     bne        LAB_0803a734\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803a734\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803a738\n\
LAB_0803a734:\n\
     mov        r0,#0x1\n\
     str        r0,[sp,#0x28]\n\
LAB_0803a738:\n\
     mov        r1,r10\n\
     cmp        r1,#0x0\n\
     ble        LAB_0803a75e\n\
     cmp        r7,#0x0\n\
     beq        LAB_0803a750\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803a75e\n\
     ldr        r0,[sp,#0x30]\n\
     add        r0,#0x1\n\
     b          LAB_0803a758\n\
DAT_0803a74c:\n\
     .4byte 0x020114B8\n\
LAB_0803a750:\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803a75e\n\
     ldr        r0,[sp,#0x30]\n\
     sub        r0,#0x1\n\
LAB_0803a758:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x30]\n\
LAB_0803a75e:\n\
     mov        r3,r10\n\
     cmp        r3,#0x0\n\
     bge        LAB_0803a786\n\
     ldr        r5,[sp,#0x24]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803a776\n\
     mov        r0,r9\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803a786\n\
     ldr        r0,[sp,#0x30]\n\
     add        r0,#0x1\n\
     b          LAB_0803a780\n\
LAB_0803a776:\n\
     mov        r1,r9\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803a786\n\
     ldr        r0,[sp,#0x30]\n\
     sub        r0,#0x1\n\
LAB_0803a780:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x30]\n\
LAB_0803a786:\n\
     mov        r3,r10\n\
     asr        r0,r3,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803a7b8\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803a796\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803a7ee\n\
LAB_0803a796:\n\
     ldr        r5,[sp,#0x20]\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r1,[sp,#0x48]\n\
     asr        r4,r1,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r2,#0x8\n\
     mul        r0,r2\n\
     sub        r0,r0,r4\n\
     sub        r0,#0x1\n\
     ldr        r3,[sp,#0xc]\n\
     cmp        r3,r0\n\
     ble        LAB_0803a7ee\n\
     b          LAB_0803a7e8\n\
LAB_0803a7b8:\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a7ee\n\
     ldr        r5,[sp,#0x24]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0803a7c8\n\
     mov        r0,r9\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a7ee\n\
LAB_0803a7c8:\n\
     ldr        r1,[sp,#0x20]\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x40]\n\
     asr        r4,r2,#0x10\n\
     add        r0,r0,r4\n\
     mov        r1,#0x8\n\
     bl         __divsi3\n\
     mov        r3,#0x8\n\
     mul        r0,r3\n\
     sub        r0,r0,r4\n\
     add        r0,#0x8\n\
     ldr        r5,[sp,#0xc]\n\
     cmp        r5,r0\n\
     bge        LAB_0803a7ee\n\
LAB_0803a7e8:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0xc]\n\
LAB_0803a7ee:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x8]\n\
     ldr        r0,[sp,#0x10]\n\
     strh       r1,[r0,#0x0]\n\
     mov        r2,sp\n\
     ldrh       r3,[r2,#0xc]\n\
     ldr        r2,[sp,#0x70]\n\
     strh       r3,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     ldr        r5,[sp,#0x30]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0803a80c\n\
     ldr        r0,[sp,#0x34]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a838\n\
LAB_0803a80c:\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r2,[sp,#0x30]\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x8]\n\
     ldr        r3,[sp,#0xc]\n\
     ldr        r5,[sp,#0x34]\n\
     add        r0,r3,r5\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0xc]\n\
     ldr        r0,[sp,#0x70]\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r2,[sp,#0xc]\n\
     ldr        r3,[sp,#0x10]\n\
     bl         fun_0803a218\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
LAB_0803a838:\n\
     mov        r0,#0x0\n\
     ldr        r2,[sp,#0x28]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803a844\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803a846\n\
LAB_0803a844:\n\
     mov        r0,#0x1\n\
LAB_0803a846:\n\
     add        sp,#0x50\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803a858()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r0,DAT_0803a8f0\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,[r1,#0x44]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803a916\n\
     ldr        r0,DAT_0803a8f4\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a874\n\
     add        r0,#0x7\n\
LAB_0803a874:\n\
     lsl        r0,r0,#0xd\n\
     lsr        r6,r0,#0x10\n\
     ldr        r0,DAT_0803a8f8\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803a884\n\
     add        r0,#0x7\n\
LAB_0803a884:\n\
     lsl        r0,r0,#0xd\n\
     lsr        r5,r0,#0x10\n\
     mov        r3,#0x0\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x40\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r3,r1\n\
     bcs        LAB_0803a916\n\
     mov        r8,r2\n\
     ldr        r7,DAT_0803a8fc\n\
     ldr        r4,DAT_0803a900\n\
     mov        r12,r0\n\
LAB_0803a89c:\n\
     lsl        r0,r3,#0x5\n\
     mov        r1,r8\n\
     add        r2,r1,r0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r7,r1]\n\
     cmp        r0,r3\n\
     beq        LAB_0803a908\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r2,r1]\n\
     cmp        r0,r5\n\
     blt        LAB_0803a908\n\
     mov        r0,#0x2\n\
     ldrsh      r1,[r2,r0]\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x14\n\
     cmp        r1,r0\n\
     bgt        LAB_0803a908\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r2,r1]\n\
     cmp        r0,r6\n\
     blt        LAB_0803a908\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r2,r0]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x1e\n\
     cmp        r1,r0\n\
     bgt        LAB_0803a908\n\
     strh       r3,[r7,#0x0]\n\
     ldr        r0,[r2,#0x10]\n\
     str        r0,[r4,#0x0]\n\
     ldrh       r1,[r2,#0x14]\n\
     ldr        r3,DAT_0803a904\n\
     add        r0,r1,r3\n\
     str        r0,[r4,#0x4]\n\
     ldrh       r2,[r2,#0x16]\n\
     lsr        r0,r2,#0x1\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x18\n\
     orr        r0,r1\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     b          LAB_0803a916\n\
DAT_0803a8f0:\n\
     .4byte 0x02005CE8\n\
DAT_0803a8f4:\n\
     .4byte 0x020114A0\n\
DAT_0803a8f8:\n\
     .4byte 0x020114A8\n\
DAT_0803a8fc:\n\
     .4byte 0x0200056C\n\
DAT_0803a900:\n\
     .4byte 0x040000D4\n\
DAT_0803a904:\n\
     .4byte 0x06004000\n\
LAB_0803a908:\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     mov        r0,r12\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r3,r0\n\
     bcc        LAB_0803a89c\n\
LAB_0803a916:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803a920()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0xb\n\
     and        r1,r0\n\
     lsr        r1,r1,#0x10\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
     orr        r0,r1\n\
     lsr        r0,r0,#0x1f\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803a944()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     mov        r2,#0x0\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0xc\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803a962\n\
     mov        r2,#0x1\n\
LAB_0803a962:\n\
     add        r0,r2,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803a968()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803a980()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_0803a9d4\n\
     ldr        r1,[r0,#0x0]\n\
     add        r7,r0,#0x0\n\
     ldr        r2,DAT_0803a9d8\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803a9c0\n\
     mov        r5,#0x0\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r5,r0\n\
     bcs        LAB_0803a9c0\n\
     add        r6,r7,#0x0\n\
LAB_0803a99a:\n\
     lsl        r1,r5,#0x5\n\
     ldr        r0,[r6,#0x0]\n\
     add        r4,r0,r1\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803a9b2\n\
     str        r2,[sp,#0x0]\n\
     bl         fun_08003b00\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0xc]\n\
     ldr        r2,[sp,#0x0]\n\
LAB_0803a9b2:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     ldr        r0,DAT_0803a9d8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r5,r0\n\
     bcc        LAB_0803a99a\n\
LAB_0803a9c0:\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r7,#0x0]\n\
     bl         fun_08004b2c\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803a9d4:\n\
     .4byte 0x020114A4\n\
DAT_0803a9d8:\n\
     .4byte 0x020114B0\n\
    ");
}
__attribute__((naked)) void fun_0803a9dc()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803a00c\n\
     bl         fun_0803a9ec\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803a9ec()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0803aa00\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803aa04\n\
     bl         fun_08005468\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_0803aa08\n\
DAT_0803aa00:\n\
     .4byte 0x0200056E\n\
LAB_0803aa04:\n\
     bl         fun_08005060\n\
LAB_0803aa08:\n\
     bl         fun_0803a858\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803aa14()
{
    asm("\n\
     ldr        r2,DAT_0803aa20\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r1,DAT_0803aa24\n\
     str        r0,[r1,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803aa20:\n\
     .4byte 0x020114B0\n\
DAT_0803aa24:\n\
     .4byte 0x020114A4\n\
    ");
}
__attribute__((naked)) void fun_0803aa28()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r4,DAT_0803aa70\n\
     sub        r0,#0x78\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r6,DAT_0803aa74\n\
     sub        r1,#0x50\n\
     strh       r1,[r6,#0x0]\n\
     bl         fun_08005b14\n\
     mov        r0,#0x0\n\
     ldrsh      r5,[r4,r0]\n\
     ldr        r0,DAT_0803aa78\n\
     mov        r1,#0x0\n\
     ldrsh      r4,[r0,r1]\n\
     sub        r0,r5,r4\n\
     cmp        r0,#0x8\n\
     bgt        LAB_0803aa64\n\
     mov        r0,#0x0\n\
     ldrsh      r3,[r6,r0]\n\
     ldr        r0,DAT_0803aa7c\n\
     mov        r1,#0x0\n\
     ldrsh      r2,[r0,r1]\n\
     sub        r1,r3,r2\n\
     add        r6,r0,#0x0\n\
     cmp        r1,#0x8\n\
     ble        LAB_0803aa84\n\
LAB_0803aa64:\n\
     ldr        r1,DAT_0803aa80\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r6,DAT_0803aa7c\n\
     b          LAB_0803aa96\n\
.space 1\n\
.space 1\n\
DAT_0803aa70:\n\
     .4byte 0x020114A0\n\
DAT_0803aa74:\n\
     .4byte 0x020114A8\n\
DAT_0803aa78:\n\
     .4byte 0x020114AC\n\
DAT_0803aa7c:\n\
     .4byte 0x020114B4\n\
DAT_0803aa80:\n\
     .4byte 0x0200056E\n\
LAB_0803aa84:\n\
     sub        r0,r4,r5\n\
     cmp        r0,#0x8\n\
     bgt        LAB_0803aa90\n\
     sub        r0,r2,r3\n\
     cmp        r0,#0x8\n\
     ble        LAB_0803aa96\n\
LAB_0803aa90:\n\
     ldr        r1,DAT_0803aaac\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803aa96:\n\
     ldr        r1,DAT_0803aab0\n\
     ldr        r0,DAT_0803aab4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0803aab8\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803aaac:\n\
     .4byte 0x0200056E\n\
DAT_0803aab0:\n\
     .4byte 0x020114AC\n\
DAT_0803aab4:\n\
     .4byte 0x020114A0\n\
DAT_0803aab8:\n\
     .4byte 0x020114A8\n\
    ");
}
__attribute__((naked)) void fun_0803aabc()
{
    asm("\n\
     ldr        r1,DAT_0803aac4\n\
     str        r0,[r1,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803aac4:\n\
     .4byte 0x020114B8\n\
    ");
}
__attribute__((naked)) void fun_0803aac8()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x4\n\
     add        r4,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r3,r4,#0x0\n\
     ldmia      r3!,{r0}\n\
     add        r0,#0x14\n\
     add        r4,#0x6\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803a218\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        sp,#0x4\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803aaf0()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x4\n\
     add        r4,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r3,r4,#0x0\n\
     ldmia      r3!,{r0}\n\
     add        r0,#0x14\n\
     add        r4,#0x6\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803a4c4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        sp,#0x4\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803ab18()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_080058bc\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803ab30()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r4,#0x0\n\
     b          LAB_0803ab66\n\
LAB_0803ab36:\n\
     ldr        r0,DAT_0803ab74\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r1,[r1,#0x0]\n\
     ldr        r3,[r1,#0x0]\n\
     ldr        r0,[r3,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803ab56\n\
     mov        r0,#0x2\n\
     ldrh       r2,[r3,#0x12]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ab60\n\
     ldr        r0,[r3,#0x8]\n\
     cmp        r0,#0x2\n\
     bne        LAB_0803ab60\n\
LAB_0803ab56:\n\
     ldr        r2,[r1,#0x8]\n\
     ldr        r1,[r1,#0x4]\n\
     add        r0,r3,#0x0\n\
     bl         _call_via_r2\n\
LAB_0803ab60:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
LAB_0803ab66:\n\
     ldr        r0,DAT_0803ab78\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r4,r0\n\
     bcc        LAB_0803ab36\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803ab74:\n\
     .4byte 0x020114C0\n\
DAT_0803ab78:\n\
     .4byte 0x02000570\n\
    ");
}
__attribute__((naked)) void fun_0803ab7c()
{
    asm("\n\
     ldr        r1,DAT_0803ab84\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bx         lr\n\
DAT_0803ab84:\n\
     .4byte 0x02000570\n\
    ");
}
__attribute__((naked)) void fun_0803ab88()
{
    asm("\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0803ab8c()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r3,DAT_0803aba8\n\
     ldr        r2,DAT_0803abac\n\
     ldrh       r4,[r2,#0x0]\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r3\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803aba8:\n\
     .4byte 0x020114C0\n\
DAT_0803abac:\n\
     .4byte 0x02000570\n\
    ");
}
__attribute__((naked)) void fun_0803abb0()
{
    asm("\n\
     ldr        r0,DAT_0803abb8\n\
     ldrh       r0,[r0,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803abb8:\n\
     .4byte 0x02000570\n\
    ");
}
__attribute__((naked)) void fun_0803abbc()
{
    asm("\n\
     ldr        r1,DAT_0803abc4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bx         lr\n\
DAT_0803abc4:\n\
     .4byte 0x02000570\n\
    ");
}
__attribute__((naked)) void fun_0803abc8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x38\n\
     add        r7,r1,#0x0\n\
     mov        r8,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,DAT_0803ac24\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r2,r0,#0x5\n\
     ldr        r1,[r1,#0x8]\n\
     add        r6,r1,r2\n\
     mov        r1,#0x0\n\
     mov        r9,r1\n\
     add        r2,sp,#0x20\n\
     mov        r1,sp\n\
     bl         fun_0803acf0\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[sp,#0x8]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     add        r5,sp,#0x28\n\
     ldr        r0,[r7,#0x4]\n\
     ldr        r1,[sp,#0xc]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     mov        r1,#0x14\n\
     ldrsh      r0,[r6,r1]\n\
     str        r0,[sp,#0x30]\n\
     mov        r1,#0x1c\n\
     ldrsh      r0,[r6,r1]\n\
     add        r4,sp,#0x30\n\
     str        r0,[r4,#0x4]\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803ac28\n\
     mov        r1,r9\n\
     mov        r0,r8\n\
     strh       r1,[r0,#0x4]\n\
     b          LAB_0803ac32\n\
DAT_0803ac24:\n\
     .4byte 0x02000578\n\
LAB_0803ac28:\n\
     mov        r0,#0x1\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x1\n\
     mov        r9,r0\n\
LAB_0803ac32:\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[sp,#0x10]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     ldr        r0,[r7,#0x4]\n\
     ldr        r1,[sp,#0x14]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     mov        r1,#0x16\n\
     ldrsh      r0,[r6,r1]\n\
     str        r0,[sp,#0x30]\n\
     mov        r1,#0x1e\n\
     ldrsh      r0,[r6,r1]\n\
     str        r0,[r4,#0x4]\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803ac62\n\
     mov        r0,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x6]\n\
     b          LAB_0803ac6c\n\
LAB_0803ac62:\n\
     mov        r0,#0x1\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,#0x1\n\
     mov        r9,r0\n\
LAB_0803ac6c:\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[sp,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     ldr        r0,[r7,#0x4]\n\
     ldr        r1,[sp,#0x4]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     mov        r1,#0x10\n\
     ldrsh      r0,[r6,r1]\n\
     str        r0,[sp,#0x30]\n\
     mov        r1,#0x18\n\
     ldrsh      r0,[r6,r1]\n\
     str        r0,[r4,#0x4]\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803ac9c\n\
     mov        r0,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803aca6\n\
LAB_0803ac9c:\n\
     mov        r0,#0x1\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r9,r0\n\
LAB_0803aca6:\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[sp,#0x18]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     ldr        r0,[r7,#0x4]\n\
     ldr        r1,[sp,#0x1c]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     mov        r1,#0x12\n\
     ldrsh      r0,[r6,r1]\n\
     str        r0,[sp,#0x30]\n\
     mov        r1,#0x1a\n\
     ldrsh      r0,[r6,r1]\n\
     str        r0,[r4,#0x4]\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803acd6\n\
     mov        r0,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0803ace0\n\
LAB_0803acd6:\n\
     mov        r0,#0x1\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x1\n\
     mov        r9,r0\n\
LAB_0803ace0:\n\
     mov        r0,r9\n\
     add        sp,#0x38\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803acf0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     lsl        r0,r0,#0x10\n\
     ldr        r3,DAT_0803ad78\n\
     ldr        r4,[r3,#0x0]\n\
     lsr        r0,r0,#0xb\n\
     ldr        r3,[r4,#0x8]\n\
     add        r3,r3,r0\n\
     ldr        r4,[r4,#0x4]\n\
     ldrh       r5,[r3,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r5,[r3,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x4]\n\
     ldrh       r5,[r3,#0x2]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x8]\n\
     ldrh       r5,[r3,#0x2]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0xc]\n\
     ldrh       r5,[r3,#0x4]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x10]\n\
     ldrh       r5,[r3,#0x4]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x14]\n\
     ldrh       r5,[r3,#0x6]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x18]\n\
     ldrh       r5,[r3,#0x6]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x1c]\n\
     ldrh       r0,[r3,#0x8]\n\
     strh       r0,[r2,#0x0]\n\
     ldrh       r0,[r3,#0xa]\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r0,[r3,#0xc]\n\
     strh       r0,[r2,#0x4]\n\
     ldrh       r0,[r3,#0xe]\n\
     strh       r0,[r2,#0x6]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803ad78:\n\
     .4byte 0x02000578\n\
    ");
}
__attribute__((naked)) void fun_0803ad7c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     sub        sp,#0x34\n\
     add        r5,r0,#0x0\n\
     add        r7,r1,#0x0\n\
     mov        r8,r2\n\
     add        r6,r3,#0x0\n\
     mov        r4,#0x0\n\
LAB_0803ad8e:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,sp\n\
     add        r0,#0x4\n\
     lsl        r1,r4,#0x3\n\
     add        r1,r5,r1\n\
     bl         fun_0803bd10\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_0803ad8e\n\
     ldr        r0,[sp,#0xc]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803adc4\n\
     ldr        r0,[sp,#0x18]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803adc4\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r2,[sp,#0x10]\n\
     ldr        r3,[sp,#0x14]\n\
     str        r6,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803adc4:\n\
     ldr        r0,[sp,#0x24]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803ade0\n\
     ldr        r0,[sp,#0x30]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803ade0\n\
     ldr        r0,[sp,#0x1c]\n\
     ldr        r1,[sp,#0x20]\n\
     ldr        r2,[sp,#0x28]\n\
     ldr        r3,[sp,#0x2c]\n\
     ldr        r4,[sp,#0x4c]\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803ade0:\n\
     ldr        r0,[sp,#0xc]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803adfa\n\
     ldr        r0,[sp,#0x24]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803adfa\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r2,[sp,#0x1c]\n\
     ldr        r3,[sp,#0x20]\n\
     str        r7,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803adfa:\n\
     ldr        r0,[sp,#0x18]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803ae16\n\
     ldr        r0,[sp,#0x30]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803ae16\n\
     ldr        r0,[sp,#0x10]\n\
     ldr        r1,[sp,#0x14]\n\
     ldr        r2,[sp,#0x28]\n\
     ldr        r3,[sp,#0x2c]\n\
     mov        r4,r8\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803ae16:\n\
     add        sp,#0x34\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803ae24()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x2c\n\
     mov        r7,#0x0\n\
     ldr        r0,DAT_0803ae9c\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r7,r0\n\
     bcs        LAB_0803ae92\n\
     add        r4,sp,#0x24\n\
     ldr        r6,DAT_0803aea0\n\
     mov        r5,#0x1\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
LAB_0803ae3c:\n\
     add        r0,r7,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803acf0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     mov        r12,r6\n\
     cmp        r0,r5\n\
     bne        LAB_0803ae52\n\
     mov        r12,r5\n\
LAB_0803ae52:\n\
     ldrh       r0,[r4,#0x2]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r2,r6,#0x0\n\
     cmp        r0,r5\n\
     bne        LAB_0803ae60\n\
     add        r2,r5,#0x0\n\
LAB_0803ae60:\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r4,r1]\n\
     add        r3,r6,#0x0\n\
     cmp        r0,r5\n\
     bne        LAB_0803ae6c\n\
     add        r3,r5,#0x0\n\
LAB_0803ae6c:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r4,r1]\n\
     add        r1,r6,#0x0\n\
     cmp        r0,r5\n\
     bne        LAB_0803ae78\n\
     add        r1,r0,#0x0\n\
LAB_0803ae78:\n\
     str        r1,[sp,#0x0]\n\
     add        r0,sp,#0x4\n\
     mov        r1,r12\n\
     bl         fun_0803ad7c\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r0,DAT_0803ae9c\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r7,r0\n\
     bcc        LAB_0803ae3c\n\
LAB_0803ae92:\n\
     add        sp,#0x2c\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803ae9c:\n\
     .4byte 0x02000578\n\
DAT_0803aea0:\n\
     .4byte 0xFFFF0000\n\
    ");
}
__attribute__((naked)) void fun_0803aea4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x5c\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r2,sp,#0x24\n\
     add        r1,sp,#0x4\n\
     bl         fun_0803acf0\n\
     mov        r4,#0x0\n\
     add        r5,sp,#0x2c\n\
LAB_0803aeb8:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r5,r0\n\
     lsl        r1,r4,#0x3\n\
     add        r1,sp\n\
     add        r1,#0x4\n\
     bl         fun_0803bd10\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_0803aeb8\n\
     ldr        r0,[r5,#0x8]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803aef0\n\
     ldr        r0,[r5,#0x14]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803aef0\n\
     ldr        r0,[sp,#0x2c]\n\
     ldr        r1,[r5,#0x4]\n\
     ldr        r2,[r5,#0xc]\n\
     ldr        r3,[r5,#0x10]\n\
     ldr        r4,DAT_0803af4c\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803aef0:\n\
     ldr        r0,[r5,#0x20]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803af0c\n\
     ldr        r0,[r5,#0x2c]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803af0c\n\
     ldr        r0,[r5,#0x18]\n\
     ldr        r1,[r5,#0x1c]\n\
     ldr        r2,[r5,#0x24]\n\
     ldr        r3,[r5,#0x28]\n\
     ldr        r4,DAT_0803af4c\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803af0c:\n\
     ldr        r0,[r5,#0x8]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803af28\n\
     ldr        r0,[r5,#0x20]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803af28\n\
     ldr        r0,[sp,#0x2c]\n\
     ldr        r1,[r5,#0x4]\n\
     ldr        r2,[r5,#0x18]\n\
     ldr        r3,[r5,#0x1c]\n\
     ldr        r4,DAT_0803af50\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803af28:\n\
     ldr        r0,[r5,#0x14]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803af44\n\
     ldr        r0,[r5,#0x2c]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803af44\n\
     ldr        r0,[r5,#0xc]\n\
     ldr        r1,[r5,#0x10]\n\
     ldr        r2,[r5,#0x24]\n\
     ldr        r3,[r5,#0x28]\n\
     ldr        r4,DAT_0803af4c\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803af44:\n\
     add        sp,#0x5c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803af4c:\n\
     .4byte 0xFF00FF00\n\
DAT_0803af50:\n\
     .4byte 0xFF0000FF\n\
    ");
}
__attribute__((naked)) void fun_0803af54()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x30\n\
     add        r6,r0,#0x0\n\
     mov        r8,r1\n\
     add        r7,r2,#0x0\n\
     mov        r9,r3\n\
     ldr        r0,[sp,#0x50]\n\
     mov        r10,r0\n\
     ldrh       r1,[r6,#0x8]\n\
     ldr        r3,DAT_0803b050\n\
     ldr        r2,DAT_0803b054\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     mov        r5,#0x0\n\
     ldrsh      r4,[r0,r5]\n\
     str        r4,[r3,#0x0]\n\
     ldr        r0,DAT_0803b058\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r2\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r1,r3]\n\
     str        r2,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x8]\n\
     ldr        r0,DAT_0803b05c\n\
     str        r0,[sp,#0xc]\n\
     str        r1,[sp,#0x0]\n\
     str        r1,[sp,#0x4]\n\
     add        r5,sp,#0x8\n\
     ldr        r1,[r5,#0x4]\n\
     add        r0,r1,#0x0\n\
     mul        r0,r2\n\
     asr        r0,r0,#0x8\n\
     str        r0,[sp,#0x8]\n\
     add        r0,r1,#0x0\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x8\n\
     str        r0,[r5,#0x4]\n\
     bl         fun_0803bd08\n\
     ldr        r4,[r6,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r4,r4,r0\n\
     bl         fun_0803bd08\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r0,[r0,#0x8]\n\
     sub        r1,r1,r0\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,r0,r4\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x4]\n\
     ldr        r0,[sp,#0x8]\n\
     add        r0,r0,r4\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[sp,#0xc]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0xc]\n\
     mov        r0,sp\n\
     bl         fun_0803bd50\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803bd50\n\
     add        r4,sp,#0x10\n\
     ldr        r0,[sp,#0x0]\n\
     str        r0,[sp,#0x10]\n\
     bl         fun_0803bd08\n\
     ldr        r0,[r0,#0x4]\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,[sp,#0x4]\n\
     str        r0,[r4,#0x8]\n\
     add        r0,r4,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0803bd88\n\
     ldr        r0,[sp,#0x10]\n\
     add        r0,#0x78\n\
     mov        r5,r8\n\
     strh       r0,[r5,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x50\n\
     strh       r0,[r7,#0x0]\n\
     ldr        r0,[r4,#0x8]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0803b01a\n\
     mov        r1,#0x46\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r7,#0x0]\n\
LAB_0803b01a:\n\
     ldr        r0,[sp,#0x8]\n\
     ldr        r1,[sp,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     add        r0,sp,#0x28\n\
     ldr        r1,[sp,#0xc]\n\
     ldr        r2,[sp,#0x4]\n\
     sub        r1,r1,r2\n\
     str        r1,[r0,#0x4]\n\
     bl         fun_080035b4\n\
     mov        r3,r9\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r1,[r4,#0x8]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803b060\n\
     mov        r0,#0xf0\n\
     lsl        r0,r0,#0x7\n\
     lsl        r1,r1,#0x8\n\
     bl         fun_0800354c\n\
     mov        r1,#0x80\n\
     bl         fun_0800353c\n\
     mov        r5,r10\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_0803b06a\n\
DAT_0803b050:\n\
     .4byte 0x0200058C\n\
DAT_0803b054:\n\
     .4byte 0x08049824\n\
DAT_0803b058:\n\
     .4byte 0x02000588\n\
DAT_0803b05c:\n\
     .4byte 0x000186A0\n\
LAB_0803b060:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r1,#0x0\n\
     mov        r3,r10\n\
     strh       r0,[r3,#0x0]\n\
LAB_0803b06a:\n\
     add        sp,#0x30\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803b07c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     sub        sp,#0x54\n\
     ldrh       r2,[r0,#0x8]\n\
     ldr        r4,DAT_0803b1ec\n\
     ldr        r3,DAT_0803b1f0\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x40\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r3\n\
     mov        r6,#0x0\n\
     ldrsh      r5,[r1,r6]\n\
     str        r5,[r4,#0x0]\n\
     ldr        r1,DAT_0803b1f4\n\
     lsl        r2,r2,#0x1\n\
     add        r2,r2,r3\n\
     mov        r3,#0x0\n\
     ldrsh      r4,[r2,r3]\n\
     str        r4,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     mov        r2,#0xa0\n\
     lsl        r2,r2,#0x4\n\
     str        r1,[sp,#0xc]\n\
     ldr        r3,DAT_0803b1f8\n\
     str        r3,[sp,#0x10]\n\
     str        r2,[sp,#0x14]\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x3\n\
     str        r1,[sp,#0x18]\n\
     str        r3,[sp,#0x1c]\n\
     str        r1,[sp,#0x20]\n\
     add        r1,r4,#0x0\n\
     mul        r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[sp,#0x4]\n\
     add        r1,r5,#0x0\n\
     mul        r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[sp,#0x8]\n\
     add        r3,sp,#0xc\n\
     ldr        r2,[r3,#0x4]\n\
     add        r1,r2,#0x0\n\
     mul        r1,r4\n\
     asr        r1,r1,#0x8\n\
     str        r1,[sp,#0xc]\n\
     add        r1,r2,#0x0\n\
     mul        r1,r5\n\
     asr        r1,r1,#0x8\n\
     str        r1,[r3,#0x4]\n\
     add        r6,sp,#0x14\n\
     mov        r8,r6\n\
     ldr        r6,[sp,#0x14]\n\
     mov        r1,r8\n\
     ldr        r3,[r1,#0x4]\n\
     add        r1,r6,#0x0\n\
     mul        r1,r5\n\
     add        r2,r3,#0x0\n\
     mul        r2,r4\n\
     add        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[sp,#0x14]\n\
     add        r1,r3,#0x0\n\
     mul        r1,r5\n\
     add        r2,r6,#0x0\n\
     mul        r2,r4\n\
     sub        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     mov        r2,r8\n\
     str        r1,[r2,#0x4]\n\
     add        r3,sp,#0x1c\n\
     mov        r8,r3\n\
     ldr        r6,[sp,#0x1c]\n\
     ldr        r3,[r3,#0x4]\n\
     add        r1,r6,#0x0\n\
     mul        r1,r5\n\
     add        r2,r3,#0x0\n\
     mul        r2,r4\n\
     add        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[sp,#0x1c]\n\
     add        r1,r3,#0x0\n\
     mul        r1,r5\n\
     add        r2,r6,#0x0\n\
     mul        r2,r4\n\
     sub        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     mov        r6,r8\n\
     str        r1,[r6,#0x4]\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,[r0,#0x4]\n\
     ldr        r0,[sp,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x4]\n\
     ldr        r0,[sp,#0x8]\n\
     add        r0,r0,r2\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[sp,#0xc]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0xc]\n\
     ldr        r0,[sp,#0x10]\n\
     add        r0,r0,r2\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x14]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x14]\n\
     ldr        r0,[sp,#0x18]\n\
     add        r0,r0,r2\n\
     str        r0,[sp,#0x18]\n\
     ldr        r0,[sp,#0x1c]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x1c]\n\
     ldr        r0,[sp,#0x20]\n\
     add        r0,r0,r2\n\
     str        r0,[sp,#0x20]\n\
     mov        r4,#0x0\n\
     add        r6,sp,#0x24\n\
LAB_0803b166:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r6,r0\n\
     lsl        r1,r4,#0x3\n\
     add        r1,sp\n\
     add        r1,#0x4\n\
     bl         fun_0803bd38\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_0803b166\n\
     add        r5,r6,#0x0\n\
     ldr        r0,[r5,#0x8]\n\
     cmp        r0,#0x5\n\
     ble        LAB_0803b1de\n\
     ldr        r0,[r5,#0x14]\n\
     cmp        r0,#0x5\n\
     ble        LAB_0803b1a2\n\
     ldr        r0,[sp,#0x24]\n\
     ldr        r1,[r5,#0x4]\n\
     ldr        r2,[r5,#0xc]\n\
     ldr        r3,[r5,#0x10]\n\
     mov        r4,#0x1\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803b1a2:\n\
     ldr        r0,[r5,#0x8]\n\
     cmp        r0,#0x5\n\
     ble        LAB_0803b1de\n\
     ldr        r0,[r5,#0x20]\n\
     cmp        r0,#0x5\n\
     ble        LAB_0803b1c0\n\
     ldr        r0,[sp,#0x24]\n\
     ldr        r1,[r5,#0x4]\n\
     ldr        r2,[r5,#0x18]\n\
     ldr        r3,[r5,#0x1c]\n\
     mov        r4,#0x1\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803b1c0:\n\
     ldr        r0,[r6,#0x8]\n\
     cmp        r0,#0x5\n\
     ble        LAB_0803b1de\n\
     ldr        r0,[r6,#0x2c]\n\
     cmp        r0,#0x5\n\
     ble        LAB_0803b1de\n\
     ldr        r0,[sp,#0x24]\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r2,[r6,#0x24]\n\
     ldr        r3,[r6,#0x28]\n\
     mov        r4,#0x1\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0803b794\n\
LAB_0803b1de:\n\
     add        sp,#0x54\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803b1ec:\n\
     .4byte 0x0200058C\n\
DAT_0803b1f0:\n\
     .4byte 0x08049824\n\
DAT_0803b1f4:\n\
     .4byte 0x02000588\n\
DAT_0803b1f8:\n\
     .4byte 0xFFFFF600\n\
    ");
}
__attribute__((naked)) void fun_0803b1fc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     str        r0,[sp,#0x0]\n\
     lsl        r1,r1,#0x10\n\
     mov        r0,#0x0\n\
     mov        r10,r0\n\
     mov        r9,r0\n\
     mov        r8,r0\n\
     mov        r3,#0x0\n\
     ldr        r0,DAT_0803b228\n\
     ldr        r0,[r0,#0x0]\n\
     lsr        r1,r1,#0xb\n\
     ldr        r0,[r0,#0x8]\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r0,#0xa]\n\
     mov        r7,#0x0\n\
     b          LAB_0803b27c\n\
.space 1\n\
.space 1\n\
DAT_0803b228:\n\
     .4byte 0x02000578\n\
LAB_0803b22c:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     str        r2,[sp,#0x4]\n\
     str        r3,[sp,#0x8]\n\
     bl         fun_0803b2dc\n\
     lsl        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x4]\n\
     ldr        r3,[sp,#0x8]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b258\n\
     mov        r1,#0x1\n\
     mov        r10,r1\n\
     mov        r0,r9\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     b          LAB_0803b25e\n\
LAB_0803b258:\n\
     mov        r0,r10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803b2a6\n\
LAB_0803b25e:\n\
     ldr        r0,[r6,#0x4]\n\
     add        r4,r4,r0\n\
     ldr        r0,[r6,#0x8]\n\
     add        r5,r5,r0\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     b          LAB_0803b27c\n\
LAB_0803b26e:\n\
     mov        r7,#0x0\n\
     ldr        r0,DAT_0803b2d0\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r2,#0x5\n\
     ldr        r0,[r0,#0x8]\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r0,#0x8]\n\
LAB_0803b27c:\n\
     cmp        r3,#0x4\n\
     bhi        LAB_0803b2a6\n\
     cmp        r7,#0x0\n\
     bne        LAB_0803b292\n\
     lsl        r0,r2,#0x4\n\
     ldr        r1,[sp,#0x0]\n\
     add        r6,r1,r0\n\
     ldrh       r0,[r6,#0x0]\n\
     lsl        r4,r0,#0x8\n\
     ldrh       r1,[r6,#0x2]\n\
     lsl        r5,r1,#0x8\n\
LAB_0803b292:\n\
     ldrb       r0,[r6,#0xc]\n\
     cmp        r7,r0\n\
     bcs        LAB_0803b26e\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     cmp        r0,#0xe\n\
     bls        LAB_0803b22c\n\
LAB_0803b2a6:\n\
     ldr        r2,DAT_0803b2d4\n\
     mov        r0,#0x0\n\
     mov        r1,#0xa\n\
     mov        r3,r9\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803b2d8\n\
     mov        r0,#0x0\n\
     mov        r1,#0xb\n\
     mov        r3,r8\n\
     bl         fun_080032a0\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803b2d0:\n\
     .4byte 0x02000578\n\
DAT_0803b2d4:\n\
     .4byte 0x0865FA4C\n\
DAT_0803b2d8:\n\
     .4byte 0x0865FA5C\n\
    ");
}
__attribute__((naked)) void fun_0803b2dc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x1c\n\
     str        r0,[sp,#0x14]\n\
     add        r2,sp,#0x14\n\
     str        r1,[r2,#0x4]\n\
     mov        r4,sp\n\
     mov        r5,sp\n\
     add        r5,#0x2\n\
     add        r6,sp,#0x4\n\
     add        r0,sp,#0x8\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803bd38\n\
     ldr        r0,[sp,#0x8]\n\
     add        r0,#0x78\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,[sp,#0xc]\n\
     add        r0,#0x50\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,[sp,#0x10]\n\
     add        r7,r6,#0x0\n\
     cmp        r1,#0x0\n\
     bgt        LAB_0803b316\n\
     mov        r2,#0x46\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803b328\n\
LAB_0803b316:\n\
     lsl        r1,r1,#0x8\n\
     mov        r0,#0xf0\n\
     lsl        r0,r0,#0x7\n\
     bl         fun_0800354c\n\
     mov        r1,#0x80\n\
     bl         fun_0800353c\n\
     b          LAB_0803b32e\n\
LAB_0803b328:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r1,#0x0\n\
LAB_0803b32e:\n\
     strh       r0,[r7,#0x0]\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x10\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x11\n\
     cmp        r0,r1\n\
     bhi        LAB_0803b3b0\n\
     ldrh       r6,[r5,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r5,[r5,r2]\n\
     cmp        r5,#0xf\n\
     ble        LAB_0803b3b0\n\
     cmp        r5,#0xb0\n\
     bgt        LAB_0803b3b0\n\
     ldr        r4,DAT_0803b3a0\n\
     ldr        r5,DAT_0803b3a4\n\
     ldrh       r0,[r5,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r4\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_0803b3a8\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     lsl        r3,r1,#0x3\n\
     add        r3,r3,r4\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r1,#0x7\n\
     ldr        r2,DAT_0803b3ac\n\
     add        r0,r2,#0x0\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x10\n\
     sub        r0,r6,#0x7\n\
     mov        r2,#0xff\n\
     and        r0,r2\n\
     orr        r1,r0\n\
     ldr        r0,[r3,#0x0]\n\
     orr        r0,r1\n\
     str        r0,[r3,#0x0]\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b394\n\
     ldrh       r0,[r5,#0x0]\n\
     bl         fun_08004694\n\
     ldrh       r1,[r7,#0x0]\n\
     bl         fun_080047d0\n\
LAB_0803b394:\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     b          LAB_0803b3b2\n\
.space 1\n\
.space 1\n\
DAT_0803b3a0:\n\
     .4byte 0x03002000\n\
DAT_0803b3a4:\n\
     .4byte 0x02000592\n\
DAT_0803b3a8:\n\
     .4byte 0xFE00FF00\n\
DAT_0803b3ac:\n\
     .4byte 0x000001FF\n\
LAB_0803b3b0:\n\
     mov        r0,#0x0\n\
LAB_0803b3b2:\n\
     add        sp,#0x1c\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803b3bc()
{
    asm("\n\
     ldr        r1,PTR_DAT_0803b3d0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0803b3d4\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803b3d8\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803b3dc\n\
     strh       r1,[r0,#0x0]\n\
     bx         lr\n\
PTR_DAT_0803b3d0:\n\
     .4byte       DAT_02000578\n\
PTR_DAT_0803b3d4:\n\
     .4byte       DAT_02000580\n\
PTR_DAT_0803b3d8:\n\
     .4byte       DAT_02000584\n\
PTR_DAT_0803b3dc:\n\
     .4byte       DAT_0200057c\n\
    ");
}
__attribute__((naked)) void fun_0803b3e0()
{
    asm("\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0803b3e4()
{
    asm("\n\
     ldr        r3,DAT_0803b3f4\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r0,DAT_0803b3f8\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0803b3fc\n\
     str        r2,[r0,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803b3f4:\n\
     .4byte 0x0200057C\n\
DAT_0803b3f8:\n\
     .4byte 0x02000580\n\
DAT_0803b3fc:\n\
     .4byte 0x02000584\n\
    ");
}
__attribute__((naked)) void fun_0803b400()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6}\n\
     sub        sp,#0x30\n\
     mov        r8,r0\n\
     add        r6,r1,#0x0\n\
     mov        r9,r2\n\
     ldrh       r0,[r0,#0xa]\n\
     add        r2,sp,#0x20\n\
     mov        r1,sp\n\
     bl         fun_0803acf0\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[sp,#0x10]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     add        r4,sp,#0x28\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0x14]\n\
     sub        r0,r0,r1\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,[sp,#0x28]\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x2\n\
     add        r1,r5,#0x0\n\
     bl         fun_0800354c\n\
     ldr        r1,[sp,#0x10]\n\
     add        r1,r1,r0\n\
     str        r1,[r6,#0x0]\n\
     ldr        r0,[r4,#0x4]\n\
     add        r1,r5,#0x0\n\
     bl         fun_0800354c\n\
     ldr        r2,[sp,#0x14]\n\
     add        r2,r2,r0\n\
     str        r2,[r6,#0x4]\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r3,r8\n\
     ldr        r1,[r3,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x28]\n\
     ldr        r0,[r3,#0x4]\n\
     sub        r2,r2,r0\n\
     str        r2,[r4,#0x4]\n\
     add        r0,r4,#0x0\n\
     bl         fun_080035b4\n\
     mov        r1,r9\n\
     strh       r0,[r1,#0x0]\n\
     add        sp,#0x30\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803b474()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r4,#0x0\n\
     b          LAB_0803b494\n\
LAB_0803b47c:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_0803b7b0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b48e\n\
     add        r0,r4,#0x0\n\
     b          LAB_0803b4a0\n\
LAB_0803b48e:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
LAB_0803b494:\n\
     ldr        r0,DAT_0803b4a8\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r4,r0\n\
     bcc        LAB_0803b47c\n\
     ldr        r0,DAT_0803b4ac\n\
LAB_0803b4a0:\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803b4a8:\n\
     .4byte 0x02000578\n\
DAT_0803b4ac:\n\
     .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_0803b4b0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r6,r2,#0x0\n\
     add        r5,r3,#0x0\n\
     ldr        r2,DAT_0803b50c\n\
     ldr        r3,[r2,#0x0]\n\
     mov        r4,#0xa\n\
     ldrsh      r2,[r0,r4]\n\
     lsl        r2,r2,#0x5\n\
     ldr        r3,[r3,#0x8]\n\
     add        r4,r3,r2\n\
     add        r2,r6,#0x0\n\
     bl         fun_0803b574\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b51a\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
LAB_0803b4d6:\n\
     lsl        r3,r1,#0x1\n\
     add        r0,r3,r6\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b510\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8\n\
     add        r0,r0,r3\n\
     mov        r7,#0x0\n\
     ldrsh      r0,[r0,r7]\n\
     cmp        r0,r2\n\
     bne        LAB_0803b510\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r0,r3\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     str        r0,[r5,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x18\n\
     add        r0,r0,r3\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     str        r0,[r5,#0x4]\n\
     mov        r0,#0x1\n\
     b          LAB_0803b51c\n\
.space 1\n\
.space 1\n\
DAT_0803b50c:\n\
     .4byte 0x02000578\n\
LAB_0803b510:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x3\n\
     bls        LAB_0803b4d6\n\
LAB_0803b51a:\n\
     mov        r0,#0x0\n\
LAB_0803b51c:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803b524()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     add        r2,r1,#0x0\n\
     ldr        r0,DAT_0803b544\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r4,#0xa\n\
     ldrsh      r0,[r3,r4]\n\
     lsl        r0,r0,#0x5\n\
     ldr        r1,[r1,#0x8]\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b548\n\
     ldrh       r0,[r1,#0x8]\n\
     b          LAB_0803b568\n\
.space 1\n\
.space 1\n\
DAT_0803b544:\n\
     .4byte 0x02000578\n\
LAB_0803b548:\n\
     ldrh       r0,[r2,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b552\n\
     ldrh       r0,[r1,#0xa]\n\
     b          LAB_0803b568\n\
LAB_0803b552:\n\
     ldrh       r0,[r2,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803b55c\n\
     ldrh       r0,[r1,#0xc]\n\
     b          LAB_0803b568\n\
LAB_0803b55c:\n\
     ldrh       r0,[r2,#0x6]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803b566\n\
     mov        r0,#0x0\n\
     b          LAB_0803b56c\n\
LAB_0803b566:\n\
     ldrh       r0,[r1,#0xe]\n\
LAB_0803b568:\n\
     strh       r0,[r3,#0xa]\n\
     mov        r0,#0x1\n\
LAB_0803b56c:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803b574()
{
    asm("\n\
     push       {lr}\n\
     ldrh       r0,[r0,#0xa]\n\
     bl         fun_0803abc8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803b584()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     ldr        r2,DAT_0803b59c\n\
     ldr        r2,[r2,#0x0]\n\
     lsr        r0,r0,#0xb\n\
     ldr        r2,[r2,#0x8]\n\
     add        r2,r2,r0\n\
     lsr        r1,r1,#0xf\n\
     add        r2,#0x8\n\
     add        r2,r2,r1\n\
     ldrh       r0,[r2,#0x0]\n\
     bx         lr\n\
DAT_0803b59c:\n\
     .4byte 0x02000578\n\
    ");
}
__attribute__((naked)) void fun_0803b5a0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0xc\n\
     add        r3,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     add        r5,r2,#0x0\n\
     mov        r0,sp\n\
     add        r1,r3,#0x0\n\
     bl         fun_0803bd10\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,#0x78\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     add        r0,#0x50\n\
     strh       r0,[r5,#0x0]\n\
     add        sp,#0xc\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 2\n\
    ");
}
