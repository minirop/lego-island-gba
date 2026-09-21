__attribute__((naked)) void fun_0800471c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r1,r0,#0x0\n\
    ldrh        r0,[r1,#0x1a]\n\
    lsl         r4,r0,#0x12\n\
    lsr         r4,r4,#0x10\n\
    mov         r0,#0x10\n\
    ldrh        r1,[r1,#0x12]\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_08004764\n\
    bl          fun_080032b4\n\
    lsl         r4,r4,#0x3\n\
    ldr         r1,DAT_08004768\n\
    add         r0,r4,r1\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x1\n\
    add         r3,r2,#0x0\n\
    strh        r3,[r0,#0x0]\n\
    add         r0,r1,#0x0\n\
    add         r0,#0x8\n\
    add         r0,r4,r0\n\
    mov         r2,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    add         r0,r1,#0x0\n\
    add         r0,#0x10\n\
    add         r0,r4,r0\n\
    strh        r2,[r0,#0x0]\n\
    add         r1,#0x18\n\
    add         r4,r4,r1\n\
    strh        r3,[r4,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08004764:\n\
    .word 0x08049CB4\n\
DAT_08004768:\n\
    .word 0x03002006\n\
    ");
}
__attribute__((naked)) void fun_0800476c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r2,r0,#0x0\n\
    lsl         r4,r1,#0x10\n\
    lsr         r4,r4,#0x10\n\
    ldrh        r0,[r2,#0x1a]\n\
    lsl         r5,r0,#0x12\n\
    lsr         r5,r5,#0x10\n\
    mov         r0,#0x10\n\
    ldrh        r2,[r2,#0x12]\n\
    and         r0,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_080047c4\n\
    bl          fun_080032b4\n\
    lsl         r5,r5,#0x3\n\
    ldr         r2,DAT_080047c8\n\
    add         r1,r5,r2\n\
    ldr         r3,DAT_080047cc\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x40\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r3\n\
    ldrh        r6,[r0,#0x0]\n\
    strh        r6,[r1,#0x0]\n\
    add         r0,r2,#0x0\n\
    add         r0,#0x8\n\
    add         r0,r5,r0\n\
    lsl         r4,r4,#0x1\n\
    add         r4,r4,r3\n\
    ldrh        r1,[r4,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,r2,#0x0\n\
    add         r0,#0x10\n\
    add         r0,r5,r0\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    strh        r1,[r0,#0x0]\n\
    add         r2,#0x18\n\
    add         r5,r5,r2\n\
    strh        r6,[r5,#0x0]\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080047c4:\n\
    .word 0x08049CB4\n\
DAT_080047c8:\n\
    .word 0x03002006\n\
DAT_080047cc:\n\
    .word 0x08049824\n\
    ");
}
__attribute__((naked)) void fun_080047d0()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r2,r0,#0x0\n\
    lsl         r6,r1,#0x10\n\
    lsr         r6,r6,#0x10\n\
    ldrh        r0,[r2,#0x1a]\n\
    lsl         r4,r0,#0x12\n\
    lsr         r4,r4,#0x10\n\
    mov         r0,#0x10\n\
    ldrh        r2,[r2,#0x12]\n\
    and         r0,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_08004824\n\
    bl          fun_080032b4\n\
    lsl         r6,r6,#0x10\n\
    asr         r6,r6,#0x10\n\
    add         r0,r6,#0x0\n\
    bl          fun_08002cb4\n\
    lsl         r4,r4,#0x3\n\
    ldr         r5,DAT_08004828\n\
    add         r1,r4,r5\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x8\n\
    add         r0,r4,r0\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,r5,#0x0\n\
    add         r0,#0x10\n\
    add         r0,r4,r0\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,r6,#0x0\n\
    bl          fun_08002cb4\n\
    add         r5,#0x18\n\
    add         r4,r4,r5\n\
    strh        r0,[r4,#0x0]\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08004824:\n\
    .word 0x08049CB4\n\
DAT_08004828:\n\
    .word 0x03002006\n\
    ");
}
__attribute__((naked)) void fun_0800482c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r3,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r6,r2,#0x0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    lsl         r6,r6,#0x10\n\
    lsr         r6,r6,#0x10\n\
    ldrh        r0,[r3,#0x1a]\n\
    lsl         r5,r0,#0x12\n\
    lsr         r5,r5,#0x10\n\
    mov         r0,#0x10\n\
    ldrh        r3,[r3,#0x12]\n\
    and         r0,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_0800488c\n\
    bl          fun_080032b4\n\
    lsl         r4,r4,#0x10\n\
    asr         r4,r4,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002cb4\n\
    lsl         r5,r5,#0x3\n\
    ldr         r4,DAT_08004890\n\
    add         r1,r5,r4\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x8\n\
    add         r0,r5,r0\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,r4,#0x0\n\
    add         r0,#0x10\n\
    add         r0,r5,r0\n\
    strh        r1,[r0,#0x0]\n\
    lsl         r6,r6,#0x10\n\
    asr         r6,r6,#0x10\n\
    add         r0,r6,#0x0\n\
    bl          fun_08002cb4\n\
    add         r4,#0x18\n\
    add         r5,r5,r4\n\
    strh        r0,[r5,#0x0]\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800488c:\n\
    .word 0x08049CB4\n\
DAT_08004890:\n\
    .word 0x03002006\n\
    ");
}
__attribute__((naked)) void fun_08004894()
{
    asm("\n\
    strh        r1,[r0,#0x2]\n\
    strh        r2,[r0,#0x4]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800489c()
{
    asm("\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    ldr         r2,DAT_080048b0\n\
    ldrh        r3,[r0,#0x12]\n\
    and         r2,r3\n\
    mov         r3,#0xf\n\
    and         r1,r3\n\
    orr         r2,r1\n\
    strh        r2,[r0,#0x12]\n\
    bx          lr\n\
DAT_080048b0:\n\
    .word 0x0000FFF0\n\
    ");
}
__attribute__((naked)) void fun_080048b4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r4,[sp,#0xc]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r0,r2,#0x10\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     mov        r2,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_080048d4\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
LAB_080048d4:\n\
     cmp        r0,#0x0\n\
     beq        LAB_080048e0\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     orr        r2,r0\n\
LAB_080048e0:\n\
     cmp        r3,#0x0\n\
     beq        LAB_080048f0\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r1,#0x0\n\
     orr        r2,r0\n\
     lsl        r0,r2,#0x10\n\
     lsr        r2,r0,#0x10\n\
LAB_080048f0:\n\
     cmp        r4,#0x0\n\
     beq        LAB_08004900\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r1,#0x0\n\
     orr        r2,r0\n\
     lsl        r0,r2,#0x10\n\
     lsr        r2,r0,#0x10\n\
LAB_08004900:\n\
     ldr        r0,DAT_08004918\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r2,DAT_0800491c\n\
     lsl        r1,r5,#0x8\n\
     mov        r0,#0x10\n\
     sub        r0,r0,r5\n\
     orr        r1,r0\n\
     strh       r1,[r2,#0x0]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08004918:\n\
     .word 0x04000050\n\
DAT_0800491c:\n\
     .word 0x04000052\n\
    ");
}
__attribute__((naked)) void fun_08004920()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    ldr         r1,DAT_0800492c\n\
    lsr         r0,r0,#0xe\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    bx          lr\n\
DAT_0800492c:\n\
    .word 0x03001800\n\
    ");
}
__attribute__((naked)) void fun_08004930()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    ldr         r3,DAT_08004968\n\
    lsl         r2,r0,#0x2\n\
    add         r2,r2,r3\n\
    ldr         r2,[r2,#0x0]\n\
    ldr         r3,[r2,#0x14]\n\
    lsl         r0,r0,#0x3\n\
    ldr         r2,DAT_0800496c\n\
    add         r0,r0,r2\n\
    mov         r2,#0xfc\n\
    lsl         r2,r2,#0x8\n\
    ldrh        r4,[r0,#0x0]\n\
    and         r2,r4\n\
    strh        r2,[r0,#0x0]\n\
    ldrh        r4,[r3,#0xa]\n\
    mul         r1,r4\n\
    ldrh        r3,[r3,#0x6]\n\
    add         r1,r3,r1\n\
    orr         r2,r1\n\
    strh        r2,[r0,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08004968:\n\
    .word 0x03001800\n\
DAT_0800496c:\n\
    .word 0x03002004\n\
    ");
}
__attribute__((naked)) void fun_08004970()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r5,r1,#0x10\n\
    ldr         r1,DAT_080049c4\n\
    lsr         r0,r0,#0xe\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,r5\n\
    beq         LAB_080049bc\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r4,[r0,#0x14]\n\
    ldrh        r2,[r4,#0x8]\n\
    lsl         r3,r2,#0x15\n\
    lsr         r3,r3,#0x10\n\
    ldr         r2,DAT_080049c8\n\
    ldrh        r0,[r2,#0x0]\n\
    add         r1,r0,#0x1\n\
    strh        r1,[r2,#0x0]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    lsl         r1,r0,#0x1\n\
    add         r1,r1,r0\n\
    lsl         r1,r1,#0x2\n\
    ldr         r0,DAT_080049cc\n\
    add         r1,r1,r0\n\
    add         r2,r5,#0x0\n\
    mul         r2,r3\n\
    ldr         r0,[r4,#0xc]\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x0]\n\
    ldrh        r4,[r4,#0x6]\n\
    lsl         r0,r4,#0x5\n\
    ldr         r2,DAT_080049d0\n\
    add         r0,r0,r2\n\
    str         r0,[r1,#0x4]\n\
    strh        r3,[r1,#0x8]\n\
LAB_080049bc:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080049c4:\n\
    .word 0x03001800\n\
DAT_080049c8:\n\
    .word 0x02006D50\n\
DAT_080049cc:\n\
    .word 0x03001A00\n\
DAT_080049d0:\n\
    .word 0x06010000\n\
    ");
}
__attribute__((naked)) void fun_080049d4()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    ldrh        r1,[r2,#0x8]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004a0c\n\
    ldr         r1,DAT_08004a08\n\
    ldrh        r3,[r2,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    ldr         r2,[r2,#0x0]\n\
    cmp         r0,r2\n\
    beq         LAB_08004a2e\n\
LAB_080049f8:\n\
    ldr         r1,[r1,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    cmp         r0,r2\n\
    bne         LAB_080049f8\n\
    b           LAB_08004a2e\n\
\n\
.space 2\n\
\n\
DAT_08004a08:\n\
    .word 0x02000210\n\
LAB_08004a0c:\n\
    ldr         r1,DAT_08004a34\n\
    ldrh        r3,[r2,#0x4]\n\
    lsl         r0,r3,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    ldr         r2,[r2,#0x0]\n\
    cmp         r0,r2\n\
    beq         LAB_08004a2e\n\
LAB_08004a22:\n\
    ldr         r1,[r1,#0x18]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a2e\n\
    ldr         r0,[r1,#0xc]\n\
    cmp         r0,r2\n\
    bne         LAB_08004a22\n\
LAB_08004a2e:\n\
    add         r0,r1,#0x0\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004a34:\n\
    .word 0x020001B0\n\
    ");
}
__attribute__((naked)) void fun_08004a38()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    cmp         r1,#0x0\n\
    beq         LAB_08004a46\n\
    mov         r0,#0x0\n\
    str         r0,[r2,#0x1c]\n\
    str         r1,[r2,#0x18]\n\
    str         r2,[r1,#0x1c]\n\
LAB_08004a46:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08004a48()
{
    asm("\n\
    add         r1,r0,#0x0\n\
    ldr         r2,[r1,#0x1c]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004a54\n\
    ldr         r0,[r1,#0x18]\n\
    str         r0,[r2,#0x18]\n\
LAB_08004a54:\n\
    ldr         r2,[r1,#0x18]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08004a5e\n\
    ldr         r0,[r1,#0x1c]\n\
    str         r0,[r2,#0x1c]\n\
LAB_08004a5e:\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x1c]\n\
    str         r0,[r1,#0x18]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08004a68()
{
    asm("\n\
    mov         r0,#0x0\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08004a6c()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r3,r0,#0x0\n\
    ldrh        r0,[r3,#0x12]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08004a94\n\
    ldr         r1,DAT_08004a90\n\
    ldrh        r2,[r3,#0x4]\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r5,[r3,#0x10]\n\
    ldrh        r6,[r0,#0x0]\n\
    add         r4,r5,#0x0\n\
    mul         r4,r6\n\
    add         r0,r4,#0x0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    b           LAB_08004aa0\n\
\n\
.space 2\n\
\n\
DAT_08004a90:\n\
    .word 0x08049CD0\n\
LAB_08004a94:\n\
    ldr         r0,DAT_08004abc\n\
    ldrh        r2,[r3,#0x4]\n\
    lsl         r1,r2,#0x1\n\
    add         r1,r1,r0\n\
    ldrh        r4,[r1,#0x0]\n\
    add         r1,r0,#0x0\n\
LAB_08004aa0:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0xa]\n\
    strh        r4,[r3,#0x8]\n\
    ldr         r1,DAT_08004ac0\n\
    ldrh        r0,[r1,#0x0]\n\
    strh        r0,[r3,#0x6]\n\
    add         r0,r4,r0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08004abc:\n\
    .word 0x08049CD0\n\
DAT_08004ac0:\n\
    .word 0x02005CF4\n\
    ldr         r2,[r0,#0x0]\n\
    ldr         r0,[r1,#0x0]\n\
    ldrh        r2,[r2,#0x20]\n\
    ldrh        r0,[r0,#0x20]\n\
    cmp         r2,r0\n\
    bcs         LAB_08004ad6\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08004ad8\n\
LAB_08004ad6:\n\
    mov         r0,#0x1\n\
LAB_08004ad8:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08004adc()
{
    asm("\n\
    push        {lr}\n\
    ldr         r0,DAT_08004b0c\n\
    mov         r1,#0x0\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08004b10\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r2,DAT_08004b14\n\
    mov         r0,#0x1\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r0,DAT_08004b18\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08004b1c\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08004b20\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08004b24\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08004b28\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_08004cd0\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08004b0c:\n\
    .word 0x02007FB4\n\
DAT_08004b10:\n\
    .word 0x02007F90\n\
DAT_08004b14:\n\
    .word 0x02007F74\n\
DAT_08004b18:\n\
    .word 0x02007FB0\n\
DAT_08004b1c:\n\
    .word 0x02007F94\n\
DAT_08004b20:\n\
    .word 0x02007F7C\n\
DAT_08004b24:\n\
    .word 0x02007F70\n\
DAT_08004b28:\n\
    .word 0x02007F78\n\
    ");
}
__attribute__((naked)) void fun_08004b2c()
{
    asm("\n\
    ldr         r0,DAT_08004b58\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x1\n\
    add         r2,r1,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    add         r0,#0x2\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r2,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    add         r0,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004b58:\n\
    .word 0x04000020\n\
\n\
    ");
}

extern unsigned short DAT_02007f90;
extern unsigned short DAT_02007f74;

void fun_08004b5c(unsigned short param_1)
{
    DAT_02007f90 = param_1;
}
void fun_08004b68(unsigned short param_1)
{
    DAT_02007f74 = param_1;
}
