extern short int DAT_02005830;
extern short int DAT_02005ce0;

int fun_08001424()
{
    if (DAT_02005830 & 0x8)
        return 1;
    else
        return 0;
}
int fun_0800143c()
{
    if (DAT_02005830 & 0x4)
        return 1;
    else
        return 0;
}
int fun_08001454()
{
    if (DAT_02005830 & 0x20)
        return 1;
    else
        return 0;
}
int fun_0800146c()
{
    if (DAT_02005830 & 0x10)
        return 1;
    else
        return 0;
}
int fun_08001484()
{
    if (DAT_02005830 & 0x200)
        return 1;
    else
        return 0;
}
int fun_080014a0()
{
    if (DAT_02005830 & 0x100)
        return 1;
    else
        return 0;
}
int fun_080014bc()
{
    if (DAT_02005830 & 0x40)
        return 1;
    else
        return 0;
}
int fun_080014d4()
{
    if (DAT_02005830 & 0x80)
        return 1;
    else
        return 0;
}
int fun_080014ec()
{
    if (DAT_02005830 & 0x1)
        return 1;
    else
        return 0;
}
int fun_08001504()
{
    if (DAT_02005830 & 0x2)
        return 1;
    else
        return 0;
}
__attribute__((naked))void fun_0800151c()
{
    asm("\n\
    ldr        r2,DAT_0800152c\n\
    ldr        r1,DAT_08001530\n\
    mov        r0,#0x0\n\
    strh       r0,[r1,#0x0]\n\
    ldrh       r0,[r1,#0x0]\n\
    strh       r0,[r2,#0x0]\n\
    bx         lr\n\
.space 2\n\
DAT_0800152c:\n\
    .4byte     DAT_02005830\n\
DAT_08001530:\n\
    .4byte     DAT_02005ce0\n\
    ");
}
