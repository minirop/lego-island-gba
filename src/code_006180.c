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
    .word 0x02009AE8\n\
DAT_080061bc:\n\
    .word 0x02009AD0\n\
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
    .word 0x02009AE4\n\
DAT_0800620c:\n\
    .word 0x02009ADC\n\
DAT_08006210:\n\
    .word 0x08669620\n\
DAT_08006214:\n\
    .word 0x020025B4\n\
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
    .word 0x02005CE0\n\
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
    .word 0x08669620\n\
DAT_0800628c:\n\
    .word 0x02009AE4\n\
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
    .word 0x00007CC2\n\
DAT_080062e8:\n\
    .word 0x02009ADC\n\
DAT_080062ec:\n\
    .word 0x08669620\n\
DAT_080062f0:\n\
    .word 0x020025B4\n\
DAT_080062f4:\n\
    .word 0x02009AE4\n\
DAT_080062f8:\n\
    .word 0x02009AE8\n\
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
    .word 0x02009ADC\n\
DAT_0800633c:\n\
    .word 0x08067050\n\
LAB_08006340:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x20\n\
    bl          strchr\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006350\n\
    mov         r0,r10\n\
    b           LAB_0800635e\n\
LAB_08006350:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x20\n\
    bl          strchr\n\
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
    .word 0x0865FD94\n\
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
    .word 0x0865FD94\n\
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
    .word 0x0875E8A4\n\
DAT_08006424:\n\
    .word 0x0600A000\n\
DAT_08006428:\n\
    .word 0x040000D4\n\
DAT_0800642c:\n\
    .word 0x0875E8D8\n\
DAT_08006430:\n\
    .word 0x80000100\n\
DAT_08006434:\n\
    .word 0x00001F14\n\
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
    .word 0x0875E8A4\n\
DAT_08006474:\n\
    .word 0x040000D4\n\
DAT_08006478:\n\
    .word 0x0875E8D8\n\
DAT_0800647c:\n\
    .word 0x80000100\n\
DAT_08006480:\n\
    .word 0x00001F04\n\
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
    .word 0x040000D4\n\
DAT_080064e8:\n\
    .word 0x8100C000\n\
DAT_080064ec:\n\
    .word 0x81000200\n\
DAT_080064f0:\n\
    .word 0x00001F04\n\
DAT_080064f4:\n\
    .word 0x02009AE8\n\
DAT_080064f8:\n\
    .word 0x02009AD0\n\
DAT_080064fc:\n\
    .word 0x02009ADC\n\
\n\
    ");
}
int fun_08006500()
{
    fun_0800457c();
    return 0;
}
__attribute__((naked)) void fun_0800650c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r5,#0x0\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,DAT_080065ac\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_080065b0\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r5,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,#0xa0\n\
     lsl        r2,r2,#0x13\n\
     str        r2,[r1,#0x4]\n\
     ldr        r0,DAT_080065b4\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x13\n\
     ldr        r3,DAT_080065b8\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,DAT_080065bc\n\
     str        r0,[r1,#0x0]\n\
     str        r2,[r1,#0x4]\n\
     ldr        r0,DAT_080065c0\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r0,DAT_080065c4\n\
     ldr        r4,DAT_080065c8\n\
     add        r1,r4,#0x0\n\
     bl         fun_0803d070\n\
     add        r0,r4,#0x0\n\
     bl         fun_080068d4\n\
     bl         fun_08002bcc\n\
     ldr        r4,DAT_080065cc\n\
     add        r0,r4,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r0,DAT_080065d0\n\
     strh       r5,[r0,#0x0]\n\
     bl         fun_08001aa8\n\
     ldr        r5,DAT_080065d4\n\
     mov        r4,#0x0\n\
     mov        r0,#0x0\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08006598\n\
     mov        r0,#0x1\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08006598\n\
     mov        r0,#0x2\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800659a\n\
LAB_08006598:\n\
     mov        r4,#0x1\n\
LAB_0800659a:\n\
     strh       r4,[r5,#0x0]\n\
     ldr        r0,DAT_080065d4\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080065dc\n\
     ldr        r1,DAT_080065d8\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     b          LAB_080065e0\n\
DAT_080065ac:\n\
     .4byte 0x040000D4\n\
DAT_080065b0:\n\
     .4byte 0x8100C000\n\
DAT_080065b4:\n\
     .4byte 0x81000200\n\
DAT_080065b8:\n\
     .4byte 0x00001F44\n\
DAT_080065bc:\n\
     .4byte 0x08069638\n\
DAT_080065c0:\n\
     .4byte 0x80000100\n\
DAT_080065c4:\n\
     .4byte 0x08069838\n\
DAT_080065c8:\n\
     .4byte 0x0600A000\n\
DAT_080065cc:\n\
     .4byte 0x00001F54\n\
DAT_080065d0:\n\
     .4byte 0x02009AF4\n\
DAT_080065d4:\n\
     .4byte 0x02009AEC\n\
DAT_080065d8:\n\
     .4byte 0x02009AFC\n\
LAB_080065dc:\n\
     ldr        r0,DAT_08006638\n\
     strb       r1,[r0,#0x0]\n\
LAB_080065e0:\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_0800663c\n\
     bl         fun_080045f0\n\
     ldr        r4,DAT_08006640\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r5,DAT_08006644\n\
     str        r0,[r5,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_08003998\n\
     ldr        r4,DAT_08006648\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xff\n\
     lsl        r1,r1,#0x8\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_0800482c\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r3,#0x0\n\
     ldr        r1,DAT_0800664c\n\
     ldr        r0,DAT_08006650\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08006654\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     b          LAB_08006664\n\
DAT_08006638:\n\
     .4byte 0x02009AFC\n\
DAT_0800663c:\n\
     .4byte 0x08067190\n\
DAT_08006640:\n\
     .4byte 0x08067180\n\
DAT_08006644:\n\
     .4byte 0x02009B00\n\
DAT_08006648:\n\
     .4byte 0x02009AF0\n\
DAT_0800664c:\n\
     .4byte 0x08669620\n\
DAT_08006650:\n\
     .4byte 0x020025B4\n\
DAT_08006654:\n\
     .4byte 0x00012BA4\n\
LAB_08006658:\n\
     add        r1,#0x1\n\
     lsl        r0,r3,#0x10\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x9\n\
     add        r0,r0,r3\n\
     lsr        r3,r0,#0x10\n\
LAB_08006664:\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08006658\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_080066b8\n\
     ldr        r0,DAT_080066bc\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r4,DAT_080066c0\n\
     add        r1,r1,r4\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     lsl        r4,r3,#0x10\n\
     ldr        r5,DAT_080066c4\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006698\n\
LAB_08006686:\n\
     add        r1,#0x1\n\
     lsl        r0,r2,#0x10\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x9\n\
     add        r0,r0,r2\n\
     lsr        r2,r0,#0x10\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08006686\n\
LAB_08006698:\n\
     strh       r2,[r5,#0x0]\n\
     lsl        r0,r2,#0x10\n\
     cmp        r4,r0\n\
     ble        LAB_080066a2\n\
     strh       r3,[r5,#0x0]\n\
LAB_080066a2:\n\
     ldr        r1,DAT_080066c8\n\
     mov        r0,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_0803c1ec\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_080066b8:\n\
     .4byte 0x08669620\n\
DAT_080066bc:\n\
     .4byte 0x020025B4\n\
DAT_080066c0:\n\
     .4byte 0x00012C04\n\
DAT_080066c4:\n\
     .4byte 0x02009AF8\n\
DAT_080066c8:\n\
     .4byte 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_080066cc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080066e2\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006738\n\
LAB_080066e2:\n\
     ldr        r0,DAT_080066f4\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080066fc\n\
     ldr        r1,DAT_080066f8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08006732\n\
.space 1\n\
.space 1\n\
DAT_080066f4:\n\
     .4byte 0x02009AFC\n\
DAT_080066f8:\n\
     .4byte 0x020025D4\n\
LAB_080066fc:\n\
     mov        r0,#0x2\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800670e\n\
     ldr        r1,DAT_080067f4\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
LAB_0800670e:\n\
     mov        r0,#0x1\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006720\n\
     ldr        r1,DAT_080067f4\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_08006720:\n\
     mov        r0,#0x0\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006732\n\
     ldr        r1,DAT_080067f4\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
LAB_08006732:\n\
     mov        r0,#0x5\n\
     bl         fun_08001070\n\
LAB_08006738:\n\
     bl         fun_080013c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800674e\n\
     ldr        r1,DAT_080067f8\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0800674e\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
LAB_0800674e:\n\
     bl         fun_080013dc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800676c\n\
     ldr        r1,DAT_080067f8\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0800676c\n\
     ldr        r0,DAT_080067fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800676c\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_0800676c:\n\
     ldr        r6,DAT_08006800\n\
     ldr        r4,DAT_08006804\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08006808\n\
     add        r1,r6,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r5,DAT_0800680c\n\
     mov        r1,#0x18\n\
     mov        r2,#0x1e\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,DAT_080067fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080067a6\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08006810\n\
     add        r1,r6,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x18\n\
     mov        r2,#0x28\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
LAB_080067a6:\n\
     ldr        r0,DAT_08006814\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r2,DAT_08006818\n\
     ldr        r3,DAT_080067f8\n\
     ldrb       r5,[r3,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x2]\n\
     ldrb       r1,[r3,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r1,r2,#0x1\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     ldr        r0,DAT_0800681c\n\
     ldr        r4,[r0,#0x0]\n\
     ldrb       r5,[r3,#0x0]\n\
     lsl        r1,r5,#0x2\n\
     add        r0,r2,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,DAT_08006820\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r0,r5]\n\
     lsl        r0,r0,#0x3\n\
     ldrb       r1,[r1,#0x0]\n\
     add        r0,r1,r0\n\
     add        r0,#0x4\n\
     strh       r0,[r4,#0x2]\n\
     ldrb       r3,[r3,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r2,#0x3\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080067f4:\n\
     .4byte 0x02005570\n\
DAT_080067f8:\n\
     .4byte 0x02009AFC\n\
DAT_080067fc:\n\
     .4byte 0x02009AEC\n\
DAT_08006800:\n\
     .4byte 0x08669620\n\
DAT_08006804:\n\
     .4byte 0x020025B4\n\
DAT_08006808:\n\
     .4byte 0x00012BA4\n\
DAT_0800680c:\n\
     .4byte 0x0865FD94\n\
DAT_08006810:\n\
     .4byte 0x00012C04\n\
DAT_08006814:\n\
     .4byte 0x02009B00\n\
DAT_08006818:\n\
     .4byte 0x0877B970\n\
DAT_0800681c:\n\
     .4byte 0x02009AF0\n\
DAT_08006820:\n\
     .4byte 0x02009AF8\n\
    ");
}
__attribute__((naked)) void fun_08006824()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x20\n\
     bl         fun_0803c1a4\n\
     ldr        r4,DAT_0800683c\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006840\n\
     bl         fun_080066cc\n\
     b          LAB_08006890\n\
.space 1\n\
.space 1\n\
DAT_0800683c:\n\
     .4byte 0x02009AF4\n\
LAB_08006840:\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08006854\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006890\n\
LAB_08006854:\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r0,DAT_0800689c\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_080068a0\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,DAT_080068a4\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,DAT_080068a8\n\
     mov        r4,#0xc0\n\
     lsl        r4,r4,#0x13\n\
     add        r1,r4,#0x0\n\
     bl         fun_0803d070\n\
     add        r0,r4,#0x0\n\
     bl         fun_080068d4\n\
     bl         fun_08002bcc\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     ldr        r3,DAT_080068ac\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08006890:\n\
     mov        r0,#0x0\n\
     add        sp,#0x20\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0800689c:\n\
     .4byte 0x02009B00\n\
DAT_080068a0:\n\
     .4byte 0x0000FDFF\n\
DAT_080068a4:\n\
     .4byte 0x02009AF0\n\
DAT_080068a8:\n\
     .4byte 0x0807259C\n\
DAT_080068ac:\n\
     .4byte 0x00001F44\n\
    ");
}
__attribute__((naked)) void fun_080068b0()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_080068cc\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     ldr        r0,DAT_080068d0\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080068cc:\n\
     .4byte 0x02009B00\n\
DAT_080068d0:\n\
     .4byte 0x02009AF0\n\
    ");
}
__attribute__((naked)) void fun_080068d4()
{
    asm("\n\
     push       {lr}\n\
     add        r2,r0,#0x0\n\
     ldr        r1,DAT_080068f4\n\
     ldr        r0,DAT_080068f8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080068f0\n\
     ldr        r3,DAT_080068fc\n\
     add        r1,r2,r3\n\
     bl         fun_0803d070\n\
LAB_080068f0:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080068f4:\n\
     .4byte 0x0877B978\n\
DAT_080068f8:\n\
     .4byte 0x020025B4\n\
DAT_080068fc:\n\
     .4byte 0x000050A0\n\
    ");
}
