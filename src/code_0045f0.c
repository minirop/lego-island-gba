__attribute__((naked)) void fun_080045f0()
{
    asm("\n\
    ldr         r1,DAT_08004600\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_08004604\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08004608\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    bx          lr\n\
DAT_08004600:\n\
    .word 0x040000D4\n\
DAT_08004604:\n\
    .word 0x05000200\n\
DAT_08004608:\n\
    .word 0x80000100\n\
    ");
}
__attribute__((naked)) void fun_0800460c()
{
    asm("\n\
    lsl         r1,r1,#0x10\n\
    ldr         r2,DAT_08004624\n\
    str         r0,[r2,#0x0]\n\
    lsr         r1,r1,#0xb\n\
    ldr         r0,DAT_08004628\n\
    add         r1,r1,r0\n\
    str         r1,[r2,#0x4]\n\
    ldr         r0,DAT_0800462c\n\
    str         r0,[r2,#0x8]\n\
    ldr         r0,[r2,#0x8]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08004624:\n\
    .word 0x040000D4\n\
DAT_08004628:\n\
    .word 0x05000200\n\
DAT_0800462c:\n\
    .word 0x80000010\n\
    ");
}
__attribute__((naked)) void fun_08004630()
{
    asm("\n\
    ldr        r2,PTR_DMA3SAD_08004640\n\
    ldr        r1,PTR_DAT_08004644\n\
    str        r1,[r2,#0x0]\n\
    str        r0,[r2,#0x4]\n\
    ldr        r0,DAT_08004648\n\
    str        r0,[r2,#0x8]\n\
    ldr        r0,[r2,#0x8]\n\
    bx         lr\n\
PTR_DMA3SAD_08004640:\n\
    .word DMA3SAD\n\
PTR_DAT_08004644:\n\
    .word DAT_05000200\n\
DAT_08004648:\n\
    .word 0x80000100\n\
    ");
}

__attribute__((naked)) void fun_0800464c()
{
    asm("\n\
    lsl        r1,r1,#0x10\n\
    ldr        r2,PTR_DMA3SAD_08004664\n\
    lsr        r1,r1,#0xb\n\
    ldr        r3,PTR_DAT_08004668\n\
    add        r1,r1,r3\n\
    str        r1,[r2,#0x0]\n\
    str        r0,[r2,#0x4]\n\
    ldr        r0,UINT_0800466c\n\
    str        r0,[r2,#0x8]\n\
    ldr        r0,[r2,#0x8]\n\
    bx         lr\n\
.space 2\n\
PTR_DMA3SAD_08004664:\n\
    .word DMA3SAD\n\
PTR_DAT_08004668:\n\
    .word DAT_05000200\n\
UINT_0800466c:\n\
    .word 0x80000010\n\
    ");
}
