__attribute__((naked)) void fun_080035b4()
{
    asm("\n\
    push        {lr}\n\
    add         r1,r0,#0x0\n\
    ldr         r0,[r1,#0x4]\n\
    lsl         r0,r0,#0xa\n\
    asr         r0,r0,#0x10\n\
    ldr         r1,[r1,#0x0]\n\
    lsl         r1,r1,#0xa\n\
    asr         r1,r1,#0x10\n\
    bl          fun_0803d064\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x18\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_080035d0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r2,#0x0\n\
    ldr         r3,[r0,#0x0]\n\
    ldr         r2,[r1,#0x0]\n\
    sub         r3,r3,r2\n\
    ldr         r2,[r0,#0x4]\n\
    ldr         r0,[r1,#0x4]\n\
    sub         r2,r2,r0\n\
    add         r0,r3,#0x0\n\
    cmp         r3,#0x0\n\
    bge         LAB_080035e8\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
LAB_080035e8:\n\
    asr         r4,r0,#0x8\n\
    add         r1,r2,#0x0\n\
    cmp         r2,#0x0\n\
    bge         LAB_080035f2\n\
.syntax unified\n\
    rsbs        r1,r2,#0\n\
.syntax divided\n\
LAB_080035f2:\n\
    asr         r0,r1,#0x8\n\
    cmp         r4,#0x9f\n\
    bgt         LAB_08003624\n\
    cmp         r0,#0x9f\n\
    bgt         LAB_08003624\n\
    add         r0,r3,#0x0\n\
    mul         r0,r3\n\
    add         r3,r0,#0x0\n\
    cmp         r3,#0x0\n\
    bge         LAB_08003608\n\
    add         r0,#0xff\n\
LAB_08003608:\n\
    asr         r4,r0,#0x8\n\
    add         r0,r2,#0x0\n\
    mul         r0,r2\n\
    add         r2,r0,#0x0\n\
    add         r1,r2,#0x0\n\
    cmp         r2,#0x0\n\
    bge         LAB_08003618\n\
    add         r1,#0xff\n\
LAB_08003618:\n\
    asr         r0,r1,#0x8\n\
    add         r0,r4,r0\n\
    cmp         r0,r5\n\
    bge         LAB_08003624\n\
    mov         r0,#0x1\n\
    b           LAB_08003626\n\
LAB_08003624:\n\
    mov         r0,#0x0\n\
LAB_08003626:\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_0800362c()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r0,r1,#0x10\n\
    cmp         r2,r0\n\
    bls         LAB_08003644\n\
    sub         r0,r2,r0\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x7f\n\
    bhi         LAB_0800364e\n\
    b           LAB_08003654\n\
LAB_08003644:\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x7f\n\
    bhi         LAB_08003654\n\
LAB_0800364e:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08003656\n\
LAB_08003654:\n\
    mov         r0,#0x1\n\
LAB_08003656:\n\
    bx          lr\n\
\n\
    ");
}
__attribute__((naked)) void fun_08003658()
{
    asm("\n\
    ");
}
__attribute__((naked)) void fun_08003660()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r4,r0,#0x0\n\
    add         r5,r1,#0x0\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08044884\n\
    str         r0,[r4,#0x0]\n\
    ldr         r0,[r4,#0x4]\n\
    add         r1,r5,#0x0\n\
    bl          fun_08044884\n\
    str         r0,[r4,#0x4]\n\
    ldr         r0,[r4,#0x8]\n\
    add         r1,r5,#0x0\n\
    bl          fun_08044884\n\
    str         r0,[r4,#0x8]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
