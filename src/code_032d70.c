__attribute__((naked)) void fun_08032d70()
{
    asm("\n\
     ldr        r0,DAT_08032d8c\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08032d90\n\
     mov        r3,#0x0\n\
     str        r3,[r0,#0x0]\n\
     ldr        r2,DAT_08032d94\n\
     ldr        r1,[r2,#0x0]\n\
     cmp        r1,#0x50\n\
     ble        LAB_08032d98\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x50\n\
     str        r0,[r2,#0x0]\n\
     b          LAB_08032daa\n\
DAT_08032d8c:\n\
     .4byte 0x020108C0\n\
DAT_08032d90:\n\
     .4byte 0x020109EC\n\
DAT_08032d94:\n\
     .4byte 0x020108E8\n\
LAB_08032d98:\n\
     mov        r0,#0x50\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bge        LAB_08032da8\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x50\n\
     str        r0,[r2,#0x0]\n\
     b          LAB_08032daa\n\
LAB_08032da8:\n\
     str        r3,[r2,#0x0]\n\
LAB_08032daa:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08032dac()
{
    asm("\n\
     ldr        r0,DAT_08032dcc\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r2,r0,#0x0\n\
     cmp        r2,#0x0\n\
     bne        LAB_08032dea\n\
     ldr        r0,DAT_08032dd0\n\
     str        r2,[r0,#0x0]\n\
     ldr        r3,DAT_08032dd4\n\
     ldr        r1,[r3,#0x0]\n\
     cmp        r1,#0x50\n\
     ble        LAB_08032dd8\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x50\n\
     str        r0,[r3,#0x0]\n\
     b          LAB_08032dea\n\
.space 1\n\
.space 1\n\
DAT_08032dcc:\n\
     .4byte 0x02005830\n\
DAT_08032dd0:\n\
     .4byte 0x020109EC\n\
DAT_08032dd4:\n\
     .4byte 0x020108E8\n\
LAB_08032dd8:\n\
     mov        r0,#0x50\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bge        LAB_08032de8\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x50\n\
     str        r0,[r3,#0x0]\n\
     b          LAB_08032dea\n\
LAB_08032de8:\n\
     str        r2,[r3,#0x0]\n\
LAB_08032dea:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08032dec()
{
    asm("\n\
     ldr        r0,PTR_DAT_08032e10\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032e24\n\
     ldr        r0,PTR_DAT_08032e14\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032e24\n\
     ldr        r0,PTR_DAT_08032e18\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xa0\n\
     str        r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08032e1c\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_08032e20\n\
     b          LAB_08032e30\n\
PTR_DAT_08032e10:\n\
     .4byte       DAT_02010910\n\
PTR_DAT_08032e14:\n\
     .4byte       DAT_02010a18\n\
PTR_DAT_08032e18:\n\
     .4byte       DAT_020109fc\n\
PTR_DAT_08032e1c:\n\
     .4byte       DAT_02010898\n\
PTR_DAT_08032e20:\n\
     .4byte       DAT_020108f0\n\
LAB_08032e24:\n\
     ldr        r1,DAT_08032e38\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08032e3c\n\
     ldr        r0,DAT_08032e40\n\
     ldr        r0,[r0,#0x0]\n\
LAB_08032e30:\n\
     lsr        r0,r0,#0x8\n\
     strh       r0,[r1,#0x6]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08032e38:\n\
     .4byte 0x020109FC\n\
DAT_08032e3c:\n\
     .4byte 0x020108F0\n\
DAT_08032e40:\n\
     .4byte 0x02010898\n\
    ");
}
__attribute__((naked)) void fun_08032e44()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,PTR_DAT_08032e90\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032e88\n\
     ldr        r0,PTR_DAT_08032e94\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08032e98\n\
     cmp        r1,#0x0\n\
     beq        LAB_08032e64\n\
     sub        r1,#0x1\n\
     str        r1,[r0,#0x0]\n\
     mov        r0,#0x8\n\
     strh       r0,[r2,#0x10]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08032e88\n\
LAB_08032e64:\n\
     ldrh       r2,[r2,#0x10]\n\
     cmp        r2,#0xa\n\
     bne        LAB_08032e88\n\
     mov        r0,#0x13\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_08032e9c\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08032ea0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08032ea4\n\
     ldr        r0,DAT_08032ea8\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r4,#0x0]\n\
     ldr        r0,DAT_08032eac\n\
     strh       r1,[r0,#0x0]\n\
LAB_08032e88:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08032e90:\n\
     .4byte       DAT_02010928\n\
PTR_DAT_08032e94:\n\
     .4byte       DAT_020108e4\n\
PTR_DAT_08032e98:\n\
     .4byte       DAT_020108f0\n\
PTR_DAT_08032e9c:\n\
     .4byte       DAT_02010914\n\
PTR_DAT_08032ea0:\n\
     .4byte       DAT_02010a18\n\
PTR_DAT_08032ea4:\n\
     .4byte       DAT_020108dc\n\
DAT_08032ea8:\n\
     .4byte 0x00000898\n\
DAT_08032eac:\n\
     .4byte 0x02010934\n\
    ");
}
__attribute__((naked)) void fun_08032eb0()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x64\n\
     bl         fun_0803c1a4\n\
     ldr        r0,DAT_08032ef0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,sp\n\
     bl         fun_08002f00\n\
     ldr        r4,DAT_08032ef4\n\
     mov        r0,sp\n\
     mov        r1,#0x96\n\
     mov        r2,#0xa\n\
     add        r3,r4,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r1,DAT_08032ef8\n\
     ldr        r0,DAT_08032efc\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     mov        r0,sp\n\
     mov        r1,#0xa\n\
     mov        r2,#0xa\n\
     add        r3,r4,#0x0\n\
     bl         fun_0803c138\n\
     add        sp,#0x64\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08032ef0:\n\
     .4byte 0x02010954\n\
DAT_08032ef4:\n\
     .4byte 0x0865FB7C\n\
DAT_08032ef8:\n\
     .4byte 0x085FF4D0\n\
DAT_08032efc:\n\
     .4byte 0x020108D0\n\
    ");
}
__attribute__((naked)) void fun_08032f00()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_08032f24\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0x0]\n\
     bl         fun_0803abbc\n\
     bl         fun_0800457c\n\
     bl         fun_0803a980\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08032f24:\n\
     .4byte 0x02010888\n\
    ");
}
__attribute__((naked)) void fun_08032f28()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_08032af4\n\
     bl         fun_08032eb0\n\
     bl         fun_08031a80\n\
     bl         fun_08031cc4\n\
     bl         fun_08031e30\n\
     bl         fun_08031ee0\n\
     bl         fun_08032114\n\
     bl         fun_08032dac\n\
     bl         fun_08032dec\n\
     bl         fun_08032314\n\
     bl         fun_08032e44\n\
     ldr        r0,DAT_08032f78\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032f6e\n\
     bl         fun_08032450\n\
     bl         fun_080325ac\n\
     bl         fun_08032774\n\
     bl         fun_08032944\n\
LAB_08032f6e:\n\
     bl         fun_0803a00c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08032f78:\n\
     .4byte 0x02010A14\n\
    ");
}
__attribute__((naked)) void fun_08032f7c()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08032f80()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08032f84()
{
    asm("\n\
     ldr        r2,DAT_08032f9c\n\
     ldr        r0,DAT_08032fa0\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08032fa4\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_08032fa8\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08032f9c:\n\
     .4byte 0x02010A20\n\
DAT_08032fa0:\n\
     .4byte 0x08615C68\n\
DAT_08032fa4:\n\
     .4byte 0x02010A30\n\
DAT_08032fa8:\n\
     .4byte 0x08615C04\n\
    ");
}
__attribute__((naked)) void fun_08032fac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r4,DAT_0803313c\n\
     add        sp,r4\n\
     ldr        r0,DAT_08033140\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08033144\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,DAT_08033148\n\
     ldr        r0,DAT_0803314c\n\
     str        r0,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_08033150\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xe\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08033154\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033158\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_0803315c\n\
     mov        r0,#0x2\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_08033160\n\
     mov        r0,#0x5\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08033164\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033168\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803316c\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033170\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033174\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033178\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803317c\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033180\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033184\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033188\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803318c\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033190\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08033194\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     ldr        r4,PTR_DAT_08033198\n\
     ldr        r5,PTR_DAT_0803319c\n\
     ldr        r6,PTR_DAT_080331a0\n\
     ldr        r7,PTR_DAT_080331a4\n\
     ldr        r1,PTR_DAT_080331a8\n\
     mov        r12,r1\n\
     ldr        r2,PTR_DAT_080331ac\n\
     mov        r8,r2\n\
     ldr        r1,PTR_DAT_080331b0\n\
     mov        r9,r1\n\
     ldr        r2,PTR_DAT_080331b4\n\
     mov        r10,r2\n\
     ldr        r3,PTR_DAT_080331b8\n\
     mov        r2,#0x0\n\
LAB_08033038:\n\
     lsl        r1,r0,#0x10\n\
     asr        r1,r1,#0x10\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r3\n\
     strh       r2,[r0,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r0,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     cmp        r1,#0x13\n\
     ble        LAB_08033038\n\
     mov        r1,#0xe1\n\
     lsl        r1,r1,#0x5\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     mov        r4,#0x0\n\
     str        r4,[r6,#0x0]\n\
     strh       r4,[r7,#0x0]\n\
     mov        r2,r12\n\
     strh       r4,[r2,#0x0]\n\
     mov        r0,r8\n\
     strh       r4,[r0,#0x0]\n\
     mov        r1,r9\n\
     strh       r4,[r1,#0x0]\n\
     mov        r2,r10\n\
     str        r4,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080331bc\n\
     str        r4,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     ldr        r2,PTR_DAT_080331c0\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080331c4\n\
     strh       r4,[r0,#0x0]\n\
     mov        r0,#0x26\n\
     ldr        r2,PTR_DAT_080331c8\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x5a\n\
     ldr        r2,PTR_DAT_080331cc\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080331d0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_080331d4\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080331d8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_080331dc\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080331e0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_080331e4\n\
     strh       r4,[r2,#0x0]\n\
     ldr        r2,DAT_080331e8\n\
     add        r0,r2,#0x0\n\
     ldr        r2,PTR_DAT_080331ec\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080331f0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_080331f4\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_080331f8\n\
     strh       r4,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     ldr        r2,PTR_DAT_080331fc\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08033200\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08033204\n\
     strh       r4,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08033208\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_0803320c\n\
     strh       r1,[r2,#0x0]\n\
     bl         fun_08035d10\n\
     bl         fun_08002e64\n\
     bl         fun_080397a0\n\
     ldr        r5,DAT_08033210\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08033214\n\
     str        r0,[r1,#0x0]\n\
     mov        r6,#0x3\n\
     strh       r6,[r0,#0x6]\n\
     strh       r4,[r0,#0x10]\n\
     strh       r4,[r0,#0x2]\n\
     strh       r4,[r0,#0x4]\n\
     strh       r4,[r0,#0x8]\n\
     bl         fun_08039584\n\
     ldr        r1,PTR_DAT_08033218\n\
     str        r0,[r1,#0x0]\n\
     sub        r5,#0x10\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0803321c\n\
     str        r0,[r1,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     strh       r4,[r0,#0x10]\n\
     strh       r4,[r0,#0x2]\n\
     strh       r4,[r0,#0x4]\n\
     strh       r4,[r0,#0x8]\n\
     bl         fun_08039584\n\
     ldr        r1,PTR_DAT_08033220\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xd0\n\
     lsl        r1,r1,#0x1\n\
     ldr        r2,DAT_08033224\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     bl         fun_08002fe4\n\
     mov        r0,#0x0\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x5\n\
     add        sp,r3\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0803313c:\n\
     .4byte 0xFFFFF000\n\
DAT_08033140:\n\
     .4byte 0x02010ADC\n\
DAT_08033144:\n\
     .4byte 0x02010A68\n\
DAT_08033148:\n\
     .4byte 0x02010B0C\n\
DAT_0803314c:\n\
     .4byte 0x023A0000\n\
PTR_DAT_08033150:\n\
     .4byte       DAT_02010bb4\n\
PTR_DAT_08033154:\n\
     .4byte       DAT_02010b18\n\
PTR_DAT_08033158:\n\
     .4byte       DAT_02010b14\n\
PTR_DAT_0803315c:\n\
     .4byte       DAT_02010ac0\n\
PTR_DAT_08033160:\n\
     .4byte       DAT_02010a90\n\
PTR_DAT_08033164:\n\
     .4byte       DAT_02010bcc\n\
PTR_DAT_08033168:\n\
     .4byte       DAT_02010a70\n\
PTR_DAT_0803316c:\n\
     .4byte       DAT_02010aac\n\
PTR_DAT_08033170:\n\
     .4byte       DAT_02010b24\n\
PTR_DAT_08033174:\n\
     .4byte       DAT_02010b30\n\
PTR_DAT_08033178:\n\
     .4byte       DAT_02010ad0\n\
PTR_DAT_0803317c:\n\
     .4byte       DAT_02010b38\n\
PTR_DAT_08033180:\n\
     .4byte       DAT_02010ae8\n\
PTR_DAT_08033184:\n\
     .4byte       DAT_02010a98\n\
PTR_DAT_08033188:\n\
     .4byte       DAT_02010b10\n\
PTR_DAT_0803318c:\n\
     .4byte       DAT_02010a9c\n\
PTR_DAT_08033190:\n\
     .4byte       DAT_02010abc\n\
PTR_DAT_08033194:\n\
     .4byte       DAT_02010a60\n\
PTR_DAT_08033198:\n\
     .4byte       DAT_02010b3c\n\
PTR_DAT_0803319c:\n\
     .4byte       DAT_02010b6c\n\
PTR_DAT_080331a0:\n\
     .4byte       DAT_02010b5c\n\
PTR_DAT_080331a4:\n\
     .4byte       DAT_02010b04\n\
PTR_DAT_080331a8:\n\
     .4byte       DAT_02010a74\n\
PTR_DAT_080331ac:\n\
     .4byte       DAT_02010a54\n\
PTR_DAT_080331b0:\n\
     .4byte       DAT_02010bac\n\
PTR_DAT_080331b4:\n\
     .4byte       DAT_02010b34\n\
PTR_DAT_080331b8:\n\
     .4byte       DAT_02010b80\n\
PTR_DAT_080331bc:\n\
     .4byte       DAT_02010b74\n\
PTR_DAT_080331c0:\n\
     .4byte       DAT_02010bb0\n\
PTR_DAT_080331c4:\n\
     .4byte       DAT_02010b4c\n\
PTR_DAT_080331c8:\n\
     .4byte       DAT_02010b60\n\
PTR_DAT_080331cc:\n\
     .4byte       DAT_02010ab4\n\
PTR_DAT_080331d0:\n\
     .4byte       DAT_02010bc8\n\
PTR_DAT_080331d4:\n\
     .4byte       DAT_02010b64\n\
PTR_DAT_080331d8:\n\
     .4byte       DAT_02010afc\n\
PTR_DAT_080331dc:\n\
     .4byte       DAT_02010a78\n\
PTR_DAT_080331e0:\n\
     .4byte       DAT_02010b48\n\
PTR_DAT_080331e4:\n\
     .4byte       DAT_02010a40\n\
DAT_080331e8:\n\
     .4byte 0xFFFFFEA2\n\
PTR_DAT_080331ec:\n\
     .4byte       DAT_02010ae4\n\
PTR_DAT_080331f0:\n\
     .4byte       DAT_02010a5c\n\
PTR_DAT_080331f4:\n\
     .4byte       DAT_02010b00\n\
PTR_DAT_080331f8:\n\
     .4byte       DAT_02010aa4\n\
PTR_DAT_080331fc:\n\
     .4byte       DAT_02010a44\n\
PTR_DAT_08033200:\n\
     .4byte       DAT_02010ac8\n\
PTR_DAT_08033204:\n\
     .4byte       DAT_02010aa8\n\
PTR_DAT_08033208:\n\
     .4byte       DAT_02010a48\n\
PTR_DAT_0803320c:\n\
     .4byte       DAT_02010a6c\n\
DAT_08033210:\n\
     .4byte 0x0861F97C\n\
PTR_DAT_08033214:\n\
     .4byte       DAT_02010b40\n\
PTR_DAT_08033218:\n\
     .4byte       DAT_02010ac4\n\
PTR_DAT_0803321c:\n\
     .4byte       DAT_02010bb8\n\
PTR_DAT_08033220:\n\
     .4byte       DAT_02010ab0\n\
DAT_08033224:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08033228()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x64\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_08033408\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033252\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0803340c\n\
     ldr        r0,DAT_08033410\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r2,DAT_08033414\n\
     mov        r0,sp\n\
     mov        r1,#0x5c\n\
     bl         fun_0803c010\n\
LAB_08033252:\n\
     ldr        r4,DAT_08033418\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     mov        r1,sp\n\
     bl         fun_08002f00\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r2,DAT_0803341c\n\
     mov        r0,sp\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
     mov        r6,#0x0\n\
     mov        r1,#0x0\n\
     ldr        r2,DAT_08033420\n\
LAB_08033274:\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033284\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
LAB_08033284:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x13\n\
     bls        LAB_08033274\n\
     ldr        r0,DAT_08033424\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r0,DAT_08033408\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080332cc\n\
     ldr        r0,DAT_08033418\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     cmp        r1,#0x0\n\
     bge        LAB_080332cc\n\
     mov        r0,#0x55\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     ble        LAB_080332cc\n\
     ldr        r1,DAT_08033428\n\
     ldr        r0,DAT_0803342c\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08033430\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r2,DAT_08033414\n\
     mov        r0,sp\n\
     mov        r1,#0x46\n\
     bl         fun_0803c010\n\
LAB_080332cc:\n\
     ldr        r4,DAT_08033418\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     mov        r1,#0xa\n\
     bl         fun_08002ff0\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080332ea\n\
     bl         fun_080016d4\n\
     mov        r0,#0x2\n\
     bl         fun_080016b0\n\
LAB_080332ea:\n\
     bl         fun_0800467c\n\
     ldr        r2,DAT_08033434\n\
     ldr        r0,DAT_08033438\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803343c\n\
     ldr        r4,DAT_08033440\n\
     mov        r0,#0x0\n\
     ldrsh      r3,[r4,r0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08033444\n\
     ldr        r0,DAT_08033448\n\
     mov        r1,#0x2\n\
     ldrsh      r3,[r0,r1]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803344c\n\
     ldr        r0,DAT_08033450\n\
     mov        r1,#0x2\n\
     ldrsh      r3,[r0,r1]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x3\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08033454\n\
     ldr        r0,DAT_08033458\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r0,r1]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x4\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803345c\n\
     ldr        r0,DAT_08033460\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x5\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08033464\n\
     ldr        r0,DAT_08033468\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x6\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803346c\n\
     ldr        r0,DAT_08033470\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x7\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08033474\n\
     ldr        r0,DAT_08033478\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x8\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803347c\n\
     ldr        r0,DAT_08033480\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x9\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08033484\n\
     ldr        r0,DAT_08033488\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xa\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803348c\n\
     mov        r0,#0x0\n\
     ldrsh      r3,[r4,r0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xb\n\
     bl         fun_080032a0\n\
     ldr        r5,DAT_08033490\n\
     ldr        r4,DAT_08033494\n\
     ldrh       r3,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xc\n\
     add        r2,r5,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08033498\n\
     ldr        r0,DAT_0803349c\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r0,r1]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xd\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_080334a0\n\
     ldr        r0,DAT_080334a4\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xe\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_080334a8\n\
     ldr        r0,DAT_080334ac\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xf\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_080334b0\n\
     mov        r0,#0x0\n\
     mov        r1,#0x10\n\
     add        r3,r6,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_080334b4\n\
     ldr        r0,DAT_080334b8\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x11\n\
     bl         fun_080032a0\n\
     ldrh       r3,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x12\n\
     add        r2,r5,#0x0\n\
     bl         fun_080032a0\n\
     add        sp,#0x64\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08033408:\n\
     .4byte 0x02010B38\n\
DAT_0803340c:\n\
     .4byte 0x08615D38\n\
DAT_08033410:\n\
     .4byte 0x02010BC0\n\
DAT_08033414:\n\
     .4byte 0x0865FD94\n\
DAT_08033418:\n\
     .4byte 0x02010B3C\n\
DAT_0803341c:\n\
     .4byte 0x0865FB7C\n\
DAT_08033420:\n\
     .4byte 0x02010B80\n\
DAT_08033424:\n\
     .4byte 0x02010BC8\n\
DAT_08033428:\n\
     .4byte 0x08669620\n\
DAT_0803342c:\n\
     .4byte 0x020025B4\n\
DAT_08033430:\n\
     .4byte 0x0000C124\n\
DAT_08033434:\n\
     .4byte 0x08615D3C\n\
DAT_08033438:\n\
     .4byte 0x02010A50\n\
DAT_0803343c:\n\
     .4byte 0x08615D50\n\
DAT_08033440:\n\
     .4byte 0x02010BAC\n\
DAT_08033444:\n\
     .4byte 0x08615D64\n\
DAT_08033448:\n\
     .4byte 0x02010B0C\n\
DAT_0803344c:\n\
     .4byte 0x08615D6C\n\
DAT_08033450:\n\
     .4byte 0x02010BB4\n\
DAT_08033454:\n\
     .4byte 0x08615D74\n\
DAT_08033458:\n\
     .4byte 0x02010A90\n\
DAT_0803345c:\n\
     .4byte 0x08615D84\n\
DAT_08033460:\n\
     .4byte 0x02010BCC\n\
DAT_08033464:\n\
     .4byte 0x08615D94\n\
DAT_08033468:\n\
     .4byte 0x02010B18\n\
DAT_0803346c:\n\
     .4byte 0x08615DA4\n\
DAT_08033470:\n\
     .4byte 0x02010AAC\n\
DAT_08033474:\n\
     .4byte 0x08615DB4\n\
DAT_08033478:\n\
     .4byte 0x02010B24\n\
DAT_0803347c:\n\
     .4byte 0x08615DCC\n\
DAT_08033480:\n\
     .4byte 0x02010B2C\n\
DAT_08033484:\n\
     .4byte 0x08615DE0\n\
DAT_08033488:\n\
     .4byte 0x02010A9C\n\
DAT_0803348c:\n\
     .4byte 0x08615DF4\n\
DAT_08033490:\n\
     .4byte 0x08615E08\n\
DAT_08033494:\n\
     .4byte 0x02010B04\n\
DAT_08033498:\n\
     .4byte 0x08615E18\n\
DAT_0803349c:\n\
     .4byte 0x02010AE0\n\
DAT_080334a0:\n\
     .4byte 0x08615E2C\n\
DAT_080334a4:\n\
     .4byte 0x02010B34\n\
DAT_080334a8:\n\
     .4byte 0x08615E40\n\
DAT_080334ac:\n\
     .4byte 0x02010A68\n\
DAT_080334b0:\n\
     .4byte 0x08615E50\n\
DAT_080334b4:\n\
     .4byte 0x08615E5C\n\
DAT_080334b8:\n\
     .4byte 0x02010B00\n\
    ");
}
__attribute__((naked)) void fun_080334bc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0xc\n\
     ldr        r0,DAT_080335a4\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r8,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_080334d4\n\
     bl         fun_080340f0\n\
LAB_080334d4:\n\
     ldr        r7,DAT_080335a8\n\
     ldrh       r4,[r7,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_080334e0\n\
     bl         fun_080340f0\n\
LAB_080334e0:\n\
     ldr        r5,DAT_080335ac\n\
     strh       r4,[r5,#0x0]\n\
     ldr        r6,DAT_080335b0\n\
     strh       r4,[r6,#0x0]\n\
     ldr        r2,DAT_080335b4\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     add        r3,r2,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033506\n\
     mov        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r2,DAT_080335b8\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     str        r0,[r2,#0x0]\n\
LAB_08033506:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033520\n\
     ldr        r2,DAT_080335b8\n\
     ldr        r0,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
LAB_08033520:\n\
     ldr        r0,DAT_080335bc\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_080335c0\n\
     add        r6,r0,#0x0\n\
     cmp        r2,r1\n\
     bgt        LAB_0803353c\n\
     ldr        r1,DAT_080335c4\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803353c\n\
     strh       r4,[r7,#0x0]\n\
     ldr        r0,DAT_080335c8\n\
     strh       r4,[r0,#0x0]\n\
     strh       r4,[r1,#0x0]\n\
LAB_0803353c:\n\
     ldr        r1,[r6,#0x0]\n\
     ldr        r0,DAT_080335cc\n\
     cmp        r1,r0\n\
     blt        LAB_0803355a\n\
     ldr        r2,DAT_080335d0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803355a\n\
     mov        r0,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_080335c8\n\
     strh       r0,[r1,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
LAB_0803355a:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033586\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033586\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033586\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033586\n\
     bl         fun_080340f0\n\
LAB_08033586:\n\
     ldr        r1,[r6,#0x0]\n\
     ldr        r0,DAT_080335cc\n\
     cmp        r1,r0\n\
     bge        LAB_080335d8\n\
     ldr        r0,DAT_080335d4\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bhi        LAB_08033604\n\
     bl         fun_080343f8\n\
     bl         fun_080340f0\n\
DAT_080335a4:\n\
     .4byte 0x02010B04\n\
DAT_080335a8:\n\
     .4byte 0x02010A54\n\
DAT_080335ac:\n\
     .4byte 0x02010A64\n\
DAT_080335b0:\n\
     .4byte 0x02010B1C\n\
DAT_080335b4:\n\
     .4byte 0x02005830\n\
DAT_080335b8:\n\
     .4byte 0x02010BCC\n\
DAT_080335bc:\n\
     .4byte 0x02010B18\n\
DAT_080335c0:\n\
     .4byte 0x000005DC\n\
DAT_080335c4:\n\
     .4byte 0x02010A50\n\
DAT_080335c8:\n\
     .4byte 0x02010B70\n\
DAT_080335cc:\n\
     .4byte 0xFFFFFB50\n\
DAT_080335d0:\n\
     .4byte 0x02010BAC\n\
DAT_080335d4:\n\
     .4byte 0x02010A90\n\
LAB_080335d8:\n\
     ldr        r0,LAB_080335f8\n\
     cmp        r1,r0\n\
     ble        LAB_08033604\n\
     ldr        r0,LAB_080335fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033604\n\
     ldr        r0,LAB_08033600\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x6\n\
     bne        LAB_08033604\n\
     bl         fun_0803446c\n\
     bl         fun_080340f0\n\
.space 2\n\
LAB_080335f8:\n\
     lsl        r4,r3,#0x17\n\
.space 2\n\
LAB_080335fc:\n\
     lsr        r4,r6,#0x9\n\
     lsl        r1,r0,#0x8\n\
LAB_08033600:\n\
     lsr        r0,r2,#0xa\n\
     lsl        r1,r0,#0x8\n\
LAB_08033604:\n\
     ldr        r1,DAT_080336cc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033652\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033652\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033652\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r4,#0x20\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033652\n\
     ldr        r0,DAT_080336d0\n\
     mov        r1,#0x0\n\
     ldrsh      r2,[r0,r1]\n\
     cmp        r2,#0x1\n\
     bne        LAB_08033652\n\
     ldr        r1,DAT_080336d4\n\
     ldrh       r0,[r1,#0x0]\n\
     and        r2,r0\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803369c\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803369c\n\
LAB_08033652:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r5,#0x1\n\
     add        r0,r5,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033748\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033748\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033748\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r4,#0x10\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033748\n\
     ldr        r0,DAT_080336d0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x9\n\
     bne        LAB_08033748\n\
     ldr        r2,DAT_080336d4\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r5,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803369c\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033748\n\
LAB_0803369c:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033748\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033748\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_080336fc\n\
     ldr        r0,DAT_080336d8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080336e8\n\
     ldr        r0,DAT_080336dc\n\
     ldr        r2,DAT_080336e0\n\
     ldr        r3,DAT_080336e4\n\
     b          LAB_08033726\n\
DAT_080336cc:\n\
     .4byte 0x02010BAC\n\
DAT_080336d0:\n\
     .4byte 0x02010A90\n\
DAT_080336d4:\n\
     .4byte 0x0200F0AC\n\
DAT_080336d8:\n\
     .4byte 0x02010A60\n\
DAT_080336dc:\n\
     .4byte 0x08615E74\n\
DAT_080336e0:\n\
     .4byte 0x087C768A\n\
DAT_080336e4:\n\
     .4byte 0x087C775A\n\
LAB_080336e8:\n\
     ldr        r0,DAT_080336f0\n\
     ldr        r2,DAT_080336f4\n\
     ldr        r3,DAT_080336f8\n\
     b          LAB_08033726\n\
DAT_080336f0:\n\
     .4byte 0x08615E74\n\
DAT_080336f4:\n\
     .4byte 0x087C7668\n\
DAT_080336f8:\n\
     .4byte 0x087C7734\n\
LAB_080336fc:\n\
     ldr        r0,DAT_08033710\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033720\n\
     ldr        r0,DAT_08033714\n\
     ldr        r2,DAT_08033718\n\
     ldr        r3,DAT_0803371c\n\
     b          LAB_08033726\n\
.space 1\n\
.space 1\n\
DAT_08033710:\n\
     .4byte 0x02010A60\n\
DAT_08033714:\n\
     .4byte 0x08615E74\n\
DAT_08033718:\n\
     .4byte 0x087C7698\n\
DAT_0803371c:\n\
     .4byte 0x087C776E\n\
LAB_08033720:\n\
     ldr        r0,LAB_0803373c\n\
     ldr        r2,LAB_08033740\n\
     ldr        r3,LAB_08033744\n\
LAB_08033726:\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x64\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x1\n\
     bl         fun_08035828\n\
     bl         fun_080340e8\n\
LAB_0803373c:\n\
     ldrsh      r4,[r6,r1]\n\
     lsr        r1,r4,#0x1\n\
LAB_08033740:\n\
     strb       r6,[r6,#0x19]\n\
     lsr        r4,r7,#0x1\n\
LAB_08033744:\n\
     strb       r6,[r0,#0x1d]\n\
     lsr        r4,r7,#0x1\n\
LAB_08033748:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803376c\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803376c\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803376c\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08033790\n\
LAB_0803376c:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033830\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033830\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033830\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08033830\n\
LAB_08033790:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033830\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033830\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_080337e4\n\
     ldr        r0,DAT_080337c0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080337d0\n\
     ldr        r0,DAT_080337c4\n\
     ldr        r2,DAT_080337c8\n\
     ldr        r3,DAT_080337cc\n\
     b          LAB_0803380e\n\
DAT_080337c0:\n\
     .4byte 0x02010A60\n\
DAT_080337c4:\n\
     .4byte 0x08615E78\n\
DAT_080337c8:\n\
     .4byte 0x087C76DE\n\
DAT_080337cc:\n\
     .4byte 0x087C77BC\n\
LAB_080337d0:\n\
     ldr        r0,DAT_080337d8\n\
     ldr        r2,DAT_080337dc\n\
     ldr        r3,DAT_080337e0\n\
     b          LAB_0803380e\n\
DAT_080337d8:\n\
     .4byte 0x08615E78\n\
DAT_080337dc:\n\
     .4byte 0x087C76AA\n\
DAT_080337e0:\n\
     .4byte 0x087C7780\n\
LAB_080337e4:\n\
     ldr        r0,DAT_080337f8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033808\n\
     ldr        r0,DAT_080337fc\n\
     ldr        r2,DAT_08033800\n\
     ldr        r3,DAT_08033804\n\
     b          LAB_0803380e\n\
.space 1\n\
.space 1\n\
DAT_080337f8:\n\
     .4byte 0x02010A60\n\
DAT_080337fc:\n\
     .4byte 0x08615E78\n\
DAT_08033800:\n\
     .4byte 0x087C76F8\n\
DAT_08033804:\n\
     .4byte 0x087C77DA\n\
LAB_08033808:\n\
     ldr        r0,LAB_08033824\n\
     ldr        r2,LAB_08033828\n\
     ldr        r3,LAB_0803382c\n\
LAB_0803380e:\n\
     mov        r1,#0x12\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x64\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x8\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x2\n\
     bl         fun_08035828\n\
     bl         fun_080340e8\n\
LAB_08033824:\n\
     ldrsh      r0,[r7,r1]\n\
     lsr        r1,r4,#0x1\n\
LAB_08033828:\n\
     strb       r2,[r0,#0x1b]\n\
     lsr        r4,r7,#0x1\n\
LAB_0803382c:\n\
     strb       r4,[r3,#0x1e]\n\
     lsr        r4,r7,#0x1\n\
LAB_08033830:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r7,#0x1\n\
     add        r0,r7,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033910\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033910\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033910\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x0\n\
     bne        LAB_08033910\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r4,#0x80\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033910\n\
     ldr        r2,DAT_080338a8\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r7,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033880\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033910\n\
LAB_08033880:\n\
     ldr        r0,DAT_080338ac\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080338c8\n\
     ldr        r0,DAT_080338b0\n\
     ldr        r2,DAT_080338b4\n\
     ldr        r3,DAT_080338b8\n\
     mov        r1,#0xa\n\
     str        r1,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     mov        r1,#0x4\n\
     bl         fun_08035828\n\
     ldr        r0,DAT_080338bc\n\
     ldr        r2,DAT_080338c0\n\
     ldr        r3,DAT_080338c4\n\
     b          LAB_080338e4\n\
DAT_080338a8:\n\
     .4byte 0x0200F0AC\n\
DAT_080338ac:\n\
     .4byte 0x02010A60\n\
DAT_080338b0:\n\
     .4byte 0x08615E7C\n\
DAT_080338b4:\n\
     .4byte 0x087C772E\n\
DAT_080338b8:\n\
     .4byte 0x087C7806\n\
DAT_080338bc:\n\
     .4byte 0x08615E88\n\
DAT_080338c0:\n\
     .4byte 0x087C7724\n\
DAT_080338c4:\n\
     .4byte 0x087C780C\n\
LAB_080338c8:\n\
     ldr        r0,LAB_080338f8\n\
     ldr        r2,LAB_080338fc\n\
     ldr        r3,LAB_08033900\n\
     mov        r1,#0xa\n\
     str        r1,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     mov        r1,#0x4\n\
     bl         fun_08035828\n\
     ldr        r0,LAB_08033904\n\
     ldr        r2,LAB_08033908\n\
     ldr        r3,LAB_0803390c\n\
LAB_080338e4:\n\
     mov        r1,#0x12\n\
     str        r1,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     mov        r1,#0x3\n\
     bl         fun_08035828\n\
     bl         fun_080340e8\n\
.space 2\n\
LAB_080338f8:\n\
     ldrsh      r4,[r7,r1]\n\
     lsr        r1,r4,#0x1\n\
LAB_080338fc:\n\
     strb       r2,[r3,#0x1c]\n\
     lsr        r4,r7,#0x1\n\
LAB_08033900:\n\
     strb       r2,[r7,#0x1f]\n\
     lsr        r4,r7,#0x1\n\
LAB_08033904:\n\
     ldrsh      r0,[r1,r2]\n\
     lsr        r1,r4,#0x1\n\
LAB_08033908:\n\
     strb       r4,[r2,#0x1c]\n\
     lsr        r4,r7,#0x1\n\
LAB_0803390c:\n\
     ldrb       r0,[r0,#0x0]\n\
     lsr        r4,r7,#0x1\n\
LAB_08033910:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r7,#0x1\n\
     add        r0,r7,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080339ec\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080339ec\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080339ec\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x0\n\
     bne        LAB_080339ec\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r4,#0x40\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080339ec\n\
     ldr        r2,DAT_08033988\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r7,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033960\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080339ec\n\
LAB_08033960:\n\
     ldr        r0,DAT_0803398c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080339a8\n\
     ldr        r0,DAT_08033990\n\
     ldr        r2,DAT_08033994\n\
     ldr        r3,DAT_08033998\n\
     mov        r1,#0xa\n\
     str        r1,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     mov        r1,#0x3\n\
     bl         fun_08035828\n\
     ldr        r0,DAT_0803399c\n\
     ldr        r2,DAT_080339a0\n\
     ldr        r3,DAT_080339a4\n\
     b          LAB_080339c4\n\
DAT_08033988:\n\
     .4byte 0x0200F0AC\n\
DAT_0803398c:\n\
     .4byte 0x02010A60\n\
DAT_08033990:\n\
     .4byte 0x08615E88\n\
DAT_08033994:\n\
     .4byte 0x087C7724\n\
DAT_08033998:\n\
     .4byte 0x087C780C\n\
DAT_0803399c:\n\
     .4byte 0x08615E7C\n\
DAT_080339a0:\n\
     .4byte 0x087C772E\n\
DAT_080339a4:\n\
     .4byte 0x087C7806\n\
LAB_080339a8:\n\
     ldr        r0,DAT_080339d4\n\
     ldr        r2,DAT_080339d8\n\
     ldr        r3,DAT_080339dc\n\
     mov        r1,#0xa\n\
     str        r1,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     mov        r1,#0x3\n\
     bl         fun_08035828\n\
     ldr        r0,DAT_080339e0\n\
     ldr        r2,DAT_080339e4\n\
     ldr        r3,DAT_080339e8\n\
LAB_080339c4:\n\
     mov        r1,#0x12\n\
     str        r1,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     mov        r1,#0x4\n\
     bl         fun_08035828\n\
     b          fun_080340e8\n\
DAT_080339d4:\n\
     .4byte 0x08615E88\n\
DAT_080339d8:\n\
     .4byte 0x087C7714\n\
DAT_080339dc:\n\
     .4byte 0x087C7800\n\
DAT_080339e0:\n\
     .4byte 0x08615E7C\n\
DAT_080339e4:\n\
     .4byte 0x087C771A\n\
DAT_080339e8:\n\
     .4byte 0x087C77FA\n\
LAB_080339ec:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r5,#0x2\n\
     add        r0,r5,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033ac0\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033ac0\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r4,#0x80\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033ac0\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033ac0\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     cmp        r7,#0x0\n\
     bne        LAB_08033ac0\n\
     ldr        r2,DAT_08033a74\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r5,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033a3c\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033ac0\n\
LAB_08033a3c:\n\
     ldr        r0,DAT_08033a78\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033a88\n\
     ldr        r5,DAT_08033a7c\n\
     ldr        r6,DAT_08033a80\n\
     ldr        r0,DAT_08033a84\n\
     mov        r8,r0\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x9\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x9\n\
     b          LAB_08033d04\n\
.space 1\n\
.space 1\n\
DAT_08033a74:\n\
     .4byte 0x0200F0AC\n\
DAT_08033a78:\n\
     .4byte 0x02010A60\n\
DAT_08033a7c:\n\
     .4byte 0x08615E94\n\
DAT_08033a80:\n\
     .4byte 0x087C7A9A\n\
DAT_08033a84:\n\
     .4byte 0x087C7ABA\n\
LAB_08033a88:\n\
     ldr        r5,DAT_08033ab4\n\
     ldr        r6,DAT_08033ab8\n\
     ldr        r1,DAT_08033abc\n\
     mov        r8,r1\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x9\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x9\n\
     b          LAB_08033d04\n\
DAT_08033ab4:\n\
     .4byte 0x08615E94\n\
DAT_08033ab8:\n\
     .4byte 0x087C7A5E\n\
DAT_08033abc:\n\
     .4byte 0x087C7A7A\n\
LAB_08033ac0:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r5,#0x2\n\
     add        r0,r5,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033b94\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033b94\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033b94\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     cmp        r7,#0x0\n\
     bne        LAB_08033b94\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r4,#0x40\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033b94\n\
     ldr        r2,DAT_08033b48\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r5,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033b10\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033b94\n\
LAB_08033b10:\n\
     ldr        r0,DAT_08033b4c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08033b5c\n\
     ldr        r5,DAT_08033b50\n\
     ldr        r6,DAT_08033b54\n\
     ldr        r0,DAT_08033b58\n\
     mov        r8,r0\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x8\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x8\n\
     b          LAB_08033d04\n\
.space 1\n\
.space 1\n\
DAT_08033b48:\n\
     .4byte 0x0200F0AC\n\
DAT_08033b4c:\n\
     .4byte 0x02010A60\n\
DAT_08033b50:\n\
     .4byte 0x08615EA0\n\
DAT_08033b54:\n\
     .4byte 0x087C7A88\n\
DAT_08033b58:\n\
     .4byte 0x087C7AAC\n\
LAB_08033b5c:\n\
     ldr        r5,DAT_08033b88\n\
     ldr        r6,DAT_08033b8c\n\
     ldr        r1,DAT_08033b90\n\
     mov        r8,r1\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x8\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x8\n\
     b          LAB_08033d04\n\
DAT_08033b88:\n\
     .4byte 0x08615EA0\n\
DAT_08033b8c:\n\
     .4byte 0x087C7A50\n\
DAT_08033b90:\n\
     .4byte 0x087C7A6C\n\
LAB_08033b94:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033bc2\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033bc2\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033bc2\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033bc2\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08033bf0\n\
LAB_08033bc2:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033c74\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033c74\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033c74\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033c74\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08033c74\n\
LAB_08033bf0:\n\
     ldr        r0,DAT_08033c28\n\
     mov        r1,#0x0\n\
     ldrsh      r7,[r0,r1]\n\
     cmp        r7,#0x0\n\
     bne        LAB_08033c38\n\
     ldr        r5,DAT_08033c2c\n\
     ldr        r6,DAT_08033c30\n\
     ldr        r0,DAT_08033c34\n\
     mov        r8,r0\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     mov        r4,#0xb\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0xb\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0xb\n\
     b          LAB_08033d04\n\
.space 1\n\
.space 1\n\
DAT_08033c28:\n\
     .4byte 0x02010A60\n\
DAT_08033c2c:\n\
     .4byte 0x08615EAC\n\
DAT_08033c30:\n\
     .4byte 0x087C7CB4\n\
DAT_08033c34:\n\
     .4byte 0x087C7CEC\n\
LAB_08033c38:\n\
     ldr        r6,DAT_08033c68\n\
     ldr        r1,DAT_08033c6c\n\
     mov        r8,r1\n\
     ldr        r0,DAT_08033c70\n\
     mov        r9,r0\n\
     mov        r0,#0x12\n\
    ");
}
__attribute__((naked)) void fun_08033c44()
{
    asm("\n\
     str        r0,[sp,#0x0]\n\
     mov        r5,#0x0\n\
     str        r5,[sp,#0x4]\n\
     mov        r4,#0xb\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0xb\n\
     mov        r2,r8\n\
     mov        r3,r9\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0xb\n\
     b          LAB_08033d4e\n\
DAT_08033c68:\n\
     .4byte 0x08615EAC\n\
DAT_08033c6c:\n\
     .4byte 0x087C7B90\n\
DAT_08033c70:\n\
     .4byte 0x087C7BC8\n\
LAB_08033c74:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033ca2\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033ca2\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033ca2\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033ca2\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08033cd0\n\
LAB_08033ca2:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033d64\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033d64\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033d64\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033d64\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08033d64\n\
LAB_08033cd0:\n\
     ldr        r0,DAT_08033d10\n\
     mov        r1,#0x0\n\
     ldrsh      r7,[r0,r1]\n\
     cmp        r7,#0x0\n\
     bne        LAB_08033d20\n\
     ldr        r5,DAT_08033d14\n\
     ldr        r6,DAT_08033d18\n\
     ldr        r0,DAT_08033d1c\n\
     mov        r8,r0\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     mov        r4,#0xb\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0xa\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r7,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0xa\n\
LAB_08033d04:\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_08035828\n\
     b          fun_080340e8\n\
.space 1\n\
.space 1\n\
DAT_08033d10:\n\
     .4byte 0x02010A60\n\
DAT_08033d14:\n\
     .4byte 0x08615EBC\n\
DAT_08033d18:\n\
     .4byte 0x087C7C98\n\
DAT_08033d1c:\n\
     .4byte 0x087C7CD0\n\
LAB_08033d20:\n\
     ldr        r6,DAT_08033d58\n\
     ldr        r1,DAT_08033d5c\n\
     mov        r8,r1\n\
     ldr        r0,DAT_08033d60\n\
     mov        r9,r0\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     mov        r5,#0x0\n\
     str        r5,[sp,#0x4]\n\
     mov        r4,#0xb\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0xa\n\
     mov        r2,r8\n\
     mov        r3,r9\n\
     bl         fun_08035828\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     str        r4,[sp,#0x8]\n\
     add        r0,r6,#0x0\n\
     mov        r1,#0xa\n\
LAB_08033d4e:\n\
     mov        r2,r8\n\
     mov        r3,r9\n\
     bl         fun_08035828\n\
     b          fun_080340e8\n\
DAT_08033d58:\n\
     .4byte 0x08615EBC\n\
DAT_08033d5c:\n\
     .4byte 0x087C7B78\n\
DAT_08033d60:\n\
     .4byte 0x087C7BA8\n\
LAB_08033d64:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033d88\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033d88\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033d88\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08033dac\n\
LAB_08033d88:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033e44\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033e44\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033e44\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08033e44\n\
LAB_08033dac:\n\
     ldr        r0,DAT_08033dd0\n\
     mov        r1,#0x0\n\
     ldrsh      r4,[r0,r1]\n\
     cmp        r4,#0x0\n\
     bne        LAB_08033dfc\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08033de0\n\
     ldr        r0,DAT_08033dd4\n\
     ldr        r2,DAT_08033dd8\n\
     ldr        r3,DAT_08033ddc\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_08033e2a\n\
.space 1\n\
.space 1\n\
DAT_08033dd0:\n\
     .4byte 0x02010A60\n\
DAT_08033dd4:\n\
     .4byte 0x08615ECC\n\
DAT_08033dd8:\n\
     .4byte 0x087C7C14\n\
DAT_08033ddc:\n\
     .4byte 0x087C7C6C\n\
LAB_08033de0:\n\
     ldr        r0,DAT_08033df0\n\
     ldr        r2,DAT_08033df4\n\
     ldr        r3,DAT_08033df8\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_08033e2a\n\
.space 1\n\
.space 1\n\
DAT_08033df0:\n\
     .4byte 0x08615ECC\n\
DAT_08033df4:\n\
     .4byte 0x087C7C2A\n\
DAT_08033df8:\n\
     .4byte 0x087C7C82\n\
LAB_08033dfc:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08033e1c\n\
     ldr        r0,DAT_08033e10\n\
     ldr        r2,DAT_08033e14\n\
     ldr        r3,DAT_08033e18\n\
     b          LAB_08033e22\n\
.space 1\n\
.space 1\n\
DAT_08033e10:\n\
     .4byte 0x08615ECC\n\
DAT_08033e14:\n\
     .4byte 0x087C7AF4\n\
DAT_08033e18:\n\
     .4byte 0x087C7B4C\n\
LAB_08033e1c:\n\
     ldr        r0,DAT_08033e38\n\
     ldr        r2,DAT_08033e3c\n\
     ldr        r3,DAT_08033e40\n\
LAB_08033e22:\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x4]\n\
LAB_08033e2a:\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0xc\n\
     bl         fun_08035828\n\
     b          fun_080340e8\n\
.space 1\n\
.space 1\n\
DAT_08033e38:\n\
     .4byte 0x08615ECC\n\
DAT_08033e3c:\n\
     .4byte 0x087C7B0A\n\
DAT_08033e40:\n\
     .4byte 0x087C7B62\n\
LAB_08033e44:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033e68\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033e68\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033e68\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08033e8c\n\
LAB_08033e68:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033f24\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033f24\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033f24\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08033f24\n\
LAB_08033e8c:\n\
     ldr        r0,DAT_08033eb0\n\
     mov        r1,#0x0\n\
     ldrsh      r4,[r0,r1]\n\
     cmp        r4,#0x0\n\
     bne        LAB_08033edc\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08033ec0\n\
     ldr        r0,DAT_08033eb4\n\
     ldr        r2,DAT_08033eb8\n\
     ldr        r3,DAT_08033ebc\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_08033f0a\n\
.space 1\n\
.space 1\n\
DAT_08033eb0:\n\
     .4byte 0x02010A60\n\
DAT_08033eb4:\n\
     .4byte 0x08615EDC\n\
DAT_08033eb8:\n\
     .4byte 0x087C7BE8\n\
DAT_08033ebc:\n\
     .4byte 0x087C7C40\n\
LAB_08033ec0:\n\
     ldr        r0,DAT_08033ed0\n\
     ldr        r2,DAT_08033ed4\n\
     ldr        r3,DAT_08033ed8\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_08033f0a\n\
.space 1\n\
.space 1\n\
DAT_08033ed0:\n\
     .4byte 0x08615EDC\n\
DAT_08033ed4:\n\
     .4byte 0x087C7BFE\n\
DAT_08033ed8:\n\
     .4byte 0x087C7C56\n\
LAB_08033edc:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08033efc\n\
     ldr        r0,DAT_08033ef0\n\
     ldr        r2,DAT_08033ef4\n\
     ldr        r3,DAT_08033ef8\n\
     b          LAB_08033f02\n\
.space 1\n\
.space 1\n\
DAT_08033ef0:\n\
     .4byte 0x08615EDC\n\
DAT_08033ef4:\n\
     .4byte 0x087C7AC8\n\
DAT_08033ef8:\n\
     .4byte 0x087C7B20\n\
LAB_08033efc:\n\
     ldr        r0,DAT_08033f18\n\
     ldr        r2,DAT_08033f1c\n\
     ldr        r3,DAT_08033f20\n\
LAB_08033f02:\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x4]\n\
LAB_08033f0a:\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0xd\n\
     bl         fun_08035828\n\
     b          fun_080340e8\n\
.space 1\n\
.space 1\n\
DAT_08033f18:\n\
     .4byte 0x08615EDC\n\
DAT_08033f1c:\n\
     .4byte 0x087C7ADE\n\
DAT_08033f20:\n\
     .4byte 0x087C7B36\n\
LAB_08033f24:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033f48\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033f48\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08033f48\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08033f6c\n\
LAB_08033f48:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034004\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034004\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034004\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08034004\n\
LAB_08033f6c:\n\
     ldr        r0,DAT_08033f90\n\
     mov        r1,#0x0\n\
     ldrsh      r4,[r0,r1]\n\
     cmp        r4,#0x0\n\
     bne        LAB_08033fbc\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08033fa0\n\
     ldr        r0,DAT_08033f94\n\
     ldr        r2,DAT_08033f98\n\
     ldr        r3,DAT_08033f9c\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_08033fea\n\
.space 1\n\
.space 1\n\
DAT_08033f90:\n\
     .4byte 0x02010A60\n\
DAT_08033f94:\n\
     .4byte 0x08615EEC\n\
DAT_08033f98:\n\
     .4byte 0x087C7594\n\
DAT_08033f9c:\n\
     .4byte 0x087C761C\n\
LAB_08033fa0:\n\
     ldr        r0,DAT_08033fb0\n\
     ldr        r2,DAT_08033fb4\n\
     ldr        r3,DAT_08033fb8\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_08033fea\n\
.space 1\n\
.space 1\n\
DAT_08033fb0:\n\
     .4byte 0x08615EEC\n\
DAT_08033fb4:\n\
     .4byte 0x087C75A4\n\
DAT_08033fb8:\n\
     .4byte 0x087C7630\n\
LAB_08033fbc:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08033fdc\n\
     ldr        r0,DAT_08033fd0\n\
     ldr        r2,DAT_08033fd4\n\
     ldr        r3,DAT_08033fd8\n\
     b          LAB_08033fe2\n\
.space 1\n\
.space 1\n\
DAT_08033fd0:\n\
     .4byte 0x08615EEC\n\
DAT_08033fd4:\n\
     .4byte 0x087C7554\n\
DAT_08033fd8:\n\
     .4byte 0x087C75D0\n\
LAB_08033fdc:\n\
     ldr        r0,DAT_08033ff8\n\
     ldr        r2,DAT_08033ffc\n\
     ldr        r3,DAT_08034000\n\
LAB_08033fe2:\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x4]\n\
LAB_08033fea:\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0xe\n\
     bl         fun_08035828\n\
     b          fun_080340e8\n\
.space 1\n\
.space 1\n\
DAT_08033ff8:\n\
     .4byte 0x08615EEC\n\
DAT_08033ffc:\n\
     .4byte 0x087C7562\n\
DAT_08034000:\n\
     .4byte 0x087C75E2\n\
LAB_08034004:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034028\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034028\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034028\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0803404e\n\
LAB_08034028:\n\
     ldr        r2,DAT_08034070\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        fun_080340e8\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        fun_080340e8\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        fun_080340e8\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        fun_080340e8\n\
LAB_0803404e:\n\
     ldr        r0,DAT_08034074\n\
     mov        r1,#0x0\n\
     ldrsh      r4,[r0,r1]\n\
     cmp        r4,#0x0\n\
     bne        LAB_080340a0\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08034084\n\
     ldr        r0,DAT_08034078\n\
     ldr        r2,DAT_0803407c\n\
     ldr        r3,DAT_08034080\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_080340b8\n\
DAT_08034070:\n\
     .4byte 0x02005830\n\
DAT_08034074:\n\
     .4byte 0x02010A60\n\
DAT_08034078:\n\
     .4byte 0x08615EFC\n\
DAT_0803407c:\n\
     .4byte 0x087C75B4\n\
DAT_08034080:\n\
     .4byte 0x087C7642\n\
LAB_08034084:\n\
     ldr        r0,DAT_08034094\n\
     ldr        r2,DAT_08034098\n\
     ldr        r3,DAT_0803409c\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     b          LAB_080340b8\n\
.space 1\n\
.space 1\n\
DAT_08034094:\n\
     .4byte 0x08615EFC\n\
DAT_08034098:\n\
     .4byte 0x087C75C2\n\
DAT_0803409c:\n\
     .4byte 0x087C7656\n\
LAB_080340a0:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_080340d0\n\
     ldr        r0,DAT_080340c4\n\
     ldr        r2,DAT_080340c8\n\
     ldr        r3,DAT_080340cc\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x4]\n\
LAB_080340b8:\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0xf\n\
     bl         fun_08035828\n\
     b          fun_080340e8\n\
DAT_080340c4:\n\
     .4byte 0x08615EFC\n\
DAT_080340c8:\n\
     .4byte 0x087C7570\n\
DAT_080340cc:\n\
     .4byte 0x087C75F6\n\
LAB_080340d0:\n\
     ldr        r0,DAT_08034100\n\
     ldr        r2,DAT_08034104\n\
     ldr        r3,DAT_08034108\n\
     mov        r1,#0x16\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0xf\n\
     bl         fun_08035828\n\
    ");
}
__attribute__((naked)) void fun_080340e8()
{
    asm("\n\
     ldr        r0,DAT_0803410c\n\
     ldr        r1,DAT_08034110\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
    ");
}
__attribute__((naked)) void fun_080340f0()
{
    asm("\n\
     add        sp,#0xc\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08034100:\n\
     .4byte 0x08615EFC\n\
DAT_08034104:\n\
     .4byte 0x087C7582\n\
DAT_08034108:\n\
     .4byte 0x087C7608\n\
DAT_0803410c:\n\
     .4byte 0x0200F0AC\n\
DAT_08034110:\n\
     .4byte 0x02005830\n\
    ");
}
__attribute__((naked)) void fun_08034114()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0xc\n\
     ldr        r0,DAT_08034198\n\
     ldrh       r4,[r0,#0x2]\n\
     ldr        r1,DAT_0803419c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080341a0\n\
     ldr        r3,[r0,#0x0]\n\
     ldr        r2,DAT_080341a4\n\
     add        r5,r1,#0x0\n\
     add        r7,r0,#0x0\n\
     ldr        r6,DAT_080341a8\n\
     cmp        r3,r2\n\
     ble        LAB_08034156\n\
     ldr        r0,DAT_080341ac\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034156\n\
     lsl        r1,r4,#0x10\n\
     mov        r0,#0x83\n\
     lsl        r0,r0,#0x12\n\
     cmp        r1,r0\n\
     ble        LAB_08034156\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803415c\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_080341b0\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034156:\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034252\n\
LAB_0803415c:\n\
     ldr        r0,DAT_080341b4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_08034170\n\
     ldr        r0,DAT_080341b8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     beq        LAB_08034170\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
LAB_08034170:\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034252\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034252\n\
     ldr        r1,[r7,#0x0]\n\
     ldr        r0,DAT_080341a4\n\
     cmp        r1,r0\n\
     bgt        LAB_080341bc\n\
     ldr        r1,DAT_080341ac\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080341bc\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08034252\n\
.space 1\n\
.space 1\n\
DAT_08034198:\n\
     .4byte 0x02010B0C\n\
DAT_0803419c:\n\
     .4byte 0x02010B70\n\
DAT_080341a0:\n\
     .4byte 0x02010B18\n\
DAT_080341a4:\n\
     .4byte 0x000005DC\n\
DAT_080341a8:\n\
     .4byte 0x02010A54\n\
DAT_080341ac:\n\
     .4byte 0x02010A50\n\
DAT_080341b0:\n\
     .4byte 0x02010AC0\n\
DAT_080341b4:\n\
     .4byte 0x02010AD4\n\
DAT_080341b8:\n\
     .4byte 0x02010A90\n\
LAB_080341bc:\n\
     ldr        r0,DAT_080341f4\n\
     mov        r2,#0x83\n\
     lsl        r2,r2,#0x2\n\
     add        r1,r2,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034252\n\
     ldr        r0,DAT_080341f8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08034208\n\
     ldr        r0,DAT_080341fc\n\
     ldr        r2,DAT_08034200\n\
     ldr        r3,DAT_08034204\n\
     mov        r1,#0x44\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x2\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x6\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x1\n\
     bl         fun_08035828\n\
     b          LAB_08034252\n\
.space 1\n\
.space 1\n\
DAT_080341f4:\n\
     .4byte 0x02010B20\n\
DAT_080341f8:\n\
     .4byte 0x02010AE0\n\
DAT_080341fc:\n\
     .4byte 0x08615F0C\n\
DAT_08034200:\n\
     .4byte 0x087C768A\n\
DAT_08034204:\n\
     .4byte 0x087C775A\n\
LAB_08034208:\n\
     cmp        r0,#0x8\n\
     bne        LAB_08034234\n\
     ldr        r0,DAT_08034228\n\
     ldr        r2,DAT_0803422c\n\
     ldr        r3,DAT_08034230\n\
     mov        r1,#0x40\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x2\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x6\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x8\n\
     bl         fun_08035828\n\
     b          LAB_08034252\n\
DAT_08034228:\n\
     .4byte 0x08615F1C\n\
DAT_0803422c:\n\
     .4byte 0x087C7A50\n\
DAT_08034230:\n\
     .4byte 0x087C7A6C\n\
LAB_08034234:\n\
     cmp        r0,#0x9\n\
     bne        LAB_08034252\n\
     ldr        r0,DAT_0803425c\n\
     ldr        r2,DAT_08034260\n\
     ldr        r3,DAT_08034264\n\
     mov        r1,#0x40\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x2\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x6\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x9\n\
     bl         fun_08035828\n\
LAB_08034252:\n\
     add        sp,#0xc\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803425c:\n\
     .4byte 0x08615F34\n\
DAT_08034260:\n\
     .4byte 0x087C7A5E\n\
DAT_08034264:\n\
     .4byte 0x087C7A7A\n\
    ");
}
__attribute__((naked)) void fun_08034268()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0xc\n\
     ldr        r1,DAT_080342f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080342f4\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r0,r3]\n\
     add        r4,r1,#0x0\n\
     add        r5,r0,#0x0\n\
     ldr        r3,DAT_080342f8\n\
     cmp        r2,#0x0\n\
     beq        LAB_080342a0\n\
     ldr        r0,DAT_080342fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x5\n\
     bne        LAB_080342a0\n\
     ldr        r0,DAT_08034300\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034304\n\
     cmp        r1,r0\n\
     bge        LAB_080342a0\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080342a8\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     strh       r0,[r4,#0x0]\n\
LAB_080342a0:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080342a8\n\
     b          LAB_080343ea\n\
LAB_080342a8:\n\
     ldr        r0,DAT_08034308\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x6\n\
     bne        LAB_080342c6\n\
     ldr        r0,DAT_080342fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x6\n\
     beq        LAB_080342c6\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r0,DAT_0803430c\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034310\n\
     strh       r1,[r0,#0x0]\n\
LAB_080342c6:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080342ce\n\
     b          LAB_080343ea\n\
LAB_080342ce:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080342d6\n\
     b          LAB_080343ea\n\
LAB_080342d6:\n\
     ldr        r0,DAT_08034314\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08034354\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r5,r3]\n\
     cmp        r1,#0x6\n\
     bne        LAB_08034324\n\
     ldr        r0,DAT_08034318\n\
     ldr        r2,DAT_0803431c\n\
     ldr        r3,DAT_08034320\n\
     b          LAB_08034396\n\
DAT_080342f0:\n\
     .4byte 0x02010B70\n\
DAT_080342f4:\n\
     .4byte 0x02010BAC\n\
DAT_080342f8:\n\
     .4byte 0x02010B04\n\
DAT_080342fc:\n\
     .4byte 0x02010A90\n\
DAT_08034300:\n\
     .4byte 0x02010B18\n\
DAT_08034304:\n\
     .4byte 0xFFFFFB50\n\
DAT_08034308:\n\
     .4byte 0x02010AD4\n\
DAT_0803430c:\n\
     .4byte 0x02010B48\n\
DAT_08034310:\n\
     .4byte 0x02010A6C\n\
DAT_08034314:\n\
     .4byte 0x02010A60\n\
DAT_08034318:\n\
     .4byte 0x08615F4C\n\
DAT_0803431c:\n\
     .4byte 0x087C7910\n\
DAT_08034320:\n\
     .4byte 0x087C7A30\n\
LAB_08034324:\n\
     cmp        r1,#0x7\n\
     bne        LAB_0803433c\n\
     ldr        r0,DAT_08034330\n\
     ldr        r2,DAT_08034334\n\
     ldr        r3,DAT_08034338\n\
     b          LAB_080343c2\n\
DAT_08034330:\n\
     .4byte 0x08615F58\n\
DAT_08034334:\n\
     .4byte 0x087C78D8\n\
DAT_08034338:\n\
     .4byte 0x087C79F8\n\
LAB_0803433c:\n\
     cmp        r1,#0x5\n\
     bne        LAB_08034354\n\
     ldr        r0,DAT_08034348\n\
     ldr        r2,DAT_0803434c\n\
     ldr        r3,DAT_08034350\n\
     b          LAB_08034368\n\
DAT_08034348:\n\
     .4byte 0x08615F64\n\
DAT_0803434c:\n\
     .4byte 0x087C782A\n\
DAT_08034350:\n\
     .4byte 0x087C7944\n\
LAB_08034354:\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_080343e4\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     cmp        r0,#0x5\n\
     bne        LAB_0803438c\n\
     ldr        r0,DAT_08034380\n\
     ldr        r2,DAT_08034384\n\
     ldr        r3,DAT_08034388\n\
LAB_08034368:\n\
     mov        r1,#0x40\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x2\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x5\n\
     bl         fun_08035828\n\
     b          LAB_080343ea\n\
.space 1\n\
.space 1\n\
DAT_08034380:\n\
     .4byte 0x08615F64\n\
DAT_08034384:\n\
     .4byte 0x087C7812\n\
DAT_08034388:\n\
     .4byte 0x087C792C\n\
LAB_0803438c:\n\
     cmp        r0,#0x6\n\
     bne        LAB_080343b8\n\
     ldr        r0,DAT_080343ac\n\
     ldr        r2,DAT_080343b0\n\
     ldr        r3,DAT_080343b4\n\
LAB_08034396:\n\
     mov        r1,#0x44\n\
     str        r1,[sp,#0x0]\n\
     add        r1,#0xe8\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x6\n\
     bl         fun_08035828\n\
     b          LAB_080343ea\n\
.space 1\n\
.space 1\n\
DAT_080343ac:\n\
     .4byte 0x08615F4C\n\
DAT_080343b0:\n\
     .4byte 0x087C789C\n\
DAT_080343b4:\n\
     .4byte 0x087C79B8\n\
LAB_080343b8:\n\
     cmp        r0,#0x7\n\
     bne        LAB_080343e4\n\
     ldr        r0,DAT_080343d8\n\
     ldr        r2,DAT_080343dc\n\
     ldr        r3,DAT_080343e0\n\
LAB_080343c2:\n\
     mov        r1,#0x44\n\
     str        r1,[sp,#0x0]\n\
     add        r1,#0xe8\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x4\n\
     str        r1,[sp,#0x8]\n\
     mov        r1,#0x7\n\
     bl         fun_08035828\n\
     b          LAB_080343ea\n\
.space 1\n\
.space 1\n\
DAT_080343d8:\n\
     .4byte 0x08615F58\n\
DAT_080343dc:\n\
     .4byte 0x087C7860\n\
DAT_080343e0:\n\
     .4byte 0x087C797A\n\
LAB_080343e4:\n\
     ldr        r1,DAT_080343f4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_080343ea:\n\
     add        sp,#0xc\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080343f4:\n\
     .4byte 0x02010A78\n\
    ");
}
__attribute__((naked)) void fun_080343f8()
{
    asm("\n\
     ldr        r2,DAT_08034420\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034428\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08034418\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034428\n\
LAB_08034418:\n\
     ldr        r1,DAT_08034424\n\
     mov        r0,#0x6\n\
     b          LAB_08034462\n\
.space 1\n\
.space 1\n\
DAT_08034420:\n\
     .4byte 0x02005830\n\
DAT_08034424:\n\
     .4byte 0x02010BAC\n\
LAB_08034428:\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034440\n\
     ldr        r1,DAT_0803443c\n\
     mov        r0,#0x5\n\
     b          LAB_08034462\n\
.space 1\n\
.space 1\n\
DAT_0803443c:\n\
     .4byte 0x02010BAC\n\
LAB_08034440:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034464\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08034464\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08034464\n\
     ldr        r1,DAT_08034468\n\
     mov        r0,#0x7\n\
LAB_08034462:\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034464:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08034468:\n\
     .4byte 0x02010BAC\n\
    ");
}
__attribute__((naked)) void fun_0803446c()
{
    asm("\n\
     ldr        r2,DAT_08034494\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r3,#0x1\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080344a8\n\
     ldr        r1,DAT_08034498\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080344a8\n\
     strh       r3,[r1,#0x0]\n\
     ldr        r0,DAT_0803449c\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,DAT_080344a0\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,DAT_080344a4\n\
     strh       r3,[r0,#0x0]\n\
     b          LAB_08034506\n\
.space 1\n\
.space 1\n\
DAT_08034494:\n\
     .4byte 0x02005830\n\
DAT_08034498:\n\
     .4byte 0x02010A50\n\
DAT_0803449c:\n\
     .4byte 0x02010AE0\n\
DAT_080344a0:\n\
     .4byte 0x02010A7C\n\
DAT_080344a4:\n\
     .4byte 0x02010B14\n\
LAB_080344a8:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080344d8\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080344d8\n\
     ldr        r3,DAT_080344d0\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080344d8\n\
     mov        r1,#0x1\n\
     strh       r1,[r3,#0x0]\n\
     ldr        r2,DAT_080344d4\n\
     mov        r0,#0x8\n\
     b          LAB_080344fc\n\
.space 1\n\
.space 1\n\
DAT_080344d0:\n\
     .4byte 0x02010A50\n\
DAT_080344d4:\n\
     .4byte 0x02010AE0\n\
LAB_080344d8:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034506\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034506\n\
     ldr        r2,DAT_08034508\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08034506\n\
     mov        r1,#0x1\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r2,DAT_0803450c\n\
     mov        r0,#0x9\n\
LAB_080344fc:\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_08034510\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034514\n\
     strh       r1,[r0,#0x0]\n\
LAB_08034506:\n\
     bx         lr\n\
DAT_08034508:\n\
     .4byte 0x02010A50\n\
DAT_0803450c:\n\
     .4byte 0x02010AE0\n\
DAT_08034510:\n\
     .4byte 0x02010A7C\n\
DAT_08034514:\n\
     .4byte 0x02010B14\n\
    ");
}
__attribute__((naked)) void fun_08034518()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r0,DAT_08034588\n\
     ldr        r6,[r0,#0x0]\n\
     ldr        r0,DAT_0803458c\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034590\n\
     strh       r1,[r0,#0x0]\n\
     mov        r4,#0x0\n\
     ldr        r2,DAT_08034594\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803453e\n\
     ldr        r1,DAT_08034598\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803453e\n\
     strh       r4,[r2,#0x0]\n\
     strh       r4,[r1,#0x0]\n\
LAB_0803453e:\n\
     ldr        r0,DAT_0803459c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034550\n\
     ldr        r0,DAT_08034594\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034598\n\
     strh       r1,[r0,#0x0]\n\
LAB_08034550:\n\
     ldr        r5,DAT_080345a0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803456e\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0xb\n\
     beq        LAB_0803456e\n\
     ldr        r0,DAT_080345a4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034578\n\
LAB_0803456e:\n\
     ldr        r0,DAT_08034594\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034598\n\
     strh       r1,[r0,#0x0]\n\
LAB_08034578:\n\
     ldr        r0,DAT_080345a8\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_080345ac\n\
     cmp        r1,r0\n\
     bgt        LAB_080345b0\n\
     add        r4,#0x20\n\
     b          LAB_080345bc\n\
.space 1\n\
.space 1\n\
DAT_08034588:\n\
     .4byte 0x02010B18\n\
DAT_0803458c:\n\
     .4byte 0x02010A5C\n\
DAT_08034590:\n\
     .4byte 0x02010B00\n\
DAT_08034594:\n\
     .4byte 0x02010A64\n\
DAT_08034598:\n\
     .4byte 0x02010B1C\n\
DAT_0803459c:\n\
     .4byte 0x02010AE8\n\
DAT_080345a0:\n\
     .4byte 0x02010A90\n\
DAT_080345a4:\n\
     .4byte 0x02010A54\n\
DAT_080345a8:\n\
     .4byte 0x02010A4C\n\
DAT_080345ac:\n\
     .4byte 0x0000031F\n\
LAB_080345b0:\n\
     ldr        r0,DAT_080347ac\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r4,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_080345bc\n\
     mov        r4,#0x11\n\
LAB_080345bc:\n\
     ldr        r0,DAT_080347b0\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     bl         fun_08035e8c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080345e2\n\
    ");
}
__attribute__((naked)) void fun_080345cc()
{
    asm("\n\
     ldr        r0,DAT_080347ac\n\
     ldr        r0,[r0,#0x0]\n\
     bl         __floatsidf\n\
     ldr        r2,DAT_080347b4\n\
     ldr        r3,DAT_080347b8\n\
     bl         __ltdf2\n\
     cmp        r0,#0x0\n\
     bge        LAB_080345e2\n\
     add        r4,#0x31\n\
LAB_080345e2:\n\
     ldr        r0,DAT_080347bc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080345f2\n\
     ldr        r1,DAT_080347ac\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,r0,r4\n\
     str        r0,[r1,#0x0]\n\
LAB_080345f2:\n\
     ldr        r0,DAT_080347c0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034602\n\
     ldr        r1,DAT_080347ac\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r0,r4\n\
     str        r0,[r1,#0x0]\n\
LAB_08034602:\n\
     ldr        r4,DAT_080347b0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     bl         fun_08035ee8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803461a\n\
     ldr        r1,DAT_080347ac\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x27\n\
     str        r0,[r1,#0x0]\n\
LAB_0803461a:\n\
     ldrh       r3,[r4,#0x0]\n\
     cmp        r3,#0x2\n\
     bne        LAB_08034628\n\
     ldr        r1,DAT_080347ac\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x2a\n\
     str        r0,[r1,#0x0]\n\
LAB_08034628:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_08034636\n\
     ldr        r1,DAT_080347ac\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x2a\n\
     str        r0,[r1,#0x0]\n\
LAB_08034636:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     bl         fun_08035efc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803464c\n\
     ldr        r1,DAT_080347ac\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x27\n\
     str        r0,[r1,#0x0]\n\
LAB_0803464c:\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r4,r3]\n\
     ldr        r5,DAT_080347ac\n\
     cmp        r1,#0x8\n\
     bne        LAB_0803465c\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x2a\n\
     str        r0,[r5,#0x0]\n\
LAB_0803465c:\n\
     cmp        r1,#0x6\n\
     bne        LAB_08034666\n\
     ldr        r0,[r5,#0x0]\n\
     sub        r0,#0x2a\n\
     str        r0,[r5,#0x0]\n\
LAB_08034666:\n\
     cmp        r1,#0xe\n\
     bne        LAB_08034670\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x2a\n\
     str        r0,[r5,#0x0]\n\
LAB_08034670:\n\
     cmp        r1,#0xc\n\
     bne        LAB_0803467a\n\
     ldr        r0,[r5,#0x0]\n\
     sub        r0,#0x2a\n\
     str        r0,[r5,#0x0]\n\
LAB_0803467a:\n\
     mov        r2,#0x4\n\
     ldr        r0,DAT_080347c4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034686\n\
     mov        r2,#0x11\n\
LAB_08034686:\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x2\n\
     ble        LAB_08034698\n\
     sub        r0,r0,r2\n\
     str        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08034698\n\
     mov        r0,#0x0\n\
     str        r0,[r5,#0x0]\n\
LAB_08034698:\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bge        LAB_080346ae\n\
     add        r0,r1,r2\n\
     str        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080346ae\n\
     mov        r0,#0x0\n\
     str        r0,[r5,#0x0]\n\
LAB_080346ae:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     cmp        r0,#0x2\n\
     bhi        LAB_080346ba\n\
     mov        r0,#0x0\n\
     str        r0,[r5,#0x0]\n\
LAB_080346ba:\n\
     ldr        r4,[r5,#0x0]\n\
     mov        r1,#0xc8\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         __divsi3\n\
     ldr        r1,DAT_080347c8\n\
     add        r2,r0,#0x0\n\
     mul        r2,r0\n\
     str        r2,[r1,#0x0]\n\
     cmp        r4,#0x0\n\
     ble        LAB_080346d6\n\
     sub        r0,r4,r2\n\
     str        r0,[r5,#0x0]\n\
LAB_080346d6:\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_080346e0\n\
     add        r0,r0,r2\n\
     str        r0,[r5,#0x0]\n\
LAB_080346e0:\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r5,r0]\n\
     str        r1,[r5,#0x0]\n\
     ldr        r2,DAT_080347cc\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r1,r0\n\
     ble        LAB_080346f0\n\
     str        r1,[r2,#0x0]\n\
LAB_080346f0:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x4\n\
     cmp        r1,r0\n\
     ble        LAB_080346fa\n\
     str        r0,[r5,#0x0]\n\
LAB_080346fa:\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,DAT_080347d0\n\
     cmp        r0,r1\n\
     bge        LAB_08034704\n\
     str        r1,[r5,#0x0]\n\
LAB_08034704:\n\
     ldr        r0,DAT_080347d4\n\
     ldr        r2,[r5,#0x0]\n\
     str        r2,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r2,#0x0\n\
     bge        LAB_08034714\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
     str        r0,[r3,#0x0]\n\
LAB_08034714:\n\
     cmp        r6,#0x0\n\
     blt        LAB_08034726\n\
     cmp        r2,#0x0\n\
     bge        LAB_08034722\n\
     ldr        r1,DAT_080347d8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034722:\n\
     cmp        r6,#0x0\n\
     bgt        LAB_0803473c\n\
LAB_08034726:\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08034732\n\
     ldr        r1,DAT_080347d8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034732:\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803473c\n\
     ldr        r1,DAT_080347d8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803473c:\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r0,DAT_080347dc\n\
     ldr        r2,DAT_080347e0\n\
     cmp        r1,r0\n\
     bgt        LAB_08034790\n\
     ldr        r1,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08034790\n\
     ldr        r0,DAT_080347d8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034790\n\
     ldr        r0,DAT_080347bc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034760\n\
     cmp        r1,#0x0\n\
     ble        LAB_0803476c\n\
LAB_08034760:\n\
     ldr        r0,DAT_080347c0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034790\n\
     cmp        r1,#0x0\n\
     blt        LAB_08034790\n\
LAB_0803476c:\n\
     ldr        r0,DAT_080347b0\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r0,r1,#0x3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     bls        LAB_08034788\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x7\n\
     beq        LAB_08034788\n\
     ldr        r2,DAT_080347e0\n\
     cmp        r0,#0x6\n\
     bne        LAB_08034790\n\
LAB_08034788:\n\
     ldr        r1,DAT_080347e0\n\
     mov        r0,#0xc8\n\
     strh       r0,[r1,#0x0]\n\
     add        r2,r1,#0x0\n\
LAB_08034790:\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     mov        r0,#0x96\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     ble        LAB_080347f2\n\
     ldr        r1,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     ble        LAB_080347e4\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     add        r0,r1,r0\n\
     b          LAB_080347ea\n\
.space 1\n\
.space 1\n\
DAT_080347ac:\n\
     .4byte 0x02010B18\n\
DAT_080347b0:\n\
     .4byte 0x02010A90\n\
DAT_080347b4:\n\
     .4byte 0x4075E000\n\
DAT_080347b8:\n\
     .4byte 0x00000000\n\
DAT_080347bc:\n\
     .4byte 0x02010A64\n\
DAT_080347c0:\n\
     .4byte 0x02010B1C\n\
DAT_080347c4:\n\
     .4byte 0x02010AE8\n\
DAT_080347c8:\n\
     .4byte 0x02010B2C\n\
DAT_080347cc:\n\
     .4byte 0x02010AAC\n\
DAT_080347d0:\n\
     .4byte 0xFFFFF800\n\
DAT_080347d4:\n\
     .4byte 0x02010A4C\n\
DAT_080347d8:\n\
     .4byte 0x02010B00\n\
DAT_080347dc:\n\
     .4byte 0x000002BB\n\
DAT_080347e0:\n\
     .4byte 0x02010AE4\n\
LAB_080347e4:\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     sub        r0,r1,r0\n\
LAB_080347ea:\n\
     str        r0,[r5,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x19\n\
     strh       r0,[r2,#0x0]\n\
LAB_080347f2:\n\
     ldr        r1,DAT_08034800\n\
     ldr        r0,[r5,#0x0]\n\
     sub        r0,r0,r6\n\
     str        r0,[r1,#0x0]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08034800:\n\
     .4byte 0x02010B5C\n\
    ");
}
__attribute__((naked)) void fun_08034804()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_080348b4\n\
     ldrh       r1,[r0,#0x2]\n\
     ldr        r0,DAT_080348b8\n\
     ldrh       r0,[r0,#0x2]\n\
     mov        r9,r0\n\
     ldr        r5,DAT_080348bc\n\
     ldr        r6,DAT_080348c0\n\
     ldrh       r0,[r6,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     mov        r8,r1\n\
     ldr        r7,DAT_080348c4\n\
     ldr        r4,DAT_080348c8\n\
     ldr        r2,[r4,#0x0]\n\
     add        r0,r2,#0x0\n\
     mov        r1,#0xa5\n\
     str        r2,[sp,#0x0]\n\
     bl         __divsi3\n\
     strh       r0,[r7,#0x0]\n\
     mov        r12,r4\n\
     ldr        r2,[sp,#0x0]\n\
     cmp        r2,#0x0\n\
     bge        LAB_08034844\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r7,r1]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r7,#0x0]\n\
LAB_08034844:\n\
     ldr        r0,DAT_080348cc\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     mov        r1,r8\n\
     lsl        r7,r1,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08034920\n\
     ldr        r0,DAT_080348d0\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08034920\n\
     ldr        r0,DAT_080348d4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08034920\n\
     asr        r1,r7,#0x10\n\
     ldr        r4,DAT_080348d8\n\
     add        r0,r7,r4\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x8\n\
     bhi        LAB_08034874\n\
     cmp        r2,#0x0\n\
     bgt        LAB_08034884\n\
LAB_08034874:\n\
     ldr        r4,DAT_080348dc\n\
     add        r0,r1,r4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x8\n\
     bhi        LAB_08034920\n\
     cmp        r2,#0x0\n\
     bge        LAB_08034920\n\
LAB_08034884:\n\
     mov        r0,r12\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x2\n\
     cmp        r2,r0\n\
     ble        LAB_080348f0\n\
     mov        r1,#0x1\n\
     strh       r1,[r3,#0x0]\n\
     ldr        r0,DAT_080348e0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_080348e4\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_080348e8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_080348ec\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r2,#0x0\n\
     bl         __divsi3\n\
     add        r0,#0x1\n\
     b          LAB_08034918\n\
DAT_080348b4:\n\
     .4byte 0x02010B0C\n\
DAT_080348b8:\n\
     .4byte 0x02010BB4\n\
DAT_080348bc:\n\
     .4byte 0x02010AD4\n\
DAT_080348c0:\n\
     .4byte 0x02010A90\n\
DAT_080348c4:\n\
     .4byte 0x02010B60\n\
DAT_080348c8:\n\
     .4byte 0x02010B18\n\
DAT_080348cc:\n\
     .4byte 0x02010BAC\n\
DAT_080348d0:\n\
     .4byte 0x02010A74\n\
DAT_080348d4:\n\
     .4byte 0x02010A50\n\
DAT_080348d8:\n\
     .4byte 0xFDF70000\n\
DAT_080348dc:\n\
     .4byte 0xFFFFFDAC\n\
DAT_080348e0:\n\
     .4byte 0x02010A7C\n\
DAT_080348e4:\n\
     .4byte 0x02010B20\n\
DAT_080348e8:\n\
     .4byte 0x02010B14\n\
DAT_080348ec:\n\
     .4byte 0x02010AC0\n\
LAB_080348f0:\n\
     ldr        r0,DAT_08034a74\n\
     cmp        r2,r0\n\
     bge        LAB_08034920\n\
     mov        r1,#0x1\n\
     strh       r1,[r3,#0x0]\n\
     ldr        r0,DAT_08034a78\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034a7c\n\
     mov        r4,r8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_08034a80\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_08034a84\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r2,#0x0\n\
     bl         __divsi3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08034918:\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r1,DAT_08034a88\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034920:\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_08034934\n\
     ldr        r0,DAT_08034a8c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034934\n\
     ldr        r1,DAT_08034a84\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034934:\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,#0x5\n\
     bne        LAB_08034948\n\
     ldr        r0,DAT_08034a8c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034948\n\
     ldr        r1,DAT_08034a84\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034948:\n\
     asr        r2,r7,#0x10\n\
     ldr        r4,DAT_08034a90\n\
     add        r0,r7,r4\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x86\n\
     bhi        LAB_08034966\n\
     mov        r0,#0x3\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034a94\n\
     mov        r0,#0xa8\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034a98\n\
     add        r0,#0x86\n\
     str        r0,[r1,#0x0]\n\
LAB_08034966:\n\
     ldr        r1,DAT_08034a9c\n\
     add        r0,r2,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x48\n\
     bhi        LAB_08034984\n\
     mov        r0,#0x4\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034a94\n\
     mov        r0,#0x96\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034a98\n\
     add        r0,#0x48\n\
     str        r0,[r1,#0x0]\n\
LAB_08034984:\n\
     ldr        r4,DAT_08034aa0\n\
     add        r0,r2,r4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x48\n\
     bhi        LAB_080349a2\n\
     mov        r0,#0x5\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034a94\n\
     mov        r0,#0x84\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034a98\n\
     add        r0,#0x48\n\
     str        r0,[r1,#0x0]\n\
LAB_080349a2:\n\
     ldr        r1,DAT_08034aa4\n\
     add        r0,r2,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x60\n\
     bhi        LAB_080349c0\n\
     mov        r0,#0x6\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034a94\n\
     mov        r0,#0xd8\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034a98\n\
     add        r0,#0x60\n\
     str        r0,[r1,#0x0]\n\
LAB_080349c0:\n\
     ldr        r4,DAT_08034aa8\n\
     add        r0,r2,r4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4a\n\
     bhi        LAB_080349de\n\
     mov        r0,#0x7\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034a94\n\
     mov        r0,#0xb3\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034a98\n\
     add        r0,#0x4a\n\
     str        r0,[r1,#0x0]\n\
LAB_080349de:\n\
     ldr        r1,DAT_08034aac\n\
     add        r0,r2,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4e\n\
     bhi        LAB_080349fa\n\
     mov        r0,#0x2\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034a94\n\
     ldr        r0,DAT_08034ab0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034a98\n\
     add        r0,#0x4e\n\
     str        r0,[r1,#0x0]\n\
LAB_080349fa:\n\
     ldr        r4,DAT_08034ab4\n\
     add        r0,r2,r4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x5a\n\
     bhi        LAB_08034a18\n\
     mov        r0,#0x8\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034a94\n\
     mov        r0,#0x86\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034a98\n\
     add        r0,#0x5a\n\
     str        r0,[r1,#0x0]\n\
LAB_08034a18:\n\
     mov        r0,#0x8d\n\
     lsl        r0,r0,#0x2\n\
     cmp        r2,r0\n\
     ble        LAB_08034a38\n\
     mov        r1,r9\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x78\n\
     ble        LAB_08034a38\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,DAT_08034a94\n\
     mov        r1,#0x78\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034a98\n\
     str        r1,[r0,#0x0]\n\
LAB_08034a38:\n\
     ldr        r0,DAT_08034ab8\n\
     cmp        r7,r0\n\
     bgt        LAB_08034a56\n\
     mov        r4,r9\n\
     lsl        r0,r4,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x58\n\
     ble        LAB_08034a56\n\
     mov        r0,#0x9\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,DAT_08034a94\n\
     mov        r1,#0x58\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034a98\n\
     str        r1,[r0,#0x0]\n\
LAB_08034a56:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x8\n\
     bne        LAB_08034ace\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,#0x9\n\
     bne        LAB_08034ace\n\
     ldr        r0,DAT_08034abc\n\
     ldr        r1,DAT_08034ac0\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     cmp        r1,#0x31\n\
     bgt        LAB_08034ac8\n\
     ldr        r1,DAT_08034ac4\n\
     mov        r0,#0x1\n\
     b          LAB_08034acc\n\
DAT_08034a74:\n\
     .4byte 0xFFFFFC18\n\
DAT_08034a78:\n\
     .4byte 0x02010A7C\n\
DAT_08034a7c:\n\
     .4byte 0x02010B20\n\
DAT_08034a80:\n\
     .4byte 0x02010B14\n\
DAT_08034a84:\n\
     .4byte 0x02010AC0\n\
DAT_08034a88:\n\
     .4byte 0x02010A44\n\
DAT_08034a8c:\n\
     .4byte 0x02010A54\n\
DAT_08034a90:\n\
     .4byte 0xFD600000\n\
DAT_08034a94:\n\
     .4byte 0x02010A8C\n\
DAT_08034a98:\n\
     .4byte 0x02010A94\n\
DAT_08034a9c:\n\
     .4byte 0xFFFFFDA8\n\
DAT_08034aa0:\n\
     .4byte 0xFFFFFDF0\n\
DAT_08034aa4:\n\
     .4byte 0xFFFFFE50\n\
DAT_08034aa8:\n\
     .4byte 0xFFFFFE9A\n\
DAT_08034aac:\n\
     .4byte 0xFFFFFCDA\n\
DAT_08034ab0:\n\
     .4byte 0x00000326\n\
DAT_08034ab4:\n\
     .4byte 0xFFFFFEF4\n\
DAT_08034ab8:\n\
     .4byte 0x02330000\n\
DAT_08034abc:\n\
     .4byte 0x02010A9C\n\
DAT_08034ac0:\n\
     .4byte 0x02010A4C\n\
DAT_08034ac4:\n\
     .4byte 0x02010B24\n\
LAB_08034ac8:\n\
     ldr        r1,DAT_08034bac\n\
     mov        r0,#0x0\n\
LAB_08034acc:\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034ace:\n\
     ldrh       r4,[r5,#0x0]\n\
     cmp        r4,#0x2\n\
     bne        LAB_08034aea\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08034af0\n\
     ldr        r2,DAT_08034bb0\n\
     ldr        r0,DAT_08034bb4\n\
     ldr        r1,[r0,#0x0]\n\
     str        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08034bb8\n\
     ldr        r1,DAT_08034bac\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034aea:\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,#0x1\n\
     beq        LAB_08034afc\n\
LAB_08034af0:\n\
     ldrh       r4,[r6,#0x0]\n\
     cmp        r4,#0x9\n\
     beq        LAB_08034afc\n\
     ldr        r1,DAT_08034bac\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034afc:\n\
     asr        r2,r7,#0x10\n\
     ldr        r1,DAT_08034bbc\n\
     add        r0,r7,r1\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x28\n\
     bhi        LAB_08034b18\n\
     mov        r0,#0x11\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034bc0\n\
     mov        r0,#0x76\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034bc4\n\
     mov        r0,#0x9e\n\
     str        r0,[r1,#0x0]\n\
LAB_08034b18:\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x9e\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4e\n\
     bhi        LAB_08034b34\n\
     mov        r0,#0xc\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034bc0\n\
     mov        r0,#0x9e\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034bc4\n\
     mov        r0,#0xec\n\
     str        r0,[r1,#0x0]\n\
LAB_08034b34:\n\
     lsr        r0,r7,#0x10\n\
     cmp        r0,#0x76\n\
     bhi        LAB_08034b4a\n\
     mov        r0,#0xe\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034bc0\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034bc4\n\
     mov        r0,#0x76\n\
     str        r0,[r1,#0x0]\n\
LAB_08034b4a:\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x8b\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x64\n\
     bhi        LAB_08034b6e\n\
     mov        r4,r9\n\
     lsl        r0,r4,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x58\n\
     ble        LAB_08034b6e\n\
     mov        r0,#0xf\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,DAT_08034bc0\n\
     mov        r1,#0x58\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034bc4\n\
     str        r1,[r0,#0x0]\n\
LAB_08034b6e:\n\
     asr        r0,r7,#0x10\n\
     cmp        r0,#0x89\n\
     bgt        LAB_08034b8c\n\
     mov        r1,r9\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x58\n\
     ble        LAB_08034b8c\n\
     mov        r0,#0x10\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,DAT_08034bc0\n\
     mov        r1,#0x58\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034bc4\n\
     str        r1,[r0,#0x0]\n\
LAB_08034b8c:\n\
     ldrh       r4,[r5,#0x0]\n\
     cmp        r4,#0xe\n\
     bne        LAB_08034bd2\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x10\n\
     bne        LAB_08034bd2\n\
     ldr        r2,DAT_08034bb0\n\
     ldr        r0,DAT_08034bb4\n\
     ldr        r1,[r0,#0x0]\n\
     str        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08034bc8\n\
     cmp        r1,r0\n\
     bgt        LAB_08034bcc\n\
     ldr        r1,DAT_08034bac\n\
     mov        r0,#0x1\n\
     b          LAB_08034bd0\n\
DAT_08034bac:\n\
     .4byte 0x02010B24\n\
DAT_08034bb0:\n\
     .4byte 0x02010A9C\n\
DAT_08034bb4:\n\
     .4byte 0x02010A4C\n\
DAT_08034bb8:\n\
     .4byte 0x00000577\n\
DAT_08034bbc:\n\
     .4byte 0xFF8A0000\n\
DAT_08034bc0:\n\
     .4byte 0x02010A8C\n\
DAT_08034bc4:\n\
     .4byte 0x02010A94\n\
DAT_08034bc8:\n\
     .4byte 0x000006A3\n\
LAB_08034bcc:\n\
     ldr        r1,DAT_08034bf4\n\
     mov        r0,#0x0\n\
LAB_08034bd0:\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034bd2:\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0xc\n\
     bne        LAB_08034c0a\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,#0xf\n\
     bne        LAB_08034c0a\n\
     ldr        r2,DAT_08034bf8\n\
     ldr        r0,DAT_08034bfc\n\
     ldr        r1,[r0,#0x0]\n\
     str        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08034c00\n\
     cmp        r1,r0\n\
     bgt        LAB_08034c04\n\
     ldr        r1,DAT_08034bf4\n\
     mov        r0,#0x1\n\
     b          LAB_08034c08\n\
.space 1\n\
.space 1\n\
DAT_08034bf4:\n\
     .4byte 0x02010B24\n\
DAT_08034bf8:\n\
     .4byte 0x02010A9C\n\
DAT_08034bfc:\n\
     .4byte 0x02010A4C\n\
DAT_08034c00:\n\
     .4byte 0x000006A3\n\
LAB_08034c04:\n\
     ldr        r1,DAT_08034c30\n\
     mov        r0,#0x0\n\
LAB_08034c08:\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034c0a:\n\
     asr        r0,r7,#0x10\n\
     cmp        r0,#0xef\n\
     bgt        LAB_08034c22\n\
     ldrh       r0,[r6,#0x0]\n\
     sub        r0,#0xf\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bls        LAB_08034c22\n\
     ldr        r1,DAT_08034c30\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034c22:\n\
     add        sp,#0x4\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08034c30:\n\
     .4byte 0x02010B24\n\
    ");
}
__attribute__((naked)) void fun_08034c34()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x10\n\
     ldr        r0,DAT_08034cc4\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_08034cc8\n\
     ldr        r2,DAT_08034ccc\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034c54\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08034cd0\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r2,#0x0]\n\
LAB_08034c54:\n\
     ldrh       r1,[r1,#0x2]\n\
     mov        r10,r1\n\
     ldr        r0,[r2,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     asr        r0,r0,#0x10\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     mov        r8,r10\n\
     str        r0,[sp,#0x4]\n\
     ldr        r0,DAT_08034cd4\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r1,#0x28\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034c7a\n\
     mov        r1,#0x78\n\
LAB_08034c7a:\n\
     mov        r2,r8\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     lsl        r2,r1,#0x10\n\
     cmp        r0,r1\n\
     bge        LAB_08034c8a\n\
     lsr        r2,r2,#0x10\n\
     mov        r8,r2\n\
LAB_08034c8a:\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r0,r3,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0xef\n\
     ble        LAB_08034c98\n\
     mov        r0,#0xef\n\
     str        r0,[sp,#0x4]\n\
LAB_08034c98:\n\
     mov        r1,r8\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r1,DAT_08034cd8\n\
     cmp        r0,r1\n\
     ble        LAB_08034ca6\n\
     mov        r8,r1\n\
LAB_08034ca6:\n\
     ldr        r2,[sp,#0x4]\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x4f\n\
     bgt        LAB_08034cb4\n\
     mov        r3,#0x50\n\
     str        r3,[sp,#0x4]\n\
LAB_08034cb4:\n\
     ldr        r0,DAT_08034cdc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034ce4\n\
     ldr        r0,DAT_08034ce0\n\
     ldrh       r0,[r0,#0x0]\n\
     lsr        r0,r0,#0x8\n\
     b          LAB_08034ce8\n\
DAT_08034cc4:\n\
     .4byte 0x02010A70\n\
DAT_08034cc8:\n\
     .4byte 0x02010B0C\n\
DAT_08034ccc:\n\
     .4byte 0x02010BB4\n\
DAT_08034cd0:\n\
     .4byte 0x02010AEC\n\
DAT_08034cd4:\n\
     .4byte 0x02010B10\n\
DAT_08034cd8:\n\
     .4byte 0x00000347\n\
DAT_08034cdc:\n\
     .4byte 0x02010A98\n\
DAT_08034ce0:\n\
     .4byte 0x02010A84\n\
LAB_08034ce4:\n\
     ldr        r0,DAT_08034d18\n\
     ldr        r0,[r0,#0x0]\n\
LAB_08034ce8:\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,DAT_08034d1c\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08034cfc\n\
     ldr        r0,DAT_08034d20\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034d40\n\
LAB_08034cfc:\n\
     ldr        r0,DAT_08034d24\n\
     mov        r1,r10\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08034d28\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08034d34\n\
     ldr        r0,DAT_08034d2c\n\
     ldr        r1,DAT_08034d30\n\
     ldrh       r1,[r1,#0x0]\n\
     mov        r2,r10\n\
     sub        r1,r1,r2\n\
     b          LAB_08034d3e\n\
.space 1\n\
.space 1\n\
DAT_08034d18:\n\
     .4byte 0x02010BA8\n\
DAT_08034d1c:\n\
     .4byte 0x02010A74\n\
DAT_08034d20:\n\
     .4byte 0x02010A54\n\
DAT_08034d24:\n\
     .4byte 0x02010B50\n\
DAT_08034d28:\n\
     .4byte 0x02010B18\n\
DAT_08034d2c:\n\
     .4byte 0x02010B08\n\
DAT_08034d30:\n\
     .4byte 0x02010B20\n\
LAB_08034d34:\n\
     ldr        r0,DAT_08034d80\n\
     ldr        r1,DAT_08034d84\n\
     mov        r3,r10\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r1,r3,r1\n\
LAB_08034d3e:\n\
     strh       r1,[r0,#0x0]\n\
LAB_08034d40:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08034d48\n\
     b          LAB_08034e44\n\
LAB_08034d48:\n\
     ldr        r0,DAT_08034d88\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r6,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_08034dd0\n\
     ldr        r1,DAT_08034d8c\n\
     ldr        r2,DAT_08034d90\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r3,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034d68\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_08034d68:\n\
     ldr        r4,DAT_08034d94\n\
     ldr        r3,[r4,#0x0]\n\
     cmp        r3,#0x0\n\
     bge        LAB_08034d98\n\
     ldr        r2,DAT_08034d80\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r2,r0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r3,r0\n\
     b          LAB_08034da6\n\
DAT_08034d80:\n\
     .4byte 0x02010B08\n\
DAT_08034d84:\n\
     .4byte 0x02010B20\n\
DAT_08034d88:\n\
     .4byte 0x02010A7C\n\
DAT_08034d8c:\n\
     .4byte 0x02010B74\n\
DAT_08034d90:\n\
     .4byte 0x02010AC0\n\
DAT_08034d94:\n\
     .4byte 0x02010B18\n\
LAB_08034d98:\n\
     ldr        r2,DAT_08034dc4\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r2,r0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     sub        r0,r3,r0\n\
LAB_08034da6:\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_08034dc8\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r1,r0\n\
     blt        LAB_08034e3c\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08034dcc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08034e3c\n\
.space 1\n\
.space 1\n\
DAT_08034dc4:\n\
     .4byte 0x02010B08\n\
DAT_08034dc8:\n\
     .4byte 0x02010B60\n\
DAT_08034dcc:\n\
     .4byte 0x02010A88\n\
LAB_08034dd0:\n\
     ldr        r0,DAT_08034df4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034e3c\n\
     ldr        r1,DAT_08034df8\n\
     ldr        r2,DAT_08034dfc\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r3,[r2,#0x0]\n\
     sub        r0,r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034e00\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034e04\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08034e0a\n\
.space 1\n\
.space 1\n\
DAT_08034df4:\n\
     .4byte 0x02010A88\n\
DAT_08034df8:\n\
     .4byte 0x02010B74\n\
DAT_08034dfc:\n\
     .4byte 0x02010B14\n\
DAT_08034e00:\n\
     .4byte 0x02010A44\n\
LAB_08034e04:\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_08034e0a:\n\
     ldr        r1,DAT_08034e18\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08034e1c\n\
     sub        r0,#0x28\n\
     b          LAB_08034e1e\n\
.space 1\n\
.space 1\n\
DAT_08034e18:\n\
     .4byte 0x02010B18\n\
LAB_08034e1c:\n\
     add        r0,#0x28\n\
LAB_08034e1e:\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08034eac\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08034e2e\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
LAB_08034e2e:\n\
     ldr        r1,DAT_08034eb0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08034e3c\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
LAB_08034e3c:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034e44\n\
     b          LAB_08034ff2\n\
LAB_08034e44:\n\
     ldr        r0,DAT_08034eb4\n\
     ldrh       r6,[r0,#0x0]\n\
     cmp        r6,#0x0\n\
     bne        LAB_08034efe\n\
     ldr        r0,DAT_08034eb8\n\
     ldrh       r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_08034ecc\n\
     ldr        r4,DAT_08034ebc\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034e6a\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     str        r6,[r4,#0x0]\n\
LAB_08034e6a:\n\
     ldr        r4,DAT_08034eac\n\
     ldr        r2,[r4,#0x0]\n\
     add        r2,#0x3\n\
     str        r2,[r4,#0x0]\n\
     ldr        r5,DAT_08034eb0\n\
     ldr        r0,[r5,#0x0]\n\
     add        r3,r0,#0x3\n\
     str        r3,[r5,#0x0]\n\
     ldr        r1,DAT_08034ec0\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x32\n\
     str        r0,[r1,#0x0]\n\
     cmp        r2,#0x0\n\
     blt        LAB_08034e88\n\
     str        r6,[r4,#0x0]\n\
LAB_08034e88:\n\
     cmp        r3,#0x11\n\
     ble        LAB_08034efe\n\
     mov        r0,#0x12\n\
     str        r0,[r5,#0x0]\n\
     ldr        r4,DAT_08034ec4\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034efe\n\
     ldr        r0,DAT_08034ec8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x6\n\
     bne        LAB_08034efe\n\
     mov        r0,#0x2b\n\
     bl         fun_080016f0\n\
     strh       r6,[r4,#0x0]\n\
     b          LAB_08034efe\n\
.space 1\n\
.space 1\n\
DAT_08034eac:\n\
     .4byte 0x02010B34\n\
DAT_08034eb0:\n\
     .4byte 0x02010B74\n\
DAT_08034eb4:\n\
     .4byte 0x02010A54\n\
DAT_08034eb8:\n\
     .4byte 0x02010B04\n\
DAT_08034ebc:\n\
     .4byte 0x02010BBC\n\
DAT_08034ec0:\n\
     .4byte 0x02010B18\n\
DAT_08034ec4:\n\
     .4byte 0x02010A78\n\
DAT_08034ec8:\n\
     .4byte 0x02010A90\n\
LAB_08034ecc:\n\
     ldr        r6,DAT_08034f70\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034efe\n\
     ldr        r2,DAT_08034f74\n\
     ldr        r1,[r2,#0x0]\n\
     sub        r1,#0x2\n\
     str        r1,[r2,#0x0]\n\
     ldr        r5,DAT_08034f78\n\
     ldr        r0,[r5,#0x0]\n\
     sub        r0,#0x2\n\
     str        r0,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     bge        LAB_08034eea\n\
     str        r4,[r2,#0x0]\n\
LAB_08034eea:\n\
     cmp        r0,#0x0\n\
     bge        LAB_08034efe\n\
     ldr        r1,DAT_08034f7c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     strh       r4,[r6,#0x0]\n\
     str        r4,[r5,#0x0]\n\
LAB_08034efe:\n\
     ldr        r0,DAT_08034f80\n\
     ldrh       r6,[r0,#0x0]\n\
     add        r5,r0,#0x0\n\
     cmp        r6,#0x0\n\
     bne        LAB_08034ff2\n\
     ldr        r0,DAT_08034f84\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r7,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_08034fa8\n\
     ldr        r0,DAT_08034f88\n\
     mov        r9,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034fa8\n\
     ldr        r4,DAT_08034f8c\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034f32\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     str        r6,[r4,#0x0]\n\
LAB_08034f32:\n\
     ldr        r2,DAT_08034f78\n\
     ldr        r1,DAT_08034f90\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r0,r1,r0\n\
     str        r0,[r2,#0x0]\n\
     ldr        r5,DAT_08034f94\n\
     ldr        r4,[r5,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x64\n\
     bl         __divsi3\n\
     sub        r4,r4,r0\n\
     str        r4,[r5,#0x0]\n\
     ldr        r0,DAT_08034f98\n\
     ldr        r1,DAT_08034f9c\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r0,r3]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r2,r0\n\
     blt        LAB_08034ff2\n\
     ldr        r0,DAT_08034fa0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_08034ff2\n\
     mov        r0,r9\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,DAT_08034fa4\n\
     b          LAB_08034fee\n\
.space 1\n\
.space 1\n\
DAT_08034f70:\n\
     .4byte 0x02010B48\n\
DAT_08034f74:\n\
     .4byte 0x02010B34\n\
DAT_08034f78:\n\
     .4byte 0x02010B74\n\
DAT_08034f7c:\n\
     .4byte 0x02010A78\n\
DAT_08034f80:\n\
     .4byte 0x02010A74\n\
DAT_08034f84:\n\
     .4byte 0x02010A54\n\
DAT_08034f88:\n\
     .4byte 0x02010A7C\n\
DAT_08034f8c:\n\
     .4byte 0x02010BBC\n\
DAT_08034f90:\n\
     .4byte 0x02010AC0\n\
DAT_08034f94:\n\
     .4byte 0x02010B18\n\
DAT_08034f98:\n\
     .4byte 0x02010B08\n\
DAT_08034f9c:\n\
     .4byte 0x02010AB4\n\
DAT_08034fa0:\n\
     .4byte 0x02010A90\n\
DAT_08034fa4:\n\
     .4byte 0x02010A88\n\
LAB_08034fa8:\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_08034ff2\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034ff2\n\
     ldr        r0,DAT_08035128\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08034ff2\n\
     ldr        r6,DAT_0803512c\n\
     ldr        r2,DAT_08035130\n\
     ldr        r3,[r6,#0x0]\n\
     ldrh       r1,[r2,#0x0]\n\
     sub        r3,r3,r1\n\
     str        r3,[r6,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r4,DAT_08035134\n\
     lsl        r1,r0,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r4,#0x0]\n\
     cmp        r3,#0x0\n\
     bgt        LAB_08034ff2\n\
     str        r5,[r6,#0x0]\n\
     strh       r5,[r7,#0x0]\n\
     ldr        r0,DAT_08035138\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_0803513c\n\
LAB_08034fee:\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08034ff2:\n\
     mov        r2,r10\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r3,r8\n\
     lsl        r3,r3,#0x10\n\
     str        r3,[sp,#0xc]\n\
     asr        r1,r3,#0x10\n\
     sub        r0,r0,r1\n\
     add        r0,#0x78\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     ldr        r1,[sp,#0x0]\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x4]\n\
     lsl        r2,r2,#0x10\n\
     mov        r8,r2\n\
     asr        r1,r2,#0x10\n\
     sub        r0,r0,r1\n\
     add        r0,#0x50\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     mov        r5,#0xff\n\
     ldr        r3,[sp,#0x8]\n\
     and        r3,r5\n\
     str        r3,[sp,#0x8]\n\
     ldr        r6,DAT_08035140\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r6\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     ldr        r4,DAT_0803512c\n\
     ldr        r1,[r4,#0x0]\n\
     add        r1,#0x4\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r0,[sp,#0x8]\n\
     add        r0,#0x40\n\
     and        r0,r5\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r6\n\
     ldrh       r0,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r1,[r4,#0x0]\n\
     add        r1,#0x4\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     mov        r2,r10\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     lsl        r2,r7,#0x10\n\
     asr        r2,r2,#0x10\n\
     add        r1,r1,r2\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r10,r1\n\
     mov        r3,r9\n\
     lsl        r1,r3,#0x10\n\
     asr        r1,r1,#0x10\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r9,r1\n\
     ldr        r0,[sp,#0x8]\n\
     and        r0,r5\n\
     str        r0,[sp,#0x8]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r6\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     ldr        r4,DAT_08035144\n\
     ldr        r1,[r4,#0x0]\n\
     sub        r1,#0x10\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r0,[sp,#0x8]\n\
     add        r0,#0x40\n\
     and        r0,r5\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r6\n\
     ldrh       r0,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r1,[r4,#0x0]\n\
     sub        r1,#0x10\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     ldr        r4,DAT_08035148\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r2,r10\n\
     strh       r2,[r0,#0x2]\n\
     mov        r3,r9\n\
     strh       r3,[r0,#0x4]\n\
     bl         fun_080351b0\n\
     ldr        r0,DAT_0803514c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,sp\n\
     ldrh       r1,[r1,#0x8]\n\
     strh       r1,[r0,#0x1c]\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08039650\n\
     ldr        r0,DAT_08035150\n\
     ldrh       r0,[r0,#0x0]\n\
     ldr        r4,[sp,#0xc]\n\
     mov        r6,r8\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803515c\n\
     ldr        r0,DAT_08035154\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r3,r10\n\
     lsl        r2,r3,#0x10\n\
     asr        r2,r2,#0x10\n\
     lsl        r1,r7,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r2,r2,r1\n\
     strh       r2,[r0,#0x2]\n\
     lsl        r2,r5,#0x10\n\
     asr        r2,r2,#0x10\n\
     sub        r2,#0x10\n\
     mov        r3,r9\n\
     lsl        r1,r3,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r1,r1,r2\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r1,DAT_08035158\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,sp\n\
     ldrh       r2,[r2,#0x8]\n\
     strh       r2,[r1,#0x1c]\n\
     bl         fun_08039650\n\
     b          LAB_0803518c\n\
DAT_08035128:\n\
     .4byte 0x02010A88\n\
DAT_0803512c:\n\
     .4byte 0x02010B74\n\
DAT_08035130:\n\
     .4byte 0x02010B14\n\
DAT_08035134:\n\
     .4byte 0x02010B18\n\
DAT_08035138:\n\
     .4byte 0x02010A50\n\
DAT_0803513c:\n\
     .4byte 0x02010A6C\n\
DAT_08035140:\n\
     .4byte 0x08049824\n\
DAT_08035144:\n\
     .4byte 0x02010B34\n\
DAT_08035148:\n\
     .4byte 0x02010B40\n\
DAT_0803514c:\n\
     .4byte 0x02010AC4\n\
DAT_08035150:\n\
     .4byte 0x02010AE8\n\
DAT_08035154:\n\
     .4byte 0x02010BB8\n\
DAT_08035158:\n\
     .4byte 0x02010AB0\n\
LAB_0803515c:\n\
     ldr        r0,DAT_080351a8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r3,r10\n\
     lsl        r2,r3,#0x10\n\
     asr        r2,r2,#0x10\n\
     lsl        r1,r7,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r2,r2,r1\n\
     strh       r2,[r0,#0x2]\n\
     lsl        r2,r5,#0x10\n\
     asr        r2,r2,#0x10\n\
     sub        r2,#0x10\n\
     mov        r3,r9\n\
     lsl        r1,r3,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r1,r1,r2\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r1,DAT_080351ac\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,sp\n\
     ldrh       r2,[r2,#0x8]\n\
     strh       r2,[r1,#0x1c]\n\
     bl         fun_08039650\n\
LAB_0803518c:\n\
     lsr        r0,r4,#0x10\n\
     lsr        r1,r6,#0x10\n\
     bl         fun_0803a140\n\
     bl         fun_0803a9dc\n\
     add        sp,#0x10\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080351a8:\n\
     .4byte 0x02010BB8\n\
DAT_080351ac:\n\
     .4byte 0x02010AB0\n\
    ");
}
__attribute__((naked)) void fun_080351b0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r2,DAT_08035250\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080351ea\n\
     ldr        r0,DAT_08035254\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08035258\n\
     ldrh       r1,[r1,#0x1e]\n\
     cmp        r1,r0\n\
     bne        LAB_080351ea\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0803525c\n\
     mov        r0,#0x4\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080351e6\n\
     ldr        r2,DAT_08035260\n\
     mov        r1,#0x0\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080351e4\n\
     mov        r1,#0x1\n\
LAB_080351e4:\n\
     strh       r1,[r2,#0x0]\n\
LAB_080351e6:\n\
     bl         fun_08035a10\n\
LAB_080351ea:\n\
     ldr        r5,DAT_08035250\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080352e0\n\
     ldr        r4,DAT_08035260\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803520e\n\
     ldr        r0,DAT_08035264\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_08035268\n\
     bl         fun_080397e0\n\
     ldr        r0,DAT_0803526c\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_08035270\n\
     bl         fun_080397e0\n\
LAB_0803520e:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803522a\n\
     ldr        r0,DAT_08035264\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_08035274\n\
     bl         fun_080397e0\n\
     ldr        r0,DAT_0803526c\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_08035278\n\
     bl         fun_080397e0\n\
LAB_0803522a:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080352e0\n\
     ldr        r0,DAT_0803527c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08035280\n\
     ldr        r0,DAT_08035264\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     bl         fun_08039884\n\
     ldr        r0,DAT_0803526c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     bl         fun_08039884\n\
     b          LAB_08035298\n\
.space 1\n\
.space 1\n\
DAT_08035250:\n\
     .4byte 0x02010ABC\n\
DAT_08035254:\n\
     .4byte 0x02010AC4\n\
DAT_08035258:\n\
     .4byte 0x0000FFFF\n\
DAT_0803525c:\n\
     .4byte 0x02010AF8\n\
DAT_08035260:\n\
     .4byte 0x02010A60\n\
DAT_08035264:\n\
     .4byte 0x02010B40\n\
DAT_08035268:\n\
     .4byte 0x087C753C\n\
DAT_0803526c:\n\
     .4byte 0x02010BB8\n\
DAT_08035270:\n\
     .4byte 0x087C7548\n\
DAT_08035274:\n\
     .4byte 0x087C7542\n\
DAT_08035278:\n\
     .4byte 0x087C754E\n\
DAT_0803527c:\n\
     .4byte 0x02010B18\n\
LAB_08035280:\n\
     cmp        r0,#0x0\n\
     bge        LAB_08035298\n\
     ldr        r0,DAT_080352b8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     bl         fun_08039884\n\
     ldr        r0,DAT_080352bc\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     bl         fun_08039884\n\
LAB_08035298:\n\
     ldr        r0,DAT_080352c0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080352c4\n\
     ldr        r0,DAT_080352b8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     bl         fun_08039884\n\
     ldr        r0,DAT_080352bc\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     bl         fun_08039884\n\
     b          LAB_080352e0\n\
.space 1\n\
.space 1\n\
DAT_080352b8:\n\
     .4byte 0x02010B40\n\
DAT_080352bc:\n\
     .4byte 0x02010BB8\n\
DAT_080352c0:\n\
     .4byte 0x02010B1C\n\
LAB_080352c4:\n\
     ldr        r0,DAT_080352e8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080352e0\n\
     ldr        r0,DAT_080352ec\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     bl         fun_08039884\n\
     ldr        r0,DAT_080352f0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     bl         fun_08039884\n\
LAB_080352e0:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080352e8:\n\
     .4byte 0x02010A64\n\
DAT_080352ec:\n\
     .4byte 0x02010B40\n\
DAT_080352f0:\n\
     .4byte 0x02010BB8\n\
    ");
}
__attribute__((naked)) void fun_080352f4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_080353d0\n\
     ldr        r4,DAT_080353d4\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     sub        r5,r1,r0\n\
     ldr        r2,DAT_080353d8\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_0803531e\n\
     ldr        r1,DAT_080353dc\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xc\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e4\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_0803531e:\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r2,r1]\n\
     cmp        r3,#0x11\n\
     bne        LAB_0803533c\n\
     ldr        r1,DAT_080353dc\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xc\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e4\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_0803533c:\n\
     cmp        r3,#0x7\n\
     bne        LAB_08035356\n\
     ldr        r1,DAT_080353dc\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xc\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e4\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_08035356:\n\
     cmp        r3,#0x5\n\
     bne        LAB_08035370\n\
     ldr        r1,DAT_080353dc\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xe\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e4\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_08035370:\n\
     cmp        r3,#0x4\n\
     bne        LAB_080353a2\n\
     ldr        r0,DAT_080353e8\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r0,r2]\n\
     ldr        r0,[r4,#0x0]\n\
     sub        r0,r1,r0\n\
     sub        r1,r5,r0\n\
     ldr        r2,DAT_080353dc\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r1,r0,#0x4\n\
     add        r0,r0,r1\n\
     lsl        r1,r0,#0x8\n\
     add        r0,r0,r1\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xc\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_080353e0\n\
     ldr        r0,DAT_080353ec\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e4\n\
     ldr        r0,DAT_080353f0\n\
     str        r0,[r1,#0x0]\n\
LAB_080353a2:\n\
     cmp        r3,#0x6\n\
     bne        LAB_080353c8\n\
     ldr        r0,DAT_080353e8\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r0,r2]\n\
     ldr        r0,[r4,#0x0]\n\
     sub        r0,r1,r0\n\
     ldr        r1,DAT_080353dc\n\
     lsl        r0,r0,#0xe\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0xc\n\
     add        r0,r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e0\n\
     ldr        r0,DAT_080353ec\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080353e4\n\
     ldr        r0,DAT_080353f0\n\
     str        r0,[r1,#0x0]\n\
LAB_080353c8:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080353d0:\n\
     .4byte 0x02010A94\n\
DAT_080353d4:\n\
     .4byte 0x02010A8C\n\
DAT_080353d8:\n\
     .4byte 0x02010A90\n\
DAT_080353dc:\n\
     .4byte 0x02010BC4\n\
DAT_080353e0:\n\
     .4byte 0x02010AB8\n\
DAT_080353e4:\n\
     .4byte 0x02010B68\n\
DAT_080353e8:\n\
     .4byte 0x02010B0C\n\
DAT_080353ec:\n\
     .4byte 0x0000E9EF\n\
DAT_080353f0:\n\
     .4byte 0xFFFF9808\n\
    ");
}
__attribute__((naked)) void fun_080353f4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x4\n\
     ldr        r1,DAT_08035620\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_08035624\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     bl         fun_08035e70\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803541c\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     bl         fun_08035e8c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035492\n\
LAB_0803541c:\n\
     ldr        r0,DAT_08035628\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0803562c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803543a\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x2\n\
     cmp        r1,r0\n\
     ble        LAB_08035432\n\
     add        r1,r0,#0x0\n\
LAB_08035432:\n\
     ldr        r0,DAT_08035630\n\
     cmp        r1,r0\n\
     bge        LAB_0803543a\n\
     add        r1,r0,#0x0\n\
LAB_0803543a:\n\
     ldr        r0,DAT_08035634\n\
     ldr        r0,[r0,#0x0]\n\
     asr        r0,r0,#0x4\n\
     asr        r1,r1,#0x4\n\
     add        r2,r0,#0x0\n\
     mul        r2,r1\n\
     ldr        r0,DAT_08035638\n\
     ldr        r0,[r0,#0x0]\n\
     asr        r0,r0,#0x4\n\
     add        r3,r0,#0x0\n\
     mul        r3,r1\n\
     ldr        r1,DAT_0803563c\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08035640\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,r0,r3\n\
     str        r0,[r4,#0x0]\n\
     bl         fun_080352f4\n\
     ldr        r0,DAT_08035644\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,DAT_08035648\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08035624\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_08035484\n\
     ldr        r0,DAT_0803564c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035484\n\
     mov        r0,#0xf\n\
     str        r0,[r1,#0x0]\n\
LAB_08035484:\n\
     ldr        r0,DAT_08035624\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x6\n\
     bne        LAB_08035492\n\
     ldr        r1,DAT_08035648\n\
     mov        r0,#0xf7\n\
     str        r0,[r1,#0x0]\n\
LAB_08035492:\n\
     ldr        r0,DAT_08035624\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x2\n\
     beq        LAB_080354a8\n\
     cmp        r0,#0x1\n\
     bne        LAB_080354b8\n\
     ldr        r0,DAT_08035650\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080354b8\n\
LAB_080354a8:\n\
     ldr        r0,DAT_08035654\n\
     mov        r1,#0x1\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x64\n\
     mov        r2,#0x44\n\
     mov        r3,#0x5c\n\
     bl         fun_08035ad8\n\
LAB_080354b8:\n\
     ldr        r0,DAT_08035624\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x8\n\
     beq        LAB_080354ce\n\
     cmp        r0,#0x9\n\
     bne        LAB_080354e2\n\
     ldr        r0,DAT_08035650\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080354e2\n\
LAB_080354ce:\n\
     mov        r0,#0xb3\n\
     lsl        r0,r0,#0x1\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x4c\n\
     mov        r2,#0x50\n\
     mov        r3,#0x44\n\
     bl         fun_08035ad8\n\
LAB_080354e2:\n\
     ldr        r0,DAT_08035624\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0xc\n\
     beq        LAB_080354f8\n\
     cmp        r0,#0xf\n\
     bne        LAB_08035508\n\
     ldr        r0,DAT_08035650\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035508\n\
LAB_080354f8:\n\
     mov        r0,#0x1\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x9e\n\
     mov        r1,#0x64\n\
     mov        r2,#0x40\n\
     mov        r3,#0x5c\n\
     bl         fun_08035ad8\n\
LAB_08035508:\n\
     ldr        r0,DAT_08035624\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0xe\n\
     beq        LAB_0803551e\n\
     cmp        r0,#0x10\n\
     bne        LAB_08035530\n\
     ldr        r0,DAT_08035650\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035530\n\
LAB_0803551e:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x76\n\
     mov        r1,#0x4c\n\
     mov        r2,#0x4b\n\
     mov        r3,#0x44\n\
     bl         fun_08035ad8\n\
LAB_08035530:\n\
     ldr        r0,DAT_08035658\n\
     mov        r1,#0x0\n\
     ldrsh      r2,[r0,r1]\n\
     cmp        r2,#0x1\n\
     bne        LAB_08035542\n\
     ldr        r0,DAT_08035624\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     beq        LAB_08035550\n\
LAB_08035542:\n\
     ldr        r1,DAT_08035620\n\
     cmp        r2,#0x9\n\
     bne        LAB_08035556\n\
     ldr        r0,DAT_08035624\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x8\n\
     bne        LAB_08035556\n\
LAB_08035550:\n\
     ldr        r1,DAT_08035620\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08035556:\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080355ce\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_0803565c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035590\n\
     ldr        r0,DAT_08035660\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_08035590\n\
     ldr        r0,DAT_08035664\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     beq        LAB_08035582\n\
     ldr        r1,DAT_08035668\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08035582:\n\
     ldr        r1,DAT_0803566c\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08035670\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08035590:\n\
     ldr        r2,DAT_08035674\n\
     ldr        r4,DAT_0803566c\n\
     ldr        r5,DAT_08035668\n\
     ldrh       r1,[r5,#0x0]\n\
     ldrh       r3,[r4,#0x0]\n\
     add        r0,r1,#0x0\n\
     mul        r0,r3\n\
     ldrh       r3,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     strh       r0,[r2,#0x0]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     cmp        r1,#0x1\n\
     bls        LAB_080355b8\n\
     mov        r0,#0xa\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08035678\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
LAB_080355b8:\n\
     ldr        r1,DAT_0803567c\n\
     ldrh       r0,[r4,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08035680\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_08035664\n\
     strh       r0,[r1,#0x0]\n\
LAB_080355ce:\n\
     ldr        r0,DAT_08035684\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08035694\n\
     ldr        r0,DAT_08035624\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035694\n\
     ldr        r4,DAT_08035688\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035694\n\
     ldr        r0,DAT_0803568c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0xfa\n\
     ble        LAB_08035694\n\
     ldr        r0,DAT_08035690\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035694\n\
     ldr        r0,DAT_0803562c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035694\n\
     ldr        r0,DAT_0803564c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035694\n\
     mov        r0,#0x27\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
     b          LAB_080356ca\n\
DAT_08035620:\n\
     .4byte 0x02010AA8\n\
DAT_08035624:\n\
     .4byte 0x02010A90\n\
DAT_08035628:\n\
     .4byte 0x02010B18\n\
DAT_0803562c:\n\
     .4byte 0x02010B04\n\
DAT_08035630:\n\
     .4byte 0xFFFFFC18\n\
DAT_08035634:\n\
     .4byte 0x02010AB8\n\
DAT_08035638:\n\
     .4byte 0x02010B68\n\
DAT_0803563c:\n\
     .4byte 0x02010B0C\n\
DAT_08035640:\n\
     .4byte 0x02010BB4\n\
DAT_08035644:\n\
     .4byte 0x02010BC4\n\
DAT_08035648:\n\
     .4byte 0x02010BA8\n\
DAT_0803564c:\n\
     .4byte 0x02010A54\n\
DAT_08035650:\n\
     .4byte 0x02010B24\n\
DAT_08035654:\n\
     .4byte 0x00000326\n\
DAT_08035658:\n\
     .4byte 0x02010AD4\n\
DAT_0803565c:\n\
     .4byte 0x02010ABC\n\
DAT_08035660:\n\
     .4byte 0x02010A80\n\
DAT_08035664:\n\
     .4byte 0x02010AD8\n\
DAT_08035668:\n\
     .4byte 0x02010AC8\n\
DAT_0803566c:\n\
     .4byte 0x02010A48\n\
DAT_08035670:\n\
     .4byte 0x02010AA4\n\
DAT_08035674:\n\
     .4byte 0x02010A68\n\
DAT_08035678:\n\
     .4byte 0x02010B28\n\
DAT_0803567c:\n\
     .4byte 0x02009B58\n\
DAT_08035680:\n\
     .4byte 0x02010A58\n\
DAT_08035684:\n\
     .4byte 0x02010B3C\n\
DAT_08035688:\n\
     .4byte 0x02010BBC\n\
DAT_0803568c:\n\
     .4byte 0x02010A4C\n\
DAT_08035690:\n\
     .4byte 0x02010AE8\n\
LAB_08035694:\n\
     ldr        r0,DAT_08035778\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080356ca\n\
     ldr        r5,DAT_0803577c\n\
     ldr        r0,[r5,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080356ca\n\
     ldr        r0,DAT_08035780\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0xc7\n\
     bgt        LAB_080356ca\n\
     ldr        r0,DAT_08035784\n\
     ldrh       r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     bne        LAB_080356ca\n\
     ldr        r0,[r5,#0x0]\n\
     bl         fun_08001704\n\
     str        r4,[r5,#0x0]\n\
LAB_080356ca:\n\
     ldr        r0,DAT_08035778\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080356f2\n\
     ldr        r4,DAT_0803577c\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080356f2\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0x0]\n\
LAB_080356f2:\n\
     ldr        r0,DAT_08035788\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08035708\n\
     ldr        r4,DAT_0803577c\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0x0]\n\
LAB_08035708:\n\
     ldr        r0,DAT_08035778\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     bl         fun_08035ee8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803573a\n\
     ldr        r0,DAT_0803578c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803573a\n\
     ldr        r2,DAT_08035790\n\
     ldr        r0,DAT_08035794\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x8\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08035798\n\
     ldr        r0,DAT_0803579c\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     add        r0,#0xc0\n\
     str        r0,[r1,#0x0]\n\
LAB_0803573a:\n\
     ldr        r0,DAT_08035778\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     bl         fun_08035efc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803576e\n\
     ldr        r0,DAT_0803578c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803576e\n\
     ldr        r2,DAT_08035790\n\
     ldr        r0,DAT_08035794\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x8\n\
     ldr        r0,[r2,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r2,DAT_08035798\n\
     ldr        r0,DAT_0803579c\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     mov        r0,#0x40\n\
     sub        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
LAB_0803576e:\n\
     add        sp,#0x4\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08035778:\n\
     .4byte 0x02010A90\n\
DAT_0803577c:\n\
     .4byte 0x02010BBC\n\
DAT_08035780:\n\
     .4byte 0x02010A4C\n\
DAT_08035784:\n\
     .4byte 0x02010AE8\n\
DAT_08035788:\n\
     .4byte 0x02010B3C\n\
DAT_0803578c:\n\
     .4byte 0x02010B24\n\
DAT_08035790:\n\
     .4byte 0x02010BB4\n\
DAT_08035794:\n\
     .4byte 0x02010B18\n\
DAT_08035798:\n\
     .4byte 0x02010BA8\n\
DAT_0803579c:\n\
     .4byte 0x02010B30\n\
    ");
}
__attribute__((naked)) void fun_080357a0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     ldr        r4,DAT_08035810\n\
     ldr        r0,DAT_08035814\n\
     mov        r8,r0\n\
     ldr        r5,DAT_08035818\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0x44\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     str        r0,[r4,#0x0]\n\
     ldr        r6,DAT_0803581c\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     str        r0,[r6,#0x0]\n\
     mov        r1,#0x5c\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r2,DAT_08035820\n\
     add        r1,r1,r2\n\
     lsl        r1,r1,#0x10\n\
     str        r1,[r4,#0x0]\n\
     mov        r1,#0xc8\n\
     lsl        r1,r1,#0xf\n\
     add        r0,r0,r1\n\
     str        r0,[r6,#0x0]\n\
     ldr        r0,DAT_08035824\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[r5,#0x0]\n\
     add        r1,#0x80\n\
     mov        r2,#0xff\n\
     and        r1,r2\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_08003ff8\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08035810:\n\
     .4byte 0x02010B0C\n\
DAT_08035814:\n\
     .4byte 0x08049824\n\
DAT_08035818:\n\
     .4byte 0x02010BCC\n\
DAT_0803581c:\n\
     .4byte 0x02010BB4\n\
DAT_08035820:\n\
     .4byte 0x00000326\n\
DAT_08035824:\n\
     .4byte 0x02010B40\n\
    ");
}
__attribute__((naked)) void fun_08035828()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     mov        r10,r0\n\
     add        r6,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r0,[sp,#0x24]\n\
     ldr        r2,[sp,#0x28]\n\
     ldr        r3,[sp,#0x2c]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r7,r2,#0x10\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     mov        r9,r3\n\
     mov        r0,#0x40\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     bne        LAB_080358f2\n\
     mov        r0,#0x2\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035874\n\
     ldr        r0,DAT_0803594c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803593c\n\
LAB_08035874:\n\
     ldr        r4,DAT_0803594c\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     bl         fun_08035ea0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035892\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803593c\n\
LAB_08035892:\n\
     ldr        r0,DAT_08035950\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r7\n\
     blt        LAB_0803593c\n\
     mov        r0,#0x10\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     beq        LAB_080358c6\n\
     bl         fun_08035f50\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080358b4\n\
     ldr        r0,DAT_08035954\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0803593c\n\
LAB_080358b4:\n\
     bl         fun_08035f64\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080358c6\n\
     ldr        r0,DAT_08035954\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803593c\n\
LAB_080358c6:\n\
     mov        r0,#0x8\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     beq        LAB_080358f2\n\
     bl         fun_08035f50\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080358e0\n\
     ldr        r0,DAT_08035954\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803593c\n\
LAB_080358e0:\n\
     bl         fun_08035f64\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080358f2\n\
     ldr        r0,DAT_08035954\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0803593c\n\
LAB_080358f2:\n\
     ldr        r2,DAT_08035958\n\
     ldrh       r1,[r2,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803593c\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_0803595c\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08035960\n\
     mov        r2,r10\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,DAT_08035964\n\
     str        r6,[r0,#0x0]\n\
     ldr        r0,DAT_08035968\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_0803596c\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_08035970\n\
     mov        r2,sp\n\
     ldrh       r2,[r2,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     cmp        r6,#0x0\n\
     beq        LAB_0803592c\n\
     ldr        r0,DAT_08035974\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r6,#0x0\n\
     bl         fun_080397e0\n\
LAB_0803592c:\n\
     mov        r0,r8\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803593c\n\
     ldr        r0,DAT_08035978\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     bl         fun_080397e0\n\
LAB_0803593c:\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803594c:\n\
     .4byte 0x02010A90\n\
DAT_08035950:\n\
     .4byte 0x02010A4C\n\
DAT_08035954:\n\
     .4byte 0x02010B18\n\
DAT_08035958:\n\
     .4byte 0x02010ABC\n\
DAT_0803595c:\n\
     .4byte 0x02010B38\n\
DAT_08035960:\n\
     .4byte 0x02010BC0\n\
DAT_08035964:\n\
     .4byte 0x02010AF0\n\
DAT_08035968:\n\
     .4byte 0x02010ACC\n\
DAT_0803596c:\n\
     .4byte 0x02010AF8\n\
DAT_08035970:\n\
     .4byte 0x02010A80\n\
DAT_08035974:\n\
     .4byte 0x02010B40\n\
DAT_08035978:\n\
     .4byte 0x02010BB8\n\
    ");
}
__attribute__((naked)) void fun_0803597c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r5,DAT_080359e4\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080359de\n\
     ldr        r1,DAT_080359e8\n\
     mov        r4,#0x1\n\
     add        r0,r4,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080359de\n\
     ldr        r0,DAT_080359ec\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     beq        LAB_080359de\n\
     ldr        r0,DAT_080359f0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080359de\n\
     ldr        r0,DAT_080359f4\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_080359de\n\
     ldr        r0,DAT_080359f8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,DAT_080359fc\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,DAT_08035a00\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_08035a04\n\
     mov        r3,#0xb0\n\
     lsl        r3,r3,#0x4\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     strh       r2,[r5,#0x0]\n\
     ldr        r0,DAT_08035a08\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_08035a0c\n\
     strh       r2,[r0,#0x0]\n\
LAB_080359de:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080359e4:\n\
     .4byte 0x02010ABC\n\
DAT_080359e8:\n\
     .4byte 0x02010AF8\n\
DAT_080359ec:\n\
     .4byte 0x02010A80\n\
DAT_080359f0:\n\
     .4byte 0x02010AD4\n\
DAT_080359f4:\n\
     .4byte 0x02010A90\n\
DAT_080359f8:\n\
     .4byte 0x02010AE8\n\
DAT_080359fc:\n\
     .4byte 0x02010A98\n\
DAT_08035a00:\n\
     .4byte 0x02010A84\n\
DAT_08035a04:\n\
     .4byte 0x02010AA0\n\
DAT_08035a08:\n\
     .4byte 0x02010AC8\n\
DAT_08035a0c:\n\
     .4byte 0x02010A48\n\
    ");
}
__attribute__((naked)) void fun_08035a10()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,DAT_08035aa4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035a20\n\
     mov        r0,#0x7\n\
     bl         fun_080016f0\n\
LAB_08035a20:\n\
     ldr        r0,DAT_08035aa8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     blt        LAB_08035a9e\n\
     ldr        r1,DAT_08035aac\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08035ab0\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08035ab4\n\
     ldr        r4,DAT_08035ab8\n\
     ldrh       r2,[r4,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08035abc\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08035ac0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035a7c\n\
     ldr        r3,DAT_08035ac4\n\
     ldrh       r2,[r4,#0x0]\n\
     ldrh       r4,[r3,#0x0]\n\
     cmp        r4,r2\n\
     beq        LAB_08035a6e\n\
     ldr        r1,DAT_08035ac8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08035a6e:\n\
     ldr        r0,DAT_08035acc\n\
     ldr        r1,DAT_08035ad0\n\
     ldrh       r4,[r0,#0x0]\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,r4,r1\n\
     strh       r1,[r0,#0x0]\n\
     strh       r2,[r3,#0x0]\n\
LAB_08035a7c:\n\
     ldr        r0,DAT_08035ac0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     bl         fun_08035ebc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035a98\n\
     ldr        r0,DAT_08035ad4\n\
     ldr        r1,DAT_08035ad0\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,r2,r1\n\
     strh       r1,[r0,#0x0]\n\
LAB_08035a98:\n\
     ldr        r1,DAT_08035aa4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08035a9e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08035aa4:\n\
     .4byte 0x02010AA4\n\
DAT_08035aa8:\n\
     .4byte 0x02010B3C\n\
DAT_08035aac:\n\
     .4byte 0x02010B38\n\
DAT_08035ab0:\n\
     .4byte 0x02010B30\n\
DAT_08035ab4:\n\
     .4byte 0x02010B80\n\
DAT_08035ab8:\n\
     .4byte 0x02010A80\n\
DAT_08035abc:\n\
     .4byte 0x02010AD0\n\
DAT_08035ac0:\n\
     .4byte 0x02010A90\n\
DAT_08035ac4:\n\
     .4byte 0x02010AD8\n\
DAT_08035ac8:\n\
     .4byte 0x02010AC8\n\
DAT_08035acc:\n\
     .4byte 0x02010A48\n\
DAT_08035ad0:\n\
     .4byte 0x02010ACC\n\
DAT_08035ad4:\n\
     .4byte 0x02010A68\n\
    ");
}
__attribute__((naked)) void fun_08035ad8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     str        r0,[sp,#0x0]\n\
     str        r1,[sp,#0x4]\n\
     mov        r8,r2\n\
     mov        r9,r3\n\
     ldr        r0,[sp,#0x28]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     ldr        r0,DAT_08035b34\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035b18\n\
     ldr        r0,DAT_08035b38\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r3,DAT_08035b3c\n\
     add        r0,r1,r3\n\
     cmp        r0,#0xc7\n\
     bhi        LAB_08035b0c\n\
     mov        r3,r9\n\
     asr        r0,r3,#0x1\n\
     add        r9,r0\n\
LAB_08035b0c:\n\
     ldr        r0,DAT_08035b40\n\
     cmp        r1,r0\n\
     ble        LAB_08035b18\n\
     mov        r0,r9\n\
     lsl        r0,r0,#0x1\n\
     mov        r9,r0\n\
LAB_08035b18:\n\
     ldr        r0,DAT_08035b44\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x3\n\
     beq        LAB_08035b30\n\
     cmp        r1,#0x7\n\
     beq        LAB_08035b30\n\
     cmp        r1,#0x5\n\
     beq        LAB_08035b30\n\
     cmp        r1,#0x11\n\
     bne        LAB_08035b48\n\
LAB_08035b30:\n\
     mov        r0,#0x1\n\
     b          LAB_08035b4a\n\
DAT_08035b34:\n\
     .4byte 0x02010B24\n\
DAT_08035b38:\n\
     .4byte 0x02010A9C\n\
DAT_08035b3c:\n\
     .4byte 0xFFFFF7CC\n\
DAT_08035b40:\n\
     .4byte 0x000008FB\n\
DAT_08035b44:\n\
     .4byte 0x02010AD4\n\
LAB_08035b48:\n\
     mov        r0,#0x0\n\
LAB_08035b4a:\n\
     lsl        r1,r2,#0x18\n\
     mov        r10,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035b98\n\
     ldr        r0,DAT_08035b6c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x2\n\
     beq        LAB_08035b68\n\
     cmp        r0,#0x8\n\
     beq        LAB_08035b68\n\
     cmp        r0,#0xe\n\
     beq        LAB_08035b68\n\
     cmp        r0,#0xc\n\
     bne        LAB_08035b70\n\
LAB_08035b68:\n\
     mov        r0,#0x1\n\
     b          LAB_08035b72\n\
DAT_08035b6c:\n\
     .4byte 0x02010A90\n\
LAB_08035b70:\n\
     mov        r0,#0x0\n\
LAB_08035b72:\n\
     lsl        r2,r2,#0x18\n\
     mov        r10,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035b98\n\
     asr        r2,r2,#0x18\n\
     cmp        r2,#0x1\n\
     bne        LAB_08035b88\n\
     ldr        r1,DAT_08035bb8\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x0]\n\
LAB_08035b88:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r2,r0\n\
     bne        LAB_08035b98\n\
     ldr        r1,DAT_08035bb8\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x0]\n\
LAB_08035b98:\n\
     mov        r2,#0x0\n\
     ldrsh      r4,[r3,r2]\n\
     add        r0,r4,#0x0\n\
     bl         fun_08035ee8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035bb4\n\
     add        r0,r4,#0x0\n\
     bl         fun_08035efc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035bbc\n\
LAB_08035bb4:\n\
     mov        r0,#0x1\n\
     b          LAB_08035bbe\n\
DAT_08035bb8:\n\
     .4byte 0x02010B58\n\
LAB_08035bbc:\n\
     mov        r0,#0x0\n\
LAB_08035bbe:\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035c04\n\
     ldr        r0,DAT_08035bdc\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x2\n\
     beq        LAB_08035bd8\n\
     cmp        r0,#0x8\n\
     beq        LAB_08035bd8\n\
     cmp        r0,#0xe\n\
     beq        LAB_08035bd8\n\
     cmp        r0,#0xc\n\
     bne        LAB_08035be0\n\
LAB_08035bd8:\n\
     mov        r0,#0x1\n\
     b          LAB_08035be2\n\
DAT_08035bdc:\n\
     .4byte 0x02010A90\n\
LAB_08035be0:\n\
     mov        r0,#0x0\n\
LAB_08035be2:\n\
     ldr        r2,DAT_08035cc8\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035c04\n\
     mov        r0,r10\n\
     asr        r1,r0,#0x18\n\
     cmp        r1,#0x1\n\
     bne        LAB_08035bf6\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x7\n\
     str        r0,[r2,#0x0]\n\
LAB_08035bf6:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bne        LAB_08035c04\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r2,#0x0]\n\
LAB_08035c04:\n\
     ldr        r0,DAT_08035cc8\n\
     ldr        r0,[r0,#0x0]\n\
     asr        r7,r0,#0x8\n\
     mov        r6,#0xff\n\
     and        r7,r6\n\
     ldr        r4,DAT_08035ccc\n\
     ldr        r5,DAT_08035cd0\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r5\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     str        r0,[r4,#0x0]\n\
     mov        r2,r8\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     str        r0,[r4,#0x0]\n\
     ldr        r3,DAT_08035cd4\n\
     mov        r8,r3\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x40\n\
     and        r0,r6\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r5\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     str        r0,[r3,#0x0]\n\
     mov        r2,r9\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     bl         fun_08002c84\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r3,[sp,#0x0]\n\
     add        r1,r1,r3\n\
     ldr        r2,[sp,#0x4]\n\
     add        r0,r0,r2\n\
     lsl        r1,r1,#0x10\n\
     str        r1,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x0]\n\
     mov        r1,r10\n\
     asr        r0,r1,#0x18\n\
     cmp        r0,#0x1\n\
     bne        LAB_08035c76\n\
     cmp        r7,#0x3f\n\
     bgt        LAB_08035c70\n\
     mov        r7,#0x40\n\
LAB_08035c70:\n\
     cmp        r7,#0x80\n\
     ble        LAB_08035c76\n\
     mov        r7,#0x80\n\
LAB_08035c76:\n\
     mov        r2,r10\n\
     asr        r1,r2,#0x18\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bne        LAB_08035c8e\n\
     cmp        r7,#0xc0\n\
     ble        LAB_08035c88\n\
     mov        r7,#0xc0\n\
LAB_08035c88:\n\
     cmp        r7,#0x7f\n\
     bgt        LAB_08035c8e\n\
     mov        r7,#0x80\n\
LAB_08035c8e:\n\
     ldr        r1,DAT_08035cd8\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x80\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08035cdc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r1,#0x4\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r3,r9\n\
     lsl        r1,r3,#0x1\n\
     add        r1,r9\n\
     lsl        r1,r1,#0x1\n\
     bl         __divsi3\n\
     ldr        r2,DAT_08035cc8\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,r1,r0\n\
     str        r1,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08035ce8\n\
     ldr        r1,DAT_08035ce0\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08035ce4\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     b          LAB_08035cf4\n\
DAT_08035cc8:\n\
     .4byte 0x02010B58\n\
DAT_08035ccc:\n\
     .4byte 0x02010B0C\n\
DAT_08035cd0:\n\
     .4byte 0x08049824\n\
DAT_08035cd4:\n\
     .4byte 0x02010BB4\n\
DAT_08035cd8:\n\
     .4byte 0x02010BA8\n\
DAT_08035cdc:\n\
     .4byte 0x02010B18\n\
DAT_08035ce0:\n\
     .4byte 0x02010AB8\n\
DAT_08035ce4:\n\
     .4byte 0x02010B68\n\
LAB_08035ce8:\n\
     ldr        r1,DAT_08035d08\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08035d0c\n\
     mov        r0,#0x0\n\
LAB_08035cf4:\n\
     str        r0,[r1,#0x0]\n\
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
DAT_08035d08:\n\
     .4byte 0x02010AB8\n\
DAT_08035d0c:\n\
     .4byte 0x02010B68\n\
    ");
}
__attribute__((naked)) void fun_08035d10()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_08035d64\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08035d68\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08035d6c\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0x9a\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08035d70\n\
     bl         fun_08039e64\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08035d74\n\
     bl         fun_080045f0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     add        sp,#0x4\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08035d64:\n\
     .4byte 0x040000D4\n\
DAT_08035d68:\n\
     .4byte 0x8100C000\n\
DAT_08035d6c:\n\
     .4byte 0x81000200\n\
DAT_08035d70:\n\
     .4byte 0x02010A30\n\
DAT_08035d74:\n\
     .4byte 0x0861F98C\n\
    ");
}
void fun_08035d78()
{
}
__attribute__((naked)) void fun_08035d7c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     add        r0,r5,#0x0\n\
     bl         strlen\n\
     lsl        r0,r0,#0x13\n\
     lsr        r0,r0,#0x11\n\
     mov        r1,#0x78\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     ldr        r3,DAT_08035dac\n\
     add        r0,r5,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803c138\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08035dac:\n\
     .4byte 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_08035db0()
{
    asm("\n\
     ldr        r1,DAT_08035dd0\n\
     ldr        r0,DAT_08035dd4\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08035dd8\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0xe\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08035ddc\n\
     mov        r2,#0x0\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08035de0\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08035de4\n\
     strh       r2,[r0,#0x0]\n\
     bx         lr\n\
DAT_08035dd0:\n\
     .4byte 0x02010B0C\n\
DAT_08035dd4:\n\
     .4byte 0x023A0000\n\
PTR_DAT_08035dd8:\n\
     .4byte       DAT_02010bb4\n\
PTR_DAT_08035ddc:\n\
     .4byte       DAT_02010b18\n\
PTR_DAT_08035de0:\n\
     .4byte       DAT_02010a90\n\
PTR_DAT_08035de4:\n\
     .4byte       DAT_02010ae8\n\
    ");
}
__attribute__((naked)) void fun_08035de8()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,DAT_08035e50\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035e1c\n\
     ldr        r1,DAT_08035e54\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035e04\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3c\n\
     bl         fun_080016f0\n\
LAB_08035e04:\n\
     ldr        r1,DAT_08035e58\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_08035e5c\n\
     ldr        r3,DAT_08035e60\n\
     ldrh       r0,[r3,#0x0]\n\
     ldrh       r4,[r2,#0x0]\n\
     add        r1,r0,r4\n\
     strh       r1,[r2,#0x0]\n\
     sub        r0,#0x5\n\
     strh       r0,[r3,#0x0]\n\
LAB_08035e1c:\n\
     ldr        r0,DAT_08035e64\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bgt        LAB_08035e4a\n\
     ldr        r0,DAT_08035e68\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     bl         fun_08035e70\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035e4a\n\
     mov        r0,#0xb\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08035e54\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08035e50\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08035e6c\n\
     strh       r1,[r0,#0x0]\n\
LAB_08035e4a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08035e50:\n\
     .4byte 0x02010A98\n\
DAT_08035e54:\n\
     .4byte 0x02010AFC\n\
DAT_08035e58:\n\
     .4byte 0x02010A40\n\
DAT_08035e5c:\n\
     .4byte 0x02010A84\n\
DAT_08035e60:\n\
     .4byte 0x02010AA0\n\
DAT_08035e64:\n\
     .4byte 0x02010A4C\n\
DAT_08035e68:\n\
     .4byte 0x02010A90\n\
DAT_08035e6c:\n\
     .4byte 0x02010AE8\n\
    ");
}
__attribute__((naked)) void fun_08035e70()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     beq        LAB_08035e84\n\
     cmp        r0,#0x7\n\
     beq        LAB_08035e84\n\
     cmp        r0,#0x5\n\
     beq        LAB_08035e84\n\
     cmp        r0,#0x11\n\
     bne        LAB_08035e88\n\
LAB_08035e84:\n\
     mov        r0,#0x1\n\
     b          LAB_08035e8a\n\
LAB_08035e88:\n\
     mov        r0,#0x0\n\
LAB_08035e8a:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035e8c()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x4\n\
     beq        LAB_08035e98\n\
     cmp        r0,#0x6\n\
     bne        LAB_08035e9c\n\
LAB_08035e98:\n\
     mov        r0,#0x1\n\
     b          LAB_08035e9e\n\
LAB_08035e9c:\n\
     mov        r0,#0x0\n\
LAB_08035e9e:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035ea0()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     beq        LAB_08035eb4\n\
     cmp        r0,#0x8\n\
     beq        LAB_08035eb4\n\
     cmp        r0,#0xe\n\
     beq        LAB_08035eb4\n\
     cmp        r0,#0xc\n\
     bne        LAB_08035eb8\n\
LAB_08035eb4:\n\
     mov        r0,#0x1\n\
     b          LAB_08035eba\n\
LAB_08035eb8:\n\
     mov        r0,#0x0\n\
LAB_08035eba:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035ebc()
{
    asm("\n\
     push       {r4,lr}\n\
     lsl        r0,r0,#0x10\n\
     asr        r4,r0,#0x10\n\
     add        r0,r4,#0x0\n\
     bl         fun_08035ee8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035ede\n\
     add        r0,r4,#0x0\n\
     bl         fun_08035efc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08035ede\n\
     mov        r0,#0x0\n\
     b          LAB_08035ee0\n\
LAB_08035ede:\n\
     mov        r0,#0x1\n\
LAB_08035ee0:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08035ee8()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0xf\n\
     beq        LAB_08035ef4\n\
     cmp        r0,#0x1\n\
     bne        LAB_08035ef8\n\
LAB_08035ef4:\n\
     mov        r0,#0x1\n\
     b          LAB_08035efa\n\
LAB_08035ef8:\n\
     mov        r0,#0x0\n\
LAB_08035efa:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035efc()
{
    asm("\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x10\n\
     beq        LAB_08035f08\n\
     cmp        r0,#0x9\n\
     bne        LAB_08035f0c\n\
LAB_08035f08:\n\
     mov        r0,#0x1\n\
     b          LAB_08035f0e\n\
LAB_08035f0c:\n\
     mov        r0,#0x0\n\
LAB_08035f0e:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035f10()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_08035f3c\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     ldr        r0,DAT_08035f40\n\
     cmp        r1,r0\n\
     bge        LAB_08035f32\n\
     ldr        r1,DAT_08035f44\n\
     ldr        r0,DAT_08035f48\n\
     ldrh       r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08035f4c\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_08035f32:\n\
     bl         fun_080029c8\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08035f3c:\n\
     .4byte 0x02010B3C\n\
DAT_08035f40:\n\
     .4byte 0xFFFFFED4\n\
DAT_08035f44:\n\
     .4byte 0x020025FC\n\
DAT_08035f48:\n\
     .4byte 0x02010A68\n\
DAT_08035f4c:\n\
     .4byte 0x02002558\n\
    ");
}
__attribute__((naked)) void fun_08035f50()
{
    asm("\n\
     ldr        r0,DAT_08035f5c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08035f60\n\
     mov        r0,#0x0\n\
     b          LAB_08035f62\n\
DAT_08035f5c:\n\
     .4byte 0x02010B5C\n\
LAB_08035f60:\n\
     mov        r0,#0x1\n\
LAB_08035f62:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035f64()
{
    asm("\n\
     ldr        r0,DAT_08035f70\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     blt        LAB_08035f74\n\
     mov        r0,#0x0\n\
     b          LAB_08035f76\n\
DAT_08035f70:\n\
     .4byte 0x02010B5C\n\
LAB_08035f74:\n\
     mov        r0,#0x1\n\
LAB_08035f76:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035f78()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_08035fa4\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035f92\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0x0]\n\
LAB_08035f92:\n\
     bl         fun_0800457c\n\
     bl         fun_0803a980\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08035fa4:\n\
     .4byte 0x02010BBC\n\
    ");
}
__attribute__((naked)) void fun_08035fa8()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_08035ff0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     bl         fun_080334bc\n\
     bl         fun_08034268\n\
     bl         fun_08034114\n\
     bl         fun_08034518\n\
     bl         fun_080353f4\n\
     bl         fun_08034804\n\
     bl         fun_0803597c\n\
     bl         fun_08034c34\n\
     ldr        r0,DAT_08035ff4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08035fde\n\
     bl         fun_08035de8\n\
LAB_08035fde:\n\
     bl         fun_08033228\n\
     bl         fun_080395dc\n\
     bl         fun_08035f10\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08035ff0:\n\
     .4byte 0x02010ADC\n\
DAT_08035ff4:\n\
     .4byte 0x02010AE8\n\
    ");
}
__attribute__((naked)) void fun_08035ff8()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08035ffc()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08036000()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x4\n\
     bl         fun_08002e64\n\
     ldr        r0,DAT_0803620c\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08036210\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08036214\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08036218\n\
     ldr        r0,DAT_0803621c\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     mov        r0,#0xc\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     strh       r2,[r1,#0x8]\n\
     ldr        r1,DAT_08036220\n\
     mov        r0,#0x68\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08036224\n\
     mov        r0,#0x3d\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08036228\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0803622c\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,DAT_08036230\n\
     ldr        r0,DAT_08036234\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08036238\n\
     ldr        r0,DAT_0803623c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08036240\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,DAT_08036244\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,DAT_08036248\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,DAT_0803624c\n\
     mov        r0,#0x3\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08036250\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,DAT_08036254\n\
     mov        r0,#0x64\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08036258\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_0803625c\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_08036260\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,DAT_08036264\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_08036268\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x30\n\
LAB_08036084:\n\
     str        r2,[r0,#0x0]\n\
     sub        r0,#0x10\n\
     cmp        r0,r1\n\
     bge        LAB_08036084\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     ldr        r1,DAT_0803626c\n\
     ldr        r0,DAT_0803621c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08036270\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08036274\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,DAT_08036278\n\
     str        r0,[r1,#0xc]\n\
     ldr        r0,DAT_0803627c\n\
     str        r0,[r1,#0x10]\n\
     ldr        r0,DAT_08036280\n\
     str        r0,[r1,#0x14]\n\
     ldr        r0,DAT_08036284\n\
     str        r0,[r1,#0x18]\n\
     ldr        r2,DAT_08036288\n\
     mov        r0,#0x10\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0803628c\n\
     mov        r3,#0x31\n\
     str        r3,[r1,#0x0]\n\
     mov        r7,#0x58\n\
     mov        r9,r7\n\
     mov        r0,r9\n\
     str        r0,[r2,#0x4]\n\
     mov        r0,#0x4d\n\
     str        r0,[r1,#0x4]\n\
     mov        r0,#0xa0\n\
     str        r0,[r2,#0x8]\n\
     str        r3,[r1,#0x8]\n\
     str        r7,[r2,#0xc]\n\
     mov        r0,#0x15\n\
     str        r0,[r1,#0xc]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     bl         fun_08002bcc\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_08036290\n\
     str        r0,[r4,#0x0]\n\
     mov        r6,#0xc0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08036294\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r5,#0xa0\n\
     lsl        r5,r5,#0x13\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_08036298\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0803629c\n\
     bl         fun_080045f0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     ldr        r2,DAT_080362a0\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080362a4\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_080362a8\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_080362ac\n\
     add        r1,r6,#0x0\n\
     bl         fun_0803d070\n\
     ldr        r0,DAT_080362b0\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080362b4\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,DAT_080362b8\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080362bc\n\
     str        r0,[r1,#0x0]\n\
     mov        r7,r8\n\
     strh       r7,[r0,#0x6]\n\
     ldr        r1,DAT_080362c0\n\
     strh       r1,[r0,#0x2]\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r0,DAT_080362c4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080362c8\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x20\n\
     strh       r1,[r0,#0x2]\n\
     mov        r4,#0x8\n\
     strh       r4,[r0,#0x4]\n\
     mov        r5,#0x3\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,DAT_080362cc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080362d0\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x88\n\
     strh       r1,[r0,#0x2]\n\
     strh       r4,[r0,#0x4]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,DAT_080362d4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080362d8\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x2]\n\
     strh       r4,[r0,#0x4]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,DAT_080362dc\n\
     bl         fun_08003998\n\
     ldr        r4,DAT_080362e0\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_080362e4\n\
     bl         fun_08003998\n\
     ldr        r2,DAT_080362e8\n\
     mov        r9,r2\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,DAT_080362ec\n\
     bl         fun_08003998\n\
     ldr        r7,DAT_080362f0\n\
     mov        r8,r7\n\
     mov        r1,r8\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_080362f4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080362f8\n\
     str        r0,[r1,#0x0]\n\
     ldr        r4,[r4,#0x0]\n\
     mov        r6,#0x7a\n\
     strh       r6,[r4,#0x2]\n\
     mov        r1,#0x16\n\
     strh       r1,[r4,#0x4]\n\
     mov        r2,r9\n\
     ldr        r3,[r2,#0x0]\n\
     mov        r2,#0x4a\n\
     strh       r2,[r3,#0x2]\n\
     strh       r1,[r3,#0x4]\n\
     ldr        r1,[r7,#0x0]\n\
     strh       r2,[r1,#0x2]\n\
     mov        r2,#0x1f\n\
     strh       r2,[r1,#0x4]\n\
     strh       r6,[r0,#0x2]\n\
     strh       r2,[r0,#0x4]\n\
     strh       r5,[r4,#0x6]\n\
     strh       r5,[r3,#0x6]\n\
     strh       r5,[r1,#0x6]\n\
     strh       r5,[r0,#0x6]\n\
     bl         fun_0800117c\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     ldr        r1,DAT_080362fc\n\
     ldr        r2,DAT_08036300\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803620c:\n\
     .4byte 0x02010BD0\n\
DAT_08036210:\n\
     .4byte 0x02010C40\n\
DAT_08036214:\n\
     .4byte 0x02010C3C\n\
DAT_08036218:\n\
     .4byte 0x02010C20\n\
DAT_0803621c:\n\
     .4byte 0x087CAF1C\n\
DAT_08036220:\n\
     .4byte 0x0200F45C\n\
DAT_08036224:\n\
     .4byte 0x0200F4F0\n\
DAT_08036228:\n\
     .4byte 0x02010C64\n\
DAT_0803622c:\n\
     .4byte 0x02010C74\n\
DAT_08036230:\n\
     .4byte 0x02010C38\n\
DAT_08036234:\n\
     .4byte 0x087C7D0C\n\
DAT_08036238:\n\
     .4byte 0x0200F47C\n\
DAT_0803623c:\n\
     .4byte 0x087C7E7C\n\
DAT_08036240:\n\
     .4byte 0x0200F598\n\
DAT_08036244:\n\
     .4byte 0x02010C14\n\
DAT_08036248:\n\
     .4byte 0x0200F4FC\n\
DAT_0803624c:\n\
     .4byte 0x0200F4C0\n\
DAT_08036250:\n\
     .4byte 0x0200F468\n\
DAT_08036254:\n\
     .4byte 0x02010C30\n\
DAT_08036258:\n\
     .4byte 0x0200F478\n\
DAT_0803625c:\n\
     .4byte 0x02010C70\n\
DAT_08036260:\n\
     .4byte 0x02010BD8\n\
DAT_08036264:\n\
     .4byte 0x0200F46C\n\
DAT_08036268:\n\
     .4byte 0x02010970\n\
DAT_0803626c:\n\
     .4byte 0x02010BE0\n\
DAT_08036270:\n\
     .4byte 0x087CC11C\n\
DAT_08036274:\n\
     .4byte 0x087CD11C\n\
DAT_08036278:\n\
     .4byte 0x087CE11C\n\
DAT_0803627c:\n\
     .4byte 0x087D015C\n\
DAT_08036280:\n\
     .4byte 0x087D321C\n\
DAT_08036284:\n\
     .4byte 0x087D421C\n\
DAT_08036288:\n\
     .4byte 0x02010C00\n\
DAT_0803628c:\n\
     .4byte 0x02010C50\n\
DAT_08036290:\n\
     .4byte 0x040000D4\n\
DAT_08036294:\n\
     .4byte 0x8100C000\n\
DAT_08036298:\n\
     .4byte 0x81000200\n\
DAT_0803629c:\n\
     .4byte 0x087CBF1C\n\
DAT_080362a0:\n\
     .4byte 0x00001F44\n\
DAT_080362a4:\n\
     .4byte 0x087CAD1C\n\
DAT_080362a8:\n\
     .4byte 0x80000100\n\
DAT_080362ac:\n\
     .4byte 0x087C7EA0\n\
DAT_080362b0:\n\
     .4byte 0x0861FC5C\n\
DAT_080362b4:\n\
     .4byte 0x02010C34\n\
DAT_080362b8:\n\
     .4byte 0x0861FCAC\n\
DAT_080362bc:\n\
     .4byte 0x02010BD4\n\
DAT_080362c0:\n\
     .4byte 0x0000FFE2\n\
DAT_080362c4:\n\
     .4byte 0x0861FCDC\n\
DAT_080362c8:\n\
     .4byte 0x02010C18\n\
DAT_080362cc:\n\
     .4byte 0x0861FCBC\n\
DAT_080362d0:\n\
     .4byte 0x02010C78\n\
DAT_080362d4:\n\
     .4byte 0x0861FCCC\n\
DAT_080362d8:\n\
     .4byte 0x02010C10\n\
DAT_080362dc:\n\
     .4byte 0x0861FC6C\n\
DAT_080362e0:\n\
     .4byte 0x02010C7C\n\
DAT_080362e4:\n\
     .4byte 0x0861FC7C\n\
DAT_080362e8:\n\
     .4byte 0x02010C68\n\
DAT_080362ec:\n\
     .4byte 0x0861FC9C\n\
DAT_080362f0:\n\
     .4byte 0x02010C6C\n\
DAT_080362f4:\n\
     .4byte 0x0861FC8C\n\
DAT_080362f8:\n\
     .4byte 0x02010C84\n\
DAT_080362fc:\n\
     .4byte 0x0000037F\n\
DAT_08036300:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08036304()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc8\n\
     ldr        r0,DAT_08036348\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08036394\n\
     ldr        r4,DAT_0803634c\n\
     ldr        r1,DAT_08036350\n\
     mov        r0,#0x64\n\
     ldrh       r1,[r1,#0x0]\n\
     mul        r0,r1\n\
     ldr        r2,DAT_08036354\n\
     ldr        r1,DAT_08036358\n\
     ldrh       r1,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     add        r1,r1,r2\n\
     bl         __divsi3\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r1,DAT_0803635c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08036360\n\
     ldr        r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08036368\n\
     ldr        r0,DAT_08036364\n\
     str        r1,[r0,#0x0]\n\
     b          LAB_0803638e\n\
.space 1\n\
.space 1\n\
DAT_08036348:\n\
     .4byte 0x02010BD0\n\
DAT_0803634c:\n\
     .4byte 0x02010C30\n\
DAT_08036350:\n\
     .4byte 0x0200F478\n\
DAT_08036354:\n\
     .4byte 0x02010BD8\n\
DAT_08036358:\n\
     .4byte 0x02010C70\n\
DAT_0803635c:\n\
     .4byte 0x020025B8\n\
DAT_08036360:\n\
     .4byte 0x02010C14\n\
DAT_08036364:\n\
     .4byte 0x020025FC\n\
LAB_08036368:\n\
     ldr        r5,DAT_080363d4\n\
     ldrh       r4,[r4,#0x0]\n\
     add        r4,r4,r1\n\
     add        r0,r4,#0x0\n\
     bl         __floatsidf\n\
     cmp        r4,#0x0\n\
     bge        LAB_08036380\n\
     ldr        r2,DAT_080363d8\n\
     ldr        r3,DAT_080363dc\n\
     bl         __adddf3\n\
LAB_08036380:\n\
     ldr        r2,DAT_080363e0\n\
     ldr        r3,DAT_080363e4\n\
     bl         __muldf3\n\
     bl         __fixdfsi\n\
     str        r0,[r5,#0x0]\n\
LAB_0803638e:\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_08036394:\n\
     bl         fun_080029c8\n\
     mov        r6,#0x0\n\
     ldr        r2,DAT_080363e8\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080363f4\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080363f4\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080363f4\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080363f4\n\
     ldr        r2,DAT_080363ec\n\
     mov        r0,#0x6e\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_080363f0\n\
     mov        r0,#0x5d\n\
     strh       r0,[r1,#0x0]\n\
     add        r5,r2,#0x0\n\
     b          LAB_080363f8\n\
DAT_080363d4:\n\
     .4byte 0x020025FC\n\
DAT_080363d8:\n\
     .4byte 0x41F00000\n\
DAT_080363dc:\n\
     .4byte 0x00000000\n\
DAT_080363e0:\n\
     .4byte 0x401BF5C2\n\
DAT_080363e4:\n\
     .4byte 0x8F5C28F6\n\
DAT_080363e8:\n\
     .4byte 0x02005830\n\
DAT_080363ec:\n\
     .4byte 0x0200F45C\n\
DAT_080363f0:\n\
     .4byte 0x0200F4F0\n\
LAB_080363f4:\n\
     mov        r6,#0x1\n\
     ldr        r5,DAT_080365b4\n\
LAB_080363f8:\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     ldr        r4,DAT_080365b8\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803640a\n\
     ldr        r0,DAT_080365bc\n\
     mov        r1,r8\n\
     str        r1,[r0,#0x0]\n\
LAB_0803640a:\n\
     ldrh       r1,[r4,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803642e\n\
     mov        r0,#0x21\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_080365c0\n\
     mov        r0,#0x5c\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0x1\n\
     mov        r8,r2\n\
     ldr        r1,DAT_080365bc\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
LAB_0803642e:\n\
     ldrh       r1,[r4,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08036452\n\
     mov        r0,#0x6e\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_080365c0\n\
     mov        r0,#0x75\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r8,r0\n\
     ldr        r0,DAT_080365bc\n\
     mov        r1,r8\n\
     str        r1,[r0,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
LAB_08036452:\n\
     ldrh       r1,[r4,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08036476\n\
     mov        r0,#0xb1\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_080365c0\n\
     mov        r0,#0x5c\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0x1\n\
     mov        r8,r2\n\
     ldr        r1,DAT_080365bc\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
LAB_08036476:\n\
     ldrh       r1,[r4,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803649a\n\
     mov        r0,#0x6e\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r1,DAT_080365c0\n\
     mov        r0,#0x3d\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,#0x1\n\
     mov        r8,r4\n\
     ldr        r1,DAT_080365bc\n\
     mov        r0,#0x3\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
LAB_0803649a:\n\
     ldr        r2,DAT_080365c0\n\
     cmp        r6,#0x0\n\
     bne        LAB_080364b0\n\
     ldr        r0,DAT_080365c4\n\
     ldr        r0,[r0,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080364b0\n\
     ldr        r1,DAT_080365c8\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
LAB_080364b0:\n\
     ldr        r0,DAT_080365cc\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     mov        r2,#0x0\n\
     mov        r9,r2\n\
     mov        r4,r8\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803659c\n\
     ldr        r4,DAT_080365c4\n\
     ldr        r0,DAT_080365bc\n\
     ldr        r5,[r0,#0x0]\n\
     lsl        r2,r5,#0x4\n\
     add        r3,r2,r4\n\
     ldrh       r6,[r3,#0xc]\n\
     cmp        r6,#0x0\n\
     bne        LAB_08036534\n\
     ldr        r1,[r3,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08036534\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8\n\
     add        r0,r2,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bgt        LAB_08036534\n\
     ldr        r0,DAT_080365d0\n\
     cmp        r1,r0\n\
     bgt        LAB_08036534\n\
     ldr        r1,DAT_080365d4\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r9,r0\n\
     ldr        r0,DAT_080365d8\n\
     str        r5,[r0,#0x0]\n\
     add        r0,r4,#0x4\n\
     add        r0,r2,r0\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r7,[r1,#0x4]\n\
     ldr        r0,DAT_080365dc\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r1,r4]\n\
     add        r0,#0x10\n\
     strh       r0,[r2,#0x2]\n\
     strh       r7,[r2,#0x4]\n\
     ldr        r1,DAT_080365e0\n\
     mov        r0,#0xf\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_080365e4\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,DAT_080365e8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x32\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,r9\n\
     strh       r0,[r3,#0xc]\n\
     mov        r0,#0x16\n\
     bl         fun_080016f0\n\
LAB_08036534:\n\
     mov        r1,r8\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803659c\n\
     ldr        r1,DAT_080365c4\n\
     ldr        r0,DAT_080365bc\n\
     ldr        r5,[r0,#0x0]\n\
     lsl        r2,r5,#0x4\n\
     add        r4,r2,r1\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803659c\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x8\n\
     add        r0,r2,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_0803659c\n\
     ldrh       r3,[r4,#0xc]\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803659c\n\
     ldr        r0,DAT_080365d8\n\
     str        r5,[r0,#0x0]\n\
     add        r1,#0x4\n\
     add        r1,r2,r1\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     strh       r0,[r2,#0x8]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r3,[r0,#0x0]\n\
     mov        r0,#0x32\n\
     str        r0,[r4,#0x0]\n\
     mov        r3,#0x1\n\
     strh       r3,[r4,#0xc]\n\
     ldr        r1,[r1,#0x0]\n\
     ldrh       r7,[r1,#0x4]\n\
     ldr        r0,DAT_080365dc\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r1,r4]\n\
     add        r0,#0x10\n\
     strh       r0,[r2,#0x2]\n\
     strh       r7,[r2,#0x4]\n\
     ldr        r1,DAT_080365e0\n\
     mov        r0,#0x1e\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_080365e4\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,DAT_080365ec\n\
     strh       r3,[r0,#0x0]\n\
     mov        r0,#0x17\n\
     bl         fun_080016f0\n\
LAB_0803659c:\n\
     mov        r0,r8\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803660a\n\
     mov        r1,r9\n\
     cmp        r1,#0x1\n\
     bne        LAB_080365f4\n\
     ldr        r1,DAT_080365f0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803660a\n\
.space 1\n\
.space 1\n\
DAT_080365b4:\n\
     .4byte 0x0200F45C\n\
DAT_080365b8:\n\
     .4byte 0x02005CE0\n\
DAT_080365bc:\n\
     .4byte 0x02010C64\n\
DAT_080365c0:\n\
     .4byte 0x0200F4F0\n\
DAT_080365c4:\n\
     .4byte 0x02010970\n\
DAT_080365c8:\n\
     .4byte 0x0000FFCE\n\
DAT_080365cc:\n\
     .4byte 0x02010C34\n\
DAT_080365d0:\n\
     .4byte 0x000003E7\n\
DAT_080365d4:\n\
     .4byte 0x02010C14\n\
DAT_080365d8:\n\
     .4byte 0x02010C80\n\
DAT_080365dc:\n\
     .4byte 0x02010BD4\n\
DAT_080365e0:\n\
     .4byte 0x0200F598\n\
DAT_080365e4:\n\
     .4byte 0x02010C1C\n\
DAT_080365e8:\n\
     .4byte 0x02010BD8\n\
DAT_080365ec:\n\
     .4byte 0x02010C60\n\
DAT_080365f0:\n\
     .4byte 0x0200F478\n\
LAB_080365f4:\n\
     ldr        r0,DAT_080367a4\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_080367a8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803660a\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
LAB_0803660a:\n\
     ldr        r1,DAT_080367ac\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0803661a\n\
     bl         fun_080369b8\n\
LAB_0803661a:\n\
     bl         fun_08036b10\n\
     bl         fun_0803c1a4\n\
     mov        r1,#0x8b\n\
     lsl        r1,r1,#0x1\n\
     ldr        r2,DAT_080367b0\n\
     mov        r0,#0x46\n\
     bl         fun_0803c1ec\n\
     bl         fun_0800467c\n\
     ldr        r6,DAT_080367b4\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0xa\n\
     bl         __umodsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803664a\n\
     ldr        r0,DAT_080367b8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803664a:\n\
     ldr        r0,DAT_080367b8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r2,[r1,#0x0]\n\
     cmp        r2,#0x2\n\
     bls        LAB_08036658\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08036658:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r6,#0x0]\n\
     ldr        r1,DAT_080367bc\n\
     ldr        r4,[r1,#0x0]\n\
     ldr        r5,DAT_080367c0\n\
     strh       r5,[r4,#0x2]\n\
     strh       r5,[r4,#0x4]\n\
     ldr        r7,DAT_080367c4\n\
     ldr        r1,[r7,#0x0]\n\
     strh       r5,[r1,#0x2]\n\
     strh       r5,[r1,#0x4]\n\
     ldr        r1,DAT_080367c8\n\
     mov        r8,r1\n\
     ldr        r1,[r1,#0x0]\n\
     strh       r5,[r1,#0x2]\n\
     strh       r5,[r1,#0x4]\n\
     ldr        r2,DAT_080367cc\n\
     mov        r9,r2\n\
     ldr        r1,[r2,#0x0]\n\
     strh       r5,[r1,#0x2]\n\
     strh       r5,[r1,#0x4]\n\
     mov        r1,#0x5a\n\
     bl         __umodsi3\n\
     cmp        r0,#0x14\n\
     bhi        LAB_08036696\n\
     mov        r0,#0x7a\n\
     strh       r0,[r4,#0x2]\n\
     mov        r0,#0x16\n\
     strh       r0,[r4,#0x4]\n\
LAB_08036696:\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x8c\n\
     bl         __umodsi3\n\
     cmp        r0,#0x1e\n\
     bhi        LAB_080366ac\n\
     ldr        r0,[r7,#0x0]\n\
     mov        r1,#0x4a\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x16\n\
     strh       r1,[r0,#0x4]\n\
LAB_080366ac:\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x96\n\
     bl         __umodsi3\n\
     cmp        r0,#0x28\n\
     bhi        LAB_080366c4\n\
     mov        r4,r8\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x4a\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x1e\n\
     strh       r1,[r0,#0x4]\n\
LAB_080366c4:\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x6e\n\
     bl         __umodsi3\n\
     cmp        r0,#0x1e\n\
     bhi        LAB_080366dc\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,#0x7a\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x1e\n\
     strh       r1,[r0,#0x4]\n\
LAB_080366dc:\n\
     ldr        r7,DAT_080367d0\n\
     ldr        r1,[r7,#0x0]\n\
     strh       r5,[r1,#0x2]\n\
     strh       r5,[r1,#0x4]\n\
     ldr        r0,DAT_080367d4\n\
     ldr        r4,[r0,#0x0]\n\
     strh       r5,[r4,#0x2]\n\
     strh       r5,[r4,#0x4]\n\
     mov        r2,#0x3\n\
     mov        r10,r2\n\
     mov        r0,r10\n\
     strh       r0,[r4,#0x6]\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x3c\n\
     bl         __umodsi3\n\
     cmp        r0,#0x1e\n\
     bhi        LAB_0803670a\n\
     mov        r0,#0x88\n\
     strh       r0,[r4,#0x2]\n\
     mov        r0,#0x9\n\
     strh       r0,[r4,#0x4]\n\
LAB_0803670a:\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x64\n\
     bl         __umodsi3\n\
     cmp        r0,#0x43\n\
     bhi        LAB_08036720\n\
     ldr        r0,[r7,#0x0]\n\
     mov        r1,#0x58\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x9\n\
     strh       r1,[r0,#0x4]\n\
LAB_08036720:\n\
     ldr        r1,DAT_080367d8\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08036732\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_080367a8\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
LAB_08036732:\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08036812\n\
     ldr        r0,DAT_080367dc\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r5,[r0,#0x2]\n\
     strh       r5,[r0,#0x4]\n\
     ldr        r0,DAT_080367e0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080367f4\n\
     ldr        r5,DAT_080367e4\n\
     ldr        r4,DAT_080367e8\n\
     mov        r8,r4\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x4\n\
     add        r4,r5,#0x4\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     mov        r9,r1\n\
     ldrh       r7,[r0,#0x4]\n\
     bl         fun_08003b00\n\
     ldr        r0,DAT_080367ec\n\
     ldr        r1,DAT_080367f0\n\
     ldr        r1,[r1,#0xc]\n\
     str        r1,[r0,#0x0]\n\
     mov        r6,#0xf\n\
     strh       r6,[r0,#0x4]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     bl         fun_08003998\n\
     mov        r2,r8\n\
     ldr        r1,[r2,#0x0]\n\
     lsl        r1,r1,#0x4\n\
     add        r4,r1,r4\n\
     str        r0,[r4,#0x0]\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x2]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r7,[r0,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r0,#0x1e\n\
     strh       r0,[r2,#0x8]\n\
     add        r0,r1,r5\n\
     str        r6,[r0,#0x0]\n\
     add        r5,#0x8\n\
     add        r1,r1,r5\n\
     mov        r4,r10\n\
     str        r4,[r1,#0x0]\n\
     b          LAB_08036812\n\
.space 1\n\
.space 1\n\
DAT_080367a4:\n\
     .4byte 0x02010C70\n\
DAT_080367a8:\n\
     .4byte 0x02010C60\n\
DAT_080367ac:\n\
     .4byte 0x02010C74\n\
DAT_080367b0:\n\
     .4byte 0x00006B7A\n\
DAT_080367b4:\n\
     .4byte 0x0200F510\n\
DAT_080367b8:\n\
     .4byte 0x02010C18\n\
DAT_080367bc:\n\
     .4byte 0x02010C7C\n\
DAT_080367c0:\n\
     .4byte 0x0000FFE2\n\
DAT_080367c4:\n\
     .4byte 0x02010C68\n\
DAT_080367c8:\n\
     .4byte 0x02010C6C\n\
DAT_080367cc:\n\
     .4byte 0x02010C84\n\
DAT_080367d0:\n\
     .4byte 0x02010C78\n\
DAT_080367d4:\n\
     .4byte 0x02010C10\n\
DAT_080367d8:\n\
     .4byte 0x0200F598\n\
DAT_080367dc:\n\
     .4byte 0x02010BD4\n\
DAT_080367e0:\n\
     .4byte 0x02010C1C\n\
DAT_080367e4:\n\
     .4byte 0x02010970\n\
DAT_080367e8:\n\
     .4byte 0x02010C80\n\
DAT_080367ec:\n\
     .4byte 0x02010C20\n\
DAT_080367f0:\n\
     .4byte 0x02010BE0\n\
LAB_080367f4:\n\
     ldr        r2,DAT_080368e8\n\
     ldr        r0,DAT_080368ec\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x4\n\
     add        r3,r0,r2\n\
     mov        r1,#0x1e\n\
     str        r1,[r3,#0x0]\n\
     add        r2,#0x4\n\
     add        r0,r0,r2\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r1,#0x2\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x8]\n\
LAB_08036812:\n\
     ldr        r5,DAT_080368f0\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0x14\n\
     bl         __umodsi3\n\
     ldr        r4,DAT_080368f4\n\
     cmp        r0,#0x1\n\
     bne        LAB_08036828\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r4,#0x0]\n\
LAB_08036828:\n\
     add        r1,r4,#0x0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x3\n\
     ble        LAB_08036834\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_08036834:\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x52\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x5a\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x62\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x6a\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     ldr        r1,[r4,#0x0]\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xa4\n\
     lsl        r2,r2,#0xf\n\
     add        r1,r1,r2\n\
     lsr        r1,r1,#0x10\n\
     mov        r0,#0x1\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0x14\n\
     bl         __umodsi3\n\
     cmp        r0,#0x1\n\
     bne        LAB_08036884\n\
     ldr        r1,DAT_080368f8\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_08036884:\n\
     ldr        r4,DAT_080368f8\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08036890\n\
     mov        r0,#0x3\n\
     str        r0,[r4,#0x0]\n\
LAB_08036890:\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x82\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x8a\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x92\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0x9a\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     ldr        r1,[r4,#0x0]\n\
     lsl        r1,r1,#0x13\n\
     mov        r4,#0x82\n\
     lsl        r4,r4,#0x10\n\
     add        r1,r1,r4\n\
     lsr        r1,r1,#0x10\n\
     mov        r0,#0x1\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0xb\n\
     bl         __umodsi3\n\
     add        r2,r0,#0x0\n\
     cmp        r2,#0x1\n\
     bne        LAB_08036904\n\
     ldr        r1,DAT_080368fc\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08036900\n\
     str        r2,[r1,#0x0]\n\
     b          LAB_08036904\n\
.space 1\n\
.space 1\n\
DAT_080368e8:\n\
     .4byte 0x02010970\n\
DAT_080368ec:\n\
     .4byte 0x02010C80\n\
DAT_080368f0:\n\
     .4byte 0x0200F510\n\
DAT_080368f4:\n\
     .4byte 0x0200F4FC\n\
DAT_080368f8:\n\
     .4byte 0x0200F4C0\n\
DAT_080368fc:\n\
     .4byte 0x0200F468\n\
LAB_08036900:\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_08036904:\n\
     ldr        r0,DAT_08036938\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803693c\n\
     mov        r0,#0x1\n\
     mov        r1,#0xd0\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0xd8\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0x1\n\
     mov        r1,#0xe0\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0xe8\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     b          LAB_08036964\n\
.space 1\n\
.space 1\n\
DAT_08036938:\n\
     .4byte 0x0200F468\n\
LAB_0803693c:\n\
     mov        r0,#0xe6\n\
     mov        r1,#0xd0\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0x1\n\
     mov        r1,#0xd8\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0xe6\n\
     mov        r1,#0xe0\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
     mov        r0,#0x1\n\
     mov        r1,#0xe8\n\
     mov        r2,#0x27\n\
     bl         fun_08036b88\n\
LAB_08036964:\n\
     ldr        r2,DAT_080369a0\n\
     ldr        r0,DAT_080369a4\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_080369a8\n\
     ldr        r0,DAT_080369ac\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_080369b0\n\
     ldr        r0,DAT_080369b4\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_080032a0\n\
     mov        r0,#0x0\n\
     add        sp,#0xc8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080369a0:\n\
     .4byte 0x0861FCEC\n\
DAT_080369a4:\n\
     .4byte 0x0200F478\n\
DAT_080369a8:\n\
     .4byte 0x0861FCF8\n\
DAT_080369ac:\n\
     .4byte 0x02010C30\n\
DAT_080369b0:\n\
     .4byte 0x0861FD08\n\
DAT_080369b4:\n\
     .4byte 0x02010C3C\n\
    ");
}
__attribute__((naked)) void fun_080369b8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r4,DAT_080369f8\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080369cc\n\
     b          LAB_08036af2\n\
LAB_080369cc:\n\
     ldr        r5,DAT_080369fc\n\
     ldr        r3,[r5,#0x0]\n\
     ldr        r0,DAT_08036a00\n\
     ldrh       r1,[r3,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08036a10\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
     ldr        r2,DAT_08036a04\n\
     ldr        r1,DAT_08036a08\n\
     ldr        r0,DAT_08036a0c\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,r0,r1\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_08036af2\n\
DAT_080369f8:\n\
     .4byte 0x02010BD0\n\
DAT_080369fc:\n\
     .4byte 0x02010C38\n\
DAT_08036a00:\n\
     .4byte 0x00004001\n\
DAT_08036a04:\n\
     .4byte 0x02010C3C\n\
DAT_08036a08:\n\
     .4byte 0x0200F478\n\
DAT_08036a0c:\n\
     .4byte 0x02010C30\n\
LAB_08036a10:\n\
     ldr        r1,DAT_08036a5c\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r3,r2]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     ldrsh      r2,[r3,r0]\n\
     mov        r0,#0x4\n\
     and        r0,r2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r6,r0,#0x1f\n\
     mov        r0,#0x8\n\
     and        r0,r2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r0,r0,#0x1f\n\
     mov        r8,r0\n\
     mov        r0,#0x3\n\
     and        r2,r0\n\
     ldr        r0,DAT_08036a60\n\
     lsl        r1,r2,#0x2\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r10,r0\n\
     ldr        r0,DAT_08036a64\n\
     add        r1,r1,r0\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r9,r1\n\
     mov        r1,#0x4\n\
     ldrsh      r7,[r3,r1]\n\
     add        r0,r3,#0x6\n\
     str        r0,[r5,#0x0]\n\
     cmp        r7,#0x0\n\
     bne        LAB_08036a6c\n\
     ldr        r1,DAT_08036a68\n\
     lsl        r0,r2,#0x4\n\
     add        r0,r0,r1\n\
     str        r7,[r0,#0x0]\n\
     b          LAB_08036af2\n\
.space 1\n\
.space 1\n\
DAT_08036a5c:\n\
     .4byte 0x02010C74\n\
DAT_08036a60:\n\
     .4byte 0x02010C00\n\
DAT_08036a64:\n\
     .4byte 0x02010C50\n\
DAT_08036a68:\n\
     .4byte 0x02010970\n\
LAB_08036a6c:\n\
     ldr        r0,DAT_08036b00\n\
     lsl        r1,r2,#0x4\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     add        r5,r1,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_08036aea\n\
     cmp        r6,#0x0\n\
     bne        LAB_08036a8a\n\
     mov        r2,r8\n\
     cmp        r2,#0x0\n\
     bne        LAB_08036a8a\n\
     mov        r0,#0xc\n\
     bl         fun_080016f0\n\
LAB_08036a8a:\n\
     bl         fun_08036bc4\n\
     add        r4,r0,#0x0\n\
     cmp        r6,#0x0\n\
     beq        LAB_08036a96\n\
     mov        r4,#0x4\n\
LAB_08036a96:\n\
     mov        r3,r8\n\
     cmp        r3,#0x0\n\
     beq        LAB_08036a9e\n\
     mov        r4,#0x5\n\
LAB_08036a9e:\n\
     ldr        r2,DAT_08036b04\n\
     ldr        r1,DAT_08036b08\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0xf\n\
     strh       r0,[r2,#0x4]\n\
     mov        r0,#0x2\n\
     strh       r0,[r2,#0x6]\n\
     cmp        r6,#0x0\n\
     beq        LAB_08036aba\n\
     mov        r0,#0x3\n\
     strh       r0,[r2,#0x6]\n\
LAB_08036aba:\n\
     add        r0,r2,#0x0\n\
     bl         fun_08003998\n\
     ldr        r2,DAT_08036b00\n\
     add        r1,r2,#0x4\n\
     add        r1,r5,r1\n\
     str        r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     strh       r3,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,r9\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,#0x1\n\
     strh       r3,[r0,#0x6]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r3,[r0,#0x10]\n\
     add        r1,r5,r2\n\
     str        r7,[r1,#0x0]\n\
     add        r2,#0x8\n\
     add        r2,r5,r2\n\
     str        r4,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0xc]\n\
LAB_08036aea:\n\
     ldr        r1,DAT_08036b0c\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08036af2:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08036b00:\n\
     .4byte 0x02010970\n\
DAT_08036b04:\n\
     .4byte 0x02010C20\n\
DAT_08036b08:\n\
     .4byte 0x02010BE0\n\
DAT_08036b0c:\n\
     .4byte 0x02010C40\n\
    ");
}
__attribute__((naked)) void fun_08036b10()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_08036b54\n\
     add        r7,r4,#0x0\n\
     ldr        r6,DAT_08036b58\n\
LAB_08036b1a:\n\
     lsl        r2,r5,#0x4\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08036b44\n\
     sub        r1,r0,#0x1\n\
     str        r1,[r4,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08036b44\n\
     add        r0,r7,#0x4\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x8]\n\
     cmp        r0,#0x2\n\
     bgt        LAB_08036b3e\n\
     ldrh       r0,[r6,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
LAB_08036b3e:\n\
     ldr        r0,[r2,#0x0]\n\
     bl         fun_08003b00\n\
LAB_08036b44:\n\
     add        r4,#0x10\n\
     add        r5,#0x1\n\
     cmp        r5,#0x3\n\
     ble        LAB_08036b1a\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08036b54:\n\
     .4byte 0x02010970\n\
DAT_08036b58:\n\
     .4byte 0x02010BD8\n\
    ");
}
__attribute__((naked)) void fun_08036b5c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08036b84\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bhi        LAB_08036b78\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08036b84\n\
     add        r0,r0,r1\n\
     mov        r1,#0x5\n\
     strb       r1,[r0,#0x0]\n\
LAB_08036b78:\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08036b84:\n\
     .4byte 0x00000E8C\n\
    ");
}
__attribute__((naked)) void fun_08036b88()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     lsl        r3,r2,#0x4\n\
     sub        r3,r3,r2\n\
     lsl        r3,r3,#0x4\n\
     add        r3,r3,r1\n\
     mov        r2,#0xc0\n\
     lsl        r2,r2,#0x13\n\
     add        r1,r3,r2\n\
     strb       r0,[r1,#0x0]\n\
     strb       r0,[r1,#0x1]\n\
     strb       r0,[r1,#0x2]\n\
     strb       r0,[r1,#0x3]\n\
     add        r2,#0xf0\n\
     add        r1,r3,r2\n\
     strb       r0,[r1,#0x0]\n\
     strb       r0,[r1,#0x1]\n\
     strb       r0,[r1,#0x2]\n\
     strb       r0,[r1,#0x3]\n\
     add        r2,#0xf0\n\
     add        r1,r3,r2\n\
     strb       r0,[r1,#0x0]\n\
     strb       r0,[r1,#0x1]\n\
     strb       r0,[r1,#0x2]\n\
     strb       r0,[r1,#0x3]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08036bc4()
{
    asm("\n\
     ldr        r2,DAT_08036be0\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r1,r0,#0x2\n\
     str        r1,[r2,#0x0]\n\
     ldr        r1,DAT_08036be4\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r0,r1\n\
     bne        LAB_08036bda\n\
     ldr        r0,DAT_08036be8\n\
     str        r0,[r2,#0x0]\n\
LAB_08036bda:\n\
     add        r0,r3,#0x0\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08036be0:\n\
     .4byte 0x0200F47C\n\
DAT_08036be4:\n\
     .4byte 0x00004001\n\
DAT_08036be8:\n\
     .4byte 0x087C7E7C\n\
    ");
}
__attribute__((naked)) void fun_08036bec()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_08036c34\n\
     ldr        r0,DAT_08036c38\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08036c3c\n\
     str        r0,[r1,#0x4]\n\
     ldr        r1,DAT_08036c40\n\
     str        r1,[r0,#0x0]\n\
     ldr        r3,DAT_08036c44\n\
     str        r3,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     add        r1,#0x48\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bcs        LAB_08036c2c\n\
     add        r6,r3,#0x0\n\
     ldr        r5,DAT_08036c48\n\
     mov        r3,#0x0\n\
     add        r4,r0,#0x0\n\
LAB_08036c14:\n\
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
     bcc        LAB_08036c14\n\
LAB_08036c2c:\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08036c34:\n\
     .4byte 0x02010CA0\n\
DAT_08036c38:\n\
     .4byte 0x0863A204\n\
DAT_08036c3c:\n\
     .4byte 0x02010CB0\n\
DAT_08036c40:\n\
     .4byte 0x0863A1A0\n\
DAT_08036c44:\n\
     .4byte 0x02010C90\n\
DAT_08036c48:\n\
     .4byte 0x08639F50\n\
    ");
}
__attribute__((naked)) void fun_08036c4c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r6,#0x0\n\
     ldr        r7,DAT_08036cf4\n\
     mov        r0,#0x20\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     add        r0,r0,r7\n\
     mov        r9,r0\n\
     ldr        r3,DAT_08036cf8\n\
     mov        r10,r3\n\
     ldr        r0,DAT_08036cfc\n\
     mov        r8,r0\n\
LAB_08036c6a:\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     lsl        r4,r6,#0x5\n\
     cmp        r0,#0x0\n\
     bne        LAB_08036c84\n\
     add        r0,r4,r7\n\
     mov        r1,#0x2c\n\
     mul        r1,r6\n\
     ldr        r2,DAT_08036d00\n\
     add        r1,r1,r2\n\
     bl         fun_080004ac\n\
LAB_08036c84:\n\
     add        r0,r4,r7\n\
     mov        r1,#0x2c\n\
     mul        r1,r6\n\
     ldr        r2,DAT_08036d00\n\
     add        r1,r1,r2\n\
     lsl        r4,r6,#0x1\n\
     add        r2,r4,r6\n\
     lsl        r2,r2,#0x2\n\
     ldr        r3,DAT_08036d04\n\
     add        r2,r2,r3\n\
     bl         fun_0803c9fc\n\
     add        r5,r6,#0x1\n\
     lsl        r2,r5,#0x5\n\
     ldr        r3,DAT_08036d08\n\
     add        r1,r2,r3\n\
     ldr        r0,PTR_DAT_08036d0c\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     add        r2,r9\n\
     ldr        r0,PTR_DAT_08036d10\n\
     add        r4,r4,r0\n\
     ldrh       r0,[r4,#0x0]\n\
     strb       r0,[r2,#0x18]\n\
     strh       r6,[r2,#0x16]\n\
     ldr        r0,PTR_DAT_08036d14\n\
     lsl        r1,r6,#0x2\n\
     add        r1,r1,r0\n\
     ldrh       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r3,PTR_DAT_08036d18\n\
     ldrh       r1,[r1,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x6]\n\
     lsl        r5,r5,#0x10\n\
     lsr        r6,r5,#0x10\n\
     cmp        r6,#0x12\n\
     bls        LAB_08036c6a\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08036cf4:\n\
     .4byte 0x0200DDB0\n\
DAT_08036cf8:\n\
     .4byte 0x0863A0A8\n\
DAT_08036cfc:\n\
     .4byte 0x0863A140\n\
DAT_08036d00:\n\
     .4byte 0x087D5668\n\
DAT_08036d04:\n\
     .4byte 0x02010CD0\n\
DAT_08036d08:\n\
     .4byte 0x0200DDAC\n\
PTR_DAT_08036d0c:\n\
     .4byte       DAT_087d5e9c\n\
PTR_DAT_08036d10:\n\
     .4byte       DAT_087d5df8\n\
PTR_DAT_08036d14:\n\
     .4byte       DAT_087d5e3a\n\
PTR_DAT_08036d18:\n\
     .4byte       DAT_0863a0f4\n\
    ");
}
__attribute__((naked)) void fun_08036d1c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_08036d88\n\
     bl         fun_08001170\n\
     mov        r0,sp\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_08036d8c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08036d90\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r4,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08036d94\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0xba\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08036d98\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_08036d9c\n\
     bl         fun_08039e64\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_08036dc0\n\
     ldr        r0,DAT_08036da0\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r2,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_08036da8\n\
     ldr        r1,DAT_08036da4\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
     b          LAB_08036dac\n\
.space 1\n\
.space 1\n\
DAT_08036d88:\n\
     .4byte 0x08037009\n\
DAT_08036d8c:\n\
     .4byte 0x040000D4\n\
DAT_08036d90:\n\
     .4byte 0x8100C000\n\
DAT_08036d94:\n\
     .4byte 0x81000200\n\
DAT_08036d98:\n\
     .4byte 0x084496C8\n\
DAT_08036d9c:\n\
     .4byte 0x02010CB0\n\
DAT_08036da0:\n\
     .4byte 0x020025F8\n\
DAT_08036da4:\n\
     .4byte 0x02010DC0\n\
LAB_08036da8:\n\
     ldr        r0,DAT_08036df8\n\
     strb       r4,[r0,#0x0]\n\
LAB_08036dac:\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r3,DAT_08036dfc\n\
     add        r0,r0,r3\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,DAT_08036e00\n\
     and        r1,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_08036dc0:\n\
     ldr        r0,DAT_08036e04\n\
     ldr        r1,DAT_08036e08\n\
     bl         fun_080004ac\n\
     ldr        r4,DAT_08036e0c\n\
     ldr        r1,DAT_08036e10\n\
     ldr        r2,DAT_08036df8\n\
     ldrb       r5,[r2,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r3,DAT_08036e14\n\
     ldrb       r5,[r2,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r1,#0x2\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x0]\n\
     ldrb       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08036e1c\n\
     ldr        r1,DAT_08036e18\n\
     mov        r0,#0x78\n\
     bl         fun_0803a140\n\
     b          LAB_08036e24\n\
.space 1\n\
.space 1\n\
DAT_08036df8:\n\
     .4byte 0x02010DC0\n\
DAT_08036dfc:\n\
     .4byte 0x00000E84\n\
DAT_08036e00:\n\
     .4byte 0xFFFEFFFF\n\
DAT_08036e04:\n\
     .4byte 0x0200DD90\n\
DAT_08036e08:\n\
     .4byte 0x084736F4\n\
DAT_08036e0c:\n\
     .4byte 0x0200E030\n\
DAT_08036e10:\n\
     .4byte 0x087D5E1E\n\
DAT_08036e14:\n\
     .4byte 0x0200DD70\n\
DAT_08036e18:\n\
     .4byte 0x0000036F\n\
LAB_08036e1c:\n\
     ldrh       r0,[r4,#0x0]\n\
     ldrh       r1,[r3,#0x0]\n\
     bl         fun_0803a140\n\
LAB_08036e24:\n\
     ldr        r4,DAT_08036e7c\n\
     ldr        r0,DAT_08036e80\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     ldr        r0,DAT_08036e84\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x6]\n\
     ldr        r1,DAT_08036e88\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803c830\n\
     ldr        r0,DAT_08036e8c\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r4,#0x1c]\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
     bl         fun_08036c4c\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x14\n\
     bl         fun_0803aa14\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08036e90\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     bl         fun_0800117c\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     ldr        r1,DAT_08036e94\n\
     ldr        r2,DAT_08036e98\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08036e7c:\n\
     .4byte 0x0200DD90\n\
DAT_08036e80:\n\
     .4byte 0x0200E030\n\
DAT_08036e84:\n\
     .4byte 0x0200DD70\n\
DAT_08036e88:\n\
     .4byte 0x084736F4\n\
DAT_08036e8c:\n\
     .4byte 0x0877F91C\n\
DAT_08036e90:\n\
     .4byte 0x00000DD8\n\
DAT_08036e94:\n\
     .4byte 0x0000017F\n\
DAT_08036e98:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08036e9c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     bl         fun_0803ab30\n\
     bl         fun_0803a00c\n\
     ldr        r2,PTR_DAT_08036edc\n\
     ldr        r1,PTR_DAT_08036ee0\n\
     ldrh       r0,[r1,#0x4]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_08036ee4\n\
     ldrh       r0,[r1,#0x6]\n\
     strh       r0,[r2,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,PTR_DAT_08036ee8\n\
     ldrh       r2,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08036eca\n\
     b          switchD_08036eda_caseD_0\n\
LAB_08036eca:\n\
     strh       r0,[r1,#0x0]\n\
     cmp        r0,#0xa\n\
     bls        LAB_08036ed2\n\
     b          switchD_08036eda_caseD_0\n\
LAB_08036ed2:\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_switchdataD_08036ef0_08036eec\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
PTR_DAT_08036edc:\n\
     .4byte       DAT_0200e030\n\
PTR_DAT_08036ee0:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_08036ee4:\n\
     .4byte       DAT_0200dd70\n\
PTR_DAT_08036ee8:\n\
     .4byte       DAT_02010cc0\n\
PTR_switchdataD_08036ef0_08036eec:\n\
     .4byte       switchD_08036eda_switchdataD_08036ef0\n\
switchD_08036eda_switchdataD_08036ef0:\n\
     .4byte       switchD_08036eda_caseD_0\n\
     .4byte       switchD_08036eda_caseD_0\n\
     .4byte       switchD_08036eda_caseD_2\n\
     .4byte       switchD_08036eda_caseD_3\n\
     .4byte       switchD_08036eda_caseD_4\n\
     .4byte       switchD_08036eda_caseD_5\n\
     .4byte       switchD_08036eda_caseD_6\n\
     .4byte       switchD_08036eda_caseD_7\n\
     .4byte       switchD_08036eda_caseD_8\n\
     .4byte       switchD_08036eda_caseD_0\n\
     .4byte       switchD_08036eda_caseD_a\n\
switchD_08036eda_caseD_a:\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_08036f5c\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x9\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        switchD_08036eda_caseD_0\n\
     ldr        r0,DAT_08036f60\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08036fc0\n\
     ldr        r1,DAT_08036f64\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08036f68\n\
     ldr        r2,DAT_08036f6c\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     orr        r1,r4\n\
     str        r1,[r0,#0x0]\n\
     b          switchD_08036eda_caseD_0\n\
.space 1\n\
.space 1\n\
DAT_08036f5c:\n\
     .4byte 0x00000E84\n\
DAT_08036f60:\n\
     .4byte 0x02002530\n\
DAT_08036f64:\n\
     .4byte 0x02010DC0\n\
DAT_08036f68:\n\
     .4byte 0x020025E8\n\
DAT_08036f6c:\n\
     .4byte 0x0000029B\n\
switchD_08036eda_caseD_2:\n\
     ldr        r1,DAT_08036f78\n\
     mov        r0,#0x4\n\
     strb       r0,[r1,#0x0]\n\
     b          switchD_08036eda_caseD_0\n\
DAT_08036f78:\n\
     .4byte 0x02010DC0\n\
switchD_08036eda_caseD_3:\n\
     ldr        r1,DAT_08036f84\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     b          switchD_08036eda_caseD_0\n\
DAT_08036f84:\n\
     .4byte 0x02010DC0\n\
switchD_08036eda_caseD_4:\n\
     ldr        r1,DAT_08036f90\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     b          switchD_08036eda_caseD_0\n\
DAT_08036f90:\n\
     .4byte 0x02010DC0\n\
switchD_08036eda_caseD_5:\n\
     ldr        r1,DAT_08036f9c\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     b          switchD_08036eda_caseD_0\n\
DAT_08036f9c:\n\
     .4byte 0x02010DC0\n\
switchD_08036eda_caseD_8:\n\
     ldr        r1,DAT_08036fa8\n\
     mov        r0,#0x5\n\
     strb       r0,[r1,#0x0]\n\
     b          switchD_08036eda_caseD_0\n\
DAT_08036fa8:\n\
     .4byte 0x02010DC0\n\
switchD_08036eda_caseD_6:\n\
     ldr        r1,DAT_08036fb4\n\
     mov        r0,#0x6\n\
     strb       r0,[r1,#0x0]\n\
     b          switchD_08036eda_caseD_0\n\
DAT_08036fb4:\n\
     .4byte 0x02010DC0\n\
switchD_08036eda_caseD_7:\n\
     ldr        r0,DAT_08036fc8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08036fcc\n\
LAB_08036fc0:\n\
     bl         fun_080010d8\n\
     b          switchD_08036eda_caseD_0\n\
.space 1\n\
.space 1\n\
DAT_08036fc8:\n\
     .4byte 0x02002530\n\
LAB_08036fcc:\n\
     ldr        r1,DAT_08036fe4\n\
     ldr        r2,DAT_08036fe8\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001070\n\
switchD_08036eda_caseD_0:\n\
     mov        r0,#0x0\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08036fe4:\n\
     .4byte 0x020025E8\n\
DAT_08036fe8:\n\
     .4byte 0x0000029D\n\
    ");
}
__attribute__((naked)) void fun_08036fec()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803abbc\n\
     bl         fun_0803a980\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08037000()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08037004()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08037008()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803a9ec\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
