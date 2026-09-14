__attribute__((naked)) void fun_0804904c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r3,r2,#0x0\n\
    ldr         r0,[r5,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r5,r2]\n\
    add         r2,r4,#0x0\n\
    bl          fun_080496b8\n\
    add         r1,r0,#0x0\n\
    cmp         r1,#0x0\n\
    blt         LAB_0804906e\n\
    ldr         r0,[r5,#0x50]\n\
    add         r0,r0,r1\n\
    str         r0,[r5,#0x50]\n\
    b           LAB_08049076\n\
LAB_0804906e:\n\
    ldr         r0,DAT_0804907c\n\
    ldrh        r2,[r5,#0xc]\n\
    and         r0,r2\n\
    strh        r0,[r5,#0xc]\n\
LAB_08049076:\n\
    add         r0,r1,#0x0\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
DAT_0804907c:\n\
    .4byte 0xFFFFEFFF\n\
    ");
}
__attribute__((naked)) void fun_08049080()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r6,r2,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r1,[r4,#0xc]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080490a2\n\
    ldr         r0,[r4,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r4,r2]\n\
    mov         r2,#0x0\n\
    mov         r3,#0x2\n\
    bl          fun_08049688\n\
LAB_080490a2:\n\
    ldr         r0,DAT_080490bc\n\
    ldrh        r1,[r4,#0xc]\n\
    and         r0,r1\n\
    strh        r0,[r4,#0xc]\n\
    ldr         r0,[r4,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r4,r2]\n\
    add         r2,r5,#0x0\n\
    add         r3,r6,#0x0\n\
    bl          fun_08049574\n\
    pop         {r4,r5,r6,pc}\n\
\n\
.space 2\n\
\n\
DAT_080490bc:\n\
    .4byte 0xFFFFEFFF\n\
    ");
}
__attribute__((naked)) void fun_080490c0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r3,r2,#0x0\n\
    ldr         r0,[r5,#0x54]\n\
    mov         r2,#0xe\n\
    ldrsh       r1,[r5,r2]\n\
    add         r2,r4,#0x0\n\
    bl          fun_08049688\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bne         LAB_080490ec\n\
    ldr         r0,DAT_080490e8\n\
    ldrh        r2,[r5,#0xc]\n\
    and         r0,r2\n\
    strh        r0,[r5,#0xc]\n\
    b           LAB_080490fa\n\
DAT_080490e8:\n\
    .4byte 0xFFFFEFFF\n\
LAB_080490ec:\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x5\n\
    add         r0,r2,#0x0\n\
    ldrh        r2,[r5,#0xc]\n\
    orr         r0,r2\n\
    strh        r0,[r5,#0xc]\n\
    str         r1,[r5,#0x50]\n\
LAB_080490fa:\n\
    add         r0,r1,#0x0\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    push        {lr}\n\
    ldr         r2,[r0,#0x54]\n\
    mov         r3,#0xe\n\
    ldrsh       r1,[r0,r3]\n\
    add         r0,r2,#0x0\n\
    bl          fun_080495fc\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_08049110()
{
    asm("\n\
    add         r3,r0,#0x0\n\
    mov         r1,#0x0\n\
    ldr         r2,DAT_08049118\n\
    b           LAB_08049124\n\
DAT_08049118:\n\
    .4byte 0x020005F0\n\
LAB_0804911c:\n\
    add         r2,#0x8\n\
    add         r1,#0x1\n\
    cmp         r1,#0x13\n\
    bgt         LAB_0804912a\n\
LAB_08049124:\n\
    ldr         r0,[r2,#0x0]\n\
    cmp         r0,r3\n\
    bne         LAB_0804911c\n\
LAB_0804912a:\n\
    add         r0,r1,#0x0\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08049130()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    ldr         r0,DAT_08049144\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,[r1,#0x4]\n\
    mov         r3,#0xe\n\
    ldrsh       r0,[r0,r3]\n\
    cmp         r2,r0\n\
    bne         LAB_0804914c\n\
    ldr         r0,DAT_08049148\n\
    b           LAB_08049172\n\
DAT_08049144:\n\
    .4byte 0x087D6554\n\
DAT_08049148:\n\
    .4byte 0x020005E4\n\
LAB_0804914c:\n\
    ldr         r0,[r1,#0x8]\n\
    mov         r3,#0xe\n\
    ldrsh       r0,[r0,r3]\n\
    cmp         r2,r0\n\
    bne         LAB_08049160\n\
    ldr         r0,DAT_0804915c\n\
    b           LAB_08049172\n\
\n\
.space 2\n\
\n\
DAT_0804915c:\n\
    .4byte 0x020005E8\n\
LAB_08049160:\n\
    ldr         r0,[r1,#0xc]\n\
    mov         r1,#0xe\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r2,r0\n\
    beq         LAB_08049170\n\
    add         r0,r2,#0x0\n\
    sub         r0,#0x20\n\
    b           LAB_08049174\n\
LAB_08049170:\n\
    ldr         r0,DAT_08049178\n\
LAB_08049172:\n\
    ldr         r0,[r0,#0x0]\n\
LAB_08049174:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08049178:\n\
    .4byte 0x020005EC\n\
    ");
}
__attribute__((naked)) void fun_0804917c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0xc\n\
    ldr         r4,DAT_080491d8\n\
    str         r4,[sp,#0x0]\n\
    mov         r3,#0x3\n\
    str         r3,[sp,#0x8]\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x4]\n\
    mov         r5,#0x1\n\
    add         r0,r5,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    ldr         r5,DAT_080491dc\n\
    str         r2,[r5,#0x0]\n\
    str         r4,[sp,#0x0]\n\
    str         r3,[sp,#0x8]\n\
    mov         r0,#0x4\n\
    str         r0,[sp,#0x4]\n\
    ldr         r3,DAT_080491e0\n\
    mov         r4,#0x1\n\
    add         r0,r4,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    ldr         r0,DAT_080491e4\n\
    str         r2,[r0,#0x0]\n\
    str         r2,[r3,#0x0]\n\
    ldr         r2,DAT_080491e8\n\
    add         r1,r2,#0x0\n\
    sub         r4,#0x2\n\
    add         r0,r2,#0x0\n\
    add         r0,#0x98\n\
LAB_080491be:\n\
    str         r4,[r0,#0x0]\n\
    sub         r0,#0x8\n\
    cmp         r0,r1\n\
    bge         LAB_080491be\n\
    mov         r0,#0x0\n\
    ldr         r1,[r5,#0x0]\n\
    str         r1,[r2,#0x0]\n\
    str         r0,[r2,#0x4]\n\
    ldr         r1,[r3,#0x0]\n\
    str         r1,[r2,#0x8]\n\
    str         r0,[r2,#0xc]\n\
    add         sp,#0xc\n\
    pop         {r4,r5,pc}\n\
DAT_080491d8:\n\
    .4byte 0x086CCEB8\n\
DAT_080491dc:\n\
    .4byte 0x020005E4\n\
DAT_080491e0:\n\
    .4byte 0x020005E8\n\
DAT_080491e4:\n\
    .4byte 0x020005EC\n\
DAT_080491e8:\n\
    .4byte 0x020005F0\n\
    ");
}
__attribute__((naked)) void fun_080491ec()
{
    asm("\n\
    push        {r4,lr}\n\
    mov         r3,#0x13\n\
    mov         r4,#0x0\n\
    add         r0,r3,#0x0\n\
    add         r1,r4,#0x0\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08049200()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    bl          fun_08049628\n\
    add         r4,r0,#0x0\n\
    bl          fun_080491ec\n\
    str         r0,[r4,#0x0]\n\
    add         r0,r5,#0x0\n\
    pop         {r4,r5,pc}\n\
    ");
}
__attribute__((naked)) void fun_08049214()
{
    asm("\n\
    push        {lr}\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    beq         LAB_08049224\n\
    add         r0,r1,#0x0\n\
    b           LAB_0804922a\n\
LAB_08049224:\n\
    add         r0,r1,#0x0\n\
    bl          fun_08049200\n\
LAB_0804922a:\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_0804922c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0xc\n\
    add         r4,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    bl          fun_08049130\n\
    str         r0,[sp,#0x0]\n\
    str         r4,[sp,#0x4]\n\
    str         r5,[sp,#0x8]\n\
    mov         r3,#0x6\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    add         sp,#0xc\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08049250()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r7,r2,#0x0\n\
    bl          fun_08049130\n\
    bl          fun_08049110\n\
    add         r6,r0,#0x0\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r2,r7,#0x0\n\
    bl          fun_0804922c\n\
    cmp         r0,#0x0\n\
    bge         LAB_0804927a\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    bl          fun_08049200\n\
    b           LAB_08049290\n\
LAB_0804927a:\n\
    sub         r2,r7,r0\n\
    cmp         r6,#0x14\n\
    beq         LAB_0804928e\n\
    ldr         r0,DAT_08049294\n\
    lsl         r1,r6,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x0]\n\
LAB_0804928e:\n\
    add         r0,r2,#0x0\n\
LAB_08049290:\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_08049294:\n\
    .4byte 0x020005F0\n\
    ");
}
__attribute__((naked)) void fun_08049298()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    sub         sp,#0x8\n\
    mov         r8,r0\n\
    add         r5,r1,#0x0\n\
    add         r4,r2,#0x0\n\
    bl          fun_08049130\n\
    add         r7,r0,#0x0\n\
    bl          fun_08049110\n\
    add         r6,r0,#0x0\n\
    cmp         r4,#0x1\n\
    bne         LAB_080492ce\n\
    cmp         r6,#0x14\n\
    bne         LAB_080492c0\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08049310\n\
LAB_080492c0:\n\
    ldr         r0,DAT_08049318\n\
    lsl         r1,r6,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    add         r5,r5,r0\n\
    mov         r4,#0x0\n\
LAB_080492ce:\n\
    cmp         r4,#0x2\n\
    bne         LAB_080492e0\n\
    str         r7,[sp,#0x0]\n\
    mov         r3,#0xc\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r5,r5,r2\n\
LAB_080492e0:\n\
    mov         r0,r8\n\
    bl          fun_08049130\n\
    str         r0,[sp,#0x0]\n\
    str         r5,[sp,#0x4]\n\
    mov         r3,#0xa\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    cmp         r6,#0x14\n\
    beq         LAB_08049306\n\
    cmp         r2,#0x0\n\
    bne         LAB_08049306\n\
    ldr         r0,DAT_08049318\n\
    lsl         r1,r6,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    str         r5,[r1,#0x0]\n\
LAB_08049306:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,#0x0\n\
    bne         LAB_08049310\n\
    add         r0,r5,#0x0\n\
LAB_08049310:\n\
    add         sp,#0x8\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08049318:\n\
    .4byte 0x020005F0\n\
    ");
}
__attribute__((naked)) void fun_0804931c()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_08049298\n\
    bl          fun_08049214\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_08049328()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0xc\n\
    add         r4,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    bl          fun_08049130\n\
    str         r0,[sp,#0x0]\n\
    str         r4,[sp,#0x4]\n\
    str         r5,[sp,#0x8]\n\
    mov         r3,#0x5\n\
    add         r0,r3,#0x0\n\
    mov         r1,sp\n\
    svc         0xab\n\
    add         r2,r0,#0x0\n\
    add         r0,r2,#0x0\n\
    add         sp,#0xc\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0804934c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r6,r2,#0x0\n\
    bl          fun_08049130\n\
    bl          fun_08049110\n\
    add         r7,r0,#0x0\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r2,r6,#0x0\n\
    bl          fun_08049328\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,r1\n\
    beq         LAB_08049374\n\
    cmp         r0,r6\n\
    bne         LAB_0804937c\n\
LAB_08049374:\n\
    add         r0,r1,#0x0\n\
    bl          fun_08049200\n\
    b           LAB_08049392\n\
LAB_0804937c:\n\
    sub         r2,r6,r0\n\
    cmp         r7,#0x14\n\
    beq         LAB_08049390\n\
    ldr         r0,DAT_08049394\n\
    lsl         r1,r7,#0x3\n\
    add         r0,#0x4\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x0]\n\
LAB_08049390:\n\
    add         r0,r2,#0x0\n\
LAB_08049392:\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08049394:\n\
    .4byte 0x020005F0\n\
    ");
}
