__attribute__((naked)) void fun_08002d34()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    mov         r9,r5\n\
    lsl         r1,r1,#0x10\n\
    lsr         r7,r1,#0x10\n\
    mov         r8,r7\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    ldr         r0,DAT_08002d84\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r0,DAT_08002d88\n\
    mov         r6,#0x0\n\
    strh        r6,[r0,#0x0]\n\
    ldr         r1,DAT_08002d8c\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r4,DAT_08002d90\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x8\n\
    add         r1,r2,#0x0\n\
    bl          fun_08043504\n\
    strh        r0,[r4,#0x0]\n\
    cmp         r5,#0x1\n\
    bne         LAB_08002da0\n\
    ldr         r0,DAT_08002d94\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_08002d98\n\
    strh        r6,[r0,#0x0]\n\
    cmp         r7,#0x0\n\
    bne         LAB_08002d80\n\
    ldr         r1,DAT_08002d9c\n\
    mov         r0,#0xff\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002d80:\n\
    mov         r0,r8\n\
    b           LAB_08002db6\n\
DAT_08002d84:\n\
    .4byte 0x02005844\n\
DAT_08002d88:\n\
    .4byte 0x02005828\n\
DAT_08002d8c:\n\
    .4byte 0x02005770\n\
DAT_08002d90:\n\
    .4byte 0x020057E0\n\
DAT_08002d94:\n\
    .4byte 0x02005CE4\n\
DAT_08002d98:\n\
    .4byte 0x04000054\n\
DAT_08002d9c:\n\
    .4byte 0x04000050\n\
LAB_08002da0:\n\
    ldr         r0,DAT_08002dcc\n\
    strh        r6,[r0,#0x0]\n\
    ldr         r1,DAT_08002dd0\n\
    mov         r0,#0x10\n\
    strh        r0,[r1,#0x0]\n\
    cmp         r5,#0x0\n\
    bne         LAB_08002db4\n\
    sub         r1,#0x4\n\
    mov         r0,#0xff\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002db4:\n\
    mov         r0,r9\n\
LAB_08002db6:\n\
    cmp         r0,#0x2\n\
    bne         LAB_08002dc0\n\
    ldr         r1,DAT_08002dd4\n\
    mov         r0,#0xbf\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002dc0:\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002dcc:\n\
    .4byte 0x02005CE4\n\
DAT_08002dd0:\n\
    .4byte 0x04000054\n\
DAT_08002dd4:\n\
    .4byte 0x04000050\n\
    ");
}
__attribute__((naked)) void fun_08002dd8()
{
    asm("\n\
    ldr         r0,DAT_08002de0\n\
    ldrh        r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08002de0:\n\
    .4byte 0x02005770\n\
    ");
}
__attribute__((naked)) void fun_08002de4()
{
    asm("\n\
    mov         r1,#0x0\n\
    ldr         r0,DAT_08002df4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08002df0\n\
    mov         r1,#0x1\n\
LAB_08002df0:\n\
    add         r0,r1,#0x0\n\
    bx          lr\n\
DAT_08002df4:\n\
    .4byte 0x02005770\n\
    ");
}
__attribute__((naked)) void fun_08002df8()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r5,DAT_08002e48\n\
    ldrh        r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002e42\n\
    ldr         r0,DAT_08002e4c\n\
    ldr         r1,DAT_08002e50\n\
    ldrh        r3,[r1,#0x0]\n\
    ldrh        r0,[r0,#0x0]\n\
    mul         r0,r3\n\
    lsl         r0,r0,#0x5\n\
    lsr         r2,r0,#0x10\n\
    ldr         r0,DAT_08002e54\n\
    ldrh        r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    bne         LAB_08002e20\n\
    mov         r0,#0x10\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
LAB_08002e20:\n\
    ldr         r0,DAT_08002e58\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r3,r0\n\
    bne         LAB_08002e38\n\
    mov         r0,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    mov         r2,#0x10\n\
    cmp         r4,#0x0\n\
    bne         LAB_08002e38\n\
    mov         r2,#0x0\n\
    ldr         r0,DAT_08002e5c\n\
    strh        r2,[r0,#0x0]\n\
LAB_08002e38:\n\
    ldr         r0,DAT_08002e60\n\
    strh        r2,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_08002e42:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002e48:\n\
    .4byte 0x02005770\n\
DAT_08002e4c:\n\
    .4byte 0x020057E0\n\
DAT_08002e50:\n\
    .4byte 0x02005828\n\
DAT_08002e54:\n\
    .4byte 0x02005CE4\n\
DAT_08002e58:\n\
    .4byte 0x02005844\n\
DAT_08002e5c:\n\
    .4byte 0x04000050\n\
DAT_08002e60:\n\
    .4byte 0x04000054\n\
    ");
}
__attribute__((naked)) void fun_08002e64()
{
    asm("\n\
    ldr         r0,DAT_08002e7c\n\
    mov         r2,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r0,DAT_08002e80\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08002e84\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08002e88\n\
    strh        r2,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08002e7c:\n\
    .4byte 0x02005840\n\
DAT_08002e80:\n\
    .4byte 0x0200583C\n\
DAT_08002e84:\n\
    .4byte 0x02005CD0\n\
DAT_08002e88:\n\
    .4byte 0x02005CDC\n\
    ");
}
__attribute__((naked)) void fun_08002e8c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r2,r0,#0x0\n\
    ldr         r0,DAT_08002eb8\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08002ebc\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08002ec0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r4,DAT_08002ec4\n\
    lsl         r2,r2,#0x10\n\
    asr         r2,r2,#0x10\n\
    mov         r0,#0xb8\n\
    lsl         r0,r0,#0x5\n\
    add         r1,r2,#0x0\n\
    bl          fun_08043504\n\
    strh        r0,[r4,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08002eb8:\n\
    .4byte 0x02005838\n\
DAT_08002ebc:\n\
    .4byte 0x02005CDC\n\
DAT_08002ec0:\n\
    .4byte 0x0200583C\n\
DAT_08002ec4:\n\
    .4byte 0x02005840\n\
    ");
}
__attribute__((naked)) void fun_08002ec8()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r1,r0,#0x0\n\
    ldr         r2,DAT_08002ef0\n\
    mov         r3,#0xb8\n\
    lsl         r3,r3,#0x5\n\
    add         r0,r3,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r2,DAT_08002ef4\n\
    mov         r0,#0x0\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r4,DAT_08002ef8\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    ldr         r0,DAT_08002efc\n\
    bl          fun_08043504\n\
    strh        r0,[r4,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08002ef0:\n\
    .4byte 0x02005CDC\n\
DAT_08002ef4:\n\
    .4byte 0x02005CD0\n\
DAT_08002ef8:\n\
    .4byte 0x02005840\n\
DAT_08002efc:\n\
    .4byte 0xFFFFE900\n\
    ");
}
__attribute__((naked)) void fun_08002f00()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r1,#0x0\n\
    cmp         r0,#0x0\n\
    bge         LAB_08002f0a\n\
    mov         r0,#0x0\n\
LAB_08002f0a:\n\
    mov         r1,#0x3c\n\
    bl          fun_08043504\n\
    add         r4,r0,#0x0\n\
    mov         r1,#0x3c\n\
    bl          fun_08043504\n\
    add         r2,r0,#0x0\n\
    lsl         r0,r2,#0x4\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x2\n\
    sub         r4,r4,r0\n\
    cmp         r4,#0x9\n\
    bgt         LAB_08002f3c\n\
    ldr         r1,DAT_08002f38\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    lsl         r3,r4,#0x10\n\
    lsr         r3,r3,#0x10\n\
    add         r0,r5,#0x0\n\
    bl          fun_080455fc\n\
    b           LAB_08002f4c\n\
DAT_08002f38:\n\
    .4byte 0x08049C24\n\
LAB_08002f3c:\n\
    ldr         r1,DAT_08002f54\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    lsl         r3,r4,#0x10\n\
    lsr         r3,r3,#0x10\n\
    add         r0,r5,#0x0\n\
    bl          fun_080455fc\n\
LAB_08002f4c:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08002f54:\n\
    .4byte 0x08049C2C\n\
    ");
}
__attribute__((naked)) void fun_08002f58()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    ldr         r1,DAT_08002f8c\n\
    ldrh        r2,[r1,#0x0]\n\
    ldr         r0,DAT_08002f90\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x0]\n\
    add         r2,r1,#0x0\n\
    mov         r4,#0x1\n\
LAB_08002f6c:\n\
    svc         0x2\n\
    ldrh        r1,[r2,#0x0]\n\
    add         r0,r4,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002f6c\n\
    cmp         r3,#0x0\n\
    beq         LAB_08002f98\n\
    ldr         r1,DAT_08002f94\n\
    mov         r0,#0xff\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,#0x4\n\
    mov         r0,#0xf\n\
    strh        r0,[r1,#0x0]\n\
    b           LAB_08002fa0\n\
\n\
.space 2\n\
\n\
DAT_08002f8c:\n\
    .4byte 0x02005CD8\n\
DAT_08002f90:\n\
    .4byte 0x0000FFFE\n\
DAT_08002f94:\n\
    .4byte 0x04000050\n\
LAB_08002f98:\n\
    ldr         r0,DAT_08002fa8\n\
    strh        r3,[r0,#0x0]\n\
    add         r0,#0x4\n\
    strh        r3,[r0,#0x0]\n\
LAB_08002fa0:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08002fa8:\n\
    .4byte 0x04000050\n\
    ");
}
__attribute__((naked)) void fun_08002fac()
{
    asm("\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x13\n\
    ldrh        r0,[r0,#0x0]\n\
    lsr         r0,r0,#0x4\n\
    mov         r1,#0x1\n\
    and         r0,r1\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08002fbc()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08002fd0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x13\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r2,#0x10\n\
    orr         r1,r2\n\
    strh        r1,[r0,#0x0]\n\
    b           LAB_08002fdc\n\
LAB_08002fd0:\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x13\n\
    ldrh        r1,[r2,#0x0]\n\
    ldr         r0,DAT_08002fe0\n\
    and         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
LAB_08002fdc:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08002fe0:\n\
    .4byte 0x0000FFEF\n\
    ");
}
__attribute__((naked)) void fun_08002fe4()
{
    asm("\n\
    ldr         r1,DAT_08002fec\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
DAT_08002fec:\n\
    .4byte 0x0200582C\n\
    ");
}
__attribute__((naked)) void fun_08002ff0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r4,r0,#0x0\n\
    lsl         r0,r1,#0x4\n\
    sub         r0,r0,r1\n\
    lsl         r0,r0,#0x2\n\
    cmp         r4,r0\n\
    bhi         LAB_08003020\n\
    cmp         r4,#0x0\n\
    beq         LAB_08003024\n\
    ldr         r5,DAT_0800301c\n\
    ldr         r0,[r5,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_08003020\n\
    mov         r0,#0x3d\n\
    bl          fun_080016f0\n\
    str         r0,[r5,#0x0]\n\
    mov         r0,#0x1\n\
    b           LAB_0800303e\n\
DAT_0800301c:\n\
    .4byte 0x0200582C\n\
LAB_08003020:\n\
    cmp         r4,#0x0\n\
    bne         LAB_0800303c\n\
LAB_08003024:\n\
    ldr         r4,DAT_08003044\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800303c\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001704\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x0]\n\
LAB_0800303c:\n\
    mov         r0,#0x0\n\
LAB_0800303e:\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08003044:\n\
    .4byte 0x0200582C\n\
    ");
}
__attribute__((naked)) void fun_08003048()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r4,DAT_08003068\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003062\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001704\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x0]\n\
LAB_08003062:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08003068:\n\
    .4byte 0x0200582C\n\
    ");
}
__attribute__((naked)) void fun_0800306c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x13\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x10\n\
    and         r0,r1\n\
    ldr         r1,DAT_080030cc\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003084\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
LAB_08003084:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0803d070\n\
    ldr         r0,DAT_080030d0\n\
    ldrh        r2,[r0,#0x0]\n\
    ldr         r1,DAT_080030d4\n\
    and         r1,r2\n\
    strh        r1,[r0,#0x0]\n\
    add         r2,r0,#0x0\n\
    mov         r3,#0x1\n\
LAB_08003098:\n\
    svc         0x2\n\
    ldrh        r1,[r2,#0x0]\n\
    add         r0,r3,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003098\n\
    ldr         r1,DAT_080030d8\n\
    ldr         r2,DAT_080030dc\n\
    add         r0,r4,r2\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_080030e0\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x13\n\
    ldrh        r0,[r2,#0x0]\n\
    mov         r1,#0x10\n\
    eor         r0,r1\n\
    strh        r0,[r2,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080030cc:\n\
    .4byte 0x0600A000\n\
DAT_080030d0:\n\
    .4byte 0x02005CD8\n\
DAT_080030d4:\n\
    .4byte 0x0000FFFE\n\
DAT_080030d8:\n\
    .4byte 0x040000D4\n\
DAT_080030dc:\n\
    .4byte 0xFFFFFE00\n\
DAT_080030e0:\n\
    .4byte 0x80000100\n\
    ");
}
__attribute__((naked)) void fun_080030e4()
{
    asm("\n\
    cmp         r0,#0x0\n\
    bge         LAB_080030ea\n\
    add         r0,#0xff\n\
LAB_080030ea:\n\
    asr         r2,r0,#0x8\n\
    cmp         r1,#0x0\n\
    bge         LAB_080030f2\n\
    add         r1,#0xff\n\
LAB_080030f2:\n\
    asr         r0,r1,#0x8\n\
    mul         r0,r2\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080030f8()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x8\n\
    cmp         r1,#0x0\n\
    bge         LAB_08003102\n\
    add         r1,#0xff\n\
LAB_08003102:\n\
    asr         r1,r1,#0x8\n\
    bl          fun_0803d06c\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800310c()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x4\n\
    bl          fun_0803d074\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0xa\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800311c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r3,r0,#0x0\n\
    mov         r1,#0x0\n\
    ldr         r5,DAT_08003144\n\
    ldr         r4,DAT_08003148\n\
    mov         r2,#0x0\n\
LAB_08003128:\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r4\n\
    strh        r2,[r0,#0x0]\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    cmp         r1,#0x7\n\
    bls         LAB_08003128\n\
    str         r3,[r5,#0x0]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08003144:\n\
    .4byte 0x02005834\n\
DAT_08003148:\n\
    .4byte 0x02005780\n\
    ");
}
__attribute__((naked)) void fun_0800314c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    mov         r2,#0x0\n\
    ldr         r5,DAT_08003180\n\
    mov         r4,#0x0\n\
LAB_08003158:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r2\n\
    lsl         r0,r0,#0x2\n\
    add         r1,r0,r5\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800316e\n\
    ldrh        r0,[r1,#0x2]\n\
    cmp         r0,r3\n\
    bne         LAB_0800316e\n\
    strh        r4,[r1,#0x0]\n\
LAB_0800316e:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x7\n\
    bls         LAB_08003158\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08003180:\n\
    .4byte 0x02005780\n\
    ");
}
__attribute__((naked)) void fun_08003184()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    mov         r3,#0x0\n\
    ldr         r4,DAT_080031c4\n\
    add         r6,r4,#0x4\n\
LAB_08003190:\n\
    lsl         r0,r3,#0x1\n\
    add         r0,r0,r3\n\
    lsl         r1,r0,#0x2\n\
    add         r2,r1,r4\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080031c8\n\
    ldrh        r2,[r2,#0x2]\n\
    cmp         r2,r5\n\
    bne         LAB_080031c8\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x8\n\
    add         r0,r1,r0\n\
    add         r1,r1,r6\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r2,r0,#0x8\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bge         LAB_080031b8\n\
    add         r0,#0xff\n\
LAB_080031b8:\n\
    asr         r1,r0,#0x8\n\
    add         r0,r2,#0x0\n\
    bl          fun_0803d06c\n\
    b           LAB_080031d6\n\
\n\
.space 2\n\
\n\
DAT_080031c4:\n\
    .4byte 0x02005780\n\
LAB_080031c8:\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    cmp         r3,#0x7\n\
    bls         LAB_08003190\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x9\n\
LAB_080031d6:\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_080031dc()
{
    asm("\n\
    ldr         r1,DAT_080031e4\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
DAT_080031e4:\n\
    .4byte 0x02005834\n\
    ");
}
__attribute__((naked)) void fun_080031e8()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_08003278()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_08003290\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_080434c8\n\
    ldr         r0,DAT_08003294\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08003298\n\
    strh        r1,[r0,#0x0]\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08003290:\n\
    .4byte 0x020057E4\n\
DAT_08003294:\n\
    .4byte 0x04000202\n\
DAT_08003298:\n\
    .4byte 0x02005CD8\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800329c()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_080032a0()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_080032b4()
{
    asm("\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080032bc()
{
    asm("\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080032c4()
{
    asm("\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080032c8()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    ldr         r3,DAT_080032f4\n\
    ldr         r4,[r3,#0x0]\n\
    lsl         r3,r2,#0x1\n\
    add         r3,r3,r2\n\
    lsl         r3,r3,#0x2\n\
    ldr         r2,[r4,#0x38]\n\
    add         r2,r2,r3\n\
    bl          fun_080032f8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080032f4:\n\
    .4byte 0x02005CE8\n\
    ");
}
__attribute__((naked)) void fun_080032f8()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    mov         r4,#0x0\n\
    ldrsh       r0,[r2,r4]\n\
    cmp         r3,r0\n\
    blt         LAB_08003326\n\
    mov         r4,#0x4\n\
    ldrsh       r0,[r2,r4]\n\
    cmp         r3,r0\n\
    bge         LAB_08003326\n\
    mov         r3,#0x2\n\
    ldrsh       r0,[r2,r3]\n\
    cmp         r1,r0\n\
    blt         LAB_08003326\n\
    mov         r4,#0x6\n\
    ldrsh       r0,[r2,r4]\n\
    cmp         r1,r0\n\
    bge         LAB_08003326\n\
    mov         r0,#0x1\n\
    b           LAB_08003328\n\
LAB_08003326:\n\
    mov         r0,#0x0\n\
LAB_08003328:\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08003330()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    bl          fun_08003370\n\
    add         r2,r0,#0x0\n\
    cmp         r2,#0x0\n\
    bne         LAB_0800334a\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08003368\n\
LAB_0800334a:\n\
    ldr         r0,DAT_0800336c\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,[r0,#0x38]\n\
    sub         r1,r2,r1\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r1\n\
    lsl         r1,r0,#0x4\n\
    add         r0,r0,r1\n\
    lsl         r1,r0,#0x8\n\
    add         r0,r0,r1\n\
    lsl         r1,r0,#0x10\n\
    add         r0,r0,r1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    lsl         r0,r0,#0xe\n\
    asr         r0,r0,#0x10\n\
LAB_08003368:\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_0800336c:\n\
    .4byte 0x02005CE8\n\
    ");
}
__attribute__((naked)) void fun_08003370()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r5,r1,#0x10\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    bl          fun_08004c7c\n\
    add         r1,r0,#0x0\n\
    cmp         r1,#0x0\n\
    beq         LAB_080033ac\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r1,r2]\n\
    cmp         r4,r0\n\
    blt         LAB_080033ac\n\
    mov         r2,#0x4\n\
    ldrsh       r0,[r1,r2]\n\
    cmp         r4,r0\n\
    bge         LAB_080033ac\n\
    mov         r2,#0x2\n\
    ldrsh       r0,[r1,r2]\n\
    cmp         r5,r0\n\
    blt         LAB_080033ac\n\
    mov         r2,#0x6\n\
    ldrsh       r0,[r1,r2]\n\
    cmp         r5,r0\n\
    bge         LAB_080033ac\n\
    add         r0,r1,#0x0\n\
    b           LAB_080033ae\n\
LAB_080033ac:\n\
    mov         r0,#0x0\n\
LAB_080033ae:\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_080033b4()
{
    asm("\n\
    ldr         r0,DAT_080033bc\n\
    ldr         r0,[r0,#0x0]\n\
    ldrh        r0,[r0,#0x34]\n\
    bx          lr\n\
DAT_080033bc:\n\
    .4byte 0x02005CE8\n\
    ");
}
__attribute__((naked)) void fun_080033c0()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_080033d4\n\
    ldr         r2,[r1,#0x0]\n\
    lsl         r1,r0,#0x1\n\
    add         r1,r1,r0\n\
    lsl         r1,r1,#0x2\n\
    ldr         r0,[r2,#0x38]\n\
    add         r0,r0,r1\n\
    bx          lr\n\
DAT_080033d4:\n\
    .4byte 0x02005CE8\n\
    ");
}
__attribute__((naked)) void fun_080033d8()
{
    asm("\n\
    push        {lr}\n\
    add         r3,r2,#0x0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    lsl         r3,r3,#0x10\n\
    ldr         r2,DAT_080033fc\n\
    ldr         r2,[r2,#0x0]\n\
    lsr         r3,r3,#0xb\n\
    ldr         r2,[r2,#0x4c]\n\
    add         r2,r2,r3\n\
    bl          fun_08003400\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_080033fc:\n\
    .4byte 0x02005CE8\n\
    ");
}
__attribute__((naked)) void fun_08003400()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    mov         r4,#0x0\n\
    ldrsh       r0,[r2,r4]\n\
    cmp         r3,r0\n\
    blt         LAB_0800342e\n\
    mov         r4,#0x4\n\
    ldrsh       r0,[r2,r4]\n\
    cmp         r3,r0\n\
    bge         LAB_0800342e\n\
    mov         r3,#0x2\n\
    ldrsh       r0,[r2,r3]\n\
    cmp         r1,r0\n\
    blt         LAB_0800342e\n\
    mov         r4,#0x6\n\
    ldrsh       r0,[r2,r4]\n\
    cmp         r1,r0\n\
    bge         LAB_0800342e\n\
    mov         r0,#0x1\n\
    b           LAB_08003430\n\
LAB_0800342e:\n\
    mov         r0,#0x0\n\
LAB_08003430:\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08003438()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    bl          fun_08003468\n\
    add         r1,r0,#0x0\n\
    cmp         r1,#0x0\n\
    bne         LAB_08003452\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_0800345e\n\
LAB_08003452:\n\
    ldr         r0,DAT_08003464\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x4]\n\
    sub         r0,r1,r0\n\
    lsl         r0,r0,#0xd\n\
    asr         r0,r0,#0x10\n\
LAB_0800345e:\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08003464:\n\
    .4byte 0x02005CEC\n\
    ");
}
__attribute__((naked)) void fun_08003468()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r5,r1,#0x10\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    bl          fun_08004c28\n\
    add         r2,r0,#0x0\n\
    cmp         r2,#0x0\n\
    beq         LAB_080034a6\n\
    ldr         r1,[r2,#0x0]\n\
    mov         r3,#0x0\n\
    ldrsh       r0,[r1,r3]\n\
    cmp         r4,r0\n\
    blt         LAB_080034a6\n\
    mov         r3,#0x4\n\
    ldrsh       r0,[r1,r3]\n\
    cmp         r4,r0\n\
    bge         LAB_080034a6\n\
    mov         r3,#0x2\n\
    ldrsh       r0,[r1,r3]\n\
    cmp         r5,r0\n\
    blt         LAB_080034a6\n\
    mov         r3,#0x6\n\
    ldrsh       r0,[r1,r3]\n\
    cmp         r5,r0\n\
    bge         LAB_080034a6\n\
    add         r0,r2,#0x0\n\
    b           LAB_080034a8\n\
LAB_080034a6:\n\
    mov         r0,#0x0\n\
LAB_080034a8:\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080034b0()
{
    asm("\n\
    ldr         r0,DAT_080034bc\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,#0x48\n\
    ldrh        r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_080034bc:\n\
    .4byte 0x02005CE8\n\
    ");
}
__attribute__((naked)) void fun_080034c0()
{
    asm("\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    ldr         r0,DAT_080034d0\n\
    ldr         r0,[r0,#0x0]\n\
    lsr         r1,r1,#0xd\n\
    ldr         r0,[r0,#0x4]\n\
    add         r0,r0,r1\n\
    bx          lr\n\
DAT_080034d0:\n\
    .4byte 0x02005CEC\n\
    ");
}
__attribute__((naked)) void fun_080034d4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r3,r0,#0x0\n\
    lsl         r3,r3,#0x10\n\
    ldr         r0,DAT_080034fc\n\
    ldr         r4,[r0,#0x0]\n\
    ldr         r0,[r4,#0x4]\n\
    lsr         r3,r3,#0xd\n\
    add         r0,r3,r0\n\
    strh        r2,[r0,#0x4]\n\
    ldr         r0,[r4,#0x4]\n\
    add         r0,r3,r0\n\
    strh        r1,[r0,#0x6]\n\
    ldr         r0,[r4,#0x4]\n\
    add         r0,r0,r3\n\
    bl          fun_08004ee4\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080034fc:\n\
    .4byte 0x02005CEC\n\
\n\
    ");
}
