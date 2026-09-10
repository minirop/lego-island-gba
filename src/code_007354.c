__attribute__((naked)) void fun_08007354()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r8\n\
    push        {r6}\n\
    sub         sp,#0x4\n\
    bl          fun_0800117c\n\
    bl          fun_08002bcc\n\
    mov         r0,sp\n\
    mov         r6,#0x0\n\
    strh        r6,[r0,#0x0]\n\
    ldr         r4,DAT_080073ec\n\
    str         r0,[r4,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    mov         r8,r0\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_080073f0\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    ldr         r0,DAT_080073f4\n\
    strh        r6,[r0,#0x0]\n\
    sub         r0,#0x4\n\
    strh        r6,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x13\n\
    ldr         r2,DAT_080073f8\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_080073fc\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r5,DAT_08007400\n\
    str         r5,[r4,#0x0]\n\
    mov         r0,r8\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08007404\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    add         r0,r5,#0x0\n\
    bl          fun_080045f0\n\
    ldr         r1,DAT_08007408\n\
    add         r0,r1,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_0803c1ec\n\
    ldr         r0,DAT_0800740c\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08007410\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_08007414\n\
    strh        r6,[r0,#0x0]\n\
    bl          fun_0800260c\n\
    ldr         r1,DAT_08007418\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x2]\n\
    ldr         r0,DAT_0800741c\n\
    strh        r0,[r1,#0x4]\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080073ec:\n\
    .4byte 0x040000D4\n\
DAT_080073f0:\n\
    .4byte 0x81000100\n\
DAT_080073f4:\n\
    .4byte 0x04000054\n\
DAT_080073f8:\n\
    .4byte 0x00001F44\n\
DAT_080073fc:\n\
    .4byte 0x08095A84\n\
DAT_08007400:\n\
    .4byte 0x08095884\n\
DAT_08007404:\n\
    .4byte 0x80000100\n\
DAT_08007408:\n\
    .4byte 0x00007FFF\n\
DAT_0800740c:\n\
    .4byte 0x08095874\n\
DAT_08007410:\n\
    .4byte 0x02009B68\n\
DAT_08007414:\n\
    .4byte 0x02009B70\n\
DAT_08007418:\n\
    .4byte 0x02005750\n\
DAT_0800741c:\n\
    .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_08007420()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r0,DAT_08007468\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x78\n\
    strh        r1,[r0,#0x2]\n\
    mov         r1,#0x38\n\
    strh        r1,[r0,#0x4]\n\
    ldr         r4,DAT_0800746c\n\
    ldrb        r1,[r4,#0x0]\n\
    mov         r2,#0x0\n\
    mov         r3,#0xc\n\
    bl          fun_080041c4\n\
    ldrh        r0,[r4,#0x0]\n\
    add         r0,#0x2\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r2,DAT_08007470\n\
    ldrh        r0,[r2,#0x2]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007494\n\
    mov         r0,#0x4\n\
    ldrsh       r1,[r2,r0]\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    beq         LAB_08007494\n\
    cmp         r1,#0x0\n\
    bne         LAB_08007480\n\
    ldrh        r0,[r2,#0xa]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08007474\n\
    mov         r0,#0xa\n\
    bl          fun_08001070\n\
    b           LAB_080074ac\n\
\n\
.space 2\n\
\n\
DAT_08007468:\n\
    .4byte 0x02009B68\n\
DAT_0800746c:\n\
    .4byte 0x02009B70\n\
DAT_08007470:\n\
    .4byte 0x02005750\n\
LAB_08007474:\n\
    mov         r0,#0x6\n\
    strh        r0,[r2,#0x6]\n\
    mov         r0,#0x27\n\
    bl          fun_08001070\n\
    b           LAB_080074ac\n\
LAB_08007480:\n\
    ldr         r0,DAT_08007490\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08007494\n\
    mov         r0,#0x27\n\
    bl          fun_08001070\n\
    b           LAB_080074ac\n\
DAT_08007490:\n\
    .4byte 0x02005710\n\
LAB_08007494:\n\
    ldr         r0,DAT_080074b4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0xff\n\
    bhi         LAB_080074a4\n\
    ldr         r0,DAT_080074b8\n\
    ldrh        r0,[r0,#0x2]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080074ac\n\
LAB_080074a4:\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
LAB_080074ac:\n\
    mov         r0,#0x0\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_080074b4:\n\
    .4byte 0x02009B70\n\
DAT_080074b8:\n\
    .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_080074bc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x14\n\
    ldr         r4,DAT_0800750c\n\
    bl          fun_08001130\n\
    add         r2,r0,#0x0\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080455fc\n\
    ldr         r6,DAT_08007510\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    add         r3,r6,#0x0\n\
    bl          fun_0803c138\n\
    bl          fun_080028b8\n\
    add         r5,r0,#0x0\n\
    ldr         r1,DAT_08007514\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800751c\n\
    ldr         r4,DAT_08007518\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x10\n\
    add         r3,r6,#0x0\n\
    bl          fun_0803c138\n\
    mov         r0,#0x4\n\
    mov         r1,#0x1\n\
    add         r2,r4,#0x0\n\
    bl          fun_080032a0\n\
    b           LAB_08007646\n\
\n\
.space 2\n\
\n\
DAT_0800750c:\n\
    .4byte 0x080955D8\n\
DAT_08007510:\n\
    .4byte 0x0865FD94\n\
DAT_08007514:\n\
    .4byte 0x02005750\n\
DAT_08007518:\n\
    .4byte 0x080955E0\n\
LAB_0800751c:\n\
    ldrh        r0,[r1,#0xa]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080075b8\n\
    ldr         r0,DAT_08007548\n\
    mov         r1,#0x0\n\
    mov         r2,#0x10\n\
    add         r3,r6,#0x0\n\
    bl          fun_0803c138\n\
    mov         r2,#0x1\n\
    ldr         r3,DAT_0800754c\n\
    mov         r6,#0x31\n\
    mov         r4,#0x30\n\
    add         r1,r3,#0x0\n\
    add         r1,#0xf\n\
LAB_0800753a:\n\
    add         r0,r5,#0x0\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007550\n\
    strb        r6,[r1,#0x0]\n\
    b           LAB_08007552\n\
\n\
.space 2\n\
\n\
DAT_08007548:\n\
    .4byte 0x080955F0\n\
DAT_0800754c:\n\
    .4byte 0x02000388\n\
LAB_08007550:\n\
    strb        r4,[r1,#0x0]\n\
LAB_08007552:\n\
    lsl         r2,r2,#0x1\n\
    sub         r1,#0x1\n\
    cmp         r1,r3\n\
    bge         LAB_0800753a\n\
    ldr         r4,DAT_0800758c\n\
    mov         r0,#0x0\n\
    strb        r0,[r4,#0x10]\n\
    ldr         r3,DAT_08007590\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x19\n\
    bl          fun_0803c138\n\
    ldr         r2,DAT_08007594\n\
    mov         r0,#0x4\n\
    mov         r1,#0x1\n\
    bl          fun_080032a0\n\
    mov         r3,#0x1\n\
    mov         r2,#0x31\n\
    mov         r6,#0x30\n\
    add         r1,r4,#0x0\n\
    add         r1,#0xf\n\
LAB_08007580:\n\
    add         r0,r5,#0x0\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007598\n\
    strb        r2,[r1,#0x0]\n\
    b           LAB_0800759a\n\
DAT_0800758c:\n\
    .4byte 0x02000388\n\
DAT_08007590:\n\
    .4byte 0x0865FD94\n\
DAT_08007594:\n\
    .4byte 0x080955F0\n\
LAB_08007598:\n\
    strb        r6,[r1,#0x0]\n\
LAB_0800759a:\n\
    ldr         r7,DAT_080075b4\n\
    lsl         r3,r3,#0x1\n\
    sub         r1,#0x1\n\
    cmp         r1,r4\n\
    bge         LAB_08007580\n\
    mov         r0,#0x0\n\
    strb        r0,[r7,#0x10]\n\
    mov         r0,#0x4\n\
    mov         r1,#0x2\n\
    add         r2,r7,#0x0\n\
    bl          fun_080032a0\n\
    b           LAB_08007646\n\
DAT_080075b4:\n\
    .4byte 0x02000388\n\
LAB_080075b8:\n\
    ldr         r0,DAT_080075dc\n\
    mov         r1,#0x0\n\
    mov         r2,#0x10\n\
    add         r3,r6,#0x0\n\
    bl          fun_0803c138\n\
    mov         r2,#0x1\n\
    ldr         r3,DAT_080075e0\n\
    mov         r6,#0x31\n\
    mov         r4,#0x30\n\
    add         r1,r3,#0x0\n\
    add         r1,#0xf\n\
LAB_080075d0:\n\
    add         r0,r5,#0x0\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_080075e4\n\
    strb        r6,[r1,#0x0]\n\
    b           LAB_080075e6\n\
DAT_080075dc:\n\
    .4byte 0x08095608\n\
DAT_080075e0:\n\
    .4byte 0x02000388\n\
LAB_080075e4:\n\
    strb        r4,[r1,#0x0]\n\
LAB_080075e6:\n\
    lsl         r2,r2,#0x1\n\
    sub         r1,#0x1\n\
    cmp         r1,r3\n\
    bge         LAB_080075d0\n\
    ldr         r4,DAT_08007620\n\
    mov         r0,#0x0\n\
    strb        r0,[r4,#0x10]\n\
    ldr         r3,DAT_08007624\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x19\n\
    bl          fun_0803c138\n\
    ldr         r2,DAT_08007628\n\
    mov         r0,#0x4\n\
    mov         r1,#0x1\n\
    bl          fun_080032a0\n\
    mov         r3,#0x1\n\
    mov         r2,#0x31\n\
    mov         r6,#0x30\n\
    add         r1,r4,#0x0\n\
    add         r1,#0xf\n\
LAB_08007614:\n\
    add         r0,r5,#0x0\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800762c\n\
    strb        r2,[r1,#0x0]\n\
    b           LAB_0800762e\n\
DAT_08007620:\n\
    .4byte 0x02000388\n\
DAT_08007624:\n\
    .4byte 0x0865FD94\n\
DAT_08007628:\n\
    .4byte 0x08095608\n\
LAB_0800762c:\n\
    strb        r6,[r1,#0x0]\n\
LAB_0800762e:\n\
    ldr         r7,DAT_08007658\n\
    lsl         r3,r3,#0x1\n\
    sub         r1,#0x1\n\
    cmp         r1,r4\n\
    bge         LAB_08007614\n\
    mov         r0,#0x0\n\
    strb        r0,[r7,#0x10]\n\
    mov         r0,#0x4\n\
    mov         r1,#0x2\n\
    add         r2,r7,#0x0\n\
    bl          fun_080032a0\n\
LAB_08007646:\n\
    ldr         r0,DAT_0800765c\n\
    ldrh        r0,[r0,#0xe]\n\
    cmp         r0,#0x1\n\
    beq         LAB_08007670\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08007660\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007666\n\
    b           LAB_080076ac\n\
DAT_08007658:\n\
    .4byte 0x02000388\n\
DAT_0800765c:\n\
    .4byte 0x02005750\n\
LAB_08007660:\n\
    cmp         r0,#0x2\n\
    beq         LAB_08007694\n\
    b           LAB_080076ac\n\
LAB_08007666:\n\
    ldr         r4,DAT_0800766c\n\
    b           LAB_08007672\n\
\n\
.space 2\n\
\n\
DAT_0800766c:\n\
    .4byte 0x08095624\n\
LAB_08007670:\n\
    ldr         r4,DAT_0800768c\n\
LAB_08007672:\n\
    ldr         r3,DAT_08007690\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x22\n\
    bl          fun_0803c138\n\
    mov         r0,#0x4\n\
    mov         r1,#0x3\n\
    add         r2,r4,#0x0\n\
    bl          fun_080032a0\n\
    b           LAB_080076ac\n\
\n\
.space 2\n\
\n\
DAT_0800768c:\n\
    .4byte 0x08095630\n\
DAT_08007690:\n\
    .4byte 0x0865FD94\n\
LAB_08007694:\n\
    ldr         r4,DAT_08007700\n\
    ldr         r3,DAT_08007704\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x22\n\
    bl          fun_0803c138\n\
    mov         r0,#0x4\n\
    mov         r1,#0x3\n\
    add         r2,r4,#0x0\n\
    bl          fun_080032a0\n\
LAB_080076ac:\n\
    ldr         r1,DAT_08007708\n\
    ldr         r0,DAT_0800770c\n\
    ldrb        r2,[r0,#0x0]\n\
    mov         r0,sp\n\
    bl          fun_080455fc\n\
    ldr         r4,DAT_08007704\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    mov         r2,#0x32\n\
    add         r3,r4,#0x0\n\
    bl          fun_0803c138\n\
    mov         r0,#0x4\n\
    mov         r1,#0x4\n\
    mov         r2,sp\n\
    bl          fun_080032a0\n\
    ldr         r1,DAT_08007710\n\
    ldr         r0,DAT_08007714\n\
    ldrh        r2,[r0,#0x8]\n\
    mov         r5,#0x4\n\
    ldrsh       r3,[r0,r5]\n\
    mov         r0,sp\n\
    bl          fun_080455fc\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    mov         r2,#0x42\n\
    add         r3,r4,#0x0\n\
    bl          fun_0803c138\n\
    mov         r0,#0x4\n\
    mov         r1,#0x5\n\
    mov         r2,sp\n\
    bl          fun_080032a0\n\
    add         sp,#0x14\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08007700:\n\
    .4byte 0x08095648\n\
DAT_08007704:\n\
    .4byte 0x0865FD94\n\
DAT_08007708:\n\
    .4byte 0x0809565C\n\
DAT_0800770c:\n\
    .4byte 0x02005710\n\
DAT_08007710:\n\
    .4byte 0x08095664\n\
DAT_08007714:\n\
    .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_08007718()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    ldr         r2,DAT_0800772c\n\
    cmp         r1,r2\n\
    beq         LAB_08007744\n\
    cmp         r1,r2\n\
    bgt         LAB_08007734\n\
    ldr         r0,DAT_08007730\n\
    b           LAB_08007736\n\
\n\
.space 2\n\
\n\
DAT_0800772c:\n\
    .4byte 0x0000138A\n\
DAT_08007730:\n\
    .4byte 0x00001389\n\
LAB_08007734:\n\
    ldr         r0,DAT_08007740\n\
LAB_08007736:\n\
    cmp         r1,r0\n\
    bne         LAB_08007744\n\
    add         r0,r2,#0x0\n\
    b           LAB_08007746\n\
\n\
.space 2\n\
\n\
DAT_08007740:\n\
    .4byte 0x0000138C\n\
LAB_08007744:\n\
    add         r0,r1,#0x0\n\
LAB_08007746:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08007748()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0800457c\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08007754()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r5,r0,#0x0\n\
    mov         r3,#0x1\n\
    sub         r0,r1,#0x1\n\
    ldr         r4,DAT_08007778\n\
    cmp         r0,#0x0\n\
    blt         LAB_08007786\n\
    mov         r12,r4\n\
    mov         r7,#0x31\n\
    mov         r6,#0x30\n\
    add         r2,r0,r4\n\
LAB_0800776a:\n\
    add         r0,r5,#0x0\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800777c\n\
    strb        r7,[r2,#0x0]\n\
    b           LAB_0800777e\n\
\n\
.space 2\n\
\n\
DAT_08007778:\n\
    .4byte 0x02000388\n\
LAB_0800777c:\n\
    strb        r6,[r2,#0x0]\n\
LAB_0800777e:\n\
    lsl         r3,r3,#0x1\n\
    sub         r2,#0x1\n\
    cmp         r2,r12\n\
    bge         LAB_0800776a\n\
LAB_08007786:\n\
    add         r1,r1,r4\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    add         r0,r4,#0x0\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08007794()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x20\n\
    ldr         r1,DAT_080077e8\n\
    ldr         r4,DAT_080077ec\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    bl          fun_08000ee8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_080020bc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_080077f8\n\
    ldr         r0,DAT_080077f0\n\
    ldr         r4,DAT_080077f4\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    str         r0,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r2,#0x10\n\
    str         r2,[sp,#0xc]\n\
    str         r2,[sp,#0x10]\n\
    str         r0,[sp,#0x14]\n\
    str         r0,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    b           LAB_08007830\n\
DAT_080077e8:\n\
    .4byte 0x0877BAB4\n\
DAT_080077ec:\n\
    .4byte 0x02009B84\n\
DAT_080077f0:\n\
    .4byte 0x080B7124\n\
DAT_080077f4:\n\
    .4byte 0x02009B90\n\
LAB_080077f8:\n\
    ldr         r1,DAT_08007878\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,DAT_0800787c\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    str         r0,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r2,#0x10\n\
    str         r2,[sp,#0xc]\n\
    str         r2,[sp,#0x10]\n\
    str         r0,[sp,#0x14]\n\
    str         r0,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
LAB_08007830:\n\
    ldr         r1,DAT_08007880\n\
    ldr         r0,DAT_08007884\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,DAT_0800787c\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r2,#0x60\n\
    str         r2,[sp,#0x0]\n\
    str         r2,[sp,#0x4]\n\
    str         r2,[sp,#0x8]\n\
    mov         r0,#0x80\n\
    str         r0,[sp,#0xc]\n\
    mov         r0,#0x10\n\
    str         r0,[sp,#0x10]\n\
    str         r2,[sp,#0x14]\n\
    str         r2,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    add         sp,#0x20\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08007878:\n\
    .4byte 0x0877BA00\n\
DAT_0800787c:\n\
    .4byte 0x02009B90\n\
DAT_08007880:\n\
    .4byte 0x0877BA6C\n\
DAT_08007884:\n\
    .4byte 0x02009B84\n\
    ");
}
__attribute__((naked)) void fun_08007888()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x20\n\
    ldr         r1,DAT_080078b0\n\
    ldr         r0,DAT_080078b4\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_080078b8\n\
    cmp         r1,r0\n\
    beq         LAB_080078c2\n\
    cmp         r1,r0\n\
    bgt         LAB_080078bc\n\
    sub         r0,#0xf\n\
    cmp         r1,r0\n\
    beq         LAB_080078c2\n\
    b           LAB_080078d0\n\
\n\
.space 2\n\
\n\
DAT_080078b0:\n\
    .4byte 0x0877BB18\n\
DAT_080078b4:\n\
    .4byte 0x02009B84\n\
DAT_080078b8:\n\
    .4byte 0x000007E9\n\
LAB_080078bc:\n\
    ldr         r0,DAT_080078cc\n\
    cmp         r1,r0\n\
    bne         LAB_080078d0\n\
LAB_080078c2:\n\
    add         r0,r1,#0x0\n\
    bl          fun_080020bc\n\
    b           LAB_080078d2\n\
\n\
.space 2\n\
\n\
DAT_080078cc:\n\
    .4byte 0x000007EB\n\
LAB_080078d0:\n\
    mov         r0,#0x1\n\
LAB_080078d2:\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_08007910\n\
    ldr         r0,DAT_08007908\n\
    ldr         r4,DAT_0800790c\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    str         r0,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r2,#0x10\n\
    str         r2,[sp,#0xc]\n\
    str         r2,[sp,#0x10]\n\
    str         r0,[sp,#0x14]\n\
    str         r0,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    b           LAB_0800794c\n\
DAT_08007908:\n\
    .4byte 0x080B7124\n\
DAT_0800790c:\n\
    .4byte 0x02009B90\n\
LAB_08007910:\n\
    ldr         r1,DAT_08007994\n\
    ldr         r0,DAT_08007998\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,DAT_0800799c\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r0,#0x60\n\
    str         r0,[sp,#0x0]\n\
    str         r0,[sp,#0x4]\n\
    str         r0,[sp,#0x8]\n\
    mov         r2,#0x10\n\
    str         r2,[sp,#0xc]\n\
    str         r2,[sp,#0x10]\n\
    str         r0,[sp,#0x14]\n\
    str         r0,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
LAB_0800794c:\n\
    ldr         r1,DAT_080079a0\n\
    ldr         r0,DAT_08007998\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,DAT_0800799c\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d070\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    mov         r2,#0x60\n\
    str         r2,[sp,#0x0]\n\
    str         r2,[sp,#0x4]\n\
    str         r2,[sp,#0x8]\n\
    mov         r0,#0x80\n\
    str         r0,[sp,#0xc]\n\
    mov         r0,#0x10\n\
    str         r0,[sp,#0x10]\n\
    str         r2,[sp,#0x14]\n\
    str         r2,[sp,#0x18]\n\
    mov         r0,#0xf0\n\
    str         r0,[sp,#0x1c]\n\
    add         r0,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    bl          fun_080031e8\n\
    add         sp,#0x20\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08007994:\n\
    .4byte 0x0877BAD8\n\
DAT_08007998:\n\
    .4byte 0x02009B84\n\
DAT_0800799c:\n\
    .4byte 0x02009B90\n\
DAT_080079a0:\n\
    .4byte 0x0877BB00\n\
    ");
}
__attribute__((naked)) void fun_080079a4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    mov         r0,sp\n\
    mov         r1,#0x0\n\
    mov         r9,r1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r4,DAT_08007a40\n\
    str         r0,[r4,#0x0]\n\
    mov         r7,#0xc0\n\
    lsl         r7,r7,#0x13\n\
    str         r7,[r4,#0x4]\n\
    ldr         r0,DAT_08007a44\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,sp\n\
    strh        r1,[r0,#0x0]\n\
    str         r0,[r4,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    mov         r10,r0\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08007a48\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r5,#0x80\n\
    lsl         r5,r5,#0x13\n\
    ldr         r1,DAT_08007a4c\n\
    mov         r8,r1\n\
    strh        r1,[r5,#0x0]\n\
    ldr         r6,DAT_08007a50\n\
    add         r0,r6,#0x0\n\
    ldr         r1,DAT_08007a54\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08007a58\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    add         r0,r6,#0x0\n\
    add         r1,r7,#0x0\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    mov         r0,r8\n\
    strh        r0,[r5,#0x0]\n\
    ldr         r0,DAT_08007a5c\n\
    str         r0,[r4,#0x0]\n\
    mov         r1,r10\n\
    str         r1,[r4,#0x4]\n\
    ldr         r0,DAT_08007a60\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    ldr         r0,DAT_08007a64\n\
    bl          fun_080045f0\n\
    ldr         r0,PTR_DAT_08007a68\n\
    mov         r1,r9\n\
    strb        r1,[r0,#0x0]\n\
    ldr         r1,PTR_DAT_08007a6c\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,PTR_DAT_08007a70\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007a78\n\
    ldr         r1,PTR_DAT_08007a74\n\
    mov         r0,#0x6\n\
    b           LAB_08007a7c\n\
\n\
.space 2\n\
\n\
DAT_08007a40:\n\
    .4byte 0x040000D4\n\
DAT_08007a44:\n\
    .4byte 0x8100C000\n\
DAT_08007a48:\n\
    .4byte 0x81000200\n\
DAT_08007a4c:\n\
    .4byte 0x00001F44\n\
DAT_08007a50:\n\
    .4byte 0x080AAA2C\n\
DAT_08007a54:\n\
    .4byte 0x0600A000\n\
DAT_08007a58:\n\
    .4byte 0x00001F54\n\
DAT_08007a5c:\n\
    .4byte 0x080AA82C\n\
DAT_08007a60:\n\
    .4byte 0x80000100\n\
DAT_08007a64:\n\
    .4byte 0x0809A5C8\n\
PTR_DAT_08007a68:\n\
    .4byte DAT_02009b84\n\
PTR_DAT_08007a6c:\n\
    .4byte DAT_02002530\n\
PTR_DAT_08007a70:\n\
    .4byte DAT_02005750\n\
PTR_DAT_08007a74:\n\
    .4byte DAT_02009b80\n\
LAB_08007a78:\n\
    ldr         r1,DAT_08007a9c\n\
    mov         r0,#0x12\n\
LAB_08007a7c:\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_0803c1ec\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
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
DAT_08007a9c:\n\
    .4byte 0x02009B80\n\
    ");
}
__attribute__((naked)) void fun_08007aa0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x34\n\
    bl          fun_08007c68\n\
    ldr         r0,DAT_08007ab8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007abc\n\
    bl          fun_08007888\n\
    b           LAB_08007ac0\n\
\n\
.space 2\n\
\n\
DAT_08007ab8:\n\
    .4byte 0x02005750\n\
LAB_08007abc:\n\
    bl          fun_08007794\n\
LAB_08007ac0:\n\
    ldr         r0,DAT_08007af8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007b10\n\
    ldr         r1,DAT_08007afc\n\
    ldr         r4,DAT_08007b00\n\
    ldr         r0,DAT_08007b04\n\
    ldr         r3,[r0,#0x0]\n\
    lsl         r3,r3,#0x2\n\
    ldr         r5,DAT_08007b08\n\
    ldr         r0,DAT_08007b0c\n\
    mov         r2,#0x0\n\
    ldrsb       r2,[r0,r2]\n\
    lsl         r2,r2,#0x1\n\
    add         r2,r2,r5\n\
    ldrh        r5,[r2,#0x0]\n\
    lsl         r0,r5,#0x1\n\
    add         r0,r0,r5\n\
    lsl         r0,r0,#0x4\n\
    add         r3,r3,r0\n\
    add         r4,#0x4\n\
    add         r3,r3,r4\n\
    ldr         r2,[r3,#0x0]\n\
    mov         r0,sp\n\
    bl          fun_080455fc\n\
    b           LAB_08007b3c\n\
\n\
.space 2\n\
\n\
DAT_08007af8:\n\
    .4byte 0x02005750\n\
DAT_08007afc:\n\
    .4byte 0x0809A324\n\
DAT_08007b00:\n\
    .4byte 0x08669620\n\
DAT_08007b04:\n\
    .4byte 0x020025B4\n\
DAT_08007b08:\n\
    .4byte 0x0877BAF0\n\
DAT_08007b0c:\n\
    .4byte 0x02009B84\n\
LAB_08007b10:\n\
    ldr         r1,DAT_08007b74\n\
    ldr         r4,DAT_08007b78\n\
    ldr         r0,DAT_08007b7c\n\
    ldr         r3,[r0,#0x0]\n\
    lsl         r3,r3,#0x2\n\
    ldr         r5,DAT_08007b80\n\
    ldr         r0,DAT_08007b84\n\
    mov         r2,#0x0\n\
    ldrsb       r2,[r0,r2]\n\
    lsl         r2,r2,#0x1\n\
    add         r2,r2,r5\n\
    ldrh        r5,[r2,#0x0]\n\
    lsl         r0,r5,#0x1\n\
    add         r0,r0,r5\n\
    lsl         r0,r0,#0x4\n\
    add         r3,r3,r0\n\
    add         r4,#0x4\n\
    add         r3,r3,r4\n\
    ldr         r2,[r3,#0x0]\n\
    mov         r0,sp\n\
    bl          fun_080455fc\n\
LAB_08007b3c:\n\
    bl          fun_0803c1a4\n\
    ldr         r2,DAT_08007b88\n\
    mov         r0,sp\n\
    mov         r1,#0x85\n\
    bl          fun_0803c010\n\
    ldr         r0,DAT_08007b8c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007bac\n\
    ldr         r1,DAT_08007b90\n\
    ldr         r0,DAT_08007b84\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08007b94\n\
    cmp         r1,r0\n\
    beq         LAB_08007b9e\n\
    cmp         r1,r0\n\
    bgt         LAB_08007b98\n\
    sub         r0,#0xf\n\
    cmp         r1,r0\n\
    beq         LAB_08007b9e\n\
    b           LAB_08007ba8\n\
DAT_08007b74:\n\
    .4byte 0x0809A324\n\
DAT_08007b78:\n\
    .4byte 0x08669620\n\
DAT_08007b7c:\n\
    .4byte 0x020025B4\n\
DAT_08007b80:\n\
    .4byte 0x0877BA48\n\
DAT_08007b84:\n\
    .4byte 0x02009B84\n\
DAT_08007b88:\n\
    .4byte 0x0865FD94\n\
DAT_08007b8c:\n\
    .4byte 0x02005750\n\
DAT_08007b90:\n\
    .4byte 0x0877BB18\n\
DAT_08007b94:\n\
    .4byte 0x000007E9\n\
LAB_08007b98:\n\
    ldr         r0,DAT_08007ba4\n\
    cmp         r1,r0\n\
    bne         LAB_08007ba8\n\
LAB_08007b9e:\n\
    add         r0,r1,#0x0\n\
    b           LAB_08007bc4\n\
\n\
.space 2\n\
\n\
DAT_08007ba4:\n\
    .4byte 0x000007EB\n\
LAB_08007ba8:\n\
    mov         r0,#0x1\n\
    b           LAB_08007bc8\n\
LAB_08007bac:\n\
    ldr         r1,DAT_08007bf4\n\
    ldr         r0,DAT_08007bf8\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    bl          fun_08000ee8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
LAB_08007bc4:\n\
    bl          fun_080020bc\n\
LAB_08007bc8:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c24\n\
    cmp         r4,#0x0\n\
    beq         LAB_08007c24\n\
    ldr         r1,DAT_08007bfc\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c00\n\
    ldr         r0,DAT_08007bf8\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    strh        r0,[r1,#0x6]\n\
    mov         r0,#0x27\n\
    bl          fun_08001070\n\
    b           LAB_08007c24\n\
DAT_08007bf4:\n\
    .4byte 0x0877BAB4\n\
DAT_08007bf8:\n\
    .4byte 0x02009B84\n\
DAT_08007bfc:\n\
    .4byte 0x02005750\n\
LAB_08007c00:\n\
    ldr         r3,DAT_08007c50\n\
    ldrb        r0,[r3,#0x0]\n\
    cmp         r0,#0x11\n\
    bne         LAB_08007c0e\n\
    ldr         r1,DAT_08007c54\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_08007c0e:\n\
    ldr         r2,DAT_08007c58\n\
    ldr         r1,DAT_08007c5c\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r3,r0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r2,#0x0]\n\
    mov         r0,#0x22\n\
    bl          fun_08001088\n\
LAB_08007c24:\n\
    bl          fun_0800140c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c44\n\
    ldr         r0,DAT_08007c60\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c3a\n\
    bl          fun_08002844\n\
LAB_08007c3a:\n\
    bl          fun_080010d8\n\
    ldr         r1,DAT_08007c64\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
LAB_08007c44:\n\
    mov         r0,#0x0\n\
    add         sp,#0x34\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08007c50:\n\
    .4byte 0x02009B84\n\
DAT_08007c54:\n\
    .4byte 0x020025F8\n\
DAT_08007c58:\n\
    .4byte 0x020025E8\n\
DAT_08007c5c:\n\
    .4byte 0x0877BAB4\n\
DAT_08007c60:\n\
    .4byte 0x02005750\n\
DAT_08007c64:\n\
    .4byte 0x02002530\n\
    ");
}
__attribute__((naked)) void fun_08007c68()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_08001374\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c86\n\
    ldr         r4,DAT_08007cd8\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    add         r0,#0x1\n\
    ldr         r1,DAT_08007cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    bl          fun_080435d0\n\
    strb        r0,[r4,#0x0]\n\
LAB_08007c86:\n\
    bl          fun_0800135c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007ca6\n\
    ldr         r1,DAT_08007cd8\n\
    ldrb        r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bge         LAB_08007ca6\n\
    ldr         r0,DAT_08007cdc\n\
    ldrb        r0,[r0,#0x0]\n\
    sub         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
LAB_08007ca6:\n\
    bl          fun_080013c4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007cea\n\
    ldr         r0,DAT_08007cdc\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x12\n\
    bne         LAB_08007cea\n\
    ldr         r3,DAT_08007cd8\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r3,r0]\n\
    ldr         r2,DAT_08007ce0\n\
    ldrb        r1,[r2,#0x0]\n\
    cmp         r0,r1\n\
    blt         LAB_08007cd2\n\
    ldrb        r1,[r2,#0x1]\n\
    cmp         r0,r1\n\
    blt         LAB_08007cd2\n\
    ldrb        r1,[r2,#0x2]\n\
    cmp         r0,r1\n\
    bge         LAB_08007ce4\n\
LAB_08007cd2:\n\
    strb        r1,[r3,#0x0]\n\
    b           LAB_08007d4a\n\
\n\
.space 2\n\
\n\
DAT_08007cd8:\n\
    .4byte 0x02009B84\n\
DAT_08007cdc:\n\
    .4byte 0x02009B80\n\
DAT_08007ce0:\n\
    .4byte 0x0877BB28\n\
LAB_08007ce4:\n\
    mov         r0,#0x0\n\
    strb        r0,[r3,#0x0]\n\
    b           LAB_08007d4a\n\
LAB_08007cea:\n\
    bl          fun_080013dc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007d4a\n\
    ldr         r0,DAT_08007d10\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x12\n\
    bne         LAB_08007d4a\n\
    ldr         r4,DAT_08007d14\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08007d1c\n\
    ldr         r0,DAT_08007d18\n\
    ldrb        r0,[r0,#0x2]\n\
    strb        r0,[r4,#0x0]\n\
    b           LAB_08007d4a\n\
\n\
.space 2\n\
\n\
DAT_08007d10:\n\
    .4byte 0x02009B80\n\
DAT_08007d14:\n\
    .4byte 0x02009B84\n\
DAT_08007d18:\n\
    .4byte 0x0877BB28\n\
LAB_08007d1c:\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    ldr         r3,DAT_08007d30\n\
    ldrb        r2,[r3,#0x0]\n\
    cmp         r0,r2\n\
    bgt         LAB_08007d34\n\
    mov         r0,#0x0\n\
    strb        r0,[r4,#0x0]\n\
    b           LAB_08007d4a\n\
\n\
.space 2\n\
\n\
DAT_08007d30:\n\
    .4byte 0x0877BB28\n\
LAB_08007d34:\n\
    ldrb        r1,[r3,#0x2]\n\
    cmp         r0,r1\n\
    bgt         LAB_08007d40\n\
    ldrb        r1,[r3,#0x1]\n\
    cmp         r0,r1\n\
    ble         LAB_08007d44\n\
LAB_08007d40:\n\
    strb        r1,[r4,#0x0]\n\
    b           LAB_08007d4a\n\
LAB_08007d44:\n\
    cmp         r0,r2\n\
    ble         LAB_08007d4a\n\
    strb        r2,[r4,#0x0]\n\
LAB_08007d4a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}
