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
     .word 0x0200F5F0\n\
DAT_080274c0:\n\
     .word 0xFFFE5A20\n\
DAT_080274c4:\n\
     .word 0xFFFF5A1F\n\
DAT_080274c8:\n\
     .word 0x0000FFFF\n\
DAT_080274cc:\n\
     .word 0x0854FCB0\n\
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
     .word 0x0854FCE0\n\
    ");
}
__attribute__((naked)) void fun_080274fc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x11\n\
     ldr        r6,DAT_0802752c\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08027550\n\
     ldr        r0,DAT_08027530\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r5,r0,#0x0\n\
     cmp        r3,r1\n\
     bne        LAB_08027534\n\
     bl         fun_08027878\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08027550\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     b          LAB_08027550\n\
.space 1\n\
.space 1\n\
DAT_0802752c:\n\
     .4byte 0x0200F5E0\n\
DAT_08027530:\n\
     .4byte 0x0200F5A0\n\
LAB_08027534:\n\
     cmp        r3,r4\n\
     bls        LAB_08027542\n\
     mov        r7,#0x1\n\
     mov        r0,#0xff\n\
     lsl        r0,r0,#0x18\n\
     add        r4,r3,r0\n\
     b          LAB_08027546\n\
LAB_08027542:\n\
     mov        r7,#0x0\n\
     add        r4,r3,#0x0\n\
LAB_08027546:\n\
     ldr        r1,[r5,#0x0]\n\
     ldr        r0,DAT_08027554\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r4\n\
     bcs        LAB_08027558\n\
LAB_08027550:\n\
     mov        r0,#0x0\n\
     b          LAB_080275fe\n\
DAT_08027554:\n\
     .4byte 0x0200F5A4\n\
LAB_08027558:\n\
     add        r0,r1,#0x4\n\
     str        r0,[r5,#0x0]\n\
     mov        r1,#0x0\n\
     ldr        r4,DAT_080275ac\n\
LAB_08027560:\n\
     lsl        r3,r1,#0x10\n\
     asr        r1,r3,#0x10\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08027574\n\
     lsr        r2,r3,#0x10\n\
LAB_08027574:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x27\n\
     ble        LAB_08027560\n\
     ldr        r5,DAT_080275ac\n\
     lsl        r2,r2,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r4,r0,#0x2\n\
     add        r1,r4,r5\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     add        r6,r2,#0x0\n\
     cmp        r7,#0x0\n\
     beq        LAB_080275b4\n\
     ldr        r0,DAT_080275b0\n\
     bl         fun_08003998\n\
     add        r1,r5,#0x0\n\
     add        r1,#0xc\n\
     add        r1,r4,r1\n\
     str        r0,[r1,#0x0]\n\
     mov        r5,#0x77\n\
     b          LAB_080275c4\n\
.space 1\n\
.space 1\n\
DAT_080275ac:\n\
     .4byte 0x0200F5F0\n\
DAT_080275b0:\n\
     .4byte 0x0854FCB0\n\
LAB_080275b4:\n\
     ldr        r0,DAT_08027604\n\
     bl         fun_08003998\n\
     add        r1,r5,#0x0\n\
     add        r1,#0xc\n\
     add        r1,r4,r1\n\
     str        r0,[r1,#0x0]\n\
     mov        r5,#0x86\n\
LAB_080275c4:\n\
     ldr        r4,DAT_08027608\n\
     asr        r0,r6,#0x10\n\
     lsl        r3,r0,#0x2\n\
     add        r3,r3,r0\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc\n\
     add        r0,r3,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x0\n\
     strh       r2,[r1,#0x6]\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x10]\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x2]\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x4]\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r2,[r0,#0x8]\n\
     add        r1,r4,#0x4\n\
     add        r1,r3,r1\n\
     mov        r0,#0xf8\n\
     lsl        r0,r0,#0x10\n\
     str        r0,[r1,#0x0]\n\
     add        r4,#0x8\n\
     add        r3,r3,r4\n\
     lsl        r0,r5,#0x10\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x1\n\
LAB_080275fe:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08027604:\n\
     .4byte 0x0854FCE0\n\
DAT_08027608:\n\
     .4byte 0x0200F5F0\n\
    ");
}
__attribute__((naked)) void fun_0802760c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     mov        r0,#0x86\n\
     mov        r9,r0\n\
     cmp        r6,#0x1\n\
     bne        LAB_08027624\n\
     mov        r2,#0x77\n\
     mov        r9,r2\n\
LAB_08027624:\n\
     mov        r1,#0x0\n\
     ldr        r4,DAT_080276a4\n\
     mov        r8,r4\n\
     mov        r3,#0x8\n\
     add        r3,r3,r4\n\
     mov        r12,r3\n\
LAB_08027630:\n\
     lsl        r1,r1,#0x10\n\
     asr        r5,r1,#0x10\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r5\n\
     lsl        r2,r0,#0x2\n\
     mov        r7,r8\n\
     add        r0,r2,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080276b0\n\
     add        r0,r4,#0x4\n\
     add        r0,r2,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08027652\n\
     ldr        r3,DAT_080276a8\n\
     add        r0,r0,r3\n\
LAB_08027652:\n\
     lsr        r3,r0,#0x10\n\
     mov        r7,r12\n\
     add        r0,r2,r7\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08027662\n\
     ldr        r2,DAT_080276a8\n\
     add        r0,r0,r2\n\
LAB_08027662:\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r9\n\
     bne        LAB_080276b0\n\
     lsl        r0,r3,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x67\n\
     ble        LAB_080276b0\n\
     cmp        r2,#0x88\n\
     bgt        LAB_080276b0\n\
     mov        r0,#0x78\n\
     sub        r0,r0,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_08027688\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
LAB_08027688:\n\
     lsl        r0,r4,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r1,r5,#0x0\n\
     bl         fun_080276f4\n\
     ldr        r0,DAT_080276ac\n\
     strh       r4,[r0,#0x0]\n\
     cmp        r6,#0x1\n\
     beq        LAB_080276ca\n\
     mov        r0,#0x2e\n\
     bl         fun_080016f0\n\
     b          LAB_080276e4\n\
.space 1\n\
.space 1\n\
DAT_080276a4:\n\
     .4byte 0x0200F5F0\n\
DAT_080276a8:\n\
     .4byte 0x0000FFFF\n\
DAT_080276ac:\n\
     .4byte 0x0200F5CC\n\
LAB_080276b0:\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x9\n\
     add        r0,r1,r3\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x27\n\
     ble        LAB_08027630\n\
     cmp        r6,#0x1\n\
     bne        LAB_080276d2\n\
     mov        r0,#0x4\n\
     bl         fun_080016f0\n\
     b          LAB_080276d8\n\
LAB_080276ca:\n\
     mov        r0,#0x2d\n\
     bl         fun_080016f0\n\
     b          LAB_080276e4\n\
LAB_080276d2:\n\
     mov        r0,#0x5\n\
     bl         fun_080016f0\n\
LAB_080276d8:\n\
     ldr        r1,DAT_080276f0\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080276e4\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_080276e4:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080276f0:\n\
     .4byte 0x0200F5AC\n\
    ");
}
__attribute__((naked)) void fun_080276f4()
{
    asm("\n\
     push       {lr}\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     add        r2,r1,#0x0\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0802772c\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,DAT_08027720\n\
     ldr        r1,DAT_08027724\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r3,DAT_08027728\n\
     add        r2,r2,r3\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x5\n\
     bl         fun_080277e0\n\
     b          LAB_080277ce\n\
DAT_08027720:\n\
     .4byte 0x08669620\n\
DAT_08027724:\n\
     .4byte 0x020025B4\n\
DAT_08027728:\n\
     .4byte 0x0000BD34\n\
LAB_0802772c:\n\
     cmp        r0,#0x3\n\
     bgt        LAB_08027758\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,DAT_0802774c\n\
     ldr        r1,DAT_08027750\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r3,DAT_08027754\n\
     add        r2,r2,r3\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x4\n\
     bl         fun_080277e0\n\
     b          LAB_080277ce\n\
DAT_0802774c:\n\
     .4byte 0x08669620\n\
DAT_08027750:\n\
     .4byte 0x020025B4\n\
DAT_08027754:\n\
     .4byte 0x0000BD64\n\
LAB_08027758:\n\
     cmp        r0,#0x7\n\
     bgt        LAB_08027784\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,DAT_08027778\n\
     ldr        r1,DAT_0802777c\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r3,DAT_08027780\n\
     add        r2,r2,r3\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x3\n\
     bl         fun_080277e0\n\
     b          LAB_080277ce\n\
DAT_08027778:\n\
     .4byte 0x08669620\n\
DAT_0802777c:\n\
     .4byte 0x020025B4\n\
DAT_08027780:\n\
     .4byte 0x0000BDC4\n\
LAB_08027784:\n\
     cmp        r0,#0xb\n\
     bgt        LAB_080277b0\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,DAT_080277a4\n\
     ldr        r1,DAT_080277a8\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r3,DAT_080277ac\n\
     add        r2,r2,r3\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x1\n\
     bl         fun_080277e0\n\
     b          LAB_080277ce\n\
DAT_080277a4:\n\
     .4byte 0x08669620\n\
DAT_080277a8:\n\
     .4byte 0x020025B4\n\
DAT_080277ac:\n\
     .4byte 0x0000BDF4\n\
LAB_080277b0:\n\
     cmp        r0,#0xf\n\
     bgt        LAB_080277ce\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,DAT_080277d4\n\
     ldr        r1,DAT_080277d8\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r3,DAT_080277dc\n\
     add        r2,r2,r3\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     bl         fun_080277e0\n\
LAB_080277ce:\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080277d4:\n\
     .4byte 0x08669620\n\
DAT_080277d8:\n\
     .4byte 0x020025B4\n\
DAT_080277dc:\n\
     .4byte 0x0000BE54\n\
    ");
}
__attribute__((naked)) void fun_080277e0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     ldr        r3,PTR_DAT_08027828\n\
     str        r1,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_0802782c\n\
     ldrh       r3,[r1,#0x0]\n\
     add        r2,r3,r2\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_08027830\n\
     mov        r1,#0x1e\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r5,PTR_DAT_08027834\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     lsl        r4,r0,#0x2\n\
     add        r4,r4,r0\n\
     lsl        r4,r4,#0x2\n\
     add        r1,r4,r5\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x10]\n\
     add        r0,r5,#0x0\n\
     add        r0,#0xc\n\
     add        r6,r4,r0\n\
     ldr        r0,[r6,#0x0]\n\
     bl         fun_08003b00\n\
     add        r5,#0x8\n\
     add        r4,r4,r5\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0xee\n\
     lsl        r0,r0,#0xf\n\
     cmp        r1,r0\n\
     bne        LAB_0802783c\n\
     ldr        r0,DAT_08027838\n\
     b          LAB_0802783e\n\
PTR_DAT_08027828:\n\
     .4byte       DAT_0200f5c4\n\
PTR_DAT_0802782c:\n\
     .4byte       DAT_0200f5ac\n\
PTR_DAT_08027830:\n\
     .4byte       DAT_0200f5b4\n\
PTR_DAT_08027834:\n\
     .4byte       DAT_0200f5f0\n\
DAT_08027838:\n\
     .4byte 0x0854FCC0\n\
LAB_0802783c:\n\
     ldr        r0,DAT_0802784c\n\
LAB_0802783e:\n\
     bl         fun_08003998\n\
     str        r0,[r6,#0x0]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802784c:\n\
     .4byte 0x0854FCF0\n\
    ");
}
__attribute__((naked)) void fun_08027850()
{
    asm("\n\
     mov        r0,#0x0\n\
     ldr        r3,DAT_08027874\n\
     mov        r2,#0x0\n\
LAB_08027856:\n\
     lsl        r1,r0,#0x10\n\
     asr        r1,r1,#0x10\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r3\n\
     strh       r2,[r0,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r0,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     cmp        r1,#0x27\n\
     ble        LAB_08027856\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08027874:\n\
     .4byte 0x0200F5F0\n\
    ");
}
__attribute__((naked)) void fun_08027878()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_080278ac\n\
     add        r4,r3,#0x0\n\
LAB_08027880:\n\
     lsl        r2,r2,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r1,r0,#0x2\n\
     add        r0,r1,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080278b4\n\
     add        r0,r3,#0x4\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_080278a0\n\
     ldr        r1,DAT_080278b0\n\
     add        r0,r0,r1\n\
LAB_080278a0:\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x68\n\
     ble        LAB_080278b4\n\
     mov        r0,#0x0\n\
     b          LAB_080278c4\n\
.space 1\n\
.space 1\n\
DAT_080278ac:\n\
     .4byte 0x0200F5F0\n\
DAT_080278b0:\n\
     .4byte 0x0000FFFF\n\
LAB_080278b4:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     add        r0,r2,r1\n\
     lsr        r2,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x27\n\
     ble        LAB_08027880\n\
     mov        r0,#0x1\n\
LAB_080278c4:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080278cc()
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
     ldr        r3,DAT_080278fc\n\
     add        r0,r5,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_0803c138\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080278fc:\n\
     .4byte 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_08027900()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803c1a4\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0802790c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,PTR_DAT_08027948\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802791a\n\
     bl         fun_08003b00\n\
LAB_0802791a:\n\
     ldr        r0,PTR_DAT_0802794c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08027926\n\
     bl         fun_08003b00\n\
LAB_08027926:\n\
     ldr        r0,PTR_DAT_08027950\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08027932\n\
     bl         fun_08003b00\n\
LAB_08027932:\n\
     ldr        r0,PTR_DAT_08027954\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802793e\n\
     bl         fun_08003b00\n\
LAB_0802793e:\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
PTR_DAT_08027948:\n\
     .4byte       DAT_0200f5bc\n\
PTR_DAT_0802794c:\n\
     .4byte       DAT_0200f5d0\n\
PTR_DAT_08027950:\n\
     .4byte       DAT_0200f5c8\n\
PTR_DAT_08027954:\n\
     .4byte       DAT_0200f5d8\n\
    ");
}
__attribute__((naked)) void fun_08027958()
{
    asm("\n\
     ldr        r1,PTR_DAT_08027990\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08027972\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_08027972\n\
     ldr        r0,PTR_DAT_08027994\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08027972:\n\
     ldr        r1,PTR_DAT_08027998\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802798c\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     cmp        r1,#0x0\n\
     bne        LAB_0802798c\n\
     ldr        r0,PTR_DAT_0802799c\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
LAB_0802798c:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
PTR_DAT_08027990:\n\
     .4byte       DAT_0200f910\n\
PTR_DAT_08027994:\n\
     .4byte       DAT_0200f5bc\n\
PTR_DAT_08027998:\n\
     .4byte       DAT_0200f5b8\n\
PTR_DAT_0802799c:\n\
     .4byte       DAT_0200f5d0\n\
    ");
}
