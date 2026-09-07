__attribute__((naked)) void fun_08002c04()
{
    asm("\n\
    push        {r4,lr}\n\
LAB_08002c06:\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    beq         LAB_08002c28\n\
    mov         r2,#0x25\n\
    ldr         r1,DAT_08002c24\n\
    ldr         r0,[r1,#0x0]\n\
    mul         r0,r2\n\
    add         r0,#0x9\n\
    str         r0,[r1,#0x0]\n\
    add         r1,r4,#0x1\n\
    bl          fun_08043718\n\
    cmp         r0,r4\n\
    bne         LAB_08002c2a\n\
    b           LAB_08002c06\n\
DAT_08002c24:\n\
    .4byte 0x02005CD4\n\
LAB_08002c28:\n\
    mov         r0,#0x0\n\
LAB_08002c2a:\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08002c30()
{
    asm("\n\
    ldr         r0,DAT_08002c3c\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08002c40\n\
    strh        r1,[r0,#0x0]\n\
    bx          lr\n\
DAT_08002c3c:\n\
    .4byte 0x02005830\n\
DAT_08002c40:\n\
    .4byte 0x02005CE0\n\
    ");
}
__attribute__((naked)) void fun_08002c44()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r0,DAT_08002c74\n\
    ldrh        r1,[r0,#0x0]\n\
    mvn         r1,r1\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    ldr         r3,DAT_08002c78\n\
    ldr         r4,DAT_08002c7c\n\
    ldrh        r2,[r4,#0x0]\n\
    add         r0,r1,#0x0\n\
    bic         r0,r2\n\
    strh        r0,[r3,#0x0]\n\
    strh        r1,[r4,#0x0]\n\
    ldrh        r2,[r3,#0x0]\n\
    ldr         r1,DAT_08002c80\n\
    add         r0,r1,#0x0\n\
    and         r0,r2\n\
    strh        r0,[r3,#0x0]\n\
    ldrh        r0,[r4,#0x0]\n\
    and         r1,r0\n\
    strh        r1,[r4,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002c74:\n\
    .4byte 0x04000130\n\
DAT_08002c78:\n\
    .4byte 0x02005CE0\n\
DAT_08002c7c:\n\
    .4byte 0x02005830\n\
DAT_08002c80:\n\
    .4byte 0x000003FF\n\
    ");
}
__attribute__((naked)) void fun_08002c84()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    mul         r0,r1\n\
    add         r1,r0,#0x0\n\
    cmp         r0,#0x0\n\
    bge         LAB_08002c96\n\
    add         r1,#0xff\n\
LAB_08002c96:\n\
    lsl         r0,r1,#0x8\n\
    asr         r0,r0,#0x10\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08002c9c()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x8\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    bl          fun_08043504\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08002cb4()
{
    asm("\n\
    push        {lr}\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x9\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    bl          fun_08043504\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08002ccc()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    add         r1,r0,#0x0\n\
    cmp         r0,#0x1\n\
    beq         LAB_08002ce6\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08002ce0\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002cf8\n\
    b           LAB_08002d10\n\
LAB_08002ce0:\n\
    cmp         r1,#0x2\n\
    beq         LAB_08002d04\n\
    b           LAB_08002d10\n\
LAB_08002ce6:\n\
    ldr         r0,DAT_08002cf4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x4\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_08002d10\n\
\n\
.space 2\n\
\n\
DAT_08002cf4:\n\
    .4byte 0x04000050\n\
LAB_08002cf8:\n\
    ldr         r1,DAT_08002d00\n\
    mov         r0,#0xff\n\
    b           LAB_08002d08\n\
\n\
.space 2\n\
\n\
DAT_08002d00:\n\
    .4byte 0x04000050\n\
LAB_08002d04:\n\
    ldr         r1,DAT_08002d18\n\
    mov         r0,#0xbf\n\
LAB_08002d08:\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,#0x4\n\
    mov         r0,#0x10\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002d10:\n\
    ldr         r1,DAT_08002d1c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    bx          lr\n\
DAT_08002d18:\n\
    .4byte 0x04000050\n\
DAT_08002d1c:\n\
    .4byte 0x02005770\n\
\n\
    ");
}
