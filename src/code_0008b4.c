__attribute__((naked)) void fun_080008b4()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x8\n\
    add         r5,r0,#0x0\n\
    add         r0,r1,#0x0\n\
    ldr         r4,DAT_080008ec\n\
    lsl         r2,r2,#0x3\n\
    lsl         r1,r0,#0x1\n\
    add         r1,r1,r0\n\
    lsl         r1,r1,#0x3\n\
    add         r0,r2,r1\n\
    add         r3,r4,#0x4\n\
    add         r0,r0,r3\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[sp,#4]\n\
    add         r2,r2,r4\n\
    add         r1,r1,r2\n\
    mov         r0,sp\n\
    bl          fun_08045724\n\
    add         r1,r5,#0x0\n\
    mov         r0,sp\n\
    ldmia       r0!,{r2,r3}\n\
    stmia       r1!,{r2,r3}\n\
    add         r0,r5,#0x0\n\
    add         sp,#0x8\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_080008ec:\n\
    .4byte 0x02005210\n\
    ");
}

__attribute__((naked)) void fun_080008f0()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    bl          fun_08002160\n\
    ldr         r1,DAT_080009fc\n\
    mov         r0,#0xf\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    bl          fun_080011a8\n\
    mov         r0,#0x0\n\
    bl          fun_080011b4\n\
    ldr         r0,DAT_08000a00\n\
    ldr         r1,DAT_08000a04\n\
    mov         r2,#0x4\n\
    bl          fun_08044f7c\n\
    ldr         r1,DAT_08000a08\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    bl          fun_08001534\n\
    ldr         r0,DAT_08000a0c\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000a10\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000a14\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000a18\n\
    strb        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000a1c\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000a20\n\
    mov         r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
    add         r2,r3,#0x0\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r0,DAT_08000a24\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000a28\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000a2c\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r1,DAT_08000a30\n\
    ldr         r3,DAT_08000a34\n\
    add         r0,r3,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08000a38\n\
    mov         r4,#0x0\n\
    str         r4,[r0,#0x0]\n\
    ldr         r0,DAT_08000a3c\n\
    strh        r2,[r0,#0x0]\n\
    ldr         r5,DAT_08000a40\n\
    strh        r4,[r5,#0x0]\n\
    ldr         r0,DAT_08000a44\n\
    str         r4,[r0,#0x0]\n\
    ldr         r0,DAT_08000a48\n\
    bl          fun_08002bb4\n\
    ldr         r0,DAT_08000a4c\n\
    strh        r4,[r0,#0x0]\n\
    bl          fun_08002c30\n\
    bl          fun_080011d8\n\
    ldr         r0,DAT_08000a50\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r0,DAT_08000a54\n\
    strh        r4,[r0,#0x0]\n\
    ldr         r0,DAT_08000a58\n\
    str         r4,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    bl          fun_08002ccc\n\
    ldr         r6,DAT_08000a5c\n\
LAB_08000988:\n\
    ldr         r0,DAT_08000a60\n\
    mov         r1,#0x0\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_08002c44\n\
    ldrh        r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080009aa\n\
    bl          fun_080026f0\n\
    strh        r0,[r5,#0x2]\n\
    bl          fun_08002968\n\
    strh        r0,[r5,#0xc]\n\
    bl          fun_08002878\n\
    strh        r0,[r5,#0x4]\n\
LAB_080009aa:\n\
    ldr         r4,DAT_08000a28\n\
    ldrh        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080009cc\n\
    ldr         r1,DAT_08000a64\n\
    ldr         r0,DAT_08000a2c\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x2c]\n\
    bl          fun_080434c8\n\
    ldr         r1,DAT_08000a68\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_080009cc:\n\
    bl          fun_08003cfc\n\
    ldrh        r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08000a88\n\
    ldrh        r4,[r4,#0x0]\n\
    cmp         r4,r6\n\
    bls         LAB_08000aaa\n\
    mov         r1,#0x4\n\
    ldrsh       r0,[r5,r1]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000a74\n\
    ldr         r0,DAT_08000a6c\n\
    ldrh        r1,[r0,#0x0]\n\
    mov         r0,#0x8\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08000a74\n\
    ldr         r1,DAT_08000a70\n\
    mov         r0,#0x4\n\
    strb        r0,[r1,#0x0]\n\
    bl          fun_08000dbc\n\
    b           LAB_08000aaa\n\
DAT_080009fc:\n\
    .4byte 0x020025D0\n\
DAT_08000a00:\n\
    .4byte 0x020025C0\n\
DAT_08000a04:\n\
    .4byte 0x0804975C\n\
DAT_08000a08:\n\
    .4byte 0x02002528\n\
DAT_08000a0c:\n\
    .4byte 0x0200252C\n\
DAT_08000a10:\n\
    .4byte 0x020025BC\n\
DAT_08000a14:\n\
    .4byte 0x020025F8\n\
DAT_08000a18:\n\
    .4byte 0x02005570\n\
DAT_08000a1c:\n\
    .4byte 0x020025D4\n\
DAT_08000a20:\n\
    .4byte 0x02002524\n\
DAT_08000a24:\n\
    .4byte 0x02002530\n\
DAT_08000a28:\n\
    .4byte 0x020025E0\n\
DAT_08000a2c:\n\
    .4byte 0x02002560\n\
DAT_08000a30:\n\
    .4byte 0x020025D8\n\
DAT_08000a34:\n\
    .4byte 0x00002329\n\
DAT_08000a38:\n\
    .4byte 0x02000000\n\
DAT_08000a3c:\n\
    .4byte 0x020025C8\n\
DAT_08000a40:\n\
    .4byte 0x02005750\n\
DAT_08000a44:\n\
    .4byte 0x020025B4\n\
DAT_08000a48:\n\
    .4byte 0x08000D1D\n\
DAT_08000a4c:\n\
    .4byte 0x02002548\n\
DAT_08000a50:\n\
    .4byte 0x02002544\n\
DAT_08000a54:\n\
    .4byte 0x020025EC\n\
DAT_08000a58:\n\
    .4byte 0x020025F0\n\
DAT_08000a5c:\n\
    .4byte 0x000007CF\n\
DAT_08000a60:\n\
    .4byte 0x020025F4\n\
DAT_08000a64:\n\
    .4byte 0x08756AEC\n\
DAT_08000a68:\n\
    .4byte 0x020025C4\n\
DAT_08000a6c:\n\
    .4byte 0x02005CE0\n\
DAT_08000a70:\n\
    .4byte 0x02005760\n\
LAB_08000a74:\n\
    ldr         r0,DAT_08000a84\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x4\n\
    bne         LAB_08000aaa\n\
    bl          fun_08000dbc\n\
    b           LAB_08000aaa\n\
\n\
.space 2\n\
\n\
DAT_08000a84:\n\
    .4byte 0x02005710\n\
LAB_08000a88:\n\
    bl          fun_0800132c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08000aaa\n\
    ldrh        r1,[r4,#0x0]\n\
    ldr         r0,DAT_08000af8\n\
    cmp         r1,r0\n\
    beq         LAB_08000aaa\n\
    cmp         r1,#0x14\n\
    beq         LAB_08000aa6\n\
    cmp         r1,#0x16\n\
    beq         LAB_08000aa6\n\
    cmp         r1,r6\n\
    bls         LAB_08000aaa\n\
LAB_08000aa6:\n\
    bl          fun_08000dbc\n\
LAB_08000aaa:\n\
    ldr         r0,DAT_08000afc\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08000ab6\n\
    bl          fun_08000b44\n\
LAB_08000ab6:\n\
    ldr         r0,DAT_08000b00\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,#0x14\n\
    beq         LAB_08000ae2\n\
    cmp         r1,#0x16\n\
    beq         LAB_08000ae2\n\
    ldr         r0,DAT_08000b04\n\
    cmp         r1,r0\n\
    beq         LAB_08000ae2\n\
    ldr         r0,DAT_08000b08\n\
    cmp         r1,r0\n\
    beq         LAB_08000ae2\n\
    add         r0,#0x1\n\
    cmp         r1,r0\n\
    beq         LAB_08000ae2\n\
    mov         r0,#0xfd\n\
    lsl         r0,r0,#0x3\n\
    cmp         r1,r0\n\
    beq         LAB_08000ae2\n\
    ldr         r0,DAT_08000b0c\n\
    cmp         r1,r0\n\
    bne         LAB_08000b14\n\
LAB_08000ae2:\n\
    ldr         r0,DAT_08000b10\n\
    ldrb        r3,[r0,#0x0]\n\
    cmp         r3,#0x1\n\
    bhi         LAB_08000b18\n\
    add         r4,r0,#0x0\n\
LAB_08000aec:\n\
    bl          fun_08002bcc\n\
    ldrb        r0,[r4,#0x0]\n\
    cmp         r0,#0x1\n\
    bls         LAB_08000aec\n\
    b           LAB_08000b18\n\
DAT_08000af8:\n\
    .4byte 0x000007D4\n\
DAT_08000afc:\n\
    .4byte 0x020025D8\n\
DAT_08000b00:\n\
    .4byte 0x020025E0\n\
DAT_08000b04:\n\
    .4byte 0x000007E2\n\
DAT_08000b08:\n\
    .4byte 0x000003EA\n\
DAT_08000b0c:\n\
    .4byte 0x000003E9\n\
DAT_08000b10:\n\
    .4byte 0x020025F4\n\
LAB_08000b14:\n\
    bl          fun_08002bcc\n\
LAB_08000b18:\n\
    bl          fun_08002df8\n\
    bl          fun_080046a4\n\
    ldr         r0,DAT_08000b3c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000b2a\n\
    b           LAB_08000988\n\
LAB_08000b2a:\n\
    ldr         r0,DAT_08000b40\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000b34\n\
    b           LAB_08000988\n\
LAB_08000b34:\n\
    bl          fun_080434c8\n\
    b           LAB_08000988\n\
\n\
.space 2\n\
\n\
DAT_08000b3c:\n\
    .4byte 0x020025E0\n\
DAT_08000b40:\n\
    .4byte 0x020025F0\n\
    ");
}
__attribute__((naked)) void fun_08000b44()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    ldr         r1,DAT_08000b84\n\
    mov         r0,#0x0\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,DAT_08000b88\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000b56\n\
    b           LAB_08000d0a\n\
LAB_08000b56:\n\
    ldr         r0,DAT_08000b8c\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000bc4\n\
    ldr         r0,DAT_08000b90\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000b9e\n\
    mov         r2,#0x0\n\
    ldr         r3,DAT_08000b94\n\
    add         r0,r1,r3\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1b\n\
    bhi         LAB_08000b76\n\
    mov         r2,#0x1\n\
LAB_08000b76:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08000b98\n\
    mov         r0,#0x14\n\
    bl          fun_080012c0\n\
    b           LAB_08000b9e\n\
\n\
.space 2\n\
\n\
DAT_08000b84:\n\
    .4byte 0x020025F0\n\
DAT_08000b88:\n\
    .4byte 0x020025D8\n\
DAT_08000b8c:\n\
    .4byte 0x020025E0\n\
DAT_08000b90:\n\
    .4byte 0x020025B0\n\
DAT_08000b94:\n\
    .4byte 0xFFFFF830\n\
LAB_08000b98:\n\
    mov         r0,#0x4\n\
    bl          fun_080012c0\n\
LAB_08000b9e:\n\
    ldr         r1,DAT_08000bb8\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08000bbc\n\
    ldr         r0,DAT_08000bc0\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x28]\n\
    bl          fun_080434c8\n\
    b           LAB_08000bca\n\
DAT_08000bb8:\n\
    .4byte 0x020025B0\n\
DAT_08000bbc:\n\
    .4byte 0x08756AEC\n\
DAT_08000bc0:\n\
    .4byte 0x02002560\n\
LAB_08000bc4:\n\
    mov         r0,#0x2\n\
    bl          fun_08002ccc\n\
LAB_08000bca:\n\
    ldr         r1,DAT_08000bec\n\
    ldr         r2,DAT_08000bf0\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08000bf4\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r3,DAT_08000bf8\n\
    add         r7,r0,#0x0\n\
    add         r4,r2,#0x0\n\
    cmp         r1,r3\n\
    beq         LAB_08000c0c\n\
    cmp         r1,r3\n\
    bgt         LAB_08000bfc\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000c08\n\
    b           LAB_08000c54\n\
\n\
.space 2\n\
\n\
DAT_08000bec:\n\
    .4byte 0x02002534\n\
DAT_08000bf0:\n\
    .4byte 0x020025E0\n\
DAT_08000bf4:\n\
    .4byte 0x020025D8\n\
DAT_08000bf8:\n\
    .4byte 0x00002329\n\
LAB_08000bfc:\n\
    ldr         r0,DAT_08000c04\n\
    cmp         r1,r0\n\
    beq         LAB_08000c24\n\
    b           LAB_08000c54\n\
DAT_08000c04:\n\
    .4byte 0x0000232A\n\
LAB_08000c08:\n\
    strh        r1,[r4,#0x0]\n\
    b           LAB_08000c8a\n\
LAB_08000c0c:\n\
    ldr         r1,DAT_08000c1c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r0,DAT_08000c20\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x8]\n\
    b           LAB_08000c88\n\
\n\
.space 2\n\
\n\
DAT_08000c1c:\n\
    .4byte 0x02002560\n\
DAT_08000c20:\n\
    .4byte 0x08756AEC\n\
LAB_08000c24:\n\
    ldr         r2,DAT_08000c44\n\
    ldrh        r1,[r2,#0x0]\n\
    ldr         r0,DAT_08000c48\n\
    ldrh        r0,[r0,#0x0]\n\
    sub         r0,#0x1\n\
    cmp         r1,r0\n\
    bge         LAB_08000c36\n\
    add         r0,r1,#0x1\n\
    strh        r0,[r2,#0x0]\n\
LAB_08000c36:\n\
    ldr         r1,DAT_08000c4c\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x8]\n\
    b           LAB_08000c88\n\
DAT_08000c44:\n\
    .4byte 0x02002560\n\
DAT_08000c48:\n\
    .4byte 0x08756BC0\n\
DAT_08000c4c:\n\
    .4byte 0x08756AEC\n\
LAB_08000c50:\n\
    add         r0,r1,#0x0\n\
    b           LAB_08000c82\n\
LAB_08000c54:\n\
    ldrh        r3,[r7,#0x0]\n\
    mov         r1,#0x0\n\
    ldr         r0,DAT_08000cdc\n\
    ldrh        r2,[r0,#0x0]\n\
    ldr         r5,DAT_08000ce0\n\
    mov         r12,r5\n\
    add         r6,r0,#0x0\n\
    cmp         r1,r2\n\
    bcs         LAB_08000c7e\n\
    ldr         r5,DAT_08000ce4\n\
LAB_08000c68:\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r5\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x8]\n\
    cmp         r0,r3\n\
    beq         LAB_08000c50\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    cmp         r1,r2\n\
    bcc         LAB_08000c68\n\
LAB_08000c7e:\n\
    ldrh        r0,[r6,#0x0]\n\
    add         r0,#0x1\n\
LAB_08000c82:\n\
    mov         r1,r12\n\
    strh        r0,[r1,#0x0]\n\
    ldrh        r0,[r7,#0x0]\n\
LAB_08000c88:\n\
    strh        r0,[r4,#0x0]\n\
LAB_08000c8a:\n\
    mov         r5,#0x0\n\
    strh        r5,[r7,#0x0]\n\
    ldrh        r1,[r4,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000cfc\n\
    ldr         r1,DAT_08000ce4\n\
    ldr         r0,DAT_08000ce0\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x24]\n\
    bl          fun_080434c8\n\
    ldr         r0,DAT_08000ce8\n\
    strh        r5,[r0,#0x0]\n\
    ldrh        r0,[r4,#0x0]\n\
    bl          fun_080015b8\n\
    ldr         r0,DAT_08000cec\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08000d00\n\
    mov         r1,#0x0\n\
    ldrh        r4,[r4,#0x0]\n\
    ldr         r2,DAT_08000cf0\n\
    add         r0,r4,r2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1b\n\
    bhi         LAB_08000cca\n\
    mov         r1,#0x1\n\
LAB_08000cca:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08000cf4\n\
    mov         r0,#0x14\n\
    bl          fun_0800122c\n\
    bl          fun_08000e68\n\
    b           LAB_08000d00\n\
\n\
.space 2\n\
\n\
DAT_08000cdc:\n\
    .4byte 0x08756BC0\n\
DAT_08000ce0:\n\
    .4byte 0x02002560\n\
DAT_08000ce4:\n\
    .4byte 0x08756AEC\n\
DAT_08000ce8:\n\
    .4byte 0x020025EC\n\
DAT_08000cec:\n\
    .4byte 0x020025B0\n\
DAT_08000cf0:\n\
    .4byte 0xFFFFF830\n\
LAB_08000cf4:\n\
    mov         r0,#0x4\n\
    bl          fun_0800122c\n\
    b           LAB_08000d00\n\
LAB_08000cfc:\n\
    ldr         r0,DAT_08000d10\n\
    strh        r1,[r0,#0x0]\n\
LAB_08000d00:\n\
    ldr         r0,DAT_08000d14\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000d18\n\
    strh        r1,[r0,#0x0]\n\
LAB_08000d0a:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08000d10:\n\
    .4byte 0x020025EC\n\
DAT_08000d14:\n\
    .4byte 0x02002548\n\
DAT_08000d18:\n\
    .4byte 0x020025C4\n\
    ");
}
__attribute__((naked)) void fun_08000d1c()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r0,DAT_08000da0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08000d2a\n\
    bl          fun_0800294c\n\
LAB_08000d2a:\n\
    ldr         r4,DAT_08000da4\n\
    ldr         r0,[r4,#0x0]\n\
    add         r1,r0,#0x0\n\
    add         r0,#0x1\n\
    str         r0,[r4,#0x0]\n\
    cmp         r1,#0x0\n\
    bne         LAB_08000d40\n\
    bl          thunk_fun_080000fc\n\
    bl          fun_0803f0d0\n\
LAB_08000d40:\n\
    ldr         r0,[r4,#0x0]\n\
    sub         r0,#0x1\n\
    str         r0,[r4,#0x0]\n\
    ldr         r1,DAT_08000da8\n\
    ldrb        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    ldr         r1,DAT_08000dac\n\
    ldr         r0,DAT_08000db0\n\
    ldrh        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x34]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08000d64\n\
    bl          fun_080434c8\n\
LAB_08000d64:\n\
    ldr         r0,DAT_08000db4\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000db8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x5\n\
    beq         LAB_08000d9a\n\
    bl          fun_080020a4\n\
    ldrb        r1,[r0,#0x1c]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x1c]\n\
    bl          fun_080020a4\n\
    ldrb        r0,[r0,#0x1c]\n\
    cmp         r0,#0x3c\n\
    bne         LAB_08000d9a\n\
    bl          fun_080020a4\n\
    mov         r1,#0x0\n\
    strb        r1,[r0,#0x1c]\n\
    bl          fun_080020a4\n\
    ldr         r1,[r0,#0x18]\n\
    add         r1,#0x1\n\
    str         r1,[r0,#0x18]\n\
LAB_08000d9a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08000da0:\n\
    .4byte 0x02005750\n\
DAT_08000da4:\n\
    .4byte 0x02000000\n\
DAT_08000da8:\n\
    .4byte 0x020025F4\n\
DAT_08000dac:\n\
    .4byte 0x08756AEC\n\
DAT_08000db0:\n\
    .4byte 0x02002560\n\
DAT_08000db4:\n\
    .4byte 0x02002548\n\
DAT_08000db8:\n\
    .4byte 0x020025E0\n\
    ");
}
__attribute__((naked)) void fun_08000dbc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    ldr         r4,DAT_08000de0\n\
    mov         r1,#0x0\n\
    ldr         r0,DAT_08000de4\n\
    ldrh        r2,[r0,#0x0]\n\
    add         r5,r0,#0x0\n\
    cmp         r1,r2\n\
    bcs         LAB_08000df6\n\
    ldr         r3,DAT_08000de8\n\
LAB_08000dce:\n\
    lsl         r0,r1,#0x2\n\
    add         r0,r0,r3\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x8]\n\
    cmp         r0,r4\n\
    bne         LAB_08000dec\n\
    add         r0,r1,#0x0\n\
    b           LAB_08000dfa\n\
\n\
.space 2\n\
\n\
DAT_08000de0:\n\
    .4byte 0x00000BB9\n\
DAT_08000de4:\n\
    .4byte 0x08756BC0\n\
DAT_08000de8:\n\
    .4byte 0x08756AEC\n\
LAB_08000dec:\n\
    add         r0,r1,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    cmp         r1,r2\n\
    bcc         LAB_08000dce\n\
LAB_08000df6:\n\
    ldrh        r0,[r5,#0x0]\n\
    add         r0,#0x1\n\
LAB_08000dfa:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldrh        r5,[r5,#0x0]\n\
    cmp         r0,r5\n\
    bhi         LAB_08000e5a\n\
    ldr         r4,DAT_08000e60\n\
    lsl         r5,r0,#0x2\n\
    add         r4,r5,r4\n\
    ldr         r0,[r4,#0x0]\n\
    ldr         r0,[r0,#0x24]\n\
    bl          fun_080434c8\n\
    add         r7,r5,#0x0\n\
    ldr         r5,DAT_08000e64\n\
    add         r6,r4,#0x0\n\
LAB_08000e18:\n\
    bl          fun_08002c44\n\
    ldrh        r0,[r5,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08000e34\n\
    bl          fun_080026f0\n\
    strh        r0,[r5,#0x2]\n\
    bl          fun_08002968\n\
    strh        r0,[r5,#0xc]\n\
    bl          fun_08002878\n\
    strh        r0,[r5,#0x4]\n\
LAB_08000e34:\n\
    ldr         r0,[r6,#0x0]\n\
    ldr         r0,[r0,#0x2c]\n\
    bl          fun_080434c8\n\
    add         r4,r0,#0x0\n\
    bl          fun_08003cfc\n\
    bl          fun_08002bcc\n\
    bl          fun_080046a4\n\
    cmp         r4,#0x0\n\
    beq         LAB_08000e18\n\
    ldr         r0,DAT_08000e60\n\
    add         r0,r7,r0\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x28]\n\
    bl          fun_080434c8\n\
LAB_08000e5a:\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08000e60:\n\
    .4byte 0x08756AEC\n\
DAT_08000e64:\n\
    .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_08000e68()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r5,#0xb4\n\
    mov         r6,#0x3c\n\
    ldr         r0,DAT_08000e98\n\
    bl          fun_08003998\n\
    add         r4,r0,#0x0\n\
    cmp         r4,#0x0\n\
    beq         LAB_08000edc\n\
    mov         r1,#0x0\n\
    mov         r0,#0x68\n\
    strh        r0,[r4,#0x2]\n\
    mov         r0,#0x30\n\
    strh        r0,[r4,#0x4]\n\
    strh        r1,[r4,#0x6]\n\
    mov         r0,#0x2\n\
    strh        r0,[r4,#0x0]\n\
LAB_08000e8a:\n\
    lsl         r0,r5,#0x10\n\
    asr         r1,r0,#0x10\n\
    add         r2,r0,#0x0\n\
    cmp         r1,#0x3c\n\
    bne         LAB_08000e9c\n\
    mov         r0,#0x0\n\
    b           LAB_08000ea2\n\
DAT_08000e98:\n\
    .4byte 0x08063730\n\
LAB_08000e9c:\n\
    cmp         r1,#0x78\n\
    bne         LAB_08000ea6\n\
    mov         r0,#0x1\n\
LAB_08000ea2:\n\
    strh        r0,[r4,#0x0]\n\
    mov         r6,#0x3c\n\
LAB_08000ea6:\n\
    ldr         r1,DAT_08000ee4\n\
    add         r0,r2,r1\n\
    lsr         r5,r0,#0x10\n\
    lsl         r1,r6,#0x10\n\
    ldr         r0,DAT_08000ee4\n\
    add         r1,r1,r0\n\
    lsr         r6,r1,#0x10\n\
    lsl         r1,r1,#0x2\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x10\n\
    add         r1,r1,r0\n\
    lsr         r1,r1,#0x10\n\
    add         r0,r4,#0x0\n\
    bl          fun_080047d0\n\
    bl          fun_08003cfc\n\
    bl          fun_08002bcc\n\
    bl          fun_080046a4\n\
    lsl         r0,r5,#0x10\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08000e8a\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003b00\n\
LAB_08000edc:\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08000ee4:\n\
    .4byte 0xFFFF0000\n\
    ");
}
__attribute__((naked)) void fun_08000ee8()
{
    asm("\n\
    lsl         r0,r0,#0x10\n\
    lsr         r1,r0,#0x10\n\
    add         r2,r1,#0x0\n\
    ldr         r0,DAT_08000f18\n\
    cmp         r1,r0\n\
    bne         LAB_08000ef6\n\
    b           LAB_0800100e\n\
LAB_08000ef6:\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f60\n\
    sub         r0,#0xc\n\
    cmp         r1,r0\n\
    bne         LAB_08000f02\n\
    b           LAB_08000fec\n\
LAB_08000f02:\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f30\n\
    sub         r0,#0x6\n\
    cmp         r1,r0\n\
    beq         LAB_08000fd2\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f1c\n\
    sub         r0,#0x3d\n\
    cmp         r1,r0\n\
    beq         LAB_08000fcc\n\
    b           LAB_0800106c\n\
DAT_08000f18:\n\
    .4byte 0x0000028D\n\
LAB_08000f1c:\n\
    ldr         r0,DAT_08000f2c\n\
    cmp         r1,r0\n\
    beq         LAB_08000fdc\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08000fe4\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f2c:\n\
    .4byte 0x0000027D\n\
LAB_08000f30:\n\
    ldr         r0,DAT_08000f48\n\
    cmp         r1,r0\n\
    beq         LAB_08001004\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f4c\n\
    sub         r0,#0x4\n\
    cmp         r1,r0\n\
    beq         LAB_08000ff4\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08000ffc\n\
    b           LAB_0800106c\n\
DAT_08000f48:\n\
    .4byte 0x00000287\n\
LAB_08000f4c:\n\
    ldr         r0,DAT_08000f5c\n\
    cmp         r1,r0\n\
    beq         LAB_08001008\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001018\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f5c:\n\
    .4byte 0x00000289\n\
LAB_08000f60:\n\
    ldr         r0,DAT_08000f80\n\
    cmp         r1,r0\n\
    bne         LAB_08000f68\n\
    b           LAB_08001040\n\
LAB_08000f68:\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f98\n\
    sub         r0,#0x6\n\
    cmp         r1,r0\n\
    beq         LAB_08001028\n\
    cmp         r1,r0\n\
    bgt         LAB_08000f84\n\
    sub         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001020\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f80:\n\
    .4byte 0x00000297\n\
LAB_08000f84:\n\
    ldr         r0,DAT_08000f94\n\
    cmp         r1,r0\n\
    beq         LAB_08001030\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001036\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000f94:\n\
    .4byte 0x00000293\n\
LAB_08000f98:\n\
    ldr         r0,DAT_08000fb0\n\
    cmp         r1,r0\n\
    beq         LAB_08001058\n\
    cmp         r1,r0\n\
    bgt         LAB_08000fb4\n\
    sub         r0,#0x4\n\
    cmp         r1,r0\n\
    beq         LAB_08001048\n\
    add         r0,#0x2\n\
    cmp         r1,r0\n\
    beq         LAB_08001050\n\
    b           LAB_0800106c\n\
DAT_08000fb0:\n\
    .4byte 0x0000029D\n\
LAB_08000fb4:\n\
    ldr         r0,DAT_08000fc4\n\
    cmp         r2,r0\n\
    beq         LAB_08001060\n\
    ldr         r0,DAT_08000fc8\n\
    cmp         r2,r0\n\
    beq         LAB_08001068\n\
    b           LAB_0800106c\n\
\n\
.space 2\n\
\n\
DAT_08000fc4:\n\
    .4byte 0x0000029F\n\
DAT_08000fc8:\n\
    .4byte 0x00000441\n\
LAB_08000fcc:\n\
    mov         r0,#0xfa\n\
    lsl         r0,r0,#0x3\n\
    b           LAB_0800106e\n\
LAB_08000fd2:\n\
    ldr         r0,DAT_08000fd8\n\
    b           LAB_0800106e\n\
\n\
.space 2\n\
\n\
DAT_08000fd8:\n\
    .4byte 0x000007EA\n\
LAB_08000fdc:\n\
    ldr         r0,DAT_08000fe0\n\
    b           LAB_0800106e\n\
DAT_08000fe0:\n\
    .4byte 0x000007E6\n\
LAB_08000fe4:\n\
    ldr         r0,DAT_08000fe8\n\
    b           LAB_0800106e\n\
DAT_08000fe8:\n\
    .4byte 0x000007DE\n\
LAB_08000fec:\n\
    ldr         r0,DAT_08000ff0\n\
    b           LAB_0800106e\n\
DAT_08000ff0:\n\
    .4byte 0x000007D2\n\
LAB_08000ff4:\n\
    ldr         r0,DAT_08000ff8\n\
    b           LAB_0800106e\n\
DAT_08000ff8:\n\
    .4byte 0x000007E5\n\
LAB_08000ffc:\n\
    ldr         r0,DAT_08001000\n\
    b           LAB_0800106e\n\
DAT_08001000:\n\
    .4byte 0x000007D1\n\
LAB_08001004:\n\
    mov         r0,#0x18\n\
    b           LAB_0800106e\n\
LAB_08001008:\n\
    mov         r0,#0xfc\n\
    lsl         r0,r0,#0x3\n\
    b           LAB_0800106e\n\
LAB_0800100e:\n\
    ldr         r0,DAT_08001014\n\
    b           LAB_0800106e\n\
\n\
.space 2\n\
\n\
DAT_08001014:\n\
    .4byte 0x000007E1\n\
LAB_08001018:\n\
    ldr         r0,DAT_0800101c\n\
    b           LAB_0800106e\n\
DAT_0800101c:\n\
    .4byte 0x000007DF\n\
LAB_08001020:\n\
    ldr         r0,DAT_08001024\n\
    b           LAB_0800106e\n\
DAT_08001024:\n\
    .4byte 0x000007E9\n\
LAB_08001028:\n\
    ldr         r0,DAT_0800102c\n\
    b           LAB_0800106e\n\
DAT_0800102c:\n\
    .4byte 0x000007D4\n\
LAB_08001030:\n\
    mov         r0,#0xfd\n\
    lsl         r0,r0,#0x3\n\
    b           LAB_0800106e\n\
LAB_08001036:\n\
    ldr         r0,DAT_0800103c\n\
    b           LAB_0800106e\n\
\n\
.space 2\n\
\n\
DAT_0800103c:\n\
    .4byte 0x000007E3\n\
LAB_08001040:\n\
    ldr         r0,DAT_08001044\n\
    b           LAB_0800106e\n\
DAT_08001044:\n\
    .4byte 0x000007EB\n\
LAB_08001048:\n\
    ldr         r0,DAT_0800104c\n\
    b           LAB_0800106e\n\
DAT_0800104c:\n\
    .4byte 0x000007E2\n\
LAB_08001050:\n\
    ldr         r0,DAT_08001054\n\
    b           LAB_0800106e\n\
DAT_08001054:\n\
    .4byte 0x000007E4\n\
LAB_08001058:\n\
    ldr         r0,DAT_0800105c\n\
    b           LAB_0800106e\n\
DAT_0800105c:\n\
    .4byte 0x000007DA\n\
LAB_08001060:\n\
    ldr         r0,DAT_08001064\n\
    b           LAB_0800106e\n\
DAT_08001064:\n\
    .4byte 0x000007D6\n\
LAB_08001068:\n\
    mov         r0,#0x29\n\
    b           LAB_0800106e\n\
LAB_0800106c:\n\
    mov         r0,#0x0\n\
LAB_0800106e:\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08001070()
{
    asm("\n\
    push        {lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    ldr         r1,DAT_08001084\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_08002114\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08001084:\n\
    .4byte 0x020025D8\n\
    ");
}
__attribute__((naked)) void fun_08001088()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r5,DAT_080010c4\n\
    ldrh        r0,[r5,#0x0]\n\
    cmp         r0,#0x20\n\
    beq         LAB_080010be\n\
    add         r0,r4,#0x0\n\
    bl          fun_08002114\n\
    ldr         r1,DAT_080010c8\n\
    ldrh        r2,[r5,#0x0]\n\
    lsl         r0,r2,#0x1\n\
    add         r0,r0,r1\n\
    ldr         r1,DAT_080010cc\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    ldrh        r0,[r5,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r5,#0x0]\n\
    ldr         r0,DAT_080010d0\n\
    strh        r4,[r0,#0x0]\n\
    cmp         r4,#0x1a\n\
    bne         LAB_080010be\n\
    ldr         r1,DAT_080010d4\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_080010be:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080010c4:\n\
    .4byte 0x02002544\n\
DAT_080010c8:\n\
    .4byte 0x02002570\n\
DAT_080010cc:\n\
    .4byte 0x020025E0\n\
DAT_080010d0:\n\
    .4byte 0x020025D8\n\
DAT_080010d4:\n\
    .4byte 0x020025B0\n\
    ");
}
__attribute__((naked)) void fun_080010d8()
{
    asm("\n\
    ldr         r3,DAT_080010e8\n\
    ldrh        r0,[r3,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080010f4\n\
    ldr         r1,DAT_080010ec\n\
    ldr         r2,DAT_080010f0\n\
    add         r0,r2,#0x0\n\
    b           LAB_08001108\n\
DAT_080010e8:\n\
    .4byte 0x02002544\n\
DAT_080010ec:\n\
    .4byte 0x020025D8\n\
DAT_080010f0:\n\
    .4byte 0x0000232A\n\
LAB_080010f4:\n\
    sub         r0,#0x1\n\
    strh        r0,[r3,#0x0]\n\
    ldr         r2,DAT_0800110c\n\
    ldr         r1,DAT_08001110\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r2,#0x0]\n\
    ldr         r1,DAT_08001114\n\
    mov         r0,#0x1\n\
LAB_08001108:\n\
    strh        r0,[r1,#0x0]\n\
    bx          lr\n\
DAT_0800110c:\n\
    .4byte 0x020025D8\n\
DAT_08001110:\n\
    .4byte 0x02002570\n\
DAT_08001114:\n\
    .4byte 0x020025EC\n\
    ");
}
__attribute__((naked)) void fun_08001118()
{
    asm("\n\
    ldr         r0,DAT_08001120\n\
    ldrb        r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08001120:\n\
    .4byte 0x020025EC\n\
    ");
}
__attribute__((naked)) void fun_08001124()
{
    asm("\n\
    ldr         r0,DAT_0800112c\n\
    ldrh        r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_0800112c:\n\
    .4byte 0x02002534\n\
    ");
}
__attribute__((naked)) void fun_08001130()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    ldr         r0,DAT_08001164\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,#0x3b\n\
    bls         LAB_08001158\n\
    mov         r5,#0x0\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r6,DAT_08001168\n\
    ldr         r4,DAT_0800116c\n\
    ldrh        r1,[r4,#0x0]\n\
    lsl         r0,r1,#0x8\n\
    mov         r1,#0xf0\n\
    lsl         r1,r1,#0x6\n\
    bl          fun_0800354c\n\
    mov         r1,#0x3c\n\
    bl          fun_0800353c\n\
    str         r0,[r6,#0x0]\n\
    strh        r5,[r4,#0x0]\n\
LAB_08001158:\n\
    ldr         r0,DAT_08001168\n\
    ldrh        r0,[r0,#0x0]\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08001164:\n\
    .4byte 0x02002548\n\
DAT_08001168:\n\
    .4byte 0x02002540\n\
DAT_0800116c:\n\
    .4byte 0x020025C4\n\
    ");
}
__attribute__((naked)) void fun_08001170()
{
    asm("\n\
    ldr         r1,DAT_08001178\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_08001178:\n\
    .4byte 0x020025F0\n\
    ");
}
__attribute__((naked)) void fun_0800117c()
{
    asm("\n\
    ldr         r1,DAT_08001184\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    bx          lr\n\
DAT_08001184:\n\
    .4byte 0x020025B0\n\
    ");
}
__attribute__((naked)) void fun_08001188()
{
    asm("\n\
    push        {lr}\n\
    ldr         r1,DAT_080011a0\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r1,#0xe\n\
    ldr         r0,DAT_080011a4\n\
    strh        r1,[r0,#0x0]\n\
    mov         r0,#0xe\n\
    bl          fun_08002114\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080011a0:\n\
    .4byte 0x02002544\n\
DAT_080011a4:\n\
    .4byte 0x020025D8\n\
    ");
}
__attribute__((naked)) void fun_080011a8()
{
    asm("\n\
    ldr         r1,DAT_080011b0\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_080011b0:\n\
    .4byte 0x020025DC\n\
    ");
}
__attribute__((naked)) void fun_080011b4()
{
    asm("\n\
    ldr         r1,DAT_080011bc\n\
    str         r0,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_080011bc:\n\
    .4byte 0x020025CC\n\
    ");
}
__attribute__((naked)) void fun_080011c0()
{
    asm("\n\
    ldr         r0,DAT_080011c8\n\
    ldr         r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_080011c8:\n\
    .4byte 0x020025DC\n\
    ");
}
__attribute__((naked)) void fun_080011cc()
{
    asm("\n\
    ldr         r0,DAT_080011d4\n\
    ldr         r0,[r0,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_080011d4:\n\
    .4byte 0x020025CC\n\
    ");
}
__attribute__((naked)) void fun_080011d8()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    mov         r4,#0x0\n\
    ldr         r0,DAT_0800120c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bcs         LAB_08001204\n\
    ldr         r5,DAT_08001210\n\
LAB_080011e6:\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r0,r5\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r0,[r0,#0x38]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080011f6\n\
    bl          fun_080434c8\n\
LAB_080011f6:\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    ldr         r0,DAT_0800120c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bcc         LAB_080011e6\n\
LAB_08001204:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800120c:\n\
    .4byte 0x08756BC0\n\
DAT_08001210:\n\
    .4byte 0x08756AEC\n\
\n\
    ");
}
