__attribute__((naked)) void fun_080003e0()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    lsl         r1,r1,#0x18\n\
    lsr         r5,r1,#0x18\n\
    lsl         r2,r2,#0x10\n\
    lsr         r7,r2,#0x10\n\
    mov         r0,#0x28\n\
    bl          fun_08002c04\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    ldr         r6,DAT_080003f8\n\
    b           LAB_08000408\n\
DAT_080003f8:\n\
    .4byte 0x087566F9\n\
LAB_080003fc:\n\
    add         r0,r4,#0x1\n\
    mov         r1,#0x28\n\
    bl          fun_080435d0\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
LAB_08000408:\n\
    cmp         r5,#0xfe\n\
    beq         LAB_08000418\n\
    lsl         r0,r4,#0x1\n\
    add         r0,r0,r4\n\
    add         r0,r0,r6\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,r5\n\
    bne         LAB_080003fc\n\
LAB_08000418:\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08000454\n\
    add         r0,r0,r1\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x64\n\
    beq         LAB_080003fc\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08000454\n\
    add         r0,r0,r1\n\
    add         r0,r0,r4\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08000458\n\
    strb        r4,[r0,#0x0]\n\
    mov         r0,#0x3f\n\
    bl          fun_080017b8\n\
    cmp         r7,#0x0\n\
    beq         LAB_0800044c\n\
    mov         r0,#0x1e\n\
    bl          fun_08001088\n\
LAB_0800044c:\n\
    add         r0,r4,#0x0\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08000454:\n\
    .4byte 0x00000E5A\n\
DAT_08000458:\n\
    .4byte 0x02000694\n\
\n\
    ");
}
