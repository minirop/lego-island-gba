__attribute__((naked)) void fun_0800353c()
{
    asm("\n\
    mul         r0,r1\n\
    add         r1,r0,#0x0\n\
    cmp         r0,#0x0\n\
    bge         LAB_08003546\n\
    add         r1,#0xff\n\
LAB_08003546:\n\
    asr         r0,r1,#0x8\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800354c()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x8\n\
    bl          fun_08043504\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08003558()
{
    asm("\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_0800355c()
{
    asm("\n\
    add         r2,r0,#0x0\n\
    ldr         r3,[r2,#0x0]\n\
    ldr         r0,[r1,#0x0]\n\
    mul         r3,r0\n\
    add         r0,r3,#0x0\n\
    cmp         r3,#0x0\n\
    bge         LAB_0800356c\n\
    add         r0,#0xff\n\
LAB_0800356c:\n\
    asr         r3,r0,#0x8\n\
    ldr         r2,[r2,#0x4]\n\
    ldr         r0,[r1,#0x4]\n\
    mul         r2,r0\n\
    add         r0,r2,#0x0\n\
    cmp         r2,#0x0\n\
    bge         LAB_0800357c\n\
    add         r0,#0xff\n\
LAB_0800357c:\n\
    asr         r2,r0,#0x8\n\
    add         r0,r3,r2\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08003584()
{
    asm("\n\
    ldr         r2,[r0,#0x0]\n\
    ldr         r1,[r0,#0x4]\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    str         r1,[r0,#0x0]\n\
    str         r2,[r0,#0x4]\n\
    bx          lr\n\
\n\
    ");
}
