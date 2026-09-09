__attribute__((naked)) void fun_08004b74()
{
    asm("\n\
    ldr         r1,DAT_08004b88\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08004b8c\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004b88:\n\
    .4byte 0x040000D4\n\
DAT_08004b8c:\n\
    .4byte 0x80000100\n\
\n\
    ");
}
