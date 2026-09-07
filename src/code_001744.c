__attribute__((naked)) void fun_08001744()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0803dda4\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08001754()
{
    asm("\n\
    push        {lr}\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    bl          fun_0803da44\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08001764()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0803de40\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
    ");
}
