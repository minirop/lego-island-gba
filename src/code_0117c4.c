__attribute__((naked)) void fun_080117c4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x2\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    beq         LAB_080117dc\n\
    cmp         r0,#0x1\n\
    beq         LAB_080117e8\n\
    b           LAB_080117ee\n\
LAB_080117dc:\n\
    mov         r1,#0xef\n\
    lsl         r1,r1,#0x2\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
    b           LAB_080117ee\n\
LAB_080117e8:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800eb28\n\
LAB_080117ee:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
__attribute__((naked)) void fun_080117f4()
{
    asm("\n\
    mov        r1,#0x2\n\
    strb       r1,[r0,#0x18]\n\
    bx         lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080117fc()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x3\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    add         r1,r0,#0x0\n\
    cmp         r0,#0x1\n\
    beq         LAB_08011828\n\
    cmp         r0,#0x1\n\
    bgt         LAB_0801181a\n\
    cmp         r0,#0x0\n\
    beq         LAB_08011820\n\
    b           LAB_0801183a\n\
LAB_0801181a:\n\
    cmp         r1,#0x2\n\
    beq         LAB_08011834\n\
    b           LAB_0801183a\n\
LAB_08011820:\n\
    ldr         r1,DAT_08011824\n\
    b           LAB_0801182c\n\
DAT_08011824:\n\
    .4byte 0x00000507\n\
LAB_08011828:\n\
    mov         r1,#0xef\n\
    lsl         r1,r1,#0x2\n\
LAB_0801182c:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800ebb4\n\
    b           LAB_0801183a\n\
LAB_08011834:\n\
    add         r0,r4,#0x0\n\
    bl          fun_0800eb28\n\
LAB_0801183a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
