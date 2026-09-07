__attribute__((naked)) void fun_0800132c()
{
    asm("\n\
    ldr         r0,DAT_0800133c\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x8\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001340\n\
    mov         r0,#0x0\n\
    b           LAB_08001342\n\
DAT_0800133c:\n\
    .4byte 0x02005CE0\n\
LAB_08001340:\n\
    mov         r0,#0x1\n\
LAB_08001342:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08001344()
{
    asm("\n\
    ldr         r0,DAT_08001354\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x4\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001358\n\
    mov         r0,#0x0\n\
    b           LAB_0800135a\n\
DAT_08001354:\n\
    .4byte 0x02005CE0\n\
LAB_08001358:\n\
    mov         r0,#0x1\n\
LAB_0800135a:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_0800135c()
{
    asm("\n\
    ldr         r0,DAT_0800136c\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x20\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001370\n\
    mov         r0,#0x0\n\
    b           LAB_08001372\n\
DAT_0800136c:\n\
    .4byte 0x02005CE0\n\
LAB_08001370:\n\
    mov         r0,#0x1\n\
LAB_08001372:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08001374()
{
    asm("\n\
    ldr         r0,DAT_08001384\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x10\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001388\n\
    mov         r0,#0x0\n\
    b           LAB_0800138a\n\
DAT_08001384:\n\
    .4byte 0x02005CE0\n\
LAB_08001388:\n\
    mov         r0,#0x1\n\
LAB_0800138a:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_0800138c()
{
    asm("\n\
    ldr         r0,DAT_080013a0\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x2\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080013a4\n\
    mov         r0,#0x0\n\
    b           LAB_080013a6\n\
\n\
.space 2\n\
\n\
DAT_080013a0:\n\
    .4byte 0x02005CE0\n\
LAB_080013a4:\n\
    mov         r0,#0x1\n\
LAB_080013a6:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080013a8()
{
    asm("\n\
    ldr         r0,DAT_080013bc\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080013c0\n\
    mov         r0,#0x0\n\
    b           LAB_080013c2\n\
\n\
.space 2\n\
\n\
DAT_080013bc:\n\
    .4byte 0x02005CE0\n\
LAB_080013c0:\n\
    mov         r0,#0x1\n\
LAB_080013c2:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080013c4()
{
    asm("\n\
    ldr         r0,DAT_080013d4\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x40\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080013d8\n\
    mov         r0,#0x0\n\
    b           LAB_080013da\n\
DAT_080013d4:\n\
    .4byte 0x02005CE0\n\
LAB_080013d8:\n\
    mov         r0,#0x1\n\
LAB_080013da:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080013dc()
{
    asm("\n\
    ldr         r0,DAT_080013ec\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080013f0\n\
    mov         r0,#0x0\n\
    b           LAB_080013f2\n\
DAT_080013ec:\n\
    .4byte 0x02005CE0\n\
LAB_080013f0:\n\
    mov         r0,#0x1\n\
LAB_080013f2:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_080013f4()
{
    asm("\n\
    ldr         r0,DAT_08001404\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001408\n\
    mov         r0,#0x0\n\
    b           LAB_0800140a\n\
DAT_08001404:\n\
    .4byte 0x02005CE0\n\
LAB_08001408:\n\
    mov         r0,#0x1\n\
LAB_0800140a:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_0800140c()
{
    asm("\n\
    ldr         r0,DAT_0800141c\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x2\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001420\n\
    mov         r0,#0x0\n\
    b           LAB_08001422\n\
DAT_0800141c:\n\
    .4byte 0x02005CE0\n\
LAB_08001420:\n\
    mov         r0,#0x1\n\
LAB_08001422:\n\
    bx          lr\n\
\n\
    ");
}
