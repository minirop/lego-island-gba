__attribute__((naked)) void fun_08001894()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    bl          fun_080020a4\n\
    add         r1,r0,#0x0\n\
    lsl         r4,r4,#0x1\n\
    ldr         r0,DAT_080018b8\n\
    add         r1,r1,r0\n\
    add         r1,r1,r4\n\
    ldrh        r2,[r1,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
    orr         r0,r2\n\
    lsr         r0,r0,#0x1f\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_080018b8:\n\
    .4byte 0x00000D2A\n\
    ");
}
__attribute__((naked)) void fun_080018bc()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r3,#0x0\n\
    ldr         r2,DAT_080018dc\n\
    ldr         r1,DAT_080018e0\n\
    ldrh        r1,[r1,#0x0]\n\
    add         r0,r1,r0\n\
    lsl         r0,r0,#0x5\n\
    add         r2,#0x8\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x5\n\
    bne         LAB_080018d8\n\
    mov         r3,#0x1\n\
LAB_080018d8:\n\
    add         r0,r3,#0x0\n\
    bx          lr\n\
DAT_080018dc:\n\
    .4byte 0x020006A0\n\
DAT_080018e0:\n\
    .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_080018e4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    bl          fun_080020a4\n\
    lsl         r1,r4,#0x1\n\
    ldr         r2,DAT_0800192c\n\
    add         r0,r0,r2\n\
    add         r0,r0,r1\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_08001930\n\
    ldr         r0,DAT_08001934\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,r0,r4\n\
    lsl         r0,r0,#0x5\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    mov         r1,#0x5\n\
    str         r1,[r0,#0x0]\n\
    mov         r0,#0x7\n\
    bl          fun_080016f0\n\
    ldr         r0,DAT_08001938\n\
    lsl         r4,r4,#0x2\n\
    add         r4,r4,r0\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001926\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
LAB_08001926:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800192c:\n\
    .4byte 0x00000D2A\n\
DAT_08001930:\n\
    .4byte 0x020006A0\n\
DAT_08001934:\n\
    .4byte 0x02000690\n\
DAT_08001938:\n\
    .4byte 0x08756942\n\
    ");
}
__attribute__((naked)) void fun_0800193c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x2c\n\
    ldr         r1,DAT_08001978\n\
    mov         r0,sp\n\
    mov         r2,#0x2c\n\
    bl          fun_08044f7c\n\
    mov         r0,#0x8\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800197c\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080019a4\n\
    ldr         r4,DAT_08001980\n\
    mov         r0,#0x64\n\
    bl          fun_08002c04\n\
    mov         r1,#0x16\n\
    bl          fun_08043718\n\
    lsl         r0,r0,#0x1\n\
    add         r0,sp\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r4,#0x0]\n\
    b           LAB_08001992\n\
\n\
.space 2\n\
\n\
DAT_08001978:\n\
    .4byte 0x08049760\n\
DAT_0800197c:\n\
    .4byte 0x00000DF8\n\
DAT_08001980:\n\
    .4byte 0x020025E8\n\
LAB_08001984:\n\
    ldr         r2,DAT_0800199c\n\
    ldr         r1,DAT_080019a0\n\
    ldrh        r6,[r6,#0x0]\n\
    lsl         r0,r6,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r2,#0x0]\n\
LAB_08001992:\n\
    mov         r0,#0x22\n\
    bl          fun_08001088\n\
    b           LAB_08001a00\n\
\n\
.space 2\n\
\n\
DAT_0800199c:\n\
    .4byte 0x020025E8\n\
DAT_080019a0:\n\
    .4byte 0x08756A64\n\
LAB_080019a4:\n\
    ldr         r0,DAT_08001a08\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    mov         r7,#0x0\n\
    add         r6,r0,#0x0\n\
LAB_080019b0:\n\
    ldrh        r0,[r6,#0x0]\n\
    lsl         r5,r0,#0x10\n\
    lsr         r1,r5,#0x10\n\
    cmp         r1,#0x0\n\
    beq         LAB_080019dc\n\
    lsr         r5,r5,#0x13\n\
    mov         r0,#0x7\n\
    and         r0,r1\n\
    mov         r4,#0x80\n\
    lsl         r4,r4,#0x11\n\
    lsl         r4,r0\n\
    lsr         r4,r4,#0x18\n\
    bl          fun_080020a4\n\
    mov         r1,#0xe4\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    and         r4,r0\n\
    cmp         r4,#0x0\n\
    bne         LAB_08001984\n\
LAB_080019dc:\n\
    ldrh        r0,[r6,#0x0]\n\
    add         r0,#0x1\n\
    mov         r1,#0x46\n\
    bl          fun_080435d0\n\
    strh        r0,[r6,#0x0]\n\
    add         r0,r7,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r7,r0,#0x10\n\
    cmp         r7,#0x45\n\
    bls         LAB_080019b0\n\
    ldr         r0,DAT_08001a0c\n\
    ldr         r1,DAT_08001a10\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x22\n\
    bl          fun_08001088\n\
LAB_08001a00:\n\
    add         sp,#0x2c\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08001a08:\n\
    .4byte 0x02002610\n\
DAT_08001a0c:\n\
    .4byte 0x020025E8\n\
DAT_08001a10:\n\
    .4byte 0x08756A64\n\
    ");
}
__attribute__((naked)) void fun_08001a14()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r5,r0,#0x13\n\
    mov         r2,#0xe0\n\
    lsl         r2,r2,#0xb\n\
    and         r2,r0\n\
    lsr         r2,r2,#0x10\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x11\n\
    lsl         r0,r2\n\
    lsr         r4,r0,#0x18\n\
    cmp         r1,#0x0\n\
    beq         LAB_08001a44\n\
    bl          fun_080020a4\n\
    mov         r1,#0xe4\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    add         r0,r0,r5\n\
    add         r1,r4,#0x0\n\
    ldrb        r2,[r0,#0x0]\n\
    orr         r1,r2\n\
    b           LAB_08001a54\n\
LAB_08001a44:\n\
    bl          fun_080020a4\n\
    mov         r1,#0xe4\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    add         r0,r0,r5\n\
    ldrb        r1,[r0,#0x0]\n\
    bic         r1,r4\n\
LAB_08001a54:\n\
    strb        r1,[r0,#0x0]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
