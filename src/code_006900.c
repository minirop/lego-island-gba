__attribute__((naked)) void fun_08006900()
{
    asm("\n\
    ldr        r2,DAT_08006918\n\
    ldr        r0,DAT_0800691c\n\
    str        r0,[r2,#0x0]\n\
    ldr        r1,DAT_08006920\n\
    str        r1,[r2,#0x4]\n\
    ldr        r0,DAT_08006924\n\
    str        r0,[r1,#0x0]\n\
    mov        r0,#0x0\n\
    str        r0,[r1,#0x4]\n\
    str        r0,[r1,#0x8]\n\
    mov        r0,#0x1\n\
    bx         lr\n\
DAT_08006918:\n\
    .4byte 0x02009B10\n\
DAT_0800691c:\n\
    .4byte 0x0807C2F4\n\
DAT_08006920:\n\
    .4byte 0x02009B20\n\
DAT_08006924:\n\
    .4byte 0x0807C290\n\
    ");
}
__attribute__((naked)) void fun_08006928()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x4\n\
    mov         r0,sp\n\
    mov         r6,#0x0\n\
    strh        r6,[r0,#0x0]\n\
    ldr         r1,DAT_080069bc\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xc0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_080069c0\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    mov         r0,sp\n\
    strh        r6,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_080069c4\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_080069c8\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,#0xc\n\
    mov         r0,#0x3\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x0\n\
    bl          fun_080036b0\n\
    bl          fun_0803c24c\n\
    bl          fun_0803c1a4\n\
    ldr         r0,DAT_080069cc\n\
    ldr         r1,DAT_080069d0\n\
    ldr         r2,DAT_080069d4\n\
    bl          fun_0803c1ec\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_080069d8\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x4\n\
    bne         LAB_08006a02\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080069dc\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0800699a\n\
    ldr         r0,DAT_080069e0\n\
    strb        r6,[r0,#0x0]\n\
LAB_0800699a:\n\
    mov         r2,#0x0\n\
    ldr         r7,DAT_080069e0\n\
    ldr         r0,DAT_080069e4\n\
    mov         r12,r0\n\
    ldr         r6,DAT_080069e8\n\
    ldr         r3,DAT_080069ec\n\
    add         r4,r7,#0x0\n\
    mov         r5,#0x1\n\
LAB_080069aa:\n\
    ldrb        r1,[r4,#0x0]\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r2,r0\n\
    bne         LAB_080069f0\n\
    add         r0,r2,r3\n\
    strb        r5,[r0,#0x0]\n\
    b           LAB_080069f6\n\
DAT_080069bc:\n\
    .4byte 0x040000D4\n\
DAT_080069c0:\n\
    .4byte 0x8100C000\n\
DAT_080069c4:\n\
    .4byte 0x81000200\n\
DAT_080069c8:\n\
    .4byte 0x00001F44\n\
DAT_080069cc:\n\
    .4byte 0x00002D6B\n\
DAT_080069d0:\n\
    .4byte 0x00005AD6\n\
DAT_080069d4:\n\
    .4byte 0x00007FFF\n\
DAT_080069d8:\n\
    .4byte 0x00000E8C\n\
DAT_080069dc:\n\
    .4byte 0x00000E54\n\
DAT_080069e0:\n\
    .4byte 0x02009B30\n\
DAT_080069e4:\n\
    .4byte 0x02009B48\n\
DAT_080069e8:\n\
    .4byte 0x0807C3C5\n\
DAT_080069ec:\n\
    .4byte 0x02009B34\n\
LAB_080069f0:\n\
    add         r1,r2,r3\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
LAB_080069f6:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r2,r0,#0x18\n\
    cmp         r2,#0x3\n\
    bls         LAB_080069aa\n\
    b           LAB_08006b90\n\
LAB_08006a02:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08006a48\n\
    add         r0,r0,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x5\n\
    bne         LAB_08006a72\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08006a4c\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006a24\n\
    ldr         r1,DAT_08006a50\n\
    mov         r0,#0x4\n\
    strb        r0,[r1,#0x0]\n\
LAB_08006a24:\n\
    mov         r2,#0x0\n\
    ldr         r7,DAT_08006a50\n\
    ldr         r0,DAT_08006a54\n\
    mov         r12,r0\n\
    ldr         r6,DAT_08006a58\n\
    ldr         r3,DAT_08006a5c\n\
    add         r4,r7,#0x0\n\
    mov         r5,#0x1\n\
LAB_08006a34:\n\
    ldrb        r1,[r4,#0x0]\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r2,r0\n\
    bne         LAB_08006a60\n\
    add         r0,r2,r3\n\
    strb        r5,[r0,#0x0]\n\
    b           LAB_08006a66\n\
\n\
.space 2\n\
\n\
DAT_08006a48:\n\
    .4byte 0x00000E8C\n\
DAT_08006a4c:\n\
    .4byte 0x00000E54\n\
DAT_08006a50:\n\
    .4byte 0x02009B30\n\
DAT_08006a54:\n\
    .4byte 0x02009B48\n\
DAT_08006a58:\n\
    .4byte 0x0807C3C5\n\
DAT_08006a5c:\n\
    .4byte 0x02009B40\n\
LAB_08006a60:\n\
    add         r1,r2,r3\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
LAB_08006a66:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r2,r0,#0x18\n\
    cmp         r2,#0x4\n\
    bls         LAB_08006a34\n\
    b           LAB_08006b90\n\
LAB_08006a72:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x6\n\
    bne         LAB_08006ada\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08006ab4\n\
    add         r0,r0,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006a92\n\
    ldr         r1,DAT_08006ab8\n\
    mov         r0,#0x9\n\
    strb        r0,[r1,#0x0]\n\
LAB_08006a92:\n\
    mov         r2,#0x0\n\
    ldr         r7,DAT_08006ab8\n\
    ldr         r0,DAT_08006abc\n\
    mov         r12,r0\n\
    ldr         r6,DAT_08006ac0\n\
    ldr         r3,DAT_08006ac4\n\
    add         r4,r7,#0x0\n\
    mov         r5,#0x1\n\
LAB_08006aa2:\n\
    ldrb        r1,[r4,#0x0]\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r2,r0\n\
    bne         LAB_08006ac8\n\
    add         r0,r2,r3\n\
    strb        r5,[r0,#0x0]\n\
    b           LAB_08006ace\n\
DAT_08006ab4:\n\
    .4byte 0x00000E54\n\
DAT_08006ab8:\n\
    .4byte 0x02009B30\n\
DAT_08006abc:\n\
    .4byte 0x02009B48\n\
DAT_08006ac0:\n\
    .4byte 0x0807C3C5\n\
DAT_08006ac4:\n\
    .4byte 0x02009B50\n\
LAB_08006ac8:\n\
    add         r1,r2,r3\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
LAB_08006ace:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r2,r0,#0x18\n\
    cmp         r2,#0x5\n\
    bls         LAB_08006aa2\n\
    b           LAB_08006b90\n\
LAB_08006ada:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bne         LAB_08006b42\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08006b1c\n\
    add         r0,r0,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006afa\n\
    ldr         r1,DAT_08006b20\n\
    mov         r0,#0xf\n\
    strb        r0,[r1,#0x0]\n\
LAB_08006afa:\n\
    mov         r2,#0x0\n\
    ldr         r7,DAT_08006b20\n\
    ldr         r0,DAT_08006b24\n\
    mov         r12,r0\n\
    ldr         r6,DAT_08006b28\n\
    ldr         r3,DAT_08006b2c\n\
    add         r4,r7,#0x0\n\
    mov         r5,#0x1\n\
LAB_08006b0a:\n\
    ldrb        r1,[r4,#0x0]\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r2,r0\n\
    bne         LAB_08006b30\n\
    add         r0,r2,r3\n\
    strb        r5,[r0,#0x0]\n\
    b           LAB_08006b36\n\
DAT_08006b1c:\n\
    .4byte 0x00000E54\n\
DAT_08006b20:\n\
    .4byte 0x02009B30\n\
DAT_08006b24:\n\
    .4byte 0x02009B48\n\
DAT_08006b28:\n\
    .4byte 0x0807C3C5\n\
DAT_08006b2c:\n\
    .4byte 0x02009B38\n\
LAB_08006b30:\n\
    add         r1,r2,r3\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
LAB_08006b36:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r2,r0,#0x18\n\
    cmp         r2,#0x6\n\
    bls         LAB_08006b0a\n\
    b           LAB_08006b90\n\
LAB_08006b42:\n\
    ldr         r4,DAT_08006b70\n\
    strb        r6,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    mov         r1,#0x4\n\
    strb        r1,[r0,#0x0]\n\
    mov         r2,#0x0\n\
    ldr         r6,DAT_08006b74\n\
    add         r7,r4,#0x0\n\
    ldr         r3,DAT_08006b78\n\
    ldr         r0,DAT_08006b7c\n\
    mov         r12,r0\n\
    mov         r5,#0x1\n\
LAB_08006b5e:\n\
    ldrb        r1,[r4,#0x0]\n\
    lsl         r0,r1,#0x1\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r2,r0\n\
    bne         LAB_08006b80\n\
    add         r0,r2,r3\n\
    strb        r5,[r0,#0x0]\n\
    b           LAB_08006b86\n\
DAT_08006b70:\n\
    .4byte 0x02009B30\n\
DAT_08006b74:\n\
    .4byte 0x0807C3C5\n\
DAT_08006b78:\n\
    .4byte 0x02009B34\n\
DAT_08006b7c:\n\
    .4byte 0x02009B48\n\
LAB_08006b80:\n\
    add         r1,r2,r3\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
LAB_08006b86:\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r2,r0,#0x18\n\
    cmp         r2,#0x3\n\
    bls         LAB_08006b5e\n\
LAB_08006b90:\n\
    ldrb        r0,[r7,#0x0]\n\
    mov         r2,r12\n\
    strb        r0,[r2,#0x0]\n\
    bl          fun_08006f0c\n\
    mov         r0,#0x0\n\
    add         sp,#0x4\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}
__attribute__((naked)) void fun_08006ba4()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r2,DAT_08006bdc\n\
    ldrh        r1,[r2,#0x0]\n\
    mov         r0,#0x8\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006bbc\n\
    ldrh        r1,[r2,#0x0]\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08006bf0\n\
LAB_08006bbc:\n\
    ldr         r4,DAT_08006be0\n\
    ldr         r0,DAT_08006be4\n\
    ldrb        r0,[r0,#0x0]\n\
    strb        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08006be8\n\
    ldrb        r4,[r4,#0x0]\n\
    lsl         r1,r4,#0x1\n\
    add         r1,r1,r2\n\
    ldrb        r1,[r1,#0x0]\n\
    ldr         r2,DAT_08006bec\n\
    add         r0,r0,r2\n\
    strb        r1,[r0,#0x0]\n\
    b           LAB_08006bfe\n\
\n\
.space 2\n\
\n\
DAT_08006bdc:\n\
    .4byte 0x02005CE0\n\
DAT_08006be0:\n\
    .4byte 0x02009B30\n\
DAT_08006be4:\n\
    .4byte 0x02009B48\n\
DAT_08006be8:\n\
    .4byte 0x0807C3C4\n\
DAT_08006bec:\n\
    .4byte 0x00000E54\n\
LAB_08006bf0:\n\
    ldrh        r1,[r2,#0x0]\n\
    mov         r0,#0x2\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x0\n\
    beq         LAB_08006c06\n\
LAB_08006bfe:\n\
    mov         r0,#0x0\n\
    bl          fun_080010d8\n\
    b           LAB_08006ede\n\
LAB_08006c06:\n\
    ldrh        r1,[r2,#0x0]\n\
    mov         r0,#0x20\n\
    and         r0,r1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    cmp         r5,#0x0\n\
    bne         LAB_08006c16\n\
    b           LAB_08006d78\n\
LAB_08006c16:\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_08006c48\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x4\n\
    bne         LAB_08006c54\n\
    ldr         r0,DAT_08006c4c\n\
    strb        r4,[r0,#0x0]\n\
    ldr         r4,DAT_08006c50\n\
    add         r3,r0,#0x0\n\
LAB_08006c2c:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006c3a\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006ccc\n\
LAB_08006c3a:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x3\n\
    bls         LAB_08006c2c\n\
    b           LAB_08006d6a\n\
DAT_08006c48:\n\
    .4byte 0x00000E8C\n\
DAT_08006c4c:\n\
    .4byte 0x02009B58\n\
DAT_08006c50:\n\
    .4byte 0x02009B34\n\
LAB_08006c54:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08006c88\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x5\n\
    bne         LAB_08006c94\n\
    ldr         r0,DAT_08006c8c\n\
    strb        r4,[r0,#0x0]\n\
    ldr         r4,DAT_08006c90\n\
    add         r3,r0,#0x0\n\
LAB_08006c6a:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006c78\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006ce8\n\
LAB_08006c78:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x4\n\
    bls         LAB_08006c6a\n\
    b           LAB_08006d6a\n\
\n\
.space 2\n\
\n\
DAT_08006c88:\n\
    .4byte 0x00000E8C\n\
DAT_08006c8c:\n\
    .4byte 0x02009B58\n\
DAT_08006c90:\n\
    .4byte 0x02009B40\n\
LAB_08006c94:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x6\n\
    bne         LAB_08006d3c\n\
    ldr         r0,DAT_08006cc4\n\
    strb        r4,[r0,#0x0]\n\
    ldr         r4,DAT_08006cc8\n\
    add         r3,r0,#0x0\n\
LAB_08006ca8:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006cb6\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006d04\n\
LAB_08006cb6:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x5\n\
    bls         LAB_08006ca8\n\
    b           LAB_08006d6a\n\
DAT_08006cc4:\n\
    .4byte 0x02009B58\n\
DAT_08006cc8:\n\
    .4byte 0x02009B50\n\
LAB_08006ccc:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    sub         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006ce4\n\
    ldrb        r0,[r3,#0x0]\n\
    sub         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006d6a\n\
\n\
.space 2\n\
\n\
DAT_08006ce4:\n\
    .4byte 0x02009B48\n\
LAB_08006ce8:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    sub         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006d00\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x3\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006d6a\n\
\n\
.space 2\n\
\n\
DAT_08006d00:\n\
    .4byte 0x02009B48\n\
LAB_08006d04:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    sub         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006d1c\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x8\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006d6a\n\
\n\
.space 2\n\
\n\
DAT_08006d1c:\n\
    .4byte 0x02009B48\n\
LAB_08006d20:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    sub         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006d38\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0xe\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006d6a\n\
\n\
.space 2\n\
\n\
DAT_08006d38:\n\
    .4byte 0x02009B48\n\
LAB_08006d3c:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bne         LAB_08006d6a\n\
    ldr         r0,DAT_08006d70\n\
    strb        r4,[r0,#0x0]\n\
    ldr         r4,DAT_08006d74\n\
    add         r3,r0,#0x0\n\
LAB_08006d50:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006d5e\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006d20\n\
LAB_08006d5e:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x6\n\
    bls         LAB_08006d50\n\
LAB_08006d6a:\n\
    bl          fun_08006f0c\n\
    b           LAB_08006ede\n\
DAT_08006d70:\n\
    .4byte 0x02009B58\n\
DAT_08006d74:\n\
    .4byte 0x02009B38\n\
LAB_08006d78:\n\
    ldrh        r1,[r2,#0x0]\n\
    mov         r0,#0x10\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006d84\n\
    b           LAB_08006ede\n\
LAB_08006d84:\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_08006db8\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x4\n\
    bne         LAB_08006dc4\n\
    ldr         r0,DAT_08006dbc\n\
    strb        r5,[r0,#0x0]\n\
    ldr         r4,DAT_08006dc0\n\
    add         r3,r0,#0x0\n\
LAB_08006d9a:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006da8\n\
    cmp         r0,#0x3\n\
    bne         LAB_08006e3c\n\
LAB_08006da8:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x3\n\
    bls         LAB_08006d9a\n\
    b           LAB_08006eda\n\
\n\
.space 2\n\
\n\
DAT_08006db8:\n\
    .4byte 0x00000E8C\n\
DAT_08006dbc:\n\
    .4byte 0x02009B58\n\
DAT_08006dc0:\n\
    .4byte 0x02009B34\n\
LAB_08006dc4:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_08006df8\n\
    add         r0,r0,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x5\n\
    bne         LAB_08006e04\n\
    ldr         r0,DAT_08006dfc\n\
    strb        r5,[r0,#0x0]\n\
    ldr         r4,DAT_08006e00\n\
    add         r3,r0,#0x0\n\
LAB_08006dda:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006de8\n\
    cmp         r0,#0x4\n\
    bne         LAB_08006e58\n\
LAB_08006de8:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x4\n\
    bls         LAB_08006dda\n\
    b           LAB_08006eda\n\
\n\
.space 2\n\
\n\
DAT_08006df8:\n\
    .4byte 0x00000E8C\n\
DAT_08006dfc:\n\
    .4byte 0x02009B58\n\
DAT_08006e00:\n\
    .4byte 0x02009B40\n\
LAB_08006e04:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x6\n\
    bne         LAB_08006eac\n\
    ldr         r0,DAT_08006e34\n\
    strb        r5,[r0,#0x0]\n\
    ldr         r4,DAT_08006e38\n\
    add         r3,r0,#0x0\n\
LAB_08006e18:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006e26\n\
    cmp         r0,#0x5\n\
    bne         LAB_08006e74\n\
LAB_08006e26:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x5\n\
    bls         LAB_08006e18\n\
    b           LAB_08006eda\n\
DAT_08006e34:\n\
    .4byte 0x02009B58\n\
DAT_08006e38:\n\
    .4byte 0x02009B50\n\
LAB_08006e3c:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006e54\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006eda\n\
\n\
.space 2\n\
\n\
DAT_08006e54:\n\
    .4byte 0x02009B48\n\
LAB_08006e58:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006e70\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x5\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006eda\n\
\n\
.space 2\n\
\n\
DAT_08006e70:\n\
    .4byte 0x02009B48\n\
LAB_08006e74:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006e8c\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0xa\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006eda\n\
\n\
.space 2\n\
\n\
DAT_08006e8c:\n\
    .4byte 0x02009B48\n\
LAB_08006e90:\n\
    mov         r0,#0x0\n\
    strb        r0,[r1,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x1\n\
    add         r0,r0,r4\n\
    strb        r2,[r0,#0x0]\n\
    ldr         r1,DAT_08006ea8\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r0,#0x10\n\
    strb        r0,[r1,#0x0]\n\
    b           LAB_08006eda\n\
\n\
.space 2\n\
\n\
DAT_08006ea8:\n\
    .4byte 0x02009B48\n\
LAB_08006eac:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x7\n\
    bne         LAB_08006eda\n\
    ldr         r0,DAT_08006ee4\n\
    strb        r5,[r0,#0x0]\n\
    ldr         r4,DAT_08006ee8\n\
    add         r3,r0,#0x0\n\
LAB_08006ec0:\n\
    ldrb        r0,[r3,#0x0]\n\
    add         r1,r0,r4\n\
    ldrb        r2,[r1,#0x0]\n\
    cmp         r2,#0x1\n\
    bne         LAB_08006ece\n\
    cmp         r0,#0x6\n\
    bne         LAB_08006e90\n\
LAB_08006ece:\n\
    add         r0,#0x1\n\
    strb        r0,[r3,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x6\n\
    bls         LAB_08006ec0\n\
LAB_08006eda:\n\
    bl          fun_08006f0c\n\
LAB_08006ede:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08006ee4:\n\
    .4byte 0x02009B58\n\
DAT_08006ee8:\n\
    .4byte 0x02009B38\n\
    push        {lr}\n\
    bl          fun_0800457c\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
    push        {lr}\n\
    bl          fun_08006ba4\n\
    mov         r0,#0x0\n\
    pop         {r1}\n\
    bx          r1\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    mov         r0,#0x1\n\
    bx          lr\n\
    ");
}
__attribute__((naked)) void fun_08006eec()
{
    asm("\n\
    push       {lr}\n\
    bl         fun_0800457c\n\
    mov        r0,#0x0\n\
    pop        {r1}\n\
    bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08006ef8()
{
    asm("\n\
    push       {lr}\n\
    bl         fun_08006ba4\n\
    mov        r0,#0x0\n\
    pop        {r1}\n\
    bx         r1\n\
    ");
}
int fun_08006f04()
{
    return 1;
}
int fun_08006f08()
{
    return 1;
}
__attribute__((naked)) void fun_08006f0c()
{
    asm("\n\
    push        {r4,lr}\n\
    ldr         r4,DAT_08006f48\n\
    mov         r0,#0x1\n\
    ldrb        r1,[r4,#0x0]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08006f64\n\
    ldr         r0,DAT_08006f4c\n\
    ldr         r1,DAT_08006f50\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08006f54\n\
    ldr         r2,DAT_08006f58\n\
    ldrb        r4,[r4,#0x0]\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08006f5c\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_08006f60\n\
    b           LAB_08006f90\n\
\n\
.space 2\n\
\n\
DAT_08006f48:\n\
    .4byte 0x02009B48\n\
DAT_08006f4c:\n\
    .4byte 0x0807F1F0\n\
DAT_08006f50:\n\
    .4byte 0x0600A000\n\
DAT_08006f54:\n\
    .4byte 0x040000D4\n\
DAT_08006f58:\n\
    .4byte 0x0877B998\n\
DAT_08006f5c:\n\
    .4byte 0x80000100\n\
DAT_08006f60:\n\
    .4byte 0x00001F54\n\
LAB_08006f64:\n\
    ldr         r0,DAT_08006fa0\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    bl          fun_0803d070\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08006fa4\n\
    ldr         r2,DAT_08006fa8\n\
    ldrb        r4,[r4,#0x0]\n\
    lsl         r0,r4,#0x2\n\
    add         r0,r0,r2\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08006fac\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_08006fb0\n\
LAB_08006f90:\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    add         r1,#0xc\n\
    mov         r0,#0x3\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08006fa0:\n\
    .4byte 0x0807F1F0\n\
DAT_08006fa4:\n\
    .4byte 0x040000D4\n\
DAT_08006fa8:\n\
    .4byte 0x0877B998\n\
DAT_08006fac:\n\
    .4byte 0x80000100\n\
DAT_08006fb0:\n\
    .4byte 0x00001F44\n\
    ");
}
__attribute__((naked)) void fun_08006fb4()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x64\n\
    ldr         r1,DAT_08007018\n\
    ldrh        r0,[r1,#0x2]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006fcc\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0xe]\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
LAB_08006fcc:\n\
    mov         r5,#0x0\n\
    mov         r6,#0x0\n\
    mov         r4,#0x0\n\
LAB_08006fd2:\n\
    add         r0,r4,#0x0\n\
    bl          fun_080028c4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08006ffa\n\
    ldr         r0,DAT_0800701c\n\
    lsl         r1,r4,#0x4\n\
    add         r1,r1,r0\n\
    ldrb        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08006ffa\n\
    mov         r0,#0x1\n\
    lsl         r0,r4\n\
    orr         r5,r0\n\
    lsl         r0,r5,#0x10\n\
    lsr         r5,r0,#0x10\n\
    add         r0,r6,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
LAB_08006ffa:\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x3\n\
    bls         LAB_08006fd2\n\
    ldr         r0,DAT_08007018\n\
    mov         r2,#0x4\n\
    ldrsh       r1,[r0,r2]\n\
    add         r2,r0,#0x0\n\
    cmp         r1,#0x0\n\
    bne         LAB_08007024\n\
    ldr         r1,DAT_08007020\n\
    ldrh        r0,[r2,#0x6]\n\
    strb        r0,[r1,#0x1]\n\
    b           LAB_08007030\n\
DAT_08007018:\n\
    .4byte 0x02005750\n\
DAT_0800701c:\n\
    .4byte 0x02005710\n\
DAT_08007020:\n\
    .4byte 0x02005760\n\
LAB_08007024:\n\
    ldr         r0,DAT_08007068\n\
    ldrb        r3,[r0,#0x0]\n\
    cmp         r3,#0x1\n\
    bne         LAB_08007030\n\
    ldrb        r0,[r0,#0x1]\n\
    strh        r0,[r2,#0x6]\n\
LAB_08007030:\n\
    ldr         r0,DAT_0800706c\n\
    ldrh        r4,[r2,#0x6]\n\
    lsl         r1,r4,#0x1\n\
    add         r1,r1,r0\n\
    ldrh        r0,[r1,#0x0]\n\
    strh        r0,[r2,#0x8]\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x9\n\
    bne         LAB_08007048\n\
    mov         r0,#0x1\n\
    strh        r0,[r2,#0xa]\n\
LAB_08007048:\n\
    mov         r1,#0x4\n\
    ldrsh       r0,[r2,r1]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007070\n\
    mov         r0,#0x1\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    bne         LAB_08007070\n\
    mov         r0,#0x2\n\
    strh        r0,[r2,#0xe]\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
    b           LAB_08007166\n\
\n\
.space 2\n\
\n\
DAT_08007068:\n\
    .4byte 0x02005710\n\
DAT_0800706c:\n\
    .4byte 0x0877BB18\n\
LAB_08007070:\n\
    ldrh        r0,[r2,#0xa]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800708c\n\
    ldrh        r0,[r2,#0x4]\n\
    sub         r0,#0x2\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    cmp         r0,#0x1\n\
    bhi         LAB_0800708c\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
    b           LAB_08007166\n\
LAB_0800708c:\n\
    ldr         r3,DAT_080070a4\n\
    ldrh        r1,[r3,#0x0]\n\
    mov         r4,#0x2\n\
    mov         r0,#0x2\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080070a8\n\
    bl          fun_08002844\n\
    bl          fun_080010d8\n\
    b           LAB_08007166\n\
DAT_080070a4:\n\
    .4byte 0x02005CE0\n\
LAB_080070a8:\n\
    mov         r1,#0x4\n\
    ldrsh       r0,[r2,r1]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080070d8\n\
    ldrh        r1,[r3,#0x0]\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007104\n\
    cmp         r6,#0x1\n\
    bls         LAB_08007104\n\
    ldr         r0,DAT_080070d4\n\
    strb        r4,[r0,#0x0]\n\
    ldrh        r0,[r2,#0x8]\n\
    bl          fun_08007718\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_08001070\n\
    b           LAB_08007166\n\
\n\
.space 2\n\
\n\
DAT_080070d4:\n\
    .4byte 0x02005760\n\
LAB_080070d8:\n\
    ldr         r0,DAT_080070fc\n\
    ldrb        r0,[r0,#0x0]\n\
    sub         r0,#0x2\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08007104\n\
    ldr         r0,DAT_08007100\n\
    strb        r4,[r0,#0x0]\n\
    ldrh        r0,[r2,#0x8]\n\
    bl          fun_08007718\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    bl          fun_08001070\n\
    b           LAB_08007166\n\
\n\
.space 2\n\
\n\
DAT_080070fc:\n\
    .4byte 0x02005710\n\
DAT_08007100:\n\
    .4byte 0x02005760\n\
LAB_08007104:\n\
    ldrh        r1,[r2,#0x4]\n\
    add         r0,r5,#0x0\n\
    bl          fun_08007238\n\
    ldr         r1,DAT_08007170\n\
    ldrh        r2,[r1,#0x0]\n\
    cmp         r2,#0x1e\n\
    bne         LAB_08007126\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    ldr         r2,DAT_08007174\n\
    mov         r1,#0x0\n\
    ldrh        r0,[r2,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08007124\n\
    mov         r1,#0x1\n\
LAB_08007124:\n\
    strh        r1,[r2,#0x0]\n\
LAB_08007126:\n\
    ldr         r1,DAT_08007170\n\
    ldrh        r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_0803c1a4\n\
    ldr         r1,DAT_08007178\n\
    ldr         r5,DAT_0800717c\n\
    ldr         r0,DAT_08007180\n\
    ldr         r3,[r0,#0x0]\n\
    lsl         r3,r3,#0x2\n\
    ldr         r4,DAT_08007184\n\
    ldr         r0,DAT_08007188\n\
    ldrh        r0,[r0,#0x6]\n\
    lsl         r2,r0,#0x1\n\
    add         r2,r2,r4\n\
    ldrh        r4,[r2,#0x0]\n\
    lsl         r0,r4,#0x1\n\
    add         r0,r0,r4\n\
    lsl         r0,r0,#0x4\n\
    add         r3,r3,r0\n\
    add         r5,#0x4\n\
    add         r3,r3,r5\n\
    ldr         r2,[r3,#0x0]\n\
    mov         r0,sp\n\
    bl          fun_080455fc\n\
    ldr         r2,DAT_0800718c\n\
    mov         r0,sp\n\
    mov         r1,#0x85\n\
    bl          fun_0803c010\n\
LAB_08007166:\n\
    mov         r0,#0x0\n\
    add         sp,#0x64\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08007170:\n\
    .4byte 0x02009B64\n\
DAT_08007174:\n\
    .4byte 0x02009B5C\n\
DAT_08007178:\n\
    .4byte 0x08082634\n\
DAT_0800717c:\n\
    .4byte 0x08669620\n\
DAT_08007180:\n\
    .4byte 0x020025B4\n\
DAT_08007184:\n\
    .4byte 0x0877BAF0\n\
DAT_08007188:\n\
    .4byte 0x02005750\n\
DAT_0800718c:\n\
    .4byte 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_08007190()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6}\n\
    sub         sp,#0x20\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    cmp         r1,#0x0\n\
    beq         LAB_080071e8\n\
    ldr         r0,DAT_080071e0\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    ldr         r3,DAT_080071e4\n\
    lsl         r5,r5,#0x2\n\
    add         r4,r5,r3\n\
    ldrh        r2,[r4,#0x0]\n\
    add         r3,#0x2\n\
    add         r5,r5,r3\n\
    ldrh        r3,[r5,#0x0]\n\
    mov         r6,#0x60\n\
    mov         r9,r6\n\
    str         r6,[sp,#0x0]\n\
    mov         r6,#0x40\n\
    mov         r8,r6\n\
    str         r6,[sp,#0x4]\n\
    mov         r6,#0xf0\n\
    str         r6,[sp,#0x8]\n\
    ldrh        r4,[r4,#0x0]\n\
    str         r4,[sp,#0xc]\n\
    ldrh        r4,[r5,#0x0]\n\
    str         r4,[sp,#0x10]\n\
    mov         r4,r9\n\
    str         r4,[sp,#0x14]\n\
    mov         r4,r8\n\
    str         r4,[sp,#0x18]\n\
    str         r6,[sp,#0x1c]\n\
    bl          fun_080031e8\n\
    b           LAB_08007222\n\
DAT_080071e0:\n\
    .4byte 0x08082908\n\
DAT_080071e4:\n\
    .4byte 0x0877B9F0\n\
LAB_080071e8:\n\
    ldr         r0,DAT_08007230\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    ldr         r3,DAT_08007234\n\
    lsl         r5,r5,#0x2\n\
    add         r4,r5,r3\n\
    ldrh        r2,[r4,#0x0]\n\
    add         r3,#0x2\n\
    add         r5,r5,r3\n\
    ldrh        r3,[r5,#0x0]\n\
    mov         r6,#0x60\n\
    mov         r9,r6\n\
    str         r6,[sp,#0x0]\n\
    mov         r6,#0x40\n\
    mov         r8,r6\n\
    str         r6,[sp,#0x4]\n\
    mov         r6,#0xf0\n\
    str         r6,[sp,#0x8]\n\
    ldrh        r4,[r4,#0x0]\n\
    str         r4,[sp,#0xc]\n\
    ldrh        r4,[r5,#0x0]\n\
    str         r4,[sp,#0x10]\n\
    mov         r4,r9\n\
    str         r4,[sp,#0x14]\n\
    mov         r4,r8\n\
    str         r4,[sp,#0x18]\n\
    str         r6,[sp,#0x1c]\n\
    bl          fun_080031e8\n\
LAB_08007222:\n\
    add         sp,#0x20\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08007230:\n\
    .4byte 0x0808BF08\n\
DAT_08007234:\n\
    .4byte 0x0877B9F0\n\
    ");
}
__attribute__((naked)) void fun_08007238()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r5,r1,#0x10\n\
    mov         r4,#0x0\n\
LAB_08007244:\n\
    cmp         r5,r4\n\
    beq         LAB_08007264\n\
    add         r0,r6,#0x0\n\
    asr         r0,r4\n\
    mov         r1,#0x1\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_0800725c\n\
    add         r0,r4,#0x0\n\
    bl          fun_08007190\n\
    b           LAB_08007264\n\
LAB_0800725c:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x0\n\
    bl          fun_08007190\n\
LAB_08007264:\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,#0x3\n\
    bls         LAB_08007244\n\
    ldr         r0,DAT_08007288\n\
    ldrh        r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_08007290\n\
    ldr         r0,DAT_0800728c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r1,r0\n\
    beq         LAB_080072a0\n\
    add         r0,r5,#0x0\n\
    mov         r1,#0x1\n\
    bl          fun_08007190\n\
    b           LAB_080072a0\n\
DAT_08007288:\n\
    .4byte 0x02009B5C\n\
DAT_0800728c:\n\
    .4byte 0x02009B60\n\
LAB_08007290:\n\
    ldr         r0,DAT_080072b0\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r1,r0\n\
    beq         LAB_080072a0\n\
    add         r0,r5,#0x0\n\
    mov         r1,#0x0\n\
    bl          fun_08007190\n\
LAB_080072a0:\n\
    ldr         r0,DAT_080072b0\n\
    ldr         r1,DAT_080072b4\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_080072b0:\n\
    .4byte 0x02009B60\n\
DAT_080072b4:\n\
    .4byte 0x02009B5C\n\
\n\
    ");
}
