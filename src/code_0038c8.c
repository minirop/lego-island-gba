__attribute__((naked)) void fun_080038c8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    add         r5,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r7,r1,#0x10\n\
    mov         r6,#0x0\n\
    cmp         r6,r7\n\
    bcs         LAB_0800397e\n\
    ldr         r0,DAT_08003924\n\
    mov         r10,r0\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    mov         r9,r1\n\
    ldr         r0,DAT_08003928\n\
    mov         r8,r0\n\
LAB_080038ec:\n\
    ldr         r1,DAT_0800392c\n\
    ldr         r4,[r1,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_08003974\n\
    mov         r0,#0x1\n\
    strh        r0,[r4,#0x2]\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x0]\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a48\n\
    mov         r0,r9\n\
    ldrh        r1,[r5,#0x8]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003930\n\
    ldrh        r1,[r5,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r10\n\
    ldr         r1,[r0,#0x0]\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a38\n\
    ldrh        r1,[r5,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r10\n\
    b           LAB_08003944\n\
\n\
.space 2\n\
\n\
DAT_08003924:\n\
    .word 0x02000088\n\
DAT_08003928:\n\
    .word 0x02000028\n\
DAT_0800392c:\n\
    .word 0x020001A8\n\
LAB_08003930:\n\
    ldrh        r1,[r5,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r8\n\
    ldr         r1,[r0,#0x0]\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a38\n\
    ldrh        r1,[r5,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r8\n\
LAB_08003944:\n\
    str         r4,[r0,#0x0]\n\
    ldrh        r0,[r5,#0x4]\n\
    strh        r0,[r4,#0x4]\n\
    mov         r0,r9\n\
    ldrh        r1,[r5,#0x8]\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800395a\n\
    mov         r0,#0x1\n\
LAB_0800395a:\n\
    strh        r0,[r4,#0x12]\n\
    ldrh        r0,[r4,#0x12]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003966\n\
    ldrh        r0,[r5,#0x6]\n\
    strh        r0,[r4,#0x10]\n\
LAB_08003966:\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a6c\n\
    ldr         r0,DAT_08003990\n\
    ldr         r1,DAT_08003994\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08003974:\n\
    add         r0,r6,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    cmp         r6,r7\n\
    bcc         LAB_080038ec\n\
LAB_0800397e:\n\
    mov         r0,#0x1\n\
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
DAT_08003990:\n\
    .word 0x02005D04\n\
DAT_08003994:\n\
    .word 0x02005CF4\n\
    ");
}
__attribute__((naked)) void fun_08003998()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r7,r0,#0x0\n\
    ldr         r2,DAT_08003acc\n\
    ldr         r3,DAT_08003ad0\n\
    ldrh        r1,[r3,#0x0]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r5,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r3,#0x0]\n\
    mov         r6,#0x0\n\
    mov         r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    cmp         r1,#0x80\n\
    bhi         LAB_080039ba\n\
    mov         r0,#0x1\n\
LAB_080039ba:\n\
    ldr         r1,DAT_08003ad4\n\
    bl          fun_080032b4\n\
    ldrh        r0,[r7,#0x6]\n\
    cmp         r0,#0x1\n\
    beq         LAB_080039d2\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r1,[r7,#0x8]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080039e4\n\
LAB_080039d2:\n\
    add         r0,r7,#0x0\n\
    bl          fun_080049d4\n\
    add         r6,r0,#0x0\n\
    cmp         r6,#0x0\n\
    beq         LAB_080039e8\n\
    ldrh        r0,[r6,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r6,#0x0]\n\
LAB_080039e4:\n\
    cmp         r6,#0x0\n\
    bne         LAB_08003a2c\n\
LAB_080039e8:\n\
    add         r0,r7,#0x0\n\
    bl          fun_080042bc\n\
    add         r6,r0,#0x0\n\
    ldrh        r3,[r6,#0x10]\n\
    cmp         r3,#0x1\n\
    bne         LAB_08003a0e\n\
    ldr         r4,DAT_08003ad8\n\
    ldrh        r1,[r6,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    add         r0,r6,#0x0\n\
    bl          fun_08004a38\n\
    ldrh        r3,[r6,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r4\n\
    str         r6,[r0,#0x0]\n\
LAB_08003a0e:\n\
    ldrh        r0,[r6,#0x12]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003a2c\n\
    ldr         r4,DAT_08003adc\n\
    ldrh        r1,[r6,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r4\n\
    ldr         r1,[r0,#0x0]\n\
    add         r0,r6,#0x0\n\
    bl          fun_08004a38\n\
    ldrh        r3,[r6,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r4\n\
    str         r6,[r0,#0x0]\n\
LAB_08003a2c:\n\
.syntax unified\n\
    rsbs        r0,r6,#0\n\
.syntax divided\n\
    orr         r0,r6\n\
    lsr         r0,r0,#0x1f\n\
    ldr         r1,DAT_08003ae0\n\
    bl          fun_080032b4\n\
    mov         r1,#0x0\n\
    strh        r1,[r5,#0x0]\n\
    strh        r1,[r5,#0x2]\n\
    strh        r1,[r5,#0x4]\n\
    strh        r1,[r5,#0x6]\n\
    ldrh        r0,[r7,#0xa]\n\
    strh        r0,[r5,#0x8]\n\
    strh        r1,[r5,#0xa]\n\
    ldrh        r0,[r7,#0xc]\n\
    strh        r0,[r5,#0xc]\n\
    ldrh        r0,[r7,#0xe]\n\
    strh        r0,[r5,#0xe]\n\
    strh        r1,[r5,#0x10]\n\
    str         r6,[r5,#0x14]\n\
    ldr         r0,DAT_08003ae4\n\
    strh        r0,[r5,#0x18]\n\
    ldrh        r0,[r7,#0x6]\n\
    strh        r0,[r5,#0x1e]\n\
    ldrh        r2,[r7,#0x8]\n\
    strh        r2,[r5,#0x12]\n\
    strh        r1,[r5,#0x1c]\n\
    ldr         r0,DAT_08003ae8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003a74\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x3\n\
    add         r0,r1,#0x0\n\
    orr         r0,r2\n\
    strh        r0,[r5,#0x12]\n\
LAB_08003a74:\n\
    mov         r0,#0x10\n\
    ldrh        r7,[r7,#0x8]\n\
    and         r0,r7\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003a98\n\
    ldr         r2,DAT_08003aec\n\
    ldr         r1,DAT_08003af0\n\
    ldrh        r3,[r1,#0x0]\n\
    lsl         r0,r3,#0x1\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r5,#0x1a]\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r5,#0x0\n\
    bl          fun_0800471c\n\
LAB_08003a98:\n\
    mov         r2,#0x0\n\
    ldr         r0,DAT_08003af0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x20\n\
    bhi         LAB_08003aa4\n\
    mov         r2,#0x1\n\
LAB_08003aa4:\n\
    ldr         r1,DAT_08003af4\n\
    add         r0,r2,#0x0\n\
    bl          fun_080032b4\n\
    mov         r2,#0x0\n\
    ldr         r1,DAT_08003af8\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x3\n\
    ldrh        r1,[r1,#0x0]\n\
    cmp         r1,r0\n\
    bhi         LAB_08003abc\n\
    mov         r2,#0x1\n\
LAB_08003abc:\n\
    ldr         r1,DAT_08003afc\n\
    add         r0,r2,#0x0\n\
    bl          fun_080032b4\n\
    add         r0,r5,#0x0\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08003acc:\n\
    .word 0x03001800\n\
DAT_08003ad0:\n\
    .word 0x02005CF8\n\
DAT_08003ad4:\n\
    .word 0x08049C58\n\
DAT_08003ad8:\n\
    .word 0x020001B0\n\
DAT_08003adc:\n\
    .word 0x02000210\n\
DAT_08003ae0:\n\
    .word 0x08049C6C\n\
DAT_08003ae4:\n\
    .word 0x0000FFFF\n\
DAT_08003ae8:\n\
    .word 0x02005D00\n\
DAT_08003aec:\n\
    .word 0x02006D10\n\
DAT_08003af0:\n\
    .word 0x02005CFC\n\
DAT_08003af4:\n\
    .word 0x08049C7C\n\
DAT_08003af8:\n\
    .word 0x02005CF4\n\
DAT_08003afc:\n\
    .word 0x08049C98\n\
    ");
}
__attribute__((naked)) void fun_08003b00()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r2,#0x0\n\
    ldr         r6,DAT_08003b34\n\
    ldrh        r0,[r6,#0x0]\n\
    cmp         r2,r0\n\
    bcs         LAB_08003b48\n\
    ldr         r5,DAT_08003b38\n\
    add         r3,r6,#0x0\n\
LAB_08003b12:\n\
    lsl         r0,r2,#0x2\n\
    add         r1,r0,r5\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r4,r0\n\
    bne         LAB_08003b3c\n\
    ldrh        r0,[r3,#0x0]\n\
    sub         r0,#0x1\n\
    strh        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r5\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    ldrh        r3,[r3,#0x0]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r5\n\
    str         r4,[r0,#0x0]\n\
    b           LAB_08003b48\n\
DAT_08003b34:\n\
    .word 0x02005CF8\n\
DAT_08003b38:\n\
    .word 0x03001800\n\
LAB_08003b3c:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    ldrh        r1,[r6,#0x0]\n\
    cmp         r2,r1\n\
    bcc         LAB_08003b12\n\
LAB_08003b48:\n\
    mov         r0,#0x10\n\
    ldrh        r2,[r4,#0x12]\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003b90\n\
    mov         r2,#0x0\n\
    ldr         r6,DAT_08003be8\n\
    ldrh        r7,[r6,#0x0]\n\
    cmp         r2,r7\n\
    bcs         LAB_08003b90\n\
    ldr         r5,DAT_08003bec\n\
    add         r3,r6,#0x0\n\
LAB_08003b60:\n\
    lsl         r0,r2,#0x1\n\
    add         r1,r0,r5\n\
    ldrh        r0,[r4,#0x1a]\n\
    ldrh        r7,[r1,#0x0]\n\
    cmp         r0,r7\n\
    bne         LAB_08003b84\n\
    ldrh        r0,[r3,#0x0]\n\
    sub         r0,#0x1\n\
    strh        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r5\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r1,[r3,#0x0]\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r5\n\
    ldrh        r1,[r4,#0x1a]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08003b84:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    ldrh        r7,[r6,#0x0]\n\
    cmp         r2,r7\n\
    bcc         LAB_08003b60\n\
LAB_08003b90:\n\
    ldr         r4,[r4,#0x14]\n\
    ldrh        r0,[r4,#0x0]\n\
    sub         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_08003be0\n\
    ldrh        r0,[r4,#0x10]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08003bbc\n\
    ldr         r0,DAT_08003bf0\n\
    ldrh        r2,[r4,#0x4]\n\
    lsl         r1,r2,#0x2\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r4,r0\n\
    bne         LAB_08003bb6\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x0]\n\
LAB_08003bb6:\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a48\n\
LAB_08003bbc:\n\
    ldrh        r0,[r4,#0x12]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003bda\n\
    ldr         r0,DAT_08003bf4\n\
    ldrh        r7,[r4,#0x4]\n\
    lsl         r1,r7,#0x2\n\
    add         r1,r1,r0\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r4,r0\n\
    bne         LAB_08003bd4\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x0]\n\
LAB_08003bd4:\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a48\n\
LAB_08003bda:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800442c\n\
LAB_08003be0:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08003be8:\n\
    .word 0x02005CFC\n\
DAT_08003bec:\n\
    .word 0x02006D10\n\
DAT_08003bf0:\n\
    .word 0x020001B0\n\
DAT_08003bf4:\n\
    .word 0x02000210\n\
    ");
}
__attribute__((naked)) void fun_08003bf8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    ldr         r0,DAT_08003cd8\n\
    ldr         r1,DAT_08003cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    mov         r5,#0x0\n\
    mov         r9,r5\n\
LAB_08003c0c:\n\
    ldr         r0,DAT_08003ce0\n\
    lsl         r1,r5,#0x2\n\
    add         r0,r1,r0\n\
    ldr         r4,[r0,#0x0]\n\
    mov         r2,r9\n\
    str         r2,[r0,#0x0]\n\
    add         r7,r1,#0x0\n\
    add         r5,#0x1\n\
    mov         r8,r5\n\
    cmp         r4,#0x0\n\
    beq         LAB_08003c36\n\
    ldr         r6,DAT_08003ce4\n\
LAB_08003c24:\n\
    add         r5,r4,#0x0\n\
    ldr         r4,[r4,#0x18]\n\
    ldr         r1,[r6,#0x0]\n\
    add         r0,r5,#0x0\n\
    bl          fun_08004a38\n\
    str         r5,[r6,#0x0]\n\
    cmp         r4,#0x0\n\
    bne         LAB_08003c24\n\
LAB_08003c36:\n\
    ldr         r0,DAT_08003ce8\n\
    add         r0,r7,r0\n\
    ldr         r4,[r0,#0x0]\n\
    mov         r1,r9\n\
    str         r1,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_08003c58\n\
    ldr         r6,DAT_08003ce4\n\
LAB_08003c46:\n\
    add         r5,r4,#0x0\n\
    ldr         r4,[r4,#0x18]\n\
    ldr         r1,[r6,#0x0]\n\
    add         r0,r5,#0x0\n\
    bl          fun_08004a38\n\
    str         r5,[r6,#0x0]\n\
    cmp         r4,#0x0\n\
    bne         LAB_08003c46\n\
LAB_08003c58:\n\
    mov         r2,r8\n\
    lsl         r0,r2,#0x10\n\
    lsr         r5,r0,#0x10\n\
    cmp         r5,#0x17\n\
    bls         LAB_08003c0c\n\
    mov         r5,#0x0\n\
    ldr         r2,DAT_08003cec\n\
    mov         r9,r2\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r5,r0\n\
    bcs         LAB_08003c9a\n\
    ldr         r1,DAT_08003cf0\n\
    mov         r8,r1\n\
    mov         r7,#0x0\n\
    ldr         r6,DAT_08003cf4\n\
    ldr         r0,DAT_08003cf8\n\
    add         r3,r0,#0x0\n\
LAB_08003c7a:\n\
    lsl         r1,r5,#0x2\n\
    add         r1,r8\n\
    ldr         r0,[r1,#0x0]\n\
    ldr         r4,[r0,#0x14]\n\
    strh        r6,[r4,#0x6]\n\
    strh        r7,[r4,#0x14]\n\
    ldr         r1,[r1,#0x0]\n\
    ldrh        r0,[r1,#0x18]\n\
    orr         r0,r3\n\
    strh        r0,[r1,#0x18]\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    ldrh        r1,[r2,#0x0]\n\
    cmp         r5,r1\n\
    bcc         LAB_08003c7a\n\
LAB_08003c9a:\n\
    mov         r5,#0x0\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x0]\n\
    cmp         r5,r2\n\
    bcs         LAB_08003cca\n\
    ldr         r7,DAT_08003cf0\n\
    ldr         r6,DAT_08003cf4\n\
LAB_08003ca8:\n\
    lsl         r0,r5,#0x2\n\
    add         r0,r0,r7\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r4,[r0,#0x14]\n\
    ldrh        r0,[r4,#0x6]\n\
    cmp         r0,r6\n\
    bne         LAB_08003cbc\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a6c\n\
LAB_08003cbc:\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    ldr         r0,DAT_08003cec\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r5,r0\n\
    bcc         LAB_08003ca8\n\
LAB_08003cca:\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08003cd8:\n\
    .word 0x02005CF4\n\
DAT_08003cdc:\n\
    .word 0x02005D04\n\
DAT_08003ce0:\n\
    .word 0x02000148\n\
DAT_08003ce4:\n\
    .word 0x020001A8\n\
DAT_08003ce8:\n\
    .word 0x020000E8\n\
DAT_08003cec:\n\
    .word 0x02005CF8\n\
DAT_08003cf0:\n\
    .word 0x03001800\n\
DAT_08003cf4:\n\
    .word 0x0000270F\n\
DAT_08003cf8:\n\
    .word 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_08003cfc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x30\n\
    ldr         r0,DAT_08003e58\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08003d12\n\
    b           LAB_08003fe4\n\
LAB_08003d12:\n\
    ldr         r1,DAT_08003e5c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080044d0\n\
    mov         r1,#0x0\n\
    ldr         r3,DAT_08003e60\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
LAB_08003d24:\n\
    lsl         r0,r1,#0x3\n\
    add         r0,r0,r3\n\
    str         r2,[r0,#0x0]\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    cmp         r1,#0x7f\n\
    bls         LAB_08003d24\n\
    ldr         r4,DAT_08003e64\n\
    ldrh        r0,[r4,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
    mov         r0,#0x2\n\
    bl          fun_080032bc\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#4]\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x0]\n\
LAB_08003d4a:\n\
    mov         r1,#0x0\n\
    ldr         r2,[sp,#0x0]\n\
    add         r2,#0x1\n\
    str         r2,[sp,#0xc]\n\
    ldr         r3,DAT_08003e68\n\
    ldrh        r3,[r3,#0x0]\n\
    cmp         r1,r3\n\
    bcc         LAB_08003d5c\n\
    b           LAB_08003fd6\n\
LAB_08003d5c:\n\
    ldr         r4,DAT_08003e6c\n\
    str         r4,[sp,#0x10]\n\
    ldr         r6,DAT_08003e64\n\
    str         r6,[sp,#0x14]\n\
    ldr         r0,DAT_08003e70\n\
    str         r0,[sp,#0x18]\n\
    ldr         r2,DAT_08003e5c\n\
    mov         r9,r2\n\
    ldr         r3,DAT_08003e74\n\
    str         r3,[sp,#0x1c]\n\
    ldr         r4,DAT_08003e78\n\
    str         r4,[sp,#0x20]\n\
    ldr         r6,DAT_08003e60\n\
    str         r6,[sp,#0x24]\n\
LAB_08003d78:\n\
    lsl         r0,r1,#0x2\n\
    ldr         r2,[sp,#0x10]\n\
    add         r0,r0,r2\n\
    ldr         r5,[r0,#0x0]\n\
    add         r1,#0x1\n\
    str         r1,[sp,#8]\n\
    ldrh        r3,[r5,#0x6]\n\
    ldr         r4,[sp,#0x0]\n\
    cmp         r3,r4\n\
    beq         LAB_08003d8e\n\
    b           LAB_08003fc6\n\
LAB_08003d8e:\n\
    ldrh        r0,[r5,#0x8]\n\
    add         r6,r0,#0x0\n\
    ldrh        r0,[r5,#0x12]\n\
    mov         r12,r0\n\
    cmp         r6,#0x0\n\
    beq         LAB_08003dd4\n\
    ldrh        r4,[r5,#0x1c]\n\
    ldrh        r1,[r5,#0x1e]\n\
    mov         r8,r1\n\
    cmp         r4,#0xff\n\
    bls         LAB_08003dbe\n\
    ldr         r2,DAT_08003e7c\n\
    add         r7,r2,#0x0\n\
    ldrh        r3,[r5,#0x0]\n\
LAB_08003daa:\n\
    add         r1,r4,r7\n\
    add         r2,r3,#0x1\n\
    add         r3,r2,#0x0\n\
    add         r4,r1,#0x0\n\
    lsl         r0,r1,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0xff\n\
    bhi         LAB_08003daa\n\
    strh        r2,[r5,#0x0]\n\
    strh        r1,[r5,#0x1c]\n\
LAB_08003dbe:\n\
    mov         r3,r8\n\
    lsl         r0,r3,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldrh        r4,[r5,#0x0]\n\
    cmp         r4,r0\n\
    bcc         LAB_08003dce\n\
    mov         r0,#0x0\n\
    strh        r0,[r5,#0x0]\n\
LAB_08003dce:\n\
    ldrh        r1,[r5,#0x1c]\n\
    add         r0,r6,r1\n\
    strh        r0,[r5,#0x1c]\n\
LAB_08003dd4:\n\
    mov         r2,r12\n\
    lsl         r0,r2,#0x10\n\
    lsr         r0,r0,#0x19\n\
    mov         r2,#0x1\n\
    add         r1,r2,#0x0\n\
    bic         r1,r0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x4\n\
    mov         r3,r12\n\
    and         r0,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003dfa\n\
    add         r0,r2,#0x0\n\
    ldr         r4,[sp,#0x14]\n\
    ldrh        r4,[r4,#0x0]\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003dfa\n\
    mov         r1,#0x0\n\
LAB_08003dfa:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x3\n\
    mov         r6,r12\n\
    and         r0,r6\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    lsr         r0,r0,#0x1f\n\
    cmp         r1,#0x0\n\
    bne         LAB_08003e10\n\
    b           LAB_08003fc6\n\
LAB_08003e10:\n\
    ldr         r1,[sp,#0x18]\n\
    ldrh        r1,[r1,#0x0]\n\
    cmp         r1,r0\n\
    beq         LAB_08003e1a\n\
    b           LAB_08003fc6\n\
LAB_08003e1a:\n\
    ldr         r7,[r5,#0x14]\n\
    mov         r2,#0x18\n\
    ldrsh       r0,[r5,r2]\n\
    ldrh        r1,[r5,#0x0]\n\
    cmp         r0,r1\n\
    beq         LAB_08003eb6\n\
    strh        r1,[r5,#0x18]\n\
    ldrh        r0,[r7,#0x12]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003e80\n\
    ldrh        r0,[r7,#0x14]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08003eb6\n\
    mov         r0,#0x1\n\
    strh        r0,[r7,#0x14]\n\
    ldrh        r3,[r7,#0x8]\n\
    lsl         r0,r3,#0x15\n\
    lsr         r3,r0,#0x10\n\
    mov         r4,r9\n\
    ldrh        r1,[r4,#0x0]\n\
    add         r0,r1,#0x1\n\
    strh        r0,[r4,#0x0]\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x2\n\
    ldr         r6,[sp,#0x1c]\n\
    add         r2,r0,r6\n\
    ldr         r0,[r7,#0xc]\n\
    b           LAB_08003ea8\n\
DAT_08003e58:\n\
    .word 0x02000270\n\
DAT_08003e5c:\n\
    .word 0x02006D50\n\
DAT_08003e60:\n\
    .word 0x03002000\n\
DAT_08003e64:\n\
    .word 0x02000272\n\
DAT_08003e68:\n\
    .word 0x02005CF8\n\
DAT_08003e6c:\n\
    .word 0x03001800\n\
DAT_08003e70:\n\
    .word 0x02005D00\n\
DAT_08003e74:\n\
    .word 0x03001A00\n\
DAT_08003e78:\n\
    .word 0x08049D00\n\
DAT_08003e7c:\n\
    .word 0xFFFFFF00\n\
LAB_08003e80:\n\
    ldrh        r6,[r7,#0xa]\n\
    lsl         r0,r6,#0x15\n\
    lsr         r3,r0,#0x10\n\
    mov         r0,r9\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r0,r1,#0x1\n\
    mov         r2,r9\n\
    strh        r0,[r2,#0x0]\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r1\n\
    lsl         r0,r0,#0x2\n\
    ldr         r4,[sp,#0x1c]\n\
    add         r2,r0,r4\n\
    ldrh        r6,[r5,#0x0]\n\
    add         r1,r6,#0x0\n\
    mul         r1,r3\n\
    ldr         r0,[r7,#0xc]\n\
    add         r0,r0,r1\n\
LAB_08003ea8:\n\
    str         r0,[r2,#0x0]\n\
    ldrh        r1,[r7,#0x6]\n\
    lsl         r0,r1,#0x5\n\
    ldr         r4,DAT_08003f90\n\
    add         r0,r0,r4\n\
    str         r0,[r2,#0x4]\n\
    strh        r3,[r2,#0x8]\n\
LAB_08003eb6:\n\
    ldrh        r6,[r7,#0x4]\n\
    lsl         r0,r6,#0x2\n\
    ldr         r1,[sp,#0x20]\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r8,r0\n\
    ldrh        r1,[r5,#0x12]\n\
    mov         r0,#0x10\n\
    and         r0,r1\n\
    mov         r2,#0x0\n\
    mov         r12,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003ed4\n\
    ldrh        r3,[r5,#0x1a]\n\
    mov         r12,r3\n\
LAB_08003ed4:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x5\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    asr         r4,r0,#0x1f\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x3\n\
    and         r4,r0\n\
    ldrh        r6,[r5,#0x2]\n\
    ldrh        r1,[r5,#0xc]\n\
    add         r0,r6,r1\n\
    ldrh        r2,[r5,#0x4]\n\
    ldrh        r3,[r5,#0xe]\n\
    add         r2,r2,r3\n\
    str         r2,[sp,#0x28]\n\
    ldrh        r6,[r5,#0x6]\n\
    mov         r10,r6\n\
    ldr         r2,[sp,#0x24]\n\
    ldr         r1,[sp,#4]\n\
    lsl         r1,r1,#0x3\n\
    str         r1,[sp,#0x2c]\n\
    add         r6,r1,r2\n\
    mov         r3,r8\n\
    orr         r4,r3\n\
    lsl         r0,r0,#0x17\n\
    lsr         r0,r0,#0x7\n\
    orr         r4,r0\n\
    ldr         r0,[sp,#0x28]\n\
    lsl         r1,r0,#0x10\n\
    mov         r0,#0xff\n\
    lsl         r0,r0,#0x10\n\
    and         r0,r1\n\
    lsr         r0,r0,#0x10\n\
    orr         r4,r0\n\
    mov         r1,r12\n\
    lsl         r0,r1,#0x19\n\
    orr         r4,r0\n\
    str         r4,[r6,#0x0]\n\
    mov         r1,#0x30\n\
    add         r0,r1,#0x0\n\
    ldrh        r3,[r5,#0x12]\n\
    and         r0,r3\n\
    ldr         r3,[sp,#0x2c]\n\
    cmp         r0,#0x10\n\
    bne         LAB_08003f3a\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    orr         r4,r0\n\
    str         r4,[r6,#0x0]\n\
LAB_08003f3a:\n\
    add         r0,r1,#0x0\n\
    ldrh        r4,[r5,#0x12]\n\
    and         r0,r4\n\
    cmp         r0,#0x30\n\
    bne         LAB_08003f4e\n\
    ldr         r0,[r6,#0x0]\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x2\n\
    orr         r0,r1\n\
    str         r0,[r6,#0x0]\n\
LAB_08003f4e:\n\
    mov         r0,#0x40\n\
    ldrh        r1,[r5,#0x12]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003f62\n\
    ldr         r0,[r6,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x15\n\
    orr         r0,r1\n\
    str         r0,[r6,#0x0]\n\
LAB_08003f62:\n\
    mov         r0,#0x80\n\
    ldrh        r4,[r5,#0x12]\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003f76\n\
    ldr         r0,[r6,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x16\n\
    orr         r0,r1\n\
    str         r0,[r6,#0x0]\n\
LAB_08003f76:\n\
    ldrh        r0,[r7,#0x12]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08003f94\n\
    add         r1,r2,#0x4\n\
    add         r1,r3,r1\n\
    ldrh        r6,[r7,#0xa]\n\
    ldrh        r4,[r5,#0x0]\n\
    add         r0,r6,#0x0\n\
    mul         r0,r4\n\
    ldrh        r6,[r7,#0x6]\n\
    add         r0,r6,r0\n\
    strh        r0,[r1,#0x0]\n\
    b           LAB_08003f9c\n\
DAT_08003f90:\n\
    .word 0x06010000\n\
LAB_08003f94:\n\
    add         r0,r2,#0x4\n\
    add         r0,r3,r0\n\
    ldrh        r1,[r7,#0x6]\n\
    strh        r1,[r0,#0x0]\n\
LAB_08003f9c:\n\
    add         r0,r2,#0x4\n\
    add         r2,r3,r0\n\
    mov         r1,r10\n\
    lsl         r0,r1,#0xa\n\
    ldr         r1,[r2,#0x0]\n\
    orr         r1,r0\n\
    str         r1,[r2,#0x0]\n\
    ldrh        r7,[r7,#0x4]\n\
    cmp         r7,#0xb\n\
    bhi         LAB_08003fbc\n\
    mov         r0,#0xf\n\
    ldrh        r5,[r5,#0x12]\n\
    and         r0,r5\n\
    lsl         r0,r0,#0xc\n\
    orr         r1,r0\n\
    str         r1,[r2,#0x0]\n\
LAB_08003fbc:\n\
    ldr         r0,[sp,#4]\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    str         r0,[sp,#4]\n\
LAB_08003fc6:\n\
    ldr         r2,[sp,#8]\n\
    lsl         r0,r2,#0x10\n\
    lsr         r1,r0,#0x10\n\
    ldr         r3,DAT_08003ff4\n\
    ldrh        r3,[r3,#0x0]\n\
    cmp         r1,r3\n\
    bcs         LAB_08003fd6\n\
    b           LAB_08003d78\n\
LAB_08003fd6:\n\
    ldr         r4,[sp,#0xc]\n\
    lsl         r0,r4,#0x10\n\
    lsr         r0,r0,#0x10\n\
    str         r0,[sp,#0x0]\n\
    cmp         r0,#0x3\n\
    bhi         LAB_08003fe4\n\
    b           LAB_08003d4a\n\
LAB_08003fe4:\n\
    add         sp,#0x30\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08003ff4:\n\
    .word 0x02005CF8\n\
    ");
}
__attribute__((naked)) void fun_08003ff8()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r10\n\
    mov         r5,r9\n\
    mov         r4,r8\n\
    push        {r4,r5,r6}\n\
    add         r3,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    lsl         r5,r5,#0x10\n\
    lsr         r5,r5,#0x10\n\
    ldrh        r0,[r3,#0x1a]\n\
    lsl         r6,r0,#0x12\n\
    lsr         r6,r6,#0x10\n\
    mov         r0,#0x10\n\
    ldrh        r3,[r3,#0x12]\n\
    and         r0,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_080040c8\n\
    bl          fun_080032b4\n\
    ldr         r1,DAT_080040cc\n\
    mov         r8,r1\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x40\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r8\n\
    mov         r1,#0x0\n\
    ldrsh       r2,[r0,r1]\n\
    mov         r10,r2\n\
    lsl         r5,r5,#0x10\n\
    asr         r5,r5,#0x10\n\
    add         r0,r5,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    mov         r0,r10\n\
    bl          fun_08002c84\n\
    lsl         r6,r6,#0x3\n\
    ldr         r2,DAT_080040d0\n\
    mov         r9,r2\n\
    add         r1,r6,r2\n\
    strh        r0,[r1,#0x0]\n\
    lsl         r4,r4,#0x1\n\
    add         r4,r8\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r4,r1]\n\
    mov         r8,r0\n\
    add         r0,r5,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    mov         r0,r8\n\
    bl          fun_08002c84\n\
    mov         r1,r9\n\
    add         r1,#0x8\n\
    add         r1,r6,r1\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r4,[r4,#0x0]\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
    lsl         r4,r4,#0x10\n\
    asr         r4,r4,#0x10\n\
    add         r0,r5,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002c84\n\
    mov         r1,r9\n\
    add         r1,#0x10\n\
    add         r1,r6,r1\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r5,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    mov         r0,r10\n\
    bl          fun_08002c84\n\
    mov         r2,#0x18\n\
    add         r9,r2\n\
    add         r6,r9\n\
    strh        r0,[r6,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080040c8:\n\
    .word 0x08049CB4\n\
DAT_080040cc:\n\
    .word 0x08049824\n\
DAT_080040d0:\n\
    .word 0x03002006\n\
    ");
}
__attribute__((naked)) void fun_080040d4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r9,r0\n\
    add         r5,r1,#0x0\n\
    add         r4,r2,#0x0\n\
    add         r6,r3,#0x0\n\
    lsl         r5,r5,#0x10\n\
    lsr         r5,r5,#0x10\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    lsl         r6,r6,#0x10\n\
    lsr         r6,r6,#0x10\n\
    ldrh        r1,[r0,#0x1a]\n\
    lsl         r1,r1,#0x12\n\
    lsr         r1,r1,#0x10\n\
    mov         r8,r1\n\
    mov         r0,#0x10\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x12]\n\
    and         r0,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_080041b8\n\
    bl          fun_080032b4\n\
    ldr         r0,DAT_080041bc\n\
    mov         r9,r0\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x40\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r9\n\
    mov         r1,#0x0\n\
    ldrsh       r7,[r0,r1]\n\
    lsl         r4,r4,#0x10\n\
    asr         r4,r4,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r7,#0x0\n\
    bl          fun_08002c84\n\
    mov         r2,r8\n\
    lsl         r2,r2,#0x3\n\
    mov         r8,r2\n\
    ldr         r1,DAT_080041c0\n\
    mov         r10,r1\n\
    mov         r1,r8\n\
    add         r1,r10\n\
    strh        r0,[r1,#0x0]\n\
    lsl         r5,r5,#0x1\n\
    add         r5,r9\n\
    mov         r0,#0x0\n\
    ldrsh       r2,[r5,r0]\n\
    mov         r9,r2\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    mov         r0,r9\n\
    bl          fun_08002c84\n\
    mov         r1,r10\n\
    add         r1,#0x8\n\
    add         r1,r8\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r5,[r5,#0x0]\n\
.syntax unified\n\
    rsbs        r4,r5,#0\n\
.syntax divided\n\
    lsl         r4,r4,#0x10\n\
    asr         r4,r4,#0x10\n\
    lsl         r6,r6,#0x10\n\
    asr         r6,r6,#0x10\n\
    add         r0,r6,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002c84\n\
    mov         r1,r10\n\
    add         r1,#0x10\n\
    add         r1,r8\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r6,#0x0\n\
    bl          fun_08002cb4\n\
    add         r1,r0,#0x0\n\
    lsl         r1,r1,#0x10\n\
    asr         r1,r1,#0x10\n\
    add         r0,r7,#0x0\n\
    bl          fun_08002c84\n\
    mov         r1,#0x18\n\
    add         r10,r1\n\
    add         r8,r10\n\
    mov         r2,r8\n\
    strh        r0,[r2,#0x0]\n\
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
DAT_080041b8:\n\
    .word 0x08049CB4\n\
DAT_080041bc:\n\
    .word 0x08049824\n\
DAT_080041c0:\n\
    .word 0x03002006\n\
    ");
}
__attribute__((naked)) void fun_080041c4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r9,r0\n\
    mov         r8,r1\n\
    add         r5,r2,#0x0\n\
    add         r4,r3,#0x0\n\
    mov         r0,r8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
    lsl         r5,r5,#0x10\n\
    lsr         r5,r5,#0x10\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    mov         r6,#0x10\n\
    add         r0,r6,#0x0\n\
    mov         r1,r9\n\
    ldrh        r1,[r1,#0x12]\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_080042b0\n\
    bl          fun_080032b4\n\
    lsl         r5,r5,#0x10\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
    lsl         r4,r4,#0x10\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
    ldr         r2,DAT_080042b4\n\
    mov         r10,r2\n\
    mov         r3,r8\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
    mov         r1,#0xff\n\
    and         r0,r1\n\
    add         r1,r0,#0x0\n\
    add         r1,#0x40\n\
    lsl         r1,r1,#0x1\n\
    add         r1,r10\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r10\n\
    asr         r5,r5,#0x10\n\
    mov         r7,#0x0\n\
    ldrsh       r3,[r1,r7]\n\
    add         r1,r5,#0x0\n\
    mul         r1,r3\n\
    asr         r4,r4,#0x10\n\
    mov         r7,#0x0\n\
    ldrsh       r2,[r0,r7]\n\
    add         r0,r4,#0x0\n\
    mul         r0,r2\n\
    add         r1,r1,r0\n\
    lsl         r1,r1,#0x8\n\
    add         r0,r4,#0x0\n\
    mul         r0,r3\n\
    mul         r2,r5\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x8\n\
    asr         r1,r1,#0x10\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x2]\n\
    add         r1,r2,r1\n\
    mov         r3,r9\n\
    strh        r1,[r3,#0x2]\n\
    asr         r0,r0,#0x10\n\
    ldrh        r5,[r3,#0x4]\n\
    add         r0,r5,r0\n\
    strh        r0,[r3,#0x4]\n\
    ldrh        r7,[r3,#0x1a]\n\
    lsl         r4,r7,#0x12\n\
    lsr         r4,r4,#0x10\n\
    ldrh        r0,[r3,#0x12]\n\
    and         r6,r0\n\
    lsl         r6,r6,#0x10\n\
    lsr         r6,r6,#0x10\n\
    add         r0,r6,#0x0\n\
    ldr         r1,DAT_080042b0\n\
    bl          fun_080032b4\n\
    lsl         r4,r4,#0x3\n\
    ldr         r3,DAT_080042b8\n\
    add         r1,r4,r3\n\
    mov         r2,r8\n\
    add         r2,#0x40\n\
    lsl         r2,r2,#0x1\n\
    add         r2,r10\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,r3,#0x0\n\
    add         r1,#0x8\n\
    add         r1,r4,r1\n\
    mov         r5,r8\n\
    lsl         r5,r5,#0x1\n\
    mov         r8,r5\n\
    add         r8,r10\n\
    mov         r6,r8\n\
    ldrh        r0,[r6,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r3,#0x0\n\
    add         r0,#0x10\n\
    add         r0,r4,r0\n\
    ldrh        r7,[r6,#0x0]\n\
.syntax unified\n\
    rsbs        r1,r7,#0\n\
.syntax divided\n\
    strh        r1,[r0,#0x0]\n\
    add         r3,#0x18\n\
    add         r4,r4,r3\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r4,#0x0]\n\
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
DAT_080042b0:\n\
    .word 0x08049CB4\n\
DAT_080042b4:\n\
    .word 0x08049824\n\
DAT_080042b8:\n\
    .word 0x03002006\n\
    ");
}
__attribute__((naked)) void fun_080042bc()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r0,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r1,[r5,#0x8]\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004364\n\
    ldr         r2,DAT_08004314\n\
    ldrh        r3,[r5,#0x4]\n\
    lsl         r1,r3,#0x2\n\
    add         r0,r1,r2\n\
    ldr         r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_08004322\n\
    add         r3,r2,#0x0\n\
    add         r0,r1,#0x0\n\
    mov         r2,#0x0\n\
LAB_080042e4:\n\
    ldrh        r6,[r4,#0x10]\n\
    ldrh        r1,[r5,#0x6]\n\
    cmp         r6,r1\n\
    bne         LAB_08004318\n\
    add         r1,r0,r3\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r4,r0\n\
    bne         LAB_080042f8\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x0]\n\
LAB_080042f8:\n\
    ldr         r1,[r4,#0x1c]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004302\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x18]\n\
LAB_08004302:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800430c\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_0800430c:\n\
    str         r2,[r4,#0x1c]\n\
    str         r2,[r4,#0x18]\n\
    b           LAB_0800431e\n\
\n\
.space 2\n\
\n\
DAT_08004314:\n\
    .word 0x02000148\n\
LAB_08004318:\n\
    ldr         r4,[r4,#0x18]\n\
    cmp         r4,#0x0\n\
    bne         LAB_080042e4\n\
LAB_0800431e:\n\
    cmp         r4,#0x0\n\
    bne         LAB_08004414\n\
LAB_08004322:\n\
    ldr         r2,DAT_08004358\n\
    ldrh        r3,[r5,#0x4]\n\
    lsl         r1,r3,#0x2\n\
    add         r0,r1,r2\n\
    ldr         r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_080043bc\n\
    add         r3,r2,#0x0\n\
    add         r0,r1,#0x0\n\
    mov         r2,#0x0\n\
LAB_08004336:\n\
    ldrh        r6,[r4,#0x10]\n\
    ldrh        r1,[r5,#0x6]\n\
    cmp         r6,r1\n\
    bne         LAB_0800435c\n\
    add         r1,r0,r3\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r4,r0\n\
    bne         LAB_0800434a\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x0]\n\
LAB_0800434a:\n\
    ldr         r1,[r4,#0x1c]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004380\n\
    ldr         r0,[r4,#0x18]\n\
    str         r0,[r1,#0x18]\n\
    b           LAB_08004380\n\
\n\
.space 2\n\
\n\
DAT_08004358:\n\
    .word 0x02000088\n\
LAB_0800435c:\n\
    ldr         r4,[r4,#0x18]\n\
    cmp         r4,#0x0\n\
    bne         LAB_08004336\n\
    b           LAB_080043b8\n\
LAB_08004364:\n\
    ldr         r0,DAT_08004390\n\
    ldrh        r3,[r5,#0x4]\n\
    lsl         r1,r3,#0x2\n\
    add         r0,r1,r0\n\
    ldr         r4,[r0,#0x0]\n\
    add         r3,r4,#0x0\n\
    cmp         r4,#0x0\n\
    beq         LAB_08004394\n\
    ldr         r1,[r4,#0x18]\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,[r4,#0x1c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004380\n\
    str         r1,[r0,#0x18]\n\
LAB_08004380:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800438a\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_0800438a:\n\
    str         r2,[r4,#0x1c]\n\
    str         r2,[r4,#0x18]\n\
    b           LAB_080043b8\n\
DAT_08004390:\n\
    .word 0x020000E8\n\
LAB_08004394:\n\
    ldr         r0,DAT_080043c8\n\
    add         r0,r1,r0\n\
    ldr         r4,[r0,#0x0]\n\
    cmp         r4,#0x0\n\
    beq         LAB_080043bc\n\
    ldr         r1,[r4,#0x18]\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,[r4,#0x1c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080043aa\n\
    str         r1,[r0,#0x18]\n\
LAB_080043aa:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080043b4\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_080043b4:\n\
    str         r3,[r4,#0x1c]\n\
    str         r3,[r4,#0x18]\n\
LAB_080043b8:\n\
    cmp         r4,#0x0\n\
    bne         LAB_08004414\n\
LAB_080043bc:\n\
    ldr         r2,DAT_080043cc\n\
    ldr         r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080043d0\n\
    mov         r0,#0x0\n\
    b           LAB_08004426\n\
DAT_080043c8:\n\
    .word 0x02000028\n\
DAT_080043cc:\n\
    .word 0x020001A8\n\
LAB_080043d0:\n\
    add         r4,r0,#0x0\n\
    ldr         r1,[r4,#0x18]\n\
    str         r1,[r2,#0x0]\n\
    ldr         r0,[r4,#0x1c]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080043de\n\
    str         r1,[r0,#0x18]\n\
LAB_080043de:\n\
    ldr         r1,[r4,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080043e8\n\
    ldr         r0,[r4,#0x1c]\n\
    str         r0,[r1,#0x1c]\n\
LAB_080043e8:\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x1c]\n\
    str         r0,[r4,#0x18]\n\
    ldrh        r0,[r5,#0x4]\n\
    strh        r0,[r4,#0x4]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r6,[r5,#0x8]\n\
    and         r0,r6\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004404\n\
    mov         r0,#0x1\n\
LAB_08004404:\n\
    strh        r0,[r4,#0x12]\n\
    ldrh        r0,[r5,#0x6]\n\
    strh        r0,[r4,#0x10]\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a6c\n\
    cmp         r4,#0x0\n\
    beq         LAB_08004424\n\
LAB_08004414:\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r4,#0xc]\n\
    mov         r1,#0x0\n\
    mov         r0,#0x1\n\
    strh        r0,[r4,#0x0]\n\
    strh        r1,[r4,#0x14]\n\
    ldrh        r0,[r5,#0x6]\n\
    strh        r0,[r4,#0x10]\n\
LAB_08004424:\n\
    add         r0,r4,#0x0\n\
LAB_08004426:\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800442c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldrh        r0,[r4,#0x2]\n\
    cmp         r0,#0x1\n\
    bne         LAB_08004458\n\
    ldr         r2,DAT_08004454\n\
    ldrh        r1,[r4,#0x4]\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800444c\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x1c]\n\
    str         r1,[r4,#0x18]\n\
    str         r4,[r1,#0x1c]\n\
LAB_0800444c:\n\
    ldrh        r3,[r4,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    b           LAB_080044c0\n\
\n\
.space 2\n\
\n\
DAT_08004454:\n\
    .word 0x02000028\n\
LAB_08004458:\n\
    add         r0,r4,#0x0\n\
    bl          fun_08004a68\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004480\n\
    ldr         r2,DAT_0800447c\n\
    ldr         r1,[r2,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004476\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x1c]\n\
    str         r1,[r4,#0x18]\n\
    str         r4,[r1,#0x1c]\n\
LAB_08004476:\n\
    str         r4,[r2,#0x0]\n\
    b           LAB_080044c4\n\
\n\
.space 2\n\
\n\
DAT_0800447c:\n\
    .word 0x020001A8\n\
LAB_08004480:\n\
    ldrh        r1,[r4,#0x12]\n\
    cmp         r1,#0x0\n\
    beq         LAB_080044a8\n\
    ldr         r1,DAT_080044a4\n\
    ldrh        r3,[r4,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800449a\n\
    str         r2,[r4,#0x1c]\n\
    str         r0,[r4,#0x18]\n\
    str         r4,[r0,#0x1c]\n\
LAB_0800449a:\n\
    ldrh        r2,[r4,#0x4]\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    b           LAB_080044c2\n\
\n\
.space 2\n\
\n\
DAT_080044a4:\n\
    .word 0x02000148\n\
LAB_080044a8:\n\
    ldr         r2,DAT_080044cc\n\
    ldrh        r3,[r4,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080044bc\n\
    str         r1,[r4,#0x1c]\n\
    str         r0,[r4,#0x18]\n\
    str         r4,[r0,#0x1c]\n\
LAB_080044bc:\n\
    ldrh        r1,[r4,#0x4]\n\
    lsl         r0,r1,#0x2\n\
LAB_080044c0:\n\
    add         r0,r0,r2\n\
LAB_080044c2:\n\
    str         r4,[r0,#0x0]\n\
LAB_080044c4:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080044cc:\n\
    .word 0x020000E8\n\
    ");
}
__attribute__((naked)) void fun_080044d0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    ldr         r0,DAT_08004568\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r6,r0,#0x0\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800455a\n\
    ldr         r4,DAT_0800456c\n\
    ldr         r0,DAT_08004570\n\
    mov         r12,r0\n\
    ldr         r7,DAT_08004574\n\
    mov         r8,r7\n\
    cmp         r1,#0x1\n\
    bne         LAB_08004518\n\
    mov         r3,#0x0\n\
    add         r5,r4,#0x0\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r3,r0\n\
    bcs         LAB_08004518\n\
    mov         r1,r12\n\
LAB_080044fc:\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r7,[r2,#0x6]\n\
    lsl         r0,r7,#0xe\n\
    ldrh        r7,[r2,#0x10]\n\
    add         r0,r7,r0\n\
    strh        r0,[r2,#0x20]\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    ldrh        r0,[r5,#0x0]\n\
    cmp         r3,r0\n\
    bcc         LAB_080044fc\n\
LAB_08004518:\n\
    ldrh        r6,[r6,#0x0]\n\
    cmp         r6,#0x2\n\
    bne         LAB_0800454e\n\
    mov         r3,#0x0\n\
    mov         r9,r4\n\
    ldrh        r1,[r4,#0x0]\n\
    cmp         r3,r1\n\
    bcs         LAB_0800454e\n\
    ldr         r6,DAT_08004570\n\
    ldr         r7,DAT_08004578\n\
    add         r5,r7,#0x0\n\
LAB_0800452e:\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r6\n\
    ldr         r2,[r0,#0x0]\n\
    ldrh        r1,[r2,#0x6]\n\
    lsl         r0,r1,#0xe\n\
    ldrh        r7,[r2,#0x4]\n\
    add         r1,r5,r7\n\
    sub         r0,r0,r1\n\
    strh        r0,[r2,#0x20]\n\
    add         r0,r3,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    mov         r0,r9\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r3,r0\n\
    bcc         LAB_0800452e\n\
LAB_0800454e:\n\
    ldrh        r1,[r4,#0x0]\n\
    mov         r0,r12\n\
    mov         r2,#0x4\n\
    mov         r3,r8\n\
    bl          qsort\n\
LAB_0800455a:\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08004568:\n\
    .word 0x02007F60\n\
DAT_0800456c:\n\
    .word 0x02005CF8\n\
DAT_08004570:\n\
    .word 0x03001800\n\
DAT_08004574:\n\
    .word 0x08004AC5\n\
DAT_08004578:\n\
    .word 0xFFFFFC00\n\
    ");
}
__attribute__((naked)) void fun_0800457c()
{
    asm("\n\
    ldr         r0,DAT_0800458c\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08004590\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08004594\n\
    strh        r1,[r0,#0x0]\n\
    bx          lr\n\
DAT_0800458c:\n\
    .word 0x02006D50\n\
DAT_08004590:\n\
    .word 0x02005CF8\n\
DAT_08004594:\n\
    .word 0x02005CFC\n\
\n\
    ");
}
