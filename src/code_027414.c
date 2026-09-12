__attribute__((naked)) void fun_08027414()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     mov        r2,#0x0\n\
     ldr        r0,DAT_080274bc\n\
     mov        r9,r0\n\
LAB_08027426:\n\
     lsl        r2,r2,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r5,r0,#0x2\n\
     mov        r1,r9\n\
     add        r6,r5,r1\n\
     ldrh       r0,[r6,#0x0]\n\
     str        r2,[sp,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080274d8\n\
     mov        r0,r9\n\
     add        r0,#0x4\n\
     add        r0,r5,r0\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r3,DAT_080274c0\n\
     add        r1,r2,r3\n\
     str        r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     bge        LAB_08027452\n\
     ldr        r0,DAT_080274c4\n\
     add        r1,r2,r0\n\
LAB_08027452:\n\
     lsr        r7,r1,#0x10\n\
     mov        r0,r9\n\
     add        r0,#0x8\n\
     add        r0,r0,r5\n\
     mov        r10,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08027466\n\
     ldr        r1,DAT_080274c8\n\
     add        r0,r0,r1\n\
LAB_08027466:\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     lsl        r0,r7,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r4,r9\n\
     add        r4,#0xc\n\
     mov        r2,#0x8\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     cmp        r0,r2\n\
     bge        LAB_08027486\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     add        r0,r5,r4\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
LAB_08027486:\n\
     add        r4,r5,r4\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r7,[r0,#0x2]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r3,r8\n\
     strh       r3,[r0,#0x4]\n\
     ldrh       r1,[r6,#0x10]\n\
     mov        r2,#0x10\n\
     ldrsh      r0,[r6,r2]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080274d8\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r6,#0x10]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080274d8\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08003b00\n\
     mov        r3,r10\n\
     ldr        r1,[r3,#0x0]\n\
     mov        r0,#0xee\n\
     lsl        r0,r0,#0xf\n\
     cmp        r1,r0\n\
     bne        LAB_080274d0\n\
     ldr        r0,DAT_080274cc\n\
     b          LAB_080274d2\n\
DAT_080274bc:\n\
     .4byte 0x0200F5F0\n\
DAT_080274c0:\n\
     .4byte 0xFFFE5A20\n\
DAT_080274c4:\n\
     .4byte 0xFFFF5A1F\n\
DAT_080274c8:\n\
     .4byte 0x0000FFFF\n\
DAT_080274cc:\n\
     .4byte 0x0854FCB0\n\
LAB_080274d0:\n\
     ldr        r0,DAT_080274f8\n\
LAB_080274d2:\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0x0]\n\
LAB_080274d8:\n\
     ldr        r1,[sp,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x9\n\
     add        r0,r1,r2\n\
     lsr        r2,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x27\n\
     ble        LAB_08027426\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080274f8:\n\
     .4byte 0x0854FCE0\n\
    ");
}
