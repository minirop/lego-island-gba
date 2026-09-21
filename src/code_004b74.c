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
    .word 0x040000D4\n\
DAT_08004b8c:\n\
    .word 0x80000100\n\
    ");
}
__attribute__((naked)) void fun_08004b90()
{
    asm("\n\
    lsl        r1,r1,#0x10\n\
    ldr        r2,PTR_DMA3SAD_08004ba8\n\
    str        r0,[r2,#0x0]\n\
    lsr        r1,r1,#0xb\n\
    mov        r0,#0xa0\n\
    lsl        r0,r0,#0x13\n\
    add        r1,r1,r0\n\
    str        r1,[r2,#0x4]\n\
    ldr        r0,DAT_08004bac\n\
    str        r0,[r2,#0x8]\n\
    ldr        r0,[r2,#0x8]\n\
    bx         lr\n\
PTR_DMA3SAD_08004ba8:\n\
    .word DMA3SAD\n\
DAT_08004bac:\n\
    .word 0x80000010\n\
    ");
}
