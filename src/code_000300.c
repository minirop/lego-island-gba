__attribute__((naked)) void fun_08000300()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x4\n\
    mov         r2,#0x0\n\
    str         r2,[sp,#0x0]\n\
    ldr         r0,DAT_0800036c\n\
    mov         r1,sp\n\
    str         r1,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x12\n\
    str         r1,[r0,#0x4]\n\
    ldr         r1,DAT_08000370\n\
    str         r1,[r0,#0x8]\n\
    ldr         r1,[r0,#0x8]\n\
    str         r2,[sp,#0x0]\n\
    mov         r2,sp\n\
    str         r2,[r0,#0x0]\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x12\n\
    str         r1,[r0,#0x4]\n\
    ldr         r1,DAT_08000374\n\
    str         r1,[r0,#0x8]\n\
    ldr         r0,[r0,#0x8]\n\
    bl          fun_08002b34\n\
    bl          fun_08002b94\n\
    ldr         r1,DAT_08000378\n\
    ldr         r2,DAT_0800037c\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08000380\n\
    mov         r0,#0x8\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08000384\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    sub         r1,#0x4\n\
    ldr         r2,DAT_08000388\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_0800260c\n\
    bl          fun_08002844\n\
    bl          fun_08002c30\n\
    bl          fun_08002c44\n\
    bl          fun_080008f0\n\
    add         sp,#0x4\n\
    pop         {r0}\n\
    bx          r0\n\
.space 2\n\
DAT_0800036c:\n\
    .4byte 0x040000D4\n\
DAT_08000370:\n\
    .4byte 0x85010000\n\
DAT_08000374:\n\
    .4byte 0x85001F80\n\
DAT_08000378:\n\
    .4byte 0x04000200\n\
DAT_0800037c:\n\
    .4byte 0x00002001\n\
DAT_08000380:\n\
    .4byte 0x04000004\n\
DAT_08000384:\n\
    .4byte 0x04000208\n\
DAT_08000388:\n\
    .4byte 0x00004014\n\
    ");
}
