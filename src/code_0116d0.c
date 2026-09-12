__attribute__((naked)) void fun_080116d0()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080116ec\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0xa\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080116f4\n\
    ldr         r1,DAT_080116f0\n\
    b           LAB_080116f6\n\
DAT_080116ec:\n\
    .4byte 0x00000E84\n\
DAT_080116f0:\n\
    .4byte 0x00000502\n\
LAB_080116f4:\n\
    ldr         r1,DAT_0801170c\n\
LAB_080116f6:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08011706\n\
    mov         r0,#0x3\n\
    strb        r0,[r4,#0x18]\n\
LAB_08011706:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0801170c:\n\
    .4byte 0x0000031D\n\
    ");
}
__attribute__((naked)) void fun_08011710()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r1,DAT_08011740\n\
    ldr         r2,DAT_08011744\n\
    ldrh        r0,[r2,#0x4]\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08011748\n\
    ldrh        r0,[r2,#0x6]\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0801174c\n\
    ldr         r2,DAT_08011750\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x22\n\
    bl          fun_08001088\n\
    ldr         r1,DAT_08011754\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x2\n\
    strb        r0,[r4,#0x18]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08011740:\n\
    .4byte 0x0200E030\n\
DAT_08011744:\n\
    .4byte 0x020006A0\n\
DAT_08011748:\n\
    .4byte 0x0200DD70\n\
DAT_0801174c:\n\
    .4byte 0x020025E8\n\
DAT_08011750:\n\
    .4byte 0x00000285\n\
DAT_08011754:\n\
    .4byte 0x02002520\n\
    mov         r1,#0x2\n\
    strb        r1,[r0,#0x18]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08011760()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x16\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08011780\n\
    ldr         r1,DAT_0801177c\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
    b           LAB_08011788\n\
\n\
.space 2\n\
\n\
DAT_0801177c:\n\
    .4byte 0x00000305\n\
LAB_08011780:\n\
    ldr         r1,DAT_08011790\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
LAB_08011788:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08011790:\n\
    .4byte 0x000002FF\n\
\n\
    ");
}
