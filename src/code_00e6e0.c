__attribute__((naked)) void fun_0800e6e0()
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e718\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800e736\n\
    lsl         r0,r4,#0x18\n\
    asr         r0,r0,#0x18\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,r1\n\
    bne         LAB_0800e720\n\
    ldr         r4,DAT_0800e71c\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800e736\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001704\n\
    b           LAB_0800e736\n\
\n\
.space 2\n\
\n\
DAT_0800e718:\n\
    .word 0x00000DDA\n\
DAT_0800e71c:\n\
    .word 0x0200D424\n\
LAB_0800e720:\n\
    ldr         r4,DAT_0800e73c\n\
    ldr         r0,[r4,#0x0]\n\
    bl          fun_08001744\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800e736\n\
    mov         r0,#0x27\n\
    bl          fun_080016f0\n\
    str         r0,[r4,#0x0]\n\
LAB_0800e736:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800e73c:\n\
    .word 0x0200D424\n\
    ");
}
__attribute__((naked)) void fun_0800e740()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e7b8\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x78\n\
    bne         LAB_0800e75e\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e7bc\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x9\n\
    bhi         LAB_0800e7b2\n\
LAB_0800e75e:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e7c0\n\
    add         r0,r0,r1\n\
    ldrb        r4,[r0,#0x0]\n\
    ldr         r6,DAT_0800e7c4\n\
LAB_0800e76a:\n\
    mov         r0,#0xa\n\
    bl          fun_08002c04\n\
    add         r0,r4,r0\n\
    mov         r1,#0xa\n\
    bl          __umodsi3\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    lsl         r5,r4,#0x1\n\
    add         r0,r5,r6\n\
    ldrh        r0,[r0,#0x0]\n\
    bl          fun_080034c0\n\
    ldrh        r0,[r0,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800e76a\n\
    ldr         r0,DAT_0800e7c4\n\
    add         r0,r5,r0\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    bl          fun_080034d4\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e7c0\n\
    add         r0,r0,r1\n\
    strb        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800e7bc\n\
    add         r0,r0,r1\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
LAB_0800e7b2:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800e7b8:\n\
    .word 0x00000DB8\n\
DAT_0800e7bc:\n\
    .word 0x00000DB7\n\
DAT_0800e7c0:\n\
    .word 0x00000DB6\n\
DAT_0800e7c4:\n\
    .word 0x0877CEFC\n\
    ");
}

__attribute__((naked)) void fun_0800e7c8()
{
    asm("\n\
    push       {r4,r5,lr}\n\
    bl         fun_080020a4\n\
    ldr        r1,DAT_0800e848\n\
    add        r0,r0,r1\n\
    mov        r1,#0x0\n\
    strb       r1,[r0,#0x0]\n\
    bl         fun_080020a4\n\
    ldr        r1,DAT_0800e84c\n\
    add        r0,r0,r1\n\
    mov        r1,#0x78\n\
    strb       r1,[r0,#0x0]\n\
    mov        r4,#0x0\n\
    ldr        r5,PTR_DAT_0800e850\n\
LAB_0800e7e6:\n\
    lsl        r0,r4,#0x1\n\
    add        r0,r0,r5\n\
    ldrh       r0,[r0,#0x0]\n\
    mov        r1,#0x0\n\
    mov        r2,#0x1\n\
    bl         fun_080034d4\n\
    add        r0,r4,#0x1\n\
    lsl        r0,r0,#0x18\n\
    lsr        r4,r0,#0x18\n\
    cmp        r4,#0x9\n\
    bls        LAB_0800e7e6\n\
    bl         fun_080020a4\n\
    add        r4,r0,#0x0\n\
    bl         fun_080020a4\n\
    ldr        r1,DAT_0800e854\n\
    add        r0,r0,r1\n\
    mov        r1,#0x0\n\
    strb       r1,[r0,#0x0]\n\
    ldr        r0,DAT_0800e858\n\
    add        r4,r4,r0\n\
    strb       r1,[r4,#0x0]\n\
    bl         fun_0800e740\n\
    bl         fun_0800e740\n\
    bl         fun_0800e740\n\
    bl         fun_0800e740\n\
    bl         fun_0800e740\n\
    bl         fun_080020a4\n\
    add        r4,r0,#0x0\n\
    bl         fun_080020a4\n\
    ldr        r1,DAT_0800e84c\n\
    add        r0,r0,r1\n\
    ldrb       r0,[r0,#0x0]\n\
    add        r1,#0x2\n\
    add        r4,r4,r1\n\
    strh       r0,[r4,#0x0]\n\
    pop        {r4,r5}\n\
    pop        {r0}\n\
    bx         r0\n\
.space 2\n\
DAT_0800e848:\n\
    .word 0x00000DB7\n\
DAT_0800e84c:\n\
    .word 0x00000DB8\n\
PTR_DAT_0800e850:\n\
    .word DAT_0877cefc\n\
DAT_0800e854:\n\
    .word 0x00000DB9\n\
DAT_0800e858:\n\
    .word 0x00000DB6\n\
    ");
}
