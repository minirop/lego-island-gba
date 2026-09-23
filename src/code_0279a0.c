__attribute__((naked)) void fun_080279a0()
{
    asm("\n\
     ldr        r2,DAT_080279b8\n\
     ldr        r0,DAT_080279bc\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_080279c0\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_080279c4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_080279b8:\n\
     .word 0x0200F920\n\
DAT_080279bc:\n\
     .word 0x0857FAD8\n\
DAT_080279c0:\n\
     .word 0x0200F930\n\
DAT_080279c4:\n\
     .word 0x0857FA74\n\
    ");
}
__attribute__((naked)) void fun_080279c8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     bl         fun_0800117c\n\
     mov        r0,#0x0\n\
     bl         fun_08002ccc\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08027b0c\n\
     bl         fun_08039e64\n\
     mov        r0,#0x0\n\
     mov        r1,#0x3\n\
     bl         fun_08005a38\n\
     mov        r0,#0x1\n\
     mov        r1,#0x2\n\
     bl         fun_08005a38\n\
     mov        r0,#0x2\n\
     mov        r1,#0x1\n\
     bl         fun_08005a38\n\
     mov        r0,#0x3\n\
     mov        r1,#0x0\n\
     bl         fun_08005a38\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08027b10\n\
     bl         fun_080045f0\n\
     bl         fun_08027d14\n\
     ldr        r1,PTR_DAT_08027b14\n\
     mov        r0,#0x1f\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08027b18\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08027b1c\n\
     mov        r1,#0x40\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08027b20\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08027b24\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08027b28\n\
     ldr        r0,PTR_DAT_08027b2c\n\
     str        r0,[r1,#0x0]\n\
     mov        r5,#0x0\n\
     ldr        r6,DAT_08027b30\n\
LAB_08027a3e:\n\
     ldr        r0,PTR_DAT_08027b28\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r4,r5,#0x2\n\
     add        r4,r4,r0\n\
     ldr        r0,PTR_DAT_08027b18\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     asr        r0,r0,#0x18\n\
     mul        r0,r5\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     add        r0,r0,r6\n\
     ldrb       r0,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08027b14\n\
     ldrb       r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x18\n\
     asr        r1,r1,#0x18\n\
     lsl        r1,r1,#0x2\n\
     bl         __divsi3\n\
     str        r0,[r4,#0x0]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0xfe\n\
     bls        LAB_08027a3e\n\
     ldr        r0,DAT_08027b34\n\
     bl         fun_08001170\n\
     ldr        r1,DAT_08027b38\n\
     ldr        r0,DAT_08027b3c\n\
     str        r0,[r1,#0xc]\n\
     ldr        r2,DAT_08027b40\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r1,#0x2\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,DAT_08027b44\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r1,#0x10\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     bl         fun_080285ac\n\
     ldr        r1,DAT_08027b48\n\
     mov        r0,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r1,DAT_08027b4c\n\
     ldr        r0,DAT_08027b50\n\
     str        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08027b54\n\
     mov        r1,#0x86\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r4,r1\n\
     mov        r5,#0x0\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r2,DAT_08027b58\n\
     add        r0,r4,r2\n\
     str        r5,[r0,#0x0]\n\
     sub        r1,#0x2\n\
     add        r0,r4,r1\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r2,DAT_08027b5c\n\
     mov        r0,#0x0\n\
     mov        r1,#0x1e\n\
     bl         fun_0803c1ec\n\
     ldr        r0,[r4,#0x18]\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,[r4,#0x1c]\n\
     str        r1,[r4,#0x8]\n\
     lsl        r0,r0,#0x8\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x8\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803a140\n\
     bl         fun_0803a9dc\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     strh       r5,[r0,#0x0]\n\
     bl         fun_08002bcc\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     mov        r0,#0x1\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x8\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     mov        r3,#0x1\n\
     bl         fun_080048b4\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08027b0c:\n\
     .word 0x0200F930\n\
DAT_08027b10:\n\
     .word 0x0858E4EC\n\
PTR_DAT_08027b14:\n\
     .word       DAT_020101bc\n\
PTR_DAT_08027b18:\n\
     .word       DAT_0200f948\n\
PTR_DAT_08027b1c:\n\
     .word       DAT_0200f94c\n\
PTR_DAT_08027b20:\n\
     .word       DAT_03003448\n\
PTR_DAT_08027b24:\n\
     .word       DAT_0300344c\n\
PTR_DAT_08027b28:\n\
     .word       DAT_020101c0\n\
PTR_DAT_08027b2c:\n\
     .word       DAT_03002440\n\
DAT_08027b30:\n\
     .word 0x08756BC4\n\
DAT_08027b34:\n\
     .word 0x080285DD\n\
DAT_08027b38:\n\
     .word 0x020057F0\n\
DAT_08027b3c:\n\
     .word 0x0803BCCD\n\
DAT_08027b40:\n\
     .word 0x04000200\n\
DAT_08027b44:\n\
     .word 0x04000004\n\
DAT_08027b48:\n\
     .word 0x0000FFFF\n\
DAT_08027b4c:\n\
     .word 0x0200F940\n\
DAT_08027b50:\n\
     .word 0x00005460\n\
DAT_08027b54:\n\
     .word 0x0200F950\n\
DAT_08027b58:\n\
     .word 0x00000864\n\
DAT_08027b5c:\n\
     .word 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08027b60()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_08027c28\n\
     mov        r0,#0x86\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r4,r0\n\
     mov        r0,#0x1\n\
     ldrh       r2,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x18\n\
     bl         fun_08028ba8\n\
     ldr        r1,[r4,#0x18]\n\
     str        r1,[r4,#0x0]\n\
     ldr        r0,[r4,#0x1c]\n\
     str        r0,[r4,#0x8]\n\
     ldr        r2,DAT_08027c2c\n\
     mov        r0,#0xb4\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r2,#0x0]\n\
     ldr        r3,DAT_08027c30\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x3\n\
     str        r0,[r3,#0x0]\n\
     ldr        r0,DAT_08027c34\n\
     cmp        r1,r0\n\
     bgt        LAB_08027b9c\n\
     add        r0,#0x1\n\
     str        r0,[r4,#0x0]\n\
LAB_08027b9c:\n\
     ldr        r1,[r4,#0x8]\n\
     ldr        r0,DAT_08027c38\n\
     cmp        r1,r0\n\
     bgt        LAB_08027ba8\n\
     add        r0,#0x1\n\
     str        r0,[r4,#0x8]\n\
LAB_08027ba8:\n\
     ldr        r0,[r2,#0x0]\n\
     sub        r0,#0x79\n\
     lsl        r1,r0,#0x8\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,r1\n\
     ble        LAB_08027bb6\n\
     str        r1,[r4,#0x0]\n\
LAB_08027bb6:\n\
     ldr        r0,[r3,#0x0]\n\
     sub        r0,#0x51\n\
     lsl        r1,r0,#0x8\n\
     ldr        r0,[r4,#0x8]\n\
     cmp        r0,r1\n\
     ble        LAB_08027bc4\n\
     str        r1,[r4,#0x8]\n\
LAB_08027bc4:\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803b8b8\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r2,[r4,#0x8]\n\
     mov        r0,#0x0\n\
     bl         fun_0803b3e4\n\
     bl         fun_080289a0\n\
     bl         fun_080283b4\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,[r4,#0x8]\n\
     lsl        r1,r1,#0x8\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803a140\n\
     ldr        r1,DAT_08027c3c\n\
     ldr        r0,[r4,#0x0]\n\
     asr        r0,r0,#0x8\n\
     sub        r0,#0x78\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08027c40\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     mov        r2,#0x7f\n\
     and        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r3,DAT_08027c44\n\
     ldr        r0,[r4,#0x8]\n\
     asr        r0,r0,#0x8\n\
     add        r1,r1,r0\n\
     and        r1,r2\n\
     str        r1,[r3,#0x0]\n\
     bl         fun_08027c4c\n\
     ldr        r0,DAT_08027c48\n\
     add        r1,r4,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08027c28:\n\
     .word 0x0200F950\n\
DAT_08027c2c:\n\
     .word 0x020101C4\n\
DAT_08027c30:\n\
     .word 0x0200F944\n\
DAT_08027c34:\n\
     .word 0x000077FF\n\
DAT_08027c38:\n\
     .word 0x00004FFF\n\
DAT_08027c3c:\n\
     .word 0x0300344C\n\
DAT_08027c40:\n\
     .word 0x0200F94C\n\
DAT_08027c44:\n\
     .word 0x03003448\n\
DAT_08027c48:\n\
     .word 0x00000864\n\
    ");
}
__attribute__((naked)) void fun_08027c4c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r5,DAT_08027c88\n\
     ldr        r0,DAT_08027c8c\n\
     add        r6,r5,r0\n\
     ldrh       r4,[r6,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_08027c98\n\
     bl         fun_08002de4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08027d0c\n\
     ldr        r1,DAT_08027c90\n\
     add        r0,r5,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x5\n\
     bne        LAB_08027c80\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08027c94\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x14\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_08027c80:\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     b          LAB_08027d0c\n\
DAT_08027c88:\n\
     .word 0x0200F950\n\
DAT_08027c8c:\n\
     .word 0x0000085E\n\
DAT_08027c90:\n\
     .word 0x0000085A\n\
DAT_08027c94:\n\
     .word 0x00000E84\n\
LAB_08027c98:\n\
     ldr        r1,DAT_08027ccc\n\
     add        r0,r5,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08027cd0\n\
     cmp        r1,r0\n\
     bgt        LAB_08027ce4\n\
     ldr        r1,DAT_08027cd4\n\
     add        r0,r5,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x5\n\
     bne        LAB_08027d0c\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08027cd8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_08027cdc\n\
     ldr        r1,DAT_08027ce0\n\
     add        r0,r5,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r2,#0x0]\n\
     b          LAB_08027cec\n\
DAT_08027ccc:\n\
     .word 0x00000864\n\
DAT_08027cd0:\n\
     .word 0x0000545F\n\
DAT_08027cd4:\n\
     .word 0x0000085A\n\
DAT_08027cd8:\n\
     .word 0x020025B8\n\
DAT_08027cdc:\n\
     .word 0x020025FC\n\
DAT_08027ce0:\n\
     .word 0x00000868\n\
LAB_08027ce4:\n\
     ldr        r0,DAT_08027d00\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,DAT_08027d04\n\
     str        r4,[r0,#0x0]\n\
LAB_08027cec:\n\
     ldr        r0,DAT_08027d08\n\
     str        r4,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     mov        r1,#0x0\n\
     mov        r2,#0x3c\n\
     bl         fun_08002d34\n\
     mov        r0,#0x1\n\
     b          LAB_08027d0e\n\
DAT_08027d00:\n\
     .word 0x020025B8\n\
DAT_08027d04:\n\
     .word 0x020025FC\n\
DAT_08027d08:\n\
     .word 0x02002558\n\
LAB_08027d0c:\n\
     mov        r0,#0x0\n\
LAB_08027d0e:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08027d14()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     mov        r7,#0x0\n\
     ldr        r0,DAT_080280dc\n\
     ldr        r1,DAT_080280e0\n\
     add        r0,r0,r1\n\
     strh       r7,[r0,#0x0]\n\
     mov        r4,#0x0\n\
LAB_08027d28:\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r0,PTR_DAT_080280e4\n\
     bl         fun_08003998\n\
     add        r1,r0,#0x0\n\
     lsl        r0,r4,#0x5\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x96\n\
     strh       r0,[r1,#0x4]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x6\n\
     bls        LAB_08027d28\n\
     ldr        r5,DAT_080280dc\n\
     add        r1,r7,#0x0\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r6,r7,#0x0\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r5,r2\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,PTR_DAT_080280e8\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r1,#0x97\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r5,r1\n\
     strh       r6,[r0,#0x0]\n\
     sub        r4,#0x20\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     mov        r4,#0x0\n\
LAB_08027d7c:\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r4\n\
     lsl        r1,r1,#0x4\n\
     add        r1,r1,r5\n\
     add        r2,r7,#0x0\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r0,#0x9d\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r1,r0\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080280ec\n\
     bl         fun_08003998\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08027d7c\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_080280dc\n\
LAB_08027da8:\n\
     lsl        r1,r4,#0x5\n\
     add        r1,r1,r5\n\
     add        r2,r7,#0x0\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r0,#0xb4\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r1,r0\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080280f0\n\
     bl         fun_08003998\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     beq        LAB_08027da8\n\
     ldr        r1,DAT_080280dc\n\
     mov        r8,r1\n\
     add        r1,r7,#0x0\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r6,r7,#0x0\n\
     ldr        r0,DAT_080280f4\n\
     add        r0,r8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_080280f8\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r5,r7,#0x0\n\
     mov        r2,r8\n\
     strh       r6,[r2,#0x24]\n\
     add        r0,r4,#0x0\n\
     sub        r0,#0xc0\n\
     bl         fun_08003998\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r6,r7,#0x0\n\
     mov        r0,r8\n\
     strh       r5,[r0,#0x26]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x20\n\
     bl         fun_08003998\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r9,r7\n\
     mov        r0,#0x92\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r8\n\
     strh       r6,[r0,#0x0]\n\
     sub        r4,#0x20\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     add        r1,r0,#0x0\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x5\n\
     add        r5,r2,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,r9\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r0,#0x97\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r8\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     add        r1,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     mov        r4,#0x0\n\
     mov        r5,r8\n\
LAB_08027e5a:\n\
     lsl        r1,r4,#0x3\n\
     sub        r1,r1,r4\n\
     lsl        r1,r1,#0x3\n\
     add        r1,r1,r5\n\
     add        r2,r7,#0x0\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r0,#0xd6\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_080280fc\n\
     bl         fun_08003998\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x4\n\
     bls        LAB_08027e5a\n\
     ldr        r1,DAT_080280dc\n\
     mov        r8,r1\n\
     add        r1,r7,#0x0\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r5,r7,#0x0\n\
     ldr        r0,DAT_08028100\n\
     add        r0,r8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_08028104\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r9,r7\n\
     ldr        r0,DAT_08028108\n\
     add        r0,r8\n\
     strh       r5,[r0,#0x0]\n\
     add        r5,r4,#0x0\n\
     add        r5,#0x70\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     mov        r0,r9\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r6,r7,#0x0\n\
     mov        r0,#0xb9\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r8\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08003998\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r0,r8\n\
     add        r0,#0x68\n\
     strh       r6,[r0,#0x0]\n\
     sub        r4,#0x50\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_0802810c\n\
     add        r8,r0\n\
LAB_08027eea:\n\
     mov        r5,#0x0\n\
     lsl        r0,r4,#0x4\n\
     add        r0,r0,r4\n\
     lsl        r6,r0,#0x2\n\
LAB_08027ef2:\n\
     lsl        r1,r5,#0x1\n\
     add        r1,r1,r6\n\
     add        r1,r8\n\
     add        r2,r7,#0x0\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_08028110\n\
     bl         fun_08003998\n\
     add        r1,r0,#0x0\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x4\n\
     bls        LAB_08027ef2\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x4\n\
     bls        LAB_08027eea\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_080280dc\n\
LAB_08027f2e:\n\
     lsl        r1,r4,#0x5\n\
     add        r1,r1,r5\n\
     add        r2,r7,#0x0\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     add        r1,#0x8c\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_08028114\n\
     bl         fun_08003998\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08027f2e\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_080280dc\n\
LAB_08027f52:\n\
     lsl        r1,r4,#0x3\n\
     sub        r1,r1,r4\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r5\n\
     add        r2,r7,#0x0\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r0,#0xae\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_08028118\n\
     bl         fun_08003998\n\
     add        r1,r0,#0x0\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0xe\n\
     bls        LAB_08027f52\n\
     ldr        r0,DAT_080280dc\n\
     ldr        r1,DAT_0802811c\n\
     add        r0,r0,r1\n\
     strh       r7,[r0,#0x0]\n\
     mov        r4,#0x0\n\
LAB_08027f92:\n\
     ldr        r0,DAT_08028120\n\
     bl         fun_08003998\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x9\n\
     bls        LAB_08027f92\n\
     bl         fun_08003cfc\n\
     bl         fun_080046a4\n\
     mov        r0,#0x0\n\
     bl         fun_080045d8\n\
     mov        r4,#0x0\n\
     ldr        r3,DAT_08028124\n\
     ldr        r2,DAT_08028128\n\
     ldr        r0,DAT_0802812c\n\
     add        r7,r2,r0\n\
     mov        r12,r3\n\
     ldr        r6,DAT_08028130\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x2\n\
LAB_08027fc2:\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r1,r0,r4\n\
     lsl        r1,r1,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r1,r0,r4\n\
     lsl        r1,r1,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x9\n\
     bls        LAB_08027fc2\n\
     mov        r4,#0x0\n\
     ldr        r1,DAT_080280dc\n\
     mov        r9,r1\n\
     ldr        r3,DAT_08028134\n\
     mov        r2,#0xd6\n\
     lsl        r2,r2,#0x1\n\
     mov        r8,r2\n\
LAB_08027ff6:\n\
     lsl        r0,r4,#0x3\n\
     sub        r0,r0,r4\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r9\n\
     add        r0,r8\n\
     ldrh       r1,[r0,#0x0]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r3\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r6,DAT_08028138\n\
     and        r1,r6\n\
     str        r1,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x3\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x4\n\
     bls        LAB_08027ff6\n\
     ldrh       r2,[r7,#0x24]\n\
     lsl        r1,r2,#0x3\n\
     mov        r2,r12\n\
     add        r2,#0x4\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0x24]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0x26]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0x26]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x92\n\
     lsl        r1,r1,#0x3\n\
     add        r3,r7,r1\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x97\n\
     lsl        r1,r1,#0x3\n\
     add        r3,r7,r1\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     add        r3,r7,#0x0\n\
     add        r3,#0x68\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     mov        r8,r7\n\
     add        r3,r2,#0x0\n\
LAB_080280ba:\n\
     lsl        r2,r4,#0x5\n\
     add        r2,r8\n\
     add        r2,#0x8c\n\
     ldrh       r0,[r2,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r4,#0x1\n\
     b          LAB_0802813c\n\
DAT_080280dc:\n\
     .word 0x0200F950\n\
DAT_080280e0:\n\
     .word 0x00000854\n\
PTR_DAT_080280e4:\n\
     .word       DAT_0858e3fc\n\
PTR_DAT_080280e8:\n\
     .word       DAT_0858e42c\n\
PTR_DAT_080280ec:\n\
     .word       DAT_0858e48c\n\
PTR_DAT_080280f0:\n\
     .word       DAT_0858e4dc\n\
DAT_080280f4:\n\
     .word 0x000005C4\n\
DAT_080280f8:\n\
     .word 0x0858E49C\n\
DAT_080280fc:\n\
     .word 0x0858E41C\n\
DAT_08028100:\n\
     .word 0x0000083C\n\
DAT_08028104:\n\
     .word 0x0858E43C\n\
DAT_08028108:\n\
     .word 0x000005C6\n\
DAT_0802810c:\n\
     .word 0x00000644\n\
DAT_08028110:\n\
     .word 0x0858E4CC\n\
DAT_08028114:\n\
     .word 0x0858E3CC\n\
DAT_08028118:\n\
     .word 0x0858E46C\n\
DAT_0802811c:\n\
     .word 0x00000858\n\
DAT_08028120:\n\
     .word 0x0858E44C\n\
DAT_08028124:\n\
     .word 0x03002000\n\
DAT_08028128:\n\
     .word 0x020101A8\n\
DAT_0802812c:\n\
     .word 0xFFFFF7A8\n\
DAT_08028130:\n\
     .word 0xFFFFFCFF\n\
DAT_08028134:\n\
     .word 0x03002004\n\
DAT_08028138:\n\
     .word 0xFFFFF3FF\n\
LAB_0802813c:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_080280ba\n\
     mov        r4,#0x0\n\
     ldr        r1,DAT_0802829c\n\
     mov        r8,r1\n\
     ldr        r5,DAT_080282a0\n\
     mov        r6,#0x9d\n\
     lsl        r6,r6,#0x3\n\
LAB_08028150:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r8\n\
     add        r0,r0,r6\n\
     ldrh       r1,[r0,#0x0]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r5\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r3,DAT_080282a4\n\
     and        r1,r3\n\
     str        r1,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r2,r0,#0x3\n\
     add        r2,r2,r5\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08028150\n\
     mov        r4,#0x0\n\
     ldr        r2,DAT_0802829c\n\
     mov        r8,r2\n\
     ldr        r5,DAT_080282a0\n\
     mov        r6,#0xb4\n\
     lsl        r6,r6,#0x3\n\
LAB_0802818e:\n\
     lsl        r2,r4,#0x5\n\
     add        r2,r8\n\
     add        r2,r2,r6\n\
     ldrh       r0,[r2,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r5\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802818e\n\
     mov        r4,#0x0\n\
     ldr        r1,DAT_0802829c\n\
     mov        r9,r1\n\
     ldr        r3,DAT_080282a0\n\
     mov        r2,#0xae\n\
     lsl        r2,r2,#0x2\n\
     mov        r8,r2\n\
LAB_080281c8:\n\
     lsl        r0,r4,#0x3\n\
     sub        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     add        r0,r8\n\
     ldrh       r1,[r0,#0x0]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r3\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r6,DAT_080282a4\n\
     and        r1,r6\n\
     str        r1,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x3\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0xe\n\
     bls        LAB_080281c8\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x1\n\
     add        r3,r7,r2\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     mov        r2,r12\n\
     add        r2,#0x4\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x97\n\
     lsl        r1,r1,#0x1\n\
     add        r3,r7,r1\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080282a8\n\
     add        r3,r7,r1\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080282ac\n\
     add        r3,r7,r1\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0xb9\n\
     lsl        r1,r1,#0x3\n\
     add        r3,r7,r1\n\
     ldrh       r0,[r3,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802829c:\n\
     .word 0x0200F950\n\
DAT_080282a0:\n\
     .word 0x03002004\n\
DAT_080282a4:\n\
     .word 0xFFFFF3FF\n\
DAT_080282a8:\n\
     .word 0x000005C4\n\
DAT_080282ac:\n\
     .word 0x000005C6\n\
    ");
}
__attribute__((naked)) void fun_080282b0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r6,[sp,#0x20]\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x1\n\
     mov        r8,r4\n\
     mov        r5,r8\n\
     sub        r5,r5,r6\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     mov        r8,r5\n\
     add        r4,r0,#0x0\n\
     mul        r4,r6\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     ldr        r7,DAT_080283a8\n\
     mov        r12,r7\n\
     mov        r5,r12\n\
     and        r5,r0\n\
     orr        r5,r4\n\
     add        r0,r5,#0x0\n\
     lsr        r4,r0,#0x10\n\
     add        r7,r6,#0x0\n\
     mul        r7,r4\n\
     add        r4,r7,#0x0\n\
     lsl        r4,r4,#0x10\n\
     mov        r9,r4\n\
     ldr        r7,DAT_080283ac\n\
     mov        r10,r7\n\
     mov        r4,r10\n\
     and        r4,r5\n\
     mov        r5,r9\n\
     orr        r4,r5\n\
     mov        r10,r4\n\
     mov        r0,r10\n\
     add        r4,r1,#0x0\n\
     mul        r4,r6\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r9,r12\n\
     mov        r6,r9\n\
     and        r6,r1\n\
     orr        r6,r4\n\
     mov        r9,r6\n\
     mov        r1,r9\n\
     mov        r5,r8\n\
     mul        r5,r2\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     mov        r4,r12\n\
     and        r4,r2\n\
     orr        r4,r5\n\
     add        r2,r4,#0x0\n\
     lsr        r5,r2,#0x10\n\
     mov        r6,r8\n\
     mul        r6,r5\n\
     add        r5,r6,#0x0\n\
     lsl        r5,r5,#0x10\n\
     and        r4,r7\n\
     add        r2,r4,#0x0\n\
     orr        r2,r5\n\
     mov        r5,r8\n\
     mul        r5,r3\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     mov        r4,r12\n\
     and        r4,r3\n\
     add        r3,r4,#0x0\n\
     orr        r3,r5\n\
     add        r5,r0,r2\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     mov        r4,r12\n\
     mov        r6,r10\n\
     and        r4,r6\n\
     orr        r4,r5\n\
     add        r0,r4,#0x0\n\
     lsr        r5,r0,#0x10\n\
     lsr        r6,r2,#0x10\n\
     add        r5,r5,r6\n\
     lsl        r5,r5,#0x10\n\
     and        r4,r7\n\
     add        r0,r4,#0x0\n\
     orr        r0,r5\n\
     add        r2,r1,r3\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     mov        r7,r9\n\
     mov        r3,r12\n\
     and        r7,r3\n\
     mov        r9,r7\n\
     mov        r1,r9\n\
     orr        r1,r2\n\
     lsl        r3,r1,#0x2\n\
     ldr        r4,DAT_080283b0\n\
     add        r2,r4,#0x0\n\
     and        r3,r2\n\
     lsr        r2,r0,#0x13\n\
     mov        r5,#0xf8\n\
     lsl        r5,r5,#0x2\n\
     add        r4,r5,#0x0\n\
     and        r2,r4\n\
     orr        r3,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x18\n\
     mov        r2,#0x1f\n\
     and        r0,r2\n\
     orr        r3,r0\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     add        r0,r3,#0x0\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_080283a8:\n\
     .word 0xFFFF0000\n\
DAT_080283ac:\n\
     .word 0x0000FFFF\n\
DAT_080283b0:\n\
     .word 0xFFFFFC00\n\
    ");
}
__attribute__((naked)) void fun_080283b4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x14\n\
     ldr        r0,DAT_080284d4\n\
     mov        r10,r0\n\
     ldr        r0,DAT_080284d8\n\
     add        r0,r10\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_080284dc\n\
     bl         fun_0800354c\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_080284e0\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x64\n\
     bl         fun_0800353c\n\
     ldr        r2,DAT_080284e4\n\
     add        r2,r10\n\
     mov        r1,#0x64\n\
     sub        r1,r1,r0\n\
     str        r1,[r2,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0xe0\n\
     bl         fun_0800353c\n\
     mov        r8,r0\n\
     ldr        r6,DAT_080284e8\n\
     add        r0,r6,#0x0\n\
     ldr        r1,[sp,#0x4]\n\
     and        r0,r1\n\
     mov        r1,#0x1f\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x4]\n\
     ldr        r1,DAT_080284ec\n\
     and        r0,r1\n\
     str        r0,[sp,#0x4]\n\
     add        r5,r6,#0x0\n\
     ldr        r2,[sp,#0x8]\n\
     and        r5,r2\n\
     str        r5,[sp,#0x8]\n\
     ldr        r4,[sp,#0xc]\n\
     and        r4,r6\n\
     str        r4,[sp,#0xc]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0xc]\n\
     add        r4,r6,#0x0\n\
     ldr        r1,[sp,#0x10]\n\
     and        r4,r1\n\
     mov        r0,#0x18\n\
     orr        r4,r0\n\
     str        r4,[sp,#0x10]\n\
     mov        r2,r8\n\
     lsl        r2,r2,#0x10\n\
     mov        r8,r2\n\
     lsr        r2,r2,#0x10\n\
     mov        r9,r2\n\
     str        r2,[sp,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r2,[sp,#0xc]\n\
     ldr        r3,[sp,#0x10]\n\
     bl         fun_080282b0\n\
     ldr        r1,DAT_080284f0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1d\n\
     str        r0,[sp,#0x4]\n\
     ldr        r1,DAT_080284f4\n\
     str        r1,[sp,#0x4]\n\
     and        r5,r6\n\
     mov        r0,#0x6\n\
     orr        r5,r0\n\
     str        r5,[sp,#0x8]\n\
     and        r4,r6\n\
     mov        r0,#0x16\n\
     orr        r4,r0\n\
     str        r4,[sp,#0x10]\n\
     mov        r2,r9\n\
     str        r2,[sp,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r2,[sp,#0xc]\n\
     ldr        r3,[sp,#0x10]\n\
     bl         fun_080282b0\n\
     ldr        r1,DAT_080284f8\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,r8\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     lsr        r1,r4,#0x10\n\
     mov        r3,#0x0\n\
     mov        r0,#0x20\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r12,r0\n\
     ldr        r6,DAT_080284fc\n\
     ldr        r5,DAT_08028500\n\
     add        r5,r10\n\
     ldr        r2,DAT_08028504\n\
     mov        r8,r2\n\
     ldr        r4,DAT_08028508\n\
     mov        r9,r4\n\
LAB_0802848c:\n\
     lsl        r0,r1,#0x10\n\
     asr        r4,r0,#0x10\n\
     add        r7,r0,#0x0\n\
     cmp        r4,r12\n\
     ble        LAB_08028510\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r1,r0,r3\n\
     lsl        r1,r1,#0x3\n\
     add        r1,r1,r6\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,r8\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r2,r0,r3\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r6\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802850c\n\
     and        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r2,r1,r3\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r6\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x96\n\
     orr        r1,r0\n\
     add        r0,r4,#0x0\n\
     mov        r4,r9\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x10\n\
     orr        r1,r0\n\
     str        r1,[r2,#0x0]\n\
     b          LAB_08028532\n\
.space 1\n\
.space 1\n\
DAT_080284d4:\n\
     .word 0x0200F950\n\
DAT_080284d8:\n\
     .word 0x00000864\n\
DAT_080284dc:\n\
     .word 0x00005460\n\
DAT_080284e0:\n\
     .word 0x0200F940\n\
DAT_080284e4:\n\
     .word 0x00000868\n\
DAT_080284e8:\n\
     .word 0xFFFF0000\n\
DAT_080284ec:\n\
     .word 0x0000FFFF\n\
DAT_080284f0:\n\
     .word 0x050003B8\n\
DAT_080284f4:\n\
     .word 0x000D001D\n\
DAT_080284f8:\n\
     .word 0x050003BA\n\
DAT_080284fc:\n\
     .word 0x03002000\n\
DAT_08028500:\n\
     .word 0x00000854\n\
DAT_08028504:\n\
     .word 0xFFFFFCFF\n\
DAT_08028508:\n\
     .word 0x000001FF\n\
DAT_0802850c:\n\
     .word 0xFE00FF00\n\
LAB_08028510:\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r1,r0,r3\n\
     lsl        r1,r1,#0x3\n\
     add        r1,r1,r6\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,r8\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r4,[r5,#0x0]\n\
     add        r2,r4,r3\n\
     lsl        r2,r2,#0x3\n\
     add        r2,r2,r6\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
LAB_08028532:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xe\n\
     add        r0,r7,r1\n\
     lsr        r1,r0,#0x10\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     cmp        r3,#0x6\n\
     bls        LAB_0802848c\n\
     add        sp,#0x14\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08028554()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_08002bcc\n\
     ldr        r2,DAT_0802858c\n\
     ldrh       r1,[r2,#0x0]\n\
     ldr        r0,DAT_08028590\n\
     and        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,DAT_08028594\n\
     ldrh       r1,[r2,#0x0]\n\
     ldr        r0,DAT_08028598\n\
     and        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802859c\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0xc]\n\
     ldr        r1,DAT_080285a0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0800457c\n\
     bl         fun_0803b3e0\n\
     bl         fun_0803a980\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802858c:\n\
     .word 0x04000200\n\
DAT_08028590:\n\
     .word 0x0000FFFD\n\
DAT_08028594:\n\
     .word 0x04000004\n\
DAT_08028598:\n\
     .word 0x0000FFEF\n\
DAT_0802859c:\n\
     .word 0x020057F0\n\
DAT_080285a0:\n\
     .word 0x020025B8\n\
    ");
}
__attribute__((naked)) void fun_080285a4()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080285a8()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080285ac()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_080285cc\n\
     bl         fun_0803b3bc\n\
     bl         fun_080285e8\n\
     ldr        r0,DAT_080285d0\n\
     ldr        r2,DAT_080285d4\n\
     add        r1,r0,r2\n\
     mov        r2,#0x0\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r1,DAT_080285d8\n\
     add        r0,r0,r1\n\
     strh       r2,[r0,#0x0]\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080285cc:\n\
     .word 0x0857FA58\n\
DAT_080285d0:\n\
     .word 0x0200F950\n\
DAT_080285d4:\n\
     .word 0x0000085A\n\
DAT_080285d8:\n\
     .word 0x0000085C\n\
    ");
}
__attribute__((naked)) void fun_080285dc()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803a9dc\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080285e8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x30\n\
     ldr        r0,DAT_08028950\n\
     ldr        r5,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x18\n\
     bl         fun_08028b14\n\
     ldr        r1,DAT_08028954\n\
     ldr        r0,[sp,#0xc]\n\
     and        r0,r1\n\
     mov        r1,#0xa\n\
     orr        r0,r1\n\
     str        r0,[sp,#0xc]\n\
     mov        r1,#0xab\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r5,r1\n\
     add        r4,sp,#0xc\n\
     str        r0,[r4,#0x4]\n\
     mov        r2,#0x8a\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r5,r2\n\
     add        r1,r4,#0x0\n\
     bl         fun_0802afe0\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x5c\n\
     bl         fun_0802adb0\n\
     mov        r6,#0x0\n\
     add        r7,sp,#0x14\n\
     add        r0,sp,#0x1c\n\
     mov        r10,r0\n\
     mov        r1,sp\n\
     add        r1,#0x24\n\
     str        r1,[sp,#0x2c]\n\
LAB_08028638:\n\
     lsl        r0,r6,#0x5\n\
     add        r0,#0x80\n\
     add        r0,r5,r0\n\
     bl         fun_0802ae30\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x3\n\
     bls        LAB_08028638\n\
     ldr        r0,DAT_08028950\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r2,#0x90\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r4,r2\n\
     bl         fun_0802aee0\n\
     mov        r0,#0x1\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[sp,#0x14]\n\
     mov        r0,#0x1\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r7,#0x4]\n\
     mov        r1,#0xca\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,r1\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802af38\n\
     mov        r0,#0x2\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[sp,#0x14]\n\
     mov        r0,#0x2\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r7,#0x4]\n\
     mov        r2,#0xe6\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r4,r2\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802af38\n\
     mov        r0,#0x3\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[sp,#0x14]\n\
     mov        r0,#0x3\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r7,#0x4]\n\
     mov        r1,#0x81\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,r1\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802af38\n\
     mov        r0,#0x4\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[sp,#0x14]\n\
     mov        r0,#0x4\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r7,#0x4]\n\
     mov        r2,#0x8f\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r4,r2\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802af38\n\
     mov        r0,#0x5\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[sp,#0x14]\n\
     mov        r0,#0x5\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r7,#0x4]\n\
     mov        r1,#0x9d\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,r1\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802af38\n\
     mov        r6,#0x0\n\
LAB_08028760:\n\
     lsl        r0,r6,#0x3\n\
     sub        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     mov        r2,#0xab\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r0,r2\n\
     add        r0,r4,r0\n\
     bl         fun_0802afac\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0xe\n\
     bls        LAB_08028760\n\
     ldr        r0,DAT_08028958\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0xe2\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,sp\n\
     mov        r5,#0x0\n\
     mov        r1,#0x1\n\
     mov        r8,r1\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x8]\n\
     ldr        r0,DAT_08028950\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x91\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     mov        r1,sp\n\
     bl         fun_0802b00c\n\
     mov        r0,#0xd4\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,DAT_0802895c\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,sp\n\
     strh       r5,[r0,#0x8]\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     mov        r1,sp\n\
     bl         fun_0802b00c\n\
     ldr        r0,DAT_08028960\n\
     add        r1,r4,r0\n\
     mov        r0,#0xa8\n\
     lsl        r0,r0,#0x6\n\
     str        r0,[r1,#0x0]\n\
     ldr        r2,DAT_08028964\n\
     add        r1,r4,r2\n\
     ldr        r0,DAT_08028968\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802896c\n\
     add        r1,r4,r0\n\
     mov        r0,#0xaf\n\
     lsl        r0,r0,#0xa\n\
     str        r0,[r1,#0x0]\n\
     add        r2,#0x8\n\
     add        r1,r4,r2\n\
     ldr        r0,DAT_08028970\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x6\n\
     bl         fun_0803b6e4\n\
     str        r0,[sp,#0x1c]\n\
     ldr        r0,DAT_08028954\n\
     mov        r9,r0\n\
     mov        r1,r10\n\
     ldr        r0,[r1,#0x4]\n\
     mov        r2,r9\n\
     and        r0,r2\n\
     mov        r1,#0x9\n\
     orr        r0,r1\n\
     mov        r1,r10\n\
     str        r0,[r1,#0x4]\n\
     mov        r2,#0x9b\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     bl         fun_08029e74\n\
     ldr        r1,DAT_08028974\n\
     add        r0,r4,r1\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_0803b6e4\n\
     str        r0,[sp,#0x1c]\n\
     mov        r6,#0x10\n\
     mov        r2,r10\n\
     strh       r6,[r2,#0x4]\n\
     mov        r1,#0xa1\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     mov        r1,r10\n\
     bl         fun_08029e74\n\
     ldr        r2,DAT_08028978\n\
     add        r0,r4,r2\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x1f\n\
     bl         fun_0803b6e4\n\
     str        r0,[sp,#0x1c]\n\
     mov        r0,#0x12\n\
     mov        r1,r10\n\
     strh       r0,[r1,#0x4]\n\
     mov        r2,#0xa7\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     bl         fun_08029e74\n\
     ldr        r1,DAT_0802897c\n\
     add        r0,r4,r1\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x31\n\
     bl         fun_0803b6e4\n\
     str        r0,[sp,#0x1c]\n\
     mov        r0,r10\n\
     strh       r6,[r0,#0x4]\n\
     mov        r1,#0xad\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     mov        r1,r10\n\
     bl         fun_08029e74\n\
     ldr        r2,DAT_08028980\n\
     add        r0,r4,r2\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x41\n\
     bl         fun_0803b6e4\n\
     str        r0,[sp,#0x24]\n\
     ldr        r2,[sp,#0x2c]\n\
     ldr        r0,[r2,#0x4]\n\
     mov        r1,r9\n\
     and        r0,r1\n\
     mov        r1,#0x2\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x4]\n\
     mov        r2,#0xb3\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     ldr        r1,[sp,#0x2c]\n\
     bl         fun_0802b0a4\n\
     mov        r1,#0xb7\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     bl         fun_0802a14c\n\
     mov        r6,#0x0\n\
LAB_0802889a:\n\
     lsl        r0,r6,#0x4\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08028984\n\
     add        r0,r0,r2\n\
     add        r0,r4,r0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0802b124\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x4\n\
     bls        LAB_0802889a\n\
     ldr        r0,DAT_08028950\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0xf3\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     bl         fun_0802b17c\n\
     mov        r0,#0x5\n\
     mov        r2,sp\n\
     strh       r0,[r2,#0xc]\n\
     add        r1,sp,#0xc\n\
     mov        r2,#0xf1\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r4,r2\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08028988\n\
     add        r5,r4,r0\n\
     add        r0,r5,#0x0\n\
     bl         fun_0802afe0\n\
     ldr        r0,DAT_0802898c\n\
     str        r0,[sp,#0x14]\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0xa\n\
     str        r0,[r7,#0x4]\n\
     add        r0,r7,#0x0\n\
     bl         fun_0803b474\n\
     add        r2,r0,#0x0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r0,r5,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802aff8\n\
     mov        r0,#0x43\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[sp,#0x14]\n\
     mov        r0,#0x43\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r7,#0x4]\n\
     ldr        r1,DAT_08028990\n\
     add        r4,r4,r1\n\
     add        r0,r4,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802b238\n\
     ldr        r0,DAT_08028994\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08028998\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_0802899c\n\
     strh       r1,[r0,#0x0]\n\
     add        sp,#0x30\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08028950:\n\
     .word 0x0857FBA8\n\
DAT_08028954:\n\
     .word 0xFFFF0000\n\
DAT_08028958:\n\
     .word 0x00020E00\n\
DAT_0802895c:\n\
     .word 0x00040500\n\
DAT_08028960:\n\
     .word 0x00000844\n\
DAT_08028964:\n\
     .word 0x00000848\n\
DAT_08028968:\n\
     .word 0x00022100\n\
DAT_0802896c:\n\
     .word 0x0000084C\n\
DAT_08028970:\n\
     .word 0x0003B300\n\
DAT_08028974:\n\
     .word 0x000004FC\n\
DAT_08028978:\n\
     .word 0x0000052C\n\
DAT_0802897c:\n\
     .word 0x0000055C\n\
DAT_08028980:\n\
     .word 0x0000058C\n\
DAT_08028984:\n\
     .word 0x00000644\n\
DAT_08028988:\n\
     .word 0x0000046C\n\
DAT_0802898c:\n\
     .word 0x00023A00\n\
DAT_08028990:\n\
     .word 0x00000834\n\
DAT_08028994:\n\
     .word 0x020101DC\n\
DAT_08028998:\n\
     .word 0x020101CC\n\
DAT_0802899c:\n\
     .word 0x020101D0\n\
    ");
}
__attribute__((naked)) void fun_080289a0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_08028a6c\n\
     ldr        r4,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x5c\n\
     bl         fun_080291f8\n\
     mov        r5,#0x0\n\
LAB_080289b0:\n\
     lsl        r0,r5,#0x5\n\
     add        r0,#0x80\n\
     add        r0,r4,r0\n\
     bl         fun_0802933c\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x3\n\
     bls        LAB_080289b0\n\
     ldr        r0,DAT_08028a6c\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,r1\n\
     bl         fun_08029458\n\
     mov        r5,#0x0\n\
LAB_080289d4:\n\
     lsl        r0,r5,#0x3\n\
     sub        r0,r0,r5\n\
     lsl        r0,r0,#0x3\n\
     mov        r2,#0xca\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     add        r0,r4,r0\n\
     bl         fun_08029864\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x4\n\
     bls        LAB_080289d4\n\
     ldr        r0,DAT_08028a6c\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     bl         fun_08029c34\n\
     ldr        r2,DAT_08028a70\n\
     add        r0,r4,r2\n\
     bl         fun_08029c34\n\
     mov        r5,#0x0\n\
LAB_08028a08:\n\
     lsl        r0,r5,#0x3\n\
     sub        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     mov        r1,#0xab\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r0,r1\n\
     add        r0,r4,r0\n\
     bl         fun_08029b2c\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0xe\n\
     bls        LAB_08028a08\n\
     mov        r5,#0x0\n\
     ldr        r0,DAT_08028a6c\n\
     ldr        r4,[r0,#0x0]\n\
LAB_08028a2a:\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x3\n\
     mov        r2,#0x91\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r0,r2\n\
     add        r0,r4,r0\n\
     bl         fun_08029d34\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x1\n\
     bls        LAB_08028a2a\n\
     ldr        r0,DAT_08028a6c\n\
     ldr        r4,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x18\n\
     ldr        r2,DAT_08028a74\n\
     add        r1,r4,r2\n\
     bl         fun_0802b3a0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x0\n\
     beq        LAB_08028a78\n\
     mov        r0,#0x84\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r4,r0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08028a80\n\
.space 1\n\
.space 1\n\
DAT_08028a6c:\n\
     .word 0x0857FBA8\n\
DAT_08028a70:\n\
     .word 0x0000046C\n\
DAT_08028a74:\n\
     .word 0x00000844\n\
LAB_08028a78:\n\
     mov        r2,#0x84\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r4,r2\n\
     strh       r1,[r0,#0x0]\n\
LAB_08028a80:\n\
     mov        r5,#0x0\n\
     ldr        r0,DAT_08028b08\n\
     ldr        r4,[r0,#0x0]\n\
LAB_08028a86:\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x4\n\
     mov        r1,#0x9b\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r0,r1\n\
     add        r0,r4,r0\n\
     bl         fun_08029efc\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x3\n\
     bls        LAB_08028a86\n\
     mov        r5,#0x0\n\
     ldr        r0,DAT_08028b08\n\
     ldr        r4,[r0,#0x0]\n\
LAB_08028aa8:\n\
     lsl        r0,r5,#0x5\n\
     mov        r2,#0xb3\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r0,r2\n\
     add        r0,r4,r0\n\
     bl         fun_0802a078\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x0\n\
     beq        LAB_08028aa8\n\
     ldr        r0,DAT_08028b08\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0xb7\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     bl         fun_0802a1dc\n\
     mov        r5,#0x0\n\
LAB_08028ad0:\n\
     lsl        r0,r5,#0x4\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08028b0c\n\
     add        r0,r0,r2\n\
     add        r0,r4,r0\n\
     bl         fun_0802a688\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x4\n\
     bls        LAB_08028ad0\n\
     ldr        r0,DAT_08028b08\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0xf3\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     bl         fun_0802a798\n\
     ldr        r2,DAT_08028b10\n\
     add        r4,r4,r2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0802b2a0\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08028b08:\n\
     .word 0x0857FBA8\n\
DAT_08028b0c:\n\
     .word 0x00000644\n\
DAT_08028b10:\n\
     .word 0x00000834\n\
    ");
}
__attribute__((naked)) void fun_08028b14()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x0\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_0803b6d0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r4,#0x4]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803b474\n\
     mov        r3,#0x0\n\
     strh       r0,[r4,#0xa]\n\
     ldr        r0,DAT_08028b9c\n\
     ldr        r1,[r0,#0x0]\n\
     str        r3,[r1,#0x30]\n\
     mov        r0,#0x14\n\
     str        r0,[r1,#0x38]\n\
     mov        r0,#0xf\n\
     str        r0,[r1,#0x3c]\n\
     strh       r3,[r4,#0x30]\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r1,[r4,#0x4]\n\
     str        r0,[r4,#0x34]\n\
     str        r1,[r4,#0x38]\n\
     str        r3,[r4,#0x3c]\n\
     strh       r3,[r4,#0x28]\n\
     strh       r3,[r4,#0x2a]\n\
     strh       r3,[r4,#0x2c]\n\
     strh       r3,[r4,#0x2e]\n\
     ldr        r5,DAT_08028ba0\n\
     ldrh       r0,[r4,#0xe]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_08028ba4\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0xe]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x40\n\
     strh       r3,[r0,#0x0]\n\
     add        r4,#0x42\n\
     strh       r3,[r4,#0x0]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08028b9c:\n\
     .word 0x0857FBA8\n\
DAT_08028ba0:\n\
     .word 0x03002000\n\
DAT_08028ba4:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_08028ba8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x30\n\
     add        r7,r0,#0x0\n\
     ldrh       r0,[r7,#0x28]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028bc0\n\
     sub        r0,#0x1\n\
     strh       r0,[r7,#0x28]\n\
LAB_08028bc0:\n\
     ldrh       r0,[r7,#0x2a]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028bca\n\
     sub        r0,#0x1\n\
     strh       r0,[r7,#0x2a]\n\
LAB_08028bca:\n\
     ldr        r1,[r7,#0x4]\n\
     ldr        r0,DAT_08028da0\n\
     cmp        r1,r0\n\
     bgt        LAB_08028be0\n\
     ldr        r0,[r7,#0x3c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028be0\n\
     bl         fun_08029ad4\n\
     mov        r0,#0x0\n\
     str        r0,[r7,#0x3c]\n\
LAB_08028be0:\n\
     mov        r6,#0x0\n\
     mov        r4,#0x0\n\
     ldr        r2,DAT_08028da4\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028c28\n\
     ldrh       r0,[r7,#0x28]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08028c28\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028c00\n\
     ldr        r0,[r7,#0x20]\n\
.syntax unified\n\
    rsbs        r4,r0,#0\n\
.syntax divided\n\
LAB_08028c00:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028c0e\n\
     ldr        r0,[r7,#0x20]\n\
     add        r4,r4,r0\n\
LAB_08028c0e:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028c1a\n\
     ldr        r6,[r7,#0x24]\n\
LAB_08028c1a:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028c28\n\
     ldr        r0,[r7,#0x24]\n\
     sub        r6,r6,r0\n\
LAB_08028c28:\n\
     ldr        r0,[r7,#0x18]\n\
     mov        r1,#0xf5\n\
     bl         fun_0800353c\n\
     add        r0,r0,r4\n\
     str        r0,[r7,#0x18]\n\
     ldr        r1,[r7,#0x1c]\n\
     add        r1,r1,r0\n\
     ldr        r0,DAT_08028da8\n\
     and        r1,r0\n\
     str        r1,[sp,#0x1c]\n\
     ldr        r5,DAT_08028dac\n\
     ldrh       r0,[r7,#0x8]\n\
     sub        r0,#0x40\n\
     mov        r4,#0xff\n\
     and        r0,r4\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r5\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[sp,#0x20]\n\
     ldrh       r0,[r7,#0x8]\n\
     sub        r0,#0x40\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r5\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[sp,#0x24]\n\
     ldr        r0,[r7,#0x10]\n\
     ldr        r3,[sp,#0x20]\n\
     add        r0,r0,r3\n\
     str        r0,[r7,#0x10]\n\
     ldr        r1,[r7,#0x14]\n\
     ldr        r2,[sp,#0x24]\n\
     add        r1,r1,r2\n\
     str        r1,[r7,#0x14]\n\
     mov        r1,#0xf5\n\
     bl         fun_0800353c\n\
     str        r0,[r7,#0x10]\n\
     ldr        r0,[r7,#0x14]\n\
     mov        r1,#0xf5\n\
     bl         fun_0800353c\n\
     str        r0,[r7,#0x14]\n\
     ldr        r1,[r7,#0x0]\n\
     ldr        r2,[r7,#0x4]\n\
     str        r1,[sp,#0xc]\n\
     str        r2,[sp,#0x10]\n\
     ldr        r1,[r7,#0x10]\n\
     ldr        r2,[sp,#0xc]\n\
     add        r1,r1,r2\n\
     str        r1,[sp,#0xc]\n\
     add        r2,sp,#0xc\n\
     ldr        r1,[r2,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x4]\n\
     ldr        r0,[r7,#0x3c]\n\
     mov        r3,#0x10\n\
     add        r3,r3,r7\n\
     mov        r8,r3\n\
     add        r1,sp,#0x14\n\
     mov        r9,r1\n\
     add        r2,sp,#0x8\n\
     mov        r10,r2\n\
     mov        r3,sp\n\
     add        r3,#0xa\n\
     str        r3,[sp,#0x28]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08028d10\n\
     mov        r6,#0x0\n\
     ldr        r0,DAT_08028db0\n\
     ldr        r5,[r0,#0x0]\n\
LAB_08028cca:\n\
     lsl        r0,r6,#0x3\n\
     sub        r0,r0,r6\n\
     lsl        r1,r0,#0x3\n\
     add        r0,r5,r1\n\
     mov        r2,#0xe0\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028d06\n\
     mov        r3,#0xca\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r1,r3\n\
     add        r4,r5,r0\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc\n\
     add        r0,r7,#0x0\n\
     ldr        r2,DAT_08028db4\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028d06\n\
     add        r0,r4,#0x0\n\
     bl         fun_0802af60\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028d06\n\
     str        r4,[r7,#0x3c]\n\
LAB_08028d06:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x4\n\
     bls        LAB_08028cca\n\
LAB_08028d10:\n\
     ldr        r0,DAT_08028db0\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r1,DAT_08028db8\n\
     add        r0,r4,r1\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802b2d8\n\
     mov        r6,#0x0\n\
     ldr        r2,[sp,#0x1c]\n\
     lsr        r2,r2,#0x8\n\
     str        r2,[sp,#0x2c]\n\
LAB_08028d26:\n\
     lsl        r0,r6,#0x5\n\
     add        r0,#0x80\n\
     add        r5,r4,r0\n\
     ldrh       r0,[r5,#0xe]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028d42\n\
     add        r0,r7,#0x0\n\
     add        r1,r5,#0x0\n\
     ldr        r2,DAT_08028db4\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08028dc0\n\
LAB_08028d42:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x3\n\
     bls        LAB_08028d26\n\
LAB_08028d4c:\n\
     ldr        r0,DAT_08028db0\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r3,#0x90\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r4,r3\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802959c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028d6a\n\
     add        r0,r7,#0x0\n\
     bl         fun_0802ad98\n\
LAB_08028d6a:\n\
     mov        r0,#0xb7\n\
     lsl        r0,r0,#0x3\n\
     add        r4,r4,r0\n\
     add        r0,r4,#0x0\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802a438\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028dec\n\
     add        r0,r7,#0x0\n\
     bl         fun_0802ad98\n\
     ldr        r4,DAT_08028dbc\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028e02\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     mov        r0,#0x33\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_08028e02\n\
DAT_08028da0:\n\
     .word 0x00005EFF\n\
DAT_08028da4:\n\
     .word 0x02005830\n\
DAT_08028da8:\n\
     .word 0x0000FFFF\n\
DAT_08028dac:\n\
     .word 0x08049824\n\
DAT_08028db0:\n\
     .word 0x0857FBA8\n\
DAT_08028db4:\n\
     .word 0x00027100\n\
DAT_08028db8:\n\
     .word 0x00000834\n\
DAT_08028dbc:\n\
     .word 0x020101D0\n\
LAB_08028dc0:\n\
     ldr        r0,[r5,#0x14]\n\
     ldr        r1,[r5,#0x18]\n\
     str        r0,[r7,#0x10]\n\
     str        r1,[r7,#0x14]\n\
     add        r0,r5,#0x0\n\
     bl         fun_0802aeac\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x5c\n\
     add        r1,r5,#0x0\n\
     bl         fun_0802adfc\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     mov        r0,#0x10\n\
     bl         fun_080016f0\n\
     add        r0,r7,#0x0\n\
     bl         fun_0802ad98\n\
     b          LAB_08028d4c\n\
LAB_08028dec:\n\
     add        r0,r4,#0x0\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802a438\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08028e02\n\
     ldr        r1,DAT_08028e3c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08028e02:\n\
     ldr        r0,DAT_08028e40\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x91\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802b044\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028e48\n\
     add        r0,r7,#0x0\n\
     bl         fun_0802ad98\n\
     ldr        r4,DAT_08028e44\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028e62\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_08028e62\n\
.space 1\n\
.space 1\n\
DAT_08028e3c:\n\
     .word 0x020101D0\n\
DAT_08028e40:\n\
     .word 0x0857FBA8\n\
DAT_08028e44:\n\
     .word 0x020101CC\n\
LAB_08028e48:\n\
     mov        r2,#0x96\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802b044\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08028e62\n\
     ldr        r1,DAT_08028e9c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08028e62:\n\
     ldr        r0,DAT_08028ea0\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r3,#0x96\n\
     lsl        r3,r3,#0x3\n\
     add        r0,r4,r3\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802b044\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028ea4\n\
     add        r0,r7,#0x0\n\
     bl         fun_0802ad98\n\
     ldr        r4,DAT_08028e9c\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028ebe\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_08028ebe\n\
.space 1\n\
.space 1\n\
DAT_08028e9c:\n\
     .word 0x020101CC\n\
DAT_08028ea0:\n\
     .word 0x0857FBA8\n\
LAB_08028ea4:\n\
     mov        r1,#0x91\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r4,r1\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802b044\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08028ebe\n\
     ldr        r1,DAT_08028f20\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08028ebe:\n\
     ldr        r0,DAT_08028f24\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x84\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r1,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028f78\n\
     mov        r6,#0x0\n\
     add        r4,r1,#0x0\n\
LAB_08028ed2:\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x4\n\
     mov        r3,#0x9b\n\
     lsl        r3,r3,#0x3\n\
     add        r0,r0,r3\n\
     add        r0,r4,r0\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802b080\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028f34\n\
     mov        r5,#0x0\n\
     mov        r0,#0x78\n\
     strh       r0,[r7,#0x2a]\n\
     mov        r0,#0xb4\n\
     strh       r0,[r7,#0x28]\n\
     ldr        r4,DAT_08028f28\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028f18\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     mov        r0,#0x12\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_08028f2c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08028f30\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r5,[r4,#0x0]\n\
LAB_08028f18:\n\
     add        r0,r7,#0x0\n\
     bl         fun_0802ad98\n\
     b          LAB_08028f3e\n\
DAT_08028f20:\n\
     .word 0x020101CC\n\
DAT_08028f24:\n\
     .word 0x0857FBA8\n\
DAT_08028f28:\n\
     .word 0x020101DC\n\
DAT_08028f2c:\n\
     .word 0x020101D8\n\
DAT_08028f30:\n\
     .word 0x020101D4\n\
LAB_08028f34:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x3\n\
     bls        LAB_08028ed2\n\
LAB_08028f3e:\n\
     mov        r6,#0x0\n\
     ldr        r0,DAT_08028f48\n\
     ldr        r4,[r0,#0x0]\n\
     b          LAB_08028f56\n\
.space 1\n\
.space 1\n\
DAT_08028f48:\n\
     .word 0x0857FBA8\n\
LAB_08028f4c:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x0\n\
     bne        LAB_08028f78\n\
LAB_08028f56:\n\
     lsl        r0,r6,#0x5\n\
     mov        r1,#0xb3\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r0,r1\n\
     add        r0,r4,r0\n\
     add        r1,r7,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0802b0fc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028f4c\n\
     mov        r0,#0x0\n\
     strh       r0,[r7,#0x28]\n\
     add        r0,r7,#0x0\n\
     bl         fun_0802ad98\n\
LAB_08028f78:\n\
     mov        r4,#0x0\n\
     add        r1,sp,#0xc\n\
     add        r0,r7,#0x0\n\
     mov        r2,sp\n\
     mov        r3,r9\n\
     bl         fun_0803b4b0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028f90\n\
     mov        r4,#0x1\n\
     b          LAB_08028fba\n\
LAB_08028f90:\n\
     ldrh       r5,[r7,#0xa]\n\
     add        r0,r7,#0x0\n\
     mov        r1,sp\n\
     bl         fun_0803b524\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028fb6\n\
     add        r0,r7,#0x0\n\
     add        r1,sp,#0xc\n\
     mov        r2,sp\n\
     mov        r3,r9\n\
     bl         fun_0803b4b0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08028fb6\n\
     strh       r5,[r7,#0xa]\n\
     mov        r4,#0x1\n\
LAB_08028fb6:\n\
     cmp        r4,#0x0\n\
     beq        LAB_08028fc0\n\
LAB_08028fba:\n\
     ldrh       r0,[r7,#0x30]\n\
     add        r0,#0x1\n\
     strh       r0,[r7,#0x30]\n\
LAB_08028fc0:\n\
     ldrh       r2,[r7,#0x30]\n\
     cmp        r2,#0x2\n\
     bne        LAB_08028fd8\n\
     mov        r2,#0x0\n\
     strh       r2,[r7,#0x30]\n\
     ldr        r0,[r7,#0x34]\n\
     ldr        r1,[r7,#0x38]\n\
     str        r0,[r7,#0x0]\n\
     str        r1,[r7,#0x4]\n\
     str        r2,[r7,#0x10]\n\
     str        r2,[r7,#0x14]\n\
     b          LAB_08029010\n\
LAB_08028fd8:\n\
     cmp        r4,#0x0\n\
     beq        LAB_08028ff0\n\
     ldr        r0,[r7,#0x10]\n\
     ldr        r1,[sp,#0x14]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x10]\n\
     ldr        r0,[r7,#0x14]\n\
     mov        r3,r9\n\
     ldr        r1,[r3,#0x4]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x14]\n\
     b          LAB_08029010\n\
LAB_08028ff0:\n\
     strh       r4,[r7,#0x30]\n\
     ldr        r0,[sp,#0xc]\n\
     ldr        r1,[sp,#0x10]\n\
     str        r0,[r7,#0x34]\n\
     str        r1,[r7,#0x38]\n\
     str        r0,[r7,#0x0]\n\
     str        r1,[r7,#0x4]\n\
     ldr        r0,DAT_08029088\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r7,#0xa]\n\
     add        r1,r7,#0x0\n\
     bl         fun_0802aff8\n\
LAB_08029010:\n\
     ldrh       r5,[r7,#0x2a]\n\
     cmp        r5,#0x0\n\
     beq        LAB_08029094\n\
     ldr        r3,DAT_0802908c\n\
     ldrh       r2,[r7,#0xc]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08029090\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xc]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r2,[r7,#0xe]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xe]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0xc0\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xe]\n\
     bl         fun_08004920\n\
     mov        r8,r0\n\
     ldrh       r1,[r7,#0x2c]\n\
     cmp        r1,#0x4\n\
     bne        LAB_08029070\n\
     mov        r0,#0x0\n\
     strh       r0,[r7,#0x2c]\n\
     mov        r1,#0x0\n\
     ldrh       r0,[r7,#0x2e]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802906e\n\
     mov        r1,#0x1\n\
LAB_0802906e:\n\
     strh       r1,[r7,#0x2e]\n\
LAB_08029070:\n\
     ldrh       r0,[r7,#0x2c]\n\
     add        r0,#0x1\n\
     strh       r0,[r7,#0x2c]\n\
     ldrh       r0,[r7,#0xe]\n\
     ldrh       r1,[r7,#0x2e]\n\
     bl         fun_08004970\n\
     ldrh       r1,[r7,#0x8]\n\
     mov        r0,r8\n\
     bl         fun_0800476c\n\
     b          LAB_0802916c\n\
DAT_08029088:\n\
     .word 0x0857FBA8\n\
DAT_0802908c:\n\
     .word 0x03002000\n\
DAT_08029090:\n\
     .word 0xFFFFFCFF\n\
LAB_08029094:\n\
     ldr        r0,DAT_08029140\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080290a4\n\
     ldr        r0,DAT_08029144\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
LAB_080290a4:\n\
     ldr        r1,DAT_08029148\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r3,DAT_0802914c\n\
     ldrh       r2,[r7,#0xc]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08029150\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xc]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0xc0\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r2,[r7,#0xe]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xe]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xc]\n\
     bl         fun_08004920\n\
     mov        r8,r0\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x42\n\
     add        r1,r0,#0x0\n\
     add        r6,r7,#0x0\n\
     add        r6,#0x40\n\
     ldrh       r2,[r1,#0x0]\n\
     cmp        r2,#0x14\n\
     bne        LAB_08029110\n\
     strh       r5,[r1,#0x0]\n\
     ldrh       r0,[r6,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4\n\
     bne        LAB_08029110\n\
     strh       r5,[r6,#0x0]\n\
LAB_08029110:\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r5,[r7,#0x8]\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x10\n\
     mov        r0,#0xff\n\
     and        r1,r0\n\
     lsr        r4,r1,#0x5\n\
     cmp        r4,#0x4\n\
     bls        LAB_08029154\n\
     mov        r0,#0x8\n\
     sub        r0,r0,r4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     mov        r0,r8\n\
     add        r1,r5,#0x0\n\
     bl         fun_080040d4\n\
     b          LAB_0802915c\n\
DAT_08029140:\n\
     .word 0x020101D4\n\
DAT_08029144:\n\
     .word 0x020101D8\n\
DAT_08029148:\n\
     .word 0x020101DC\n\
DAT_0802914c:\n\
     .word 0x03002000\n\
DAT_08029150:\n\
     .word 0xFFFFFCFF\n\
LAB_08029154:\n\
     mov        r0,r8\n\
     add        r1,r5,#0x0\n\
     bl         fun_0800476c\n\
LAB_0802915c:\n\
     ldrh       r0,[r7,#0xc]\n\
     lsl        r1,r4,#0x2\n\
     ldrh       r6,[r6,#0x0]\n\
     add        r1,r6,r1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_08004970\n\
LAB_0802916c:\n\
     ldr        r3,[sp,#0x1c]\n\
     str        r3,[r7,#0x1c]\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x2c]\n\
     strh       r0,[r7,#0x8]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r10\n\
     ldr        r2,[sp,#0x28]\n\
     bl         fun_0803b5a0\n\
     ldr        r5,DAT_080291ec\n\
     ldrh       r2,[r7,#0xc]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r3,DAT_080291f0\n\
     mov        r8,r3\n\
     and        r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xc]\n\
     lsl        r3,r0,#0x3\n\
     add        r3,r3,r5\n\
     mov        r1,r10\n\
     ldrh       r2,[r1,#0x0]\n\
     add        r1,r2,#0x0\n\
     sub        r1,#0x1f\n\
     ldr        r0,DAT_080291f4\n\
     add        r6,r0,#0x0\n\
     and        r1,r6\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,[sp,#0x28]\n\
     ldrh       r4,[r0,#0x0]\n\
     sub        r4,#0x3f\n\
     mov        r0,#0xff\n\
     and        r4,r0\n\
     orr        r1,r4\n\
     ldr        r0,[r3,#0x0]\n\
     orr        r0,r1\n\
     str        r0,[r3,#0x0]\n\
     ldrh       r3,[r7,#0xe]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,r8\n\
     and        r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r7,[r7,#0xe]\n\
     lsl        r1,r7,#0x3\n\
     add        r1,r1,r5\n\
     sub        r2,#0x3f\n\
     and        r2,r6\n\
     lsl        r2,r2,#0x10\n\
     orr        r2,r4\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     add        sp,#0x30\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080291ec:\n\
     .word 0x03002000\n\
DAT_080291f0:\n\
     .word 0xFE00FF00\n\
DAT_080291f4:\n\
     .word 0x000001FF\n\
    ");
}
__attribute__((naked)) void fun_080291f8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x10\n\
     add        r6,r0,#0x0\n\
     ldr        r0,DAT_08029294\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r1,[r2,#0x18]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x8]\n\
     add        r0,sp,#0x8\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r2,[r2,#0x1c]\n\
     sub        r1,r1,r2\n\
     str        r1,[r0,#0x4]\n\
     bl         fun_080035b4\n\
     mov        r1,#0xff\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r0,r1,#0x10\n\
     ldr        r2,DAT_08029298\n\
     add        r1,r1,r2\n\
     lsr        r1,r1,#0x10\n\
     cmp        r1,#0x21\n\
     bhi        LAB_0802922c\n\
     strh       r0,[r6,#0x8]\n\
LAB_0802922c:\n\
     mov        r5,sp\n\
     add        r5,#0x6\n\
     add        r0,r6,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r6,#0xc]\n\
     bl         fun_08004920\n\
     add        r4,r0,#0x0\n\
     add        r0,sp,#0x4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x2]\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     ldrh       r1,[r6,#0x8]\n\
     add        r0,r4,#0x0\n\
     mov        r2,#0x0\n\
     mov        r3,#0xa\n\
     bl         fun_080041c4\n\
     ldrh       r0,[r6,#0xc]\n\
     mov        r3,#0x2\n\
     ldrsh      r1,[r4,r3]\n\
     mov        r3,#0x4\n\
     ldrsh      r2,[r4,r3]\n\
     mov        r3,#0xf\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     mov        r4,#0x1f\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0802ac3c\n\
     ldrh       r0,[r6,#0xe]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0xe]\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x11\n\
     cmp        r0,r1\n\
     bne        LAB_0802928a\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0xe]\n\
     add        r0,r6,#0x0\n\
     bl         fun_0802929c\n\
LAB_0802928a:\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08029294:\n\
     .word 0x0857FBA8\n\
DAT_08029298:\n\
     .word 0xFF410000\n\
    ");
}
__attribute__((naked)) void fun_0802929c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     sub        sp,#0x10\n\
     add        r7,r0,#0x0\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     mov        r2,#0x0\n\
     ldr        r0,[r7,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080292b8\n\
     mov        r8,r0\n\
     str        r2,[r7,#0x10]\n\
     b          LAB_080292d6\n\
LAB_080292b8:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x3\n\
     bhi        LAB_080292d6\n\
     lsl        r1,r2,#0x2\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x10\n\
     add        r1,r0,r1\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080292b8\n\
     mov        r8,r0\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_080292d6:\n\
     mov        r1,r8\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802932a\n\
     mov        r0,#0x11\n\
     bl         fun_080016f0\n\
     ldr        r0,[r7,#0x0]\n\
     ldr        r1,[r7,#0x4]\n\
     str        r0,[sp,#0x8]\n\
     str        r1,[sp,#0xc]\n\
     ldr        r6,DAT_08029338\n\
     ldrh       r0,[r7,#0x8]\n\
     sub        r0,#0x40\n\
     mov        r5,#0xff\n\
     and        r0,r5\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r6\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r4,#0xc0\n\
     lsl        r4,r4,#0x2\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[sp,#0x0]\n\
     ldrh       r0,[r7,#0x8]\n\
     sub        r0,#0x40\n\
     and        r0,r5\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r6\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[sp,#0x4]\n\
     add        r1,sp,#0x8\n\
     mov        r0,r8\n\
     mov        r2,sp\n\
     bl         fun_0802ae64\n\
LAB_0802932a:\n\
     add        sp,#0x10\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08029338:\n\
     .word 0x08049824\n\
    ");
}
__attribute__((naked)) void fun_0802933c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x24\n\
     add        r6,r0,#0x0\n\
     ldrh       r0,[r6,#0xe]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802934a\n\
     b          LAB_08029450\n\
LAB_0802934a:\n\
     ldrh       r0,[r6,#0x10]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x10]\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x13\n\
     cmp        r0,r1\n\
     bne        LAB_08029394\n\
     add        r0,r6,#0x0\n\
     bl         fun_0802aeac\n\
     ldr        r0,DAT_08029374\n\
     ldr        r1,[r0,#0x0]\n\
     add        r3,r1,#0x0\n\
     add        r3,#0x5c\n\
     mov        r2,#0x0\n\
     ldr        r0,[r1,#0x6c]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029378\n\
     str        r6,[r1,#0x6c]\n\
     b          LAB_08029450\n\
DAT_08029374:\n\
     .word 0x0857FBA8\n\
LAB_08029378:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x3\n\
     bhi        LAB_08029450\n\
     lsl        r0,r2,#0x2\n\
     add        r1,r3,#0x0\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029378\n\
     str        r6,[r1,#0x0]\n\
     b          LAB_08029450\n\
LAB_08029394:\n\
     ldrh       r0,[r6,#0x1c]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802942c\n\
     ldr        r0,DAT_080293f8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     add        r5,r6,#0x0\n\
     add        r5,#0x14\n\
     add        r1,r6,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_0802959c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802942c\n\
     ldr        r2,[r6,#0x18]\n\
     add        r2,#0x3\n\
     str        r2,[r6,#0x18]\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r1,[r6,#0x4]\n\
     str        r0,[sp,#0x14]\n\
     str        r1,[sp,#0x18]\n\
     ldr        r0,[r6,#0x14]\n\
     ldr        r1,[sp,#0x14]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x14]\n\
     add        r1,sp,#0x14\n\
     ldr        r0,[r1,#0x4]\n\
     add        r2,r2,r0\n\
     str        r2,[r1,#0x4]\n\
     add        r4,sp,#0x1c\n\
     add        r0,r6,#0x0\n\
     add        r2,sp,#0x8\n\
     add        r3,r4,#0x0\n\
     bl         fun_0803b4b0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080293fc\n\
     ldr        r0,[sp,#0x14]\n\
     ldr        r1,[sp,#0x18]\n\
     str        r0,[r6,#0x0]\n\
     str        r1,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     add        r1,sp,#0x8\n\
     bl         fun_0803b524\n\
     b          LAB_0802942c\n\
DAT_080293f8:\n\
     .word 0x0857FBA8\n\
LAB_080293fc:\n\
     ldr        r0,[sp,#0x1c]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[sp,#0x1c]\n\
     ldr        r0,[r4,#0x4]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r4,#0x4]\n\
     ldr        r3,[sp,#0x1c]\n\
     ldr        r4,[sp,#0x20]\n\
     str        r6,[sp,#0x4]\n\
     str        r4,[sp,#0x0]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x0\n\
     add        r2,r6,#0x0\n\
     bl         fun_0802a9b8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029426\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x1c]\n\
     b          LAB_0802942c\n\
LAB_08029426:\n\
     add        r0,r6,#0x0\n\
     bl         fun_0802a608\n\
LAB_0802942c:\n\
     add        r4,sp,#0x10\n\
     mov        r5,sp\n\
     add        r5,#0x12\n\
     add        r0,r6,#0x0\n\
     add        r1,r4,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r6,#0xc]\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r4,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r5,r3]\n\
     mov        r3,#0x7\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_0802aae4\n\
LAB_08029450:\n\
     add        sp,#0x24\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08029458()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x8\n\
     add        r7,r0,#0x0\n\
     mov        r0,#0x0\n\
     strh       r0,[r7,#0x38]\n\
     ldr        r0,[r7,#0x30]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802946a\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_0802946a:\n\
     mov        r5,#0xc8\n\
     lsl        r5,r5,#0x5\n\
     add        r1,r5,#0x0\n\
     bl         fun_0800354c\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     sub        r4,r1,r0\n\
     add        r4,#0x80\n\
     cmp        r4,r1\n\
     ble        LAB_08029482\n\
     add        r4,r1,#0x0\n\
LAB_08029482:\n\
     add        r0,r4,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800353c\n\
     add        r1,r0,#0x0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800353c\n\
     add        r4,r0,#0x0\n\
     ldr        r0,[r7,#0x34]\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800353c\n\
     ldr        r1,[r7,#0x30]\n\
     add        r1,r1,r0\n\
     str        r1,[r7,#0x30]\n\
     ldr        r2,[r7,#0x34]\n\
     cmp        r2,#0x0\n\
     bge        LAB_080294b4\n\
     ldr        r0,DAT_080294b0\n\
     cmp        r1,r0\n\
     bge        LAB_080294bc\n\
     b          LAB_080294b8\n\
DAT_080294b0:\n\
     .word 0xFFFFE700\n\
LAB_080294b4:\n\
     cmp        r1,r5\n\
     ble        LAB_080294bc\n\
LAB_080294b8:\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
     str        r0,[r7,#0x34]\n\
LAB_080294bc:\n\
     ldrh       r1,[r7,#0x30]\n\
     lsr        r0,r1,#0x8\n\
     strh       r0,[r7,#0x8]\n\
     ldr        r0,DAT_08029550\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0x18\n\
     add        r1,r7,#0x0\n\
     add        r1,#0x20\n\
     bl         fun_0802b3a0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029554\n\
     mov        r5,sp\n\
     add        r5,#0x6\n\
     add        r0,r7,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r7,#0xc]\n\
     bl         fun_08004920\n\
     add        r6,r0,#0x0\n\
     add        r0,sp,#0x4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x2]\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r6,#0x4]\n\
     ldrh       r1,[r7,#0x8]\n\
     mov        r3,#0x5f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r6,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080041c4\n\
     ldrh       r0,[r7,#0xc]\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r6,r2]\n\
     mov        r3,#0x4\n\
     ldrsh      r2,[r6,r3]\n\
     mov        r4,#0x1f\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     add        r3,r4,#0x0\n\
     bl         fun_0802ab8c\n\
     ldrh       r0,[r7,#0xe]\n\
     bl         fun_08004920\n\
     add        r6,r0,#0x0\n\
     add        r0,sp,#0x4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x2]\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r6,#0x4]\n\
     ldrh       r1,[r7,#0x8]\n\
     add        r0,r6,#0x0\n\
     mov        r2,#0x0\n\
     add        r3,r4,#0x0\n\
     bl         fun_080041c4\n\
     ldrh       r0,[r7,#0xe]\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r6,r2]\n\
     mov        r3,#0x4\n\
     ldrsh      r2,[r6,r3]\n\
     mov        r3,#0x3f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     add        r3,r4,#0x0\n\
     bl         fun_0802ac3c\n\
     b          LAB_0802958c\n\
DAT_08029550:\n\
     .word 0x0857FBA8\n\
LAB_08029554:\n\
     ldr        r2,DAT_08029594\n\
     ldrh       r0,[r7,#0xc]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08029598\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r3,[r7,#0xc]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     orr        r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xe]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r7,[r7,#0xe]\n\
     lsl        r1,r7,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r3\n\
     str        r0,[r1,#0x0]\n\
LAB_0802958c:\n\
     add        sp,#0x8\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08029594:\n\
     .word 0x03002000\n\
DAT_08029598:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_0802959c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x34\n\
     add        r5,r0,#0x0\n\
     add        r0,r1,#0x0\n\
     str        r2,[sp,#0x28]\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,[r0,#0x4]\n\
     str        r1,[sp,#0x0]\n\
     str        r2,[sp,#0x4]\n\
     ldr        r2,[r5,#0x0]\n\
     ldr        r1,[sp,#0x0]\n\
     sub        r1,r1,r2\n\
     str        r1,[sp,#0x0]\n\
     ldr        r2,[r5,#0x4]\n\
     ldr        r1,[sp,#0x4]\n\
     sub        r1,r1,r2\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x8]\n\
     add        r4,sp,#0x8\n\
     str        r1,[r4,#0x4]\n\
     str        r1,[sp,#0x2c]\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x10\n\
     bl         fun_0802b3a0\n\
     lsl        r0,r0,#0x10\n\
     add        r6,r4,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_080295e2\n\
     b          LAB_08029848\n\
LAB_080295e2:\n\
     ldrh       r0,[r5,#0x38]\n\
     add        r3,sp,#0x10\n\
     mov        r9,r3\n\
     mov        r1,sp\n\
     add        r1,#0x18\n\
     str        r1,[sp,#0x30]\n\
     add        r3,sp,#0x20\n\
     mov        r8,r3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802962a\n\
     mov        r0,#0x1\n\
     strh       r0,[r5,#0x38]\n\
     ldrh       r0,[r5,#0x8]\n\
     sub        r0,#0x40\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     bl         fun_0802b334\n\
     mov        r4,#0x0\n\
LAB_08029608:\n\
     lsl        r0,r4,#0x3\n\
     add        r3,r5,r0\n\
     ldr        r1,DAT_080296fc\n\
     add        r1,r0,r1\n\
     ldr        r2,[r1,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r3,#0x3c]\n\
     str        r2,[r3,#0x40]\n\
     add        r0,#0x3c\n\
     add        r0,r5,r0\n\
     bl         fun_0802b368\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x6\n\
     bls        LAB_08029608\n\
LAB_0802962a:\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[sp,#0x8]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     mov        r7,r9\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r6,#0x4]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x4]\n\
     ldr        r2,DAT_08029700\n\
     ldrh       r0,[r5,#0x8]\n\
     sub        r0,#0x40\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     str        r0,[sp,#0x18]\n\
     ldrh       r0,[r5,#0x8]\n\
     sub        r0,#0x40\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     ldr        r3,[sp,#0x30]\n\
     mov        r10,r3\n\
     str        r0,[r3,#0x4]\n\
     mov        r0,r10\n\
     bl         fun_08003584\n\
     add        r0,r7,#0x0\n\
     mov        r1,r10\n\
     bl         fun_0800355c\n\
     add        r4,r0,#0x0\n\
     lsr        r4,r4,#0x1f\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r5,#0x44]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r5,#0x48]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x4]\n\
     ldr        r0,[r5,#0x44]\n\
     ldr        r1,[r5,#0x64]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x20]\n\
     mov        r6,r8\n\
     ldr        r0,[r5,#0x48]\n\
     ldr        r1,[r5,#0x68]\n\
     sub        r0,r0,r1\n\
     str        r0,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r7,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     mvn        r0,r0\n\
     lsr        r0,r0,#0x1f\n\
     cmp        r4,#0x0\n\
     beq        LAB_08029788\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029708\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r5,#0x3c]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r5,#0x40]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x4]\n\
     ldr        r0,[r5,#0x3c]\n\
     ldr        r1,[r5,#0x44]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,[r5,#0x40]\n\
     ldr        r1,[r5,#0x48]\n\
     sub        r0,r0,r1\n\
     str        r0,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r7,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     bgt        LAB_080296e8\n\
     b          LAB_08029848\n\
LAB_080296e8:\n\
     ldr        r0,DAT_08029704\n\
     str        r0,[sp,#0x2c]\n\
     ldr        r0,[sp,#0x18]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldr        r1,[sp,#0x28]\n\
     str        r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     ldr        r0,[r3,#0x4]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_08029846\n\
DAT_080296fc:\n\
     .word 0x087B72BC\n\
DAT_08029700:\n\
     .word 0x08049824\n\
DAT_08029704:\n\
     .word 0x0000FFFF\n\
LAB_08029708:\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r5,#0x44]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r5,#0x48]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x4]\n\
     ldr        r0,[r5,#0x44]\n\
     ldr        r1,[r5,#0x4c]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,[r5,#0x48]\n\
     ldr        r1,[r5,#0x50]\n\
     sub        r0,r0,r1\n\
     str        r0,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r7,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0802973c\n\
     b          LAB_08029848\n\
LAB_0802973c:\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r5,#0x4c]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r5,#0x50]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x4]\n\
     ldr        r0,[r5,#0x4c]\n\
     ldr        r1,[r5,#0x54]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,[r5,#0x50]\n\
     ldr        r1,[r5,#0x58]\n\
     sub        r0,r0,r1\n\
     str        r0,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r7,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_08029848\n\
     ldr        r0,DAT_08029784\n\
     str        r0,[sp,#0x2c]\n\
     ldr        r0,[sp,#0x18]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldr        r1,[sp,#0x28]\n\
     str        r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     ldr        r0,[r3,#0x4]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_08029846\n\
.space 1\n\
.space 1\n\
DAT_08029784:\n\
     .word 0x0000FFFC\n\
LAB_08029788:\n\
     cmp        r0,#0x0\n\
     beq        LAB_080297cc\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r5,#0x64]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r5,#0x68]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x4]\n\
     ldr        r0,[r5,#0x64]\n\
     ldr        r1,[r5,#0x6c]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,[r5,#0x68]\n\
     ldr        r1,[r5,#0x70]\n\
     sub        r0,r0,r1\n\
     str        r0,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r7,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_08029848\n\
     mov        r0,#0x1\n\
     str        r0,[sp,#0x2c]\n\
     ldr        r0,[sp,#0x18]\n\
     ldr        r1,[sp,#0x28]\n\
     str        r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     b          LAB_08029844\n\
LAB_080297cc:\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r5,#0x5c]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r5,#0x60]\n\
     sub        r0,r0,r1\n\
     mov        r1,r9\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,[r5,#0x5c]\n\
     ldr        r1,[r5,#0x64]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,[r5,#0x60]\n\
     ldr        r1,[r5,#0x68]\n\
     sub        r0,r0,r1\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x4]\n\
     mov        r0,r8\n\
     bl         fun_08003584\n\
     mov        r0,r9\n\
     mov        r1,r8\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_08029848\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r5,#0x54]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r5,#0x58]\n\
     sub        r0,r0,r1\n\
     mov        r1,r9\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,[r5,#0x54]\n\
     ldr        r1,[r5,#0x5c]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,[r5,#0x58]\n\
     ldr        r1,[r5,#0x60]\n\
     sub        r0,r0,r1\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x4]\n\
     mov        r0,r8\n\
     bl         fun_08003584\n\
     mov        r0,r9\n\
     mov        r1,r8\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_08029848\n\
     mov        r0,#0x4\n\
     str        r0,[sp,#0x2c]\n\
     ldr        r0,[sp,#0x18]\n\
     ldr        r1,[sp,#0x28]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r3,[sp,#0x30]\n\
LAB_08029844:\n\
     ldr        r0,[r3,#0x4]\n\
LAB_08029846:\n\
     str        r0,[r1,#0x4]\n\
LAB_08029848:\n\
     ldr        r0,[sp,#0x2c]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029852\n\
     mov        r0,#0x0\n\
     b          LAB_08029854\n\
LAB_08029852:\n\
     mov        r0,#0x1\n\
LAB_08029854:\n\
     add        sp,#0x34\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08029864()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x24\n\
     add        r6,r0,#0x0\n\
     ldrh       r0,[r6,#0x2c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029878\n\
     b          LAB_0802997c\n\
LAB_08029878:\n\
     ldrh       r3,[r6,#0x8]\n\
     add        r7,r6,#0x0\n\
     add        r7,#0xc\n\
     cmp        r3,#0x0\n\
     beq        LAB_08029962\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r0,[r6,#0xc]\n\
     add        r1,r2,#0x0\n\
     cmp        r1,r0\n\
     beq        LAB_080298b4\n\
     cmp        r1,r0\n\
     ble        LAB_0802989e\n\
     add        r0,#0x96\n\
     str        r0,[r6,#0xc]\n\
     cmp        r1,r0\n\
     bgt        LAB_080298b4\n\
     str        r1,[r6,#0xc]\n\
     sub        r0,r3,#0x1\n\
     strh       r0,[r6,#0x8]\n\
LAB_0802989e:\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r2,r0\n\
     bge        LAB_080298b4\n\
     sub        r0,#0x96\n\
     str        r0,[r6,#0xc]\n\
     cmp        r2,r0\n\
     blt        LAB_080298b4\n\
     str        r2,[r6,#0xc]\n\
     ldrh       r0,[r6,#0x8]\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x8]\n\
LAB_080298b4:\n\
     ldr        r2,[r6,#0x4]\n\
     ldr        r0,[r6,#0x10]\n\
     add        r1,r2,#0x0\n\
     cmp        r1,r0\n\
     beq        LAB_080298e8\n\
     cmp        r1,r0\n\
     ble        LAB_080298d2\n\
     add        r0,#0x96\n\
     str        r0,[r6,#0x10]\n\
     cmp        r1,r0\n\
     bgt        LAB_080298e8\n\
     str        r1,[r6,#0x10]\n\
     ldrh       r0,[r6,#0x8]\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x8]\n\
LAB_080298d2:\n\
     ldr        r0,[r6,#0x10]\n\
     cmp        r2,r0\n\
     bge        LAB_080298e8\n\
     sub        r0,#0x96\n\
     str        r0,[r6,#0x10]\n\
     cmp        r2,r0\n\
     blt        LAB_080298e8\n\
     str        r2,[r6,#0x10]\n\
     ldrh       r0,[r6,#0x8]\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x8]\n\
LAB_080298e8:\n\
     ldrh       r0,[r6,#0x14]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029932\n\
     add        r1,r0,#0x0\n\
     mov        r0,#0x0\n\
     bl         fun_0800362c\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r2,r0\n\
     bne        LAB_0802990c\n\
     ldrh       r0,[r6,#0x14]\n\
     sub        r0,#0x1\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     strh       r0,[r6,#0x14]\n\
LAB_0802990c:\n\
     cmp        r2,#0x1\n\
     bne        LAB_0802991a\n\
     ldrh       r0,[r6,#0x14]\n\
     add        r0,#0x1\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     strh       r0,[r6,#0x14]\n\
LAB_0802991a:\n\
     ldrh       r0,[r6,#0x18]\n\
     bl         fun_08004920\n\
     ldrh       r1,[r6,#0x14]\n\
     bl         fun_0800476c\n\
     ldrh       r0,[r6,#0x14]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029932\n\
     ldrh       r0,[r6,#0x8]\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x8]\n\
LAB_08029932:\n\
     ldr        r0,DAT_08029974\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r8,r0\n\
     mov        r5,#0xf3\n\
     lsl        r5,r5,#0x3\n\
     add        r5,r8\n\
     add        r4,r6,#0x0\n\
     add        r4,#0xc\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0802b224\n\
     ldrh       r0,[r6,#0x8]\n\
     add        r7,r4,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029962\n\
     add        r0,r5,#0x0\n\
     bl         fun_0802b230\n\
     ldr        r1,DAT_08029978\n\
     add        r1,r8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08029962:\n\
     add        r4,sp,#0x10\n\
     mov        r5,sp\n\
     add        r5,#0x12\n\
     add        r0,r7,#0x0\n\
     add        r1,r4,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     b          LAB_08029a80\n\
DAT_08029974:\n\
     .word 0x0857FBA8\n\
DAT_08029978:\n\
     .word 0x0000085A\n\
LAB_0802997c:\n\
     ldrh       r0,[r6,#0x18]\n\
     bl         fun_08004920\n\
     mov        r8,r0\n\
     ldrh       r4,[r6,#0x2e]\n\
     mov        r9,r4\n\
     cmp        r4,#0x0\n\
     beq        LAB_080299d4\n\
     ldr        r0,DAT_080299d0\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x20]\n\
     add        r0,#0x40\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     strh       r0,[r6,#0x14]\n\
     ldr        r0,[r2,#0x18]\n\
     ldr        r1,[r2,#0x1c]\n\
     str        r0,[r6,#0xc]\n\
     str        r1,[r6,#0x10]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0xc\n\
     mov        r1,r8\n\
     add        r1,#0x2\n\
     mov        r2,r8\n\
     add        r2,#0x4\n\
     bl         fun_0803b5a0\n\
     ldrh       r1,[r6,#0x14]\n\
     mov        r3,#0xa\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     mov        r0,r8\n\
     mov        r2,#0x14\n\
     bl         fun_080041c4\n\
     ldrh       r0,[r6,#0x18]\n\
     mov        r2,r8\n\
     mov        r3,#0x2\n\
     ldrsh      r1,[r2,r3]\n\
     mov        r4,#0x4\n\
     ldrsh      r2,[r2,r4]\n\
     b          LAB_08029a8a\n\
.space 1\n\
.space 1\n\
DAT_080299d0:\n\
     .word 0x0857FBA8\n\
LAB_080299d4:\n\
     ldrh       r0,[r6,#0x30]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029a9a\n\
     ldr        r0,[r6,#0x34]\n\
     add        r0,#0x1\n\
     str        r0,[r6,#0x34]\n\
     ldr        r2,[r6,#0x20]\n\
     add        r2,#0x3\n\
     str        r2,[r6,#0x20]\n\
     ldr        r0,[r6,#0xc]\n\
     ldr        r1,[r6,#0x10]\n\
     str        r0,[sp,#0x14]\n\
     str        r1,[sp,#0x18]\n\
     ldr        r0,[r6,#0x1c]\n\
     ldr        r1,[sp,#0x14]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x14]\n\
     add        r1,sp,#0x14\n\
     ldr        r0,[r1,#0x4]\n\
     add        r2,r2,r0\n\
     str        r2,[r1,#0x4]\n\
     ldr        r0,[r6,#0x28]\n\
     ldr        r2,[r6,#0x24]\n\
     add        r0,r0,r2\n\
     ldr        r2,DAT_08029a38\n\
     and        r0,r2\n\
     str        r0,[r6,#0x28]\n\
     lsr        r0,r0,#0x8\n\
     strh       r0,[r6,#0x14]\n\
     add        r4,r6,#0x0\n\
     add        r4,#0xc\n\
     add        r5,sp,#0x1c\n\
     add        r0,r4,#0x0\n\
     add        r2,sp,#0x8\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803b4b0\n\
     lsl        r0,r0,#0x10\n\
     add        r7,r4,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029a3c\n\
     ldr        r0,[sp,#0x14]\n\
     ldr        r1,[sp,#0x18]\n\
     str        r0,[r6,#0xc]\n\
     str        r1,[r6,#0x10]\n\
     add        r0,r7,#0x0\n\
     add        r1,sp,#0x8\n\
     bl         fun_0803b524\n\
     b          LAB_08029a68\n\
DAT_08029a38:\n\
     .word 0x0000FFFF\n\
LAB_08029a3c:\n\
     ldr        r0,[sp,#0x1c]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[sp,#0x1c]\n\
     ldr        r0,[r5,#0x4]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r5,#0x4]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x1c\n\
     add        r1,r6,#0x0\n\
     add        r1,#0x24\n\
     ldr        r3,[sp,#0x1c]\n\
     ldr        r4,[sp,#0x20]\n\
     str        r7,[sp,#0x4]\n\
     str        r4,[sp,#0x0]\n\
     add        r2,r7,#0x0\n\
     bl         fun_0802a9b8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029a68\n\
     mov        r0,r9\n\
     strh       r0,[r6,#0x30]\n\
LAB_08029a68:\n\
     add        r4,sp,#0x10\n\
     mov        r5,sp\n\
     add        r5,#0x12\n\
     add        r0,r7,#0x0\n\
     add        r1,r4,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r1,[r6,#0x14]\n\
     mov        r0,r8\n\
     bl         fun_0800476c\n\
LAB_08029a80:\n\
     ldrh       r0,[r6,#0x18]\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r4,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r5,r3]\n\
LAB_08029a8a:\n\
     mov        r3,#0x1f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     mov        r4,#0xf\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0802ac3c\n\
     b          LAB_08029ac4\n\
LAB_08029a9a:\n\
     add        r0,r6,#0x0\n\
     add        r0,#0xc\n\
     add        r4,sp,#0x10\n\
     mov        r5,sp\n\
     add        r5,#0x12\n\
     add        r1,r4,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r6,#0x18]\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r4,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r5,r3]\n\
     mov        r3,#0x1f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     mov        r4,#0xf\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0802ac3c\n\
LAB_08029ac4:\n\
     add        sp,#0x24\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08029ad4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     ldrh       r0,[r3,#0x14]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029ae2\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x14]\n\
LAB_08029ae2:\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x2c]\n\
     ldr        r0,DAT_08029b24\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_08029b28\n\
     add        r2,r0,r1\n\
     ldrh       r4,[r2,#0x0]\n\
     lsl        r1,r4,#0xd\n\
     mov        r4,#0xff\n\
     lsl        r4,r4,#0x8\n\
     add        r1,r1,r4\n\
     str        r1,[r3,#0x0]\n\
     mov        r1,#0xb0\n\
     lsl        r1,r1,#0x5\n\
     str        r1,[r3,#0x4]\n\
     mov        r1,#0x3\n\
     strh       r1,[r3,#0x8]\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r1,#0x1\n\
     strh       r1,[r2,#0x0]\n\
     mov        r1,#0xf3\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r0,r1\n\
     add        r1,r3,#0x0\n\
     add        r1,#0xc\n\
     bl         fun_0802b1bc\n\
     mov        r0,#0xb\n\
     bl         fun_080016f0\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08029b24:\n\
     .word 0x0857FBA8\n\
DAT_08029b28:\n\
     .word 0x0000085C\n\
    ");
}
__attribute__((naked)) void fun_08029b2c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x20\n\
     add        r6,r0,#0x0\n\
     ldrh       r2,[r6,#0x1a]\n\
     cmp        r2,#0x0\n\
     beq        LAB_08029c2c\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r0,DAT_08029b7c\n\
     cmp        r1,r0\n\
     bgt        LAB_08029b48\n\
     cmp        r2,#0x9\n\
     bls        LAB_08029b48\n\
     mov        r0,#0x9\n\
     strh       r0,[r6,#0x1a]\n\
LAB_08029b48:\n\
     ldrh       r0,[r6,#0x1a]\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x1a]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x8\n\
     bhi        LAB_08029b9a\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029b88\n\
     ldr        r3,DAT_08029b80\n\
     ldrh       r0,[r6,#0xc]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_08029b84\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r6,[r6,#0xc]\n\
     lsl        r1,r6,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_08029c2c\n\
DAT_08029b7c:\n\
     .word 0x00005EFF\n\
DAT_08029b80:\n\
     .word 0x03002000\n\
DAT_08029b84:\n\
     .word 0xFFFFFCFF\n\
LAB_08029b88:\n\
     ldrh       r0,[r6,#0xc]\n\
     ldrh       r1,[r6,#0x1a]\n\
     sub        r1,#0x1\n\
     asr        r1,r1,#0x1\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_08004930\n\
LAB_08029b9a:\n\
     ldrh       r0,[r6,#0x18]\n\
     cmp        r0,#0xff\n\
     bhi        LAB_08029ba4\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x18]\n\
LAB_08029ba4:\n\
     ldr        r2,[r6,#0x14]\n\
     sub        r2,#0x3\n\
     str        r2,[r6,#0x14]\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r1,[r6,#0x4]\n\
     str        r0,[sp,#0x10]\n\
     str        r1,[sp,#0x14]\n\
     ldr        r0,[r6,#0x10]\n\
     ldr        r1,[sp,#0x10]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x10]\n\
     add        r1,sp,#0x10\n\
     ldr        r0,[r1,#0x4]\n\
     add        r2,r2,r0\n\
     str        r2,[r1,#0x4]\n\
     add        r4,sp,#0x18\n\
     add        r0,r6,#0x0\n\
     add        r2,sp,#0x4\n\
     add        r3,r4,#0x0\n\
     bl         fun_0803b4b0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029be6\n\
     ldr        r0,[sp,#0x10]\n\
     ldr        r1,[sp,#0x14]\n\
     str        r0,[r6,#0x0]\n\
     str        r1,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     add        r1,sp,#0x4\n\
     bl         fun_0803b524\n\
     b          LAB_08029bfc\n\
LAB_08029be6:\n\
     ldr        r0,[sp,#0x18]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[sp,#0x18]\n\
     ldr        r1,[r4,#0x4]\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     str        r1,[r4,#0x4]\n\
     ldr        r0,[sp,#0x18]\n\
     asr        r0,r0,#0x2\n\
     str        r0,[r6,#0x10]\n\
     asr        r1,r1,#0x3\n\
     str        r1,[r6,#0x14]\n\
LAB_08029bfc:\n\
     add        r4,sp,#0xc\n\
     mov        r5,sp\n\
     add        r5,#0xe\n\
     add        r0,r6,#0x0\n\
     add        r1,r4,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r6,#0xc]\n\
     bl         fun_08004920\n\
     ldrh       r1,[r6,#0x18]\n\
     bl         fun_080047d0\n\
     ldrh       r0,[r6,#0xc]\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r4,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r5,r3]\n\
     mov        r3,#0x7\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_0802ab8c\n\
LAB_08029c2c:\n\
     add        sp,#0x20\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08029c34()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r3,#0x0\n\
     ldr        r6,DAT_08029c8c\n\
     ldrh       r1,[r5,#0x12]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r5,#0x18]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r4,r0\n\
     bne        LAB_08029c94\n\
     ldrh       r0,[r5,#0x16]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x16]\n\
     ldr        r2,DAT_08029c90\n\
     ldrh       r4,[r5,#0x14]\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r0,r1\n\
     bne        LAB_08029cbe\n\
     strh       r3,[r5,#0x18]\n\
     strh       r3,[r5,#0x16]\n\
     ldrh       r0,[r5,#0x12]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x12]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     bne        LAB_08029c7a\n\
     strh       r3,[r5,#0x12]\n\
LAB_08029c7a:\n\
     ldrh       r0,[r5,#0x14]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x14]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     bne        LAB_08029cbe\n\
     strh       r3,[r5,#0x14]\n\
     b          LAB_08029cbe\n\
DAT_08029c8c:\n\
     .word 0x087B732C\n\
DAT_08029c90:\n\
     .word 0x087B7350\n\
LAB_08029c94:\n\
     ldrh       r2,[r5,#0x1a]\n\
     add        r2,#0x1\n\
     strh       r2,[r5,#0x1a]\n\
     ldrh       r7,[r5,#0x18]\n\
     lsl        r1,r7,#0x1\n\
     ldrh       r7,[r5,#0x12]\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r7\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     add        r0,r6,#0x2\n\
     add        r1,r1,r0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r2,r1\n\
     bne        LAB_08029cbe\n\
     strh       r3,[r5,#0x1a]\n\
     add        r0,r4,#0x1\n\
     strh       r0,[r5,#0x18]\n\
     mov        r3,#0x1\n\
LAB_08029cbe:\n\
     cmp        r3,#0x0\n\
     beq        LAB_08029d24\n\
     ldrh       r1,[r5,#0x10]\n\
     lsl        r0,r1,#0x3\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     ldr        r3,[r5,#0xc]\n\
     add        r3,r3,r0\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,[r5,#0x4]\n\
     str        r0,[r3,#0x0]\n\
     str        r1,[r3,#0x4]\n\
     ldrh       r0,[r5,#0x8]\n\
     mov        r6,#0x0\n\
     strh       r0,[r3,#0xa]\n\
     str        r6,[r3,#0x10]\n\
     str        r6,[r3,#0x14]\n\
     mov        r0,#0x19\n\
     strh       r0,[r3,#0x18]\n\
     mov        r0,#0x96\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r3,#0x1a]\n\
     ldr        r4,DAT_08029d2c\n\
     ldrh       r7,[r3,#0xc]\n\
     lsl        r1,r7,#0x3\n\
     add        r1,r1,r4\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_08029d30\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r3,#0xc]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r4\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r3,#0xc]\n\
     mov        r1,#0x0\n\
     bl         fun_08004930\n\
     ldrh       r0,[r5,#0x10]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x10]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r5,#0xa]\n\
     cmp        r0,r1\n\
     bne        LAB_08029d24\n\
     strh       r6,[r5,#0x10]\n\
LAB_08029d24:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08029d2c:\n\
     .word 0x03002000\n\
DAT_08029d30:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_08029d34()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x8\n\
     add        r6,r0,#0x0\n\
     ldrh       r0,[r6,#0x26]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029d44\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x26]\n\
LAB_08029d44:\n\
     ldrh       r0,[r6,#0x24]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029d58\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x24]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029d58\n\
     mov        r0,#0xf0\n\
     strh       r0,[r6,#0x26]\n\
LAB_08029d58:\n\
     ldrh       r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029d84\n\
     ldrh       r0,[r6,#0x1c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029e40\n\
     ldr        r0,DAT_08029d80\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0x18\n\
     mov        r2,#0xc8\n\
     lsl        r2,r2,#0xd\n\
     add        r1,r6,#0x0\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029e40\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0xc]\n\
     b          LAB_08029e40\n\
DAT_08029d80:\n\
     .word 0x0857FBA8\n\
LAB_08029d84:\n\
     ldrh       r1,[r6,#0x1e]\n\
     cmp        r1,#0x1\n\
     beq        LAB_08029df4\n\
     cmp        r1,#0x1\n\
     bgt        LAB_08029d94\n\
     cmp        r1,#0x0\n\
     beq        LAB_08029d9a\n\
     b          LAB_08029dae\n\
LAB_08029d94:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08029dc8\n\
     b          LAB_08029dae\n\
LAB_08029d9a:\n\
     mov        r0,#0x3\n\
     strh       r0,[r6,#0xa]\n\
     ldrh       r0,[r6,#0x22]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_08029db4\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x22]\n\
     mov        r0,#0x2\n\
     strh       r0,[r6,#0x1e]\n\
     strh       r0,[r6,#0x20]\n\
LAB_08029dae:\n\
     ldr        r3,[r6,#0x4]\n\
     ldr        r2,[r6,#0x18]\n\
     b          LAB_08029e18\n\
LAB_08029db4:\n\
     ldr        r3,[r6,#0x4]\n\
     ldr        r2,[r6,#0x18]\n\
     cmp        r3,r2\n\
     blt        LAB_08029e18\n\
     strh       r1,[r6,#0x22]\n\
     ldrh       r0,[r6,#0x1c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029e18\n\
     strh       r1,[r6,#0xc]\n\
     b          LAB_08029e18\n\
LAB_08029dc8:\n\
     ldrh       r0,[r6,#0x20]\n\
     ldr        r3,[r6,#0x4]\n\
     ldr        r2,[r6,#0x18]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08029e1e\n\
     mov        r0,#0x5\n\
     strh       r0,[r6,#0x20]\n\
     ldrh       r0,[r6,#0xa]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029de2\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0xa]\n\
     b          LAB_08029e18\n\
LAB_08029de2:\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x1e]\n\
     mov        r0,#0x14\n\
     strh       r0,[r6,#0x20]\n\
     ldr        r0,DAT_08029df0\n\
     str        r0,[r6,#0x14]\n\
     b          LAB_08029e18\n\
DAT_08029df0:\n\
     .word 0xFFFFFC18\n\
LAB_08029df4:\n\
     ldr        r0,[r6,#0x14]\n\
     ldr        r3,[r6,#0x4]\n\
     ldr        r2,[r6,#0x18]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08029e18\n\
     ldrh       r0,[r6,#0x20]\n\
     add        r1,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08029e1e\n\
     mov        r0,#0x14\n\
     strh       r0,[r6,#0x20]\n\
     ldrh       r0,[r6,#0xa]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_08029e16\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0xa]\n\
     b          LAB_08029e18\n\
LAB_08029e16:\n\
     strh       r1,[r6,#0x1e]\n\
LAB_08029e18:\n\
     ldrh       r0,[r6,#0x20]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029e22\n\
LAB_08029e1e:\n\
     sub        r0,#0x1\n\
     strh       r0,[r6,#0x20]\n\
LAB_08029e22:\n\
     cmp        r3,r2\n\
     bge        LAB_08029e2c\n\
     ldr        r0,[r6,#0x14]\n\
     add        r0,#0x6\n\
     str        r0,[r6,#0x14]\n\
LAB_08029e2c:\n\
     ldr        r4,[r6,#0x0]\n\
     ldr        r5,[r6,#0x4]\n\
     ldr        r0,[r6,#0x14]\n\
     add        r5,r5,r0\n\
     mov        r1,#0xf5\n\
     bl         fun_0800353c\n\
     str        r0,[r6,#0x14]\n\
     str        r4,[r6,#0x0]\n\
     str        r5,[r6,#0x4]\n\
LAB_08029e40:\n\
     ldrh       r0,[r6,#0x8]\n\
     ldrh       r1,[r6,#0xa]\n\
     bl         fun_08004970\n\
     mov        r4,sp\n\
     add        r4,#0x6\n\
     add        r0,r6,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r6,#0x8]\n\
     add        r1,sp,#0x4\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r1,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r4,r3]\n\
     mov        r3,#0x1f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_0802aae4\n\
     add        sp,#0x8\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08029e74()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x8\n\
     add        r4,r0,#0x0\n\
     ldr        r2,[r1,#0x0]\n\
     str        r2,[r4,#0x14]\n\
     ldrh       r0,[r1,#0x4]\n\
     mov        r5,#0x0\n\
     strh       r0,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x1a]\n\
     ldrh       r0,[r2,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,[r4,#0x14]\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r4,#0x4]\n\
     ldr        r1,[r4,#0x14]\n\
     ldrh       r2,[r4,#0x1a]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r4,#0x8]\n\
     ldr        r1,[r4,#0x14]\n\
     ldrh       r2,[r4,#0x1a]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r2,r0,#0x8\n\
     str        r2,[r4,#0xc]\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r1,[r4,#0x8]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,[r4,#0x4]\n\
     sub        r0,r0,r2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,sp\n\
     bl         fun_080035b4\n\
     mov        r1,#0xff\n\
     sub        r1,r1,r0\n\
     strh       r1,[r4,#0x12]\n\
     str        r5,[r4,#0x1c]\n\
     str        r5,[r4,#0x20]\n\
     strh       r5,[r4,#0x26]\n\
     mov        r0,#0x4\n\
     strh       r0,[r4,#0x28]\n\
     mov        r0,#0xb\n\
     strh       r0,[r4,#0x2a]\n\
     strh       r5,[r4,#0x2c]\n\
     add        sp,#0x8\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08029efc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x10\n\
     add        r6,r0,#0x0\n\
     ldr        r0,DAT_0802a068\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x86\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r6,#0x24]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08029fde\n\
     add        r1,r6,#0x0\n\
     add        r1,#0x8\n\
     ldr        r2,DAT_0802a06c\n\
     add        r0,r6,#0x0\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08029f62\n\
     ldrh       r0,[r6,#0x1a]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x1a]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r3,[r6,#0x18]\n\
     cmp        r0,r3\n\
     bcc        LAB_08029f3a\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x1a]\n\
LAB_08029f3a:\n\
     ldr        r1,[r6,#0x14]\n\
     ldrh       r2,[r6,#0x1a]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r6,#0x8]\n\
     ldr        r1,[r6,#0x14]\n\
     ldrh       r3,[r6,#0x1a]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r6,#0xc]\n\
LAB_08029f62:\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r1,[r6,#0x8]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x8]\n\
     add        r0,sp,#0x8\n\
     ldr        r1,[r6,#0x4]\n\
     ldr        r2,[r6,#0xc]\n\
     sub        r1,r1,r2\n\
     str        r1,[r0,#0x4]\n\
     bl         fun_080035b4\n\
     add        r1,r0,#0x0\n\
     mov        r0,#0xff\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r6,#0x12]\n\
     bl         fun_0800362c\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r2,r0\n\
     bne        LAB_08029f9e\n\
     ldrh       r0,[r6,#0x12]\n\
     sub        r0,#0x1\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     strh       r0,[r6,#0x12]\n\
LAB_08029f9e:\n\
     cmp        r2,#0x1\n\
     bne        LAB_08029fac\n\
     ldrh       r0,[r6,#0x12]\n\
     add        r0,#0x1\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     strh       r0,[r6,#0x12]\n\
LAB_08029fac:\n\
     ldr        r5,DAT_0802a070\n\
     ldrh       r0,[r6,#0x12]\n\
     sub        r0,#0x40\n\
     mov        r4,#0xff\n\
     and        r0,r4\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r5\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0x8c\n\
     bl         fun_0800353c\n\
     str        r0,[r6,#0x1c]\n\
     ldrh       r0,[r6,#0x12]\n\
     sub        r0,#0x40\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r5\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     mov        r1,#0x8c\n\
     bl         fun_0800353c\n\
     str        r0,[r6,#0x20]\n\
LAB_08029fde:\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r1,[r6,#0x1c]\n\
     add        r0,r0,r1\n\
     str        r0,[r6,#0x0]\n\
     ldr        r0,[r6,#0x4]\n\
     ldr        r1,[r6,#0x20]\n\
     add        r0,r0,r1\n\
     str        r0,[r6,#0x4]\n\
     mov        r4,sp\n\
     add        r4,#0x6\n\
     add        r0,r6,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r6,#0x10]\n\
     add        r1,sp,#0x4\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r1,r3]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r4,r3]\n\
     mov        r3,#0x1f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_0802ab8c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802a060\n\
     ldrh       r0,[r6,#0x10]\n\
     bl         fun_08004920\n\
     ldrh       r1,[r6,#0x12]\n\
     bl         fun_0800476c\n\
     ldrh       r0,[r6,#0x10]\n\
     ldrh       r1,[r6,#0x26]\n\
     bl         fun_08004970\n\
     ldrh       r4,[r6,#0x2c]\n\
     cmp        r4,#0xff\n\
     bls        LAB_0802a04c\n\
     ldr        r0,DAT_0802a074\n\
     add        r5,r0,#0x0\n\
     ldrh       r3,[r6,#0x26]\n\
LAB_0802a038:\n\
     add        r1,r4,r5\n\
     add        r2,r3,#0x1\n\
     add        r3,r2,#0x0\n\
     add        r4,r1,#0x0\n\
     lsl        r0,r1,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xff\n\
     bhi        LAB_0802a038\n\
     strh       r2,[r6,#0x26]\n\
     strh       r1,[r6,#0x2c]\n\
LAB_0802a04c:\n\
     ldrh       r1,[r6,#0x26]\n\
     ldrh       r2,[r6,#0x28]\n\
     cmp        r1,r2\n\
     bcc        LAB_0802a058\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x26]\n\
LAB_0802a058:\n\
     ldrh       r3,[r6,#0x2c]\n\
     ldrh       r1,[r6,#0x2a]\n\
     add        r0,r3,r1\n\
     strh       r0,[r6,#0x2c]\n\
LAB_0802a060:\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802a068:\n\
     .word 0x0857FBA8\n\
DAT_0802a06c:\n\
     .word 0x00027100\n\
DAT_0802a070:\n\
     .word 0x08049824\n\
DAT_0802a074:\n\
     .word 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0802a078()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x8\n\
     add        r5,r0,#0x0\n\
     ldr        r0,[r5,#0x14]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802a0a4\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,[r5,#0xc]\n\
     cmp        r0,r1\n\
     bge        LAB_0802a0c4\n\
     str        r1,[r5,#0x0]\n\
     ldr        r0,DAT_0802a0a0\n\
     ldrh       r2,[r5,#0x8]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x15\n\
     orr        r0,r2\n\
     b          LAB_0802a0bc\n\
DAT_0802a0a0:\n\
     .word 0x03002000\n\
LAB_0802a0a4:\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,[r5,#0x10]\n\
     cmp        r0,r1\n\
     ble        LAB_0802a0c4\n\
     str        r1,[r5,#0x0]\n\
     ldr        r0,DAT_0802a140\n\
     ldrh       r3,[r5,#0x8]\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_0802a144\n\
     and        r0,r2\n\
LAB_0802a0bc:\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,[r5,#0x14]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r5,#0x14]\n\
LAB_0802a0c4:\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,[r5,#0x14]\n\
     add        r0,r0,r1\n\
     str        r0,[r5,#0x0]\n\
     mov        r4,sp\n\
     add        r4,#0x6\n\
     add        r0,r5,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r5,#0x8]\n\
     add        r1,sp,#0x4\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r1,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r4,r3]\n\
     mov        r3,#0x1f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     mov        r4,#0xf\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     bl         fun_0802aae4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802a136\n\
     ldrh       r0,[r5,#0x8]\n\
     ldrh       r1,[r5,#0x18]\n\
     bl         fun_08004970\n\
     ldrh       r4,[r5,#0x1e]\n\
     cmp        r4,#0xff\n\
     bls        LAB_0802a122\n\
     ldr        r0,DAT_0802a148\n\
     add        r6,r0,#0x0\n\
     ldrh       r3,[r5,#0x18]\n\
LAB_0802a10e:\n\
     add        r1,r4,r6\n\
     add        r2,r3,#0x1\n\
     add        r3,r2,#0x0\n\
     add        r4,r1,#0x0\n\
     lsl        r0,r1,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xff\n\
     bhi        LAB_0802a10e\n\
     strh       r2,[r5,#0x18]\n\
     strh       r1,[r5,#0x1e]\n\
LAB_0802a122:\n\
     ldrh       r1,[r5,#0x18]\n\
     ldrh       r2,[r5,#0x1a]\n\
     cmp        r1,r2\n\
     bcc        LAB_0802a12e\n\
     mov        r0,#0x0\n\
     strh       r0,[r5,#0x18]\n\
LAB_0802a12e:\n\
     ldrh       r3,[r5,#0x1e]\n\
     ldrh       r1,[r5,#0x1c]\n\
     add        r0,r3,r1\n\
     strh       r0,[r5,#0x1e]\n\
LAB_0802a136:\n\
     add        sp,#0x8\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802a140:\n\
     .word 0x03002000\n\
DAT_0802a144:\n\
     .word 0xEFFFFFFF\n\
DAT_0802a148:\n\
     .word 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0802a14c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     ldr        r1,DAT_0802a1c4\n\
     str        r1,[r3,#0x0]\n\
     mov        r2,#0x91\n\
     lsl        r2,r2,#0xb\n\
     str        r2,[r3,#0x4]\n\
     ldr        r4,DAT_0802a1c8\n\
     add        r0,r1,r4\n\
     str        r0,[r3,#0x24]\n\
     ldr        r4,DAT_0802a1cc\n\
     add        r0,r2,r4\n\
     str        r0,[r3,#0x28]\n\
     mov        r4,#0x8c\n\
     lsl        r4,r4,#0x8\n\
     add        r0,r1,r4\n\
     str        r0,[r3,#0x2c]\n\
     mov        r4,#0x82\n\
     lsl        r4,r4,#0x8\n\
     add        r0,r2,r4\n\
     str        r0,[r3,#0x30]\n\
     ldr        r4,DAT_0802a1d0\n\
     add        r0,r1,r4\n\
     str        r0,[r3,#0x14]\n\
     ldr        r4,DAT_0802a1d4\n\
     add        r0,r2,r4\n\
     str        r0,[r3,#0x18]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     str        r1,[r3,#0x1c]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x7\n\
     add        r2,r2,r0\n\
     str        r2,[r3,#0x20]\n\
     mov        r2,#0x0\n\
     str        r2,[r3,#0x48]\n\
     mov        r0,#0x78\n\
     str        r0,[r3,#0x4c]\n\
     mov        r0,#0x9c\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r3,#0x38]\n\
     ldr        r1,DAT_0802a1d8\n\
     str        r1,[r3,#0x3c]\n\
     mov        r0,#0xb2\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r3,#0x40]\n\
     str        r1,[r3,#0x44]\n\
     add        r1,r3,#0x0\n\
     add        r1,#0x88\n\
     mov        r0,#0x14\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0x2\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r2,[r3,#0x34]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802a1c4:\n\
     .word 0x00019500\n\
DAT_0802a1c8:\n\
     .word 0xFFFF1A00\n\
DAT_0802a1cc:\n\
     .word 0xFFFF6F00\n\
DAT_0802a1d0:\n\
     .word 0xFFFFB500\n\
DAT_0802a1d4:\n\
     .word 0xFFFFDD00\n\
DAT_0802a1d8:\n\
     .word 0x00045C00\n\
    ");
}
__attribute__((naked)) void fun_0802a1dc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x10\n\
     add        r7,r0,#0x0\n\
     add        r1,r7,#0x0\n\
     add        r1,#0x88\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802a220\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0x2\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802a210\n\
     ldrh       r0,[r7,#0x34]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802a21c\n\
     sub        r0,#0x1\n\
     strh       r0,[r7,#0x34]\n\
     b          LAB_0802a220\n\
LAB_0802a210:\n\
     ldrh       r0,[r7,#0x34]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_0802a21c\n\
     add        r0,#0x1\n\
     strh       r0,[r7,#0x34]\n\
     b          LAB_0802a220\n\
LAB_0802a21c:\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802a220:\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x88\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r7,#0x48]\n\
     ldr        r2,[r7,#0x4c]\n\
     add        r1,r0,r2\n\
     str        r1,[r7,#0x48]\n\
     cmp        r2,#0x0\n\
     bge        LAB_0802a23c\n\
     cmp        r1,#0x0\n\
     bge        LAB_0802a248\n\
     b          LAB_0802a244\n\
LAB_0802a23c:\n\
     mov        r0,#0xc8\n\
     lsl        r0,r0,#0x6\n\
     cmp        r1,r0\n\
     ble        LAB_0802a248\n\
LAB_0802a244:\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
     str        r0,[r7,#0x4c]\n\
LAB_0802a248:\n\
     ldr        r0,[r7,#0x48]\n\
     ldr        r1,DAT_0802a3c4\n\
     and        r0,r1\n\
     asr        r0,r0,#0x8\n\
     strh       r0,[r7,#0x8]\n\
     ldr        r0,DAT_0802a3c8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r9,r0\n\
     add        r0,#0x18\n\
     add        r1,r7,#0x0\n\
     add        r1,#0x24\n\
     bl         fun_0802b3a0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802a26a\n\
     b          LAB_0802a3d0\n\
LAB_0802a26a:\n\
     ldrh       r0,[r7,#0xc]\n\
     ldrh       r1,[r7,#0x34]\n\
     bl         fun_08004970\n\
     mov        r4,#0x6\n\
     add        r4,sp\n\
     mov        r10,r4\n\
     add        r0,r7,#0x0\n\
     add        r1,sp,#0x4\n\
     mov        r2,r10\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r7,#0xc]\n\
     bl         fun_08004920\n\
     add        r4,r0,#0x0\n\
     add        r0,sp,#0x4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x2]\n\
     mov        r5,r10\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     ldrh       r1,[r7,#0x8]\n\
     mov        r3,#0x19\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r4,#0x0\n\
     mov        r2,#0x19\n\
     bl         fun_080041c4\n\
     ldrh       r0,[r7,#0xc]\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r4,r2]\n\
     mov        r3,#0x4\n\
     ldrsh      r2,[r4,r3]\n\
     mov        r3,#0x3f\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_0802ac3c\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x38\n\
     add        r1,sp,#0x4\n\
     mov        r2,r10\n\
     bl         fun_0803b5a0\n\
     ldr        r0,[r7,#0x38]\n\
     mov        r4,r9\n\
     ldr        r1,[r4,#0x18]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x8]\n\
     add        r5,sp,#0x8\n\
     mov        r8,r5\n\
     ldr        r0,[r7,#0x3c]\n\
     ldr        r1,[r4,#0x1c]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     mov        r0,r8\n\
     bl         fun_080035b4\n\
     add        r4,r0,#0x0\n\
     mov        r5,#0xff\n\
     sub        r4,r5,r4\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     sub        r4,#0x40\n\
     mov        r0,#0xff\n\
     and        r4,r0\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_0802a3cc\n\
     add        r0,r0,r1\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     mov        r1,#0x6\n\
     bl         fun_0800353c\n\
     add        r6,r0,#0x0\n\
     lsl        r4,r4,#0x1\n\
     ldr        r3,DAT_0802a3cc\n\
     add        r4,r4,r3\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     mov        r1,#0xc\n\
     bl         fun_0800353c\n\
     add        r2,r0,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r0,r1,#0x0\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,r0,r6\n\
     strh       r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r0,r3,r2\n\
     mov        r4,r10\n\
     strh       r0,[r4,#0x0]\n\
     ldrh       r0,[r7,#0xe]\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r1,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r4,r3]\n\
     mov        r4,#0x3\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     add        r3,r4,#0x0\n\
     bl         fun_0802aae4\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x40\n\
     add        r1,sp,#0x4\n\
     mov        r2,r10\n\
     bl         fun_0803b5a0\n\
     ldr        r0,[r7,#0x40]\n\
     mov        r2,r9\n\
     ldr        r1,[r2,#0x18]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[r7,#0x44]\n\
     ldr        r1,[r2,#0x1c]\n\
     sub        r0,r0,r1\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x4]\n\
     mov        r0,r8\n\
     bl         fun_080035b4\n\
     sub        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     sub        r5,#0x40\n\
     mov        r0,#0xff\n\
     and        r5,r0\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_0802a3cc\n\
     add        r0,r0,r1\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     mov        r1,#0x6\n\
     bl         fun_0800353c\n\
     add        r6,r0,#0x0\n\
     lsl        r5,r5,#0x1\n\
     ldr        r3,DAT_0802a3cc\n\
     add        r5,r5,r3\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     mov        r1,#0xc\n\
     bl         fun_0800353c\n\
     add        r2,r0,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r0,r1,#0x0\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,r0,r6\n\
     strh       r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r0,r3,r2\n\
     mov        r5,r10\n\
     strh       r0,[r5,#0x0]\n\
     ldrh       r0,[r7,#0x10]\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r1,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r5,r3]\n\
     str        r4,[sp,#0x0]\n\
     add        r3,r4,#0x0\n\
     bl         fun_0802aae4\n\
     b          LAB_0802a420\n\
DAT_0802a3c4:\n\
     .word 0x0000FFFF\n\
DAT_0802a3c8:\n\
     .word 0x0857FBA8\n\
DAT_0802a3cc:\n\
     .word 0x08049824\n\
LAB_0802a3d0:\n\
     ldr        r2,DAT_0802a430\n\
     ldrh       r4,[r7,#0xc]\n\
     lsl        r1,r4,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r4,DAT_0802a434\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r5,[r7,#0xc]\n\
     lsl        r1,r5,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     orr        r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0xe]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r5,[r7,#0xe]\n\
     lsl        r1,r5,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0x10]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r7,[r7,#0x10]\n\
     lsl        r1,r7,#0x3\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r3\n\
     str        r0,[r1,#0x0]\n\
LAB_0802a420:\n\
     add        sp,#0x10\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802a430:\n\
     .word 0x03002000\n\
DAT_0802a434:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_0802a438()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x24\n\
     add        r4,r0,#0x0\n\
     add        r0,r1,#0x0\n\
     mov        r9,r2\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,[r0,#0x4]\n\
     str        r1,[sp,#0x0]\n\
     str        r2,[sp,#0x4]\n\
     ldr        r2,[r4,#0x0]\n\
     ldr        r1,[sp,#0x0]\n\
     sub        r1,r1,r2\n\
     str        r1,[sp,#0x0]\n\
     ldr        r2,[r4,#0x4]\n\
     ldr        r1,[sp,#0x4]\n\
     sub        r1,r1,r2\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x20]\n\
     add        r1,r4,#0x0\n\
     add        r1,#0x14\n\
     bl         fun_0802b3a0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802a476\n\
     b          LAB_0802a5ec\n\
LAB_0802a476:\n\
     ldrh       r0,[r4,#0x8]\n\
     sub        r0,#0x40\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     bl         fun_0802b334\n\
     mov        r5,#0x0\n\
     add        r7,r4,#0x0\n\
     add        r7,#0x50\n\
     add        r3,sp,#0x8\n\
     mov        r8,r3\n\
     add        r0,sp,#0x10\n\
     mov        r10,r0\n\
     add        r6,sp,#0x18\n\
LAB_0802a492:\n\
     lsl        r0,r5,#0x3\n\
     add        r3,r7,r0\n\
     ldr        r1,DAT_0802a570\n\
     add        r1,r0,r1\n\
     ldr        r2,[r1,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r3,#0x0]\n\
     str        r2,[r3,#0x4]\n\
     add        r0,#0x50\n\
     add        r0,r4,r0\n\
     bl         fun_0802b368\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x3\n\
     bls        LAB_0802a492\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r4,#0x50]\n\
     sub        r0,r0,r1\n\
     str        r0,[sp,#0x8]\n\
     mov        r5,r8\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r4,#0x54]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     ldr        r2,DAT_0802a574\n\
     ldrh       r0,[r4,#0x8]\n\
     sub        r0,#0x20\n\
     mov        r1,#0xff\n\
     and        r0,r1\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     str        r0,[sp,#0x10]\n\
     ldrh       r0,[r4,#0x8]\n\
     sub        r0,#0x20\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r7,r10\n\
     str        r0,[r7,#0x4]\n\
     add        r0,r7,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r5,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802a57c\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r2,[r4,#0x50]\n\
     sub        r0,r0,r2\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r4,#0x54]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,[r4,#0x58]\n\
     sub        r2,r2,r0\n\
     str        r2,[sp,#0x18]\n\
     ldr        r0,[r4,#0x5c]\n\
     sub        r1,r1,r0\n\
     str        r1,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802a5ec\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r2,[r4,#0x58]\n\
     sub        r0,r0,r2\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r4,#0x5c]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,[r4,#0x60]\n\
     sub        r2,r2,r0\n\
     str        r2,[sp,#0x18]\n\
     ldr        r0,[r4,#0x64]\n\
     sub        r1,r1,r0\n\
     str        r1,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802a5ec\n\
     ldr        r3,DAT_0802a578\n\
     str        r3,[sp,#0x20]\n\
     ldr        r0,[sp,#0x10]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r1,r9\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,[r7,#0x4]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_0802a5ea\n\
.space 1\n\
.space 1\n\
DAT_0802a570:\n\
     .word 0x087B7354\n\
DAT_0802a574:\n\
     .word 0x08049824\n\
DAT_0802a578:\n\
     .word 0x0000FFFF\n\
LAB_0802a57c:\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r2,[r4,#0x60]\n\
     sub        r0,r0,r2\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r4,#0x64]\n\
     sub        r0,r0,r1\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x4]\n\
     ldr        r0,[r4,#0x68]\n\
     sub        r2,r2,r0\n\
     str        r2,[sp,#0x18]\n\
     ldr        r0,[r4,#0x6c]\n\
     sub        r1,r1,r0\n\
     str        r1,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     mov        r0,r8\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802a5ec\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r2,[r4,#0x68]\n\
     sub        r0,r0,r2\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[r4,#0x6c]\n\
     sub        r0,r0,r1\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x4]\n\
     ldr        r0,[r4,#0x50]\n\
     sub        r2,r2,r0\n\
     str        r2,[sp,#0x18]\n\
     ldr        r0,[r4,#0x54]\n\
     sub        r1,r1,r0\n\
     str        r1,[r6,#0x4]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003584\n\
     mov        r0,r8\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800355c\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802a5ec\n\
     mov        r0,#0x1\n\
     str        r0,[sp,#0x20]\n\
     ldr        r0,[sp,#0x10]\n\
     mov        r1,r9\n\
     str        r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     ldr        r0,[r3,#0x4]\n\
LAB_0802a5ea:\n\
     str        r0,[r1,#0x4]\n\
LAB_0802a5ec:\n\
     ldr        r0,[sp,#0x20]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802a5f6\n\
     mov        r0,#0x0\n\
     b          LAB_0802a5f8\n\
LAB_0802a5f6:\n\
     mov        r0,#0x1\n\
LAB_0802a5f8:\n\
     add        sp,#0x24\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802a608()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r1,DAT_0802a674\n\
     ldr        r3,[r1,#0x0]\n\
     ldr        r4,DAT_0802a678\n\
     ldrh       r2,[r4,#0x0]\n\
     lsl        r1,r2,#0x4\n\
     add        r1,r1,r2\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r3,r1\n\
     ldr        r6,DAT_0802a67c\n\
     add        r1,r1,r6\n\
     mov        r5,#0x0\n\
     mov        r2,#0x1\n\
     strh       r2,[r1,#0x0]\n\
     ldrh       r2,[r4,#0x0]\n\
     lsl        r1,r2,#0x4\n\
     add        r1,r1,r2\n\
     lsl        r1,r1,#0x2\n\
     add        r6,#0x2\n\
     add        r2,r3,r6\n\
     add        r2,r2,r1\n\
     ldr        r1,[r0,#0x4]\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r2,#0x0]\n\
     str        r1,[r2,#0x4]\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x4\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r3,r0\n\
     ldr        r2,DAT_0802a680\n\
     add        r0,r0,r2\n\
     strh       r5,[r0,#0x0]\n\
     ldrh       r6,[r4,#0x0]\n\
     lsl        r0,r6,#0x4\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     add        r3,r3,r0\n\
     ldr        r0,DAT_0802a684\n\
     add        r3,r3,r0\n\
     mov        r0,#0x7\n\
     strh       r0,[r3,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x5\n\
     bne        LAB_0802a66c\n\
     strh       r5,[r4,#0x0]\n\
LAB_0802a66c:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802a674:\n\
     .word 0x0857FBA8\n\
DAT_0802a678:\n\
     .word 0x020101C8\n\
DAT_0802a67c:\n\
     .word 0x0000064E\n\
DAT_0802a680:\n\
     .word 0x00000682\n\
DAT_0802a684:\n\
     .word 0x00000684\n\
    ");
}
__attribute__((naked)) void fun_0802a688()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     add        r7,r0,#0x0\n\
     ldrh       r0,[r7,#0xa]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802a780\n\
     add        r1,r7,#0x0\n\
     add        r1,#0x40\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802a700\n\
     mov        r0,#0x7\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r7,#0x3e]\n\
     cmp        r0,#0x4\n\
     bls        LAB_0802a6fc\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     ldr        r3,DAT_0802a6f4\n\
     ldr        r5,DAT_0802a6f8\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x2\n\
LAB_0802a6c2:\n\
     mov        r1,r8\n\
     lsl        r2,r1,#0x1\n\
     add        r2,r7,r2\n\
     ldrh       r0,[r2,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r5\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     cmp        r0,#0x4\n\
     bls        LAB_0802a6c2\n\
     mov        r0,#0x0\n\
     strh       r0,[r7,#0xa]\n\
     b          LAB_0802a780\n\
DAT_0802a6f4:\n\
     .word 0x03002000\n\
DAT_0802a6f8:\n\
     .word 0xFFFFFCFF\n\
LAB_0802a6fc:\n\
     add        r0,#0x1\n\
     strh       r0,[r7,#0x3e]\n\
LAB_0802a700:\n\
     add        r0,r7,#0x0\n\
     add        r0,#0xc\n\
     mov        r4,sp\n\
     add        r4,#0x6\n\
     add        r1,sp,#0x4\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803b5a0\n\
     mov        r1,#0x0\n\
     mov        r8,r1\n\
     mov        r2,sp\n\
     add        r2,#0x4\n\
     str        r2,[sp,#0x8]\n\
     ldr        r0,DAT_0802a790\n\
     mov        r10,r0\n\
     sub        r1,#0x7\n\
     mov        r9,r1\n\
LAB_0802a722:\n\
     ldrh       r2,[r7,#0x3c]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r2\n\
     add        r0,r8\n\
     lsl        r0,r0,#0x3\n\
     mov        r2,r10\n\
     add        r1,r0,r2\n\
     ldr        r6,[r1,#0x0]\n\
     ldr        r1,[sp,#0x8]\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r6,r1,r6\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     ldr        r2,DAT_0802a794\n\
     add        r0,r0,r2\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x6]\n\
     add        r4,r0,r4\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r1,r8\n\
     lsl        r5,r1,#0x1\n\
     add        r5,r7,r5\n\
     ldrh       r0,[r5,#0x0]\n\
     ldrh       r1,[r7,#0x3e]\n\
     bl         fun_08004930\n\
     ldrh       r0,[r5,#0x0]\n\
     lsl        r6,r6,#0x10\n\
     asr        r6,r6,#0x10\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     mov        r2,r9\n\
     str        r2,[sp,#0x0]\n\
     add        r1,r6,#0x0\n\
     add        r2,r4,#0x0\n\
     mov        r3,r9\n\
     bl         fun_0802aae4\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     cmp        r0,#0x4\n\
     bls        LAB_0802a722\n\
LAB_0802a780:\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802a790:\n\
     .word 0x087B7374\n\
DAT_0802a794:\n\
     .word 0x087B7378\n\
    ");
}
__attribute__((naked)) void fun_0802a798()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x14\n\
     add        r6,r0,#0x0\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802a7ae\n\
     b          LAB_0802a988\n\
LAB_0802a7ae:\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x8]\n\
     mov        r9,r0\n\
     add        r1,r6,#0x0\n\
     add        r1,#0x5e\n\
     str        r1,[sp,#0xc]\n\
LAB_0802a7ba:\n\
     mov        r2,r9\n\
     lsl        r0,r2,#0x1\n\
     ldr        r3,[sp,#0xc]\n\
     add        r1,r3,r0\n\
     mov        r8,r0\n\
     ldrh       r7,[r1,#0x0]\n\
     ldr        r0,DAT_0802a7dc\n\
     cmp        r7,r0\n\
     bne        LAB_0802a7e0\n\
     ldr        r0,[sp,#0x8]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x8]\n\
     add        r2,#0x1\n\
     str        r2,[sp,#0x10]\n\
     b          LAB_0802a970\n\
DAT_0802a7dc:\n\
     .word 0x0000FFFF\n\
LAB_0802a7e0:\n\
     add        r3,r6,#0x0\n\
     add        r3,#0x86\n\
     mov        r2,r8\n\
     add        r0,r3,r2\n\
     add        r7,r3,#0x0\n\
     add        r5,r6,#0x0\n\
     add        r5,#0x72\n\
     mov        r2,#0x5c\n\
     add        r2,r2,r6\n\
     mov        r10,r2\n\
     mov        r2,r9\n\
     add        r2,#0x1\n\
     str        r2,[sp,#0x10]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xff\n\
     bls        LAB_0802a81c\n\
     mov        r4,r8\n\
     ldr        r0,DAT_0802a874\n\
     mov        r12,r0\n\
     add        r2,r1,#0x0\n\
LAB_0802a808:\n\
     add        r0,r3,r4\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,r12\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r1,#0x1\n\
     strh       r1,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xff\n\
     bhi        LAB_0802a808\n\
LAB_0802a81c:\n\
     mov        r1,r8\n\
     add        r0,r7,r1\n\
     add        r1,r5,r1\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,r2,r1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,[sp,#0xc]\n\
     add        r1,r8\n\
     ldrh       r0,[r1,#0x0]\n\
     mov        r3,r10\n\
     ldrh       r3,[r3,#0x0]\n\
     cmp        r0,r3\n\
     bcc        LAB_0802a91e\n\
     ldrh       r4,[r6,#0x2]\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802a88c\n\
     ldr        r7,DAT_0802a878\n\
     orr        r0,r7\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802a87c\n\
     ldr        r3,[r0,#0x0]\n\
     ldr        r0,DAT_0802a880\n\
     add        r3,r3,r0\n\
     ldrh       r2,[r3,#0x0]\n\
     add        r2,r9\n\
     lsl        r2,r2,#0x3\n\
     ldr        r1,DAT_0802a884\n\
     add        r2,r2,r1\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802a888\n\
     and        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldrh       r2,[r3,#0x0]\n\
     add        r2,r9\n\
     lsl        r2,r2,#0x3\n\
     ldr        r3,DAT_0802a884\n\
     add        r2,r2,r3\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     orr        r0,r1\n\
     b          LAB_0802a91c\n\
.space 1\n\
.space 1\n\
DAT_0802a874:\n\
     .word 0xFFFFFF00\n\
DAT_0802a878:\n\
     .word 0x0000FFFF\n\
DAT_0802a87c:\n\
     .word 0x0857FBA8\n\
DAT_0802a880:\n\
     .word 0x00000858\n\
DAT_0802a884:\n\
     .word 0x03002000\n\
DAT_0802a888:\n\
     .word 0xFFFFFCFF\n\
LAB_0802a88c:\n\
     strh       r4,[r1,#0x0]\n\
     ldr        r5,DAT_0802a998\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r0,r1,#0x2\n\
     strh       r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1a\n\
     bls        LAB_0802a8a4\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x19\n\
     strh       r0,[r5,#0x0]\n\
LAB_0802a8a4:\n\
     ldr        r0,DAT_0802a99c\n\
     ldr        r3,[r0,#0x0]\n\
     ldr        r7,DAT_0802a9a0\n\
     add        r3,r3,r7\n\
     ldrh       r2,[r3,#0x0]\n\
     add        r2,r9\n\
     lsl        r2,r2,#0x3\n\
     ldr        r0,DAT_0802a9a4\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802a9a8\n\
     and        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldrh       r2,[r3,#0x0]\n\
     add        r2,r9\n\
     lsl        r2,r2,#0x3\n\
     ldr        r1,DAT_0802a9a4\n\
     add        r2,r2,r1\n\
     ldr        r3,DAT_0802a9ac\n\
     ldrh       r1,[r3,#0x0]\n\
     add        r1,#0xa\n\
     lsl        r1,r1,#0xc\n\
     ldr        r0,[r2,#0x0]\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802a8e6\n\
     strh       r4,[r3,#0x0]\n\
LAB_0802a8e6:\n\
     mov        r2,r9\n\
     lsl        r3,r2,#0x3\n\
     add        r2,r6,#0x0\n\
     add        r2,#0xc\n\
     add        r2,r2,r3\n\
     ldr        r4,DAT_0802a9b0\n\
     ldrh       r7,[r5,#0x0]\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r4\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r0,r7]\n\
     lsl        r1,r1,#0x8\n\
     ldr        r0,[r6,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     add        r2,r6,#0x0\n\
     add        r2,#0x10\n\
     add        r2,r2,r3\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r4\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r1,r1,#0x8\n\
     ldr        r0,[r6,#0x8]\n\
     add        r0,r0,r1\n\
LAB_0802a91c:\n\
     str        r0,[r2,#0x0]\n\
LAB_0802a91e:\n\
     ldr        r1,[sp,#0xc]\n\
     add        r1,r8\n\
     ldrh       r7,[r1,#0x0]\n\
     ldr        r0,DAT_0802a9b4\n\
     cmp        r7,r0\n\
     beq        LAB_0802a970\n\
     ldr        r0,DAT_0802a99c\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r2,DAT_0802a9a0\n\
     add        r4,r4,r2\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,r9\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r1,#0x0]\n\
     bl         fun_08004930\n\
     mov        r3,r9\n\
     lsl        r0,r3,#0x3\n\
     add        r0,#0xc\n\
     add        r0,r6,r0\n\
     mov        r5,sp\n\
     add        r5,#0x6\n\
     add        r1,sp,#0x4\n\
     add        r2,r5,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,r9\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r1,sp,#0x4\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r1,r7]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r5,r3]\n\
     mov        r3,#0x3\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_0802aae4\n\
LAB_0802a970:\n\
     ldr        r7,[sp,#0x10]\n\
     lsl        r0,r7,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     cmp        r0,#0x9\n\
     bhi        LAB_0802a97e\n\
     b          LAB_0802a7ba\n\
LAB_0802a97e:\n\
     ldr        r0,[sp,#0x8]\n\
     cmp        r0,#0xa\n\
     bne        LAB_0802a988\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
LAB_0802a988:\n\
     add        sp,#0x14\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802a998:\n\
     .word 0x02000560\n\
DAT_0802a99c:\n\
     .word 0x0857FBA8\n\
DAT_0802a9a0:\n\
     .word 0x00000858\n\
DAT_0802a9a4:\n\
     .word 0x03002004\n\
DAT_0802a9a8:\n\
     .word 0xFFFF0FFF\n\
DAT_0802a9ac:\n\
     .word 0x02000562\n\
DAT_0802a9b0:\n\
     .word 0x087B72F4\n\
DAT_0802a9b4:\n\
     .word 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_0802a9b8()
{
    asm("\n\
     sub        sp,#0x4\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x18\n\
     mov        r8,r0\n\
     add        r7,r1,#0x0\n\
     str        r3,[sp,#0x34]\n\
     ldr        r0,[sp,#0x34]\n\
     ldr        r1,[sp,#0x38]\n\
     str        r0,[sp,#0x10]\n\
     str        r1,[sp,#0x14]\n\
     mov        r2,r8\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,[r2,#0x4]\n\
     str        r0,[sp,#0x0]\n\
     str        r1,[sp,#0x4]\n\
     add        r0,sp,#0x34\n\
     mov        r1,sp\n\
     bl         fun_0800355c\n\
.syntax unified\n\
    rsbs        r4,r0,#0\n\
.syntax divided\n\
     ldr        r0,[sp,#0x34]\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[sp,#0x34]\n\
     ldr        r0,[sp,#0x38]\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[sp,#0x38]\n\
     ldr        r1,[sp,#0x34]\n\
     lsl        r1,r1,#0x1\n\
     ldr        r2,[sp,#0x0]\n\
     add        r1,r1,r2\n\
     str        r1,[sp,#0x8]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,[sp,#0x4]\n\
     add        r0,r0,r1\n\
     add        r6,sp,#0x8\n\
     str        r0,[r6,#0x4]\n\
     ldr        r0,[sp,#0x0]\n\
     add        r3,r0,#0x0\n\
     mul        r3,r0\n\
     add        r0,r3,#0x0\n\
     ldr        r1,[sp,#0x4]\n\
     add        r2,r1,#0x0\n\
     mul        r2,r1\n\
     add        r1,r2,#0x0\n\
     add        r0,r0,r1\n\
     bl         fun_0803d074\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     add        r0,r4,#0x0\n\
     mov        r1,r9\n\
     bl         fun_0800354c\n\
     mov        r1,#0x80\n\
     bl         fun_0800353c\n\
     add        r5,r0,#0x0\n\
     cmp        r5,#0x63\n\
     bgt        LAB_0802aa40\n\
     mov        r5,#0x64\n\
LAB_0802aa40:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     sub        r5,r0,r5\n\
     ldr        r0,[sp,#0x8]\n\
     add        r1,r5,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[r6,#0x4]\n\
     add        r1,r5,#0x0\n\
     bl         fun_0800353c\n\
     add        r2,r0,#0x0\n\
     str        r2,[r6,#0x4]\n\
     ldr        r0,[sp,#0x8]\n\
     ldr        r1,[sp,#0xc]\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x0]\n\
     str        r1,[r3,#0x4]\n\
     cmp        r7,#0x0\n\
     beq        LAB_0802aaba\n\
     ldr        r0,[sp,#0x8]\n\
     add        r1,r0,#0x0\n\
     mul        r1,r0\n\
     add        r0,r1,#0x0\n\
     add        r1,r2,#0x0\n\
     mul        r1,r2\n\
     add        r0,r0,r1\n\
     bl         fun_0803d074\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802aaba\n\
     ldr        r0,[sp,#0x8]\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800354c\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[r6,#0x4]\n\
     add        r1,r4,#0x0\n\
     bl         fun_0800354c\n\
     str        r0,[r6,#0x4]\n\
     add        r1,sp,#0x10\n\
     add        r0,r6,#0x0\n\
     bl         fun_0800355c\n\
     add        r4,r0,#0x0\n\
     cmp        r4,#0x0\n\
     ble        LAB_0802aaaa\n\
     mov        r0,#0x64\n\
     b          LAB_0802aaae\n\
LAB_0802aaaa:\n\
     mov        r0,#0x64\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_0802aaae:\n\
     str        r0,[r7,#0x0]\n\
     ldr        r0,[r7,#0x0]\n\
     add        r1,r5,#0x0\n\
     bl         fun_0800353c\n\
     str        r0,[r7,#0x0]\n\
LAB_0802aaba:\n\
     mov        r2,r9\n\
     cmp        r2,#0x13\n\
     bgt        LAB_0802aad2\n\
     mov        r0,#0x0\n\
     mov        r3,r8\n\
     str        r0,[r3,#0x0]\n\
     str        r0,[r3,#0x4]\n\
     cmp        r7,#0x0\n\
     beq        LAB_0802aace\n\
     str        r0,[r7,#0x0]\n\
LAB_0802aace:\n\
     mov        r0,#0x1\n\
     b          LAB_0802aad4\n\
LAB_0802aad2:\n\
     mov        r0,#0x0\n\
LAB_0802aad4:\n\
     add        sp,#0x18\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r3}\n\
     add        sp,#0x4\n\
     bx         r3\n\
    ");
}
__attribute__((naked)) void fun_0802aae4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r4,[sp,#0x14]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r5,r2,#0x10\n\
     lsl        r3,r3,#0x10\n\
     lsr        r7,r3,#0x10\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r12,r4\n\
     lsl        r1,r1,#0x10\n\
     asr        r2,r1,#0x10\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802ab22\n\
     lsl        r0,r5,#0x10\n\
     asr        r5,r0,#0x10\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802ab22\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x20\n\
     cmp        r0,#0xf0\n\
     bgt        LAB_0802ab22\n\
     add        r0,r5,#0x0\n\
     sub        r0,#0x20\n\
     cmp        r0,#0xa0\n\
     ble        LAB_0802ab44\n\
LAB_0802ab22:\n\
     ldr        r0,DAT_0802ab3c\n\
     lsl        r2,r6,#0x3\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802ab40\n\
     and        r0,r1\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     b          LAB_0802ab76\n\
.space 1\n\
.space 1\n\
DAT_0802ab3c:\n\
     .word 0x03002000\n\
DAT_0802ab40:\n\
     .word 0xFFFFFCFF\n\
LAB_0802ab44:\n\
     ldr        r0,DAT_0802ab7c\n\
     lsl        r4,r6,#0x3\n\
     add        r4,r4,r0\n\
     ldr        r3,[r4,#0x0]\n\
     ldr        r0,DAT_0802ab80\n\
     and        r3,r0\n\
     ldr        r0,DAT_0802ab84\n\
     and        r3,r0\n\
     lsl        r1,r7,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r1,r2,r1\n\
     ldr        r2,DAT_0802ab88\n\
     add        r0,r2,#0x0\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x10\n\
     mov        r2,r12\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r0,r5,r0\n\
     mov        r2,#0xff\n\
     and        r0,r2\n\
     orr        r1,r0\n\
     orr        r3,r1\n\
     str        r3,[r4,#0x0]\n\
     mov        r0,#0x1\n\
LAB_0802ab76:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802ab7c:\n\
     .word 0x03002000\n\
DAT_0802ab80:\n\
     .word 0xFFFFFCFF\n\
DAT_0802ab84:\n\
     .word 0xFE00FF00\n\
DAT_0802ab88:\n\
     .word 0x000001FF\n\
    ");
}
__attribute__((naked)) void fun_0802ab8c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r4,[sp,#0x14]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r5,r2,#0x10\n\
     lsl        r3,r3,#0x10\n\
     lsr        r7,r3,#0x10\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r12,r4\n\
     lsl        r1,r1,#0x10\n\
     asr        r2,r1,#0x10\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802abca\n\
     lsl        r0,r5,#0x10\n\
     asr        r5,r0,#0x10\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802abca\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x20\n\
     cmp        r0,#0xf0\n\
     bgt        LAB_0802abca\n\
     add        r0,r5,#0x0\n\
     sub        r0,#0x20\n\
     cmp        r0,#0xa0\n\
     ble        LAB_0802abec\n\
LAB_0802abca:\n\
     ldr        r0,DAT_0802abe4\n\
     lsl        r2,r6,#0x3\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802abe8\n\
     and        r0,r1\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     b          LAB_0802ac24\n\
.space 1\n\
.space 1\n\
DAT_0802abe4:\n\
     .word 0x03002000\n\
DAT_0802abe8:\n\
     .word 0xFFFFFCFF\n\
LAB_0802abec:\n\
     ldr        r0,DAT_0802ac2c\n\
     lsl        r4,r6,#0x3\n\
     add        r4,r4,r0\n\
     ldr        r3,[r4,#0x0]\n\
     ldr        r0,DAT_0802ac30\n\
     and        r3,r0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     orr        r3,r0\n\
     ldr        r0,DAT_0802ac34\n\
     and        r3,r0\n\
     lsl        r1,r7,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r1,r2,r1\n\
     ldr        r2,DAT_0802ac38\n\
     add        r0,r2,#0x0\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x10\n\
     mov        r2,r12\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r0,r5,r0\n\
     mov        r2,#0xff\n\
     and        r0,r2\n\
     orr        r1,r0\n\
     orr        r3,r1\n\
     str        r3,[r4,#0x0]\n\
     mov        r0,#0x1\n\
LAB_0802ac24:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0802ac2c:\n\
     .word 0x03002000\n\
DAT_0802ac30:\n\
     .word 0xFFFFFCFF\n\
DAT_0802ac34:\n\
     .word 0xFE00FF00\n\
DAT_0802ac38:\n\
     .word 0x000001FF\n\
    ");
}
__attribute__((naked)) void fun_0802ac3c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r4,[sp,#0x14]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r5,r2,#0x10\n\
     lsl        r3,r3,#0x10\n\
     lsr        r7,r3,#0x10\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r12,r4\n\
     lsl        r1,r1,#0x10\n\
     asr        r2,r1,#0x10\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802ac7a\n\
     lsl        r0,r5,#0x10\n\
     asr        r5,r0,#0x10\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802ac7a\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x20\n\
     cmp        r0,#0xf0\n\
     bgt        LAB_0802ac7a\n\
     add        r0,r5,#0x0\n\
     sub        r0,#0x20\n\
     cmp        r0,#0xa0\n\
     ble        LAB_0802ac9c\n\
LAB_0802ac7a:\n\
     ldr        r0,DAT_0802ac94\n\
     lsl        r2,r6,#0x3\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802ac98\n\
     and        r0,r1\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     b          LAB_0802acd4\n\
.space 1\n\
.space 1\n\
DAT_0802ac94:\n\
     .word 0x03002000\n\
DAT_0802ac98:\n\
     .word 0xFFFFFCFF\n\
LAB_0802ac9c:\n\
     ldr        r0,DAT_0802acdc\n\
     lsl        r4,r6,#0x3\n\
     add        r4,r4,r0\n\
     ldr        r3,[r4,#0x0]\n\
     ldr        r0,DAT_0802ace0\n\
     and        r3,r0\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x2\n\
     orr        r3,r0\n\
     ldr        r0,DAT_0802ace4\n\
     and        r3,r0\n\
     lsl        r1,r7,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r1,r2,r1\n\
     ldr        r2,DAT_0802ace8\n\
     add        r0,r2,#0x0\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x10\n\
     mov        r2,r12\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r0,r5,r0\n\
     mov        r2,#0xff\n\
     and        r0,r2\n\
     orr        r1,r0\n\
     orr        r3,r1\n\
     str        r3,[r4,#0x0]\n\
     mov        r0,#0x1\n\
LAB_0802acd4:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0802acdc:\n\
     .word 0x03002000\n\
DAT_0802ace0:\n\
     .word 0xFFFFFCFF\n\
DAT_0802ace4:\n\
     .word 0xFE00FF00\n\
DAT_0802ace8:\n\
     .word 0x000001FF\n\
    ");
}
__attribute__((naked)) void fun_0802acec()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x28\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     add        r6,sp,#0x24\n\
     mov        r0,#0x26\n\
     add        r0,sp\n\
     mov        r8,r0\n\
     add        r0,r4,#0x0\n\
     add        r1,r6,#0x0\n\
     mov        r2,r8\n\
     bl         fun_0803b5a0\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r9,r1\n\
     sub        r0,r0,r1\n\
     asr        r0,r0,#0x8\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r6,r2]\n\
     add        r0,r0,r1\n\
     str        r0,[sp,#0x4]\n\
     ldr        r3,[r5,#0x4]\n\
     ldr        r4,[r4,#0x4]\n\
     sub        r3,r3,r4\n\
     asr        r3,r3,#0x8\n\
     mov        r7,r8\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r7,r2]\n\
     add        r3,r3,r1\n\
     str        r3,[sp,#0x8]\n\
     ldr        r2,[r5,#0x8]\n\
     mov        r7,r9\n\
     sub        r2,r2,r7\n\
     asr        r2,r2,#0x8\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r6,r7]\n\
     add        r2,r2,r1\n\
     str        r2,[sp,#0xc]\n\
     ldr        r1,[r5,#0xc]\n\
     sub        r1,r1,r4\n\
     asr        r1,r1,#0x8\n\
     mov        r5,r8\n\
     mov        r6,#0x0\n\
     ldrsh      r4,[r5,r6]\n\
     add        r1,r1,r4\n\
     str        r1,[sp,#0x10]\n\
     ldr        r4,DAT_0802ad94\n\
     str        r4,[sp,#0x0]\n\
     add        r1,r3,#0x0\n\
     bl         fun_080032c4\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r3,[sp,#0x10]\n\
     ldr        r2,[sp,#0xc]\n\
     str        r4,[sp,#0x0]\n\
     add        r1,r3,#0x0\n\
     bl         fun_080032c4\n\
     ldr        r2,[sp,#0x4]\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r3,[sp,#0x10]\n\
     str        r4,[sp,#0x0]\n\
     add        r0,r2,#0x0\n\
     bl         fun_080032c4\n\
     ldr        r2,[sp,#0xc]\n\
     ldr        r1,[sp,#0x8]\n\
     ldr        r3,[sp,#0x10]\n\
     str        r4,[sp,#0x0]\n\
     add        r0,r2,#0x0\n\
     bl         fun_080032c4\n\
     add        sp,#0x28\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802ad94:\n\
     .word 0xFFFF0000\n\
    ");
}
__attribute__((naked)) void fun_0802ad98()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r0,[r4,#0x3c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802adaa\n\
     bl         fun_0802af88\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0x3c]\n\
LAB_0802adaa:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802adb0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_0802adf4\n\
     str        r0,[r4,#0x4]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803b474\n\
     strh       r0,[r4,#0xa]\n\
     mov        r0,#0xe1\n\
     strh       r0,[r4,#0x8]\n\
     mov        r2,#0x0\n\
     add        r5,r4,#0x0\n\
     add        r5,#0x10\n\
     ldr        r0,DAT_0802adf8\n\
     ldr        r3,[r0,#0x0]\n\
LAB_0802add4:\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r5,r0\n\
     lsl        r1,r2,#0x5\n\
     add        r1,#0x80\n\
     add        r1,r3,r1\n\
     str        r1,[r0,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x3\n\
     bls        LAB_0802add4\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xe]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802adf4:\n\
     .word 0x00013B00\n\
DAT_0802adf8:\n\
     .word 0x0857FBA8\n\
    ");
}
__attribute__((naked)) void fun_0802adfc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     mov        r2,#0x0\n\
     ldr        r0,[r3,#0x10]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802ae0e\n\
     str        r4,[r3,#0x10]\n\
     b          LAB_0802ae28\n\
LAB_0802ae0e:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x3\n\
     bhi        LAB_0802ae28\n\
     lsl        r0,r2,#0x2\n\
     add        r1,r3,#0x0\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802ae0e\n\
     str        r4,[r1,#0x0]\n\
LAB_0802ae28:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802ae30()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0802ae5c\n\
     ldrh       r1,[r0,#0xc]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r4\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r3,DAT_0802ae60\n\
     and        r1,r3\n\
     str        r1,[r2,#0x0]\n\
     ldrh       r1,[r0,#0xc]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r4\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     orr        r1,r3\n\
     str        r1,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0xe]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802ae5c:\n\
     .word 0x03002000\n\
DAT_0802ae60:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_0802ae64()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r3,DAT_0802aea0\n\
     ldrh       r5,[r0,#0xc]\n\
     lsl        r4,r5,#0x3\n\
     add        r4,r4,r3\n\
     ldr        r3,[r4,#0x0]\n\
     ldr        r5,DAT_0802aea4\n\
     and        r3,r5\n\
     str        r3,[r4,#0x0]\n\
     mov        r5,#0x0\n\
     mov        r3,#0x1\n\
     strh       r3,[r0,#0xe]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r3,[r1,#0x0]\n\
     ldr        r4,[r1,#0x4]\n\
     str        r3,[r0,#0x0]\n\
     str        r4,[r0,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r2,[r2,#0x4]\n\
     str        r1,[r0,#0x14]\n\
     str        r2,[r0,#0x18]\n\
     ldr        r1,DAT_0802aea8\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,#0x66\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0xa]\n\
     strh       r5,[r0,#0x1c]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802aea0:\n\
     .word 0x03002000\n\
DAT_0802aea4:\n\
     .word 0xFFFFFCFF\n\
DAT_0802aea8:\n\
     .word 0x0857FBA8\n\
    ");
}
__attribute__((naked)) void fun_0802aeac()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0802aed8\n\
     ldrh       r1,[r0,#0xc]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r4\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r3,DAT_0802aedc\n\
     and        r1,r3\n\
     str        r1,[r2,#0x0]\n\
     ldrh       r1,[r0,#0xc]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r4\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     orr        r1,r3\n\
     str        r1,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0xe]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802aed8:\n\
     .word 0x03002000\n\
DAT_0802aedc:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_0802aee0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r2,#0xac\n\
     lsl        r2,r2,#0x9\n\
     str        r2,[r0,#0x0]\n\
     ldr        r3,DAT_0802af2c\n\
     str        r3,[r0,#0x4]\n\
     ldr        r4,DAT_0802af30\n\
     add        r1,r2,r4\n\
     str        r1,[r0,#0x20]\n\
     ldr        r4,DAT_0802af34\n\
     add        r1,r3,r4\n\
     str        r1,[r0,#0x24]\n\
     mov        r5,#0xdc\n\
     lsl        r5,r5,#0x8\n\
     add        r1,r2,r5\n\
     str        r1,[r0,#0x28]\n\
     mov        r5,#0xd2\n\
     lsl        r5,r5,#0x8\n\
     add        r1,r3,r5\n\
     str        r1,[r0,#0x2c]\n\
     add        r4,r2,r4\n\
     str        r4,[r0,#0x10]\n\
     str        r3,[r0,#0x14]\n\
     mov        r1,#0xb4\n\
     lsl        r1,r1,#0x7\n\
     add        r2,r2,r1\n\
     str        r2,[r0,#0x18]\n\
     mov        r4,#0xfa\n\
     lsl        r4,r4,#0x7\n\
     add        r3,r3,r4\n\
     str        r3,[r0,#0x1c]\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x30]\n\
     mov        r1,#0x78\n\
     str        r1,[r0,#0x34]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802af2c:\n\
     .word 0x0001AD00\n\
DAT_0802af30:\n\
     .word 0xFFFF1A00\n\
DAT_0802af34:\n\
     .word 0xFFFFA600\n\
    ");
}
__attribute__((naked)) void fun_0802af38()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r1,[r1,#0x4]\n\
     str        r0,[r4,#0xc]\n\
     str        r1,[r4,#0x10]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc\n\
     bl         fun_0803b474\n\
     mov        r1,#0x0\n\
     strh       r0,[r4,#0x16]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x2c]\n\
     strh       r1,[r4,#0x2e]\n\
     strh       r1,[r4,#0x30]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802af60()
{
    asm("\n\
     push       {lr}\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r2,#0x30]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802af74\n\
     ldr        r0,[r2,#0x34]\n\
     cmp        r0,#0xb3\n\
     bhi        LAB_0802af74\n\
     mov        r0,#0x0\n\
     b          LAB_0802af84\n\
LAB_0802af74:\n\
     mov        r1,#0x0\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x2e]\n\
     strh       r1,[r2,#0x30]\n\
     mov        r0,#0x7\n\
     bl         fun_080016f0\n\
     mov        r0,#0x1\n\
LAB_0802af84:\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802af88()
{
    asm("\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x2e]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x30]\n\
     str        r2,[r0,#0x34]\n\
     str        r2,[r0,#0x1c]\n\
     str        r2,[r0,#0x20]\n\
     ldrh       r3,[r0,#0x14]\n\
     lsl        r1,r3,#0x8\n\
     str        r1,[r0,#0x28]\n\
     str        r2,[r0,#0x24]\n\
     ldr        r1,DAT_0802afa8\n\
     ldr        r1,[r1,#0x0]\n\
     ldrh       r1,[r1,#0x22]\n\
     strh       r1,[r0,#0x16]\n\
     bx         lr\n\
DAT_0802afa8:\n\
     .word 0x0857FBA8\n\
    ");
}
__attribute__((naked)) void fun_0802afac()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x1a]\n\
     ldr        r4,DAT_0802afd8\n\
     ldrh       r1,[r0,#0xc]\n\
     lsl        r2,r1,#0x3\n\
     add        r2,r2,r4\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r3,DAT_0802afdc\n\
     and        r1,r3\n\
     str        r1,[r2,#0x0]\n\
     ldrh       r0,[r0,#0xc]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r4\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802afd8:\n\
     .word 0x03002000\n\
DAT_0802afdc:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_0802afe0()
{
    asm("\n\
     ldrh       r3,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     strh       r3,[r0,#0xa]\n\
     ldr        r1,[r1,#0x4]\n\
     str        r1,[r0,#0xc]\n\
     strh       r2,[r0,#0x10]\n\
     strh       r2,[r0,#0x12]\n\
     strh       r2,[r0,#0x14]\n\
     strh       r2,[r0,#0x16]\n\
     strh       r2,[r0,#0x18]\n\
     strh       r2,[r0,#0x1a]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802aff8()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r3,[r1,#0x0]\n\
     ldr        r4,[r1,#0x4]\n\
     str        r3,[r0,#0x0]\n\
     str        r4,[r0,#0x4]\n\
     strh       r2,[r0,#0x8]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802b00c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r2,[r1,#0x0]\n\
     ldr        r3,[r1,#0x4]\n\
     str        r2,[r4,#0x0]\n\
     str        r3,[r4,#0x4]\n\
     ldr        r0,[r4,#0x4]\n\
     str        r0,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x8]\n\
     mov        r1,#0x0\n\
     strh       r0,[r4,#0x1c]\n\
     mov        r2,#0x0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802b02c\n\
     mov        r2,#0x1\n\
LAB_0802b02c:\n\
     strh       r2,[r4,#0xc]\n\
     str        r1,[r4,#0x10]\n\
     str        r1,[r4,#0x14]\n\
     strh       r1,[r4,#0x1e]\n\
     strh       r1,[r4,#0x20]\n\
     strh       r1,[r4,#0x22]\n\
     mov        r0,#0x3\n\
     strh       r0,[r4,#0xa]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802b044()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     add        r0,r1,#0x0\n\
     add        r5,r2,#0x0\n\
     mov        r2,#0xe1\n\
     lsl        r2,r2,#0xa\n\
     add        r1,r4,#0x0\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b078\n\
     ldrh       r0,[r4,#0x26]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802b078\n\
     ldrh       r0,[r4,#0x24]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b074\n\
     ldr        r0,[r4,#0x10]\n\
     ldr        r1,[r4,#0x14]\n\
     str        r0,[r5,#0x0]\n\
     str        r1,[r5,#0x4]\n\
     mov        r0,#0x1\n\
     b          LAB_0802b07a\n\
LAB_0802b074:\n\
     mov        r0,#0x78\n\
     strh       r0,[r4,#0x24]\n\
LAB_0802b078:\n\
     mov        r0,#0x0\n\
LAB_0802b07a:\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802b080()
{
    asm("\n\
     push       {lr}\n\
     add        r3,r0,#0x0\n\
     add        r0,r1,#0x0\n\
     ldr        r2,DAT_0802b098\n\
     add        r1,r3,#0x0\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802b09c\n\
     mov        r0,#0x0\n\
     b          LAB_0802b09e\n\
DAT_0802b098:\n\
     .word 0x00044100\n\
LAB_0802b09c:\n\
     mov        r0,#0x1\n\
LAB_0802b09e:\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802b0a4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r4,r0,#0x0\n\
     add        r7,r1,#0x0\n\
     ldr        r0,[r7,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r6,r0,#0x8\n\
     ldr        r0,[r7,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r5,r0,#0x8\n\
     cmp        r6,r5\n\
     ble        LAB_0802b0cc\n\
     add        r0,r5,#0x0\n\
     add        r5,r6,#0x0\n\
     add        r6,r0,#0x0\n\
LAB_0802b0cc:\n\
     str        r5,[r4,#0x0]\n\
     ldr        r0,[r7,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_0803b6f8\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r4,#0x4]\n\
     str        r6,[r4,#0xc]\n\
     str        r5,[r4,#0x10]\n\
     mov        r0,#0x8c\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r4,#0x14]\n\
     mov        r1,#0x0\n\
     strh       r1,[r4,#0x18]\n\
     mov        r0,#0x4\n\
     strh       r0,[r4,#0x1a]\n\
     mov        r0,#0xb\n\
     strh       r0,[r4,#0x1c]\n\
     strh       r1,[r4,#0x1e]\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802b0fc()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     add        r0,r1,#0x0\n\
     add        r5,r2,#0x0\n\
     mov        r2,#0xe1\n\
     lsl        r2,r2,#0xa\n\
     add        r1,r4,#0x0\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802b118\n\
     mov        r0,#0x0\n\
     b          LAB_0802b11e\n\
LAB_0802b118:\n\
     ldr        r0,[r4,#0x14]\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
LAB_0802b11e:\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802b124()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xa]\n\
     strh       r1,[r4,#0x3c]\n\
     mov        r3,#0x0\n\
     ldr        r0,DAT_0802b170\n\
     mov        r12,r0\n\
     ldr        r5,DAT_0802b174\n\
     ldr        r7,DAT_0802b178\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x2\n\
LAB_0802b13c:\n\
     lsl        r2,r3,#0x1\n\
     add        r2,r4,r2\n\
     ldrh       r0,[r2,#0x0]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     and        r0,r7\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r5\n\
     ldr        r0,[r1,#0x0]\n\
     orr        r0,r6\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     cmp        r3,#0x4\n\
     bls        LAB_0802b13c\n\
     mov        r0,#0x0\n\
     mov        r1,r12\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802b170:\n\
     .word 0x020101C8\n\
DAT_0802b174:\n\
     .word 0x03002000\n\
DAT_0802b178:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_0802b17c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     add        r2,r0,#0x0\n\
     add        r2,#0x5c\n\
     mov        r1,#0xc\n\
     strh       r1,[r2,#0x0]\n\
     mov        r2,#0x0\n\
     add        r5,r0,#0x0\n\
     add        r5,#0x5e\n\
     mov        r7,#0x0\n\
     add        r4,r0,#0x0\n\
     add        r4,#0x72\n\
     mov        r6,#0x64\n\
     add        r3,r0,#0x0\n\
     add        r3,#0x86\n\
LAB_0802b19c:\n\
     lsl        r1,r2,#0x1\n\
     add        r0,r5,r1\n\
     strh       r2,[r0,#0x0]\n\
     add        r0,r4,r1\n\
     strh       r6,[r0,#0x0]\n\
     add        r1,r3,r1\n\
     strh       r7,[r1,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x9\n\
     bls        LAB_0802b19c\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802b1bc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r12,r0\n\
     mov        r2,#0x0\n\
     mov        r0,#0x1\n\
     mov        r3,r12\n\
     strh       r0,[r3,#0x0]\n\
     strh       r2,[r3,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r1,[r1,#0x4]\n\
     mov        r6,r12\n\
     str        r0,[r6,#0x4]\n\
     str        r1,[r6,#0x8]\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_0802b220\n\
LAB_0802b1d8:\n\
     lsl        r1,r4,#0x1\n\
     mov        r0,r12\n\
     add        r0,#0x5e\n\
     add        r0,r0,r1\n\
     strh       r4,[r0,#0x0]\n\
     lsl        r3,r4,#0x3\n\
     mov        r2,r12\n\
     add        r2,#0xc\n\
     add        r2,r2,r3\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r5\n\
     mov        r6,#0x0\n\
     ldrsh      r1,[r0,r6]\n\
     lsl        r1,r1,#0x8\n\
     mov        r6,r12\n\
     ldr        r0,[r6,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r2,r12\n\
     add        r2,#0x10\n\
     add        r2,r2,r3\n\
     add        r3,r3,r5\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r3,r0]\n\
     lsl        r1,r1,#0x8\n\
     ldr        r0,[r6,#0x8]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x9\n\
     bls        LAB_0802b1d8\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802b220:\n\
     .word 0x087B72F4\n\
    ");
}
__attribute__((naked)) void fun_0802b224()
{
    asm("\n\
     ldr        r2,[r1,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802b230()
{
    asm("\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x2]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802b238()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r1,[r1,#0x4]\n\
     str        r0,[r4,#0x0]\n\
     str        r1,[r4,#0x4]\n\
     mov        r0,#0x8\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802b26c\n\
     mov        r0,#0x8\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802b26c\n\
     ldr        r0,DAT_0802b268\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802b26c\n\
     mov        r0,#0x1\n\
     b          LAB_0802b28e\n\
DAT_0802b268:\n\
     .word 0x02002530\n\
LAB_0802b26c:\n\
     ldr        r3,DAT_0802b298\n\
     ldrh       r0,[r4,#0x8]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_0802b29c\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x8]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
LAB_0802b28e:\n\
     strh       r0,[r4,#0xa]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802b298:\n\
     .word 0x03002000\n\
DAT_0802b29c:\n\
     .word 0xFFFFFCFF\n\
    ");
}
__attribute__((naked)) void fun_0802b2a0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x8\n\
     add        r5,r0,#0x0\n\
     ldrh       r0,[r5,#0xa]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b2d0\n\
     mov        r4,sp\n\
     add        r4,#0x6\n\
     add        r0,r5,#0x0\n\
     add        r1,sp,#0x4\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803b5a0\n\
     ldrh       r0,[r5,#0x8]\n\
     add        r1,sp,#0x4\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r1,r2]\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r4,r3]\n\
     mov        r3,#0xf\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_0802aae4\n\
LAB_0802b2d0:\n\
     add        sp,#0x8\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802b2d8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r4,#0xa]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b32c\n\
     ldr        r2,DAT_0802b320\n\
     add        r0,r1,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080035d0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b32c\n\
     ldr        r3,DAT_0802b324\n\
     ldrh       r0,[r4,#0x8]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_0802b328\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x8]\n\
     lsl        r1,r0,#0x3\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xa]\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
     mov        r0,#0x1\n\
     b          LAB_0802b32e\n\
DAT_0802b320:\n\
     .word 0x00044100\n\
DAT_0802b324:\n\
     .word 0x03002000\n\
DAT_0802b328:\n\
     .word 0xFFFFFCFF\n\
LAB_0802b32c:\n\
     mov        r0,#0x0\n\
LAB_0802b32e:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802b334()
{
    asm("\n\
     push       {r4,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r2,DAT_0802b35c\n\
     ldr        r3,DAT_0802b360\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r1,r3\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r1,r4]\n\
     str        r1,[r2,#0x0]\n\
     ldr        r1,DAT_0802b364\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r3\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     str        r0,[r1,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802b35c:\n\
     .word 0x02000568\n\
DAT_0802b360:\n\
     .word 0x08049824\n\
DAT_0802b364:\n\
     .word 0x02000564\n\
    ");
}
__attribute__((naked)) void fun_0802b368()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r6,[r0,#0x0]\n\
     ldr        r5,[r0,#0x4]\n\
     ldr        r1,DAT_0802b398\n\
     ldr        r4,[r1,#0x0]\n\
     add        r1,r6,#0x0\n\
     mul        r1,r4\n\
     ldr        r2,DAT_0802b39c\n\
     ldr        r3,[r2,#0x0]\n\
     add        r2,r5,#0x0\n\
     mul        r2,r3\n\
     add        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[r0,#0x0]\n\
     add        r1,r5,#0x0\n\
     mul        r1,r4\n\
     add        r2,r6,#0x0\n\
     mul        r2,r3\n\
     sub        r1,r1,r2\n\
     asr        r1,r1,#0x8\n\
     str        r1,[r0,#0x4]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802b398:\n\
     .word 0x02000568\n\
DAT_0802b39c:\n\
     .word 0x02000564\n\
    ");
}
__attribute__((naked)) void fun_0802b3a0()
{
    asm("\n\
     add        r3,r0,#0x0\n\
     ldr        r2,[r3,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     ble        LAB_0802b3c2\n\
     ldr        r0,[r1,#0x8]\n\
     cmp        r2,r0\n\
     bge        LAB_0802b3c2\n\
     ldr        r2,[r3,#0x4]\n\
     ldr        r0,[r1,#0x4]\n\
     cmp        r2,r0\n\
     ble        LAB_0802b3c2\n\
     ldr        r0,[r1,#0xc]\n\
     cmp        r2,r0\n\
     bge        LAB_0802b3c2\n\
     mov        r0,#0x1\n\
     b          LAB_0802b3c4\n\
LAB_0802b3c2:\n\
     mov        r0,#0x0\n\
LAB_0802b3c4:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802b3c8()
{
    asm("\n\
     ldr        r2,DAT_0802b3e0\n\
     ldr        r0,DAT_0802b3e4\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802b3e8\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0802b3ec\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0802b3e0:\n\
     .word 0x020101E0\n\
DAT_0802b3e4:\n\
     .word 0x0858E750\n\
DAT_0802b3e8:\n\
     .word 0x020101F0\n\
DAT_0802b3ec:\n\
     .word 0x0858E6EC\n\
    ");
}
__attribute__((naked)) void fun_0802b3f0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x4\n\
     ldr        r0,PTR_DAT_0802b4f0\n\
     mov        r9,r0\n\
     ldr        r1,PTR_DAT_0802b4f4\n\
     mov        r8,r1\n\
     ldr        r0,PTR_DAT_0802b4f8\n\
     mov        r7,#0x0\n\
     strh       r7,[r0,#0x0]\n\
     strh       r7,[r1,#0x0]\n\
     mov        r0,r9\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_0802b4fc\n\
     ldr        r1,PTR_DAT_0802b500\n\
     ldr        r0,PTR_DAT_0802b504\n\
     strh       r7,[r0,#0x0]\n\
     strh       r7,[r1,#0x0]\n\
     strh       r7,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_0802b508\n\
     ldr        r1,PTR_DAT_0802b50c\n\
     ldr        r0,PTR_DAT_0802b510\n\
     strh       r7,[r0,#0x0]\n\
     strh       r7,[r1,#0x0]\n\
     strh       r7,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_0802b514\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802b518\n\
     ldr        r0,PTR_DAT_0802b51c\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802b520\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802b524\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802b528\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802b52c\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r4,PTR_DAT_0802b530\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802b534\n\
     strb       r7,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802b538\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802b53c\n\
     strh       r7,[r0,#0x0]\n\
     mov        r0,sp\n\
     mov        r1,#0xff\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_0802b540\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0802b544\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r5,#0xa0\n\
     lsl        r5,r5,#0x13\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0802b548\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x13\n\
     ldr        r1,DAT_0802b54c\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_0802b550\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0802b5ac\n\
     mov        r0,sp\n\
     strh       r7,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0802b554\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0802b558\n\
     ldr        r1,DAT_0802b55c\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_0802b560\n\
     str        r0,[r4,#0x0]\n\
     str        r5,[r4,#0x4]\n\
     ldr        r0,DAT_0802b564\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r1,DAT_0802b568\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_0802b56c\n\
     mov        r0,#0x3c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802b570\n\
     ldr        r2,DAT_0802b574\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r0,DAT_0802b578\n\
     mov        r2,#0x1\n\
     add        r1,r2,#0x0\n\
     ldrb       r0,[r0,#0x0]\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802b584\n\
     ldr        r0,DAT_0802b57c\n\
     strh       r7,[r0,#0x0]\n\
     mov        r0,r9\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r0,DAT_0802b580\n\
     mov        r1,r8\n\
     b          LAB_0802b590\n\
PTR_DAT_0802b4f0:\n\
     .word       DAT_02010288\n\
PTR_DAT_0802b4f4:\n\
     .word       DAT_020102f8\n\
PTR_DAT_0802b4f8:\n\
     .word       DAT_02010280\n\
PTR_DAT_0802b4fc:\n\
     .word       DAT_02010300\n\
PTR_DAT_0802b500:\n\
     .word       DAT_02010320\n\
PTR_DAT_0802b504:\n\
     .word       DAT_02010304\n\
PTR_DAT_0802b508:\n\
     .word       DAT_02010200\n\
PTR_DAT_0802b50c:\n\
     .word       DAT_02010284\n\
PTR_DAT_0802b510:\n\
     .word       DAT_020102a8\n\
PTR_DAT_0802b514:\n\
     .word       DAT_0200ecc0\n\
PTR_DAT_0802b518:\n\
     .word       DAT_0200ece0\n\
PTR_DAT_0802b51c:\n\
     .word       DAT_02005830\n\
PTR_DAT_0802b520:\n\
     .word       DAT_0201027c\n\
PTR_DAT_0802b524:\n\
     .word       DAT_02010208\n\
PTR_DAT_0802b528:\n\
     .word       DAT_0200ed40\n\
PTR_DAT_0802b52c:\n\
     .word       DAT_020102a0\n\
PTR_DAT_0802b530:\n\
     .word       DAT_02010234\n\
PTR_DAT_0802b534:\n\
     .word       DAT_02010278\n\
PTR_DAT_0802b538:\n\
     .word       DAT_020102b0\n\
PTR_DAT_0802b53c:\n\
     .word       DAT_0200ee28\n\
DAT_0802b540:\n\
     .word 0x040000D4\n\
DAT_0802b544:\n\
     .word 0x8100C000\n\
DAT_0802b548:\n\
     .word 0x81000200\n\
DAT_0802b54c:\n\
     .word 0x00001F44\n\
DAT_0802b550:\n\
     .word 0x0400000C\n\
DAT_0802b554:\n\
     .word 0x81000100\n\
DAT_0802b558:\n\
     .word 0x0859377C\n\
DAT_0802b55c:\n\
     .word 0x0600A000\n\
DAT_0802b560:\n\
     .word 0x0859357C\n\
DAT_0802b564:\n\
     .word 0x80000100\n\
DAT_0802b568:\n\
     .word 0x00001F54\n\
DAT_0802b56c:\n\
     .word 0x0200EE2C\n\
DAT_0802b570:\n\
     .word 0x00006739\n\
DAT_0802b574:\n\
     .word 0x00007FFF\n\
DAT_0802b578:\n\
     .word 0x02010254\n\
DAT_0802b57c:\n\
     .word 0x0201020C\n\
DAT_0802b580:\n\
     .word 0x020102A4\n\
LAB_0802b584:\n\
     ldr        r0,DAT_0802b5a4\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,r8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_0802b5a8\n\
     mov        r1,r9\n\
LAB_0802b590:\n\
     strh       r2,[r1,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802b5a4:\n\
     .word 0x020102A4\n\
DAT_0802b5a8:\n\
     .word 0x0201020C\n\
    ");
}
__attribute__((naked)) void fun_0802b5ac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0802b73c\n\
     bl         fun_080045f0\n\
     ldr        r4,DAT_0802b740\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802b744\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     mov        r8,r1\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x6]\n\
     mov        r1,#0x68\n\
     mov        r9,r1\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x2]\n\
     mov        r5,#0x40\n\
     strh       r5,[r0,#0x4]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r6,r1,#0x0\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r6\n\
     strh       r1,[r0,#0x12]\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802b748\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x6]\n\
     mov        r1,#0x88\n\
     strh       r1,[r0,#0x2]\n\
     strh       r5,[r0,#0x4]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r6\n\
     strh       r1,[r0,#0x12]\n\
     sub        r4,#0x30\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802b74c\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x6]\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x2]\n\
     strh       r5,[r0,#0x4]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r6\n\
     strh       r1,[r0,#0x12]\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802b750\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x6]\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x2]\n\
     mov        r1,#0x60\n\
     strh       r1,[r0,#0x4]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r6\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,PTR_DAT_0802b754\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r5,PTR_DAT_0802b758\n\
     add        r4,r0,#0x0\n\
     mov        r7,#0x0\n\
     mov        r6,#0x0\n\
LAB_0802b64c:\n\
     ldr        r0,DAT_0802b75c\n\
     bl         fun_08003998\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r4,r2]\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r6,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     ble        LAB_0802b64c\n\
     ldr        r1,PTR_DAT_0802b754\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r5,DAT_0802b760\n\
     add        r4,r1,#0x0\n\
     mov        r6,#0x0\n\
LAB_0802b6a4:\n\
     ldr        r0,DAT_0802b764\n\
     bl         fun_08003998\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r4,r2]\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r4,r0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,DAT_0802b768\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     strh       r0,[r2,#0x2]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0802b76c\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r4,r2]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x5\n\
     ble        LAB_0802b6a4\n\
     ldr        r1,PTR_DAT_0802b754\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r5,DAT_0802b770\n\
     add        r4,r1,#0x0\n\
LAB_0802b6fc:\n\
     ldr        r0,DAT_0802b774\n\
     bl         fun_08003998\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r4,r2]\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r5\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     ble        LAB_0802b6fc\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802b73c:\n\
     .word 0x0859337C\n\
DAT_0802b740:\n\
     .word 0x0859336C\n\
PTR_DAT_0802b744:\n\
     .word       DAT_020102b4\n\
PTR_DAT_0802b748:\n\
     .word       DAT_0201028c\n\
PTR_DAT_0802b74c:\n\
     .word       DAT_0201029c\n\
PTR_DAT_0802b750:\n\
     .word       DAT_0201024c\n\
PTR_DAT_0802b754:\n\
     .word       DAT_02009b58\n\
PTR_DAT_0802b758:\n\
     .word       DAT_02010240\n\
DAT_0802b75c:\n\
     .word 0x0859334C\n\
DAT_0802b760:\n\
     .word 0x02010260\n\
DAT_0802b764:\n\
     .word 0x0859332C\n\
DAT_0802b768:\n\
     .word 0x087B746E\n\
DAT_0802b76c:\n\
     .word 0x087B747A\n\
DAT_0802b770:\n\
     .word 0x02010290\n\
DAT_0802b774:\n\
     .word 0x0859335C\n\
    ");
}
__attribute__((naked)) void fun_0802b778()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     ldr        r1,PTR_DAT_0802b82c\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x2\n\
     beq        LAB_0802b78a\n\
     b          LAB_0802b936\n\
LAB_0802b78a:\n\
     ldr        r0,PTR_DAT_0802b830\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0802b796\n\
     b          LAB_0802b8e4\n\
LAB_0802b796:\n\
     ldr        r0,PTR_DAT_0802b834\n\
     ldr        r1,PTR_DAT_0802b838\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_0802b7a4\n\
     b          LAB_0802b8d8\n\
LAB_0802b7a4:\n\
     mov        r5,#0x0\n\
     mov        r6,#0x0\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r9,r0\n\
     mov        r1,#0x3\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     mov        r8,r1\n\
LAB_0802b7b4:\n\
     ldr        r1,PTR_DAT_0802b83c\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r1\n\
     mov        r1,#0xa\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802b840\n\
     lsl        r3,r5,#0x4\n\
     add        r3,r3,r0\n\
     strh       r6,[r3,#0x0]\n\
     strh       r6,[r3,#0x4]\n\
     strh       r6,[r3,#0x2]\n\
     mov        r2,r9\n\
     ldrb       r4,[r3,#0x7]\n\
     and        r2,r4\n\
     sub        r1,#0xc\n\
     add        r0,r1,#0x0\n\
     and        r2,r0\n\
     mov        r0,#0x7f\n\
     ldrb       r4,[r3,#0x6]\n\
     and        r0,r4\n\
     mov        r4,#0x41\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     add        r1,r4,#0x0\n\
     and        r0,r1\n\
     add        r4,#0x20\n\
     add        r1,r4,#0x0\n\
     and        r0,r1\n\
     mov        r1,#0x1\n\
     orr        r0,r1\n\
     mov        r1,r8\n\
     and        r2,r1\n\
     strb       r2,[r3,#0x7]\n\
     mov        r2,r9\n\
     and        r0,r2\n\
     add        r4,#0x10\n\
     add        r1,r4,#0x0\n\
     and        r0,r1\n\
     mov        r2,#0x9\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r1,r2,#0x0\n\
     and        r0,r1\n\
     mov        r4,r8\n\
     and        r0,r4\n\
     strb       r0,[r3,#0x6]\n\
     mov        r0,#0xf\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     asr        r3,r0,#0x10\n\
     cmp        r3,#0x4\n\
     bgt        LAB_0802b84c\n\
     ldr        r1,PTR_DAT_0802b844\n\
     strh       r6,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802b848\n\
     strh       r2,[r0,#0x0]\n\
     add        r7,r1,#0x0\n\
     add        r4,r0,#0x0\n\
     b          LAB_0802b87e\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802b82c:\n\
     .word       DAT_02010278\n\
PTR_DAT_0802b830:\n\
     .word       DAT_0200ecc0\n\
PTR_DAT_0802b834:\n\
     .word       DAT_02005830\n\
PTR_DAT_0802b838:\n\
     .word       DAT_0200ece0\n\
PTR_DAT_0802b83c:\n\
     .word       DAT_020102b8\n\
PTR_DAT_0802b840:\n\
     .word       DAT_020102c0\n\
PTR_DAT_0802b844:\n\
     .word       DAT_020102f0\n\
PTR_DAT_0802b848:\n\
     .word       DAT_0200eef0\n\
LAB_0802b84c:\n\
     cmp        r3,#0x9\n\
     bgt        LAB_0802b86c\n\
     ldr        r2,DAT_0802b864\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802b868\n\
     sub        r0,r3,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     add        r7,r2,#0x0\n\
     add        r4,r1,#0x0\n\
     b          LAB_0802b87e\n\
.space 1\n\
.space 1\n\
DAT_0802b864:\n\
     .word 0x020102F0\n\
DAT_0802b868:\n\
     .word 0x0200EEF0\n\
LAB_0802b86c:\n\
     ldr        r7,DAT_0802b8fc\n\
     ldr        r4,DAT_0802b900\n\
     cmp        r3,#0xe\n\
     bgt        LAB_0802b87e\n\
     mov        r0,#0x2\n\
     strh       r0,[r7,#0x0]\n\
     add        r0,r3,#0x0\n\
     sub        r0,#0xa\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802b87e:\n\
     ldr        r2,DAT_0802b904\n\
     ldr        r1,DAT_0802b908\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r4,r3]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     strh       r4,[r2,#0x0]\n\
     ldr        r2,DAT_0802b90c\n\
     ldr        r1,DAT_0802b910\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r7,r3]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r3,[r0,#0x0]\n\
     strh       r3,[r2,#0x0]\n\
     ldr        r0,DAT_0802b914\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0xd\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r1,[r1,#0x0]\n\
     ldr        r4,DAT_0802b918\n\
     add        r0,r4,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x2\n\
     bhi        LAB_0802b8d0\n\
     b          LAB_0802b7b4\n\
LAB_0802b8d0:\n\
     ldr        r1,DAT_0802b91c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r3,r1,#0x0\n\
LAB_0802b8d8:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b8e4\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
LAB_0802b8e4:\n\
     bl         fun_0802b9cc\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_0802b920\n\
LAB_0802b8ec:\n\
     lsl        r0,r5,#0x4\n\
     add        r1,r0,r4\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b924\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802b92a\n\
DAT_0802b8fc:\n\
     .word 0x020102F0\n\
DAT_0802b900:\n\
     .word 0x0200EEF0\n\
DAT_0802b904:\n\
     .word 0x020102AC\n\
DAT_0802b908:\n\
     .word 0x087B745E\n\
DAT_0802b90c:\n\
     .word 0x02010250\n\
DAT_0802b910:\n\
     .word 0x087B7468\n\
DAT_0802b914:\n\
     .word 0x02010290\n\
DAT_0802b918:\n\
     .word 0x0000FDFF\n\
DAT_0802b91c:\n\
     .word 0x0200ECC0\n\
DAT_0802b920:\n\
     .word 0x020102C0\n\
LAB_0802b924:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0802bef8\n\
LAB_0802b92a:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x2\n\
     bls        LAB_0802b8ec\n\
     b          LAB_0802b972\n\
LAB_0802b936:\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802b972\n\
     ldr        r0,DAT_0802b980\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_0802b984\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,PTR_DAT_0802b988\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r1,#0x0\n\
     ldrh       r4,[r2,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,PTR_DAT_0802b98c\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,PTR_DAT_0802b990\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r4,[r0,#0x12]\n\
     and        r1,r4\n\
     strh       r1,[r0,#0x12]\n\
LAB_0802b972:\n\
     ldr        r0,PTR_DAT_0802b994\n\
     ldr        r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802b998\n\
     bl         fun_0802c27c\n\
     b          LAB_0802b9b6\n\
DAT_0802b980:\n\
     .word 0x020102B4\n\
DAT_0802b984:\n\
     .word 0x0000FDFF\n\
PTR_DAT_0802b988:\n\
     .word       DAT_0201028c\n\
PTR_DAT_0802b98c:\n\
     .word       DAT_0201029c\n\
PTR_DAT_0802b990:\n\
     .word       DAT_0201024c\n\
PTR_DAT_0802b994:\n\
     .word       DAT_0200ee2c\n\
LAB_0802b998:\n\
     ldr        r5,DAT_0802b9c4\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b9aa\n\
     ldr        r0,DAT_0802b9c8\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     strh       r4,[r5,#0x0]\n\
LAB_0802b9aa:\n\
     mov        r0,#0x11\n\
     bl         fun_080016f0\n\
     mov        r0,#0x19\n\
     bl         fun_08001070\n\
LAB_0802b9b6:\n\
     mov        r0,#0x0\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802b9c4:\n\
     .word 0x0200EE28\n\
DAT_0802b9c8:\n\
     .word 0x0200ED50\n\
    ");
}
__attribute__((naked)) void fun_0802b9cc()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ba30\n\
     ldr        r2,PTR_DAT_0802ba1c\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802b9e6\n\
     b          LAB_0802bb64\n\
LAB_0802b9e6:\n\
     ldr        r0,PTR_DAT_0802ba20\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r1,r3]\n\
     sub        r0,#0x26\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802b9f6\n\
     b          LAB_0802bb6e\n\
LAB_0802b9f6:\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_0802ba24\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_0802ba28\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_0802ba2c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0802bb48\n\
PTR_DAT_0802ba1c:\n\
     .word       DAT_020102b0\n\
PTR_DAT_0802ba20:\n\
     .word       DAT_020102b4\n\
PTR_DAT_0802ba24:\n\
     .word       DAT_0201028c\n\
PTR_DAT_0802ba28:\n\
     .word       DAT_0201029c\n\
PTR_DAT_0802ba2c:\n\
     .word       DAT_0201024c\n\
LAB_0802ba30:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ba94\n\
     ldr        r2,PTR_DAT_0802ba80\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ba48\n\
     b          LAB_0802bb64\n\
LAB_0802ba48:\n\
     ldr        r0,PTR_DAT_0802ba84\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r1,r3]\n\
     add        r0,#0x26\n\
     cmp        r0,#0xdf\n\
     ble        LAB_0802ba58\n\
     b          LAB_0802bb6e\n\
LAB_0802ba58:\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_0802ba88\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_0802ba8c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_0802ba90\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0802bb48\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802ba80:\n\
     .word       DAT_020102b0\n\
PTR_DAT_0802ba84:\n\
     .word       DAT_0201028c\n\
PTR_DAT_0802ba88:\n\
     .word       DAT_020102b4\n\
PTR_DAT_0802ba8c:\n\
     .word       DAT_0201029c\n\
PTR_DAT_0802ba90:\n\
     .word       DAT_0201024c\n\
LAB_0802ba94:\n\
     bl         fun_080014bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802bafe\n\
     ldr        r3,PTR_DAT_0802bae4\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r3,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802baf8\n\
     ldr        r0,PTR_DAT_0802bae8\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r2,r1]\n\
     sub        r0,#0x26\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802bb6e\n\
     ldr        r0,PTR_DAT_0802baec\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x26\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0x26\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_0802baf0\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x26\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_0802baf4\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x26\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x6\n\
     strh       r0,[r3,#0x0]\n\
     b          LAB_0802bb6e\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802bae4:\n\
     .word       DAT_020102b0\n\
PTR_DAT_0802bae8:\n\
     .word       DAT_0201029c\n\
PTR_DAT_0802baec:\n\
     .word       DAT_0201024c\n\
PTR_DAT_0802baf0:\n\
     .word       DAT_0201028c\n\
PTR_DAT_0802baf4:\n\
     .word       DAT_020102b4\n\
LAB_0802baf8:\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     b          LAB_0802bb6e\n\
LAB_0802bafe:\n\
     bl         fun_080014d4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802bb6a\n\
     ldr        r2,PTR_DAT_0802bb50\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bb64\n\
     ldr        r0,PTR_DAT_0802bb54\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r1,r3]\n\
     add        r0,#0x26\n\
     cmp        r0,#0x96\n\
     bgt        LAB_0802bb6e\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_0802bb58\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_0802bb5c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_0802bb60\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x26\n\
     strh       r0,[r1,#0x4]\n\
LAB_0802bb48:\n\
     mov        r0,#0x6\n\
     strh       r0,[r2,#0x0]\n\
     b          LAB_0802bb6e\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802bb50:\n\
     .word       DAT_020102b0\n\
PTR_DAT_0802bb54:\n\
     .word       DAT_0201024c\n\
PTR_DAT_0802bb58:\n\
     .word       DAT_0201029c\n\
PTR_DAT_0802bb5c:\n\
     .word       DAT_0201028c\n\
PTR_DAT_0802bb60:\n\
     .word       DAT_020102b4\n\
LAB_0802bb64:\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     b          LAB_0802bb6e\n\
LAB_0802bb6a:\n\
     ldr        r0,DAT_0802bb84\n\
     strh       r1,[r0,#0x0]\n\
LAB_0802bb6e:\n\
     ldr        r0,DAT_0802bb88\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802bb7e\n\
     bl         fun_0802bb8c\n\
LAB_0802bb7e:\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802bb84:\n\
     .word 0x020102B0\n\
DAT_0802bb88:\n\
     .word 0x02005CE0\n\
    ");
}
__attribute__((naked)) void fun_0802bb8c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x0]\n\
     mov        r6,#0x0\n\
     ldr        r1,DAT_0802bbf0\n\
     mov        r8,r1\n\
     ldr        r2,DAT_0802bbf4\n\
     mov        r10,r2\n\
     ldr        r4,DAT_0802bbf8\n\
     mov        r9,r4\n\
LAB_0802bbaa:\n\
     lsl        r0,r6,#0x4\n\
     mov        r1,r8\n\
     add        r3,r0,r1\n\
     ldrb       r2,[r3,#0x6]\n\
     lsl        r1,r2,#0x1a\n\
     str        r0,[sp,#0x8]\n\
     add        r4,r6,#0x1\n\
     str        r4,[sp,#0x4]\n\
     cmp        r1,#0x0\n\
     blt        LAB_0802bbc0\n\
     b          LAB_0802bec8\n\
LAB_0802bbc0:\n\
     ldr        r0,DAT_0802bbfc\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     ldrh       r1,[r3,#0x4]\n\
     cmp        r0,r1\n\
     beq        LAB_0802bbce\n\
     b          LAB_0802bec8\n\
LAB_0802bbce:\n\
     ldr        r0,DAT_0802bc00\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r4,[r3,#0x2]\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r0,r4\n\
     beq        LAB_0802bbdc\n\
     b          LAB_0802bec8\n\
LAB_0802bbdc:\n\
     lsl        r0,r2,#0x19\n\
     lsr        r7,r0,#0x1f\n\
     cmp        r7,#0x0\n\
     beq        LAB_0802bc04\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     b          LAB_0802bec8\n\
DAT_0802bbf0:\n\
     .word 0x020102C0\n\
DAT_0802bbf4:\n\
     .word 0x02010240\n\
DAT_0802bbf8:\n\
     .word 0x0000FDFF\n\
DAT_0802bbfc:\n\
     .word 0x0201029C\n\
DAT_0802bc00:\n\
     .word 0x020102B4\n\
LAB_0802bc04:\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x40\n\
     orr        r0,r2\n\
     strb       r0,[r3,#0x6]\n\
     ldrh       r2,[r3,#0xc]\n\
     add        r1,r2,#0x0\n\
     cmp        r1,#0xb\n\
     bne        LAB_0802bc4a\n\
     lsl        r2,r6,#0x2\n\
     add        r2,r10\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r3,#0x7]\n\
     orr        r0,r1\n\
     strb       r0,[r3,#0x7]\n\
     mov        r0,#0x14\n\
     bl         fun_080016f0\n\
     b          LAB_0802bea0\n\
LAB_0802bc4a:\n\
     cmp        r1,#0xa\n\
     bne        LAB_0802bc88\n\
     ldr        r1,DAT_0802bc84\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r2,r6,#0x2\n\
     add        r2,r10\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r3,#0x7]\n\
     orr        r0,r1\n\
     strb       r0,[r3,#0x7]\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     b          LAB_0802bea0\n\
DAT_0802bc84:\n\
     .word 0x02010304\n\
LAB_0802bc88:\n\
     ldr        r0,DAT_0802bce4\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0802bc92\n\
     b          LAB_0802bd9c\n\
LAB_0802bc92:\n\
     cmp        r1,#0x4\n\
     bhi        LAB_0802bd60\n\
     ldr        r1,DAT_0802bce8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r2,r6,#0x2\n\
     add        r2,r10\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r7,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     ldrb       r1,[r3,#0x6]\n\
     orr        r0,r1\n\
     strb       r0,[r3,#0x6]\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     mov        r3,#0x0\n\
     mov        r2,r8\n\
     ldrb       r2,[r2,#0x7]\n\
     lsl        r0,r2,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802bcf0\n\
     mov        r4,r8\n\
     ldrb       r4,[r4,#0x6]\n\
     lsr        r0,r4,#0x7\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bcf0\n\
     ldr        r1,DAT_0802bcec\n\
     b          LAB_0802bd12\n\
.space 1\n\
.space 1\n\
DAT_0802bce4:\n\
     .word 0x020102F8\n\
DAT_0802bce8:\n\
     .word 0x02010300\n\
DAT_0802bcec:\n\
     .word 0x02010280\n\
LAB_0802bcf0:\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     ldr        r1,DAT_0802bd34\n\
     cmp        r3,#0x2\n\
     bhi        LAB_0802bd16\n\
     lsl        r0,r3,#0x4\n\
     mov        r4,r8\n\
     add        r2,r0,r4\n\
     ldrb       r4,[r2,#0x7]\n\
     lsl        r0,r4,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802bcf0\n\
     ldrb       r2,[r2,#0x6]\n\
     lsr        r0,r2,#0x7\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bcf0\n\
LAB_0802bd12:\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802bd16:\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bd3c\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_0802bd38\n\
     mov        r1,#0x10\n\
LAB_0802bd22:\n\
     lsl        r0,r2,#0x4\n\
     add        r0,r0,r3\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x2\n\
     bls        LAB_0802bd22\n\
     b          LAB_0802bea0\n\
DAT_0802bd34:\n\
     .word 0x02010280\n\
DAT_0802bd38:\n\
     .word 0x020102C0\n\
LAB_0802bd3c:\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_0802bd5c\n\
LAB_0802bd44:\n\
     lsl        r0,r2,#0x4\n\
     add        r0,r0,r3\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x1e\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x2\n\
     bls        LAB_0802bd44\n\
     b          LAB_0802bea0\n\
.space 1\n\
.space 1\n\
DAT_0802bd5c:\n\
     .word 0x020102C0\n\
LAB_0802bd60:\n\
     ldr        r1,DAT_0802bd98\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r2,r6,#0x2\n\
     add        r2,r10\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r3,#0x7]\n\
     orr        r0,r1\n\
     strb       r0,[r3,#0x7]\n\
     mov        r0,#0x17\n\
     bl         fun_080016f0\n\
     b          LAB_0802bea0\n\
.space 1\n\
.space 1\n\
DAT_0802bd98:\n\
     .word 0x02010320\n\
LAB_0802bd9c:\n\
     sub        r0,r2,#0x5\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4\n\
     bhi        LAB_0802be6c\n\
     ldr        r1,DAT_0802bdf4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r2,r6,#0x2\n\
     add        r2,r10\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     ldrb       r1,[r3,#0x6]\n\
     orr        r0,r1\n\
     strb       r0,[r3,#0x6]\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     mov        r3,#0x0\n\
     mov        r2,r8\n\
     ldrb       r2,[r2,#0x7]\n\
     lsl        r0,r2,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802bdfc\n\
     mov        r4,r8\n\
     ldrb       r4,[r4,#0x6]\n\
     lsr        r0,r4,#0x7\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bdfc\n\
     ldr        r1,DAT_0802bdf8\n\
     b          LAB_0802be1e\n\
.space 1\n\
.space 1\n\
DAT_0802bdf4:\n\
     .word 0x02010320\n\
DAT_0802bdf8:\n\
     .word 0x02010280\n\
LAB_0802bdfc:\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     ldr        r1,DAT_0802be40\n\
     cmp        r3,#0x2\n\
     bhi        LAB_0802be22\n\
     lsl        r0,r3,#0x4\n\
     mov        r4,r8\n\
     add        r2,r0,r4\n\
     ldrb       r4,[r2,#0x7]\n\
     lsl        r0,r4,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802bdfc\n\
     ldrb       r2,[r2,#0x6]\n\
     lsr        r0,r2,#0x7\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bdfc\n\
LAB_0802be1e:\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802be22:\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802be48\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_0802be44\n\
     mov        r1,#0x10\n\
LAB_0802be2e:\n\
     lsl        r0,r2,#0x4\n\
     add        r0,r0,r3\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x2\n\
     bls        LAB_0802be2e\n\
     b          LAB_0802bea0\n\
DAT_0802be40:\n\
     .word 0x02010280\n\
DAT_0802be44:\n\
     .word 0x020102C0\n\
LAB_0802be48:\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_0802be68\n\
LAB_0802be50:\n\
     lsl        r0,r2,#0x4\n\
     add        r0,r0,r3\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x1e\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x2\n\
     bls        LAB_0802be50\n\
     b          LAB_0802bea0\n\
.space 1\n\
.space 1\n\
DAT_0802be68:\n\
     .word 0x020102C0\n\
LAB_0802be6c:\n\
     ldr        r1,DAT_0802bef0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r2,r6,#0x2\n\
     add        r2,r10\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r3,#0x7]\n\
     orr        r0,r1\n\
     strb       r0,[r3,#0x7]\n\
     mov        r0,#0x17\n\
     bl         fun_080016f0\n\
LAB_0802bea0:\n\
     ldr        r1,[sp,#0x8]\n\
     add        r1,r8\n\
     ldrb       r2,[r1,#0x7]\n\
     lsl        r0,r2,#0x1f\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802bec8\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,#0x10\n\
     bls        LAB_0802bec8\n\
     mov        r3,#0x0\n\
     ldr        r2,DAT_0802bef4\n\
     mov        r1,#0x10\n\
LAB_0802beb8:\n\
     lsl        r0,r3,#0x4\n\
     add        r0,r0,r2\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x2\n\
     bls        LAB_0802beb8\n\
LAB_0802bec8:\n\
     ldr        r4,[sp,#0x4]\n\
     lsl        r0,r4,#0x18\n\
     lsr        r6,r0,#0x18\n\
     cmp        r6,#0x2\n\
     bhi        LAB_0802bed4\n\
     b          LAB_0802bbaa\n\
LAB_0802bed4:\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bee0\n\
     mov        r0,#0x4\n\
     bl         fun_080016f0\n\
LAB_0802bee0:\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802bef0:\n\
     .word 0x02010300\n\
DAT_0802bef4:\n\
     .word 0x020102C0\n\
    ");
}
__attribute__((naked)) void fun_0802bef8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     ldr        r1,PTR_DAT_0802bf64\n\
     lsl        r0,r5,#0x4\n\
     add        r4,r0,r1\n\
     ldrb       r1,[r4,#0x6]\n\
     lsl        r0,r1,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802bfa0\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     strb       r0,[r4,#0x6]\n\
     ldr        r2,PTR_DAT_0802bf68\n\
     lsl        r3,r5,#0x2\n\
     add        r2,r3,r2\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r6,#0x0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x6]\n\
     sub        r0,#0x6\n\
     ldrb       r1,[r4,#0x6]\n\
     and        r0,r1\n\
     mov        r1,#0x8\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x6]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0xc\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802bf6c\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r1\n\
     mov        r1,#0xa\n\
     strh       r1,[r0,#0x0]\n\
     ldrb       r2,[r4,#0x6]\n\
     lsr        r0,r2,#0x7\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802bf74\n\
     ldr        r0,PTR_DAT_0802bf70\n\
     add        r0,r3,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r3,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x7f\n\
     ldrb       r3,[r4,#0x6]\n\
     and        r0,r3\n\
     strb       r0,[r4,#0x6]\n\
     b          LAB_0802c1c2\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802bf64:\n\
     .word       DAT_020102c0\n\
PTR_DAT_0802bf68:\n\
     .word       DAT_02010290\n\
PTR_DAT_0802bf6c:\n\
     .word       DAT_020102b8\n\
PTR_DAT_0802bf70:\n\
     .word       DAT_02010240\n\
LAB_0802bf74:\n\
     ldrb       r1,[r4,#0x7]\n\
     lsl        r0,r1,#0x1f\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802bf7e\n\
     b          LAB_0802c1c2\n\
LAB_0802bf7e:\n\
     ldr        r0,DAT_0802bf9c\n\
     add        r0,r3,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r4,#0x7]\n\
     and        r0,r1\n\
     strb       r0,[r4,#0x7]\n\
     b          LAB_0802c1c2\n\
DAT_0802bf9c:\n\
     .word 0x02010240\n\
LAB_0802bfa0:\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802bfe4\n\
     ldr        r1,DAT_0802bfdc\n\
     lsl        r0,r5,#0x1\n\
     add        r1,r0,r1\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802bfba\n\
     b          LAB_0802c1c2\n\
LAB_0802bfba:\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802bfe0\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0xd\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     ldrb       r2,[r4,#0x6]\n\
     orr        r0,r2\n\
     mov        r1,#0x9\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     strb       r0,[r4,#0x6]\n\
     b          LAB_0802c1c2\n\
.space 1\n\
.space 1\n\
DAT_0802bfdc:\n\
     .word 0x020102B8\n\
DAT_0802bfe0:\n\
     .word 0x02010290\n\
LAB_0802bfe4:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802c0cc\n\
     ldr        r1,DAT_0802c024\n\
     lsl        r0,r5,#0x1\n\
     add        r1,r0,r1\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802c000\n\
     b          LAB_0802c1c2\n\
LAB_0802c000:\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     asr        r3,r0,#0x10\n\
     cmp        r3,#0x4\n\
     bgt        LAB_0802c030\n\
     ldr        r1,DAT_0802c028\n\
     strh       r4,[r1,#0x0]\n\
     ldr        r0,DAT_0802c02c\n\
     strh       r2,[r0,#0x0]\n\
     add        r6,r1,#0x0\n\
     add        r4,r0,#0x0\n\
     b          LAB_0802c062\n\
.space 1\n\
.space 1\n\
DAT_0802c024:\n\
     .word 0x020102B8\n\
DAT_0802c028:\n\
     .word 0x020102F0\n\
DAT_0802c02c:\n\
     .word 0x0200EEF0\n\
LAB_0802c030:\n\
     cmp        r3,#0x9\n\
     bgt        LAB_0802c050\n\
     ldr        r2,DAT_0802c048\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802c04c\n\
     sub        r0,r3,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     add        r6,r2,#0x0\n\
     add        r4,r1,#0x0\n\
     b          LAB_0802c062\n\
.space 1\n\
.space 1\n\
DAT_0802c048:\n\
     .word 0x020102F0\n\
DAT_0802c04c:\n\
     .word 0x0200EEF0\n\
LAB_0802c050:\n\
     ldr        r6,DAT_0802c0ac\n\
     ldr        r4,DAT_0802c0b0\n\
     cmp        r3,#0xe\n\
     bgt        LAB_0802c062\n\
     mov        r0,#0x2\n\
     strh       r0,[r6,#0x0]\n\
     add        r0,r3,#0x0\n\
     sub        r0,#0xa\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802c062:\n\
     ldr        r2,DAT_0802c0b4\n\
     ldr        r1,DAT_0802c0b8\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r4,r3]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     strh       r4,[r2,#0x0]\n\
     ldr        r2,DAT_0802c0bc\n\
     ldr        r1,DAT_0802c0c0\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r6,r3]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r3,[r0,#0x0]\n\
     strh       r3,[r2,#0x0]\n\
     ldr        r0,DAT_0802c0c4\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0xd\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r0,DAT_0802c0c8\n\
     lsl        r2,r5,#0x4\n\
     add        r2,r2,r0\n\
     mov        r0,#0x11\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r2,#0x6]\n\
     and        r0,r1\n\
     mov        r1,#0x1\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x6]\n\
     b          LAB_0802c1c2\n\
DAT_0802c0ac:\n\
     .word 0x020102F0\n\
DAT_0802c0b0:\n\
     .word 0x0200EEF0\n\
DAT_0802c0b4:\n\
     .word 0x020102AC\n\
DAT_0802c0b8:\n\
     .word 0x087B745E\n\
DAT_0802c0bc:\n\
     .word 0x02010250\n\
DAT_0802c0c0:\n\
     .word 0x087B7468\n\
DAT_0802c0c4:\n\
     .word 0x02010290\n\
DAT_0802c0c8:\n\
     .word 0x020102C0\n\
LAB_0802c0cc:\n\
     lsl        r0,r1,#0x1f\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802c10c\n\
     ldr        r1,DAT_0802c104\n\
     lsl        r0,r5,#0x1\n\
     add        r1,r0,r1\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802c1c2\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     ldrb       r2,[r4,#0x6]\n\
     orr        r0,r2\n\
     mov        r1,#0x2\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     strb       r0,[r4,#0x6]\n\
     ldr        r1,DAT_0802c108\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0xc\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802c1c2\n\
DAT_0802c104:\n\
     .word 0x020102B8\n\
DAT_0802c108:\n\
     .word 0x02010290\n\
LAB_0802c10c:\n\
     lsl        r0,r1,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802c1c2\n\
     ldr        r0,DAT_0802c158\n\
     lsl        r1,r5,#0x1\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802c1c2\n\
     mov        r6,#0x3\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     add        r0,r6,#0x0\n\
     ldrb       r3,[r4,#0x6]\n\
     and        r0,r3\n\
     mov        r7,#0x4\n\
     orr        r0,r7\n\
     strb       r0,[r4,#0x6]\n\
     bl         fun_0802c1d4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     mov        r12,r1\n\
     asr        r1,r0,#0x10\n\
     ldr        r2,DAT_0802c15c\n\
     add        r0,r0,r2\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4\n\
     bhi        LAB_0802c160\n\
     mov        r0,#0x2\n\
     ldrb       r3,[r4,#0x7]\n\
     orr        r0,r3\n\
     mov        r1,#0x5\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     b          LAB_0802c174\n\
DAT_0802c158:\n\
     .word 0x020102B8\n\
DAT_0802c15c:\n\
     .word 0xFFFB0000\n\
LAB_0802c160:\n\
     cmp        r1,#0x4\n\
     bgt        LAB_0802c16a\n\
     ldrb       r0,[r4,#0x7]\n\
     orr        r0,r7\n\
     b          LAB_0802c172\n\
LAB_0802c16a:\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r1,[r4,#0x7]\n\
     and        r0,r1\n\
LAB_0802c172:\n\
     and        r0,r6\n\
LAB_0802c174:\n\
     strb       r0,[r4,#0x7]\n\
     ldr        r0,DAT_0802c1c8\n\
     lsl        r3,r5,#0x2\n\
     add        r3,r3,r0\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r2,r12\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x6]\n\
     mov        r1,#0x3c\n\
     ldr        r0,DAT_0802c1cc\n\
     lsl        r2,r5,#0x4\n\
     add        r2,r2,r0\n\
     strh       r1,[r2,#0x0]\n\
     mov        r0,r12\n\
     strh       r0,[r2,#0xc]\n\
     mov        r0,#0x20\n\
     ldrb       r1,[r2,#0x6]\n\
     orr        r0,r1\n\
     mov        r1,#0x41\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     strb       r0,[r2,#0x6]\n\
     ldr        r0,[r3,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r3,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r1,DAT_0802c1d0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0802c1c2\n\
     mov        r0,#0x38\n\
     bl         fun_080016f0\n\
LAB_0802c1c2:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802c1c8:\n\
     .word 0x02010290\n\
DAT_0802c1cc:\n\
     .word 0x020102C0\n\
DAT_0802c1d0:\n\
     .word 0x020102A8\n\
    ");
}
__attribute__((naked)) void fun_0802c1d4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r4,DAT_0802c20c\n\
     ldr        r1,DAT_0802c210\n\
     ldr        r6,DAT_0802c214\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r6,r2]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r1,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0802c21c\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     ldr        r1,DAT_0802c218\n\
     lsr        r0,r0,#0x17\n\
     add        r0,r0,r1\n\
     ldrh       r5,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     strh       r0,[r6,#0x0]\n\
     b          LAB_0802c26a\n\
.space 1\n\
.space 1\n\
DAT_0802c20c:\n\
     .word 0x020102A0\n\
DAT_0802c210:\n\
     .word 0x087B7454\n\
DAT_0802c214:\n\
     .word 0x02010234\n\
DAT_0802c218:\n\
     .word 0x087B7450\n\
LAB_0802c21c:\n\
     add        r0,r1,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     ldr        r4,DAT_0802c248\n\
     ldrh       r2,[r4,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0802c254\n\
     ldr        r1,DAT_0802c24c\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r5,[r0,#0x0]\n\
     ldr        r1,DAT_0802c250\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_0802c26a\n\
.space 1\n\
.space 1\n\
DAT_0802c248:\n\
     .word 0x0201020C\n\
DAT_0802c24c:\n\
     .word 0x087B7446\n\
DAT_0802c250:\n\
     .word 0x020102A4\n\
LAB_0802c254:\n\
     ldr        r6,DAT_0802c274\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802c26a\n\
     ldr        r0,DAT_0802c278\n\
     lsl        r1,r3,#0x1\n\
     add        r1,r1,r0\n\
     ldrh       r5,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     strh       r2,[r6,#0x0]\n\
LAB_0802c26a:\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802c274:\n\
     .word 0x020102A4\n\
DAT_0802c278:\n\
     .word 0x087B743C\n\
    ");
}
__attribute__((naked)) void fun_0802c27c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x10\n\
     ldr        r1,PTR_DAT_0802c300\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802c29a\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802c304\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_0802c29a:\n\
     ldr        r0,PTR_DAT_0802c304\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x5\n\
     bhi        LAB_0802c2be\n\
     ldr        r4,PTR_DAT_0802c308\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802c2be\n\
     mov        r0,#0x3d\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_0802c30c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802c2be:\n\
     ldr        r0,PTR_DAT_0802c304\n\
     ldr        r5,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x3c\n\
     bl         __udivsi3\n\
     add        r4,r0,#0x0\n\
     lsl        r4,r4,#0x18\n\
     lsr        r4,r4,#0x18\n\
     lsl        r0,r4,#0x4\n\
     sub        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     sub        r5,r5,r0\n\
     lsl        r5,r5,#0x18\n\
     lsr        r5,r5,#0x18\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_0802c310\n\
     mov        r0,sp\n\
     add        r2,r4,#0x0\n\
     add        r3,r5,#0x0\n\
     bl         sprintf\n\
     ldr        r2,DAT_0802c314\n\
     mov        r0,sp\n\
     mov        r1,#0x89\n\
     bl         fun_0803c010\n\
     add        sp,#0x10\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802c300:\n\
     .word       DAT_0200ed40\n\
PTR_DAT_0802c304:\n\
     .word       DAT_0200ee2c\n\
PTR_DAT_0802c308:\n\
     .word       DAT_0200ed50\n\
PTR_DAT_0802c30c:\n\
     .word       DAT_0200ee28\n\
DAT_0802c310:\n\
     .word 0x0858E820\n\
DAT_0802c314:\n\
     .word 0x0865FB7C\n\
    ");
}
__attribute__((naked)) void fun_0802c318()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802c324()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802c328()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802c32c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     sub        sp,#0xc\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0802c3d0\n\
     bl         fun_080045f0\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_0802c3d4\n\
     ldr        r0,DAT_0802c3d8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0802c3dc\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,DAT_0802c3e0\n\
     mov        r1,#0x10\n\
     bl         fun_0803c010\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_0802c3e4\n\
LAB_0802c360:\n\
     ldr        r0,DAT_0802c3e8\n\
     bl         fun_08003998\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r5\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x2\n\
     bls        LAB_0802c360\n\
     ldr        r2,DAT_0802c3ec\n\
     add        r0,r2,#0x0\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r0,DAT_0802c3f0\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802c400\n\
     ldr        r2,DAT_0802c3e4\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r3,#0x14\n\
     strh       r3,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x4]\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x4]\n\
     strh       r3,[r0,#0x2]\n\
     ldr        r1,[r2,#0x4]\n\
     mov        r0,#0x6e\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r6,DAT_0802c3f4\n\
     ldr        r0,DAT_0802c3f8\n\
     mov        r8,r0\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     add        r1,r6,#0x0\n\
     bl         sprintf\n\
     ldr        r5,DAT_0802c3e0\n\
     mov        r0,sp\n\
     mov        r1,#0x50\n\
     mov        r2,#0x34\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r4,DAT_0802c3fc\n\
     b          LAB_0802c444\n\
DAT_0802c3d0:\n\
     .word 0x085A821C\n\
DAT_0802c3d4:\n\
     .word 0x08669620\n\
DAT_0802c3d8:\n\
     .word 0x020025B4\n\
DAT_0802c3dc:\n\
     .word 0x0000BEE4\n\
DAT_0802c3e0:\n\
     .word 0x0865FD94\n\
DAT_0802c3e4:\n\
     .word 0x02010310\n\
DAT_0802c3e8:\n\
     .word 0x085A820C\n\
DAT_0802c3ec:\n\
     .word 0x0000037F\n\
DAT_0802c3f0:\n\
     .word 0x02010254\n\
DAT_0802c3f4:\n\
     .word 0x085A30D0\n\
DAT_0802c3f8:\n\
     .word 0x02010300\n\
DAT_0802c3fc:\n\
     .word 0x02010320\n\
LAB_0802c400:\n\
     ldr        r2,DAT_0802c4c8\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r3,#0x14\n\
     strh       r3,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x4]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x4]\n\
     strh       r3,[r0,#0x2]\n\
     ldr        r1,[r2,#0x4]\n\
     mov        r0,#0x6e\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r6,DAT_0802c4cc\n\
     ldr        r0,DAT_0802c4d0\n\
     mov        r8,r0\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     add        r1,r6,#0x0\n\
     bl         sprintf\n\
     ldr        r5,DAT_0802c4d4\n\
     mov        r0,sp\n\
     mov        r1,#0x50\n\
     mov        r2,#0x34\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r4,DAT_0802c4d8\n\
LAB_0802c444:\n\
     ldrh       r2,[r4,#0x0]\n\
     mov        r0,sp\n\
     add        r1,r6,#0x0\n\
     bl         sprintf\n\
     mov        r0,sp\n\
     mov        r1,#0x4f\n\
     mov        r2,#0x84\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r2,DAT_0802c4dc\n\
     mov        r3,r8\n\
     ldrh       r3,[r3,#0x0]\n\
     ldrh       r4,[r4,#0x0]\n\
     sub        r1,r3,r4\n\
     ldr        r0,DAT_0802c4e0\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     sub        r1,r1,r0\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802c4c8\n\
     ldr        r2,[r1,#0x8]\n\
     mov        r0,#0xa\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[r1,#0x8]\n\
     mov        r0,#0x14\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r1,[r1,#0x8]\n\
     mov        r0,#0x46\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0802c4cc\n\
     ldr        r0,DAT_0802c4e0\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r3,DAT_0802c4d4\n\
     mov        r0,sp\n\
     mov        r1,#0x4f\n\
     mov        r2,#0x5c\n\
     bl         fun_0803c138\n\
     ldr        r2,DAT_0802c4dc\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     ldr        r1,DAT_0802c4e4\n\
     cmp        r0,r1\n\
     ble        LAB_0802c4ae\n\
     strh       r1,[r2,#0x0]\n\
LAB_0802c4ae:\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0802c4ba\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
LAB_0802c4ba:\n\
     add        sp,#0xc\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802c4c8:\n\
     .word 0x02010310\n\
DAT_0802c4cc:\n\
     .word 0x085A30D0\n\
DAT_0802c4d0:\n\
     .word 0x02010320\n\
DAT_0802c4d4:\n\
     .word 0x0865FD94\n\
DAT_0802c4d8:\n\
     .word 0x02010300\n\
DAT_0802c4dc:\n\
     .word 0x0201031C\n\
DAT_0802c4e0:\n\
     .word 0x02010304\n\
DAT_0802c4e4:\n\
     .word 0x000003E7\n\
    ");
}
__attribute__((naked)) void fun_0802c4e8()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_0802c540\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0802c544\n\
     mov        r0,#0xf0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0802c548\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802c54c\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802c550\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_0802c554\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0803c24c\n\
     bl         fun_0802c32c\n\
     bl         fun_0802c5dc\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802c540:\n\
     .word 0x0201031C\n\
DAT_0802c544:\n\
     .word 0x02010308\n\
DAT_0802c548:\n\
     .word 0x040000D4\n\
DAT_0802c54c:\n\
     .word 0x8100C000\n\
DAT_0802c550:\n\
     .word 0x81000200\n\
DAT_0802c554:\n\
     .word 0x00001F44\n\
    ");
}
__attribute__((naked)) void fun_0802c558()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802c564()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,PTR_DAT_0802c5bc\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0802c5b2\n\
     ldr        r1,PTR_DAT_0802c5c0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802c5c4\n\
     ldr        r0,PTR_DAT_0802c5c8\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802c5cc\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0802c5d0\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x13\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802c5ac\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0802c5d0\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     orr        r1,r4\n\
     str        r1,[r0,#0x0]\n\
LAB_0802c5ac:\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_0802c5b2:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802c5bc:\n\
     .word       DAT_02010308\n\
PTR_DAT_0802c5c0:\n\
     .word       DAT_020025b8\n\
PTR_DAT_0802c5c4:\n\
     .word       DAT_020025fc\n\
PTR_DAT_0802c5c8:\n\
     .word       DAT_0201031c\n\
PTR_DAT_0802c5cc:\n\
     .word       DAT_02002558\n\
DAT_0802c5d0:\n\
     .word 0x00000E84\n\
    ");
}
__attribute__((naked)) void fun_0802c5d4()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802c5d8()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802c5dc()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0802c610\n\
     ldr        r1,DAT_0802c614\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_0802c618\n\
     ldr        r0,DAT_0802c61c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802c620\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_0802c624\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802c610:\n\
     .word 0x085A861C\n\
DAT_0802c614:\n\
     .word 0x0600A000\n\
DAT_0802c618:\n\
     .word 0x040000D4\n\
DAT_0802c61c:\n\
     .word 0x085A841C\n\
DAT_0802c620:\n\
     .word 0x80000100\n\
DAT_0802c624:\n\
     .word 0x00001F54\n\
    ");
}
__attribute__((naked)) void fun_0802c628()
{
    asm("\n\
     ldr        r2,DAT_0802c640\n\
     ldr        r0,DAT_0802c644\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802c648\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0802c64c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0802c640:\n\
     .word 0x02010330\n\
DAT_0802c644:\n\
     .word 0x085A493C\n\
DAT_0802c648:\n\
     .word 0x02010340\n\
DAT_0802c64c:\n\
     .word 0x085A48D8\n\
    ");
}
__attribute__((naked)) void fun_0802c650()
{
    asm("\n\
     ldr        r2,DAT_0802c668\n\
     ldr        r0,DAT_0802c66c\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802c670\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0802c674\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0802c668:\n\
     .word 0x02010350\n\
DAT_0802c66c:\n\
     .word 0x085AB044\n\
DAT_0802c670:\n\
     .word 0x02010360\n\
DAT_0802c674:\n\
     .word 0x085AAFE0\n\
    ");
}
__attribute__((naked)) void fun_0802c678()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_0802c6d8\n\
     mov        r5,#0x1\n\
     add        r4,r5,#0x0\n\
     ldrb       r0,[r0,#0x0]\n\
     and        r4,r0\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802c6f8\n\
     ldr        r0,DAT_0802c6dc\n\
     ldr        r1,DAT_0802c6e0\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_0802c6e4\n\
     ldr        r0,DAT_0802c6e8\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802c6ec\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_0802c6f0\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802c6f4\n\
     ldr        r2,[r1,#0x4]\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[r1,#0x4]\n\
     mov        r0,#0xb4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r1,#0x4]\n\
     mov        r3,#0x6e\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0x86\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     b          LAB_0802c744\n\
.space 1\n\
.space 1\n\
DAT_0802c6d8:\n\
     .word 0x02010370\n\
DAT_0802c6dc:\n\
     .word 0x085AC534\n\
DAT_0802c6e0:\n\
     .word 0x0600A000\n\
DAT_0802c6e4:\n\
     .word 0x040000D4\n\
DAT_0802c6e8:\n\
     .word 0x085ABD34\n\
DAT_0802c6ec:\n\
     .word 0x80000100\n\
DAT_0802c6f0:\n\
     .word 0x00001F54\n\
DAT_0802c6f4:\n\
     .word 0x02010378\n\
LAB_0802c6f8:\n\
     ldr        r0,DAT_0802c760\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_0802c764\n\
     ldr        r0,DAT_0802c768\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802c76c\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_0802c770\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802c774\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0xe\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,#0x6e\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r0,[r1,#0x4]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r2,[r1,#0x4]\n\
     mov        r0,#0x3c\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r1,#0x4]\n\
LAB_0802c744:\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r0,DAT_0802c778\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r1,#0x4]\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r1,#0x4]\n\
     ldrh       r0,[r0,#0x4]\n\
     add        r0,#0xa\n\
     strh       r0,[r2,#0x4]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802c760:\n\
     .word 0x085AC534\n\
DAT_0802c764:\n\
     .word 0x040000D4\n\
DAT_0802c768:\n\
     .word 0x085AC134\n\
DAT_0802c76c:\n\
     .word 0x80000100\n\
DAT_0802c770:\n\
     .word 0x00001F44\n\
DAT_0802c774:\n\
     .word 0x02010378\n\
DAT_0802c778:\n\
     .word 0x02010374\n\
    ");
}
__attribute__((naked)) void fun_0802c77c()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_0802c7cc\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802c7d0\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r4,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802c7d4\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_0802c7d8\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0803c24c\n\
     bl         fun_0802c878\n\
     ldr        r0,DAT_0802c7dc\n\
     strb       r4,[r0,#0x0]\n\
     bl         fun_0802c678\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0802c7cc:\n\
     .word 0x040000D4\n\
DAT_0802c7d0:\n\
     .word 0x8100C000\n\
DAT_0802c7d4:\n\
     .word 0x81000200\n\
DAT_0802c7d8:\n\
     .word 0x00001F44\n\
DAT_0802c7dc:\n\
     .word 0x02010370\n\
    ");
}
__attribute__((naked)) void fun_0802c7e0()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802c7ec()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0802c800\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802c7f8()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802c7fc()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802c800()
{
    asm("\n\
     push       {lr}\n\
     ldr        r3,DAT_0802c820\n\
     ldrh       r0,[r3,#0x0]\n\
     mov        r2,#0x1\n\
     and        r2,r0\n\
     cmp        r2,#0x0\n\
     beq        LAB_0802c82c\n\
     ldr        r1,DAT_0802c824\n\
     ldr        r0,DAT_0802c828\n\
     ldrb       r0,[r0,#0x0]\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0xfb\n\
     lsl        r0,r0,#0x3\n\
     bl         fun_08001070\n\
     b          LAB_0802c870\n\
DAT_0802c820:\n\
     .word 0x02005CE0\n\
DAT_0802c824:\n\
     .word 0x02010254\n\
DAT_0802c828:\n\
     .word 0x02010370\n\
LAB_0802c82c:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802c850\n\
     ldr        r1,DAT_0802c84c\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802c870\n\
     strb       r2,[r1,#0x0]\n\
     bl         fun_0802c678\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
     b          LAB_0802c870\n\
DAT_0802c84c:\n\
     .word 0x02010370\n\
LAB_0802c850:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802c870\n\
     ldr        r1,DAT_0802c874\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802c870\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     bl         fun_0802c678\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
LAB_0802c870:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802c874:\n\
     .word 0x02010370\n\
    ");
}
__attribute__((naked)) void fun_0802c878()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0802c8b8\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_0802c8bc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802c8c0\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     mov        r4,#0x0\n\
     ldr        r6,DAT_0802c8c4\n\
     mov        r5,#0x1\n\
LAB_0802c89a:\n\
     ldr        r0,DAT_0802c8c8\n\
     bl         fun_08003998\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r6\n\
     str        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x1\n\
     bls        LAB_0802c89a\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802c8b8:\n\
     .word 0x085ABF34\n\
DAT_0802c8bc:\n\
     .word 0x085ABD14\n\
DAT_0802c8c0:\n\
     .word 0x02010374\n\
DAT_0802c8c4:\n\
     .word 0x02010378\n\
DAT_0802c8c8:\n\
     .word 0x085ABD24\n\
    ");
}
__attribute__((naked)) void fun_0802c8cc()
{
    asm("\n\
     ldr        r2,DAT_0802c8e4\n\
     ldr        r0,DAT_0802c8e8\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802c8ec\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0802c8f0\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0802c8e4:\n\
     .word 0x02010390\n\
DAT_0802c8e8:\n\
     .word 0x085B6BEC\n\
DAT_0802c8ec:\n\
     .word 0x02010380\n\
DAT_0802c8f0:\n\
     .word 0x085B6B88\n\
    ");
}
__attribute__((naked)) void fun_0802c8f4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0xc\n\
     add        r0,sp,#0x8\n\
     mov        r2,#0xff\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0802ca7c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802ca80\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r0,sp,#0x8\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802ca84\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0xba\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802ca88\n\
     bl         fun_08039e64\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     bl         fun_08005468\n\
     ldr        r1,DAT_0802ca8c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0802ca90\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x4]\n\
     mov        r4,#0x0\n\
     ldr        r6,DAT_0802ca94\n\
     mov        r5,#0x0\n\
LAB_0802c95a:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r6\n\
     ldrh       r2,[r0,#0x0]\n\
     str        r5,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     bl         fun_080059c8\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x2\n\
     bls        LAB_0802c95a\n\
     bl         fun_0802cb58\n\
     ldr        r0,PTR_DAT_0802ca98\n\
     mov        r1,#0x6\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ca9c\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802caa0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802caa4\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802caa8\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802caac\n\
     ldr        r0,PTR_DAT_0802cab0\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802cab4\n\
     mov        r4,#0x1\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cab8\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cabc\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x1\n\
     add        r3,r1,#0x0\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cac0\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802cac4\n\
     mov        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802cac8\n\
     mov        r5,#0x14\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cacc\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cad0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cad4\n\
     strb       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cad8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802cadc\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802cae0\n\
     mov        r3,#0xff\n\
     lsl        r3,r3,#0x8\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802cae4\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r3,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cae8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802caec\n\
     ldr        r0,PTR_DAT_0802caf0\n\
     strh       r2,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802caf4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802caf8\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802cafc\n\
     ldr        r0,PTR_DAT_0802cb00\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb04\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb08\n\
     strb       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802cb0c\n\
     mov        r0,#0xdc\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb10\n\
     strb       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb14\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802cb18\n\
     mov        r0,#0x24\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb1c\n\
     strb       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb20\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb24\n\
     strb       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb28\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb2c\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb30\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802cb34\n\
     ldr        r0,PTR_DAT_0802cb38\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r3,PTR_DAT_0802cb3c\n\
     ldr        r1,PTR_DAT_0802cb40\n\
     ldr        r0,PTR_DAT_0802cb44\n\
     strh       r2,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     strh       r2,[r3,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb48\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802cb4c\n\
     strh       r1,[r0,#0x0]\n\
     bl         fun_0800117c\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     ldr        r1,DAT_0802cb50\n\
     ldr        r2,DAT_0802cb54\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     add        sp,#0xc\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0802ca7c:\n\
     .word 0x040000D4\n\
DAT_0802ca80:\n\
     .word 0x8100C000\n\
DAT_0802ca84:\n\
     .word 0x81000200\n\
DAT_0802ca88:\n\
     .word 0x02010380\n\
DAT_0802ca8c:\n\
     .word 0x02010468\n\
DAT_0802ca90:\n\
     .word 0x02010480\n\
DAT_0802ca94:\n\
     .word 0x087B747C\n\
PTR_DAT_0802ca98:\n\
     .word       DAT_0201043c\n\
PTR_DAT_0802ca9c:\n\
     .word       DAT_020103d8\n\
PTR_DAT_0802caa0:\n\
     .word       DAT_02010498\n\
PTR_DAT_0802caa4:\n\
     .word       DAT_020104a4\n\
PTR_DAT_0802caa8:\n\
     .word       DAT_0201041c\n\
PTR_DAT_0802caac:\n\
     .word       DAT_02010430\n\
PTR_DAT_0802cab0:\n\
     .word       DAT_020104e0\n\
PTR_DAT_0802cab4:\n\
     .word       DAT_020103e0\n\
PTR_DAT_0802cab8:\n\
     .word       DAT_020103c4\n\
PTR_DAT_0802cabc:\n\
     .word       DAT_02010418\n\
PTR_DAT_0802cac0:\n\
     .word       DAT_0201042c\n\
PTR_DAT_0802cac4:\n\
     .word       DAT_020104a0\n\
PTR_DAT_0802cac8:\n\
     .word       DAT_020103b8\n\
PTR_DAT_0802cacc:\n\
     .word       DAT_02010444\n\
PTR_DAT_0802cad0:\n\
     .word       DAT_020104f0\n\
PTR_DAT_0802cad4:\n\
     .word       DAT_020104a8\n\
PTR_DAT_0802cad8:\n\
     .word       DAT_020103e8\n\
PTR_DAT_0802cadc:\n\
     .word       DAT_020103a0\n\
PTR_DAT_0802cae0:\n\
     .word       DAT_020103bc\n\
PTR_DAT_0802cae4:\n\
     .word       DAT_02010478\n\
PTR_DAT_0802cae8:\n\
     .word       DAT_02010414\n\
PTR_DAT_0802caec:\n\
     .word       DAT_02010428\n\
PTR_DAT_0802caf0:\n\
     .word       DAT_02010470\n\
PTR_DAT_0802caf4:\n\
     .word       DAT_0200ecc0\n\
PTR_DAT_0802caf8:\n\
     .word       DAT_02010440\n\
PTR_DAT_0802cafc:\n\
     .word       DAT_0200ece0\n\
PTR_DAT_0802cb00:\n\
     .word       DAT_02005830\n\
PTR_DAT_0802cb04:\n\
     .word       DAT_02010404\n\
PTR_DAT_0802cb08:\n\
     .word       DAT_02010424\n\
PTR_DAT_0802cb0c:\n\
     .word       DAT_02010474\n\
PTR_DAT_0802cb10:\n\
     .word       DAT_0201040c\n\
PTR_DAT_0802cb14:\n\
     .word       DAT_020103b4\n\
PTR_DAT_0802cb18:\n\
     .word       DAT_02010408\n\
PTR_DAT_0802cb1c:\n\
     .word       DAT_020103d4\n\
PTR_DAT_0802cb20:\n\
     .word       DAT_020104ec\n\
PTR_DAT_0802cb24:\n\
     .word       DAT_02010438\n\
PTR_DAT_0802cb28:\n\
     .word       DAT_020103c8\n\
PTR_DAT_0802cb2c:\n\
     .word       DAT_020104e4\n\
PTR_DAT_0802cb30:\n\
     .word       DAT_0201049c\n\
PTR_DAT_0802cb34:\n\
     .word       DAT_02010448\n\
PTR_DAT_0802cb38:\n\
     .word       DAT_020103dc\n\
PTR_DAT_0802cb3c:\n\
     .word       DAT_02010494\n\
PTR_DAT_0802cb40:\n\
     .word       DAT_020103b0\n\
PTR_DAT_0802cb44:\n\
     .word       DAT_02010490\n\
PTR_DAT_0802cb48:\n\
     .word       DAT_0200ed50\n\
PTR_DAT_0802cb4c:\n\
     .word       DAT_0200dcd4\n\
DAT_0802cb50:\n\
     .word 0x00006739\n\
DAT_0802cb54:\n\
     .word 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_0802cb58()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x4\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     ldr        r0,DAT_0802ccac\n\
     bl         fun_080045f0\n\
     ldr        r7,DAT_0802ccb0\n\
     add        r0,r7,#0x0\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802ccb4\n\
     str        r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x6]\n\
     mov        r1,#0x1\n\
     mov        r8,r1\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x10]\n\
     mov        r1,#0x32\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x7d\n\
     strh       r1,[r0,#0x4]\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x10\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802ccb8\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     strh       r4,[r0,#0x10]\n\
     mov        r6,#0x46\n\
     strh       r6,[r0,#0x2]\n\
     mov        r1,#0x98\n\
     strh       r1,[r0,#0x4]\n\
     add        r0,r7,#0x0\n\
     sub        r0,#0x10\n\
     bl         fun_08003998\n\
     ldr        r5,PTR_DAT_0802ccbc\n\
     str        r0,[r5,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     mov        r3,#0x2\n\
     mov        r9,r3\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x10]\n\
     mov        r1,#0x14\n\
     strh       r1,[r0,#0x2]\n\
     strh       r6,[r0,#0x4]\n\
     add        r0,r7,#0x0\n\
     sub        r0,#0x30\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802ccc0\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x10]\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r1,[r2,#0x2]\n\
     add        r1,#0xd\n\
     strh       r1,[r0,#0x2]\n\
     ldrh       r1,[r2,#0x4]\n\
     add        r1,#0x4\n\
     strh       r1,[r0,#0x4]\n\
     strh       r4,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     sub        r0,#0x20\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802ccc4\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     mov        r3,r8\n\
     strh       r3,[r0,#0x10]\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r1,[r2,#0x2]\n\
     sub        r1,#0x25\n\
     strh       r1,[r0,#0x2]\n\
     ldrh       r1,[r2,#0x4]\n\
     sub        r1,#0x10\n\
     strh       r1,[r0,#0x4]\n\
     strh       r4,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r5,r1,#0x0\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r5\n\
     strh       r1,[r0,#0x12]\n\
     add        r0,r7,#0x0\n\
     sub        r0,#0x60\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802ccc8\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x6]\n\
     mov        r3,r9\n\
     strh       r3,[r0,#0x10]\n\
     mov        r1,#0xb4\n\
     lsl        r1,r1,#0x1\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x48\n\
     strh       r1,[r0,#0x4]\n\
     strh       r4,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r5\n\
     strh       r1,[r0,#0x12]\n\
     add        r0,r7,#0x0\n\
     sub        r0,#0x80\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0802cccc\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x6]\n\
     strh       r1,[r0,#0x10]\n\
     mov        r1,#0xbe\n\
     lsl        r1,r1,#0x1\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x44\n\
     strh       r1,[r0,#0x4]\n\
     strh       r4,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r5\n\
     strh       r1,[r0,#0x12]\n\
     mov        r5,#0x0\n\
     ldr        r4,PTR_DAT_0802ccd0\n\
     mov        r7,#0x0\n\
     mov        r6,#0x0\n\
LAB_0802cc6a:\n\
     ldr        r0,DAT_0802ccd4\n\
     bl         fun_08003998\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r1,r4\n\
     str        r0,[r1,#0x0]\n\
     strh       r6,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0802ccd8\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802ccc0\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0xf\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0xfa\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     bl         fun_080040d4\n\
     b          LAB_0802cd0c\n\
DAT_0802ccac:\n\
     .word 0x085C3DBC\n\
DAT_0802ccb0:\n\
     .word 0x085C3D9C\n\
PTR_DAT_0802ccb4:\n\
     .word       DAT_020103cc\n\
PTR_DAT_0802ccb8:\n\
     .word       DAT_020103ac\n\
PTR_DAT_0802ccbc:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802ccc0:\n\
     .word       DAT_02010400\n\
PTR_DAT_0802ccc4:\n\
     .word       DAT_020103a4\n\
PTR_DAT_0802ccc8:\n\
     .word       DAT_020103a8\n\
PTR_DAT_0802cccc:\n\
     .word       DAT_0201047c\n\
PTR_DAT_0802ccd0:\n\
     .word       DAT_020103f8\n\
DAT_0802ccd4:\n\
     .word 0x085C3D4C\n\
LAB_0802ccd8:\n\
     cmp        r5,#0x1\n\
     bne        LAB_0802cd0c\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r1,[r4,#0x4]\n\
     ldr        r0,DAT_0802cd5c\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x3a\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r3,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
LAB_0802cd0c:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x1\n\
     bls        LAB_0802cc6a\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_0802cd60\n\
     mov        r7,#0x0\n\
     mov        r6,#0x0\n\
LAB_0802cd1e:\n\
     ldr        r0,DAT_0802cd64\n\
     bl         fun_08003998\n\
     lsl        r2,r5,#0x2\n\
     add        r2,r2,r4\n\
     str        r0,[r2,#0x0]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r3,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x45\n\
     strh       r0,[r1,#0x4]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0802cd6c\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0802cd68\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x3\n\
     b          LAB_0802cdfe\n\
DAT_0802cd5c:\n\
     .word 0x00000125\n\
DAT_0802cd60:\n\
     .word 0x02010450\n\
DAT_0802cd64:\n\
     .word 0x085C3D5C\n\
DAT_0802cd68:\n\
     .word 0x00000145\n\
LAB_0802cd6c:\n\
     cmp        r5,#0x1\n\
     bne        LAB_0802cd88\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0xa5\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x4]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x8\n\
     b          LAB_0802cdfe\n\
LAB_0802cd88:\n\
     cmp        r5,#0x2\n\
     bne        LAB_0802cda0\n\
     ldr        r0,[r4,#0x8]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x8]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x8]\n\
     mov        r0,#0xb9\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0802ce00\n\
LAB_0802cda0:\n\
     cmp        r5,#0x3\n\
     bne        LAB_0802cdc0\n\
     ldr        r1,[r4,#0xc]\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_0802cdbc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0xc]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x8\n\
     b          LAB_0802cdfe\n\
DAT_0802cdbc:\n\
     .word 0x00000159\n\
LAB_0802cdc0:\n\
     cmp        r5,#0x4\n\
     bne        LAB_0802cde0\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x6\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0802cddc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0xc\n\
     b          LAB_0802cdfe\n\
DAT_0802cddc:\n\
     .word 0x00000195\n\
LAB_0802cde0:\n\
     cmp        r5,#0x5\n\
     bne        LAB_0802ce00\n\
     ldr        r1,[r4,#0x14]\n\
     mov        r0,#0x7\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r4,#0x14]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x14]\n\
     mov        r0,#0xbe\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x14]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x9\n\
LAB_0802cdfe:\n\
     strh       r0,[r1,#0x4]\n\
LAB_0802ce00:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x5\n\
     bls        LAB_0802cd1e\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_0802ce50\n\
     mov        r6,#0x0\n\
     mov        r3,#0x2\n\
     mov        r7,#0x1\n\
LAB_0802ce14:\n\
     ldr        r0,DAT_0802ce54\n\
     str        r3,[sp,#0x0]\n\
     bl         fun_08003998\n\
     lsl        r2,r5,#0x2\n\
     add        r2,r2,r4\n\
     str        r0,[r2,#0x0]\n\
     mov        r1,#0x45\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r3,[sp,#0x0]\n\
     strh       r3,[r0,#0x6]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0802ce5c\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,DAT_0802ce58\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x10]\n\
     b          LAB_0802cf8a\n\
.space 1\n\
.space 1\n\
DAT_0802ce50:\n\
     .word 0x020104B0\n\
DAT_0802ce54:\n\
     .word 0x085C3D0C\n\
DAT_0802ce58:\n\
     .word 0x0000016D\n\
LAB_0802ce5c:\n\
     cmp        r5,#0x1\n\
     bne        LAB_0802ce78\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r0,#0xa1\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0802cf8a\n\
LAB_0802ce78:\n\
     cmp        r5,#0x2\n\
     bne        LAB_0802ce8e\n\
     ldr        r0,[r4,#0x8]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,[r4,#0x8]\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r1,[r4,#0x8]\n\
     mov        r0,#0xc3\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0802cf8a\n\
LAB_0802ce8e:\n\
     cmp        r5,#0x3\n\
     bne        LAB_0802ceac\n\
     ldr        r1,[r4,#0xc]\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r1,[r4,#0xc]\n\
     mov        r0,#0xd1\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0xc]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x10\n\
     b          LAB_0802cf88\n\
LAB_0802ceac:\n\
     cmp        r5,#0x4\n\
     bne        LAB_0802cecc\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,DAT_0802cec8\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x7\n\
     b          LAB_0802cf88\n\
DAT_0802cec8:\n\
     .word 0x0000018B\n\
LAB_0802cecc:\n\
     cmp        r5,#0x5\n\
     bne        LAB_0802cee8\n\
     ldr        r0,[r4,#0x14]\n\
     strh       r7,[r0,#0x10]\n\
     ldr        r0,[r4,#0x14]\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r1,[r4,#0x14]\n\
     ldr        r0,DAT_0802cee4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x14]\n\
     b          LAB_0802cf84\n\
.space 1\n\
.space 1\n\
DAT_0802cee4:\n\
     .word 0x00000145\n\
LAB_0802cee8:\n\
     cmp        r5,#0x6\n\
     bne        LAB_0802cf00\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0xc2\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x10]\n\
     b          LAB_0802cf8a\n\
LAB_0802cf00:\n\
     cmp        r5,#0x7\n\
     bne        LAB_0802cf20\n\
     ldr        r0,[r4,#0x1c]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,[r4,#0x1c]\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,[r4,#0x1c]\n\
     ldr        r0,DAT_0802cf1c\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x1c]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2\n\
     b          LAB_0802cf88\n\
.space 1\n\
.space 1\n\
DAT_0802cf1c:\n\
     .word 0x00000221\n\
LAB_0802cf20:\n\
     cmp        r5,#0x8\n\
     bne        LAB_0802cf38\n\
     ldr        r0,[r4,#0x20]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,[r4,#0x20]\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,[r4,#0x20]\n\
     ldr        r0,DAT_0802cf34\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0802cf8a\n\
DAT_0802cf34:\n\
     .word 0x00000157\n\
LAB_0802cf38:\n\
     cmp        r5,#0x9\n\
     bne        LAB_0802cf58\n\
     ldr        r0,[r4,#0x24]\n\
     strh       r3,[r0,#0x10]\n\
     ldr        r1,[r4,#0x24]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x24]\n\
     ldr        r0,DAT_0802cf54\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x24]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x8\n\
     b          LAB_0802cf88\n\
DAT_0802cf54:\n\
     .word 0x0000013B\n\
LAB_0802cf58:\n\
     cmp        r5,#0xa\n\
     bne        LAB_0802cf6e\n\
     ldr        r0,[r4,#0x28]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,[r4,#0x28]\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,[r4,#0x28]\n\
     mov        r0,#0xf6\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     b          LAB_0802cf8a\n\
LAB_0802cf6e:\n\
     cmp        r5,#0xb\n\
     bne        LAB_0802cf8a\n\
     ldr        r0,[r4,#0x2c]\n\
     strh       r3,[r0,#0x10]\n\
     ldr        r0,[r4,#0x2c]\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r1,[r4,#0x2c]\n\
     mov        r0,#0xa5\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x2c]\n\
LAB_0802cf84:\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x3\n\
LAB_0802cf88:\n\
     strh       r0,[r1,#0x4]\n\
LAB_0802cf8a:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0xb\n\
     bhi        LAB_0802cf96\n\
     b          LAB_0802ce14\n\
LAB_0802cf96:\n\
     add        sp,#0x4\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802cfa4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     ldr        r4,PTR_DAT_0802d02c\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802cfce\n\
     ldr        r0,PTR_DAT_0802d030\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802cfce\n\
     mov        r0,#0x32\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
LAB_0802cfce:\n\
     ldr        r3,PTR_DAT_0802d034\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802cff2\n\
     ldr        r0,PTR_DAT_0802d038\n\
     ldr        r1,PTR_DAT_0802d03c\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     beq        LAB_0802cfe6\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
LAB_0802cfe6:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802cff2\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
LAB_0802cff2:\n\
     bl         fun_0802e3c0\n\
     ldr        r2,PTR_DAT_0802d040\n\
     ldrb       r0,[r2,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802d050\n\
     ldr        r3,PTR_DAT_0802d044\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     ldr        r1,PTR_DAT_0802d048\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d018\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3c\n\
     strh       r0,[r3,#0x0]\n\
LAB_0802d018:\n\
     ldr        r2,PTR_DAT_0802d04c\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r1,r0]\n\
     mov        r0,#0x64\n\
     mul        r0,r1\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r0,r3,r0\n\
     strh       r0,[r2,#0x0]\n\
     b          LAB_0802d334\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802d02c:\n\
     .word       DAT_0200ed50\n\
PTR_DAT_0802d030:\n\
     .word       DAT_020103b0\n\
PTR_DAT_0802d034:\n\
     .word       DAT_0200ecc0\n\
PTR_DAT_0802d038:\n\
     .word       DAT_02005830\n\
PTR_DAT_0802d03c:\n\
     .word       DAT_0200ece0\n\
PTR_DAT_0802d040:\n\
     .word       DAT_0201041c\n\
PTR_DAT_0802d044:\n\
     .word       DAT_020104a0\n\
PTR_DAT_0802d048:\n\
     .word       DAT_0201042c\n\
PTR_DAT_0802d04c:\n\
     .word       DAT_02010420\n\
LAB_0802d050:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802d070\n\
     ldr        r1,DAT_0802d06c\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d0ca\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3\n\
     strb       r0,[r2,#0x0]\n\
     b          LAB_0802d0ca\n\
DAT_0802d06c:\n\
     .word 0x020103F0\n\
LAB_0802d070:\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802d0e0\n\
     ldr        r1,DAT_0802d0d0\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d0ca\n\
     mov        r0,#0x4\n\
     strb       r0,[r2,#0x0]\n\
     mov        r3,#0x0\n\
     ldr        r2,DAT_0802d0d4\n\
     ldr        r4,DAT_0802d0d8\n\
LAB_0802d08c:\n\
     cmp        r3,#0x7\n\
     beq        LAB_0802d0a2\n\
     cmp        r3,#0xa\n\
     beq        LAB_0802d0a2\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     and        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
LAB_0802d0a2:\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0xb\n\
     bls        LAB_0802d08c\n\
     mov        r3,#0x0\n\
     ldr        r2,DAT_0802d0dc\n\
     ldr        r4,DAT_0802d0d8\n\
LAB_0802d0b2:\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     ldrh       r7,[r1,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x5\n\
     bls        LAB_0802d0b2\n\
LAB_0802d0ca:\n\
     bl         fun_0802dce0\n\
     b          LAB_0802d334\n\
DAT_0802d0d0:\n\
     .word 0x020103F0\n\
DAT_0802d0d4:\n\
     .word 0x020104B0\n\
DAT_0802d0d8:\n\
     .word 0x0000FDFF\n\
DAT_0802d0dc:\n\
     .word 0x02010450\n\
LAB_0802d0e0:\n\
     cmp        r0,#0x4\n\
     bne        LAB_0802d140\n\
     ldr        r0,DAT_0802d128\n\
     ldrb       r0,[r0,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d0ee\n\
     b          LAB_0802d334\n\
LAB_0802d0ee:\n\
     mov        r0,#0x5\n\
     strb       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802d12c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802d130\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_0802d134\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,DAT_0802d138\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r1,#0x0\n\
     ldrh       r4,[r2,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,DAT_0802d13c\n\
     ldr        r0,[r0,#0x4]\n\
     ldrh       r5,[r0,#0x12]\n\
     and        r1,r5\n\
     strh       r1,[r0,#0x12]\n\
     b          LAB_0802d2e8\n\
.space 1\n\
.space 1\n\
DAT_0802d128:\n\
     .word 0x02010468\n\
DAT_0802d12c:\n\
     .word 0x02010480\n\
DAT_0802d130:\n\
     .word 0x020103A8\n\
DAT_0802d134:\n\
     .word 0x0000FDFF\n\
DAT_0802d138:\n\
     .word 0x0201047C\n\
DAT_0802d13c:\n\
     .word 0x020103F8\n\
LAB_0802d140:\n\
     cmp        r0,#0x5\n\
     bne        LAB_0802d190\n\
     ldr        r4,DAT_0802d180\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d154\n\
     b          LAB_0802d2ee\n\
LAB_0802d154:\n\
     mov        r0,#0x6\n\
     strb       r0,[r2,#0x0]\n\
     ldr        r3,DAT_0802d184\n\
     ldr        r2,[r3,#0xc]\n\
     ldr        r1,DAT_0802d188\n\
     add        r0,r1,#0x0\n\
     ldrh       r7,[r2,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r2,[r3,#0x1c]\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,DAT_0802d18c\n\
     ldr        r0,[r0,#0x8]\n\
     ldrh       r5,[r0,#0x12]\n\
     and        r1,r5\n\
     strh       r1,[r0,#0x12]\n\
     mov        r0,#0x78\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_0802d2ee\n\
DAT_0802d180:\n\
     .word 0x020103F0\n\
DAT_0802d184:\n\
     .word 0x020104B0\n\
DAT_0802d188:\n\
     .word 0x0000FDFF\n\
DAT_0802d18c:\n\
     .word 0x02010450\n\
LAB_0802d190:\n\
     cmp        r0,#0x6\n\
     bne        LAB_0802d210\n\
     ldr        r1,DAT_0802d1f8\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d1a6\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802d1a6:\n\
     ldr        r0,DAT_0802d1fc\n\
     ldrb       r0,[r0,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d1b0\n\
     b          LAB_0802d2ee\n\
LAB_0802d1b0:\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_0802d200\n\
LAB_0802d1b4:\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r5\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r0,#0x20\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x4]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     bl         fun_080059c8\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x2\n\
     bls        LAB_0802d1b4\n\
     ldr        r1,DAT_0802d204\n\
     mov        r0,#0x7\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r3,DAT_0802d208\n\
     ldr        r2,[r3,#0x1c]\n\
     ldr        r1,DAT_0802d20c\n\
     add        r0,r1,#0x0\n\
     ldrh       r7,[r2,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,[r3,#0x28]\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     b          LAB_0802d2e8\n\
.space 1\n\
.space 1\n\
DAT_0802d1f8:\n\
     .word 0x020103F0\n\
DAT_0802d1fc:\n\
     .word 0x02010468\n\
DAT_0802d200:\n\
     .word 0x087B747C\n\
DAT_0802d204:\n\
     .word 0x0201041C\n\
DAT_0802d208:\n\
     .word 0x020104B0\n\
DAT_0802d20c:\n\
     .word 0x0000FDFF\n\
LAB_0802d210:\n\
     cmp        r0,#0x7\n\
     beq        LAB_0802d216\n\
     b          LAB_0802d32c\n\
LAB_0802d216:\n\
     ldr        r1,PTR_DAT_0802d2f4\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d228\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802d228:\n\
     ldr        r0,PTR_DAT_0802d2f8\n\
     mov        r7,#0x3f\n\
     ldrh       r0,[r0,#0x2]\n\
     and        r7,r0\n\
     cmp        r7,#0x0\n\
     bne        LAB_0802d2d2\n\
     ldr        r0,PTR_DAT_0802d2fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d2d2\n\
     ldr        r3,PTR_DAT_0802d300\n\
     mov        r10,r3\n\
     mov        r5,#0x0\n\
     ldrsh      r4,[r3,r5]\n\
     add        r4,#0x40\n\
     ldr        r6,PTR_DAT_0802d304\n\
     ldr        r0,DAT_0802d308\n\
     mov        r9,r0\n\
     mov        r5,#0xff\n\
     add        r0,r4,#0x0\n\
     and        r0,r5\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r9\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r6,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r2,PTR_DAT_0802d30c\n\
     mov        r8,r2\n\
     add        r4,#0x40\n\
     and        r4,r5\n\
     lsl        r4,r4,#0x1\n\
     add        r4,r9\n\
     ldrh       r4,[r4,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r4,#0\n\
.syntax divided\n\
     strh       r0,[r2,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     mov        r4,r8\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r4,PTR_DAT_0802d310\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,r10\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r5,r1\n\
     ldr        r1,PTR_DAT_0802d314\n\
     ldrh       r2,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802d318\n\
     ldrh       r3,[r1,#0x0]\n\
     add        r1,r5,#0x0\n\
     bl         fun_080040d4\n\
     ldrh       r1,[r6,#0x0]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x20\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r3,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802d31c\n\
     ldr        r2,[r0,#0x0]\n\
     sub        r1,#0x2a\n\
     ldrh       r5,[r2,#0x2]\n\
     add        r1,r5,r1\n\
     strh       r1,[r3,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r3,r8\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0xe\n\
     ldrh       r2,[r2,#0x4]\n\
     add        r0,r2,r0\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r4,PTR_DAT_0802d320\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d2d2\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
     strh       r7,[r4,#0x0]\n\
LAB_0802d2d2:\n\
     ldr        r0,PTR_DAT_0802d2f8\n\
     ldrb       r1,[r0,#0x2]\n\
     cmp        r1,#0x0\n\
     bne        LAB_0802d2ee\n\
     ldr        r0,PTR_DAT_0802d324\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r1,PTR_DAT_0802d328\n\
     mov        r0,#0x8\n\
     strb       r0,[r1,#0x0]\n\
LAB_0802d2e8:\n\
     ldr        r1,PTR_DAT_0802d2f4\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802d2ee:\n\
     bl         fun_0802df70\n\
     b          LAB_0802d334\n\
PTR_DAT_0802d2f4:\n\
     .word       DAT_020103f0\n\
PTR_DAT_0802d2f8:\n\
     .word       DAT_02010468\n\
PTR_DAT_0802d2fc:\n\
     .word       DAT_020103c8\n\
PTR_DAT_0802d300:\n\
     .word       DAT_02010414\n\
PTR_DAT_0802d304:\n\
     .word       DAT_02010428\n\
DAT_0802d308:\n\
     .word 0x08049824\n\
PTR_DAT_0802d30c:\n\
     .word       DAT_02010470\n\
PTR_DAT_0802d310:\n\
     .word       DAT_020103f8\n\
PTR_DAT_0802d314:\n\
     .word       DAT_020103bc\n\
PTR_DAT_0802d318:\n\
     .word       DAT_02010478\n\
PTR_DAT_0802d31c:\n\
     .word       DAT_02010400\n\
PTR_DAT_0802d320:\n\
     .word       DAT_0201049c\n\
PTR_DAT_0802d324:\n\
     .word       DAT_02010480\n\
PTR_DAT_0802d328:\n\
     .word       DAT_0201041c\n\
LAB_0802d32c:\n\
     cmp        r0,#0x8\n\
     bne        LAB_0802d334\n\
     bl         fun_0802df70\n\
LAB_0802d334:\n\
     ldr        r4,PTR_DAT_0802d394\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d3a4\n\
     sub        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d404\n\
     ldr        r6,PTR_DAT_0802d398\n\
     ldrh       r5,[r6,#0x0]\n\
     cmp        r5,#0x24\n\
     bne        LAB_0802d354\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
LAB_0802d354:\n\
     mov        r0,#0xd\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r5,PTR_DAT_0802d39c\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r4,PTR_DAT_0802d3a0\n\
     ldrb       r1,[r4,#0x0]\n\
     bl         fun_0800476c\n\
     ldr        r5,[r5,#0x0]\n\
     ldrh       r0,[r5,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r5,#0x2]\n\
     ldrh       r0,[r5,#0x4]\n\
     sub        r0,#0x7\n\
     strh       r0,[r5,#0x4]\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x24\n\
     strh       r0,[r4,#0x0]\n\
     ldrh       r0,[r6,#0x0]\n\
     add        r0,#0x24\n\
     strh       r0,[r6,#0x0]\n\
     mov        r7,#0x2\n\
     ldrsh      r0,[r5,r7]\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802d404\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     ldrh       r2,[r5,#0x12]\n\
     orr        r0,r2\n\
     b          LAB_0802d402\n\
PTR_DAT_0802d394:\n\
     .word       DAT_0201040c\n\
PTR_DAT_0802d398:\n\
     .word       DAT_020103b4\n\
PTR_DAT_0802d39c:\n\
     .word       DAT_020103a4\n\
PTR_DAT_0802d3a0:\n\
     .word       DAT_02010474\n\
LAB_0802d3a4:\n\
     ldr        r4,PTR_DAT_0802d53c\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d404\n\
     sub        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d404\n\
     ldr        r6,PTR_DAT_0802d540\n\
     ldrh       r3,[r6,#0x0]\n\
     cmp        r3,#0x2a\n\
     bne        LAB_0802d3c4\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
LAB_0802d3c4:\n\
     mov        r0,#0xd\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r5,PTR_DAT_0802d544\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r4,PTR_DAT_0802d548\n\
     ldrb       r1,[r4,#0x0]\n\
     bl         fun_0800476c\n\
     ldr        r5,[r5,#0x0]\n\
     ldrh       r0,[r5,#0x2]\n\
     add        r0,#0x5\n\
     strh       r0,[r5,#0x2]\n\
     ldrh       r0,[r5,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r5,#0x4]\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x2a\n\
     strh       r0,[r4,#0x0]\n\
     ldrh       r0,[r6,#0x0]\n\
     add        r0,#0x2a\n\
     strh       r0,[r6,#0x0]\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r5,r4]\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802d404\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x2\n\
     add        r0,r7,#0x0\n\
     ldrh       r1,[r5,#0x12]\n\
     orr        r0,r1\n\
LAB_0802d402:\n\
     strh       r0,[r5,#0x12]\n\
LAB_0802d404:\n\
     mov        r4,#0x0\n\
LAB_0802d406:\n\
     ldr        r1,PTR_DAT_0802d54c\n\
     lsl        r0,r4,#0x1\n\
     add        r1,r0,r1\n\
     ldr        r5,PTR_DAT_0802d550\n\
     add        r0,r0,r5\n\
     ldrh       r2,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,r2,r0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r1,r3]\n\
     add        r0,r4,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_08005aa4\n\
     add        r0,r4,#0x0\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x1\n\
     lsl        r0,r4\n\
     mov        r1,#0x20\n\
     lsl        r1,r4\n\
     orr        r0,r1\n\
     bl         fun_08004c04\n\
     bl         fun_08005060\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x2\n\
     bls        LAB_0802d406\n\
     ldr        r0,PTR_DAT_0802d554\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x5\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x2\n\
     bls        LAB_0802d456\n\
     b          LAB_0802d658\n\
LAB_0802d456:\n\
     mov        r3,#0x0\n\
     add        r6,r5,#0x0\n\
     ldr        r4,PTR_DAT_0802d558\n\
     mov        r12,r4\n\
     ldr        r5,PTR_DAT_0802d55c\n\
     mov        r9,r5\n\
     ldr        r7,DAT_0802d560\n\
     mov        r10,r7\n\
     ldr        r0,PTR_DAT_0802d564\n\
     mov        r8,r0\n\
     ldr        r5,PTR_DAT_0802d568\n\
     add        r4,r6,#0x0\n\
LAB_0802d46e:\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r2,[r1,#0x2]\n\
     ldrh       r7,[r4,#0x2]\n\
     sub        r0,r2,r7\n\
     strh       r0,[r1,#0x2]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0xb\n\
     bls        LAB_0802d46e\n\
     mov        r3,#0x0\n\
     ldr        r5,PTR_DAT_0802d56c\n\
     ldr        r4,PTR_DAT_0802d550\n\
LAB_0802d48c:\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r2,[r1,#0x2]\n\
     ldrh       r7,[r4,#0x2]\n\
     sub        r0,r2,r7\n\
     strh       r0,[r1,#0x2]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x5\n\
     bls        LAB_0802d48c\n\
     ldr        r0,PTR_DAT_0802d570\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r2,[r1,#0x2]\n\
     ldrh       r3,[r6,#0x4]\n\
     sub        r0,r2,r3\n\
     strh       r0,[r1,#0x2]\n\
     mov        r4,r12\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r5,[r1,#0x2]\n\
     ldrh       r7,[r6,#0x4]\n\
     sub        r0,r5,r7\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,r9\n\
     ldr        r1,[r0,#0x4]\n\
     ldrh       r2,[r1,#0x2]\n\
     ldrh       r6,[r6,#0x4]\n\
     sub        r0,r2,r6\n\
     strh       r0,[r1,#0x2]\n\
     mov        r3,r8\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r4,#0x2\n\
     ldrsh      r3,[r0,r4]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x2\n\
     mov        r2,r10\n\
     bl         fun_080032a0\n\
     ldr        r0,PTR_DAT_0802d574\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xc8\n\
     bne        LAB_0802d578\n\
     mov        r5,r8\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r7,#0x2\n\
     ldrsh      r0,[r0,r7]\n\
     cmp        r0,#0x64\n\
     ble        LAB_0802d578\n\
     mov        r3,#0x0\n\
     ldr        r4,PTR_DAT_0802d568\n\
     ldr        r2,PTR_DAT_0802d56c\n\
     mov        r1,#0x0\n\
LAB_0802d4f6:\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x5\n\
     bls        LAB_0802d4f6\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r2,#0x3\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,[r4,#0x8]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,[r4,#0x14]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x1c]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x20]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x24]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,[r4,#0x28]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0x2c]\n\
     b          LAB_0802d656\n\
PTR_DAT_0802d53c:\n\
     .word       DAT_020103d4\n\
PTR_DAT_0802d540:\n\
     .word       DAT_020104ec\n\
PTR_DAT_0802d544:\n\
     .word       DAT_020103ec\n\
PTR_DAT_0802d548:\n\
     .word       DAT_02010408\n\
PTR_DAT_0802d54c:\n\
     .word       DAT_02010468\n\
PTR_DAT_0802d550:\n\
     .word       DAT_02010480\n\
PTR_DAT_0802d554:\n\
     .word       DAT_0201041c\n\
PTR_DAT_0802d558:\n\
     .word       DAT_0201047c\n\
PTR_DAT_0802d55c:\n\
     .word       DAT_020103f8\n\
DAT_0802d560:\n\
     .word 0x085B6CBC\n\
PTR_DAT_0802d564:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d568:\n\
     .word       DAT_020104b0\n\
PTR_DAT_0802d56c:\n\
     .word       DAT_02010450\n\
PTR_DAT_0802d570:\n\
     .word       DAT_020103a8\n\
PTR_DAT_0802d574:\n\
     .word       DAT_020103dc\n\
LAB_0802d578:\n\
     ldr        r0,PTR_DAT_0802d67c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x2\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x50\n\
     ble        LAB_0802d658\n\
     ldr        r5,PTR_DAT_0802d680\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r5,r2]\n\
     mov        r1,#0x14\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d5dc\n\
     ldr        r4,PTR_DAT_0802d684\n\
     ldr        r1,[r4,#0x4]\n\
     mov        r2,#0x1\n\
     ldrh       r0,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x14]\n\
     ldrh       r0,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x1c]\n\
     ldrh       r0,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r3,PTR_DAT_0802d688\n\
     ldr        r1,[r3,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r3,#0x14]\n\
     ldrh       r0,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x28]\n\
     ldrh       r0,[r1,#0x0]\n\
     eor        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0xc]\n\
     ldrh       r3,[r0,#0x0]\n\
     eor        r2,r3\n\
     strh       r2,[r0,#0x0]\n\
LAB_0802d5dc:\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r5,r4]\n\
     mov        r1,#0x1e\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d61a\n\
     ldr        r4,PTR_DAT_0802d684\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0x1\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[r4,#0x8]\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_0802d688\n\
     ldr        r2,[r3,#0x4]\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[r3,#0xc]\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[r4,#0x2c]\n\
     ldrh       r7,[r0,#0x0]\n\
     eor        r1,r7\n\
     strh       r1,[r0,#0x0]\n\
LAB_0802d61a:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     mov        r1,#0xa\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d658\n\
     ldr        r3,PTR_DAT_0802d688\n\
     ldr        r2,[r3,#0x8]\n\
     mov        r1,#0x1\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_0802d684\n\
     ldr        r2,[r3,#0x20]\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[r3,#0x24]\n\
     ldrh       r0,[r2,#0x0]\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[r3,#0x18]\n\
     ldrh       r2,[r0,#0x0]\n\
     eor        r1,r2\n\
LAB_0802d656:\n\
     strh       r1,[r0,#0x0]\n\
LAB_0802d658:\n\
     ldr        r1,PTR_DAT_0802d68c\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0802d6be\n\
     mov        r0,#0x6\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802d67c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d690\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d6be\n\
PTR_DAT_0802d67c:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d680:\n\
     .word       DAT_020103f0\n\
PTR_DAT_0802d684:\n\
     .word       DAT_020104b0\n\
PTR_DAT_0802d688:\n\
     .word       DAT_02010450\n\
PTR_DAT_0802d68c:\n\
     .word       DAT_0201043c\n\
LAB_0802d690:\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802d69a\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d6be\n\
LAB_0802d69a:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802d6a4\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d6be\n\
LAB_0802d6a4:\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802d6ae\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d6be\n\
LAB_0802d6ae:\n\
     cmp        r0,#0x4\n\
     bne        LAB_0802d6b8\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d6be\n\
LAB_0802d6b8:\n\
     cmp        r0,#0x5\n\
     bne        LAB_0802d6be\n\
     strh       r2,[r1,#0x0]\n\
LAB_0802d6be:\n\
     ldr        r1,DAT_0802d6e4\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0802d706\n\
     mov        r0,#0x6\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802d6e8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d6ec\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d706\n\
.space 1\n\
.space 1\n\
DAT_0802d6e4:\n\
     .word 0x02010498\n\
DAT_0802d6e8:\n\
     .word 0x020103A8\n\
LAB_0802d6ec:\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802d6f6\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d706\n\
LAB_0802d6f6:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802d700\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d706\n\
LAB_0802d700:\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802d706\n\
     strh       r2,[r1,#0x0]\n\
LAB_0802d706:\n\
     ldr        r1,PTR_DAT_0802d740\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0802d7f8\n\
     mov        r0,#0x6\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802d744\n\
     ldr        r4,[r0,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d754\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802d748\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     add        r1,#0xd\n\
     strh       r1,[r4,#0x2]\n\
     ldr        r2,PTR_DAT_0802d74c\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802d750\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xa\n\
     b          LAB_0802d7e6\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802d740:\n\
     .word       DAT_020103d8\n\
PTR_DAT_0802d744:\n\
     .word       DAT_02010400\n\
PTR_DAT_0802d748:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d74c:\n\
     .word       DAT_020103f8\n\
PTR_DAT_0802d750:\n\
     .word       DAT_02010428\n\
LAB_0802d754:\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802d790\n\
     mov        r0,#0x2\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802d780\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     add        r1,#0xd\n\
     strh       r1,[r4,#0x2]\n\
     ldr        r2,PTR_DAT_0802d784\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802d788\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x9\n\
     add        r1,r1,r0\n\
     strh       r1,[r3,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802d78c\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x10\n\
     b          LAB_0802d7f2\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802d780:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d784:\n\
     .word       DAT_020103f8\n\
PTR_DAT_0802d788:\n\
     .word       DAT_02010428\n\
PTR_DAT_0802d78c:\n\
     .word       DAT_02010470\n\
LAB_0802d790:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802d7cc\n\
     mov        r0,#0x3\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802d7bc\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     add        r1,#0xd\n\
     strh       r1,[r4,#0x2]\n\
     ldr        r2,PTR_DAT_0802d7c0\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802d7c4\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x8\n\
     add        r1,r1,r0\n\
     strh       r1,[r3,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802d7c8\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x10\n\
     b          LAB_0802d7f2\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802d7bc:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d7c0:\n\
     .word       DAT_020103f8\n\
PTR_DAT_0802d7c4:\n\
     .word       DAT_02010428\n\
PTR_DAT_0802d7c8:\n\
     .word       DAT_02010470\n\
LAB_0802d7cc:\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802d7f8\n\
     strh       r2,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802d81c\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     add        r1,#0xd\n\
     strh       r1,[r4,#0x2]\n\
     ldr        r2,PTR_DAT_0802d820\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802d824\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xc\n\
LAB_0802d7e6:\n\
     add        r1,r1,r0\n\
     strh       r1,[r3,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802d828\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xe\n\
LAB_0802d7f2:\n\
     ldrh       r4,[r4,#0x4]\n\
     add        r0,r4,r0\n\
     strh       r0,[r1,#0x4]\n\
LAB_0802d7f8:\n\
     ldr        r1,PTR_DAT_0802d82c\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0802d84e\n\
     mov        r0,#0x6\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802d830\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d834\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d84e\n\
PTR_DAT_0802d81c:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d820:\n\
     .word       DAT_020103f8\n\
PTR_DAT_0802d824:\n\
     .word       DAT_02010428\n\
PTR_DAT_0802d828:\n\
     .word       DAT_02010470\n\
PTR_DAT_0802d82c:\n\
     .word       DAT_020104a4\n\
PTR_DAT_0802d830:\n\
     .word       DAT_0201047c\n\
LAB_0802d834:\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802d83e\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d84e\n\
LAB_0802d83e:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802d848\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802d84e\n\
LAB_0802d848:\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802d84e\n\
     strh       r2,[r1,#0x0]\n\
LAB_0802d84e:\n\
     bl         fun_0802de80\n\
     mov        r0,#0x0\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802d864()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     ldr        r6,PTR_DAT_0802d8fc\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r6,r1]\n\
     mov        r1,#0x32\n\
     bl         fun_08002c9c\n\
     add        r4,r0,#0x0\n\
     ldr        r5,PTR_DAT_0802d900\n\
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
     ldr        r1,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x11\n\
     sub        r0,#0x3b\n\
     mov        r4,#0x0\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r2,PTR_DAT_0802d904\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     cmp        r3,#0x0\n\
     beq        LAB_0802d950\n\
     ldr        r0,PTR_DAT_0802d908\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802d90c\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802d8c0\n\
     b          LAB_0802d9e4\n\
LAB_0802d8c0:\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802d910\n\
     ldr        r3,PTR_DAT_0802d914\n\
     ldrh       r0,[r3,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802d918\n\
     ldr        r2,PTR_DAT_0802d91c\n\
     ldrh       r5,[r2,#0x0]\n\
     sub        r0,r5,r0\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     bgt        LAB_0802d92c\n\
     ldr        r0,PTR_DAT_0802d920\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r7,#0x2\n\
     ldrsh      r0,[r2,r7]\n\
     ldr        r3,PTR_DAT_0802d924\n\
     mov        r5,#0x0\n\
     ldrsh      r1,[r3,r5]\n\
     add        r0,r0,r1\n\
     cmp        r0,#0x5a\n\
     bgt        LAB_0802d9da\n\
     ldr        r1,PTR_DAT_0802d928\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0802d9a0\n\
     b          LAB_0802d9d4\n\
PTR_DAT_0802d8fc:\n\
     .word       DAT_020103b8\n\
PTR_DAT_0802d900:\n\
     .word       DAT_020103cc\n\
PTR_DAT_0802d904:\n\
     .word       DAT_02005ce0\n\
PTR_DAT_0802d908:\n\
     .word       DAT_020104e0\n\
PTR_DAT_0802d90c:\n\
     .word       DAT_02010430\n\
PTR_DAT_0802d910:\n\
     .word       DAT_020104f0\n\
PTR_DAT_0802d914:\n\
     .word       DAT_02010420\n\
PTR_DAT_0802d918:\n\
     .word       DAT_02010434\n\
PTR_DAT_0802d91c:\n\
     .word       DAT_02010444\n\
PTR_DAT_0802d920:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d924:\n\
     .word       DAT_020103e8\n\
PTR_DAT_0802d928:\n\
     .word       DAT_020104a8\n\
LAB_0802d92c:\n\
     cmp        r0,#0x7\n\
     bgt        LAB_0802d932\n\
     b          LAB_0802da54\n\
LAB_0802d932:\n\
     ldr        r0,DAT_0802d948\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x2\n\
     ldrsh      r0,[r4,r1]\n\
     ldr        r5,DAT_0802d94c\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r5,r7]\n\
     sub        r0,r0,r1\n\
     cmp        r0,#0x13\n\
     bgt        LAB_0802da26\n\
     b          LAB_0802da4c\n\
DAT_0802d948:\n\
     .word 0x0201044C\n\
DAT_0802d94c:\n\
     .word 0x020103A0\n\
LAB_0802d950:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r2,#0x1\n\
     add        r0,r2,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d9f8\n\
     ldr        r0,PTR_DAT_0802d9b0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802d9b4\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802d9e4\n\
     strh       r3,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802d9b8\n\
     ldr        r3,PTR_DAT_0802d9bc\n\
     ldrh       r0,[r3,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802d9c0\n\
     ldr        r2,PTR_DAT_0802d9c4\n\
     ldrh       r5,[r2,#0x0]\n\
     sub        r0,r5,r0\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     bgt        LAB_0802d92c\n\
     ldr        r0,PTR_DAT_0802d9c8\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r7,#0x2\n\
     ldrsh      r0,[r2,r7]\n\
     ldr        r3,PTR_DAT_0802d9cc\n\
     mov        r5,#0x0\n\
     ldrsh      r1,[r3,r5]\n\
     add        r0,r0,r1\n\
     cmp        r0,#0x5a\n\
     bgt        LAB_0802d9da\n\
     ldr        r1,PTR_DAT_0802d9d0\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802d9d4\n\
LAB_0802d9a0:\n\
     ldrh       r7,[r2,#0x2]\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r0,r7,r3\n\
     strh       r0,[r6,#0x0]\n\
     strh       r0,[r2,#0x2]\n\
     strb       r4,[r1,#0x0]\n\
     b          LAB_0802da58\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802d9b0:\n\
     .word       DAT_02010430\n\
PTR_DAT_0802d9b4:\n\
     .word       DAT_020104e0\n\
PTR_DAT_0802d9b8:\n\
     .word       DAT_020104f0\n\
PTR_DAT_0802d9bc:\n\
     .word       DAT_02010420\n\
PTR_DAT_0802d9c0:\n\
     .word       DAT_02010434\n\
PTR_DAT_0802d9c4:\n\
     .word       DAT_02010444\n\
PTR_DAT_0802d9c8:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802d9cc:\n\
     .word       DAT_020103e8\n\
PTR_DAT_0802d9d0:\n\
     .word       DAT_020104a8\n\
LAB_0802d9d4:\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     b          LAB_0802da58\n\
LAB_0802d9da:\n\
     ldrh       r2,[r2,#0x2]\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r0,r2,r3\n\
     strh       r0,[r6,#0x0]\n\
     b          LAB_0802da58\n\
LAB_0802d9e4:\n\
     ldr        r0,DAT_0802d9f0\n\
     ldr        r1,DAT_0802d9f4\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_0802da58\n\
.space 1\n\
.space 1\n\
DAT_0802d9f0:\n\
     .word 0x02010444\n\
DAT_0802d9f4:\n\
     .word 0x02010420\n\
LAB_0802d9f8:\n\
     ldr        r1,PTR_DAT_0802da34\n\
     ldr        r3,PTR_DAT_0802da38\n\
     ldrh       r0,[r3,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802da3c\n\
     ldr        r2,PTR_DAT_0802da40\n\
     ldrh       r4,[r2,#0x0]\n\
     sub        r0,r4,r0\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x7\n\
     ble        LAB_0802da54\n\
     ldr        r0,PTR_DAT_0802da44\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r5,#0x2\n\
     ldrsh      r0,[r4,r5]\n\
     ldr        r5,PTR_DAT_0802da48\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r5,r7]\n\
     sub        r0,r0,r1\n\
     cmp        r0,#0x13\n\
     ble        LAB_0802da4c\n\
LAB_0802da26:\n\
     ldrh       r1,[r4,#0x2]\n\
     ldrh       r5,[r5,#0x0]\n\
     sub        r0,r1,r5\n\
     strh       r0,[r6,#0x0]\n\
     strh       r0,[r4,#0x2]\n\
     b          LAB_0802da54\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802da34:\n\
     .word       DAT_020104f0\n\
PTR_DAT_0802da38:\n\
     .word       DAT_02010420\n\
PTR_DAT_0802da3c:\n\
     .word       DAT_02010434\n\
PTR_DAT_0802da40:\n\
     .word       DAT_02010444\n\
PTR_DAT_0802da44:\n\
     .word       DAT_0201044c\n\
PTR_DAT_0802da48:\n\
     .word       DAT_020103a0\n\
LAB_0802da4c:\n\
     ldrh       r4,[r4,#0x2]\n\
     ldrh       r5,[r5,#0x0]\n\
     sub        r0,r4,r5\n\
     strh       r0,[r6,#0x0]\n\
LAB_0802da54:\n\
     ldrh       r0,[r3,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
LAB_0802da58:\n\
     ldr        r0,PTR_DAT_0802db2c\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     ble        LAB_0802da80\n\
     ldr        r1,PTR_DAT_0802db30\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802da80\n\
     mov        r4,#0x96\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r4,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     sub        r0,r2,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_0802da80:\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r3,r5]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802db1e\n\
     ldr        r1,PTR_DAT_0802db34\n\
     mov        r7,#0xff\n\
     add        r0,r7,#0x0\n\
     ldrh       r1,[r1,#0x2]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802db1e\n\
     ldr        r1,PTR_DAT_0802db38\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802db3c\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802db40\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,PTR_DAT_0802db44\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802db48\n\
     mov        r9,r1\n\
     mov        r2,#0x0\n\
     ldrsh      r4,[r1,r2]\n\
     add        r4,#0x40\n\
     ldr        r6,PTR_DAT_0802db4c\n\
     ldr        r3,DAT_0802db50\n\
     mov        r8,r3\n\
     add        r0,r4,#0x0\n\
     and        r0,r7\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r6,r5]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r5,PTR_DAT_0802db54\n\
     add        r4,#0x40\n\
     and        r4,r7\n\
     lsl        r4,r4,#0x1\n\
     add        r4,r8\n\
     ldrh       r4,[r4,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r4,#0\n\
.syntax divided\n\
     strh       r0,[r5,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,PTR_DAT_0802db58\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r7,#0x0\n\
     mov        r2,r9\n\
     ldrh       r2,[r2,#0x0]\n\
     and        r1,r2\n\
     ldr        r2,PTR_DAT_0802db5c\n\
     ldrh       r2,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_0802db60\n\
     ldrh       r3,[r3,#0x0]\n\
     bl         fun_080040d4\n\
     ldrh       r0,[r6,#0x0]\n\
     sub        r0,#0x20\n\
     strh       r0,[r6,#0x0]\n\
LAB_0802db1e:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802db2c:\n\
     .word       DAT_020103e0\n\
PTR_DAT_0802db30:\n\
     .word       DAT_02010418\n\
PTR_DAT_0802db34:\n\
     .word       DAT_02010468\n\
PTR_DAT_0802db38:\n\
     .word       DAT_0201041c\n\
PTR_DAT_0802db3c:\n\
     .word       DAT_020103cc\n\
PTR_DAT_0802db40:\n\
     .word       DAT_020103ac\n\
PTR_DAT_0802db44:\n\
     .word       DAT_020103f0\n\
PTR_DAT_0802db48:\n\
     .word       DAT_02010414\n\
PTR_DAT_0802db4c:\n\
     .word       DAT_02010428\n\
DAT_0802db50:\n\
     .word 0x08049824\n\
PTR_DAT_0802db54:\n\
     .word       DAT_02010470\n\
PTR_DAT_0802db58:\n\
     .word       DAT_020103f8\n\
PTR_DAT_0802db5c:\n\
     .word       DAT_020103bc\n\
PTR_DAT_0802db60:\n\
     .word       DAT_02010478\n\
    ");
}
__attribute__((naked)) void fun_0802db64()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r2,DAT_0802dc00\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802dc20\n\
     ldr        r6,DAT_0802dc04\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r6,r1]\n\
     sub        r0,#0x3\n\
     cmp        r0,#0xf0\n\
     bgt        LAB_0802db88\n\
     b          LAB_0802dcb2\n\
LAB_0802db88:\n\
     ldrh       r0,[r6,#0x0]\n\
     sub        r0,#0x3\n\
     strh       r0,[r6,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r6,r2]\n\
     add        r7,r0,#0x0\n\
     add        r7,#0x40\n\
     ldr        r0,DAT_0802dc08\n\
     mov        r9,r0\n\
     ldr        r1,DAT_0802dc0c\n\
     mov        r8,r1\n\
     mov        r4,#0xff\n\
     add        r0,r7,#0x0\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r2,r9\n\
     strh       r0,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     mov        r2,r9\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r5,DAT_0802dc10\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x40\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r5,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_0802dc14\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r6,[r6,#0x0]\n\
     and        r4,r6\n\
     ldr        r1,DAT_0802dc18\n\
     ldrh       r2,[r1,#0x0]\n\
     ldr        r1,DAT_0802dc1c\n\
     ldrh       r3,[r1,#0x0]\n\
     add        r1,r4,#0x0\n\
     bl         fun_080040d4\n\
     mov        r2,r9\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x20\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
     b          LAB_0802dcb2\n\
DAT_0802dc00:\n\
     .word 0x02005CE0\n\
DAT_0802dc04:\n\
     .word 0x02010414\n\
DAT_0802dc08:\n\
     .word 0x02010428\n\
DAT_0802dc0c:\n\
     .word 0x08049824\n\
DAT_0802dc10:\n\
     .word 0x02010470\n\
DAT_0802dc14:\n\
     .word 0x020103F8\n\
DAT_0802dc18:\n\
     .word 0x020103BC\n\
DAT_0802dc1c:\n\
     .word 0x02010478\n\
LAB_0802dc20:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802dcb2\n\
     ldr        r0,DAT_0802dcc0\n\
     mov        r9,r0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     add        r0,#0x3\n\
     ldr        r1,DAT_0802dcc4\n\
     cmp        r0,r1\n\
     bgt        LAB_0802dcb2\n\
     mov        r2,r9\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x3\n\
     strh       r0,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     add        r7,r0,#0x0\n\
     add        r7,#0x40\n\
     ldr        r2,DAT_0802dcc8\n\
     mov        r10,r2\n\
     ldr        r0,DAT_0802dccc\n\
     mov        r8,r0\n\
     mov        r4,#0xff\n\
     add        r0,r7,#0x0\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     mov        r2,r10\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r5,DAT_0802dcd0\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x40\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r5,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_0802dcd4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,r9\n\
     ldrh       r2,[r2,#0x0]\n\
     and        r4,r2\n\
     ldr        r1,DAT_0802dcd8\n\
     ldrh       r2,[r1,#0x0]\n\
     ldr        r1,DAT_0802dcdc\n\
     ldrh       r3,[r1,#0x0]\n\
     add        r1,r4,#0x0\n\
     bl         fun_080040d4\n\
     mov        r1,r10\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x20\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
LAB_0802dcb2:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802dcc0:\n\
     .word 0x02010414\n\
DAT_0802dcc4:\n\
     .word 0x0000010F\n\
DAT_0802dcc8:\n\
     .word 0x02010428\n\
DAT_0802dccc:\n\
     .word 0x08049824\n\
DAT_0802dcd0:\n\
     .word 0x02010470\n\
DAT_0802dcd4:\n\
     .word 0x020103F8\n\
DAT_0802dcd8:\n\
     .word 0x020103BC\n\
DAT_0802dcdc:\n\
     .word 0x02010478\n\
    ");
}
__attribute__((naked)) void fun_0802dce0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r1,DAT_0802dda0\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802dcfa\n\
     b          LAB_0802de72\n\
LAB_0802dcfa:\n\
     mov        r0,#0x14\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802dda4\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x2\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x2\n\
     bls        LAB_0802dd0e\n\
     b          LAB_0802de72\n\
LAB_0802dd0e:\n\
     ldr        r4,DAT_0802dda8\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     add        r2,r0,#0x0\n\
     strb       r2,[r4,#0x0]\n\
     lsl        r0,r2,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802ddc8\n\
     ldr        r6,DAT_0802ddac\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r6,r1]\n\
     sub        r0,#0x3\n\
     cmp        r0,#0xf0\n\
     bgt        LAB_0802dd30\n\
     b          LAB_0802de6c\n\
LAB_0802dd30:\n\
     ldrh       r0,[r6,#0x0]\n\
     sub        r0,#0x3\n\
     strh       r0,[r6,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r6,r2]\n\
     add        r7,r0,#0x0\n\
     add        r7,#0x40\n\
     ldr        r3,DAT_0802ddb0\n\
     mov        r9,r3\n\
     ldr        r0,DAT_0802ddb4\n\
     mov        r8,r0\n\
     mov        r4,#0xff\n\
     add        r0,r7,#0x0\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     mov        r2,r9\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r5,DAT_0802ddb8\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x40\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r5,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_0802ddbc\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r6,[r6,#0x0]\n\
     and        r4,r6\n\
     ldr        r1,DAT_0802ddc0\n\
     ldrh       r2,[r1,#0x0]\n\
     ldr        r1,DAT_0802ddc4\n\
     ldrh       r3,[r1,#0x0]\n\
     add        r1,r4,#0x0\n\
     bl         fun_080040d4\n\
     mov        r1,r9\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x20\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802de72\n\
DAT_0802dda0:\n\
     .word 0x02010404\n\
DAT_0802dda4:\n\
     .word 0x0201041C\n\
DAT_0802dda8:\n\
     .word 0x02010410\n\
DAT_0802ddac:\n\
     .word 0x02010414\n\
DAT_0802ddb0:\n\
     .word 0x02010428\n\
DAT_0802ddb4:\n\
     .word 0x08049824\n\
DAT_0802ddb8:\n\
     .word 0x02010470\n\
DAT_0802ddbc:\n\
     .word 0x020103F8\n\
DAT_0802ddc0:\n\
     .word 0x020103BC\n\
DAT_0802ddc4:\n\
     .word 0x02010478\n\
LAB_0802ddc8:\n\
     ldr        r3,DAT_0802de4c\n\
     mov        r9,r3\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     add        r0,#0x3\n\
     ldr        r1,DAT_0802de50\n\
     cmp        r0,r1\n\
     bgt        LAB_0802de6c\n\
     ldrh       r0,[r3,#0x0]\n\
     add        r0,#0x3\n\
     strh       r0,[r3,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r3,r2]\n\
     add        r7,r0,#0x0\n\
     add        r7,#0x40\n\
     ldr        r3,DAT_0802de54\n\
     mov        r10,r3\n\
     ldr        r0,DAT_0802de58\n\
     mov        r8,r0\n\
     mov        r4,#0xff\n\
     add        r0,r7,#0x0\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     mov        r2,r10\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r5,DAT_0802de5c\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x40\n\
     and        r0,r4\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r5,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     mov        r1,#0x20\n\
     bl         fun_08002c84\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_0802de60\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,r9\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r4,r1\n\
     ldr        r1,DAT_0802de64\n\
     ldrh       r2,[r1,#0x0]\n\
     ldr        r1,DAT_0802de68\n\
     ldrh       r3,[r1,#0x0]\n\
     add        r1,r4,#0x0\n\
     bl         fun_080040d4\n\
     mov        r2,r10\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x20\n\
     strh       r0,[r2,#0x0]\n\
     b          LAB_0802de72\n\
.space 1\n\
.space 1\n\
DAT_0802de4c:\n\
     .word 0x02010414\n\
DAT_0802de50:\n\
     .word 0x0000010F\n\
DAT_0802de54:\n\
     .word 0x02010428\n\
DAT_0802de58:\n\
     .word 0x08049824\n\
DAT_0802de5c:\n\
     .word 0x02010470\n\
DAT_0802de60:\n\
     .word 0x020103F8\n\
DAT_0802de64:\n\
     .word 0x020103BC\n\
DAT_0802de68:\n\
     .word 0x02010478\n\
LAB_0802de6c:\n\
     mov        r0,#0x1\n\
     eor        r2,r0\n\
     strb       r2,[r4,#0x0]\n\
LAB_0802de72:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802de80()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0xc\n\
     bl         fun_0803c1a4\n\
     ldr        r0,DAT_0802deac\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802debc\n\
     ldr        r1,DAT_0802deb0\n\
     ldr        r0,DAT_0802deb4\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r0,r3]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r3,DAT_0802deb8\n\
     mov        r0,sp\n\
     mov        r1,#0x4b\n\
     mov        r2,#0x97\n\
     bl         fun_0803c138\n\
     b          LAB_0802dee0\n\
DAT_0802deac:\n\
     .word 0x0201041C\n\
DAT_0802deb0:\n\
     .word 0x085B6CC8\n\
DAT_0802deb4:\n\
     .word 0x020103B8\n\
DAT_0802deb8:\n\
     .word 0x0865FD94\n\
LAB_0802debc:\n\
     sub        r0,#0x2\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x2\n\
     bhi        LAB_0802dee0\n\
     ldr        r1,DAT_0802df50\n\
     ldr        r0,DAT_0802df54\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0802df58\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r3,DAT_0802df5c\n\
     mov        r1,#0x14\n\
     mov        r2,#0x94\n\
     bl         fun_0803c138\n\
LAB_0802dee0:\n\
     ldr        r0,DAT_0802df60\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802df46\n\
     ldr        r0,DAT_0802df64\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     ldr        r7,DAT_0802df5c\n\
     ldr        r5,DAT_0802df50\n\
     ldr        r4,DAT_0802df54\n\
     add        r3,r0,#0x0\n\
     ldr        r6,DAT_0802df68\n\
     cmp        r1,#0x0\n\
     bne        LAB_0802df2e\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0802df6c\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802df20\n\
     add        r2,r3,#0x0\n\
LAB_0802df12:\n\
     add        r1,#0x1\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802df12\n\
LAB_0802df20:\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r3,r0]\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r3,#0x0]\n\
     mov        r0,#0xe8\n\
     sub        r0,r0,r1\n\
     strh       r0,[r6,#0x0]\n\
LAB_0802df2e:\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_0802df6c\n\
     add        r1,r5,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r6,r3]\n\
     mov        r2,#0x5\n\
     add        r3,r7,#0x0\n\
     bl         fun_0803c138\n\
LAB_0802df46:\n\
     add        sp,#0xc\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802df50:\n\
     .word 0x08669620\n\
DAT_0802df54:\n\
     .word 0x020025B4\n\
DAT_0802df58:\n\
     .word 0x0000C184\n\
DAT_0802df5c:\n\
     .word 0x0865FD94\n\
DAT_0802df60:\n\
     .word 0x02010448\n\
DAT_0802df64:\n\
     .word 0x0200DCD4\n\
DAT_0802df68:\n\
     .word 0x020103D0\n\
DAT_0802df6c:\n\
     .word 0x0000F754\n\
    ");
}
__attribute__((naked)) void fun_0802df70()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r0,DAT_0802e054\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0802e058\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r3,[r1,#0x2]\n\
     sub        r0,r3,r2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_0802e05c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r4,[r1,#0x2]\n\
     sub        r0,r4,r2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r6,DAT_0802e060\n\
     ldr        r1,[r6,#0x4]\n\
     sub        r0,#0x50\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_0802e064\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,#0x6\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     ldr        r5,DAT_0802e068\n\
     cmp        r0,#0x1\n\
     bls        LAB_0802dfbc\n\
     ldr        r1,[r5,#0x0]\n\
     ldrh       r3,[r1,#0x2]\n\
     add        r0,r2,r3\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_0802e06c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r4,[r1,#0x2]\n\
     add        r0,r2,r4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r6,#0x0]\n\
     ldrh       r3,[r1,#0x2]\n\
     add        r0,r2,r3\n\
     strh       r0,[r1,#0x2]\n\
LAB_0802dfbc:\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r0,r4]\n\
     cmp        r0,#0xf0\n\
     ble        LAB_0802e09c\n\
     ldr        r4,DAT_0802e070\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802dfda\n\
     ldr        r0,DAT_0802e074\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802dfda:\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_0802e06c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r2,r1\n\
     strh       r2,[r0,#0x12]\n\
     ldr        r1,DAT_0802e078\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r3,r0,#0x10\n\
     cmp        r3,#0x0\n\
     bne        LAB_0802e09c\n\
     ldr        r0,DAT_0802e07c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e094\n\
     ldr        r1,DAT_0802e080\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802e084\n\
     ldr        r2,DAT_0802e088\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r2,r4]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802e08c\n\
     str        r3,[r0,#0x0]\n\
     strh       r3,[r2,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0802e090\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x12\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e04a\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0802e090\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     orr        r1,r4\n\
     str        r1,[r0,#0x0]\n\
LAB_0802e04a:\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     b          LAB_0802e09c\n\
.space 1\n\
.space 1\n\
DAT_0802e054:\n\
     .word 0x020103A8\n\
DAT_0802e058:\n\
     .word 0x020103E8\n\
DAT_0802e05c:\n\
     .word 0x0201047C\n\
DAT_0802e060:\n\
     .word 0x020103F8\n\
DAT_0802e064:\n\
     .word 0x0201041C\n\
DAT_0802e068:\n\
     .word 0x0201044C\n\
DAT_0802e06c:\n\
     .word 0x02010400\n\
DAT_0802e070:\n\
     .word 0x020103B0\n\
DAT_0802e074:\n\
     .word 0x0200ED50\n\
DAT_0802e078:\n\
     .word 0x020103F0\n\
DAT_0802e07c:\n\
     .word 0x02010440\n\
DAT_0802e080:\n\
     .word 0x020025B8\n\
DAT_0802e084:\n\
     .word 0x020025FC\n\
DAT_0802e088:\n\
     .word 0x020103DC\n\
DAT_0802e08c:\n\
     .word 0x02002558\n\
DAT_0802e090:\n\
     .word 0x00000E84\n\
LAB_0802e094:\n\
     mov        r0,#0xfc\n\
     lsl        r0,r0,#0x3\n\
     bl         fun_08001070\n\
LAB_0802e09c:\n\
     ldr        r3,DAT_0802e1b4\n\
     ldr        r1,[r3,#0x0]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r1,r4]\n\
     add        r0,#0x40\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0802e0ca\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_0802e1b8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_0802e1bc\n\
     ldr        r1,[r0,#0x4]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_0802e0ca:\n\
     ldr        r0,DAT_0802e1c0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e0f2\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r1,#0x2\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0802e0f2\n\
     ldr        r4,DAT_0802e1c4\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e0f2\n\
     bl         fun_080016d4\n\
     mov        r0,#0x1\n\
     bl         fun_080016b0\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802e0f2:\n\
     ldr        r0,DAT_0802e1b4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0x8b\n\
     ble        LAB_0802e100\n\
     b          LAB_0802e300\n\
LAB_0802e100:\n\
     ldr        r6,DAT_0802e1c8\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e10a\n\
     b          LAB_0802e300\n\
LAB_0802e10a:\n\
     ldr        r0,DAT_0802e1cc\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     cmp        r0,#0x20\n\
     bgt        LAB_0802e116\n\
     b          LAB_0802e27c\n\
LAB_0802e116:\n\
     ldr        r7,DAT_0802e1d0\n\
     ldrh       r1,[r7,#0x0]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0xfd\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x6\n\
     bhi        LAB_0802e218\n\
     ldr        r6,DAT_0802e1d4\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r6,r4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e132\n\
     b          LAB_0802e2e8\n\
LAB_0802e132:\n\
     ldr        r5,DAT_0802e1b8\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_0802e1bc\n\
     ldr        r1,[r0,#0x4]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_0802e1d8\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,DAT_0802e1dc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802e1e0\n\
     str        r0,[r1,#0x0]\n\
     mov        r3,#0x1\n\
     strh       r3,[r0,#0x6]\n\
     strh       r3,[r0,#0x10]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r4\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r2,DAT_0802e1e4\n\
     mov        r1,#0xd\n\
     strb       r1,[r2,#0x0]\n\
     ldrh       r1,[r6,#0x0]\n\
     add        r1,#0x2a\n\
     strh       r1,[r6,#0x0]\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r1,[r2,#0x2]\n\
     add        r1,#0xa\n\
     strh       r1,[r0,#0x2]\n\
     ldrh       r1,[r2,#0x4]\n\
     sub        r1,#0x14\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r1,DAT_0802e1e8\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r0,#0xeb\n\
     strh       r0,[r7,#0x0]\n\
     ldr        r0,DAT_0802e1ec\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,DAT_0802e1f0\n\
     strh       r3,[r0,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_080016f0\n\
     ldr        r1,DAT_0802e1f4\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e1f8\n\
     mov        r4,#0x96\n\
     lsl        r4,r4,#0x2\n\
     add        r0,r4,#0x0\n\
     b          LAB_0802e1fe\n\
.space 1\n\
.space 1\n\
DAT_0802e1b4:\n\
     .word 0x020103A8\n\
DAT_0802e1b8:\n\
     .word 0x0201047C\n\
DAT_0802e1bc:\n\
     .word 0x020103F8\n\
DAT_0802e1c0:\n\
     .word 0x020104E4\n\
DAT_0802e1c4:\n\
     .word 0x02010494\n\
DAT_0802e1c8:\n\
     .word 0x02010440\n\
DAT_0802e1cc:\n\
     .word 0x020103B8\n\
DAT_0802e1d0:\n\
     .word 0x02010414\n\
DAT_0802e1d4:\n\
     .word 0x020104EC\n\
DAT_0802e1d8:\n\
     .word 0x020103A4\n\
DAT_0802e1dc:\n\
     .word 0x085C3D2C\n\
DAT_0802e1e0:\n\
     .word 0x020103EC\n\
DAT_0802e1e4:\n\
     .word 0x020103D4\n\
DAT_0802e1e8:\n\
     .word 0x0000FDFF\n\
DAT_0802e1ec:\n\
     .word 0x020103C8\n\
DAT_0802e1f0:\n\
     .word 0x0201049C\n\
DAT_0802e1f4:\n\
     .word 0x020103DC\n\
LAB_0802e1f8:\n\
     mov        r3,#0x96\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r2,r3\n\
LAB_0802e1fe:\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802e214\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080016d4\n\
     mov        r0,#0x2\n\
     bl         fun_080016b0\n\
     b          LAB_0802e2e8\n\
.space 1\n\
.space 1\n\
DAT_0802e214:\n\
     .word 0x02010440\n\
LAB_0802e218:\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0xf1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x8\n\
     bhi        LAB_0802e230\n\
     ldr        r0,DAT_0802e22c\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     b          LAB_0802e242\n\
DAT_0802e22c:\n\
     .word 0x020103B4\n\
LAB_0802e230:\n\
     ldr        r2,DAT_0802e24c\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x8\n\
     bhi        LAB_0802e254\n\
     ldr        r0,DAT_0802e250\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
LAB_0802e242:\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e2e8\n\
     bl         fun_0802e3e8\n\
     b          LAB_0802e2e8\n\
DAT_0802e24c:\n\
     .word 0xFFFFFEF9\n\
DAT_0802e250:\n\
     .word 0x020103B4\n\
LAB_0802e254:\n\
     ldr        r1,DAT_0802e274\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r1,r4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e2e8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802e278\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e2a0\n\
     mov        r0,#0xc8\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802e2e8\n\
.space 1\n\
.space 1\n\
DAT_0802e274:\n\
     .word 0x020103B4\n\
DAT_0802e278:\n\
     .word 0x020103DC\n\
LAB_0802e27c:\n\
     cmp        r0,#0x19\n\
     bgt        LAB_0802e28c\n\
     ldr        r0,DAT_0802e288\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r0,r3]\n\
     b          LAB_0802e29c\n\
DAT_0802e288:\n\
     .word 0x020103B4\n\
LAB_0802e28c:\n\
     ldr        r4,DAT_0802e2a8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802e2b0\n\
     ldr        r0,DAT_0802e2ac\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
LAB_0802e29c:\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e2e8\n\
LAB_0802e2a0:\n\
     bl         fun_0802e310\n\
     b          LAB_0802e2e8\n\
.space 1\n\
.space 1\n\
DAT_0802e2a8:\n\
     .word 0x020103DC\n\
DAT_0802e2ac:\n\
     .word 0x020103B4\n\
LAB_0802e2b0:\n\
     ldr        r5,DAT_0802e2dc\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e2e8\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     beq        LAB_0802e2a0\n\
     mov        r2,#0x1\n\
     strh       r2,[r5,#0x0]\n\
     ldrh       r1,[r4,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r4,r3]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e2e0\n\
     mov        r0,#0xc8\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_0802e2e8\n\
DAT_0802e2dc:\n\
     .word 0x020103B4\n\
LAB_0802e2e0:\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc8\n\
     strh       r0,[r4,#0x0]\n\
     strh       r2,[r6,#0x0]\n\
LAB_0802e2e8:\n\
     ldr        r0,DAT_0802e308\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xc8\n\
     bne        LAB_0802e300\n\
     ldr        r4,DAT_0802e30c\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e300\n\
     bl         fun_080016d4\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802e300:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802e308:\n\
     .word 0x020103DC\n\
DAT_0802e30c:\n\
     .word 0x02010490\n\
    ");
}
__attribute__((naked)) void fun_0802e310()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0802e368\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r3,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r3,#0x12]\n\
     ldr        r0,DAT_0802e36c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_0802e370\n\
     mov        r0,#0xd\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802e374\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x24\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802e378\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r3,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x2]\n\
     ldrh       r0,[r3,#0x4]\n\
     sub        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802e37c\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_0802e380\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_0802e384\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_080016f0\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802e368:\n\
     .word 0x02010400\n\
DAT_0802e36c:\n\
     .word 0x020103F8\n\
DAT_0802e370:\n\
     .word 0x0201040C\n\
DAT_0802e374:\n\
     .word 0x020103B4\n\
DAT_0802e378:\n\
     .word 0x020103A4\n\
DAT_0802e37c:\n\
     .word 0x0000FDFF\n\
DAT_0802e380:\n\
     .word 0x02010440\n\
DAT_0802e384:\n\
     .word 0x020104E4\n\
    ");
}
__attribute__((naked)) void fun_0802e388()
{
    asm("\n\
     push       {r4,lr}\n\
     bl         fun_0800457c\n\
     bl         fun_0803a980\n\
     ldr        r4,DAT_0802e3b0\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e3a6\n\
     ldr        r0,DAT_0802e3b4\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802e3a6:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0802e3b0:\n\
     .word 0x020103B0\n\
DAT_0802e3b4:\n\
     .word 0x0200ED50\n\
    ");
}
__attribute__((naked)) void fun_0802e3b8()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802e3bc()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802e3c0()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0802e3d0\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802e3d4\n\
     bl         fun_0802d864\n\
     b          LAB_0802e3e2\n\
DAT_0802e3d0:\n\
     .word 0x0201041C\n\
LAB_0802e3d4:\n\
     sub        r0,#0x2\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x2\n\
     bhi        LAB_0802e3e2\n\
     bl         fun_0802db64\n\
LAB_0802e3e2:\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802e3e8()
{
    asm("\n\
     push       {lr}\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x2\n\
     beq        LAB_0802e3fe\n\
     bl         fun_0802e310\n\
     b          LAB_0802e420\n\
LAB_0802e3fe:\n\
     ldr        r0,DAT_0802e414\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0802e418\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e41c\n\
     mov        r0,#0xc8\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0802e420\n\
DAT_0802e414:\n\
     .word 0x020103B4\n\
DAT_0802e418:\n\
     .word 0x020103DC\n\
LAB_0802e41c:\n\
     bl         fun_0802e310\n\
LAB_0802e420:\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802e424()
{
    asm("\n\
     ldr        r2,DAT_0802e43c\n\
     ldr        r0,DAT_0802e440\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802e444\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0802e448\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0802e43c:\n\
     .word 0x02010500\n\
DAT_0802e440:\n\
     .word 0x085C72D0\n\
DAT_0802e444:\n\
     .word 0x02010510\n\
DAT_0802e448:\n\
     .word 0x085C726C\n\
    ");
}
__attribute__((naked)) void fun_0802e44c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e46c\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e480\n\
LAB_0802e46c:\n\
     ldr        r1,DAT_0802e620\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802e624\n\
     ldr        r2,DAT_0802e628\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001070\n\
LAB_0802e480:\n\
     ldr        r3,DAT_0802e62c\n\
     mov        r10,r3\n\
     ldrh       r0,[r3,#0xa]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e4f6\n\
     mov        r0,#0x2\n\
     bl         fun_08003184\n\
     mov        r9,r0\n\
     ldr        r4,PTR_DAT_0802e630\n\
     mov        r8,r4\n\
     ldr        r3,PTR_DAT_0802e634\n\
     ldrh       r0,[r3,#0x2]\n\
     lsl        r2,r0,#0x1\n\
     add        r0,r2,r4\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r0,r4]\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r6,r3,#0x1\n\
     add        r8,r6\n\
     mov        r3,r8\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r3,r4]\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,PTR_DAT_0802e638\n\
     add        r2,r2,r0\n\
     mov        r3,#0x0\n\
     ldrsh      r5,[r2,r3]\n\
     add        r6,r6,r0\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r6,r4]\n\
     sub        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     mov        r0,r9\n\
     bl         fun_080030e4\n\
     add        r4,r0,#0x0\n\
     mov        r0,r9\n\
     add        r1,r5,#0x0\n\
     bl         fun_080030e4\n\
     lsr        r4,r4,#0x10\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r4,r1,r4\n\
     lsl        r4,r4,#0x10\n\
     lsr        r7,r4,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r6,[r6,#0x0]\n\
     add        r0,r6,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     asr        r0,r0,#0x13\n\
     mov        r1,#0x6\n\
     bl         __modsi3\n\
     mov        r2,r10\n\
     strh       r0,[r2,#0x24]\n\
LAB_0802e4f6:\n\
     mov        r3,r10\n\
     ldrh       r0,[r3,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e56e\n\
     mov        r0,#0x3\n\
     bl         fun_08003184\n\
     mov        r9,r0\n\
     ldr        r4,PTR_DAT_0802e630\n\
     mov        r8,r4\n\
     ldr        r3,PTR_DAT_0802e634\n\
     ldrh       r0,[r3,#0x4]\n\
     lsl        r2,r0,#0x1\n\
     add        r0,r2,r4\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r0,r4]\n\
     ldrh       r3,[r3,#0x2]\n\
     lsl        r6,r3,#0x1\n\
     add        r8,r6\n\
     mov        r3,r8\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r3,r4]\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,PTR_DAT_0802e638\n\
     add        r2,r2,r0\n\
     mov        r3,#0x0\n\
     ldrsh      r5,[r2,r3]\n\
     add        r6,r6,r0\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r6,r4]\n\
     sub        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     mov        r0,r9\n\
     bl         fun_080030e4\n\
     add        r4,r0,#0x0\n\
     mov        r0,r9\n\
     add        r1,r5,#0x0\n\
     bl         fun_080030e4\n\
     lsr        r4,r4,#0x10\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r4,r1,r4\n\
     lsl        r4,r4,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r6,[r6,#0x0]\n\
     add        r0,r6,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     lsr        r7,r4,#0x10\n\
     asr        r4,r4,#0x13\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x6\n\
     bl         __modsi3\n\
     add        r0,#0xe\n\
     mov        r2,r10\n\
     strh       r0,[r2,#0x24]\n\
LAB_0802e56e:\n\
     mov        r3,r10\n\
     ldrh       r0,[r3,#0xe]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e5e6\n\
     mov        r0,#0x4\n\
     bl         fun_08003184\n\
     mov        r9,r0\n\
     ldr        r4,PTR_DAT_0802e630\n\
     mov        r8,r4\n\
     ldr        r3,PTR_DAT_0802e634\n\
     ldrh       r0,[r3,#0x8]\n\
     lsl        r2,r0,#0x1\n\
     add        r0,r2,r4\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r0,r4]\n\
     ldrh       r3,[r3,#0x6]\n\
     lsl        r6,r3,#0x1\n\
     add        r8,r6\n\
     mov        r3,r8\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r3,r4]\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,PTR_DAT_0802e638\n\
     add        r2,r2,r0\n\
     mov        r3,#0x0\n\
     ldrsh      r5,[r2,r3]\n\
     add        r6,r6,r0\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r6,r4]\n\
     sub        r5,r5,r0\n\
     lsl        r5,r5,#0x10\n\
     mov        r0,r9\n\
     bl         fun_080030e4\n\
     add        r4,r0,#0x0\n\
     mov        r0,r9\n\
     add        r1,r5,#0x0\n\
     bl         fun_080030e4\n\
     lsr        r4,r4,#0x10\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r4,r1,r4\n\
     lsl        r4,r4,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r6,[r6,#0x0]\n\
     add        r0,r6,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     lsr        r7,r4,#0x10\n\
     asr        r4,r4,#0x13\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x5\n\
     bl         __modsi3\n\
     add        r0,#0xf5\n\
     mov        r2,r10\n\
     strh       r0,[r2,#0x24]\n\
LAB_0802e5e6:\n\
     mov        r3,r10\n\
     strh       r7,[r3,#0x18]\n\
     strh       r5,[r3,#0x1a]\n\
     strh       r7,[r3,#0x4]\n\
     strh       r5,[r3,#0x6]\n\
     ldr        r2,PTR_s_i_i_0802e63c\n\
     lsl        r3,r7,#0x10\n\
     asr        r3,r3,#0x10\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_080032a0\n\
     bl         fun_0802e9bc\n\
     bl         fun_08002a60\n\
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
DAT_0802e620:\n\
     .word 0x02002530\n\
DAT_0802e624:\n\
     .word 0x020025E8\n\
DAT_0802e628:\n\
     .word 0x00000293\n\
DAT_0802e62c:\n\
     .word 0x02010520\n\
PTR_DAT_0802e630:\n\
     .word       DAT_085c7250\n\
PTR_DAT_0802e634:\n\
     .word       DAT_085c7260\n\
PTR_DAT_0802e638:\n\
     .word       DAT_085c7258\n\
PTR_s_i_i_0802e63c:\n\
     .word       s_i_i_085c73cc\n\
    ");
}
__attribute__((naked)) void fun_0802e640()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x6\n\
     bne        LAB_0802e64e\n\
     b          LAB_0802e760\n\
LAB_0802e64e:\n\
     cmp        r5,#0x6\n\
     bgt        LAB_0802e688\n\
     cmp        r5,#0x2\n\
     beq        LAB_0802e6f4\n\
     cmp        r5,#0x2\n\
     bgt        LAB_0802e664\n\
     cmp        r5,#0x0\n\
     beq        LAB_0802e6c0\n\
     cmp        r5,#0x1\n\
     beq        LAB_0802e6d8\n\
     b          LAB_0802e84c\n\
LAB_0802e664:\n\
     cmp        r5,#0x4\n\
     beq        LAB_0802e710\n\
     cmp        r5,#0x4\n\
     bgt        LAB_0802e748\n\
     ldr        r4,DAT_0802e684\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xc]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0xb\n\
     mov        r0,#0x4\n\
     bl         fun_08002ac0\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0xe]\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e684:\n\
     .word 0x02010520\n\
LAB_0802e688:\n\
     cmp        r5,#0x9\n\
     bne        LAB_0802e68e\n\
     b          LAB_0802e7b0\n\
LAB_0802e68e:\n\
     cmp        r5,#0x9\n\
     bgt        LAB_0802e69e\n\
     cmp        r5,#0x7\n\
     beq        LAB_0802e778\n\
     cmp        r5,#0x8\n\
     bne        LAB_0802e69c\n\
     b          LAB_0802e798\n\
LAB_0802e69c:\n\
     b          LAB_0802e84c\n\
LAB_0802e69e:\n\
     cmp        r5,#0x65\n\
     bne        LAB_0802e6a4\n\
     b          LAB_0802e80c\n\
LAB_0802e6a4:\n\
     cmp        r5,#0x65\n\
     bgt        LAB_0802e6b0\n\
     cmp        r5,#0x64\n\
     bne        LAB_0802e6ae\n\
     b          LAB_0802e7f0\n\
LAB_0802e6ae:\n\
     b          LAB_0802e84c\n\
LAB_0802e6b0:\n\
     ldr        r0,DAT_0802e6bc\n\
     cmp        r5,r0\n\
     bne        LAB_0802e6b8\n\
     b          LAB_0802e7cc\n\
LAB_0802e6b8:\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e6bc:\n\
     .word 0x000003E7\n\
LAB_0802e6c0:\n\
     ldr        r0,DAT_0802e6d4\n\
     bl         fun_0800306c\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     mov        r0,#0x1\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e6d4:\n\
     .word 0x085C75D8\n\
LAB_0802e6d8:\n\
     bl         fun_0802e860\n\
     ldr        r4,DAT_0802e6f0\n\
     mov        r0,#0x2\n\
     str        r0,[r4,#0x1c]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     bl         fun_08002ac0\n\
     strh       r5,[r4,#0xa]\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e6f0:\n\
     .word 0x02010520\n\
LAB_0802e6f4:\n\
     ldr        r4,DAT_0802e70c\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xa]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0xa\n\
     mov        r0,#0x3\n\
     bl         fun_08002ac0\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0xc]\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e70c:\n\
     .word 0x02010520\n\
LAB_0802e710:\n\
     ldr        r4,DAT_0802e740\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xe]\n\
     mov        r0,#0x1\n\
     str        r0,[r4,#0x1c]\n\
     bl         fun_0802e974\n\
     bl         fun_0803c224\n\
     mov        r0,#0x5\n\
     strh       r0,[r4,#0x10]\n\
     mov        r0,#0x65\n\
     mov        r1,#0x0\n\
     bl         fun_08002ac0\n\
     ldr        r0,DAT_0802e744\n\
     bl         fun_0800306c\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     mov        r0,#0x5\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e84c\n\
DAT_0802e740:\n\
     .word 0x02010520\n\
DAT_0802e744:\n\
     .word 0x085CDA10\n\
LAB_0802e748:\n\
     ldr        r0,DAT_0802e75c\n\
     bl         fun_0800306c\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x9\n\
     mov        r0,#0x6\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e75c:\n\
     .word 0x085D01A0\n\
LAB_0802e760:\n\
     ldr        r0,DAT_0802e774\n\
     bl         fun_0800306c\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0xa\n\
     mov        r0,#0x7\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e7fc\n\
.space 1\n\
.space 1\n\
DAT_0802e774:\n\
     .word 0x085E4E80\n\
LAB_0802e778:\n\
     bl         fun_0803c1a4\n\
     mov        r0,#0x64\n\
     bl         fun_0800314c\n\
     ldr        r0,DAT_0802e794\n\
     bl         fun_0800306c\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xa\n\
     mov        r0,#0x8\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e84c\n\
DAT_0802e794:\n\
     .word 0x085DF134\n\
LAB_0802e798:\n\
     ldr        r0,DAT_0802e7ac\n\
     bl         fun_0800306c\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xa\n\
     mov        r0,#0x9\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e7ac:\n\
     .word 0x085D5B58\n\
LAB_0802e7b0:\n\
     ldr        r0,DAT_0802e7c4\n\
     bl         fun_0800306c\n\
     ldr        r0,DAT_0802e7c8\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xa\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e7c4:\n\
     .word 0x085DB9DC\n\
DAT_0802e7c8:\n\
     .word 0x000003E7\n\
LAB_0802e7cc:\n\
     ldr        r1,DAT_0802e7e4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802e7e8\n\
     ldr        r2,DAT_0802e7ec\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001070\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e7e4:\n\
     .word 0x02002530\n\
DAT_0802e7e8:\n\
     .word 0x020025E8\n\
DAT_0802e7ec:\n\
     .word 0x00000293\n\
LAB_0802e7f0:\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x13\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r1,#0x10\n\
     eor        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
LAB_0802e7fc:\n\
     ldr        r1,DAT_0802e808\n\
     mov        r0,#0x64\n\
     bl         fun_08002ac0\n\
     b          LAB_0802e84c\n\
.space 1\n\
.space 1\n\
DAT_0802e808:\n\
     .word 0x00003333\n\
LAB_0802e80c:\n\
     ldr        r1,DAT_0802e854\n\
     ldr        r4,DAT_0802e858\n\
     ldrh       r2,[r4,#0x10]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     bl         fun_0803c1a4\n\
     ldr        r5,DAT_0802e85c\n\
     mov        r0,sp\n\
     mov        r1,#0xa\n\
     mov        r2,#0xa\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
     mov        r0,sp\n\
     mov        r1,#0xd6\n\
     mov        r2,#0xa\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
     ldrh       r0,[r4,#0x10]\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x10]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e84c\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     mov        r0,#0x65\n\
     bl         fun_08002ac0\n\
LAB_0802e84c:\n\
     add        sp,#0x4\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802e854:\n\
     .word 0x085C73D4\n\
DAT_0802e858:\n\
     .word 0x02010520\n\
DAT_0802e85c:\n\
     .word 0x0865FB7C\n\
    ");
}
__attribute__((naked)) void fun_0802e860()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r4,DAT_0802e8d8\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e86e\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802e86e:\n\
     ldrh       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e8cc\n\
     mov        r0,#0x1\n\
     bl         fun_08002f58\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xba\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802e8dc\n\
     bl         fun_08039e64\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x2]\n\
     mov        r4,#0x0\n\
LAB_0802e892:\n\
     lsl        r0,r4,#0x5\n\
     ldr        r5,DAT_0802e8e0\n\
     add        r0,r0,r5\n\
     mov        r1,#0x2c\n\
     mul        r1,r4\n\
     ldr        r2,DAT_0802e8e4\n\
     add        r1,r1,r2\n\
     bl         fun_080004ac\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802e892\n\
     ldr        r0,DAT_0802e8e8\n\
     bl         fun_080045f0\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_0803aa14\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x2\n\
     mov        r1,#0x0\n\
     bl         fun_0803a140\n\
     mov        r0,#0x0\n\
     bl         fun_08002f58\n\
LAB_0802e8cc:\n\
     ldr        r1,DAT_0802e8d8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x8]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802e8d8:\n\
     .word 0x02010520\n\
DAT_0802e8dc:\n\
     .word 0x02010510\n\
DAT_0802e8e0:\n\
     .word 0x02010534\n\
DAT_0802e8e4:\n\
     .word 0x085C73A0\n\
DAT_0802e8e8:\n\
     .word 0x084496C8\n\
    ");
}
__attribute__((naked)) void fun_0802e8ec()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_0802e940\n\
     mov        r1,#0x0\n\
     mov        r2,#0x34\n\
     bl         memset\n\
     mov        r0,sp\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0802e944\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802e948\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0802e94c\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     bl         fun_0802e974\n\
     bl         fun_0802e9b0\n\
     ldr        r0,DAT_0802e950\n\
     bl         fun_0800311c\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_08002ac0\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802e940:\n\
     .word 0x02010520\n\
DAT_0802e944:\n\
     .word 0x040000D4\n\
DAT_0802e948:\n\
     .word 0x8100C000\n\
DAT_0802e94c:\n\
     .word 0x81000200\n\
DAT_0802e950:\n\
     .word 0x0802E641\n\
    ");
}
__attribute__((naked)) void fun_0802e954()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080031dc\n\
     bl         fun_0802ea2c\n\
     bl         fun_0802e9e4\n\
     bl         fun_0802ea10\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802e96c()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802e970()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802e974()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0802e9a8\n\
     ldrh       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e982\n\
     bl         fun_0802ea10\n\
LAB_0802e982:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802e9a2\n\
     mov        r0,#0x1\n\
     bl         fun_08002f58\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x13\n\
     ldr        r2,DAT_0802e9ac\n\
     add        r1,r2,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_08002f58\n\
LAB_0802e9a2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802e9a8:\n\
     .word 0x02010520\n\
DAT_0802e9ac:\n\
     .word 0x00001F54\n\
    ");
}
__attribute__((naked)) void fun_0802e9b0()
{
    asm("\n\
     push       {lr}\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0802e9bc()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0802e9dc\n\
     ldrh       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e9ca\n\
     bl         fun_0802e9f8\n\
LAB_0802e9ca:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e9d4\n\
     bl         fun_0802e9e0\n\
LAB_0802e9d4:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802e9dc:\n\
     .word 0x02010520\n\
    ");
}
__attribute__((naked)) void fun_0802e9e0()
{
    asm("\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802e9e4()
{
    asm("\n\
     ldr        r1,DAT_0802e9f4\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802e9f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802e9f0:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0802e9f4:\n\
     .word 0x02010520\n\
    ");
}
__attribute__((naked)) void fun_0802e9f8()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_0802ea0c\n\
     ldrh       r0,[r1,#0x4]\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_0803a140\n\
     bl         fun_0803a9dc\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802ea0c:\n\
     .word 0x02010520\n\
    ");
}
__attribute__((naked)) void fun_0802ea10()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_0802ea28\n\
     ldrh       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ea22\n\
     bl         fun_0803a980\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x2]\n\
LAB_0802ea22:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802ea28:\n\
     .word 0x02010520\n\
    ");
}
__attribute__((naked)) void fun_0802ea2c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     pop        {r0}\n\
     bx         r0\n\
.space 2\n\
    ");
}
__attribute__((naked)) void fun_0802ea38()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     ldr        r0,PTR_DAT_0802ed3c\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_08002e64\n\
     ldr        r0,PTR_DAT_0802ed40\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed44\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed48\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed4c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed50\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed54\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed58\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed5c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802ed60\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed64\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed68\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed6c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed70\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed74\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed78\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed7c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed80\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802ed84\n\
     ldr        r0,PTR_DAT_0802ed88\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed8c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed90\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed94\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802ed98\n\
     strh       r4,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     bl         fun_08002bcc\n\
     mov        r0,sp\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r5,DAT_0802ed9c\n\
     str        r0,[r5,#0x0]\n\
     mov        r6,#0xc0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r5,#0x4]\n\
     ldr        r0,DAT_0802eda0\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     mov        r0,sp\n\
     strh       r4,[r0,#0x0]\n\
     str        r0,[r5,#0x0]\n\
     mov        r4,#0xa0\n\
     lsl        r4,r4,#0x13\n\
     str        r4,[r5,#0x4]\n\
     ldr        r0,DAT_0802eda4\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     ldr        r0,DAT_0802eda8\n\
     bl         fun_080045f0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     ldr        r2,DAT_0802edac\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802edb0\n\
     str        r0,[r5,#0x0]\n\
     str        r4,[r5,#0x4]\n\
     ldr        r0,DAT_0802edb4\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     ldr        r0,DAT_0802edb8\n\
     add        r1,r6,#0x0\n\
     bl         fun_0803d070\n\
     ldr        r0,DAT_0802edbc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802edc0\n\
     str        r0,[r1,#0x0]\n\
     mov        r6,#0x1\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,DAT_0802edc4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802edc8\n\
     str        r0,[r1,#0x0]\n\
     mov        r5,#0x2\n\
     strh       r5,[r0,#0x6]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r4,r1,#0x0\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r4\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,DAT_0802edcc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802edd0\n\
     str        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r4\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,DAT_0802edd4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802edd8\n\
     str        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r4\n\
     strh       r1,[r0,#0x12]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,DAT_0802eddc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ede0\n\
     str        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x6]\n\
     ldrh       r2,[r0,#0x12]\n\
     orr        r4,r2\n\
     strh       r4,[r0,#0x12]\n\
     strh       r6,[r0,#0x10]\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_0802ede4\n\
LAB_0802eb74:\n\
     ldr        r0,DAT_0802ede8\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802edec\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r7,r1,#0x0\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r7\n\
     strh       r1,[r0,#0x12]\n\
     lsl        r2,r4,#0x10\n\
     asr        r2,r2,#0x10\n\
     lsl        r1,r2,#0x2\n\
     add        r1,r1,r5\n\
     str        r0,[r1,#0x0]\n\
     add        r2,#0x1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r4,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     cmp        r2,#0x13\n\
     ble        LAB_0802eb74\n\
     ldr        r0,DAT_0802edf0\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802edf4\n\
     str        r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x6]\n\
     ldr        r5,DAT_0802edf8\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0xc8\n\
     strh       r1,[r0,#0x2]\n\
     strh       r4,[r0,#0x4]\n\
     ldr        r0,DAT_0802edfc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee00\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0xd0\n\
     strh       r1,[r0,#0x2]\n\
     strh       r4,[r0,#0x4]\n\
     ldr        r0,DAT_0802ee04\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee08\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0x8\n\
     mov        r9,r1\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x2]\n\
     mov        r1,#0x18\n\
     mov        r10,r1\n\
     mov        r2,r10\n\
     strh       r2,[r0,#0x4]\n\
     ldr        r0,DAT_0802ee0c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee10\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x2]\n\
     mov        r2,#0x68\n\
     mov        r8,r2\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r0,DAT_0802ee14\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee18\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0xde\n\
     strh       r1,[r0,#0x2]\n\
     mov        r6,#0x48\n\
     strh       r6,[r0,#0x4]\n\
     ldr        r0,DAT_0802ee1c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee20\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0xdf\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r0,DAT_0802ee24\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee28\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0xd6\n\
     strh       r1,[r0,#0x2]\n\
     strh       r6,[r0,#0x4]\n\
     mov        r6,#0x1\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,DAT_0802ee2c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee30\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,#0xc6\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x4]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,DAT_0802ee34\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee38\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     add        r1,r5,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x2]\n\
     mov        r2,r10\n\
     strh       r2,[r0,#0x4]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,DAT_0802ee3c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee40\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldrh       r1,[r0,#0x12]\n\
     and        r5,r1\n\
     strh       r5,[r0,#0x12]\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x2]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x4]\n\
     strh       r6,[r0,#0x10]\n\
     ldr        r0,DAT_0802ee44\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee48\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r7\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,DAT_0802ee4c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee50\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r7\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,DAT_0802ee54\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee58\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r7\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,DAT_0802ee5c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802ee60\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r7\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r1,DAT_0802ee64\n\
     ldr        r2,DAT_0802ee68\n\
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
PTR_DAT_0802ed3c:\n\
     .4byte       DAT_02010560\n\
PTR_DAT_0802ed40:\n\
     .4byte       DAT_02010664\n\
PTR_DAT_0802ed44:\n\
     .4byte       DAT_02010688\n\
PTR_DAT_0802ed48:\n\
     .4byte       DAT_02010678\n\
PTR_DAT_0802ed4c:\n\
     .4byte       DAT_020105e0\n\
PTR_DAT_0802ed50:\n\
     .4byte       DAT_020105d0\n\
PTR_DAT_0802ed54:\n\
     .4byte       DAT_0201064c\n\
PTR_DAT_0802ed58:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_0802ed5c:\n\
     .4byte       DAT_020105e4\n\
PTR_DAT_0802ed60:\n\
     .4byte       DAT_020105d4\n\
PTR_DAT_0802ed64:\n\
     .4byte       DAT_02010650\n\
PTR_DAT_0802ed68:\n\
     .4byte       DAT_020106bc\n\
PTR_DAT_0802ed6c:\n\
     .4byte       DAT_020106d0\n\
PTR_DAT_0802ed70:\n\
     .4byte       DAT_020106d4\n\
PTR_DAT_0802ed74:\n\
     .4byte       DAT_0201066c\n\
PTR_DAT_0802ed78:\n\
     .4byte       DAT_020106c0\n\
PTR_DAT_0802ed7c:\n\
     .4byte       DAT_020106e0\n\
PTR_DAT_0802ed80:\n\
     .4byte       DAT_0201068c\n\
PTR_DAT_0802ed84:\n\
     .4byte       DAT_0200ece0\n\
PTR_DAT_0802ed88:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_0802ed8c:\n\
     .4byte       DAT_0201027c\n\
PTR_DAT_0802ed90:\n\
     .4byte       DAT_020105e8\n\
PTR_DAT_0802ed94:\n\
     .4byte       DAT_02010208\n\
PTR_DAT_0802ed98:\n\
     .4byte       DAT_02010640\n\
DAT_0802ed9c:\n\
     .4byte 0x040000D4\n\
DAT_0802eda0:\n\
     .4byte 0x8100C000\n\
DAT_0802eda4:\n\
     .4byte 0x81000200\n\
DAT_0802eda8:\n\
     .4byte 0x087C1CAC\n\
DAT_0802edac:\n\
     .4byte 0x00001F44\n\
DAT_0802edb0:\n\
     .4byte 0x087BD2AC\n\
DAT_0802edb4:\n\
     .4byte 0x80000100\n\
DAT_0802edb8:\n\
     .4byte 0x087B748C\n\
DAT_0802edbc:\n\
     .4byte 0x085EA77C\n\
DAT_0802edc0:\n\
     .4byte 0x02010204\n\
DAT_0802edc4:\n\
     .4byte 0x085EA78C\n\
DAT_0802edc8:\n\
     .4byte 0x020106D8\n\
DAT_0802edcc:\n\
     .4byte 0x085EA79C\n\
DAT_0802edd0:\n\
     .4byte 0x02010648\n\
DAT_0802edd4:\n\
     .4byte 0x085EA7EC\n\
DAT_0802edd8:\n\
     .4byte 0x02010670\n\
DAT_0802eddc:\n\
     .4byte 0x085EA7FC\n\
DAT_0802ede0:\n\
     .4byte 0x020105EC\n\
DAT_0802ede4:\n\
     .4byte 0x02010570\n\
DAT_0802ede8:\n\
     .4byte 0x085EA85C\n\
DAT_0802edec:\n\
     .4byte 0x020106C4\n\
DAT_0802edf0:\n\
     .4byte 0x085EA86C\n\
DAT_0802edf4:\n\
     .4byte 0x020105C8\n\
DAT_0802edf8:\n\
     .4byte 0x0000FDFF\n\
DAT_0802edfc:\n\
     .4byte 0x085EA87C\n\
DAT_0802ee00:\n\
     .4byte 0x02010680\n\
DAT_0802ee04:\n\
     .4byte 0x085EA7AC\n\
DAT_0802ee08:\n\
     .4byte 0x020106B8\n\
DAT_0802ee0c:\n\
     .4byte 0x085EA7BC\n\
DAT_0802ee10:\n\
     .4byte 0x02010690\n\
DAT_0802ee14:\n\
     .4byte 0x085EA80C\n\
DAT_0802ee18:\n\
     .4byte 0x02010660\n\
DAT_0802ee1c:\n\
     .4byte 0x085EA81C\n\
DAT_0802ee20:\n\
     .4byte 0x020106CC\n\
DAT_0802ee24:\n\
     .4byte 0x085EA83C\n\
DAT_0802ee28:\n\
     .4byte 0x02010674\n\
DAT_0802ee2c:\n\
     .4byte 0x085EA84C\n\
DAT_0802ee30:\n\
     .4byte 0x020106A4\n\
DAT_0802ee34:\n\
     .4byte 0x085EA7CC\n\
DAT_0802ee38:\n\
     .4byte 0x020105DC\n\
DAT_0802ee3c:\n\
     .4byte 0x085EA7DC\n\
DAT_0802ee40:\n\
     .4byte 0x020106C8\n\
DAT_0802ee44:\n\
     .4byte 0x085EA88C\n\
DAT_0802ee48:\n\
     .4byte 0x020105D8\n\
DAT_0802ee4c:\n\
     .4byte 0x085EA89C\n\
DAT_0802ee50:\n\
     .4byte 0x02010644\n\
DAT_0802ee54:\n\
     .4byte 0x085EA8AC\n\
DAT_0802ee58:\n\
     .4byte 0x020106B0\n\
DAT_0802ee5c:\n\
     .4byte 0x085EA8BC\n\
DAT_0802ee60:\n\
     .4byte 0x02010668\n\
DAT_0802ee64:\n\
     .4byte 0x0000037F\n\
DAT_0802ee68:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_0802ee6c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     bl         fun_080029c8\n\
     ldr        r0,DAT_0802ee8c\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802ee90\n\
     bl         fun_0802f95c\n\
     b          LAB_0802f592\n\
.space 1\n\
.space 1\n\
DAT_0802ee8c:\n\
     .4byte 0x0201064C\n\
LAB_0802ee90:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802eed4\n\
     ldr        r0,PTR_DAT_0802eec0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802ee9e\n\
     b          LAB_0802f592\n\
LAB_0802ee9e:\n\
     ldr        r0,PTR_DAT_0802eec4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802eea8\n\
     b          LAB_0802f592\n\
LAB_0802eea8:\n\
     ldr        r1,PTR_DAT_0802eec8\n\
     ldr        r0,PTR_DAT_0802eecc\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802eed0\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     b          LAB_0802f592\n\
PTR_DAT_0802eec0:\n\
     .4byte       DAT_02005cd0\n\
PTR_DAT_0802eec4:\n\
     .4byte       DAT_0200583c\n\
PTR_DAT_0802eec8:\n\
     .4byte       DAT_020025fc\n\
PTR_DAT_0802eecc:\n\
     .4byte       DAT_02010640\n\
PTR_DAT_0802eed0:\n\
     .4byte       DAT_02002558\n\
LAB_0802eed4:\n\
     ldr        r4,PTR_DAT_0802f0f8\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802eefc\n\
     ldr        r0,PTR_DAT_0802f0fc\n\
     ldr        r1,PTR_DAT_0802f100\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     beq        LAB_0802eef0\n\
     bl         fun_0802f850\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_0802eef0:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802eefc\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
LAB_0802eefc:\n\
     ldr        r0,PTR_DAT_0802f104\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r4,r0,#0x0\n\
     ldr        r0,PTR_DAT_0802f0f8\n\
     ldrh       r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0802ef8c\n\
     mov        r0,#0x20\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ef28\n\
     ldr        r1,PTR_DAT_0802f108\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802ef22\n\
     strh       r2,[r1,#0x0]\n\
LAB_0802ef22:\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0802ef28:\n\
     mov        r0,#0x80\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ef4a\n\
     ldr        r1,PTR_DAT_0802f10c\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     ble        LAB_0802ef44\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802ef44:\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0802ef4a:\n\
     mov        r0,#0x10\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ef6c\n\
     ldr        r1,PTR_DAT_0802f108\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x4\n\
     ble        LAB_0802ef66\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802ef66:\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0802ef6c:\n\
     mov        r0,#0x40\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802ef8c\n\
     ldr        r1,PTR_DAT_0802f10c\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802ef86\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802ef86:\n\
     mov        r0,#0x0\n\
     bl         fun_080016f0\n\
LAB_0802ef8c:\n\
     ldr        r3,PTR_DAT_0802f110\n\
     mov        r8,r3\n\
     ldr        r3,PTR_DAT_0802f108\n\
     mov        r5,#0x0\n\
     ldrsh      r1,[r3,r5]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r6,r0,#0x0\n\
     add        r6,#0x18\n\
     mov        r7,r8\n\
     strh       r6,[r7,#0x0]\n\
     ldr        r2,PTR_DAT_0802f10c\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r2,r0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,#0x4\n\
     mov        r12,r0\n\
     mov        r5,r12\n\
     ldr        r1,PTR_DAT_0802f114\n\
     strh       r5,[r1,#0x0]\n\
     ldr        r7,PTR_DAT_0802f118\n\
     mov        r9,r7\n\
     mov        r0,r9\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r0,r5]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802efce\n\
     add        r0,r1,#0x1\n\
     strh       r0,[r7,#0x0]\n\
LAB_0802efce:\n\
     mov        r0,#0x1\n\
     mov        r10,r0\n\
     add        r0,r4,#0x0\n\
     mov        r1,r10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802efde\n\
     b          LAB_0802f22a\n\
LAB_0802efde:\n\
     ldr        r0,PTR_DAT_0802f11c\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802efe8\n\
     b          LAB_0802f160\n\
LAB_0802efe8:\n\
     ldr        r0,PTR_DAT_0802f120\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802eff2\n\
     b          LAB_0802f160\n\
LAB_0802eff2:\n\
     ldr        r3,PTR_DAT_0802f124\n\
     ldr        r2,PTR_DAT_0802f10c\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r2,r5]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r7,PTR_DAT_0802f108\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r7,r2]\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     add        r0,r0,r3\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802f010\n\
     b          LAB_0802f160\n\
LAB_0802f010:\n\
     ldr        r0,PTR_DAT_0802f0f8\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0802f01a\n\
     b          LAB_0802f160\n\
LAB_0802f01a:\n\
     ldr        r0,PTR_DAT_0802f128\n\
     ldr        r2,[r0,#0x0]\n\
     strh       r6,[r2,#0x2]\n\
     mov        r4,r12\n\
     strh       r4,[r2,#0x4]\n\
     ldr        r6,PTR_DAT_0802f10c\n\
     mov        r7,#0x0\n\
     ldrsh      r0,[r6,r7]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r4,PTR_DAT_0802f108\n\
     mov        r6,#0x0\n\
     ldrsh      r1,[r4,r6]\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     add        r0,r0,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r4,DAT_0802f12c\n\
     add        r0,r4,#0x0\n\
     ldrh       r7,[r2,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r2,#0x12]\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_0802f130\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r8,r0\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r2,PTR_DAT_0802f114\n\
     ldrh       r6,[r2,#0x0]\n\
     strh       r6,[r1,#0x4]\n\
     strh       r5,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f134\n\
     mov        r5,r10\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802f138\n\
     mov        r0,#0x9\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r7,PTR_DAT_0802f11c\n\
     strh       r5,[r7,#0x0]\n\
     ldr        r0,PTR_DAT_0802f13c\n\
     ldr        r1,PTR_DAT_0802f108\n\
     ldrh       r3,[r1,#0x0]\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f140\n\
     ldr        r5,PTR_DAT_0802f10c\n\
     ldrh       r2,[r5,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802f144\n\
     mov        r0,#0x2d\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802f148\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f14c\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f150\n\
     ldr        r5,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     ldrh       r7,[r5,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r5,#0x12]\n\
     ldr        r0,PTR_DAT_0802f154\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     ldrh       r1,[r3,#0x12]\n\
     and        r0,r1\n\
     strh       r0,[r3,#0x12]\n\
     ldr        r0,PTR_DAT_0802f158\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     ldrh       r7,[r2,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,PTR_DAT_0802f15c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     and        r4,r0\n\
     strh       r4,[r1,#0x12]\n\
     mov        r0,r8\n\
     sub        r0,#0x2\n\
     strh       r0,[r5,#0x2]\n\
     strh       r6,[r5,#0x4]\n\
     mov        r4,r8\n\
     strh       r4,[r3,#0x2]\n\
     add        r0,r6,#0x0\n\
     sub        r0,#0x8\n\
     strh       r0,[r3,#0x4]\n\
     mov        r0,r8\n\
     add        r0,#0x20\n\
     strh       r0,[r2,#0x2]\n\
     strh       r6,[r2,#0x4]\n\
     strh       r4,[r1,#0x2]\n\
     add        r6,#0x1a\n\
     strh       r6,[r1,#0x4]\n\
     mov        r5,r9\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r5,r6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802f0f0\n\
     b          LAB_0802f22a\n\
LAB_0802f0f0:\n\
     mov        r7,r10\n\
     strh       r7,[r5,#0x0]\n\
     b          LAB_0802f22a\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802f0f8:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_0802f0fc:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_0802f100:\n\
     .4byte       DAT_0200ece0\n\
PTR_DAT_0802f104:\n\
     .4byte       DAT_02005ce0\n\
PTR_DAT_0802f108:\n\
     .4byte       DAT_020105d4\n\
PTR_DAT_0802f10c:\n\
     .4byte       DAT_02010650\n\
PTR_DAT_0802f110:\n\
     .4byte       DAT_020106ac\n\
PTR_DAT_0802f114:\n\
     .4byte       DAT_020106a0\n\
PTR_DAT_0802f118:\n\
     .4byte       DAT_02010208\n\
PTR_DAT_0802f11c:\n\
     .4byte       DAT_020106e0\n\
PTR_DAT_0802f120:\n\
     .4byte       DAT_0201068c\n\
PTR_DAT_0802f124:\n\
     .4byte       DAT_020105f0\n\
PTR_DAT_0802f128:\n\
     .4byte       DAT_02010670\n\
DAT_0802f12c:\n\
     .4byte 0x0000FDFF\n\
PTR_DAT_0802f130:\n\
     .4byte       DAT_020106d8\n\
PTR_DAT_0802f134:\n\
     .4byte       DAT_0201066c\n\
PTR_DAT_0802f138:\n\
     .4byte       DAT_020106d0\n\
PTR_DAT_0802f13c:\n\
     .4byte       DAT_020105cc\n\
PTR_DAT_0802f140:\n\
     .4byte       DAT_02010684\n\
PTR_DAT_0802f144:\n\
     .4byte       DAT_02010678\n\
PTR_DAT_0802f148:\n\
     .4byte       DAT_020106a8\n\
PTR_DAT_0802f14c:\n\
     .4byte       DAT_02010694\n\
PTR_DAT_0802f150:\n\
     .4byte       DAT_020105d8\n\
PTR_DAT_0802f154:\n\
     .4byte       DAT_02010644\n\
PTR_DAT_0802f158:\n\
     .4byte       DAT_020106b0\n\
PTR_DAT_0802f15c:\n\
     .4byte       DAT_02010668\n\
LAB_0802f160:\n\
     mov        r0,#0x1\n\
     and        r4,r0\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802f22a\n\
     ldr        r0,PTR_DAT_0802f4c8\n\
     ldrh       r7,[r0,#0x0]\n\
     cmp        r7,#0x1\n\
     bne        LAB_0802f22a\n\
     ldr        r1,PTR_DAT_0802f4cc\n\
     mov        r9,r1\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802f22a\n\
     ldr        r4,PTR_DAT_0802f4d0\n\
     ldr        r3,PTR_DAT_0802f4d4\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r3,r2]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,PTR_DAT_0802f4d8\n\
     mov        r5,#0x0\n\
     ldrsh      r1,[r2,r5]\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802f22a\n\
     ldr        r0,PTR_DAT_0802f4dc\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r2,[r2,#0x0]\n\
     cmp        r0,r2\n\
     bne        LAB_0802f1aa\n\
     ldr        r0,PTR_DAT_0802f4e0\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     cmp        r0,r3\n\
     beq        LAB_0802f22a\n\
LAB_0802f1aa:\n\
     ldr        r0,PTR_DAT_0802f4e4\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r8,r0\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802f22a\n\
     ldr        r0,PTR_DAT_0802f4e8\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r6,PTR_DAT_0802f4ec\n\
     mov        r10,r6\n\
     ldrh       r0,[r6,#0x0]\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r5,PTR_DAT_0802f4f0\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r1,PTR_DAT_0802f4d4\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r6,PTR_DAT_0802f4d8\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r6,r3]\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r4,DAT_0802f4f4\n\
     add        r0,r4,#0x0\n\
     ldrh       r6,[r2,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r2,#0x12]\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_0802f4f8\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,r10\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x2]\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     mov        r3,r8\n\
     strh       r3,[r1,#0x0]\n\
     ldrh       r5,[r1,#0x12]\n\
     and        r4,r5\n\
     strh       r4,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f4fc\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802f500\n\
     mov        r0,#0x9\n\
     strh       r0,[r1,#0x0]\n\
     mov        r6,r9\n\
     strh       r7,[r6,#0x0]\n\
     ldr        r1,PTR_DAT_0802f504\n\
     ldr        r7,PTR_DAT_0802f4d8\n\
     ldrh       r0,[r7,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802f508\n\
     ldr        r2,PTR_DAT_0802f4d4\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802f50c\n\
     mov        r0,#0x2d\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802f22a:\n\
     ldr        r0,PTR_DAT_0802f510\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f4ec\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x10\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,PTR_DAT_0802f4f0\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x10\n\
     strh       r0,[r1,#0x4]\n\
     bl         fun_0802f9d8\n\
     ldr        r1,PTR_DAT_0802f514\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802f2c8\n\
     sub        r0,r2,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802f2c8\n\
     ldr        r0,PTR_DAT_0802f518\n\
     mov        r4,#0x0\n\
     ldrsh      r2,[r0,r4]\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldr        r5,PTR_DAT_0802f51c\n\
     add        r3,r0,#0x0\n\
     cmp        r2,r1\n\
     bne        LAB_0802f27a\n\
     ldr        r1,[r5,#0x0]\n\
     ldrh       r6,[r1,#0x0]\n\
     cmp        r6,#0x2\n\
     bne        LAB_0802f27a\n\
     ldr        r0,DAT_0802f4f4\n\
     ldrh       r7,[r1,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r1,#0x12]\n\
LAB_0802f27a:\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r1,r0,r3\n\
     mov        r3,#0x0\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r4,PTR_DAT_0802f514\n\
     mov        r0,#0x9\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     cmp        r1,#0x2\n\
     bne        LAB_0802f2a4\n\
     strh       r3,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     ldrh       r6,[r2,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r2,#0x12]\n\
     strh       r3,[r4,#0x0]\n\
LAB_0802f2a4:\n\
     ldr        r2,[r5,#0x0]\n\
     mov        r7,#0x0\n\
     ldrsh      r0,[r2,r7]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802f2c8\n\
     strh       r3,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r0,#0x0\n\
     ldrh       r0,[r2,#0x12]\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x12]\n\
     strh       r3,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0802f520\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r2,[r0,#0x12]\n\
     orr        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
LAB_0802f2c8:\n\
     ldr        r0,PTR_DAT_0802f500\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     mov        r8,r0\n\
     cmp        r1,#0x0\n\
     ble        LAB_0802f390\n\
     sub        r0,r2,#0x1\n\
     mov        r4,r8\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802f390\n\
     ldr        r0,PTR_DAT_0802f4fc\n\
     mov        r5,#0x0\n\
     ldrsh      r2,[r0,r5]\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     ldr        r6,PTR_DAT_0802f4f8\n\
     add        r3,r0,#0x0\n\
     cmp        r2,r1\n\
     bne        LAB_0802f304\n\
     ldr        r1,[r6,#0x0]\n\
     ldrh       r7,[r1,#0x0]\n\
     cmp        r7,#0x2\n\
     bne        LAB_0802f304\n\
     ldr        r0,DAT_0802f4f4\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_0802f304:\n\
     add        r5,r6,#0x0\n\
     ldr        r1,[r5,#0x0]\n\
     ldrh       r4,[r1,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r0,r4,r3\n\
     mov        r4,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r3,r8\n\
     mov        r2,#0x9\n\
     strh       r2,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802f32e\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x2\n\
     add        r0,r7,#0x0\n\
     ldrh       r7,[r1,#0x12]\n\
     orr        r0,r7\n\
     strh       r0,[r1,#0x12]\n\
     strh       r2,[r3,#0x0]\n\
LAB_0802f32e:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802f33a\n\
     bl         fun_0802f5b0\n\
LAB_0802f33a:\n\
     ldr        r1,[r6,#0x0]\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802f390\n\
     strh       r4,[r1,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r2,r3,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r5,r8\n\
     strh       r4,[r5,#0x0]\n\
     ldr        r0,PTR_DAT_0802f4e8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f4c8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f4cc\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f524\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f528\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f52c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f530\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r6,[r0,#0x12]\n\
     orr        r2,r6\n\
     strh       r2,[r0,#0x12]\n\
LAB_0802f390:\n\
     ldr        r1,PTR_DAT_0802f534\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802f3b8\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802f510\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x3\n\
     bls        LAB_0802f3b8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802f3b8:\n\
     ldr        r1,PTR_DAT_0802f538\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     add        r5,r1,#0x0\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802f3ec\n\
     mov        r4,#0x0\n\
     ldr        r2,PTR_DAT_0802f53c\n\
     mov        r3,#0x13\n\
LAB_0802f3ce:\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r7,[r0,#0x0]\n\
     cmp        r7,#0x3\n\
     bls        LAB_0802f3e0\n\
     strh       r4,[r0,#0x0]\n\
LAB_0802f3e0:\n\
     add        r2,#0x4\n\
     sub        r3,#0x1\n\
     cmp        r3,#0x0\n\
     bge        LAB_0802f3ce\n\
     mov        r0,#0x10\n\
     strh       r0,[r5,#0x0]\n\
LAB_0802f3ec:\n\
     mov        r0,#0xb4\n\
     lsl        r0,r0,#0x2\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802f40a\n\
     ldr        r4,PTR_DAT_0802f540\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_0802f544\n\
     mov        r0,#0x64\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802f40a:\n\
     ldr        r1,PTR_DAT_0802f544\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802f426\n\
     sub        r0,r2,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r1,r0,#0x10\n\
     cmp        r1,#0x0\n\
     bne        LAB_0802f426\n\
     ldr        r0,PTR_DAT_0802f540\n\
     strh       r1,[r0,#0x0]\n\
LAB_0802f426:\n\
     ldr        r0,PTR_DAT_0802f540\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802f456\n\
     mov        r0,#0xc\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802f456\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r4,PTR_DAT_0802f548\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0xd4\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x2]\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0x46\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x4]\n\
LAB_0802f456:\n\
     ldr        r0,PTR_DAT_0802f540\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802f486\n\
     mov        r0,#0xc\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802f486\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r4,PTR_DAT_0802f54c\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0xc6\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x2]\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0x68\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x4]\n\
LAB_0802f486:\n\
     ldr        r0,PTR_DAT_0802f540\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_0802f4b6\n\
     mov        r0,#0xc\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802f4b6\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r4,PTR_DAT_0802f550\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0xc\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x2]\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0x1c\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x4]\n\
LAB_0802f4b6:\n\
     ldr        r0,PTR_DAT_0802f540\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_0802f574\n\
     mov        r0,#0xc\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x1\n\
     b          LAB_0802f554\n\
PTR_DAT_0802f4c8:\n\
     .4byte       DAT_020106e0\n\
PTR_DAT_0802f4cc:\n\
     .4byte       DAT_0201068c\n\
PTR_DAT_0802f4d0:\n\
     .4byte       DAT_020105f0\n\
PTR_DAT_0802f4d4:\n\
     .4byte       DAT_02010650\n\
PTR_DAT_0802f4d8:\n\
     .4byte       DAT_020105d4\n\
PTR_DAT_0802f4dc:\n\
     .4byte       DAT_020105cc\n\
PTR_DAT_0802f4e0:\n\
     .4byte       DAT_02010684\n\
PTR_DAT_0802f4e4:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_0802f4e8:\n\
     .4byte       DAT_020105ec\n\
PTR_DAT_0802f4ec:\n\
     .4byte       DAT_020106ac\n\
PTR_DAT_0802f4f0:\n\
     .4byte       DAT_020106a0\n\
DAT_0802f4f4:\n\
     .4byte 0x0000FDFF\n\
PTR_DAT_0802f4f8:\n\
     .4byte       DAT_02010648\n\
PTR_DAT_0802f4fc:\n\
     .4byte       DAT_020106c0\n\
PTR_DAT_0802f500:\n\
     .4byte       DAT_020106d4\n\
PTR_DAT_0802f504:\n\
     .4byte       DAT_02010654\n\
PTR_DAT_0802f508:\n\
     .4byte       DAT_02010658\n\
PTR_DAT_0802f50c:\n\
     .4byte       DAT_02010678\n\
PTR_DAT_0802f510:\n\
     .4byte       DAT_02010204\n\
PTR_DAT_0802f514:\n\
     .4byte       DAT_020106d0\n\
PTR_DAT_0802f518:\n\
     .4byte       DAT_0201066c\n\
PTR_DAT_0802f51c:\n\
     .4byte       DAT_020106d8\n\
PTR_DAT_0802f520:\n\
     .4byte       DAT_02010670\n\
PTR_DAT_0802f524:\n\
     .4byte       DAT_020105d8\n\
PTR_DAT_0802f528:\n\
     .4byte       DAT_02010644\n\
PTR_DAT_0802f52c:\n\
     .4byte       DAT_020106b0\n\
PTR_DAT_0802f530:\n\
     .4byte       DAT_02010668\n\
PTR_DAT_0802f534:\n\
     .4byte       DAT_020105e0\n\
PTR_DAT_0802f538:\n\
     .4byte       DAT_020105d0\n\
PTR_DAT_0802f53c:\n\
     .4byte       DAT_02010570\n\
PTR_DAT_0802f540:\n\
     .4byte       DAT_02010664\n\
PTR_DAT_0802f544:\n\
     .4byte       DAT_02010688\n\
PTR_DAT_0802f548:\n\
     .4byte       DAT_02010674\n\
PTR_DAT_0802f54c:\n\
     .4byte       DAT_020106a4\n\
PTR_DAT_0802f550:\n\
     .4byte       DAT_020105dc\n\
LAB_0802f554:\n\
     bne        LAB_0802f574\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r4,DAT_0802f5a4\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0xd\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x2]\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r1,#0x6d\n\
     sub        r1,r1,r0\n\
     strh       r1,[r2,#0x4]\n\
LAB_0802f574:\n\
     ldr        r4,DAT_0802f5a8\n\
     ldr        r0,DAT_0802f5ac\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r0,r5]\n\
     mov        r1,#0x3c\n\
     bl         __divsi3\n\
     add        r3,r0,#0x0\n\
     lsl        r3,r3,#0x10\n\
     asr        r3,r3,#0x10\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_080032a0\n\
LAB_0802f592:\n\
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
DAT_0802f5a4:\n\
     .4byte 0x020106C8\n\
DAT_0802f5a8:\n\
     .4byte 0x085EA8CC\n\
DAT_0802f5ac:\n\
     .4byte 0x02010208\n\
    ");
}
__attribute__((naked)) void fun_0802f5b0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r0,PTR_DAT_0802f780\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r3,PTR_DAT_0802f784\n\
     mov        r10,r3\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r3,r4]\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     ldr        r5,PTR_DAT_0802f788\n\
     add        r2,r1,r5\n\
     ldr        r0,PTR_DAT_0802f78c\n\
     mov        r9,r0\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r4,PTR_DAT_0802f790\n\
     mov        r8,r4\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r4,r5]\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     ldr        r0,PTR_DAT_0802f788\n\
     add        r1,r1,r0\n\
     ldrh       r3,[r2,#0x0]\n\
     ldrh       r4,[r1,#0x0]\n\
     cmp        r3,r4\n\
     beq        LAB_0802f5f6\n\
     b          LAB_0802f7d4\n\
LAB_0802f5f6:\n\
     ldrh       r0,[r2,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802f5fe\n\
     b          LAB_0802f7d4\n\
LAB_0802f5fe:\n\
     ldrh       r7,[r1,#0x2]\n\
     cmp        r7,#0x0\n\
     beq        LAB_0802f606\n\
     b          LAB_0802f7d4\n\
LAB_0802f606:\n\
     mov        r5,r8\n\
     ldrh       r0,[r5,#0x0]\n\
     mov        r5,r10\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r0,r5\n\
     bne        LAB_0802f620\n\
     mov        r0,r9\n\
     ldrh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f780\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0802f620\n\
     b          LAB_0802f7d4\n\
LAB_0802f620:\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_0802f794\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r6,r2,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f798\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f79c\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f7a0\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r5,PTR_DAT_0802f7a4\n\
     ldr        r2,PTR_DAT_0802f7a8\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r3,DAT_0802f7ac\n\
     add        r0,r3,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     mov        r4,r8\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r4,r0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,#0x18\n\
     mov        r1,r12\n\
     strh       r0,[r1,#0x2]\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r2,r4]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     mov        r0,r9\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r0,r4]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,#0x4\n\
     mov        r1,r12\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r4,[r2,#0x0]\n\
     add        r4,#0x1\n\
     strh       r4,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r2,r1]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x12]\n\
     and        r3,r1\n\
     strh       r3,[r0,#0x12]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     mov        r0,r10\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,#0x18\n\
     mov        r1,r12\n\
     strh       r0,[r1,#0x2]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r3,[r0,#0x0]\n\
     ldr        r5,PTR_DAT_0802f780\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r5,r0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,#0x4\n\
     strh       r0,[r3,#0x4]\n\
     add        r4,#0x1\n\
     strh       r4,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802f7b0\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f7b4\n\
     strh       r7,[r0,#0x0]\n\
     mov        r2,r9\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     lsl        r1,r1,#0x2\n\
     mov        r4,r8\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r4,r5]\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     ldr        r0,PTR_DAT_0802f788\n\
     add        r1,r1,r0\n\
     mov        r4,#0x1\n\
     strh       r4,[r1,#0x2]\n\
     ldr        r1,PTR_DAT_0802f780\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     lsl        r0,r0,#0x2\n\
     mov        r3,r10\n\
     mov        r5,#0x0\n\
     ldrsh      r1,[r3,r5]\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r1,PTR_DAT_0802f788\n\
     add        r0,r0,r1\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r1,PTR_DAT_0802f7b8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x3c\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802f7bc\n\
     ldrh       r2,[r0,#0x0]\n\
     add        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f7c0\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f7c4\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f7c8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f7cc\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     cmp        r2,#0xa\n\
     bne        LAB_0802f824\n\
     bl         fun_0802f9d8\n\
     ldr        r0,PTR_DAT_0802f7d0\n\
     strh       r4,[r0,#0x0]\n\
     b          LAB_0802f824\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802f780:\n\
     .4byte       DAT_02010658\n\
PTR_DAT_0802f784:\n\
     .4byte       DAT_02010654\n\
PTR_DAT_0802f788:\n\
     .4byte       DAT_020105f0\n\
PTR_DAT_0802f78c:\n\
     .4byte       DAT_02010684\n\
PTR_DAT_0802f790:\n\
     .4byte       DAT_020105cc\n\
PTR_DAT_0802f794:\n\
     .4byte       DAT_020106d8\n\
PTR_DAT_0802f798:\n\
     .4byte       DAT_02010648\n\
PTR_DAT_0802f79c:\n\
     .4byte       DAT_02010670\n\
PTR_DAT_0802f7a0:\n\
     .4byte       DAT_020105ec\n\
PTR_DAT_0802f7a4:\n\
     .4byte       DAT_02010570\n\
PTR_DAT_0802f7a8:\n\
     .4byte       DAT_020105e4\n\
DAT_0802f7ac:\n\
     .4byte 0x0000FDFF\n\
PTR_DAT_0802f7b0:\n\
     .4byte       DAT_020106e0\n\
PTR_DAT_0802f7b4:\n\
     .4byte       DAT_0201068c\n\
PTR_DAT_0802f7b8:\n\
     .4byte       DAT_0201027c\n\
PTR_DAT_0802f7bc:\n\
     .4byte       DAT_020105e8\n\
PTR_DAT_0802f7c0:\n\
     .4byte       DAT_020105d8\n\
PTR_DAT_0802f7c4:\n\
     .4byte       DAT_02010644\n\
PTR_DAT_0802f7c8:\n\
     .4byte       DAT_020106b0\n\
PTR_DAT_0802f7cc:\n\
     .4byte       DAT_02010668\n\
PTR_DAT_0802f7d0:\n\
     .4byte       DAT_0201064c\n\
LAB_0802f7d4:\n\
     mov        r0,#0x4\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_0802f834\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,#0x2\n\
     strh       r3,[r1,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x2\n\
     add        r2,r4,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0802f838\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r3,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,PTR_DAT_0802f83c\n\
     mov        r5,#0x1\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     add        r1,r5,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f840\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f844\n\
     mov        r1,#0xf\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802f848\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802f84c\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802f824\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802f824:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_0802f834:\n\
     .4byte       DAT_020106d8\n\
PTR_DAT_0802f838:\n\
     .4byte       DAT_02010648\n\
PTR_DAT_0802f83c:\n\
     .4byte       DAT_0201066c\n\
PTR_DAT_0802f840:\n\
     .4byte       DAT_020106c0\n\
PTR_DAT_0802f844:\n\
     .4byte       DAT_020106d0\n\
PTR_DAT_0802f848:\n\
     .4byte       DAT_020106d4\n\
PTR_DAT_0802f84c:\n\
     .4byte       DAT_0201027c\n\
    ");
}
