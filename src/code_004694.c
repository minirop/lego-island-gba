__attribute__((naked)) void fun_08004694()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    ldr         r1,DAT_080046a0\n\
    lsr         r0,r0,#0xe\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    bx          lr\n\
DAT_080046a0:\n\
    .4byte 0x03001800\n\
    ");
}
__attribute__((naked)) void fun_080046a4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    ldr         r1,DAT_080046fc\n\
    ldr         r0,DAT_08004700\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xe0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08004704\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    mov         r2,#0x0\n\
    ldr         r4,DAT_08004708\n\
    add         r7,r4,#0x0\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r2,r0\n\
    bcs         LAB_080046f2\n\
    ldr         r6,DAT_0800470c\n\
    add         r3,r1,#0x0\n\
    mov         r5,#0x84\n\
    lsl         r5,r5,#0x18\n\
LAB_080046cc:\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r2\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r6\n\
    ldr         r1,[r0,#0x0]\n\
    str         r1,[r3,#0x0]\n\
    ldr         r1,[r0,#0x4]\n\
    str         r1,[r3,#0x4]\n\
    ldrh        r0,[r0,#0x8]\n\
    lsr         r0,r0,#0x2\n\
    orr         r0,r5\n\
    str         r0,[r3,#0x8]\n\
    ldr         r0,[r3,#0x8]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r2,r0,#0x10\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r2,r0\n\
    bcc         LAB_080046cc\n\
LAB_080046f2:\n\
    mov         r0,#0x0\n\
    strh        r0,[r7,#0x0]\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080046fc:\n\
    .4byte 0x040000D4\n\
DAT_08004700:\n\
    .4byte 0x03002000\n\
DAT_08004704:\n\
    .4byte 0x84000100\n\
DAT_08004708:\n\
    .4byte 0x02006D50\n\
DAT_0800470c:\n\
    .4byte 0x03001A00\n\
\n\
    ");
}
