__attribute__((naked)) void fun_080096fc()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x27\n\
    bls         LAB_0800970a\n\
    mov         r0,#0x0\n\
    b           LAB_08009716\n\
LAB_0800970a:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800971c\n\
    add         r0,r0,r1\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
LAB_08009716:\n\
    pop         {r4}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_0800971c:\n\
    .word 0x00000E5A\n\
    ");
}
__attribute__((naked)) void fun_08009720()
{
    asm("\n\
    push       {r4,r5,lr}\n\
    mov        r4,#0x0\n\
    mov        r5,#0x0\n\
LAB_08009726:\n\
    bl         fun_080020a4\n\
    ldr        r1,DAT_08009744\n\
    add        r0,r0,r1\n\
    add        r0,r0,r4\n\
    strb       r5,[r0,#0x0]\n\
    add        r0,r4,#0x1\n\
    lsl        r0,r0,#0x10\n\
    lsr        r4,r0,#0x10\n\
    cmp        r4,#0x27\n\
    bls        LAB_08009726\n\
    pop        {r4,r5}\n\
    pop        {r0}\n\
    bx         r0\n\
.space 2\n\
DAT_08009744:\n\
    .word 0x00000E5A\n\
    ");
}
