__attribute__((naked)) void fun_0800122c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r2,r0,#0x0\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    mov         r4,#0x1\n\
    mov         r0,#0x0\n\
    mov         r1,#0x1\n\
    bl          fun_08002d34\n\
    bl          fun_08002c44\n\
    ldr         r5,DAT_08001248\n\
    b           LAB_0800129a\n\
\n\
.space 2\n\
\n\
DAT_08001248:\n\
    .4byte 0x08756AEC\n\
LAB_0800124c:\n\
    bl          fun_08002bcc\n\
    bl          fun_08002df8\n\
    bl          fun_080046a4\n\
    cmp         r4,#0x0\n\
    beq         LAB_08001296\n\
    ldr         r0,DAT_080012ac\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001296\n\
    ldr         r0,DAT_080012b0\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001270\n\
    bl          fun_080434c8\n\
LAB_08001270:\n\
    ldr         r0,DAT_080012b4\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r5\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x2c]\n\
    bl          fun_080434c8\n\
    ldr         r0,DAT_080012b8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800128c\n\
    bl          fun_08000b44\n\
LAB_0800128c:\n\
    ldr         r1,DAT_080012bc\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    mov         r4,#0x0\n\
LAB_08001296:\n\
    bl          fun_08003cfc\n\
LAB_0800129a:\n\
    bl          fun_08002dd8\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800124c\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080012ac:\n\
    .4byte 0x020025E0\n\
DAT_080012b0:\n\
    .4byte 0x020025F0\n\
DAT_080012b4:\n\
    .4byte 0x02002560\n\
DAT_080012b8:\n\
    .4byte 0x020025D8\n\
DAT_080012bc:\n\
    .4byte 0x020025C4\n\
    ");
}
__attribute__((naked)) void fun_080012c0()
{
    asm("\n\
    push        {lr}\n\
    add         r2,r0,#0x0\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    mov         r0,#0x1\n\
    mov         r1,#0x0\n\
    bl          fun_08002d34\n\
    b           LAB_080012da\n\
LAB_080012d2:\n\
    bl          fun_08002bcc\n\
    bl          fun_08002df8\n\
LAB_080012da:\n\
    bl          fun_08002dd8\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    bne         LAB_080012d2\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
    ");
}
