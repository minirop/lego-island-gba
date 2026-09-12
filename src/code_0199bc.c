__attribute__((naked)) void fun_080199bc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r5,#0x0\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r4,DAT_08019a4c\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08019a50\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r5,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r6,#0xa0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08019a54\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x13\n\
     mov        r8,r0\n\
     ldr        r1,DAT_08019a58\n\
     add        r0,r1,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08019a5c\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_08019a60\n\
     str        r0,[r4,#0x0]\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08019a64\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_08019a68\n\
     ldr        r1,DAT_08019a6c\n\
     bl         fun_0803d070\n\
     ldr        r1,DAT_08019a70\n\
     add        r0,r1,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08019a74\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08019a78\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_08019a7c\n\
     strh       r5,[r0,#0x0]\n\
     bl         fun_08019a90\n\
     bl         fun_0801968c\n\
     ldr        r0,DAT_08019a80\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08019a4c:\n\
     .4byte 0x040000D4\n\
DAT_08019a50:\n\
     .4byte 0x8100C000\n\
DAT_08019a54:\n\
     .4byte 0x81000200\n\
DAT_08019a58:\n\
     .4byte 0x00001F44\n\
DAT_08019a5c:\n\
     .4byte 0x0848F640\n\
DAT_08019a60:\n\
     .4byte 0x0848F840\n\
DAT_08019a64:\n\
     .4byte 0x84000080\n\
DAT_08019a68:\n\
     .4byte 0x0848FA40\n\
DAT_08019a6c:\n\
     .4byte 0x0600A000\n\
DAT_08019a70:\n\
     .4byte 0x00001F54\n\
DAT_08019a74:\n\
     .4byte 0x0400000C\n\
DAT_08019a78:\n\
     .4byte 0x0200E4D0\n\
DAT_08019a7c:\n\
     .4byte 0x0200E5B4\n\
DAT_08019a80:\n\
     .4byte 0x0200E5B0\n\
    ");
}
__attribute__((naked)) void fun_08019a84()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08019a90()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r5,#0x0\n\
     mov        r4,#0x0\n\
     ldr        r6,DAT_08019ad4\n\
LAB_08019a98:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r6\n\
     ldr        r1,DAT_08019ad8\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019ac4\n\
     ldr        r0,DAT_08019adc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r4,r0\n\
     bne        LAB_08019ab8\n\
     ldr        r0,DAT_08019ae0\n\
     strh       r5,[r0,#0x0]\n\
LAB_08019ab8:\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r6\n\
     strh       r4,[r0,#0x0]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
LAB_08019ac4:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x45\n\
     bls        LAB_08019a98\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08019ad4:\n\
     .4byte 0x0200E4E0\n\
DAT_08019ad8:\n\
     .4byte 0x0000FFFF\n\
DAT_08019adc:\n\
     .4byte 0x02002608\n\
DAT_08019ae0:\n\
     .4byte 0x0200E5B4\n\
    ");
}
