extern short int DAT_02005830;

int fun_08001454()
{
    if (DAT_02005830 & 0x20)
        return 1;
    else
        return 0;
}
__attribute__((naked)) void fun_0800146c()
{
    asm("\n\
    ldr         r0,DAT_0800147c\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x10\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001480\n\
    mov         r0,#0x0\n\
    b           LAB_08001482\n\
DAT_0800147c:\n\
    .4byte 0x02005830\n\
LAB_08001480:\n\
    mov         r0,#0x1\n\
LAB_08001482:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08001484()
{
    asm("\n\
    ldr         r0,DAT_08001498\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x2\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800149c\n\
    mov         r0,#0x0\n\
    b           LAB_0800149e\n\
\n\
.space 2\n\
\n\
DAT_08001498:\n\
    .4byte 0x02005830\n\
LAB_0800149c:\n\
    mov         r0,#0x1\n\
LAB_0800149e:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080014a0()
{
    asm("\n\
    ldr         r0,DAT_080014b4\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080014b8\n\
    mov         r0,#0x0\n\
    b           LAB_080014ba\n\
\n\
.space 2\n\
\n\
DAT_080014b4:\n\
    .4byte 0x02005830\n\
LAB_080014b8:\n\
    mov         r0,#0x1\n\
LAB_080014ba:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080014bc()
{
    asm("\n\
    ldr         r0,DAT_080014cc\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x40\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080014d0\n\
    mov         r0,#0x0\n\
    b           LAB_080014d2\n\
DAT_080014cc:\n\
    .4byte 0x02005830\n\
LAB_080014d0:\n\
    mov         r0,#0x1\n\
LAB_080014d2:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080014d4()
{
    asm("\n\
    ldr         r0,DAT_080014e4\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080014e8\n\
    mov         r0,#0x0\n\
    b           LAB_080014ea\n\
DAT_080014e4:\n\
    .4byte 0x02005830\n\
LAB_080014e8:\n\
    mov         r0,#0x1\n\
LAB_080014ea:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080014ec()
{
    asm("\n\
    ldr         r0,DAT_080014fc\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001500\n\
    mov         r0,#0x0\n\
    b           LAB_08001502\n\
DAT_080014fc:\n\
    .4byte 0x02005830\n\
LAB_08001500:\n\
    mov         r0,#0x1\n\
LAB_08001502:\n\
    bx          lr\n\
\n\
    ");
}
