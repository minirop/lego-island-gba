__attribute__((naked)) void fun_08001534()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x2c\n\
    mov         r1,sp\n\
    mov         r2,#0x0\n\
    mov         r3,#0x0\n\
    ldr         r0,DAT_0800156c\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,sp\n\
    strb        r2,[r0,#3]\n\
    mov         r0,#0x8\n\
    strb        r0,[r1,#2]\n\
    mov         r0,sp\n\
    strh        r3,[r0,#4]\n\
    ldr         r0,DAT_08001570\n\
    str         r0,[sp,#8]\n\
    add         r4,sp,#0x1c\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08042838\n\
    lsl         r0,r0,#0x10\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x15\n\
    add         r2,r4,#0x0\n\
    cmp         r0,r1\n\
    bls         LAB_08001574\n\
LAB_08001568:\n\
    b           LAB_08001568\n\
\n\
.space 2\n\
\n\
DAT_0800156c:\n\
    .4byte 0x00002C85\n\
DAT_08001570:\n\
    .4byte 0x086CCFE0\n\
LAB_08001574:\n\
    ldr         r1,DAT_080015a8\n\
    add         r4,sp,#0xc\n\
    add         r0,r2,#0x0\n\
    add         r2,r4,#0x0\n\
    bl          fun_08042a24\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_0803d20c\n\
    ldr         r2,DAT_080015ac\n\
    ldr         r1,DAT_080015b0\n\
    add         r0,r2,#0x0\n\
    bl          fun_0803d4b0\n\
    ldr         r1,DAT_080015b4\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    add         sp,#0x2c\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080015a8:\n\
    .4byte 0x03000000\n\
DAT_080015ac:\n\
    .4byte 0x00007FFF\n\
DAT_080015b0:\n\
    .4byte 0x0000FFFF\n\
DAT_080015b4:\n\
    .4byte 0x020025D0\n\
    ");
}
__attribute__((naked)) void fun_080015b8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r3,r0,#0x10\n\
    mov         r2,#0x0\n\
    ldr         r5,DAT_080015ec\n\
    ldr         r6,DAT_080015f0\n\
    add         r4,r5,#0x0\n\
LAB_080015c6:\n\
    lsl         r1,r2,#0x2\n\
    add         r0,r1,r4\n\
    mov         r7,#0x0\n\
    ldrsh       r0,[r0,r7]\n\
    cmp         r3,r0\n\
    beq         LAB_080015f4\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    cmp         r2,#0x97\n\
    bls         LAB_080015c6\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_080015e0:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldrh        r0,[r6,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080015fe\n\
    b           LAB_08001624\n\
DAT_080015ec:\n\
    .4byte 0x0875678C\n\
DAT_080015f0:\n\
    .4byte 0x02005750\n\
LAB_080015f4:\n\
    add         r0,r5,#0x2\n\
    add         r0,r1,r0\n\
    mov         r7,#0x0\n\
    ldrsh       r0,[r0,r7]\n\
    b           LAB_080015e0\n\
LAB_080015fe:\n\
    lsl         r0,r4,#0x10\n\
    asr         r1,r0,#0x10\n\
    mov         r2,#0x2\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r3,r0,#0x0\n\
    cmp         r1,r2\n\
    beq         LAB_08001624\n\
    cmp         r1,r2\n\
    bgt         LAB_0800161a\n\
    mov         r0,#0x3\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    beq         LAB_0800163c\n\
    b           LAB_0800167c\n\
LAB_0800161a:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r1,r0\n\
    bne         LAB_0800167c\n\
    b           LAB_080016a4\n\
LAB_08001624:\n\
    mov         r0,#0x3\n\
    bl          fun_08041bfc\n\
    ldr         r1,DAT_08001638\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    b           LAB_080016a4\n\
\n\
.space 2\n\
\n\
DAT_08001638:\n\
    .4byte 0x020025D0\n\
LAB_0800163c:\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_08001674\n\
    add         r0,r0,r4\n\
    ldrb        r1,[r0,#0x0]\n\
    ldr         r5,DAT_08001678\n\
    mov         r7,#0x0\n\
    ldrsh       r0,[r5,r7]\n\
    cmp         r1,r0\n\
    beq         LAB_080016a4\n\
    bl          fun_08001118\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bne         LAB_080016a4\n\
    mov         r0,#0x3\n\
    bl          fun_08041bfc\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    add         r0,r1,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r4,[r0,#0x0]\n\
    b           LAB_08001698\n\
\n\
.space 2\n\
\n\
DAT_08001674:\n\
    .4byte 0x00000D21\n\
DAT_08001678:\n\
    .4byte 0x020025D0\n\
LAB_0800167c:\n\
    ldr         r5,DAT_080016ac\n\
    ldrh        r2,[r5,#0x0]\n\
    lsl         r0,r2,#0x10\n\
    cmp         r3,r0\n\
    beq         LAB_080016a4\n\
    mov         r0,#0x3\n\
    bl          fun_08041bfc\n\
    mov         r7,#0x1\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
    add         r0,r7,#0x0\n\
    strh        r0,[r5,#0x0]\n\
    lsl         r4,r4,#0x18\n\
    lsr         r4,r4,#0x18\n\
LAB_08001698:\n\
    add         r0,r4,#0x0\n\
    bl          fun_08041a44\n\
    bl          fun_08042614\n\
    strh        r4,[r5,#0x0]\n\
LAB_080016a4:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080016ac:\n\
    .4byte 0x020025D0\n\
    ");
}
__attribute__((naked)) void fun_080016b0()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    lsl         r4,r4,#0x18\n\
    lsr         r4,r4,#0x18\n\
    add         r0,r4,#0x0\n\
    bl          fun_08041a44\n\
    bl          fun_08042614\n\
    ldr         r0,DAT_080016d0\n\
    strh        r4,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_080016d0:\n\
    .4byte 0x020025D0\n\
    ");
}
__attribute__((naked)) void fun_080016d4()
{
    asm("\n\
    push        {lr}\n\
    mov         r0,#0x3\n\
    bl          fun_08041bfc\n\
    ldr         r1,DAT_080016ec\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_080016ec:\n\
    .4byte 0x020025D0\n\
    ");
}
__attribute__((naked)) void fun_080016f0()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r1,#0xff\n\
    mov         r2,#0x7f\n\
    mov         r3,#0x40\n\
    bl          fun_0803d60c\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08001704()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0803dd20\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
