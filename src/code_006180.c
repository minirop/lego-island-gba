__attribute__((naked)) void fun_08006180()
{
    asm("\n\
    push        {lr}\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
__attribute__((naked)) void fun_0800618c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    ldr         r5,DAT_080061b8\n\
    ldrb        r3,[r5,#0x0]\n\
    add         r1,r3,#0x0\n\
    cmp         r1,#0x1\n\
    bls         LAB_0800619c\n\
    cmp         r1,#0xd\n\
    bne         LAB_08006224\n\
LAB_0800619c:\n\
    ldr         r2,DAT_080061bc\n\
    ldrh        r0,[r2,#0x0]\n\
    sub         r0,#0x1\n\
    strh        r0,[r2,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_080061ac\n\
    b           LAB_080062dc\n\
LAB_080061ac:\n\
    cmp         r1,#0xd\n\
    bne         LAB_080061c0\n\
    bl          fun_080010d8\n\
    b           LAB_080062dc\n\
\n\
.space 2\n\
\n\
DAT_080061b8:\n\
    .4byte 0x02009AE8\n\
DAT_080061bc:\n\
    .4byte 0x02009AD0\n\
LAB_080061c0:\n\
    mov         r0,#0x3c\n\
    strh        r0,[r2,#0x0]\n\
    cmp         r1,#0x1\n\
    bne         LAB_08006218\n\
    ldr         r6,DAT_08006208\n\
    mov         r0,#0x6\n\
    strh        r0,[r6,#0x0]\n\
    ldr         r4,DAT_0800620c\n\
    ldr         r1,DAT_08006210\n\
    ldr         r0,DAT_08006214\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r1,r1,r0\n\
    mov         r0,#0x92\n\
    lsl         r0,r0,#0x1\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    mov         r1,#0x1\n\
    mov         r2,#0x1d\n\
    bl          fun_080062fc\n\
    strh        r0,[r4,#0x0]\n\
    ldrb        r0,[r5,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r5,#0x0]\n\
    ldrb        r0,[r5,#0x0]\n\
    bl          fun_080063e4\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r4,r1]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080062dc\n\
    ldrh        r0,[r6,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r6,#0x0]\n\
    b           LAB_0800625a\n\
DAT_08006208:\n\
    .4byte 0x02009AE4\n\
DAT_0800620c:\n\
    .4byte 0x02009ADC\n\
DAT_08006210:\n\
    .4byte 0x08669620\n\
DAT_08006214:\n\
    .4byte 0x020025B4\n\
LAB_08006218:\n\
    add         r0,r3,#0x1\n\
    strb        r0,[r5,#0x0]\n\
    ldrb        r0,[r5,#0x0]\n\
    bl          fun_080063e4\n\
    b           LAB_080062dc\n\
LAB_08006224:\n\
    ldr         r4,DAT_08006264\n\
    ldrh        r1,[r4,#0x0]\n\
    mov         r6,#0x8\n\
    add         r0,r6,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08006236\n\
    bl          fun_080010d8\n\
LAB_08006236:\n\
    ldrh        r1,[r4,#0x0]\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800624a\n\
    ldrh        r1,[r4,#0x0]\n\
    add         r0,r6,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080062dc\n\
LAB_0800624a:\n\
    ldrb        r3,[r5,#0x0]\n\
    cmp         r3,#0xc\n\
    bne         LAB_08006268\n\
    bl          fun_0803c1a4\n\
    ldrb        r0,[r5,#0x0]\n\
    bl          fun_080063e4\n\
LAB_0800625a:\n\
    ldrb        r0,[r5,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r5,#0x0]\n\
    b           LAB_080062dc\n\
\n\
.space 2\n\
\n\
DAT_08006264:\n\
    .4byte 0x02005CE0\n\
LAB_08006268:\n\
    ldr         r2,DAT_08006288\n\
    ldr         r1,DAT_0800628c\n\
    ldrh        r3,[r1,#0x0]\n\
    lsl         r0,r3,#0x1\n\
    add         r0,r0,r3\n\
    lsl         r0,r0,#0x4\n\
    add         r0,r0,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08006290\n\
    mov         r0,#0x1e\n\
    mov         r1,#0x1e\n\
    mov         r2,#0x1e\n\
    bl          fun_0803c1ec\n\
    b           LAB_0800629a\n\
DAT_08006288:\n\
    .4byte 0x08669620\n\
DAT_0800628c:\n\
    .4byte 0x02009AE4\n\
LAB_08006290:\n\
    ldr         r2,DAT_080062e4\n\
    add         r0,r2,#0x0\n\
    add         r1,r2,#0x0\n\
    bl          fun_0803c1ec\n\
LAB_0800629a:\n\
    ldr         r4,DAT_080062e8\n\
    ldr         r2,DAT_080062ec\n\
    ldr         r0,DAT_080062f0\n\
    ldr         r1,[r0,#0x0]\n\
    lsl         r1,r1,#0x2\n\
    ldr         r6,DAT_080062f4\n\
    ldrh        r3,[r6,#0x0]\n\
    lsl         r0,r3,#0x1\n\
    add         r0,r0,r3\n\
    lsl         r0,r0,#0x4\n\
    add         r1,r1,r0\n\
    add         r2,#0x4\n\
    add         r1,r1,r2\n\
    ldr         r0,[r1,#0x0]\n\
    mov         r1,#0x1\n\
    mov         r2,#0x1d\n\
    bl          fun_080062fc\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r5,DAT_080062f8\n\
    ldrb        r0,[r5,#0x0]\n\
    bl          fun_080063e4\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r4,r1]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080062dc\n\
    ldrb        r0,[r5,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r5,#0x0]\n\
    ldrh        r0,[r6,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r6,#0x0]\n\
LAB_080062dc:\n\
    mov         r0,#0x0\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_080062e4:\n\
    .4byte 0x00007CC2\n\
DAT_080062e8:\n\
    .4byte 0x02009ADC\n\
DAT_080062ec:\n\
    .4byte 0x08669620\n\
DAT_080062f0:\n\
    .4byte 0x020025B4\n\
DAT_080062f4:\n\
    .4byte 0x02009AE4\n\
DAT_080062f8:\n\
    .4byte 0x02009AE8\n\
    ");
}
__attribute__((naked)) void fun_080062fc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x20\n\
    add         r7,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    mov         r8,r2\n\
    ldr         r0,DAT_08006338\n\
    ldrh        r6,[r0,#0x0]\n\
    add         r0,r7,#0x0\n\
    bl          strlen\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r10,r0\n\
    ldr         r1,DAT_0800633c\n\
    mov         r0,sp\n\
    bl          strcpy\n\
    mov         r0,#0x0\n\
    mov         r9,r0\n\
    add         r5,r4,#0x0\n\
    b           LAB_08006392\n\
\n\
.space 2\n\
\n\
DAT_08006338:\n\
    .4byte 0x02009ADC\n\
DAT_0800633c:\n\
    .4byte 0x08067050\n\
LAB_08006340:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x20\n\
    bl          fun_0804563c\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006350\n\
    mov         r0,r10\n\
    b           LAB_0800635e\n\
LAB_08006350:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x20\n\
    bl          fun_0804563c\n\
    sub         r0,r0,r7\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
LAB_0800635e:\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    lsl         r1,r6,#0x10\n\
    asr         r2,r1,#0x10\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r0,r5,r0\n\
    cmp         r0,r8\n\
    bgt         LAB_0800638c\n\
    mov         r1,sp\n\
    add         r1,r9\n\
    add         r0,r7,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    strb        r0,[r1,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    mov         r0,r9\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    mov         r9,r0\n\
LAB_0800638c:\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
LAB_08006392:\n\
    cmp         r5,r8\n\
    bls         LAB_080063b0\n\
    bl          fun_0803c1a4\n\
    ldr         r3,DAT_080063ac\n\
    mov         r0,sp\n\
    mov         r1,#0x8\n\
    mov         r2,#0x8c\n\
    bl          fun_0803c138\n\
    add         r0,r6,#0x0\n\
    b           LAB_080063ce\n\
\n\
.space 2\n\
\n\
DAT_080063ac:\n\
    .4byte 0x0865FD94\n\
LAB_080063b0:\n\
    lsl         r0,r6,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r4,r7,r0\n\
    ldrb        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006340\n\
    bl          fun_0803c1a4\n\
    ldr         r3,DAT_080063e0\n\
    mov         r0,sp\n\
    mov         r1,#0x8\n\
    mov         r2,#0x8c\n\
    bl          fun_0803c138\n\
    mov         r0,#0x0\n\
LAB_080063ce:\n\
    add         sp,#0x20\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080063e0:\n\
    .4byte 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_080063e4()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    mov         r0,#0x1\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08006438\n\
    ldr         r0,DAT_08006420\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,DAT_08006424\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08006428\n\
    ldr         r0,DAT_0800642c\n\
    add         r4,r4,r0\n\
    ldr         r0,[r4,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08006430\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_08006434\n\
    b           LAB_08006466\n\
DAT_08006420:\n\
    .4byte 0x0875E8A4\n\
DAT_08006424:\n\
    .4byte 0x0600A000\n\
DAT_08006428:\n\
    .4byte 0x040000D4\n\
DAT_0800642c:\n\
    .4byte 0x0875E8D8\n\
DAT_08006430:\n\
    .4byte 0x80000100\n\
DAT_08006434:\n\
    .4byte 0x00001F14\n\
LAB_08006438:\n\
    ldr         r0,DAT_08006470\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08006474\n\
    ldr         r0,DAT_08006478\n\
    add         r4,r4,r0\n\
    ldr         r0,[r4,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_0800647c\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_08006480\n\
LAB_08006466:\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08006470:\n\
    .4byte 0x0875E8A4\n\
DAT_08006474:\n\
    .4byte 0x040000D4\n\
DAT_08006478:\n\
    .4byte 0x0875E8D8\n\
DAT_0800647c:\n\
    .4byte 0x80000100\n\
DAT_08006480:\n\
    .4byte 0x00001F04\n\
    ");
}
__attribute__((naked)) void fun_08006484()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x4\n\
    mov         r0,sp\n\
    mov         r4,#0x0\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r1,DAT_080064e4\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_080064e8\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    mov         r0,sp\n\
    strh        r4,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_080064ec\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_080064f0\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    bl          fun_0803c24c\n\
    ldr         r0,DAT_080064f4\n\
    strb        r4,[r0,#0x0]\n\
    mov         r4,#0x0\n\
    mov         r0,#0x0\n\
    bl          fun_080063e4\n\
    ldr         r1,DAT_080064f8\n\
    mov         r0,#0x3c\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_080064fc\n\
    strh        r4,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080064e4:\n\
    .4byte 0x040000D4\n\
DAT_080064e8:\n\
    .4byte 0x8100C000\n\
DAT_080064ec:\n\
    .4byte 0x81000200\n\
DAT_080064f0:\n\
    .4byte 0x00001F04\n\
DAT_080064f4:\n\
    .4byte 0x02009AE8\n\
DAT_080064f8:\n\
    .4byte 0x02009AD0\n\
DAT_080064fc:\n\
    .4byte 0x02009ADC\n\
\n\
    ");
}
