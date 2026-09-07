__attribute__((naked)) void fun_080017ac()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_080017b8()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r0,DAT_08001844\n\
    strh        r4,[r0,#0x0]\n\
    cmp         r4,#0x3f\n\
    beq         LAB_080017ec\n\
    bl          fun_080020a4\n\
    lsl         r1,r4,#0x1\n\
    ldr         r2,DAT_08001848\n\
    add         r0,r0,r2\n\
    add         r0,r0,r1\n\
    ldr         r2,DAT_0800184c\n\
    add         r1,r1,r2\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_08001850\n\
    ldr         r0,DAT_08001854\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,r0,r4\n\
    lsl         r0,r0,#0x5\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    mov         r1,#0x4\n\
    str         r1,[r0,#0x0]\n\
LAB_080017ec:\n\
    ldr         r1,DAT_08001858\n\
    ldr         r0,DAT_0800185c\n\
    str         r0,[r1,#0x0]\n\
    ldr         r2,DAT_08001860\n\
    ldr         r1,DAT_0800184c\n\
    lsl         r0,r4,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r2,DAT_08001864\n\
    ldr         r0,DAT_08001854\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,r0,r4\n\
    lsl         r0,r0,#0x5\n\
    ldr         r1,DAT_08001850\n\
    add         r0,r0,r1\n\
    str         r0,[r2,#0x0]\n\
    cmp         r4,#0xf\n\
    bgt         LAB_0800181c\n\
    cmp         r4,#0x1\n\
    blt         LAB_0800181c\n\
    mov         r0,#0x12\n\
    bl          fun_08001088\n\
LAB_0800181c:\n\
    ldr         r5,DAT_08001868\n\
    lsl         r4,r4,#0x2\n\
    add         r1,r4,r5\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800182e\n\
    mov         r1,#0x1\n\
    bl          fun_08001a14\n\
LAB_0800182e:\n\
    add         r0,r5,#0x2\n\
    add         r1,r4,r0\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800183e\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
LAB_0800183e:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08001844:\n\
    .4byte 0x02002608\n\
DAT_08001848:\n\
    .4byte 0x00000D2A\n\
DAT_0800184c:\n\
    .4byte 0x087568BC\n\
DAT_08001850:\n\
    .4byte 0x020006A0\n\
DAT_08001854:\n\
    .4byte 0x02000690\n\
DAT_08001858:\n\
    .4byte 0x0200260C\n\
DAT_0800185c:\n\
    .4byte 0x08063750\n\
DAT_08001860:\n\
    .4byte 0x02002604\n\
DAT_08001864:\n\
    .4byte 0x02002600\n\
DAT_08001868:\n\
    .4byte 0x08756942\n\
\n\
    ");
}
