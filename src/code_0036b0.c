__attribute__((naked)) void fun_080036b0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_080036d0\n\
    cmp         r0,#0x1\n\
    beq         LAB_080036e0\n\
    ldr         r4,DAT_080036cc\n\
    b           LAB_080036e8\n\
\n\
.space 2\n\
\n\
DAT_080036cc:\n\
    .word 0x02005CF0\n\
LAB_080036d0:\n\
    ldr         r1,DAT_080036dc\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    b           LAB_080036e4\n\
\n\
.space 2\n\
\n\
DAT_080036dc:\n\
    .word 0x02005CF0\n\
LAB_080036e0:\n\
    ldr         r1,DAT_080037c4\n\
    mov         r0,#0x0\n\
LAB_080036e4:\n\
    strh        r0,[r1,#0x0]\n\
    add         r4,r1,#0x0\n\
LAB_080036e8:\n\
    ldr         r0,DAT_080037c8\n\
    mov         r3,#0x0\n\
    strh        r3,[r0,#0x0]\n\
    ldr         r2,DAT_080037cc\n\
    ldr         r1,DAT_080037d0\n\
    ldrh        r0,[r4,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r0,DAT_080037d4\n\
    strh        r3,[r0,#0x0]\n\
    mov         r2,#0x0\n\
    ldr         r5,DAT_080037d8\n\
    ldr         r7,DAT_080037dc\n\
    mov         r9,r7\n\
    ldr         r0,DAT_080037e0\n\
    mov         r8,r0\n\
    ldr         r1,DAT_080037e4\n\
    mov         r12,r1\n\
    ldr         r7,DAT_080037e8\n\
    mov         r10,r7\n\
    ldr         r4,DAT_080037ec\n\
    ldr         r3,DAT_080037f0\n\
LAB_08003714:\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r4\n\
    lsl         r1,r2,#0x3\n\
    add         r1,r1,r2\n\
    lsl         r1,r1,#0x2\n\
    add         r1,r1,r3\n\
    str         r1,[r0,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x7f\n\
    bls         LAB_08003714\n\
    mov         r0,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    mov         r2,#0x0\n\
    ldr         r1,DAT_080037f4\n\
LAB_08003734:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r1\n\
    strh        r2,[r0,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x1f\n\
    bls         LAB_08003734\n\
    mov         r5,#0x0\n\
    mov         r1,r9\n\
    mov         r2,#0x0\n\
    mov         r4,#0x0\n\
LAB_0800374c:\n\
    add         r3,r1,#0x0\n\
    strh        r4,[r1,#0x0]\n\
    strh        r4,[r1,#0x2]\n\
    add         r1,#0x20\n\
    str         r5,[r3,#0x1c]\n\
    add         r5,r1,#0x0\n\
    str         r1,[r3,#0x18]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x7f\n\
    bls         LAB_0800374c\n\
    mov         r0,#0x0\n\
    str         r0,[r3,#0x18]\n\
    mov         r2,#0x0\n\
    ldr         r6,DAT_080037f8\n\
    mov         r3,#0x0\n\
    ldr         r5,DAT_080037fc\n\
    ldr         r4,DAT_08003800\n\
LAB_08003772:\n\
    lsl         r1,r2,#0x2\n\
    add         r0,r1,r6\n\
    str         r3,[r0,#0x0]\n\
    add         r0,r1,r5\n\
    str         r3,[r0,#0x0]\n\
    add         r0,r1,r4\n\
    str         r3,[r0,#0x0]\n\
    mov         r7,r8\n\
    add         r0,r1,r7\n\
    str         r3,[r0,#0x0]\n\
    mov         r7,r12\n\
    add         r0,r1,r7\n\
    str         r3,[r0,#0x0]\n\
    ldr         r0,DAT_08003804\n\
    add         r1,r1,r0\n\
    str         r3,[r1,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x17\n\
    bls         LAB_08003772\n\
    mov         r1,r9\n\
    mov         r2,r10\n\
    str         r1,[r2,#0x0]\n\
    mov         r1,#0x0\n\
    ldr         r7,DAT_08003808\n\
    strh        r1,[r7,#0x0]\n\
    mov         r0,#0x1\n\
    ldr         r2,DAT_0800380c\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r7,DAT_08003810\n\
    strh        r1,[r7,#0x0]\n\
    ldr         r0,DAT_08003814\n\
    strh        r1,[r0,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080037c4:\n\
    .word 0x02005CF0\n\
DAT_080037c8:\n\
    .word 0x02006D50\n\
DAT_080037cc:\n\
    .word 0x02005CF4\n\
DAT_080037d0:\n\
    .word 0x02005D04\n\
DAT_080037d4:\n\
    .word 0x02005CF8\n\
DAT_080037d8:\n\
    .word 0x02005CFC\n\
DAT_080037dc:\n\
    .word 0x02005D10\n\
DAT_080037e0:\n\
    .word 0x02000148\n\
DAT_080037e4:\n\
    .word 0x020001B0\n\
DAT_080037e8:\n\
    .word 0x020001A8\n\
DAT_080037ec:\n\
    .word 0x03001800\n\
DAT_080037f0:\n\
    .word 0x02006D60\n\
DAT_080037f4:\n\
    .word 0x02006D10\n\
DAT_080037f8:\n\
    .word 0x02000028\n\
DAT_080037fc:\n\
    .word 0x02000088\n\
DAT_08003800:\n\
    .word 0x020000E8\n\
DAT_08003804:\n\
    .word 0x02000210\n\
DAT_08003808:\n\
    .word 0x02007F60\n\
DAT_0800380c:\n\
    .word 0x02000270\n\
DAT_08003810:\n\
    .word 0x02005D00\n\
DAT_08003814:\n\
    .word 0x02000272\n\
    ");
}
__attribute__((naked)) void fun_08003818()
{
    asm("\n\
    push       {r4,r5,r6,lr}\n\
    bl         fun_0800467c\n\
    lsl        r0,r0,#0x10\n\
    lsr        r6,r0,#0x10\n\
    mov        r5,#0x0\n\
    cmp        r0,#0x0\n\
    ble        LAB_08003862\n\
LAB_08003828:\n\
    lsl        r4,r5,#0x10\n\
    lsr        r0,r4,#0x10\n\
    bl         fun_08004694\n\
    add        r1,r0,#0x0\n\
    mov        r2,#0x80\n\
    lsl        r2,r2,#0x3\n\
    add        r0,r2,#0x0\n\
    ldrh       r2,[r1,#0x12]\n\
    and        r0,r2\n\
    cmp        r0,#0x0\n\
    beq        LAB_08003852\n\
    add        r0,r1,#0x0\n\
    bl         fun_08003b00\n\
    lsl        r0,r6,#0x10\n\
    ldr        r1,DAT_080038ac\n\
    add        r0,r0,r1\n\
    lsr        r6,r0,#0x10\n\
    add        r0,r4,r1\n\
    lsr        r5,r0,#0x10\n\
LAB_08003852:\n\
    lsl        r1,r5,#0x10\n\
    mov        r2,#0x80\n\
    lsl        r2,r2,#0x9\n\
    add        r1,r1,r2\n\
    lsr        r5,r1,#0x10\n\
    lsl        r0,r6,#0x10\n\
    cmp        r1,r0\n\
    blt        LAB_08003828\n\
LAB_08003862:\n\
    bl         fun_0800467c\n\
    mov        r5,#0x0\n\
    lsl        r0,r0,#0x10\n\
    asr        r0,r0,#0x10\n\
    cmp        r5,r0\n\
    bge        LAB_0800388c\n\
    add        r6,r0,#0x0\n\
LAB_08003872:\n\
    lsl        r4,r5,#0x10\n\
    lsr        r0,r4,#0x10\n\
    bl         fun_08004694\n\
    add        r1,r0,#0x0\n\
    ldr        r0,DAT_080038b0\n\
    strh       r0,[r1,#0x18]\n\
    add        r0,#0x1\n\
    add        r4,r4,r0\n\
    lsr        r5,r4,#0x10\n\
    asr        r4,r4,#0x10\n\
    cmp        r4,r6\n\
    blt        LAB_08003872\n\
LAB_0800388c:\n\
    ldr        r1,PTR_DAT_080038b4\n\
    ldr        r0,PTR_DAT_080038b8\n\
    ldrh       r0,[r0,#0x0]\n\
    strh       r0,[r1,#0x0]\n\
    ldr        r1,PTR_DAT_080038bc\n\
    ldr        r0,PTR_DAT_080038c0\n\
    ldrh       r0,[r0,#0x0]\n\
    strh       r0,[r1,#0x0]\n\
    ldr        r1,PTR_DAT_080038c4\n\
    mov        r0,#0x0\n\
    strh       r0,[r1,#0x0]\n\
    bl         fun_08003bf8\n\
    pop        {r4,r5,r6}\n\
    pop        {r0}\n\
    bx         r0\n\
DAT_080038ac:\n\
    .word 0xFFFF0000\n\
DAT_080038b0:\n\
    .word 0x0000FFFF\n\
PTR_DAT_080038b4:\n\
    .word DAT_02005cf4\n\
PTR_DAT_080038b8:\n\
    .word DAT_02007f64\n\
PTR_DAT_080038bc:\n\
    .word DAT_02005d04\n\
PTR_DAT_080038c0:\n\
    .word DAT_02005d08\n\
PTR_DAT_080038c4:\n\
    .word DAT_02005d00\n\
    ");
}
