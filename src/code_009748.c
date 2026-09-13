__attribute__((naked)) void fun_08009748()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x27\n\
    bhi         LAB_08009772\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009778\n\
    add         r0,r0,r1\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x63\n\
    bhi         LAB_08009772\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009778\n\
    add         r0,r0,r1\n\
    add         r0,r0,r4\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
LAB_08009772:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009778:\n\
    .4byte 0x00000E5A\n\
    ");
}
__attribute__((naked)) void fun_0800977c()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x27\n\
    bhi         LAB_080097a6\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080097ac\n\
    add         r0,r0,r1\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080097a6\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080097ac\n\
    add         r0,r0,r1\n\
    add         r0,r0,r4\n\
    ldrb        r1,[r0,#0x0]\n\
    sub         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
LAB_080097a6:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080097ac:\n\
    .4byte 0x00000E5A\n\
    ");
}
__attribute__((naked)) void fun_080097b0()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_080097c8\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_0800457c\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080097c8:\n\
    .4byte 0x04000028\n\
    ");
}
__attribute__((naked)) void fun_080097cc()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r2,DAT_080097e8\n\
    ldrh        r4,[r2,#0xa]\n\
    add         r1,r4,#0x0\n\
    cmp         r1,#0x3\n\
    bne         LAB_080097de\n\
    ldrh        r0,[r2,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080097f4\n\
LAB_080097de:\n\
    cmp         r1,#0x0\n\
    beq         LAB_080097ec\n\
    sub         r0,r4,#0x1\n\
    strh        r0,[r2,#0xa]\n\
    b           LAB_080097f4\n\
DAT_080097e8:\n\
    .4byte 0x0200C890\n\
LAB_080097ec:\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
LAB_080097f4:\n\
    ldr         r0,DAT_08009808\n\
    ldrh        r1,[r0,#0xa]\n\
    cmp         r4,r1\n\
    beq         LAB_08009802\n\
    ldrh        r0,[r0,#0xa]\n\
    bl          fun_0800929c\n\
LAB_08009802:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009808:\n\
    .4byte 0x0200C890\n\
    ");
}
__attribute__((naked)) void fun_0800980c()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_0800983c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009848\n\
    ldr         r1,DAT_08009840\n\
    ldr         r2,[r1,#0x10]\n\
    ldr         r0,DAT_08009844\n\
    ldrh        r3,[r2,#0x12]\n\
    and         r0,r3\n\
    strh        r0,[r2,#0x12]\n\
    ldr         r2,[r1,#0x10]\n\
    mov         r0,#0x1\n\
    ldrh        r1,[r1,#0xe]\n\
    and         r0,r1\n\
    mov         r1,#0xb3\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009832\n\
    mov         r1,#0x3d\n\
LAB_08009832:\n\
    add         r0,r2,#0x0\n\
    mov         r2,#0x97\n\
    bl          fun_08004894\n\
    b           LAB_08009858\n\
DAT_0800983c:\n\
    .4byte 0x02005750\n\
DAT_08009840:\n\
    .4byte 0x0200C890\n\
DAT_08009844:\n\
    .4byte 0x0000FDFF\n\
LAB_08009848:\n\
    ldr         r0,DAT_0800985c\n\
    ldr         r1,[r0,#0x10]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r3,[r1,#0x12]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x12]\n\
LAB_08009858:\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800985c:\n\
    .4byte 0x0200C890\n\
    ");
}
__attribute__((naked)) void fun_08009860()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    bl          fun_08002fac\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,r4\n\
    beq         LAB_080098b2\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002fbc\n\
    cmp         r4,#0x0\n\
    beq         LAB_08009894\n\
    ldr         r1,DAT_08009888\n\
    ldr         r2,DAT_0800988c\n\
    ldr         r0,DAT_08009890\n\
    ldrh        r0,[r0,#0xe]\n\
    b           LAB_0800989c\n\
\n\
.space 2\n\
\n\
DAT_08009888:\n\
    .4byte 0x040000D4\n\
DAT_0800988c:\n\
    .4byte 0x0877BCEC\n\
DAT_08009890:\n\
    .4byte 0x0200C890\n\
LAB_08009894:\n\
    ldr         r1,DAT_080098b8\n\
    ldr         r2,DAT_080098bc\n\
    ldr         r0,DAT_080098c0\n\
    ldrh        r0,[r0,#0x2e]\n\
LAB_0800989c:\n\
    lsr         r0,r0,#0x1\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_080098c4\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
LAB_080098b2:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080098b8:\n\
    .4byte 0x040000D4\n\
DAT_080098bc:\n\
    .4byte 0x0877BCEC\n\
DAT_080098c0:\n\
    .4byte 0x0200C890\n\
DAT_080098c4:\n\
    .4byte 0x80000100\n\
    ");
}
__attribute__((naked)) void fun_080098c8()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r4,DAT_080098f0\n\
    ldrh        r0,[r4,#0xe]\n\
    bl          fun_0800977c\n\
    ldrh        r0,[r4,#0x2e]\n\
    bl          fun_08009748\n\
    mov         r0,#0x1\n\
    strh        r0,[r4,#0xc]\n\
    ldr         r1,DAT_080098f4\n\
    ldrh        r2,[r4,#0x2e]\n\
    lsr         r0,r2,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r0,[r4,#0x2e]\n\
    strh        r0,[r4,#0xe]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080098f0:\n\
    .4byte 0x0200C890\n\
DAT_080098f4:\n\
    .4byte 0x0200C8C0\n\
    ");
}
__attribute__((naked)) void fun_080098f8()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r2,#0x0\n\
    ldr         r1,DAT_08009940\n\
    ldr         r0,DAT_08009944\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_08009948\n\
    str         r0,[r1,#0x4]\n\
    ldr         r1,DAT_0800994c\n\
    str         r1,[r0,#0x0]\n\
    ldr         r3,DAT_08009950\n\
    str         r3,[r0,#0x4]\n\
    str         r2,[r0,#0x8]\n\
    add         r1,#0x48\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r2,r0\n\
    bcs         LAB_08009938\n\
    add         r6,r3,#0x0\n\
    ldr         r5,DAT_08009954\n\
    mov         r3,#0x0\n\
    add         r4,r0,#0x0\n\
LAB_08009920:\n\
    lsl         r0,r2,#0x3\n\
    add         r0,r0,r6\n\
    lsl         r1,r2,#0x5\n\
    add         r1,r1,r5\n\
    str         r1,[r0,#0x0]\n\
    strh        r3,[r0,#0x4]\n\
    strh        r3,[r0,#0x6]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,r4\n\
    bcc         LAB_08009920\n\
LAB_08009938:\n\
    mov         r0,#0x1\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08009940:\n\
    .4byte 0x0200D368\n\
DAT_08009944:\n\
    .4byte 0x08330A88\n\
DAT_08009948:\n\
    .4byte 0x0200C8D0\n\
DAT_0800994c:\n\
    .4byte 0x08330A24\n\
DAT_08009950:\n\
    .4byte 0x0200C8E0\n\
DAT_08009954:\n\
    .4byte 0x08324AB0\n\
    ");
}
__attribute__((naked)) void fun_08009958()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x14\n\
    ldr         r0,DAT_08009ac0\n\
    bl          fun_08001170\n\
    bl          fun_08001124\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1a\n\
    bne         LAB_08009970\n\
    b           LAB_08009a9e\n\
LAB_08009970:\n\
    add         r1,sp,#0x10\n\
    mov         r2,#0x0\n\
    strh        r2,[r1,#0x0]\n\
    ldr         r4,DAT_08009ac4\n\
    str         r1,[r4,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08009ac8\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    strh        r2,[r1,#0x0]\n\
    str         r1,[r4,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08009acc\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x13\n\
    mov         r2,#0xfa\n\
    lsl         r2,r2,#0x5\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r5,DAT_08009ad0\n\
    add         r0,r5,#0x0\n\
    bl          fun_08039e64\n\
    mov         r1,sp\n\
    ldr         r3,[r5,#0x0]\n\
    ldrh        r0,[r3,#0x0]\n\
    mov         r2,#0x0\n\
    strh        r0,[r1,#0x4]\n\
    ldrh        r0,[r3,#0x2]\n\
    strh        r0,[r1,#0x6]\n\
    mov         r0,sp\n\
    strh        r2,[r0,#0x8]\n\
    strh        r2,[r0,#0xc]\n\
    str         r2,[sp,#0x0]\n\
    strh        r2,[r0,#0xa]\n\
    mov         r1,#0x3\n\
    bl          fun_08004da8\n\
    mov         r0,#0x3\n\
    mov         r1,#0x3\n\
    bl          fun_08005b40\n\
    ldr         r0,DAT_08009ad4\n\
    str         r0,[r4,#0x0]\n\
    ldr         r0,DAT_08009ad8\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,DAT_08009adc\n\
    str         r0,[r4,#0x8]\n\
    ldr         r0,[r4,#0x8]\n\
    bl          fun_08004c10\n\
    add         r1,r0,#0x0\n\
    ldr         r0,DAT_08009ae0\n\
    and         r0,r1\n\
    bl          fun_08004c04\n\
    ldr         r0,DAT_08009ae4\n\
    bl          fun_0800dcc8\n\
    bl          fun_08001118\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    cmp         r4,#0x0\n\
    bne         LAB_08009a08\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009ae8\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
LAB_08009a08:\n\
    mov         r0,#0x1\n\
    bl          fun_080036b0\n\
    mov         r0,#0x2\n\
    bl          fun_08004670\n\
    bl          fun_0800e950\n\
    bl          fun_0800a094\n\
    bl          fun_0800fb10\n\
    bl          fun_08001118\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009a58\n\
    bl          fun_0800a070\n\
    bl          fun_08001c8c\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08009aec\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x6\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009a4c\n\
    mov         r0,#0x16\n\
    bl          fun_08001088\n\
LAB_08009a4c:\n\
    mov         r0,#0x40\n\
    bl          fun_080017b8\n\
    mov         r0,#0x41\n\
    bl          fun_080017b8\n\
LAB_08009a58:\n\
    ldr         r0,DAT_08009af0\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08009af4\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_08009af8\n\
    ldrh        r0,[r1,#0x4]\n\
    ldrh        r1,[r1,#0x6]\n\
    bl          fun_0803a140\n\
    bl          fun_08009ea0\n\
    bl          fun_08009eec\n\
    bl          fun_08009f38\n\
    bl          fun_08009fb4\n\
    bl          fun_08009ffc\n\
    bl          fun_0800a028\n\
    bl          fun_08009cf4\n\
    ldr         r0,DAT_08009afc\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_08009b00\n\
    str         r0,[r1,#0x0]\n\
    mov         r2,#0x0\n\
    mov         r1,#0x8\n\
    strh        r1,[r0,#0x2]\n\
    strh        r1,[r0,#0x4]\n\
    ldr         r0,DAT_08009b04\n\
    strh        r2,[r0,#0x0]\n\
LAB_08009a9e:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009aec\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,DAT_08009b08\n\
    and         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    mov         r1,#0xa0\n\
    lsl         r1,r1,#0x13\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x14\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08009ac0:\n\
    .4byte 0x08009E8D\n\
DAT_08009ac4:\n\
    .4byte 0x040000D4\n\
DAT_08009ac8:\n\
    .4byte 0x8100C000\n\
DAT_08009acc:\n\
    .4byte 0x81000200\n\
DAT_08009ad0:\n\
    .4byte 0x0200C8D0\n\
DAT_08009ad4:\n\
    .4byte 0x0844993C\n\
DAT_08009ad8:\n\
    .4byte 0x0600C000\n\
DAT_08009adc:\n\
    .4byte 0x80002000\n\
DAT_08009ae0:\n\
    .4byte 0x0000FEF7\n\
DAT_08009ae4:\n\
    .4byte 0x020003B0\n\
DAT_08009ae8:\n\
    .4byte 0x00000DD6\n\
DAT_08009aec:\n\
    .4byte 0x00000E84\n\
DAT_08009af0:\n\
    .4byte 0x02002530\n\
DAT_08009af4:\n\
    .4byte 0x0200DCA0\n\
DAT_08009af8:\n\
    .4byte 0x020006A0\n\
DAT_08009afc:\n\
    .4byte 0x08449588\n\
DAT_08009b00:\n\
    .4byte 0x0200D370\n\
DAT_08009b04:\n\
    .4byte 0x0200252C\n\
DAT_08009b08:\n\
    .4byte 0xFFFFDFFF\n\
    ");
}
__attribute__((naked)) void fun_08009b0c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x18\n\
    bl          fun_08001130\n\
    bl          fun_0800cd48\n\
    bl          fun_0803c1a4\n\
    bl          fun_080020a4\n\
    ldr         r6,DAT_08009b70\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009b2e\n\
    bl          fun_0800d30c\n\
LAB_08009b2e:\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_08009b74\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009b40\n\
    bl          fun_0800d700\n\
LAB_08009b40:\n\
    ldr         r4,DAT_08009b78\n\
    ldr         r1,[r4,#0x0]\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009b60\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009b7c\n\
LAB_08009b60:\n\
    ldr         r1,[r4,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r2,[r1,#0x12]\n\
    orr         r0,r2\n\
    b           LAB_08009b84\n\
\n\
.space 2\n\
\n\
DAT_08009b70:\n\
    .4byte 0x00000DD6\n\
DAT_08009b74:\n\
    .4byte 0x00000DCA\n\
DAT_08009b78:\n\
    .4byte 0x0200D370\n\
LAB_08009b7c:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,DAT_08009c2c\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
LAB_08009b84:\n\
    strh        r0,[r1,#0x12]\n\
    bl          fun_0800138c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009ba4\n\
    ldr         r1,DAT_08009c30\n\
    ldr         r0,[r1,#0x8]\n\
    cmp         r0,#0x1\n\
    beq         LAB_08009ba4\n\
    ldrb        r0,[r1,#0x18]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009ba4\n\
    mov         r0,#0x1c\n\
    bl          fun_08001088\n\
LAB_08009ba4:\n\
    bl          fun_080013a8\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009bc2\n\
    ldr         r1,DAT_08009c30\n\
    ldrb        r0,[r1,#0x18]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009bc2\n\
    ldr         r0,[r1,#0x8]\n\
    cmp         r0,#0x1\n\
    beq         LAB_08009bc2\n\
    mov         r0,#0x7\n\
    bl          fun_08001088\n\
LAB_08009bc2:\n\
    bl          fun_080020a4\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x3a\n\
    bne         LAB_08009bd6\n\
    bl          fun_0800e90c\n\
LAB_08009bd6:\n\
    ldr         r0,DAT_08009c34\n\
    bl          fun_0800d9fc\n\
    ldr         r2,DAT_08009c38\n\
    ldr         r0,DAT_08009c30\n\
    mov         r1,#0x4\n\
    ldrsh       r3,[r0,r1]\n\
    mov         r1,#0x6\n\
    ldrsh       r0,[r0,r1]\n\
    str         r0,[sp,#0x0]\n\
    mov         r0,#0x0\n\
    mov         r1,#0x0\n\
    bl          fun_080032a0\n\
    bl          fun_0803ab30\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08009c3c\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009c1c\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009c40\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0xd\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009c1c\n\
    bl          fun_0800f924\n\
LAB_08009c1c:\n\
    bl          fun_0803a00c\n\
    mov         r0,#0x0\n\
    add         sp,#0x18\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08009c2c:\n\
    .4byte 0x0000FDFF\n\
DAT_08009c30:\n\
    .4byte 0x020006A0\n\
DAT_08009c34:\n\
    .4byte 0x020003B0\n\
DAT_08009c38:\n\
    .4byte 0x084498C8\n\
DAT_08009c3c:\n\
    .4byte 0x00000DCA\n\
DAT_08009c40:\n\
    .4byte 0x00000E84\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009cd0\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009c64\n\
    ldr         r4,DAT_08009cd4\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009c64\n\
    bl          fun_08003b00\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x0]\n\
LAB_08009c64:\n\
    bl          fun_0800e2e8\n\
    bl          fun_0800cef0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08009cd8\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009c92\n\
    ldr         r0,DAT_08009cdc\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r2,DAT_08009ce0\n\
    add         r0,r1,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x2\n\
    bls         LAB_08009c8e\n\
    cmp         r1,#0x28\n\
    bne         LAB_08009c92\n\
LAB_08009c8e:\n\
    bl          fun_0800ddc8\n\
LAB_08009c92:\n\
    ldr         r1,DAT_08009ce4\n\
    ldr         r2,DAT_08009ce8\n\
    add         r0,r1,r2\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009ca6\n\
    ldr         r0,DAT_08009cec\n\
    add         r1,r1,r0\n\
    mov         r0,#0x2\n\
    strb        r0,[r1,#0x0]\n\
LAB_08009ca6:\n\
    ldr         r0,DAT_08009cdc\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x1a\n\
    beq         LAB_08009cc6\n\
    bl          fun_0803dd5c\n\
    ldr         r0,DAT_08009cf0\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    bl          fun_0800457c\n\
    bl          fun_0803a980\n\
    bl          fun_0803abbc\n\
LAB_08009cc6:\n\
    mov         r0,#0x0\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08009cd0:\n\
    .4byte 0x00000DD6\n\
DAT_08009cd4:\n\
    .4byte 0x0200D40C\n\
DAT_08009cd8:\n\
    .4byte 0x00000DDA\n\
DAT_08009cdc:\n\
    .4byte 0x020025D8\n\
DAT_08009ce0:\n\
    .4byte 0xFFFFFC17\n\
DAT_08009ce4:\n\
    .4byte 0x020006A0\n\
DAT_08009ce8:\n\
    .4byte 0x00000C2C\n\
DAT_08009cec:\n\
    .4byte 0x00000C34\n\
DAT_08009cf0:\n\
    .4byte 0x0200D370\n\
    ");
}
__attribute__((naked)) void fun_08009cf4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009e78\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08009d0e\n\
    b           LAB_08009e6a\n\
LAB_08009d0e:\n\
    bl          fun_080020a4\n\
    mov         r4,#0xe5\n\
    lsl         r4,r4,#0x4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x1\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r7,#0x2\n\
    orr         r1,r7\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x4\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x8\n\
    mov         r10,r2\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x10\n\
    mov         r9,r2\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x20\n\
    mov         r8,r2\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r6,#0x40\n\
    orr         r1,r6\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r5,#0x80\n\
    orr         r1,r5\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,#0x34\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,r10\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,r9\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,r8\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    orr         r1,r6\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    orr         r1,r5\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x1\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    mov         r0,#0x26\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009dee\n\
    mov         r0,#0x26\n\
    bl          fun_080018e4\n\
LAB_08009dee:\n\
    mov         r0,#0x27\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009e00\n\
    mov         r0,#0x27\n\
    bl          fun_080018e4\n\
LAB_08009e00:\n\
    mov         r0,#0x28\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009e12\n\
    mov         r0,#0x28\n\
    bl          fun_080018e4\n\
LAB_08009e12:\n\
    mov         r0,#0x29\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009e24\n\
    mov         r0,#0x29\n\
    bl          fun_080018e4\n\
LAB_08009e24:\n\
    mov         r0,#0x2a\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009e36\n\
    mov         r0,#0x2a\n\
    bl          fun_080018e4\n\
LAB_08009e36:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08009e7c\n\
    add         r0,r0,r1\n\
    mov         r1,#0x7\n\
    strb        r1,[r0,#0x0]\n\
    mov         r0,#0xd\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
    ldr         r0,DAT_08009e80\n\
    mov         r2,#0x8d\n\
    lsl         r2,r2,#0x3\n\
    add         r1,r0,r2\n\
    str         r7,[r1,#0x0]\n\
    mov         r1,#0x91\n\
    lsl         r1,r1,#0x3\n\
    add         r0,r0,r1\n\
    str         r7,[r0,#0x0]\n\
    mov         r0,#0x6d\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    bl          fun_0800dd24\n\
LAB_08009e6a:\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009e78:\n\
    .4byte 0x00000DF8\n\
DAT_08009e7c:\n\
    .4byte 0x00000E8C\n\
DAT_08009e80:\n\
    .4byte 0x020006A0\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    push        {lr}\n\
    bl          fun_0803a9ec\n\
    ldr         r0,DAT_08009e9c\n\
    bl          fun_0800dd04\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009e9c:\n\
    .4byte 0x020003B0\n\
    ");
}
__attribute__((naked)) void fun_08009ea0()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_08009ee0\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009eda\n\
    ldr         r1,DAT_08009ee4\n\
    ldr         r0,DAT_08009ee8\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,#0x24\n\
    lsl         r0,r0,#0x5\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08009eda\n\
    mov         r0,#0x24\n\
    bl          fun_080017b8\n\
    mov         r0,#0x1e\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
LAB_08009eda:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009ee0:\n\
    .4byte 0x00000DEC\n\
DAT_08009ee4:\n\
    .4byte 0x020006A0\n\
DAT_08009ee8:\n\
    .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_08009eec()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_08009f2c\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009f26\n\
    ldr         r1,DAT_08009f30\n\
    ldr         r0,DAT_08009f34\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,#0x1a\n\
    lsl         r0,r0,#0x5\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08009f26\n\
    mov         r0,#0x1a\n\
    bl          fun_080017b8\n\
    mov         r0,#0x1e\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
LAB_08009f26:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08009f2c:\n\
    .4byte 0x00000DEE\n\
DAT_08009f30:\n\
    .4byte 0x020006A0\n\
DAT_08009f34:\n\
    .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_08009f38()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_080020a4\n\
    mov         r1,#0xdf\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009faa\n\
    bl          fun_080020a4\n\
    mov         r1,#0xdf\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08009f84\n\
    ldr         r0,DAT_08009f88\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,#0xc\n\
    lsl         r0,r0,#0x5\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    beq         LAB_08009f90\n\
    ldr         r1,DAT_08009f8c\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009faa\n\
    strh        r2,[r1,#0x0]\n\
    mov         r0,#0xfe\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080003e0\n\
    b           LAB_08009faa\n\
\n\
.space 2\n\
\n\
DAT_08009f84:\n\
    .4byte 0x020006A0\n\
DAT_08009f88:\n\
    .4byte 0x02000690\n\
DAT_08009f8c:\n\
    .4byte 0x0200ED30\n\
LAB_08009f90:\n\
    ldr         r1,DAT_08009fb0\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009fa4\n\
    strh        r2,[r1,#0x0]\n\
    mov         r0,#0xfe\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_080003e0\n\
LAB_08009fa4:\n\
    mov         r0,#0xc\n\
    bl          fun_080017b8\n\
LAB_08009faa:\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08009fb0:\n\
    .4byte 0x0200ED30\n\
    ");
}
__attribute__((naked)) void fun_08009fb4()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_08009ff0\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08009fe8\n\
    ldr         r1,DAT_08009ff4\n\
    ldr         r0,DAT_08009ff8\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,#0x4\n\
    lsl         r0,r0,#0x5\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08009fe8\n\
    mov         r0,#0x4\n\
    bl          fun_080017b8\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
LAB_08009fe8:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08009ff0:\n\
    .4byte 0x00000DF2\n\
DAT_08009ff4:\n\
    .4byte 0x020006A0\n\
DAT_08009ff8:\n\
    .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_08009ffc()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a024\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a01e\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a024\n\
    add         r0,r0,r1\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x17\n\
    bl          fun_08001088\n\
LAB_0800a01e:\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800a024:\n\
    .4byte 0x00000DF4\n\
    ");
}
__attribute__((naked)) void fun_0800a028()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_0800a064\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a05c\n\
    ldr         r1,DAT_0800a068\n\
    ldr         r0,DAT_0800a06c\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r0,#0xd\n\
    lsl         r0,r0,#0x5\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_0800a05c\n\
    mov         r0,#0xd\n\
    bl          fun_080017b8\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
LAB_0800a05c:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800a064:\n\
    .4byte 0x00000DF6\n\
DAT_0800a068:\n\
    .4byte 0x020006A0\n\
DAT_0800a06c:\n\
    .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_0800a070()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    mov         r4,#0x0\n\
    mov         r5,#0xa8\n\
    lsl         r5,r5,#0x1\n\
LAB_0800a078:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_080034d4\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,r5\n\
    bls         LAB_0800a078\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800a094()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    mov         r4,#0x0\n\
    ldr         r5,DAT_0800a0fc\n\
    ldr         r6,DAT_0800a100\n\
    add         r7,r6,#0x0\n\
    add         r7,#0xc\n\
    mov         r8,r5\n\
    mov         r9,r6\n\
LAB_0800a0aa:\n\
    bl          fun_08001118\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a0c8\n\
    ldrh        r1,[r5,#0x0]\n\
    add         r0,r1,r4\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r6\n\
    mov         r1,#0x2c\n\
    mul         r1,r4\n\
    ldr         r2,DAT_0800a104\n\
    add         r1,r1,r2\n\
    bl          fun_080004ac\n\
LAB_0800a0c8:\n\
    ldrh        r1,[r5,#0x0]\n\
    add         r0,r1,r4\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r7\n\
    mov         r1,#0x0\n\
    str         r1,[r0,#0x0]\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x4c\n\
    bls         LAB_0800a0aa\n\
    mov         r0,r8\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x4d\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    mov         r0,r9\n\
    bl          fun_0803aa14\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800a0fc:\n\
    .4byte 0x02000690\n\
DAT_0800a100:\n\
    .4byte 0x020006A0\n\
DAT_0800a104:\n\
    .4byte 0x0877BDE8\n\
    ");
}
__attribute__((naked)) void fun_0800a108()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r6,#0x0\n\
    mov         r7,#0x0\n\
LAB_0800a10e:\n\
    mov         r0,#0x10\n\
    bl          fun_08002c04\n\
    mov         r0,#0x20\n\
    bl          fun_08002c04\n\
    ldr         r0,DAT_0800a184\n\
    lsl         r4,r6,#0x1\n\
    add         r0,r4,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x4\n\
    ldr         r1,DAT_0800a188\n\
    add         r0,r0,r1\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_0800a18c\n\
    lsl         r3,r6,#0x2\n\
    add         r3,r3,r1\n\
    str         r0,[r3,#0x0]\n\
    strh        r7,[r0,#0x0]\n\
    ldr         r5,[r3,#0x0]\n\
    ldr         r0,DAT_0800a190\n\
    ldr         r2,DAT_0800a194\n\
    ldrh        r1,[r0,#0x0]\n\
    ldrh        r2,[r2,#0x0]\n\
    sub         r0,r2,r1\n\
    asr         r0,r0,#0x1\n\
    add         r1,r1,r0\n\
    ldr         r2,DAT_0800a198\n\
    add         r0,r6,r2\n\
    add         r1,r1,r0\n\
    strh        r1,[r5,#0x2]\n\
    ldr         r3,[r3,#0x0]\n\
    ldr         r0,PTR_DAT_0800a19c\n\
    ldr         r2,PTR_DAT_0800a1a0\n\
    ldrh        r1,[r0,#0x0]\n\
    ldrh        r2,[r2,#0x0]\n\
    sub         r0,r2,r1\n\
    asr         r0,r0,#0x1\n\
    add         r1,r1,r0\n\
    strh        r1,[r3,#0x4]\n\
    ldr         r0,PTR_DAT_0800a1a4\n\
    add         r4,r4,r0\n\
    strh        r7,[r4,#0x0]\n\
    add         r0,r6,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    cmp         r6,#0x8\n\
    bls         LAB_0800a10e\n\
    ldr         r1,PTR_DAT_0800a1a8\n\
    mov         r0,#0x9\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,PTR_DAT_0800a1ac\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800a184:\n\
    .4byte 0x0877CB24\n\
DAT_0800a188:\n\
    .4byte 0x08063700\n\
DAT_0800a18c:\n\
    .4byte 0x0200D3D0\n\
DAT_0800a190:\n\
    .4byte 0x0200D3F8\n\
DAT_0800a194:\n\
    .4byte 0x0200D408\n\
DAT_0800a198:\n\
    .4byte 0x0000FFFC\n\
                            PTR_DAT_0800a19c:\n\
    .4byte DAT_0200d3fc\n\
                            PTR_DAT_0800a1a0:\n\
    .4byte DAT_0200d38c\n\
                            PTR_DAT_0800a1a4:\n\
    .4byte DAT_0200d3b0\n\
                            PTR_DAT_0800a1a8:\n\
    .4byte DAT_0200d394\n\
                            PTR_DAT_0800a1ac:\n\
    .4byte DAT_0200d388\n\
    ");
}
__attribute__((naked)) void fun_0800a1b0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    ldr         r0,DAT_0800a314\n\
    ldr         r1,DAT_0800a318\n\
    ldrh        r2,[r1,#0x4]\n\
    sub         r2,#0x78\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r0,DAT_0800a31c\n\
    ldrh        r1,[r1,#0x6]\n\
    sub         r1,#0x50\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r3,DAT_0800a320\n\
    ldr         r0,DAT_0800a324\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r0,r2\n\
    strh        r0,[r3,#0x0]\n\
    ldr         r3,DAT_0800a328\n\
    ldr         r0,DAT_0800a32c\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,r0,r1\n\
    strh        r0,[r3,#0x0]\n\
    ldr         r3,DAT_0800a330\n\
    ldr         r0,DAT_0800a334\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r2,r0,r2\n\
    strh        r2,[r3,#0x0]\n\
    ldr         r2,DAT_0800a338\n\
    ldr         r0,DAT_0800a33c\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r1,r0,r1\n\
    strh        r1,[r2,#0x0]\n\
    ldr         r1,DAT_0800a340\n\
    mov         r0,#0x3\n\
    ldrh        r1,[r1,#0x0]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a206\n\
    ldr         r1,DAT_0800a344\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800a206:\n\
    mov         r0,#0x0\n\
    mov         r8,r0\n\
    ldr         r1,DAT_0800a348\n\
    ldrh        r1,[r1,#0x0]\n\
    cmp         r8,r1\n\
    bcs         LAB_0800a2f4\n\
    mov         r10,r0\n\
LAB_0800a214:\n\
    mov         r0,#0x10\n\
    bl          fun_08002c04\n\
    mov         r0,#0x20\n\
    bl          fun_08002c04\n\
    ldr         r0,DAT_0800a344\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r2,r8\n\
    lsl         r2,r2,#0x2\n\
    mov         r9,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a2ae\n\
    ldr         r5,DAT_0800a34c\n\
    add         r5,r9\n\
    ldr         r4,[r5,#0x0]\n\
    ldrh        r0,[r4,#0x0]\n\
    add         r0,#0x1\n\
    mov         r1,#0xc\n\
    bl          __modsi3\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r4,[r5,#0x0]\n\
    ldr         r0,DAT_0800a320\n\
    ldr         r1,DAT_0800a330\n\
    ldrh        r2,[r0,#0x0]\n\
    ldrh        r1,[r1,#0x0]\n\
    sub         r0,r1,r2\n\
    lsr         r1,r0,#0x1f\n\
    add         r0,r0,r1\n\
    asr         r0,r0,#0x1\n\
    add         r2,r2,r0\n\
    ldr         r0,DAT_0800a350\n\
    add         r0,r8\n\
    add         r2,r2,r0\n\
    ldr         r0,DAT_0800a354\n\
    mov         r7,r8\n\
    lsl         r3,r7,#0x1\n\
    add         r0,r0,r3\n\
    mov         r12,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r2,r0,r2\n\
    ldr         r0,DAT_0800a358\n\
    add         r6,r3,r0\n\
    ldrh        r1,[r6,#0x0]\n\
    add         r2,r1,r2\n\
    strh        r2,[r4,#0x2]\n\
    ldr         r4,[r5,#0x0]\n\
    ldr         r0,DAT_0800a328\n\
    ldr         r1,DAT_0800a338\n\
    ldrh        r2,[r0,#0x0]\n\
    ldrh        r1,[r1,#0x0]\n\
    sub         r0,r1,r2\n\
    lsr         r1,r0,#0x1f\n\
    add         r0,r0,r1\n\
    asr         r0,r0,#0x1\n\
    add         r2,r2,r0\n\
    ldr         r1,DAT_0800a35c\n\
    ldrh        r7,[r4,#0x0]\n\
    lsl         r0,r7,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    add         r2,r0,r2\n\
    ldr         r0,DAT_0800a360\n\
    add         r3,r3,r0\n\
    ldrh        r3,[r3,#0x0]\n\
    add         r2,r3,r2\n\
    strh        r2,[r4,#0x4]\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x3\n\
    bhi         LAB_0800a2ae\n\
    ldrh        r2,[r6,#0x0]\n\
    mov         r1,r12\n\
    ldrh        r1,[r1,#0x0]\n\
    add         r0,r2,r1\n\
    strh        r0,[r6,#0x0]\n\
LAB_0800a2ae:\n\
    ldr         r1,DAT_0800a34c\n\
    mov         r2,r9\n\
    add         r0,r2,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r6,r8\n\
    add         r6,#0x1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a2e6\n\
    mov         r5,#0x0\n\
    add         r7,r1,#0x0\n\
LAB_0800a2c4:\n\
    lsl         r0,r5,#0x2\n\
    add         r4,r0,r7\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a2d6\n\
    bl          fun_08003b00\n\
    mov         r3,r10\n\
    str         r3,[r4,#0x0]\n\
LAB_0800a2d6:\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    cmp         r5,#0x8\n\
    bls         LAB_0800a2c4\n\
    mov         r0,r10\n\
    ldr         r7,DAT_0800a348\n\
    strh        r0,[r7,#0x0]\n\
LAB_0800a2e6:\n\
    lsl         r0,r6,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
    ldr         r1,DAT_0800a348\n\
    ldrh        r1,[r1,#0x0]\n\
    cmp         r8,r1\n\
    bcc         LAB_0800a214\n\
LAB_0800a2f4:\n\
    ldr         r2,DAT_0800a348\n\
    ldrh        r1,[r2,#0x0]\n\
    cmp         r1,#0x0\n\
    bne         LAB_0800a300\n\
    ldr         r0,DAT_0800a364\n\
    strh        r1,[r0,#0x0]\n\
LAB_0800a300:\n\
    ldr         r1,DAT_0800a344\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800a314:\n\
    .4byte 0x0200D404\n\
DAT_0800a318:\n\
    .4byte 0x020006A0\n\
DAT_0800a31c:\n\
    .4byte 0x0200D3AC\n\
DAT_0800a320:\n\
    .4byte 0x0200D3F8\n\
DAT_0800a324:\n\
    .4byte 0x0200D400\n\
DAT_0800a328:\n\
    .4byte 0x0200D3FC\n\
DAT_0800a32c:\n\
    .4byte 0x0200D384\n\
DAT_0800a330:\n\
    .4byte 0x0200D408\n\
DAT_0800a334:\n\
    .4byte 0x0200D398\n\
DAT_0800a338:\n\
    .4byte 0x0200D38C\n\
DAT_0800a33c:\n\
    .4byte 0x0200D3A8\n\
DAT_0800a340:\n\
    .4byte 0x0200D39C\n\
DAT_0800a344:\n\
    .4byte 0x0200D388\n\
DAT_0800a348:\n\
    .4byte 0x0200D394\n\
DAT_0800a34c:\n\
    .4byte 0x0200D3D0\n\
DAT_0800a350:\n\
    .4byte 0x0000FFFC\n\
DAT_0800a354:\n\
    .4byte 0x0877CB36\n\
DAT_0800a358:\n\
    .4byte 0x0200D3B0\n\
DAT_0800a35c:\n\
    .4byte 0x0877CB4E\n\
DAT_0800a360:\n\
    .4byte 0x0877CB66\n\
DAT_0800a364:\n\
    .4byte 0x0200D380\n\
    ");
}
__attribute__((naked)) void fun_0800a368()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    mov         r8,r0\n\
    mov         r9,r1\n\
    add         r6,r2,#0x0\n\
    add         r7,r3,#0x0\n\
    ldrh        r0,[r6,#0x0]\n\
    ldrh        r1,[r7,#0x0]\n\
    bl          fun_0803ab18\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    and         r1,r0\n\
    mov         r0,#0x4\n\
    str         r0,[sp,#0x4]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800a396\n\
    mov         r1,#0x2\n\
    str         r1,[sp,#0x4]\n\
LAB_0800a396:\n\
    ldr         r1,DAT_0800a418\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_0800a41c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a3aa\n\
    bl          fun_0800a1b0\n\
LAB_0800a3aa:\n\
    ldr         r1,DAT_0800a420\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a3e0\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r5,#0x0\n\
    ldr         r2,DAT_0800a424\n\
    mov         r10,r2\n\
LAB_0800a3bc:\n\
    lsl         r0,r5,#0x2\n\
    mov         r3,r10\n\
    add         r4,r0,r3\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a3d0\n\
    bl          fun_08003b00\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x0]\n\
LAB_0800a3d0:\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    cmp         r5,#0x8\n\
    bls         LAB_0800a3bc\n\
    ldr         r1,DAT_0800a428\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800a3e0:\n\
    ldr         r1,DAT_0800a42c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_0800140c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a43e\n\
    mov         r0,#0x23\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a43e\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a430\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a434\n\
    bl          fun_0800ddc8\n\
    mov         r0,#0xb\n\
    bl          fun_080016f0\n\
    b           LAB_0800a43e\n\
\n\
.space 2\n\
\n\
DAT_0800a418:\n\
    .4byte 0x0200D39C\n\
DAT_0800a41c:\n\
    .4byte 0x0200D380\n\
DAT_0800a420:\n\
    .4byte 0x0200D3F4\n\
DAT_0800a424:\n\
    .4byte 0x0200D3D0\n\
DAT_0800a428:\n\
    .4byte 0x0200D394\n\
DAT_0800a42c:\n\
    .4byte 0x02002554\n\
DAT_0800a430:\n\
    .4byte 0x00000DDA\n\
LAB_0800a434:\n\
    bl          fun_0800dd50\n\
    mov         r0,#0xa\n\
    bl          fun_080016f0\n\
LAB_0800a43e:\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800a4d0\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a450\n\
    mov         r2,#0x5\n\
    str         r2,[sp,#0x4]\n\
LAB_0800a450:\n\
    ldr         r4,DAT_0800a4d4\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrh        r3,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    mov         r1,#0x5\n\
    add         r2,r4,#0x0\n\
    bl          fun_080032a0\n\
    bl          fun_080014d4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a476\n\
    ldrh        r3,[r7,#0x0]\n\
    ldr         r1,[sp,#0x4]\n\
    add         r0,r3,r1\n\
    strh        r0,[r7,#0x0]\n\
LAB_0800a476:\n\
    bl          fun_08001454\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a488\n\
    ldrh        r2,[r6,#0x0]\n\
    ldr         r3,[sp,#0x4]\n\
    sub         r0,r2,r3\n\
    strh        r0,[r6,#0x0]\n\
LAB_0800a488:\n\
    bl          fun_080014bc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a49a\n\
    ldrh        r1,[r7,#0x0]\n\
    ldr         r2,[sp,#0x4]\n\
    sub         r0,r1,r2\n\
    strh        r0,[r7,#0x0]\n\
LAB_0800a49a:\n\
    bl          fun_0800146c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a4ac\n\
    ldrh        r3,[r6,#0x0]\n\
    ldr         r1,[sp,#0x4]\n\
    add         r0,r3,r1\n\
    strh        r0,[r6,#0x0]\n\
LAB_0800a4ac:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800a4d8\n\
    add         r0,r0,r2\n\
    ldr         r4,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x6\n\
    and         r4,r0\n\
    cmp         r4,#0x0\n\
    beq         LAB_0800a4dc\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800c8e4\n\
    b           LAB_0800a5ca\n\
\n\
.space 2\n\
\n\
DAT_0800a4d0:\n\
    .4byte 0x00000DDA\n\
DAT_0800a4d4:\n\
    .4byte 0x084498D8\n\
DAT_0800a4d8:\n\
    .4byte 0x00000E84\n\
LAB_0800a4dc:\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800b244\n\
    str         r4,[sp,#0x0]\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800a7a8\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800c608\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800c8e4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a59e\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a59e\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800aa38\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a59e\n\
    mov         r0,#0x1\n\
    str         r0,[sp,#0x0]\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800a7a8\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a59e\n\
    bl          fun_080020a4\n\
    mov         r3,#0xde\n\
    lsl         r3,r3,#0x4\n\
    add         r0,r0,r3\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x3a\n\
    beq         LAB_0800a59e\n\
    ldr         r5,DAT_0800a5dc\n\
    ldr         r0,DAT_0800a5e0\n\
    add         r4,r5,r0\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x1\n\
    bne         LAB_0800a59e\n\
    mov         r0,#0x2\n\
    bl          fun_080016f0\n\
    mov         r2,#0x2\n\
    str         r2,[r4,#0x0]\n\
    ldrh        r1,[r5,#0x4]\n\
    ldr         r3,DAT_0800a5e4\n\
    add         r0,r5,r3\n\
    mov         r4,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldrh        r1,[r5,#0x6]\n\
    sub         r1,#0xc\n\
    add         r3,#0x2\n\
    add         r0,r5,r3\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_0800a5e8\n\
    add         r0,r5,r1\n\
    strb        r2,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800a5ec\n\
    add         r0,r0,r2\n\
    strb        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a5f0\n\
    ldrb        r1,[r1,#0x0]\n\
    ldr         r3,DAT_0800a5f4\n\
    add         r0,r0,r3\n\
    strb        r1,[r0,#0x0]\n\
LAB_0800a59e:\n\
    ldr         r4,DAT_0800a5f8\n\
    ldrh        r0,[r6,#0x0]\n\
    ldrh        r1,[r4,#0x0]\n\
    cmp         r0,r1\n\
    bne         LAB_0800a5ae\n\
    ldrh        r2,[r7,#0x0]\n\
    cmp         r2,r0\n\
    beq         LAB_0800a5ca\n\
LAB_0800a5ae:\n\
    bl          fun_080020a4\n\
    ldrb        r0,[r0,#0x1c]\n\
    mov         r1,#0x3\n\
    bl          __umodsi3\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a5ca\n\
    ldrh        r0,[r6,#0x0]\n\
    strh        r0,[r4,#0x0]\n\
    ldr         r1,DAT_0800a5fc\n\
    ldrh        r0,[r7,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800a5ca:\n\
    add         sp,#0x8\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800a5dc:\n\
    .4byte 0x020006A0\n\
DAT_0800a5e0:\n\
    .4byte 0x00000C48\n\
DAT_0800a5e4:\n\
    .4byte 0x00000C44\n\
DAT_0800a5e8:\n\
    .4byte 0x00000C58\n\
DAT_0800a5ec:\n\
    .4byte 0x00000DBD\n\
DAT_0800a5f0:\n\
    .4byte 0x020117E0\n\
DAT_0800a5f4:\n\
    .4byte 0x00000DBC\n\
DAT_0800a5f8:\n\
    .4byte 0x0200D3A0\n\
DAT_0800a5fc:\n\
    .4byte 0x0200D3A4\n\
    ");
}
__attribute__((naked)) void fun_0800a600()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    str         r0,[sp,#0x0]\n\
    mov         r9,r1\n\
    mov         r8,r2\n\
    add         r7,r3,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a674\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a6e8\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800a678\n\
    mov         r10,r2\n\
    add         r0,r10\n\
    ldrh        r5,[r0,#0x0]\n\
    cmp         r5,#0x0\n\
    bne         LAB_0800a6e8\n\
    ldr         r6,DAT_0800a67c\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a680\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    mov         r2,#0x8\n\
    add         r2,r2,r6\n\
    mov         r9,r2\n\
    add         r0,r9\n\
    ldr         r4,[r0,#0x0]\n\
    cmp         r4,#0x1\n\
    bne         LAB_0800a688\n\
    bl          fun_080020a4\n\
    mov         r2,r8\n\
    ldrh        r1,[r2,#0x0]\n\
    ldr         r2,DAT_0800a674\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r7,#0x0]\n\
    add         r1,#0x14\n\
    add         r0,r10\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a684\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
    b           LAB_0800a782\n\
DAT_0800a674:\n\
    .4byte 0x00000DDC\n\
DAT_0800a678:\n\
    .4byte 0x00000DDE\n\
DAT_0800a67c:\n\
    .4byte 0x020006A0\n\
DAT_0800a680:\n\
    .4byte 0x00000E56\n\
DAT_0800a684:\n\
    .4byte 0x00000DD8\n\
LAB_0800a688:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800a6d8\n\
    add         r0,r0,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x18]\n\
    cmp         r0,#0x2\n\
    beq         LAB_0800a782\n\
    ldr         r0,DAT_0800a6dc\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x1a\n\
    beq         LAB_0800a782\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a6d8\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r9\n\
    mov         r1,#0x1\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800a6e0\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_080034d4\n\
    strb        r5,[r6,#0x18]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a6e4\n\
    add         r0,r0,r1\n\
    strh        r5,[r0,#0x0]\n\
    b           LAB_0800a782\n\
\n\
.space 2\n\
\n\
DAT_0800a6d8:\n\
    .4byte 0x00000E56\n\
DAT_0800a6dc:\n\
    .4byte 0x020025D8\n\
DAT_0800a6e0:\n\
    .4byte 0x00000E58\n\
DAT_0800a6e4:\n\
    .4byte 0x00000DD8\n\
LAB_0800a6e8:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800a794\n\
    add         r0,r0,r2\n\
    ldrh        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a798\n\
    add         r0,r0,r1\n\
    ldrh        r3,[r0,#0x0]\n\
    mov         r0,r8\n\
    add         r1,r7,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_0800eaa4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a782\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_0800a79c\n\
    ldr         r4,DAT_0800a7a0\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r1,r5,#0x0\n\
    add         r1,#0x8\n\
    add         r0,r0,r1\n\
    mov         r6,#0x2\n\
    str         r6,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800a7a4\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    ldrh        r0,[r7,#0x0]\n\
    sub         r0,#0x1\n\
    strh        r0,[r7,#0x0]\n\
    mov         r1,r9\n\
    ldrh        r0,[r1,#0x26]\n\
    mov         r2,#0x0\n\
    mov         r8,r2\n\
    ldr         r1,[sp,#0x0]\n\
    strh        r0,[r1,#0x10]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r5\n\
    strb        r6,[r0,#0x18]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x5\n\
    add         r0,r0,r5\n\
    mov         r1,#0x1\n\
    ldrh        r2,[r0,#0x16]\n\
    orr         r1,r2\n\
    strh        r1,[r0,#0x16]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800a798\n\
    add         r0,r0,r1\n\
    mov         r2,r8\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r0,DAT_0800a794\n\
    add         r4,r4,r0\n\
    strh        r2,[r4,#0x0]\n\
LAB_0800a782:\n\
    add         sp,#0x4\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800a794:\n\
    .4byte 0x00000DDC\n\
DAT_0800a798:\n\
    .4byte 0x00000DDE\n\
DAT_0800a79c:\n\
    .4byte 0x020006A0\n\
DAT_0800a7a0:\n\
    .4byte 0x00000E56\n\
DAT_0800a7a4:\n\
    .4byte 0x00000E58\n\
    ");
}
__attribute__((naked)) void fun_0800a7a8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     ldr        r1,[sp,#0x2c]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x3\n\
     mov        r10,r1\n\
     str        r1,[sp,#0x4]\n\
     ldrh       r1,[r0,#0x6]\n\
     lsr        r7,r1,#0x3\n\
     ldrh       r0,[r0,#0x4]\n\
     lsr        r6,r0,#0x3\n\
     ldr        r0,DAT_0800a7dc\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x7\n\
     bhi        switchD_0800a7da_caseD_8\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0800a7e0\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_0800a7dc:\n\
     .4byte 0x020117E0\n\
DAT_0800a7e0:\n\
     .4byte 0x0800A7E4\n\
switchD_0800a7da_switchdataD_0800a7e4:\n\
     .4byte       switchD_0800a7da_caseD_0\n\
     .4byte       switchD_0800a7da_caseD_1\n\
     .4byte       switchD_0800a7da_caseD_2\n\
     .4byte       switchD_0800a7da_caseD_3\n\
     .4byte       switchD_0800a7da_caseD_4\n\
     .4byte       switchD_0800a7da_caseD_5\n\
     .4byte       switchD_0800a7da_caseD_6\n\
     .4byte       switchD_0800a7da_caseD_7\n\
switchD_0800a7da_caseD_1:\n\
     sub        r0,r6,#0x3\n\
     b          LAB_0800a844\n\
switchD_0800a7da_caseD_0:\n\
     sub        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     add        r0,r7,#0x1\n\
     b          LAB_0800a832\n\
switchD_0800a7da_caseD_3:\n\
     sub        r0,r6,#0x3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     sub        r0,r7,#0x3\n\
     b          LAB_0800a84a\n\
switchD_0800a7da_caseD_2:\n\
     sub        r0,r6,#0x4\n\
     b          LAB_0800a852\n\
switchD_0800a7da_caseD_5:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     sub        r0,r7,#0x3\n\
     b          LAB_0800a84a\n\
switchD_0800a7da_caseD_4:\n\
     sub        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     sub        r0,r7,#0x4\n\
LAB_0800a832:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r0,[sp,#0x4]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x4]\n\
     b          switchD_0800a7da_caseD_8\n\
switchD_0800a7da_caseD_7:\n\
     add        r0,r6,#0x1\n\
LAB_0800a844:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     add        r0,r7,#0x1\n\
LAB_0800a84a:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     b          switchD_0800a7da_caseD_8\n\
switchD_0800a7da_caseD_6:\n\
     add        r0,r6,#0x1\n\
LAB_0800a852:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     sub        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     mov        r0,r10\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r10,r0\n\
switchD_0800a7da_caseD_8:\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     ldr        r1,[sp,#0x4]\n\
     cmp        r8,r1\n\
     bcs        LAB_0800a92e\n\
LAB_0800a870:\n\
     mov        r5,#0x0\n\
     cmp        r5,r10\n\
     bcs        LAB_0800a91e\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r9,r0\n\
     mov        r1,r8\n\
     add        r0,r7,r1\n\
     lsl        r3,r0,#0x10\n\
LAB_0800a882:\n\
     add        r0,r6,r5\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsr        r1,r3,#0x10\n\
     str        r3,[sp,#0x8]\n\
     bl         fun_08003438\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     lsl        r0,r2,#0x10\n\
     asr        r4,r0,#0x10\n\
     ldr        r3,[sp,#0x8]\n\
     cmp        r4,r9\n\
     beq        LAB_0800a914\n\
     cmp        r4,#0x7f\n\
     bgt        LAB_0800a8b4\n\
     cmp        r4,#0x63\n\
     bge        LAB_0800a92e\n\
     cmp        r4,#0x58\n\
     bgt        LAB_0800a8d0\n\
     cmp        r4,#0x57\n\
     bge        LAB_0800a92e\n\
     cmp        r4,#0x10\n\
     beq        LAB_0800a92e\n\
     b          LAB_0800a8f8\n\
LAB_0800a8b4:\n\
     cmp        r4,#0xfd\n\
     blt        LAB_0800a8f8\n\
     ldr        r0,DAT_0800a8cc\n\
     cmp        r4,r0\n\
     ble        LAB_0800a92e\n\
     add        r0,#0x37\n\
     cmp        r4,r0\n\
     bgt        LAB_0800a8f8\n\
     sub        r0,#0xa\n\
     cmp        r4,r0\n\
     blt        LAB_0800a8f8\n\
     b          LAB_0800a92e\n\
DAT_0800a8cc:\n\
     .4byte 0x00000119\n\
LAB_0800a8d0:\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0800a8e4\n\
     ldr        r0,DAT_0800a8f4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x6\n\
     strh       r0,[r1,#0x0]\n\
LAB_0800a8e4:\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800a90c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800e85c\n\
     b          LAB_0800a90c\n\
.space 1\n\
.space 1\n\
DAT_0800a8f4:\n\
     .4byte 0x0200D370\n\
LAB_0800a8f8:\n\
     ldr        r0,DAT_0800a910\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[sp,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0800a90c\n\
     add        r0,r2,#0x0\n\
     bl         fun_0800a940\n\
LAB_0800a90c:\n\
     mov        r0,#0x1\n\
     b          LAB_0800a930\n\
DAT_0800a910:\n\
     .4byte 0x0200D370\n\
LAB_0800a914:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,r10\n\
     bcc        LAB_0800a882\n\
LAB_0800a91e:\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r8,r0\n\
     ldr        r0,[sp,#0x4]\n\
     cmp        r8,r0\n\
     bcc        LAB_0800a870\n\
LAB_0800a92e:\n\
     mov        r0,#0x0\n\
LAB_0800a930:\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0800a940()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    add         r6,r4,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_080034c0\n\
    add         r5,r0,#0x0\n\
    ldrh        r0,[r5,#0x4]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800a95c\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    b           LAB_0800a97e\n\
LAB_0800a95c:\n\
    ldrh        r2,[r5,#0x6]\n\
    add         r2,#0x1\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r1,[r0,#0x8]\n\
    cmp         r2,r1\n\
    bne         LAB_0800a970\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    b           LAB_0800a980\n\
LAB_0800a970:\n\
    add         r0,r2,#0x0\n\
    bl          __modsi3\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    add         r0,r6,#0x0\n\
LAB_0800a97e:\n\
    mov         r2,#0x1\n\
LAB_0800a980:\n\
    bl          fun_080034d4\n\
    mov         r0,#0x7\n\
    bl          fun_080016f0\n\
    ldr         r0,[r5,#0x0]\n\
    ldrh        r1,[r0,#0x0]\n\
    lsl         r3,r1,#0x13\n\
    lsr         r3,r3,#0x10\n\
    ldrh        r1,[r0,#0x2]\n\
    lsl         r4,r1,#0x13\n\
    lsr         r4,r4,#0x10\n\
    ldrh        r1,[r0,#0x4]\n\
    lsl         r5,r1,#0x13\n\
    lsr         r5,r5,#0x10\n\
    ldrh        r0,[r0,#0x6]\n\
    lsl         r6,r0,#0x13\n\
    lsr         r6,r6,#0x10\n\
    ldr         r0,DAT_0800aa00\n\
    strh        r3,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa04\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa08\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa0c\n\
    strh        r6,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa10\n\
    mov         r7,#0x1\n\
    strh        r7,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa14\n\
    ldr         r1,DAT_0800aa18\n\
    ldrh        r2,[r1,#0x4]\n\
    sub         r2,#0x78\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa1c\n\
    ldrh        r1,[r1,#0x6]\n\
    sub         r1,#0x50\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa20\n\
    sub         r3,r3,r2\n\
    strh        r3,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa24\n\
    sub         r4,r4,r1\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa28\n\
    sub         r5,r5,r2\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa2c\n\
    sub         r6,r6,r1\n\
    strh        r6,[r0,#0x0]\n\
    ldr         r0,DAT_0800aa30\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800a9f0\n\
    bl          fun_0800cef0\n\
LAB_0800a9f0:\n\
    bl          fun_0800a108\n\
    ldr         r0,DAT_0800aa34\n\
    strh        r7,[r0,#0x0]\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800aa00:\n\
    .4byte 0x0200D400\n\
DAT_0800aa04:\n\
    .4byte 0x0200D384\n\
DAT_0800aa08:\n\
    .4byte 0x0200D398\n\
DAT_0800aa0c:\n\
    .4byte 0x0200D3A8\n\
DAT_0800aa10:\n\
    .4byte 0x0200D388\n\
DAT_0800aa14:\n\
    .4byte 0x0200D404\n\
DAT_0800aa18:\n\
    .4byte 0x020006A0\n\
DAT_0800aa1c:\n\
    .4byte 0x0200D3AC\n\
DAT_0800aa20:\n\
    .4byte 0x0200D3F8\n\
DAT_0800aa24:\n\
    .4byte 0x0200D3FC\n\
DAT_0800aa28:\n\
    .4byte 0x0200D408\n\
DAT_0800aa2c:\n\
    .4byte 0x0200D38C\n\
DAT_0800aa30:\n\
    .4byte 0x0200D394\n\
DAT_0800aa34:\n\
    .4byte 0x0200D380\n\
    ");
}
__attribute__((naked)) void fun_0800aa38()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,#0x4a\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,#0x6f\n\
    bls         LAB_0800aa54\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800aa54:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_0800aa60\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
\n\
.space 2\n\
\n\
DAT_0800aa60:\n\
    .4byte 0x0800AA64\n\
switchD_0800aa5c_switchdataD_0800aa64:\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_1\n\
    .4byte switchD_0800aa5c_caseD_2\n\
    .4byte switchD_0800aa5c_caseD_3\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_5\n\
    .4byte switchD_0800aa5c_caseD_6\n\
    .4byte switchD_0800aa5c_caseD_7\n\
    .4byte switchD_0800aa5c_caseD_8\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_b\n\
    .4byte switchD_0800aa5c_caseD_c\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_11\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_13\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_0\n\
    .4byte switchD_0800aa5c_caseD_17\n\
    .4byte switchD_0800aa5c_caseD_18\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_27\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_27\n\
    .4byte switchD_0800aa5c_caseD_27\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_34\n\
    .4byte switchD_0800aa5c_caseD_35\n\
    .4byte switchD_0800aa5c_caseD_36\n\
    .4byte switchD_0800aa5c_caseD_37\n\
    .4byte switchD_0800aa5c_caseD_38\n\
    .4byte switchD_0800aa5c_caseD_39\n\
    .4byte switchD_0800aa5c_caseD_3a\n\
    .4byte switchD_0800aa5c_caseD_3b\n\
    .4byte switchD_0800aa5c_caseD_3c\n\
    .4byte switchD_0800aa5c_caseD_3d\n\
    .4byte switchD_0800aa5c_caseD_3e\n\
    .4byte switchD_0800aa5c_caseD_3f\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_27\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_29\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_19\n\
    .4byte switchD_0800aa5c_caseD_69\n\
    .4byte switchD_0800aa5c_caseD_69\n\
    .4byte switchD_0800aa5c_caseD_69\n\
    .4byte switchD_0800aa5c_caseD_6c\n\
    .4byte switchD_0800aa5c_caseD_6c\n\
    .4byte switchD_0800aa5c_caseD_6c\n\
    .4byte switchD_0800aa5c_caseD_6c\n\
switchD_0800aa5c_caseD_13:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ac60\n\
    add         r0,r0,r2\n\
    mov         r5,#0x0\n\
    mov         r1,#0x6b\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ac64\n\
    add         r0,r0,r1\n\
    mov         r1,#0x86\n\
    lsl         r1,r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x7\n\
    strb        r0,[r4,#0x18]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ac68\n\
    add         r0,r0,r2\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r0,DAT_0800ac6c\n\
    add         r4,r4,r0\n\
    b           LAB_0800af00\n\
DAT_0800ac60:\n\
    .4byte 0x00000E56\n\
DAT_0800ac64:\n\
    .4byte 0x00000E58\n\
DAT_0800ac68:\n\
    .4byte 0x00000DDE\n\
DAT_0800ac6c:\n\
    .4byte 0x00000DDC\n\
switchD_0800aa5c_caseD_1:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ac94\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x77\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ac98\n\
    add         r0,r0,r2\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    b           LAB_0800aee6\n\
\n\
.space 2\n\
\n\
DAT_0800ac94:\n\
    .4byte 0x00000E56\n\
DAT_0800ac98:\n\
    .4byte 0x00000E58\n\
switchD_0800aa5c_caseD_2:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800acbc\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x74\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800acc0\n\
    add         r0,r0,r2\n\
    ldr         r1,DAT_0800acc4\n\
    b           LAB_0800aee6\n\
DAT_0800acbc:\n\
    .4byte 0x00000E56\n\
DAT_0800acc0:\n\
    .4byte 0x00000E58\n\
DAT_0800acc4:\n\
    .4byte 0x00000101\n\
switchD_0800aa5c_caseD_3:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800acec\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x75\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800acf0\n\
    add         r0,r0,r2\n\
    mov         r1,#0x81\n\
    lsl         r1,r1,#0x1\n\
    b           LAB_0800aee6\n\
\n\
.space 2\n\
\n\
DAT_0800acec:\n\
    .4byte 0x00000E56\n\
DAT_0800acf0:\n\
    .4byte 0x00000E58\n\
switchD_0800aa5c_caseD_5:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ad18\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x76\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ad1c\n\
    add         r0,r0,r2\n\
    mov         r1,#0x82\n\
    lsl         r1,r1,#0x1\n\
    b           LAB_0800aee6\n\
\n\
.space 2\n\
\n\
DAT_0800ad18:\n\
    .4byte 0x00000E56\n\
DAT_0800ad1c:\n\
    .4byte 0x00000E58\n\
switchD_0800aa5c_caseD_6:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ad40\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x73\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ad44\n\
    add         r0,r0,r2\n\
    ldr         r1,DAT_0800ad48\n\
    b           LAB_0800aee6\n\
DAT_0800ad40:\n\
    .4byte 0x00000E56\n\
DAT_0800ad44:\n\
    .4byte 0x00000E58\n\
DAT_0800ad48:\n\
    .4byte 0x00000105\n\
switchD_0800aa5c_caseD_7:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ad70\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x72\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ad74\n\
    add         r0,r0,r2\n\
    mov         r1,#0x83\n\
    lsl         r1,r1,#0x1\n\
    b           LAB_0800aee6\n\
\n\
.space 2\n\
\n\
DAT_0800ad70:\n\
    .4byte 0x00000E56\n\
DAT_0800ad74:\n\
    .4byte 0x00000E58\n\
switchD_0800aa5c_caseD_8:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ad98\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x7e\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ad9c\n\
    add         r0,r0,r2\n\
    ldr         r1,DAT_0800ada0\n\
    b           LAB_0800aee6\n\
DAT_0800ad98:\n\
    .4byte 0x00000E56\n\
DAT_0800ad9c:\n\
    .4byte 0x00000E58\n\
DAT_0800ada0:\n\
    .4byte 0x00000107\n\
switchD_0800aa5c_caseD_17:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800adc8\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x70\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800adcc\n\
    add         r0,r0,r2\n\
    mov         r1,#0x85\n\
    lsl         r1,r1,#0x1\n\
    b           LAB_0800aee6\n\
\n\
.space 2\n\
\n\
DAT_0800adc8:\n\
    .4byte 0x00000E56\n\
DAT_0800adcc:\n\
    .4byte 0x00000E58\n\
switchD_0800aa5c_caseD_b:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800adf4\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x11\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800adf8\n\
    add         r0,r0,r2\n\
    mov         r1,#0x8b\n\
    lsl         r1,r1,#0x1\n\
    b           LAB_0800aee6\n\
\n\
.space 2\n\
\n\
DAT_0800adf4:\n\
    .4byte 0x00000E56\n\
DAT_0800adf8:\n\
    .4byte 0x00000E58\n\
switchD_0800aa5c_caseD_18:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ae1c\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x6c\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ae20\n\
    add         r0,r0,r2\n\
    ldr         r1,DAT_0800ae24\n\
    b           LAB_0800aee6\n\
DAT_0800ae1c:\n\
    .4byte 0x00000E56\n\
DAT_0800ae20:\n\
    .4byte 0x00000E58\n\
DAT_0800ae24:\n\
    .4byte 0x0000010B\n\
switchD_0800aa5c_caseD_0:\n\
    mov         r0,#0x3\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    cmp         r4,#0x1\n\
    beq         LAB_0800ae64\n\
    cmp         r4,#0x1\n\
    bgt         LAB_0800ae46\n\
    cmp         r4,#0x0\n\
    beq         LAB_0800ae4c\n\
    b           LAB_0800af02\n\
LAB_0800ae46:\n\
    cmp         r4,#0x2\n\
    beq         LAB_0800ae7c\n\
    b           LAB_0800af02\n\
LAB_0800ae4c:\n\
    ldr         r0,DAT_0800ae58\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r1,DAT_0800ae5c\n\
    ldr         r2,DAT_0800ae60\n\
    b           LAB_0800b1be\n\
\n\
.space 2\n\
\n\
DAT_0800ae58:\n\
    .4byte 0x0200DCA0\n\
DAT_0800ae5c:\n\
    .4byte 0x0200DC90\n\
DAT_0800ae60:\n\
    .4byte 0x00000562\n\
LAB_0800ae64:\n\
    ldr         r1,DAT_0800ae70\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800ae74\n\
    ldr         r2,DAT_0800ae78\n\
    b           LAB_0800b1be\n\
DAT_0800ae70:\n\
    .4byte 0x0200DCA0\n\
DAT_0800ae74:\n\
    .4byte 0x0200DC90\n\
DAT_0800ae78:\n\
    .4byte 0x00000564\n\
LAB_0800ae7c:\n\
    ldr         r1,DAT_0800ae94\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800ae98\n\
    ldr         r2,DAT_0800ae9c\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    b           LAB_0800af02\n\
\n\
.space 2\n\
\n\
DAT_0800ae94:\n\
    .4byte 0x0200DCA0\n\
DAT_0800ae98:\n\
    .4byte 0x0200DC90\n\
DAT_0800ae9c:\n\
    .4byte 0x00000563\n\
switchD_0800aa5c_caseD_c:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800aebc\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x3e\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800aec0\n\
    add         r0,r0,r2\n\
    ldr         r1,DAT_0800aec4\n\
    b           LAB_0800aee6\n\
\n\
.space 2\n\
\n\
DAT_0800aebc:\n\
    .4byte 0x00000E56\n\
DAT_0800aec0:\n\
    .4byte 0x00000E58\n\
DAT_0800aec4:\n\
    .4byte 0x0000010D\n\
switchD_0800aa5c_caseD_11:\n\
    mov         r0,#0x39\n\
    bl          fun_080016f0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800af08\n\
    add         r0,r0,r1\n\
    mov         r5,#0x0\n\
    mov         r1,#0x57\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800af0c\n\
    add         r0,r0,r2\n\
    ldr         r1,DAT_0800af10\n\
LAB_0800aee6:\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0x7\n\
    strb        r0,[r4,#0x18]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800af14\n\
    add         r0,r0,r1\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r2,DAT_0800af18\n\
    add         r4,r4,r2\n\
LAB_0800af00:\n\
    strh        r5,[r4,#0x0]\n\
LAB_0800af02:\n\
    mov         r0,#0x1\n\
    b           LAB_0800b23e\n\
\n\
.space 2\n\
\n\
DAT_0800af08:\n\
    .4byte 0x00000E56\n\
DAT_0800af0c:\n\
    .4byte 0x00000E58\n\
DAT_0800af10:\n\
    .4byte 0x00000111\n\
DAT_0800af14:\n\
    .4byte 0x00000DDE\n\
DAT_0800af18:\n\
    .4byte 0x00000DDC\n\
switchD_0800aa5c_caseD_29:\n\
    ldr         r0,DAT_0800af88\n\
    ldrb        r0,[r0,#0x0]\n\
    sub         r0,#0x3\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x2\n\
    bls         LAB_0800af2c\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800af2c:\n\
    mov         r0,#0x16\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800af3a\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800af3a:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800af8c\n\
    add         r0,r0,r1\n\
    ldrh        r6,[r0,#0x0]\n\
    cmp         r6,#0x0\n\
    beq         LAB_0800af4a\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800af4a:\n\
    mov         r0,#0x2\n\
    bl          fun_080016f0\n\
    bl          fun_0803c894\n\
    ldr         r1,DAT_0800af90\n\
    mov         r0,#0x3\n\
    strb        r0,[r1,#0x18]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x2\n\
    bl          fun_08002c04\n\
    mov         r2,#0x96\n\
    lsl         r2,r2,#0x1\n\
    add         r0,r0,r2\n\
    ldr         r5,DAT_0800af94\n\
    add         r4,r4,r5\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    mov         r1,#0xa\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800af98\n\
    add         r0,r0,r1\n\
    b           LAB_0800b094\n\
DAT_0800af88:\n\
    .4byte 0x020117E0\n\
DAT_0800af8c:\n\
    .4byte 0x00000DDA\n\
DAT_0800af90:\n\
    .4byte 0x020006A0\n\
DAT_0800af94:\n\
    .4byte 0x00000DE4\n\
DAT_0800af98:\n\
    .4byte 0x00000DEA\n\
switchD_0800aa5c_caseD_27:\n\
    ldr         r0,DAT_0800afb0\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800b03a\n\
    cmp         r0,#0x7\n\
    beq         LAB_0800b03a\n\
    cmp         r0,#0x1\n\
    beq         LAB_0800afae\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800afae:\n\
    b           LAB_0800b03a\n\
DAT_0800afb0:\n\
    .4byte 0x020117E0\n\
switchD_0800aa5c_caseD_69:\n\
    ldr         r0,DAT_0800b01c\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x6\n\
    beq         LAB_0800afbe\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800afbe:\n\
    mov         r0,#0x16\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800afcc\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800afcc:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800b020\n\
    add         r0,r0,r1\n\
    ldrh        r6,[r0,#0x0]\n\
    cmp         r6,#0x0\n\
    beq         LAB_0800afdc\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800afdc:\n\
    mov         r0,#0x2\n\
    bl          fun_080016f0\n\
    bl          fun_0803c894\n\
    ldr         r1,DAT_0800b024\n\
    mov         r0,#0x3\n\
    strb        r0,[r1,#0x18]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x2\n\
    bl          fun_08002c04\n\
    mov         r2,#0x96\n\
    lsl         r2,r2,#0x1\n\
    add         r0,r0,r2\n\
    ldr         r5,DAT_0800b028\n\
    add         r4,r4,r5\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    mov         r1,#0xa\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800b02c\n\
    add         r0,r0,r1\n\
    b           LAB_0800b094\n\
\n\
.space 2\n\
\n\
DAT_0800b01c:\n\
    .4byte 0x020117E0\n\
DAT_0800b020:\n\
    .4byte 0x00000DDA\n\
DAT_0800b024:\n\
    .4byte 0x020006A0\n\
DAT_0800b028:\n\
    .4byte 0x00000DE4\n\
DAT_0800b02c:\n\
    .4byte 0x00000DEA\n\
switchD_0800aa5c_caseD_6c:\n\
    ldr         r0,DAT_0800b098\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x2\n\
    beq         LAB_0800b03a\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800b03a:\n\
    mov         r0,#0x16\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800b048\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800b048:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800b09c\n\
    add         r0,r0,r2\n\
    ldrh        r6,[r0,#0x0]\n\
    cmp         r6,#0x0\n\
    beq         LAB_0800b058\n\
    b           switchD_0800aa5c_caseD_19\n\
LAB_0800b058:\n\
    mov         r0,#0x2\n\
    bl          fun_080016f0\n\
    bl          fun_0803c894\n\
    ldr         r1,DAT_0800b0a0\n\
    mov         r0,#0x3\n\
    strb        r0,[r1,#0x18]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x96\n\
    lsl         r0,r0,#0x2\n\
    bl          fun_08002c04\n\
    mov         r1,#0x96\n\
    lsl         r1,r1,#0x1\n\
    add         r0,r0,r1\n\
    ldr         r5,DAT_0800b0a4\n\
    add         r4,r4,r5\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    mov         r1,#0xa\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800b0a8\n\
    add         r0,r0,r2\n\
LAB_0800b094:\n\
    strh        r6,[r0,#0x0]\n\
    b           LAB_0800af02\n\
DAT_0800b098:\n\
    .4byte 0x020117E0\n\
DAT_0800b09c:\n\
    .4byte 0x00000DDA\n\
DAT_0800b0a0:\n\
    .4byte 0x020006A0\n\
DAT_0800b0a4:\n\
    .4byte 0x00000DE4\n\
DAT_0800b0a8:\n\
    .4byte 0x00000DEA\n\
switchD_0800aa5c_caseD_34:\n\
    ldr         r1,DAT_0800b0b8\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b0bc\n\
    ldr         r2,DAT_0800b0c0\n\
    b           LAB_0800b1be\n\
DAT_0800b0b8:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b0bc:\n\
    .4byte 0x0200DC90\n\
DAT_0800b0c0:\n\
    .4byte 0x00000243\n\
switchD_0800aa5c_caseD_35:\n\
    ldr         r1,DAT_0800b0d0\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b0d4\n\
    ldr         r2,DAT_0800b0d8\n\
    b           LAB_0800b1be\n\
DAT_0800b0d0:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b0d4:\n\
    .4byte 0x0200DC90\n\
DAT_0800b0d8:\n\
    .4byte 0x0000064F\n\
switchD_0800aa5c_caseD_36:\n\
    ldr         r1,DAT_0800b0ec\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b0f0\n\
    mov         r2,#0x93\n\
    lsl         r2,r2,#0x2\n\
    b           LAB_0800b1be\n\
\n\
.space 2\n\
\n\
DAT_0800b0ec:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b0f0:\n\
    .4byte 0x0200DC90\n\
switchD_0800aa5c_caseD_37:\n\
    ldr         r1,DAT_0800b100\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b104\n\
    ldr         r2,DAT_0800b108\n\
    b           LAB_0800b1be\n\
DAT_0800b100:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b104:\n\
    .4byte 0x0200DC90\n\
DAT_0800b108:\n\
    .4byte 0x000006C2\n\
switchD_0800aa5c_caseD_38:\n\
    ldr         r1,DAT_0800b118\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b11c\n\
    ldr         r2,DAT_0800b120\n\
    b           LAB_0800b1be\n\
DAT_0800b118:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b11c:\n\
    .4byte 0x0200DC90\n\
DAT_0800b120:\n\
    .4byte 0x00000241\n\
switchD_0800aa5c_caseD_39:\n\
    ldr         r1,DAT_0800b130\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b134\n\
    ldr         r2,DAT_0800b138\n\
    b           LAB_0800b1be\n\
DAT_0800b130:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b134:\n\
    .4byte 0x0200DC90\n\
DAT_0800b138:\n\
    .4byte 0x00000245\n\
switchD_0800aa5c_caseD_3a:\n\
    ldr         r1,DAT_0800b148\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b14c\n\
    ldr         r2,DAT_0800b150\n\
    b           LAB_0800b1be\n\
DAT_0800b148:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b14c:\n\
    .4byte 0x0200DC90\n\
DAT_0800b150:\n\
    .4byte 0x0000024A\n\
switchD_0800aa5c_caseD_3b:\n\
    ldr         r1,DAT_0800b164\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b168\n\
    mov         r2,#0x94\n\
    lsl         r2,r2,#0x2\n\
    b           LAB_0800b1be\n\
\n\
.space 2\n\
\n\
DAT_0800b164:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b168:\n\
    .4byte 0x0200DC90\n\
switchD_0800aa5c_caseD_3c:\n\
    ldr         r1,DAT_0800b178\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b17c\n\
    ldr         r2,DAT_0800b180\n\
    b           LAB_0800b1be\n\
DAT_0800b178:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b17c:\n\
    .4byte 0x0200DC90\n\
DAT_0800b180:\n\
    .4byte 0x00000251\n\
switchD_0800aa5c_caseD_3d:\n\
    ldr         r1,DAT_0800b190\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b194\n\
    ldr         r2,DAT_0800b198\n\
    b           LAB_0800b1be\n\
DAT_0800b190:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b194:\n\
    .4byte 0x0200DC90\n\
DAT_0800b198:\n\
    .4byte 0x0000024F\n\
switchD_0800aa5c_caseD_3e:\n\
    ldr         r1,DAT_0800b1a8\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b1ac\n\
    ldr         r2,DAT_0800b1b0\n\
    b           LAB_0800b1be\n\
DAT_0800b1a8:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b1ac:\n\
    .4byte 0x0200DC90\n\
DAT_0800b1b0:\n\
    .4byte 0x0000024D\n\
switchD_0800aa5c_caseD_3f:\n\
    ldr         r1,DAT_0800b1cc\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_0800b1d0\n\
    ldr         r2,DAT_0800b1d4\n\
LAB_0800b1be:\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    b           LAB_0800af02\n\
\n\
.space 2\n\
\n\
DAT_0800b1cc:\n\
    .4byte 0x0200DCA0\n\
DAT_0800b1d0:\n\
    .4byte 0x0200DC90\n\
DAT_0800b1d4:\n\
    .4byte 0x000006C3\n\
switchD_0800aa5c_caseD_19:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800b1f8\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r1,[r0,r2]\n\
    cmp         r1,#0x79\n\
    bgt         LAB_0800b1fc\n\
    cmp         r1,#0x77\n\
    bge         LAB_0800b202\n\
    cmp         r1,#0x75\n\
    bgt         LAB_0800b23c\n\
    cmp         r1,#0x73\n\
    blt         LAB_0800b23c\n\
    b           LAB_0800b202\n\
\n\
.space 2\n\
\n\
DAT_0800b1f8:\n\
    .4byte 0x00000DE2\n\
LAB_0800b1fc:\n\
    ldr         r0,DAT_0800b230\n\
    cmp         r1,r0\n\
    bne         LAB_0800b23c\n\
LAB_0800b202:\n\
    mov         r0,#0x66\n\
    bl          fun_080034c0\n\
    ldrh        r0,[r0,#0x4]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800b210\n\
    b           LAB_0800af02\n\
LAB_0800b210:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800b234\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    bl          fun_0800193c\n\
    ldr         r1,DAT_0800b238\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x10]\n\
    b           LAB_0800af02\n\
\n\
.space 2\n\
\n\
DAT_0800b230:\n\
    .4byte 0x0000014F\n\
DAT_0800b234:\n\
    .4byte 0x00000DE2\n\
DAT_0800b238:\n\
    .4byte 0x020006A0\n\
LAB_0800b23c:\n\
    mov         r0,#0x0\n\
LAB_0800b23e:\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800b244()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x8\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#0x4]\n\
    mov         r10,r2\n\
    mov         r8,r3\n\
    mov         r0,#0x10\n\
    bl          fun_080034c0\n\
    add         r7,r0,#0x0\n\
    mov         r0,#0x66\n\
    bl          fun_080034c0\n\
    mov         r9,r0\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r1,r10\n\
    ldrh        r0,[r1,#0x0]\n\
    mov         r2,r8\n\
    ldrh        r1,[r2,#0x0]\n\
    bl          fun_08003330\n\
    mov         r3,#0xde\n\
    lsl         r3,r3,#0x4\n\
    add         r4,r4,r3\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    mov         r1,r10\n\
    ldrh        r1,[r1,#0x0]\n\
    lsr         r0,r1,#0x3\n\
    mov         r2,r8\n\
    ldrh        r2,[r2,#0x0]\n\
    lsr         r1,r2,#0x3\n\
    bl          fun_08003438\n\
    ldr         r6,DAT_0800b2bc\n\
    add         r4,r4,r6\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r6\n\
    mov         r3,#0x0\n\
    ldrsh       r0,[r0,r3]\n\
    cmp         r0,#0x75\n\
    bgt         LAB_0800b2c0\n\
    cmp         r0,#0x73\n\
    bge         LAB_0800b334\n\
    cmp         r0,#0x64\n\
    beq         LAB_0800b2c6\n\
    cmp         r0,#0x66\n\
    beq         LAB_0800b2de\n\
    b           LAB_0800b334\n\
\n\
.space 2\n\
\n\
DAT_0800b2bc:\n\
    .4byte 0x00000DE2\n\
LAB_0800b2c0:\n\
    cmp         r0,#0x7d\n\
    beq         LAB_0800b2f8\n\
    b           LAB_0800b334\n\
LAB_0800b2c6:\n\
    mov         r0,#0x64\n\
    bl          fun_080034c0\n\
    add         r5,r0,#0x0\n\
    ldrh        r0,[r5,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800b334\n\
    bl          fun_080020a4\n\
    add         r0,r0,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    b           LAB_0800b2ee\n\
LAB_0800b2de:\n\
    mov         r0,#0x66\n\
    bl          fun_080034c0\n\
    add         r5,r0,#0x0\n\
    ldrh        r0,[r5,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800b334\n\
    mov         r0,#0x66\n\
LAB_0800b2ee:\n\
    mov         r1,#0x1\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    b           LAB_0800b334\n\
LAB_0800b2f8:\n\
    mov         r0,#0x1a\n\
    bl          fun_08001894\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800b31e\n\
    mov         r0,#0x7d\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    mov         r0,#0x1a\n\
    bl          fun_080018e4\n\
    mov         r0,#0x24\n\
    mov         r1,#0x0\n\
    bl          fun_08001a14\n\
    b           LAB_0800b334\n\
LAB_0800b31e:\n\
    mov         r0,#0x7d\n\
    bl          fun_080034c0\n\
    add         r5,r0,#0x0\n\
    ldrh        r0,[r5,#0x4]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800b334\n\
    mov         r0,#0x24\n\
    mov         r1,#0x1\n\
    bl          fun_08001a14\n\
LAB_0800b334:\n\
    bl          fun_080020a4\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    cmp         r0,#0xb8\n\
    bls         LAB_0800b34e\n\
    bl          fun_0800c5c8\n\
LAB_0800b34e:\n\
    lsl         r0,r0,#0x2\n\
    ldr         r1,DAT_0800b358\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         pc,r0\n\
DAT_0800b358:\n\
    .4byte 0x0800B35C\n\
PTR_DAT_0800b35c:\n\
    .4byte DAT_0800bd3c\n\
    .4byte DAT_0800bd70\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800be44\n\
    .4byte DAT_0800be44\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800bef2\n\
    .4byte DAT_0800bef2\n\
    .4byte DAT_0800bd90\n\
    .4byte DAT_0800c000\n\
    .4byte DAT_0800c0f0\n\
    .4byte DAT_0800bf4e\n\
    .4byte DAT_0800bfa8\n\
    .4byte DAT_0800c390\n\
    .4byte DAT_0800c3c8\n\
    .4byte DAT_0800c3e6\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800bf28\n\
    .4byte DAT_0800bf28\n\
    .4byte DAT_0800c1d0\n\
    .4byte DAT_0800c480\n\
    .4byte DAT_0800c480\n\
    .4byte DAT_0800c194\n\
    .4byte DAT_0800c194\n\
    .4byte DAT_0800c292\n\
    .4byte DAT_0800c292\n\
    .4byte DAT_0800c264\n\
    .4byte DAT_0800c264\n\
    .4byte DAT_0800c43c\n\
    .4byte DAT_0800c43c\n\
    .4byte DAT_0800bf28\n\
    .4byte DAT_0800c3e6\n\
    .4byte DAT_0800c3e6\n\
    .4byte DAT_0800c4ec\n\
    .4byte DAT_0800c4ec\n\
    .4byte DAT_0800c318\n\
    .4byte DAT_0800c406\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800bd56\n\
    .4byte DAT_0800b6f8\n\
    .4byte DAT_0800b710\n\
    .4byte DAT_0800b728\n\
    .4byte DAT_0800b740\n\
    .4byte DAT_0800b758\n\
    .4byte DAT_0800b770\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte DAT_0800b8c4\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800ba54\n\
    .4byte DAT_0800bad8\n\
    .4byte DAT_0800bc00\n\
    .4byte DAT_0800bcb4\n\
    .4byte DAT_0800b8d4\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800b7f0\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7f0\n\
    .4byte DAT_0800b7f0\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800bef2\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte DAT_0800c5c0\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800b640\n\
    .4byte DAT_0800b7f0\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte DAT_0800b7a4\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800b9fc\n\
    .4byte DAT_0800b8da\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800bd5c\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte fun_0800c5c8\n\
    .4byte DAT_0800b788\n\
    .4byte DAT_0800b83c\n\
    .4byte DAT_0800b83c\n\
    .4byte DAT_0800b83c\n\
    .4byte DAT_0800b880\n\
    .4byte DAT_0800b880\n\
    .4byte DAT_0800b880\n\
    .4byte DAT_0800b880\n\
\n\
    ");
}
