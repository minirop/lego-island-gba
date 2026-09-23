__attribute__((naked)) void fun_08023910()
{
    asm("\n\
     ldr        r2,DAT_08023928\n\
     ldr        r0,DAT_0802392c\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08023930\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_08023934\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08023928:\n\
     .word 0x0200F3B0\n\
DAT_0802392c:\n\
     .word 0x0852DADC\n\
DAT_08023930:\n\
     .word 0x0200F3C0\n\
DAT_08023934:\n\
     .word 0x0852DA78\n\
    ");
}
__attribute__((naked)) void fun_08023938()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     bl         fun_0803ab7c\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1e\n\
     bne        LAB_0802399c\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0802396c\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x5\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08023970\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023974\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     b          LAB_08023988\n\
DAT_0802396c:\n\
     .word 0x00000E84\n\
DAT_08023970:\n\
     .word 0x02002530\n\
LAB_08023974:\n\
     ldr        r1,DAT_08023990\n\
     ldr        r2,DAT_08023994\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08023998\n\
     mov        r0,#0x22\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_08023988:\n\
     bl         fun_0800117c\n\
     b          LAB_08023a14\n\
.space 1\n\
.space 1\n\
DAT_08023990:\n\
     .word 0x020025E8\n\
DAT_08023994:\n\
     .word 0x0000029F\n\
DAT_08023998:\n\
     .word 0x020025C8\n\
LAB_0802399c:\n\
     ldr        r5,DAT_08023a1c\n\
     ldr        r2,DAT_08023a20\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x0\n\
     bl         memset\n\
     mov        r0,#0x0\n\
     bl         fun_08002ccc\n\
     bl         fun_08025da0\n\
     bl         fun_08025dcc\n\
     bl         fun_08023a48\n\
     ldr        r0,DAT_08023a24\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080239c6\n\
     bl         fun_08023ba0\n\
LAB_080239c6:\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_08023a28\n\
     strh       r0,[r5,#0x20]\n\
     ldr        r2,PTR_DAT_08023a2c\n\
     ldr        r0,PTR_DAT_08023a30\n\
     add        r0,#0x84\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r1,r0,#0x1\n\
     add        r2,r1,r2\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     ldr        r2,PTR_DAT_08023a34\n\
     add        r1,r1,r2\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r1,#0x14\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r2,#0x1\n\
     bl         fun_080256b4\n\
     ldr        r0,PTR_fun_08025d94_08023a38\n\
     bl         fun_08001170\n\
     bl         fun_0800117c\n\
     mov        r0,#0x0\n\
     mov        r1,#0x1\n\
     mov        r2,#0x3c\n\
     bl         fun_08002d34\n\
     strh       r4,[r5,#0x0]\n\
     ldr        r1,DAT_08023a3c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08023a40\n\
     ldr        r2,DAT_08023a44\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
LAB_08023a14:\n\
     mov        r0,#0x0\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08023a1c:\n\
     .word 0x03002400\n\
DAT_08023a20:\n\
     .word 0x00000D98\n\
DAT_08023a24:\n\
     .word 0x02005750\n\
DAT_08023a28:\n\
     .word 0x0000FFEC\n\
PTR_DAT_08023a2c:\n\
     .word       DAT_0852d810\n\
PTR_DAT_08023a30:\n\
     .word       DAT_0852d974\n\
PTR_DAT_08023a34:\n\
     .word       DAT_0852d8c2\n\
PTR_fun_08025d94_08023a38:\n\
     .word       fun_08025d94\n\
DAT_08023a3c:\n\
     .word 0x0200F3CC\n\
DAT_08023a40:\n\
     .word 0x0000037F\n\
DAT_08023a44:\n\
     .word 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08023a48()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r5,#0x0\n\
LAB_08023a4c:\n\
     lsl        r4,r5,#0x5\n\
     ldr        r0,DAT_08023a68\n\
     add        r0,r4,r0\n\
     mov        r1,#0x2c\n\
     mul        r1,r5\n\
     ldr        r2,DAT_08023a6c\n\
     add        r1,r1,r2\n\
     bl         fun_080004ac\n\
     cmp        r5,#0x24\n\
     bls        LAB_08023a70\n\
     add        r0,r5,#0x0\n\
     sub        r0,#0x25\n\
     b          LAB_08023a80\n\
DAT_08023a68:\n\
     .word 0x03002438\n\
DAT_08023a6c:\n\
     .word 0x08786C48\n\
LAB_08023a70:\n\
     cmp        r5,#0x1e\n\
     bls        LAB_08023a7a\n\
     add        r0,r5,#0x0\n\
     sub        r0,#0x1f\n\
     b          LAB_08023a80\n\
LAB_08023a7a:\n\
     cmp        r5,#0x4\n\
     bls        LAB_08023a86\n\
     sub        r0,r5,#0x5\n\
LAB_08023a80:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     b          LAB_08023a88\n\
LAB_08023a86:\n\
     add        r1,r5,#0x0\n\
LAB_08023a88:\n\
     ldr        r6,DAT_08023b70\n\
     add        r0,r4,r6\n\
     add        r0,#0x4e\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08023b74\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r5\n\
     lsl        r1,r0,#0x2\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x8\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023aaa\n\
     add        r0,r1,r2\n\
     bl         fun_0803ab8c\n\
LAB_08023aaa:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x30\n\
     bls        LAB_08023a4c\n\
     ldr        r0,PTR_DAT_08023b78\n\
     bl         fun_080045f0\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x38\n\
     mov        r1,#0x31\n\
     bl         fun_0803aa14\n\
     mov        r0,#0xce\n\
     lsl        r0,r0,#0x3\n\
     add        r4,r6,r0\n\
     add        r0,r4,#0x0\n\
     bl         fun_08025cec\n\
     ldr        r2,PTR_DAT_08023b7c\n\
     ldr        r0,PTR_DAT_08023b80\n\
     add        r0,#0x84\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r1,r0,#0x1\n\
     add        r2,r1,r2\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r6,#0x3c]\n\
     ldr        r0,PTR_DAT_08023b84\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     strh       r0,[r6,#0x3e]\n\
     ldrh       r1,[r6,#0x3c]\n\
     lsl        r0,r1,#0x10\n\
     str        r0,[r4,#0x0]\n\
     ldr        r2,DAT_08023b88\n\
     add        r1,r6,r2\n\
     ldrh       r2,[r6,#0x3e]\n\
     lsl        r0,r2,#0x10\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xcf\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r6,r0\n\
     ldr        r0,DAT_08023b8c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r2,DAT_08023b90\n\
     add        r1,r6,r2\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r5,#0x0\n\
     add        r4,r6,#0x0\n\
     ldr        r0,DAT_08023b94\n\
     add        r6,r4,r0\n\
LAB_08023b12:\n\
     lsl        r0,r5,#0x3\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r0,r4\n\
     mov        r2,#0xd6\n\
     lsl        r2,r2,#0x3\n\
     add        r1,r1,r2\n\
     mov        r2,#0x0\n\
     strh       r2,[r1,#0x0]\n\
     add        r0,r0,r6\n\
     bl         fun_08025cec\n\
     add        r0,r5,#0x0\n\
     bl         fun_08024fe8\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x19\n\
     bls        LAB_08023b12\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_08023b70\n\
     ldr        r0,DAT_08023b98\n\
     add        r6,r4,r0\n\
LAB_08023b42:\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r0,r4\n\
     ldr        r2,DAT_08023b9c\n\
     add        r1,r1,r2\n\
     mov        r2,#0x0\n\
     strh       r2,[r1,#0x0]\n\
     add        r0,r0,r6\n\
     bl         fun_08025cec\n\
     add        r0,r5,#0x0\n\
     bl         fun_0802526c\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0xb\n\
     bls        LAB_08023b42\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08023b70:\n\
     .word 0x03002400\n\
PTR_DAT_08023b74:\n\
     .word       DAT_087874b4\n\
PTR_DAT_08023b78:\n\
     .word       DAT_0853a5b8\n\
PTR_DAT_08023b7c:\n\
     .word       DAT_0852d810\n\
PTR_DAT_08023b80:\n\
     .word       DAT_0852d974\n\
PTR_DAT_08023b84:\n\
     .word       DAT_0852d8c2\n\
DAT_08023b88:\n\
     .word 0x00000674\n\
DAT_08023b8c:\n\
     .word 0x0000D555\n\
DAT_08023b90:\n\
     .word 0x0000065C\n\
DAT_08023b94:\n\
     .word 0x000006B4\n\
DAT_08023b98:\n\
     .word 0x00000A5C\n\
DAT_08023b9c:\n\
     .word 0x00000A58\n\
    ");
}
__attribute__((naked)) void fun_08023ba0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r1,DAT_08023c54\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x1]\n\
     strb       r0,[r1,#0x8]\n\
     mov        r2,#0x0\n\
     strh       r0,[r1,#0x2]\n\
     strh       r0,[r1,#0x4]\n\
     strb       r2,[r1,#0x7]\n\
     ldr        r0,DAT_08023c58\n\
     ldrb       r0,[r0,#0x4]\n\
     add        r0,#0x31\n\
     strb       r0,[r1,#0x9]\n\
     mov        r0,#0x55\n\
     strb       r0,[r1,#0xa]\n\
     mov        r0,#0x50\n\
     strb       r0,[r1,#0xb]\n\
     ldr        r1,DAT_08023c5c\n\
     mov        r0,#0x1\n\
     bl         fun_080032b4\n\
     mov        r7,#0x0\n\
     ldr        r0,DAT_08023c60\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r8,r0\n\
     ldr        r0,DAT_08023c64\n\
     mov        r10,r0\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     mov        r9,r1\n\
LAB_08023be4:\n\
     mov        r0,r8\n\
     bl         fun_08003998\n\
     lsl        r4,r7,#0x1\n\
     add        r4,r4,r7\n\
     lsl        r4,r4,#0x2\n\
     ldr        r6,DAT_08023c68\n\
     add        r6,r10\n\
     add        r6,r4,r6\n\
     str        r0,[r6,#0x0]\n\
     mov        r0,r8\n\
     bl         fun_08003998\n\
     mov        r5,#0xd6\n\
     lsl        r5,r5,#0x4\n\
     add        r5,r10\n\
     add        r5,r4,r5\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,r8\n\
     bl         fun_08003998\n\
     ldr        r2,DAT_08023c6c\n\
     add        r4,r4,r2\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,[r6,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     cmp        r7,#0x3\n\
     bls        LAB_08023be4\n\
     ldr        r1,DAT_08023c70\n\
     mov        r0,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_0803c1ec\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08023c54:\n\
     .word 0x02005760\n\
DAT_08023c58:\n\
     .word 0x02005750\n\
DAT_08023c5c:\n\
     .word 0x0852DBAC\n\
DAT_08023c60:\n\
     .word 0x0865FD94\n\
DAT_08023c64:\n\
     .word 0x03002400\n\
DAT_08023c68:\n\
     .word 0x00000D5C\n\
DAT_08023c6c:\n\
     .word 0x03003164\n\
DAT_08023c70:\n\
     .word 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_08023c74()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_08023cac\n\
     ldrh       r0,[r0,#0x8]\n\
     cmp        r4,r0\n\
     bcs        LAB_08023ce8\n\
     ldr        r5,DAT_08023cb0\n\
     add        r6,r0,#0x0\n\
LAB_08023c84:\n\
     add        r0,r4,#0x0\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x1\n\
     lsl        r0,r4\n\
     mov        r1,#0x20\n\
     lsl        r1,r4\n\
     orr        r0,r1\n\
     bl         fun_08004c04\n\
     cmp        r4,#0x2\n\
     bne        LAB_08023cb4\n\
     bl         fun_0803a9ec\n\
     ldrh       r0,[r5,#0x36]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023cde\n\
LAB_08023ca6:\n\
     bl         fun_08005468\n\
     b          LAB_08023cde\n\
DAT_08023cac:\n\
     .word 0x0852DA78\n\
DAT_08023cb0:\n\
     .word 0x03002400\n\
LAB_08023cb4:\n\
     lsl        r2,r4,#0x1\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x26\n\
     add        r0,r2,r0\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     sub        r1,#0x78\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x2e\n\
     add        r2,r2,r0\n\
     mov        r0,#0x0\n\
     ldrsh      r2,[r2,r0]\n\
     sub        r2,#0x50\n\
     add        r0,r4,#0x0\n\
     bl         fun_08005aa4\n\
     ldrh       r0,[r5,#0x36]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08023ca6\n\
     bl         fun_08005060\n\
LAB_08023cde:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,r6\n\
     bcc        LAB_08023c84\n\
LAB_08023ce8:\n\
     ldr        r1,DAT_08023cfc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x36]\n\
     mov        r0,#0x42\n\
     bl         fun_08004c04\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08023cfc:\n\
     .word 0x03002400\n\
    ");
}
__attribute__((naked)) void fun_08023d00()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r0,DAT_08023e58\n\
     add        r5,r0,#0x0\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x8\n\
     bne        LAB_08023d8c\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023d1c\n\
     ldrh       r0,[r5,#0x22]\n\
     sub        r0,#0x4\n\
     strh       r0,[r5,#0x22]\n\
LAB_08023d1c:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023d2c\n\
     ldrh       r0,[r5,#0x22]\n\
     add        r0,#0x4\n\
     strh       r0,[r5,#0x22]\n\
LAB_08023d2c:\n\
     bl         fun_080014bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023d3c\n\
     ldrh       r0,[r5,#0x24]\n\
     sub        r0,#0x4\n\
     strh       r0,[r5,#0x24]\n\
LAB_08023d3c:\n\
     bl         fun_080014d4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023d4c\n\
     ldrh       r0,[r5,#0x24]\n\
     add        r0,#0x4\n\
     strh       r0,[r5,#0x24]\n\
LAB_08023d4c:\n\
     mov        r2,#0x22\n\
     ldrsh      r1,[r5,r2]\n\
     ldrh       r2,[r5,#0x18]\n\
     mov        r3,#0x18\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r1,r0\n\
     bge        LAB_08023d5c\n\
     strh       r2,[r5,#0x22]\n\
LAB_08023d5c:\n\
     mov        r7,#0x22\n\
     ldrsh      r1,[r5,r7]\n\
     ldrh       r2,[r5,#0x1a]\n\
     mov        r3,#0x1a\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r1,r0\n\
     ble        LAB_08023d6c\n\
     strh       r2,[r5,#0x22]\n\
LAB_08023d6c:\n\
     mov        r7,#0x24\n\
     ldrsh      r1,[r5,r7]\n\
     ldrh       r2,[r5,#0x1c]\n\
     mov        r3,#0x1c\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r1,r0\n\
     bge        LAB_08023d7c\n\
     strh       r2,[r5,#0x24]\n\
LAB_08023d7c:\n\
     mov        r7,#0x24\n\
     ldrsh      r1,[r5,r7]\n\
     ldrh       r2,[r5,#0x1e]\n\
     mov        r3,#0x1e\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r1,r0\n\
     ble        LAB_08023d8c\n\
     strh       r2,[r5,#0x24]\n\
LAB_08023d8c:\n\
     ldrh       r4,[r5,#0x0]\n\
     cmp        r4,#0x1\n\
     beq        LAB_08023d94\n\
     b          LAB_08023f1e\n\
LAB_08023d94:\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023dd0\n\
     ldr        r7,DAT_08023e5c\n\
     add        r6,r5,r7\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023dd0\n\
     mov        r0,#0xd1\n\
     lsl        r0,r0,#0x3\n\
     add        r3,r5,r0\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08023dd0\n\
     ldr        r1,DAT_08023e60\n\
     add        r2,r5,r1\n\
     ldrh       r1,[r2,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08023dd0\n\
     add        r7,#0x10\n\
     add        r0,r5,r7\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r6,#0x0]\n\
     strh       r4,[r2,#0x0]\n\
     strh       r4,[r3,#0x0]\n\
     mov        r0,#0x18\n\
     bl         fun_080016f0\n\
LAB_08023dd0:\n\
     bl         fun_0800140c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023e14\n\
     ldr        r3,DAT_08023e58\n\
     ldr        r1,DAT_08023e5c\n\
     add        r0,r3,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023e14\n\
     mov        r2,#0xd1\n\
     lsl        r2,r2,#0x3\n\
     add        r4,r3,r2\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08023e14\n\
     ldr        r5,DAT_08023e64\n\
     add        r0,r3,r5\n\
     ldrh       r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_08023e14\n\
     mov        r7,#0xd5\n\
     lsl        r7,r7,#0x3\n\
     add        r0,r3,r7\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     sub        r5,#0x3e\n\
     add        r0,r3,r5\n\
     strh       r2,[r0,#0x0]\n\
     strh       r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     bl         fun_080016f0\n\
LAB_08023e14:\n\
     ldr        r4,DAT_08023e58\n\
     ldr        r7,DAT_08023e68\n\
     add        r0,r4,r7\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08023e28\n\
     mov        r2,#0xcf\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_08023e28:\n\
     mov        r3,#0xd1\n\
     lsl        r3,r3,#0x3\n\
     add        r0,r4,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08023e94\n\
     bl         fun_08001454\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023e70\n\
     mov        r5,#0xcf\n\
     lsl        r5,r5,#0x3\n\
     add        r1,r4,r5\n\
     ldr        r0,DAT_08023e6c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x44]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08023e94\n\
     mov        r0,#0x40\n\
     ldrh       r7,[r1,#0x12]\n\
     orr        r0,r7\n\
     b          LAB_08023e92\n\
.space 1\n\
.space 1\n\
DAT_08023e58:\n\
     .word 0x03002400\n\
DAT_08023e5c:\n\
     .word 0x0000065C\n\
DAT_08023e60:\n\
     .word 0x00000666\n\
DAT_08023e64:\n\
     .word 0x000006AA\n\
DAT_08023e68:\n\
     .word 0x0000068A\n\
DAT_08023e6c:\n\
     .word 0xFFFD8000\n\
LAB_08023e70:\n\
     bl         fun_0800146c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023e94\n\
     mov        r0,#0xcf\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r4,r0\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0xa\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x44]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08023e94\n\
     ldr        r0,DAT_08023eb8\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
LAB_08023e92:\n\
     strh       r0,[r1,#0x12]\n\
LAB_08023e94:\n\
     bl         fun_080014bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023ec4\n\
     ldr        r2,DAT_08023ebc\n\
     ldrh       r0,[r2,#0x20]\n\
     sub        r0,#0x4\n\
     strh       r0,[r2,#0x20]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r1,#0x46\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     cmp        r0,r1\n\
     bge        LAB_08023f1e\n\
     ldr        r0,DAT_08023ec0\n\
     strh       r0,[r2,#0x20]\n\
     b          LAB_08023f1e\n\
DAT_08023eb8:\n\
     .word 0x0000FFBF\n\
DAT_08023ebc:\n\
     .word 0x03002400\n\
DAT_08023ec0:\n\
     .word 0x0000FFBA\n\
LAB_08023ec4:\n\
     bl         fun_080014d4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08023ee8\n\
     ldr        r1,DAT_08023ee4\n\
     ldrh       r0,[r1,#0x20]\n\
     add        r0,#0x4\n\
     strh       r0,[r1,#0x20]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x1e\n\
     ble        LAB_08023f1e\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x20]\n\
     b          LAB_08023f1e\n\
DAT_08023ee4:\n\
     .word 0x03002400\n\
LAB_08023ee8:\n\
     ldr        r3,DAT_08023f08\n\
     ldrh       r0,[r3,#0x20]\n\
     mov        r5,#0x20\n\
     ldrsh      r1,[r3,r5]\n\
     mov        r2,#0x14\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     cmp        r1,r2\n\
     ble        LAB_08023f0c\n\
     sub        r0,#0x6\n\
     strh       r0,[r3,#0x20]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r2\n\
     bge        LAB_08023f1e\n\
     b          LAB_08023f1c\n\
.space 1\n\
.space 1\n\
DAT_08023f08:\n\
     .word 0x03002400\n\
LAB_08023f0c:\n\
     cmp        r1,r2\n\
     bge        LAB_08023f1e\n\
     add        r0,#0x6\n\
     strh       r0,[r3,#0x20]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r2\n\
     ble        LAB_08023f1e\n\
LAB_08023f1c:\n\
     strh       r2,[r3,#0x20]\n\
LAB_08023f1e:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08023f24()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r0,DAT_08023f40\n\
     ldrh       r2,[r0,#0x0]\n\
     add        r6,r0,#0x0\n\
     cmp        r2,#0x9\n\
     bls        LAB_08023f36\n\
     b          switchD_08023f3e_caseD_3\n\
LAB_08023f36:\n\
     lsl        r0,r2,#0x2\n\
     ldr        r1,DAT_08023f44\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_08023f40:\n\
     .word 0x03002400\n\
DAT_08023f44:\n\
     .word 0x08023F48\n\
switchD_08023f3e_switchdataD_08023f48:\n\
     .word       switchD_08023f3e_caseD_0\n\
     .word       switchD_08023f3e_caseD_1\n\
     .word       switchD_08023f3e_caseD_2\n\
     .word       switchD_08023f3e_caseD_3\n\
     .word       switchD_08023f3e_caseD_3\n\
     .word       switchD_08023f3e_caseD_3\n\
     .word       switchD_08023f3e_caseD_3\n\
     .word       switchD_08023f3e_caseD_3\n\
     .word       switchD_08023f3e_caseD_8\n\
     .word       switchD_08023f3e_caseD_9\n\
switchD_08023f3e_caseD_0:\n\
     ldr        r2,DAT_08023f9c\n\
     ldr        r1,DAT_08023fa0\n\
     ldr        r0,DAT_08023fa4\n\
     add        r0,#0x86\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     mov        r3,#0x3c\n\
     ldrsh      r1,[r2,r3]\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r0,r4]\n\
     cmp        r1,r0\n\
     bgt        LAB_08023f8c\n\
     b          switchD_08023f3e_caseD_3\n\
LAB_08023f8c:\n\
     mov        r1,#0x0\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     str        r1,[r2,#0x4]\n\
     bl         fun_08000e68\n\
     b          switchD_08023f3e_caseD_3\n\
.space 1\n\
.space 1\n\
DAT_08023f9c:\n\
     .word 0x03002400\n\
DAT_08023fa0:\n\
     .word 0x0852D810\n\
DAT_08023fa4:\n\
     .word 0x0852D974\n\
switchD_08023f3e_caseD_1:\n\
     ldr        r2,DAT_08024000\n\
     ldrh       r3,[r2,#0x3e]\n\
     ldr        r4,DAT_08024004\n\
     mov        r5,#0x3c\n\
     ldrsh      r1,[r2,r5]\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r4,r5]\n\
     cmp        r1,r0\n\
     ble        LAB_08024026\n\
     mov        r5,#0x4\n\
     ldrsh      r0,[r4,r5]\n\
     cmp        r1,r0\n\
     bge        LAB_08024026\n\
     lsl        r0,r3,#0x10\n\
     asr        r1,r0,#0x10\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r4,r3]\n\
     cmp        r1,r0\n\
     ble        LAB_08024026\n\
     mov        r5,#0x6\n\
     ldrsh      r0,[r4,r5]\n\
     cmp        r1,r0\n\
     bge        LAB_08024026\n\
     mov        r0,#0xcf\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r2,r0\n\
     ldr        r0,DAT_08024008\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802400c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024014\n\
     mov        r0,#0x8\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_08024010\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x1]\n\
     ldrh       r0,[r2,#0x10]\n\
     strh       r0,[r2,#0x22]\n\
     ldrh       r0,[r2,#0x12]\n\
     strh       r0,[r2,#0x24]\n\
     bl         fun_08025960\n\
     b          LAB_08024026\n\
DAT_08024000:\n\
     .word 0x03002400\n\
DAT_08024004:\n\
     .word 0x0852D6A0\n\
DAT_08024008:\n\
     .word 0x0000D555\n\
DAT_0802400c:\n\
     .word 0x02005750\n\
DAT_08024010:\n\
     .word 0x02005760\n\
LAB_08024014:\n\
     mov        r0,#0x2\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x0\n\
     mov        r2,#0x3c\n\
     bl         fun_08002d34\n\
     bl         fun_08025960\n\
LAB_08024026:\n\
     ldr        r4,DAT_08024070\n\
     ldrh       r3,[r4,#0x3e]\n\
     ldr        r2,DAT_08024074\n\
     mov        r5,#0x3c\n\
     ldrsh      r1,[r4,r5]\n\
     mov        r5,#0x24\n\
     ldrsh      r0,[r2,r5]\n\
     cmp        r1,r0\n\
     bgt        LAB_0802403a\n\
     b          switchD_08023f3e_caseD_3\n\
LAB_0802403a:\n\
     lsl        r0,r3,#0x10\n\
     asr        r1,r0,#0x10\n\
     mov        r3,#0x26\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r1,r0\n\
     bgt        LAB_08024048\n\
     b          switchD_08023f3e_caseD_3\n\
LAB_08024048:\n\
     mov        r5,#0x2a\n\
     ldrsh      r0,[r2,r5]\n\
     cmp        r1,r0\n\
     blt        LAB_08024052\n\
     b          switchD_08023f3e_caseD_3\n\
LAB_08024052:\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08024078\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x5\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024068\n\
     b          switchD_08023f3e_caseD_3\n\
LAB_08024068:\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0xe]\n\
     b          switchD_08023f3e_caseD_3\n\
.space 1\n\
.space 1\n\
DAT_08024070:\n\
     .word 0x03002400\n\
DAT_08024074:\n\
     .word 0x0852D6A0\n\
DAT_08024078:\n\
     .word 0x00000E84\n\
switchD_08023f3e_caseD_2:\n\
     ldr        r1,DAT_080240a4\n\
     ldr        r0,DAT_080240a8\n\
     add        r0,#0xda\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r0,r3]\n\
     mov        r4,#0x3c\n\
     ldrsh      r1,[r6,r4]\n\
     ldr        r0,DAT_080240ac\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080240b0\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x14\n\
     cmp        r1,r0\n\
     bgt        LAB_080240b4\n\
     b          LAB_080240fc\n\
.space 1\n\
.space 1\n\
DAT_080240a4:\n\
     .word 0x0852D810\n\
DAT_080240a8:\n\
     .word 0x0852D974\n\
DAT_080240ac:\n\
     .word 0x02005750\n\
LAB_080240b0:\n\
     cmp        r1,r2\n\
     ble        LAB_080240fc\n\
LAB_080240b4:\n\
     ldr        r0,DAT_080240c8\n\
     ldrh       r0,[r0,#0xe]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080240cc\n\
     mov        r0,#0xfe\n\
     mov        r1,#0x2\n\
     mov        r2,#0x1\n\
     bl         fun_080003e0\n\
     b          switchD_08023f3e_caseD_3\n\
DAT_080240c8:\n\
     .word 0x03002400\n\
LAB_080240cc:\n\
     ldr        r0,DAT_080240ec\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080240e2\n\
     ldr        r1,DAT_080240f0\n\
     ldr        r5,DAT_080240f4\n\
     add        r0,r5,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_080240f8\n\
     mov        r0,#0x22\n\
     strh       r0,[r1,#0x0]\n\
LAB_080240e2:\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     b          switchD_08023f3e_caseD_3\n\
.space 1\n\
.space 1\n\
DAT_080240ec:\n\
     .word 0x02002530\n\
DAT_080240f0:\n\
     .word 0x020025E8\n\
DAT_080240f4:\n\
     .word 0x0000029F\n\
DAT_080240f8:\n\
     .word 0x020025C8\n\
LAB_080240fc:\n\
     ldr        r1,DAT_08024110\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        switchD_08023f3e_caseD_3\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
     b          switchD_08023f3e_caseD_3\n\
DAT_08024110:\n\
     .word 0x0200F3CC\n\
switchD_08023f3e_caseD_9:\n\
     ldr        r0,DAT_08024288\n\
     ldr        r1,DAT_0802428c\n\
     add        r0,r0,r1\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x10\n\
     cmp        r1,#0x0\n\
     bne        switchD_08023f3e_caseD_8\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
switchD_08023f3e_caseD_8:\n\
     ldr        r2,DAT_08024290\n\
     ldr        r0,DAT_08024294\n\
     ldrh       r0,[r0,#0x4]\n\
     lsl        r1,r0,#0x1\n\
     ldrb       r2,[r2,#0x8]\n\
     asr        r2,r1\n\
     add        r1,r2,#0x0\n\
     mov        r4,#0x3\n\
     ldr        r3,DAT_08024298\n\
     ldr        r0,DAT_0802429c\n\
     add        r0,#0xda\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r2,r0,#0x1\n\
     add        r2,r2,r3\n\
     and        r1,r4\n\
     lsl        r0,r1,#0x4\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     ldrh       r2,[r2,#0x0]\n\
     sub        r0,r2,r0\n\
     lsl        r0,r0,#0x10\n\
     ldr        r3,DAT_08024288\n\
     mov        r2,#0x3c\n\
     ldrsh      r1,[r3,r2]\n\
     lsr        r4,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r1,r0\n\
     ble        switchD_08023f3e_caseD_3\n\
     mov        r2,#0x0\n\
     strh       r4,[r3,#0x3c]\n\
     mov        r4,#0xce\n\
     lsl        r4,r4,#0x3\n\
     add        r1,r3,r4\n\
     lsl        r0,r0,#0x10\n\
     str        r0,[r1,#0x0]\n\
     mov        r5,#0xcf\n\
     lsl        r5,r5,#0x3\n\
     add        r0,r3,r5\n\
     str        r2,[r0,#0x0]\n\
switchD_08023f3e_caseD_3:\n\
     ldr        r4,DAT_08024288\n\
     mov        r0,#0xce\n\
     lsl        r0,r0,#0x3\n\
     add        r6,r4,r0\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r6,r2]\n\
     mov        r3,#0xcb\n\
     lsl        r3,r3,#0x3\n\
     add        r0,r4,r3\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r5,DAT_080242a0\n\
     add        r7,r4,r5\n\
     mov        r0,#0x2\n\
     ldrsh      r1,[r7,r0]\n\
     ldr        r2,DAT_080242a4\n\
     add        r0,r4,r2\n\
     strh       r1,[r0,#0x0]\n\
     add        r3,#0x20\n\
     add        r1,r4,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,#0xa0\n\
     lsl        r3,r3,#0xb\n\
     cmp        r0,r3\n\
     ble        LAB_080241ac\n\
     str        r3,[r1,#0x0]\n\
LAB_080241ac:\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_080242a8\n\
     cmp        r0,r2\n\
     bge        LAB_080241b6\n\
     str        r2,[r1,#0x0]\n\
LAB_080241b6:\n\
     ldr        r5,DAT_080242ac\n\
     add        r1,r4,r5\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,r3\n\
     ble        LAB_080241c2\n\
     str        r3,[r1,#0x0]\n\
LAB_080241c2:\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,r2\n\
     bge        LAB_080241ca\n\
     str        r2,[r1,#0x0]\n\
LAB_080241ca:\n\
     add        r0,r6,#0x0\n\
     bl         fun_08025d04\n\
     ldr        r1,DAT_080242b0\n\
     add        r0,r4,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802424e\n\
     mov        r3,#0xcc\n\
     lsl        r3,r3,#0x3\n\
     add        r2,r4,r3\n\
     ldrh       r5,[r2,#0x0]\n\
     lsl        r0,r5,#0x3\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     add        r3,#0x54\n\
     add        r1,r4,r3\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080242b4\n\
     add        r5,r4,r1\n\
     ldrh       r3,[r0,#0x2]\n\
     mov        r1,#0x2\n\
     ldrsh      r0,[r0,r1]\n\
     ldrh       r1,[r5,#0x0]\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x0\n\
     bge        LAB_08024208\n\
.syntax unified\n\
    rsbs        r1,r0,#0\n\
.syntax divided\n\
LAB_08024208:\n\
     cmp        r1,#0xf\n\
     bgt        LAB_08024214\n\
     lsl        r1,r0,#0x10\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r6,#0x0]\n\
LAB_08024214:\n\
     strh       r3,[r5,#0x0]\n\
     ldrh       r3,[r2,#0x0]\n\
     lsl        r0,r3,#0x3\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     mov        r5,#0xd7\n\
     lsl        r5,r5,#0x3\n\
     add        r1,r4,r5\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080242b8\n\
     add        r3,r4,r1\n\
     ldrh       r2,[r0,#0x2]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r0,r4]\n\
     ldrh       r5,[r3,#0x0]\n\
     sub        r0,r0,r5\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x0\n\
     bge        LAB_08024240\n\
.syntax unified\n\
    rsbs        r1,r0,#0\n\
.syntax divided\n\
LAB_08024240:\n\
     cmp        r1,#0xf\n\
     bgt        LAB_0802424c\n\
     lsl        r1,r0,#0x10\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r7,#0x0]\n\
LAB_0802424c:\n\
     strh       r2,[r3,#0x0]\n\
LAB_0802424e:\n\
     bl         fun_08024508\n\
     ldr        r1,DAT_08024288\n\
     mov        r2,#0xce\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r1,r2\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r0,r3]\n\
     strh       r0,[r1,#0x3c]\n\
     ldr        r4,DAT_080242a0\n\
     add        r0,r1,r4\n\
     mov        r5,#0x2\n\
     ldrsh      r2,[r0,r5]\n\
     strh       r2,[r1,#0x3e]\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bhi        LAB_080242bc\n\
     mov        r2,#0x22\n\
     ldrsh      r0,[r1,r2]\n\
     mov        r3,#0x24\n\
     ldrsh      r1,[r1,r3]\n\
     mov        r2,#0x0\n\
     bl         fun_080256b4\n\
     b          LAB_080242ce\n\
.space 1\n\
.space 1\n\
DAT_08024288:\n\
     .word 0x03002400\n\
DAT_0802428c:\n\
     .word 0x0000066C\n\
DAT_08024290:\n\
     .word 0x02005710\n\
DAT_08024294:\n\
     .word 0x02005750\n\
DAT_08024298:\n\
     .word 0x0852D810\n\
DAT_0802429c:\n\
     .word 0x0852D974\n\
DAT_080242a0:\n\
     .word 0x00000674\n\
DAT_080242a4:\n\
     .word 0x0000065A\n\
DAT_080242a8:\n\
     .word 0xFFFB0000\n\
DAT_080242ac:\n\
     .word 0x0000067C\n\
DAT_080242b0:\n\
     .word 0x0000065E\n\
DAT_080242b4:\n\
     .word 0x00000662\n\
DAT_080242b8:\n\
     .word 0x00000664\n\
LAB_080242bc:\n\
     mov        r4,#0x3c\n\
     ldrsh      r0,[r1,r4]\n\
     ldrh       r1,[r1,#0x20]\n\
     add        r1,r1,r2\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r2,#0x0\n\
     bl         fun_080256b4\n\
LAB_080242ce:\n\
     ldr        r0,DAT_080243f4\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x1\n\
     bne        LAB_080242e8\n\
     ldr        r1,DAT_080243f8\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080242e8\n\
     bl         fun_0802485c\n\
     bl         fun_08024994\n\
LAB_080242e8:\n\
     ldr        r0,DAT_080243f4\n\
     ldr        r2,DAT_080243fc\n\
     add        r2,r2,r0\n\
     mov        r8,r2\n\
     ldr        r2,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     add        r6,r0,#0x0\n\
     cmp        r2,r1\n\
     ble        LAB_08024304\n\
     ldr        r3,DAT_08024400\n\
     add        r1,r6,r3\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08024304:\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_08024404\n\
     add        r7,r6,r4\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802434c\n\
     ldr        r5,DAT_08024408\n\
     add        r0,r6,r5\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     mov        r4,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,#0x3\n\
     bl         __udivsi3\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     asr        r1,r0,#0x10\n\
     cmp        r1,#0x3\n\
     ble        LAB_0802433e\n\
     ldr        r0,DAT_0802440c\n\
     mov        r2,r8\n\
     str        r0,[r2,#0x0]\n\
     mov        r3,#0xd1\n\
     lsl        r3,r3,#0x3\n\
     add        r0,r6,r3\n\
     strh       r4,[r0,#0x0]\n\
LAB_0802433e:\n\
     cmp        r1,#0x4\n\
     ble        LAB_0802434c\n\
     strh       r4,[r7,#0x0]\n\
     ldr        r4,DAT_08024400\n\
     add        r1,r6,r4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802434c:\n\
     mov        r0,#0xcd\n\
     lsl        r0,r0,#0x3\n\
     add        r3,r6,r0\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024382\n\
     ldr        r1,DAT_08024408\n\
     add        r0,r6,r1\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     mov        r2,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     lsr        r0,r1,#0x1\n\
     add        r5,r0,#0x6\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0xa\n\
     ble        LAB_08024382\n\
     strh       r2,[r3,#0x0]\n\
     ldr        r3,DAT_08024410\n\
     add        r0,r6,r3\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r4,#0xd1\n\
     lsl        r4,r4,#0x3\n\
     add        r0,r6,r4\n\
     strh       r2,[r0,#0x0]\n\
LAB_08024382:\n\
     ldr        r4,DAT_080243f4\n\
     mov        r0,#0xd5\n\
     lsl        r0,r0,#0x3\n\
     add        r7,r4,r0\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080243be\n\
     ldr        r1,DAT_08024408\n\
     add        r0,r4,r1\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     mov        r6,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,#0x6\n\
     bl         __udivsi3\n\
     add        r0,#0xf\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x13\n\
     ble        LAB_080243be\n\
     bl         fun_08025890\n\
     mov        r2,#0xd1\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     strh       r6,[r0,#0x0]\n\
     strh       r6,[r7,#0x0]\n\
LAB_080243be:\n\
     ldr        r0,DAT_080243f4\n\
     ldr        r3,DAT_08024400\n\
     add        r1,r0,r3\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r6,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_080243ee\n\
     ldr        r4,DAT_08024414\n\
     add        r0,r6,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024418\n\
     mov        r1,#0xcd\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r6,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024418\n\
     mov        r2,#0xd1\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r6,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024418\n\
LAB_080243ee:\n\
     mov        r5,#0x5\n\
     b          LAB_08024492\n\
.space 1\n\
.space 1\n\
DAT_080243f4:\n\
     .word 0x03002400\n\
DAT_080243f8:\n\
     .word 0x0000068C\n\
DAT_080243fc:\n\
     .word 0x0000067C\n\
DAT_08024400:\n\
     .word 0x0000066A\n\
DAT_08024404:\n\
     .word 0x00000666\n\
DAT_08024408:\n\
     .word 0x0000066C\n\
DAT_0802440c:\n\
     .word 0xFFFB0000\n\
DAT_08024410:\n\
     .word 0x0000065C\n\
DAT_08024414:\n\
     .word 0x0000068A\n\
LAB_08024418:\n\
     ldr        r3,DAT_08024468\n\
     add        r0,r6,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024492\n\
     ldr        r4,DAT_0802446c\n\
     add        r0,r6,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024492\n\
     mov        r1,#0xcd\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r6,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024492\n\
     mov        r2,#0xd5\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r6,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024492\n\
     sub        r3,#0x4\n\
     add        r0,r6,r3\n\
     ldrh       r4,[r6,#0x3c]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,r4,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     mov        r5,#0xcf\n\
     lsl        r5,r5,#0x3\n\
     add        r0,r6,r5\n\
     ldr        r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08024474\n\
     ldr        r2,DAT_08024470\n\
     add        r0,r6,r2\n\
     strh       r1,[r0,#0x0]\n\
     mov        r5,#0x0\n\
     b          LAB_08024492\n\
DAT_08024468:\n\
     .word 0x0000065C\n\
DAT_0802446c:\n\
     .word 0x00000666\n\
DAT_08024470:\n\
     .word 0x0000066E\n\
LAB_08024474:\n\
     ldr        r3,DAT_080244f8\n\
     add        r1,r6,r3\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_08024482\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08024482:\n\
     ldrh       r4,[r1,#0x0]\n\
     add        r0,r4,r0\n\
     strh       r0,[r1,#0x0]\n\
     lsr        r0,r0,#0x4\n\
     mov        r1,#0x3\n\
     and        r0,r1\n\
     add        r5,r0,#0x0\n\
     add        r5,#0xb\n\
LAB_08024492:\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x48\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r5,DAT_080244fc\n\
     add        r1,r6,r5\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080244b6\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0x0\n\
     bne        LAB_080244b6\n\
     mov        r2,#0xd1\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r6,r2\n\
     strh       r1,[r0,#0x0]\n\
LAB_080244b6:\n\
     add        r1,r6,#0x0\n\
     ldr        r3,DAT_08024500\n\
     add        r2,r1,r3\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080244ec\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,[r1,#0x44]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080244d8\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x4\n\
     add        r0,r4,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
LAB_080244d8:\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080244ec\n\
     ldr        r1,[r6,#0x44]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080244ec\n\
     ldr        r0,DAT_08024504\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_080244ec:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080244f8:\n\
     .word 0x0000066E\n\
DAT_080244fc:\n\
     .word 0x0000068A\n\
DAT_08024500:\n\
     .word 0x0000068C\n\
DAT_08024504:\n\
     .word 0x0000F7FF\n\
    ");
}
__attribute__((naked)) void fun_08024508()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x20\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0xc]\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x10]\n\
     mov        r2,#0x0\n\
     str        r2,[sp,#0x14]\n\
     ldr        r3,DAT_080247b0\n\
     mov        r4,#0xcb\n\
     lsl        r4,r4,#0x3\n\
     add        r0,r3,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r10,r0\n\
     ldr        r1,DAT_080247b4\n\
     add        r0,r3,r1\n\
     ldrh       r0,[r0,#0x2]\n\
     str        r0,[sp,#0x8]\n\
     mov        r2,sp\n\
     str        r2,[sp,#0x18]\n\
     mov        r0,sp\n\
     bl         fun_08025c9c\n\
     ldr        r3,DAT_080247b0\n\
     add        r4,#0x6\n\
     add        r0,r3,r4\n\
     mov        r1,sp\n\
     ldrh       r1,[r1,#0x10]\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,DAT_080247b8\n\
     add        r0,r3,r2\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     blt        LAB_08024588\n\
     mov        r3,r10\n\
     lsl        r1,r3,#0x10\n\
     asr        r4,r1,#0x10\n\
     ldr        r0,DAT_080247bc\n\
     add        r1,r1,r0\n\
     asr        r1,r1,#0x10\n\
     ldr        r2,[sp,#0x8]\n\
     lsl        r5,r2,#0x10\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0xa\n\
     add        r5,r5,r3\n\
     asr        r5,r5,#0x10\n\
     mov        r0,sp\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x2\n\
     bl         fun_08025b4c\n\
     add        r4,#0xa\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     mov        r0,sp\n\
     add        r1,r4,#0x0\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x2\n\
     bl         fun_08025b4c\n\
LAB_08024588:\n\
     mov        r4,r10\n\
     lsl        r4,r4,#0x10\n\
     mov        r9,r4\n\
     asr        r4,r4,#0x10\n\
     mov        r8,r4\n\
     ldr        r0,DAT_080247bc\n\
     add        r9,r0\n\
     mov        r1,r9\n\
     asr        r1,r1,#0x10\n\
     mov        r9,r1\n\
     ldr        r2,[sp,#0x8]\n\
     lsl        r6,r2,#0x10\n\
     asr        r7,r6,#0x10\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0xa\n\
     add        r6,r6,r3\n\
     asr        r6,r6,#0x10\n\
     mov        r0,sp\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x2\n\
     bl         fun_08025a14\n\
     mov        r4,#0xa\n\
     add        r8,r4\n\
     mov        r0,r8\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x2\n\
     bl         fun_08025a14\n\
     add        r5,r7,#0x0\n\
     sub        r5,#0x28\n\
     lsl        r5,r5,#0x10\n\
     asr        r5,r5,#0x10\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x1\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x1\n\
     bl         fun_08025a14\n\
     add        r4,r7,#0x0\n\
     sub        r4,#0x13\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     mov        r3,#0x4\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     mov        r3,#0x8\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x4\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x8\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x4\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x8\n\
     bl         fun_08025a14\n\
     ldr        r2,[sp,#0x18]\n\
     ldrh       r1,[r2,#0x2]\n\
     ldrh       r3,[r2,#0x6]\n\
     sub        r0,r3,r1\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024658\n\
     add        r0,r7,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x8]\n\
     mov        r4,#0x1\n\
     str        r4,[sp,#0x10]\n\
LAB_08024658:\n\
     lsl        r0,r1,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_08024662\n\
     mov        r0,#0x1\n\
     str        r0,[sp,#0x14]\n\
LAB_08024662:\n\
     ldr        r1,DAT_080247b0\n\
     mov        r2,#0xce\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r1,r2\n\
     ldrh       r0,[r0,#0x2]\n\
     mov        r10,r0\n\
     mov        r0,sp\n\
     bl         fun_08025c9c\n\
     mov        r3,r10\n\
     lsl        r3,r3,#0x10\n\
     mov        r9,r3\n\
     asr        r3,r3,#0x10\n\
     str        r3,[sp,#0x1c]\n\
     ldr        r4,DAT_080247bc\n\
     add        r9,r4\n\
     mov        r0,r9\n\
     asr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     ldr        r1,[sp,#0x8]\n\
     lsl        r6,r1,#0x10\n\
     asr        r7,r6,#0x10\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0xa\n\
     add        r6,r6,r2\n\
     asr        r6,r6,#0x10\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x2\n\
     bl         fun_08025a14\n\
     ldr        r3,[sp,#0x1c]\n\
     add        r3,#0xa\n\
     lsl        r3,r3,#0x10\n\
     asr        r3,r3,#0x10\n\
     mov        r8,r3\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x2\n\
     bl         fun_08025a14\n\
     add        r5,r7,#0x0\n\
     sub        r5,#0x28\n\
     lsl        r5,r5,#0x10\n\
     asr        r5,r5,#0x10\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x1\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x1\n\
     bl         fun_08025a14\n\
     add        r4,r7,#0x0\n\
     sub        r4,#0x13\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     mov        r3,#0x4\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     mov        r3,#0x8\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x4\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r6,#0x0\n\
     mov        r3,#0x8\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r9\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x4\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     mov        r1,r8\n\
     add        r2,r5,#0x0\n\
     mov        r3,#0x8\n\
     bl         fun_08025a14\n\
     mov        r0,sp\n\
     ldr        r4,[sp,#0x18]\n\
     ldrh       r4,[r4,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,r4,r0\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024748\n\
     ldr        r1,[sp,#0x1c]\n\
     add        r0,r1,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     mov        r2,#0x1\n\
     str        r2,[sp,#0xc]\n\
LAB_08024748:\n\
     ldr        r3,[sp,#0x18]\n\
     ldrh       r1,[r3,#0x2]\n\
     ldrh       r4,[r3,#0x6]\n\
     sub        r0,r4,r1\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024764\n\
     add        r0,r7,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x1\n\
     str        r0,[sp,#0x10]\n\
LAB_08024764:\n\
     lsl        r0,r1,#0x10\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08024770\n\
     ldr        r1,[sp,#0x14]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080247e8\n\
LAB_08024770:\n\
     ldr        r3,DAT_080247b0\n\
     ldr        r4,DAT_080247c0\n\
     add        r2,r3,r4\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080247c8\n\
     ldr        r0,[sp,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080247c8\n\
     mov        r1,#0xcd\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r3,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     add        r4,#0x2\n\
     add        r0,r3,r4\n\
     mov        r3,sp\n\
     ldrh       r3,[r3,#0xc]\n\
     strh       r3,[r0,#0x0]\n\
     mov        r4,sp\n\
     ldrh       r4,[r4,#0xc]\n\
     strh       r4,[r2,#0x0]\n\
     ldr        r2,DAT_080247b0\n\
     ldr        r3,DAT_080247c4\n\
     add        r0,r2,r3\n\
     mov        r4,sp\n\
     ldrh       r4,[r4,#0xc]\n\
     strh       r4,[r0,#0x0]\n\
     add        r3,#0x22\n\
     add        r0,r2,r3\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_080247fe\n\
DAT_080247b0:\n\
     .word 0x03002400\n\
DAT_080247b4:\n\
     .word 0x00000674\n\
DAT_080247b8:\n\
     .word 0x0000067C\n\
DAT_080247bc:\n\
     .word 0xFFF80000\n\
DAT_080247c0:\n\
     .word 0x0000066A\n\
DAT_080247c4:\n\
     .word 0x00000666\n\
LAB_080247c8:\n\
     ldr        r1,DAT_080247dc\n\
     ldr        r4,DAT_080247e0\n\
     add        r2,r1,r4\n\
     mov        r3,#0x0\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_080247e4\n\
     add        r1,r1,r0\n\
     strh       r3,[r1,#0x0]\n\
     b          LAB_080247fe\n\
DAT_080247dc:\n\
     .word 0x03002400\n\
DAT_080247e0:\n\
     .word 0x0000065C\n\
DAT_080247e4:\n\
     .word 0x0000066A\n\
LAB_080247e8:\n\
     ldr        r1,DAT_08024848\n\
     ldr        r2,DAT_0802484c\n\
     add        r0,r1,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080247fe\n\
     ldr        r3,DAT_08024850\n\
     add        r0,r1,r3\n\
     mov        r4,sp\n\
     ldrh       r4,[r4,#0x14]\n\
     strh       r4,[r0,#0x0]\n\
LAB_080247fe:\n\
     ldr        r0,[sp,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802481c\n\
     ldr        r1,DAT_08024848\n\
     mov        r3,#0xce\n\
     lsl        r3,r3,#0x3\n\
     add        r2,r1,r3\n\
     mov        r4,r10\n\
     lsl        r0,r4,#0x10\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0xcf\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r1,r0\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_0802481c:\n\
     ldr        r1,[sp,#0x10]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08024836\n\
     ldr        r1,DAT_08024848\n\
     ldr        r3,DAT_08024854\n\
     add        r2,r1,r3\n\
     ldr        r4,[sp,#0x8]\n\
     lsl        r0,r4,#0x10\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,DAT_08024858\n\
     add        r1,r1,r0\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
LAB_08024836:\n\
     add        sp,#0x20\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08024848:\n\
     .word 0x03002400\n\
DAT_0802484c:\n\
     .word 0x0000066A\n\
DAT_08024850:\n\
     .word 0x0000065C\n\
DAT_08024854:\n\
     .word 0x00000674\n\
DAT_08024858:\n\
     .word 0x0000067C\n\
    ");
}
__attribute__((naked)) void fun_0802485c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x14\n\
     ldr        r6,DAT_0802496c\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r1,[r6,#0x4]\n\
     ldrh       r0,[r0,#0x14]\n\
     add        r0,r1,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r5,DAT_08024970\n\
     ldr        r3,[sp,#0x0]\n\
     and        r3,r5\n\
     orr        r3,r0\n\
     str        r3,[sp,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r2,[r6,#0x4]\n\
     ldrh       r0,[r0,#0x18]\n\
     add        r0,r2,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x4]\n\
     and        r2,r5\n\
     orr        r2,r0\n\
     str        r2,[sp,#0x4]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r4,[r6,#0x6]\n\
     ldrh       r0,[r0,#0x16]\n\
     add        r1,r4,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r4,DAT_08024974\n\
     add        r0,r4,#0x0\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x6]\n\
     ldrh       r0,[r0,#0x1a]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     add        r0,r4,#0x0\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x4]\n\
     mov        r7,#0x0\n\
     mov        r0,#0x94\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r6\n\
     mov        r9,r0\n\
     sub        r6,#0x38\n\
     mov        r8,r6\n\
     add        r2,r5,#0x0\n\
     add        r5,sp,#0x8\n\
LAB_080248ca:\n\
     lsl        r0,r7,#0x5\n\
     mov        r1,r9\n\
     add        r6,r0,r1\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802497c\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r7\n\
     lsl        r0,r0,#0x4\n\
     mov        r3,r8\n\
     add        r1,r0,r3\n\
     ldr        r3,DAT_08024978\n\
     add        r0,r1,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802497c\n\
     sub        r3,#0x2\n\
     add        r0,r1,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802497c\n\
     add        r3,#0x4\n\
     add        r0,r1,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802497c\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x4]\n\
     ldrh       r0,[r0,#0x14]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r0,[sp,#0x8]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x4]\n\
     ldrh       r0,[r0,#0x18]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r0,[r5,#0x4]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x6]\n\
     ldrh       r0,[r0,#0x16]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,[sp,#0x8]\n\
     and        r0,r4\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x6]\n\
     ldrh       r0,[r0,#0x1a]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,[r5,#0x4]\n\
     and        r0,r4\n\
     orr        r0,r1\n\
     str        r0,[r5,#0x4]\n\
     mov        r0,sp\n\
     add        r1,r5,#0x0\n\
     str        r2,[sp,#0x10]\n\
     bl         fun_08025ca8\n\
     lsl        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802497c\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r6,r4]\n\
     mov        r2,#0x6\n\
     ldrsh      r1,[r6,r2]\n\
     bl         fun_080257ec\n\
     b          LAB_08024986\n\
.space 1\n\
.space 1\n\
DAT_0802496c:\n\
     .word 0x03002438\n\
DAT_08024970:\n\
     .word 0xFFFF0000\n\
DAT_08024974:\n\
     .word 0x0000FFFF\n\
DAT_08024978:\n\
     .word 0x00000A82\n\
LAB_0802497c:\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     cmp        r7,#0xb\n\
     bls        LAB_080248ca\n\
LAB_08024986:\n\
     add        sp,#0x14\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08024994()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     ldr        r0,DAT_08024a30\n\
     mov        r12,r0\n\
     ldr        r5,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x4]\n\
     ldrh       r2,[r5,#0x14]\n\
     add        r0,r2,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r2,DAT_08024a34\n\
     add        r3,r2,#0x0\n\
     and        r3,r6\n\
     orr        r3,r0\n\
     ldrh       r4,[r5,#0x18]\n\
     add        r1,r4,r1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     and        r2,r7\n\
     orr        r2,r1\n\
     add        r7,r2,#0x0\n\
     mov        r0,r12\n\
     ldrh       r1,[r0,#0x6]\n\
     ldrh       r4,[r5,#0x16]\n\
     add        r0,r4,r1\n\
     lsl        r0,r0,#0x10\n\
     ldr        r4,DAT_08024a38\n\
     and        r3,r4\n\
     add        r6,r3,#0x0\n\
     orr        r6,r0\n\
     ldrh       r5,[r5,#0x1a]\n\
     add        r1,r5,r1\n\
     lsl        r1,r1,#0x10\n\
     and        r2,r4\n\
     add        r7,r2,#0x0\n\
     orr        r7,r1\n\
     mov        r3,#0x0\n\
     mov        r4,#0xf8\n\
     lsl        r4,r4,#0x2\n\
     add        r4,r12\n\
     asr        r0,r6,#0x10\n\
     mov        r9,r0\n\
     asr        r1,r7,#0x10\n\
     mov        r8,r1\n\
LAB_080249f0:\n\
     lsl        r1,r3,#0x5\n\
     add        r2,r1,r4\n\
     ldr        r0,[r2,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024a40\n\
     add        r0,r4,r1\n\
     ldr        r1,DAT_08024a3c\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024a40\n\
     ldrh       r0,[r2,#0x4]\n\
     mov        r1,#0x6\n\
     ldrsh      r5,[r2,r1]\n\
     cmp        r5,r9\n\
     ble        LAB_08024a40\n\
     cmp        r5,r8\n\
     bge        LAB_08024a40\n\
     lsl        r0,r0,#0x10\n\
     lsl        r1,r6,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r0,r1\n\
     ble        LAB_08024a40\n\
     lsl        r0,r7,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r2,r0\n\
     bge        LAB_08024a40\n\
     add        r0,r2,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_080257ec\n\
     b          LAB_08024a4a\n\
DAT_08024a30:\n\
     .word 0x03002438\n\
DAT_08024a34:\n\
     .word 0xFFFF0000\n\
DAT_08024a38:\n\
     .word 0x0000FFFF\n\
DAT_08024a3c:\n\
     .word 0x00000884\n\
LAB_08024a40:\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     cmp        r3,#0x5\n\
     bls        LAB_080249f0\n\
LAB_08024a4a:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08024a58()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     ldr        r7,DAT_08024b40\n\
     ldr        r1,DAT_08024b44\n\
     add        r0,r7,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024b34\n\
     mov        r2,#0xd2\n\
     lsl        r2,r2,#0x3\n\
     add        r4,r7,r2\n\
     add        r0,r4,#0x0\n\
     bl         fun_08025d04\n\
     ldrh       r5,[r4,#0x2]\n\
     ldr        r1,DAT_08024b48\n\
     add        r0,r7,r1\n\
     ldrh       r4,[r0,#0x2]\n\
     add        r0,r7,#0x0\n\
     add        r0,#0xbc\n\
     strh       r5,[r0,#0x0]\n\
     add        r0,#0x2\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_08024b58\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024b0e\n\
     lsl        r5,r5,#0x10\n\
     asr        r2,r5,#0x10\n\
     mov        r8,r2\n\
     ldr        r1,DAT_08024b4c\n\
     add        r0,r5,r1\n\
     lsr        r0,r0,#0x10\n\
     lsl        r4,r4,#0x10\n\
     lsr        r6,r4,#0x10\n\
     add        r1,r6,#0x0\n\
     bl         fun_080058bc\n\
     mov        r2,#0x2\n\
     mov        r9,r2\n\
     mov        r1,r9\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08024b0e\n\
     mov        r0,r8\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r1,r6,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,r9\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08024b0e\n\
     lsr        r5,r5,#0x10\n\
     asr        r6,r4,#0x10\n\
     ldr        r0,DAT_08024b50\n\
     add        r1,r4,r0\n\
     lsr        r1,r1,#0x10\n\
     add        r0,r5,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,r9\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08024b0e\n\
     add        r1,r6,#0x4\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     add        r0,r5,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,r9\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08024b0e\n\
     add        r0,r7,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r4,r7,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024b22\n\
     ldr        r1,DAT_08024b54\n\
     add        r0,r4,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024b22\n\
LAB_08024b0e:\n\
     ldr        r1,DAT_08024b40\n\
     add        r2,r1,#0x0\n\
     add        r2,#0xc0\n\
     mov        r0,#0x1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,DAT_08024b44\n\
     add        r2,r1,r0\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     add        r4,r1,#0x0\n\
LAB_08024b22:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
     orr        r0,r1\n\
     lsr        r0,r0,#0x1f\n\
     ldr        r2,DAT_08024b54\n\
     add        r1,r4,r2\n\
     strh       r0,[r1,#0x0]\n\
LAB_08024b34:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08024b40:\n\
     .word 0x03002400\n\
DAT_08024b44:\n\
     .word 0x000006AA\n\
DAT_08024b48:\n\
     .word 0x00000694\n\
DAT_08024b4c:\n\
     .word 0xFFF80000\n\
DAT_08024b50:\n\
     .word 0xFFFC0000\n\
DAT_08024b54:\n\
     .word 0x000006AC\n\
    ");
}
__attribute__((naked)) void fun_08024b58()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x14\n\
     ldr        r6,DAT_08024c34\n\
     ldrh       r0,[r6,#0x4]\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r5,DAT_08024c38\n\
     ldr        r3,[sp,#0x0]\n\
     and        r3,r5\n\
     orr        r3,r0\n\
     str        r3,[sp,#0x0]\n\
     ldrh       r0,[r6,#0x4]\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x4]\n\
     and        r2,r5\n\
     orr        r2,r0\n\
     str        r2,[sp,#0x4]\n\
     ldrh       r1,[r6,#0x6]\n\
     add        r1,#0x4\n\
     lsl        r1,r1,#0x10\n\
     ldr        r4,DAT_08024c3c\n\
     add        r0,r4,#0x0\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x0]\n\
     ldrh       r1,[r6,#0x6]\n\
     add        r1,#0x4\n\
     lsl        r1,r1,#0x10\n\
     add        r0,r4,#0x0\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x4]\n\
     mov        r7,#0x0\n\
     mov        r0,#0x84\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r0,r6\n\
     mov        r9,r0\n\
     add        r2,r5,#0x0\n\
     add        r5,sp,#0x8\n\
     mov        r1,#0xbc\n\
     lsl        r1,r1,#0x3\n\
     add        r1,r1,r6\n\
     mov        r8,r1\n\
LAB_08024bba:\n\
     lsl        r0,r7,#0x5\n\
     mov        r3,r9\n\
     add        r6,r0,r3\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024c58\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x4]\n\
     ldrh       r0,[r0,#0x14]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r0,[sp,#0x8]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x4]\n\
     ldrh       r0,[r0,#0x18]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r0,[r5,#0x4]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x6]\n\
     ldrh       r0,[r0,#0x16]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,[sp,#0x8]\n\
     and        r0,r4\n\
     orr        r0,r1\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r3,[r6,#0x6]\n\
     ldrh       r0,[r0,#0x1a]\n\
     add        r1,r3,r0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,[r5,#0x4]\n\
     and        r0,r4\n\
     orr        r0,r1\n\
     str        r0,[r5,#0x4]\n\
     mov        r0,sp\n\
     add        r1,r5,#0x0\n\
     str        r2,[sp,#0x10]\n\
     bl         fun_08025ca8\n\
     lsl        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024c58\n\
     mov        r0,#0x4\n\
     ldrsh      r1,[r6,r0]\n\
     mov        r2,r8\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08024c40\n\
     sub        r0,r1,#0x1\n\
     b          LAB_08024c42\n\
DAT_08024c34:\n\
     .word 0x030024B8\n\
DAT_08024c38:\n\
     .word 0xFFFF0000\n\
DAT_08024c3c:\n\
     .word 0x0000FFFF\n\
LAB_08024c40:\n\
     add        r0,r1,#0x1\n\
LAB_08024c42:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r0,#0x10\n\
     asr        r1,r1,#0x10\n\
     mov        r3,#0x6\n\
     ldrsh      r2,[r6,r3]\n\
     add        r0,r7,#0x0\n\
     bl         fun_08025e58\n\
     mov        r0,#0x1\n\
     b          LAB_08024c64\n\
LAB_08024c58:\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     cmp        r7,#0xb\n\
     bls        LAB_08024bba\n\
     mov        r0,#0x0\n\
LAB_08024c64:\n\
     add        sp,#0x14\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08024c74()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     ldr        r2,PTR_DAT_08024d18\n\
     ldrh       r0,[r2,#0x3c]\n\
     ldr        r1,PTR_DAT_08024d1c\n\
     strh       r0,[r1,#0x2]\n\
     ldrh       r0,[r2,#0x3e]\n\
     strh       r0,[r1,#0x4]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x48\n\
     ldrh       r0,[r0,#0x0]\n\
     strb       r0,[r1,#0x6]\n\
     mov        r0,#0x0\n\
     ldr        r1,[r2,#0x44]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08024caa\n\
     mov        r0,#0x40\n\
     ldrh       r1,[r1,#0x12]\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r0,r0,#0x1f\n\
LAB_08024caa:\n\
     ldr        r3,PTR_DAT_08024d1c\n\
     strb       r0,[r3,#0x7]\n\
     ldr        r0,PTR_DAT_08024d20\n\
     ldrh       r0,[r0,#0x4]\n\
     str        r0,[sp,#0x0]\n\
     mov        r4,#0x1\n\
     mov        r10,r4\n\
     mov        r6,#0x0\n\
     mov        r8,r6\n\
     mov        r9,r2\n\
LAB_08024cbe:\n\
     mov        r7,r8\n\
     lsl        r1,r7,#0x4\n\
     ldr        r0,PTR_DAT_08024d24\n\
     add        r4,r1,r0\n\
     mov        r0,r8\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024cd4\n\
     b          LAB_08024e4c\n\
LAB_08024cd4:\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r8,r0\n\
     beq        LAB_08024d48\n\
     mov        r12,r10\n\
     mov        r1,r10\n\
     lsl        r2,r1,#0x5\n\
     mov        r0,r9\n\
     add        r0,#0x40\n\
     add        r0,r2,r0\n\
     mov        r1,#0x2\n\
     str        r1,[r0,#0x0]\n\
     mov        r3,r9\n\
     add        r1,r2,r3\n\
     ldrh       r0,[r4,#0x2]\n\
     mov        r3,#0x0\n\
     strh       r0,[r1,#0x3c]\n\
     ldrh       r0,[r4,#0x4]\n\
     strh       r0,[r1,#0x3e]\n\
     ldrb       r0,[r4,#0x6]\n\
     add        r1,#0x48\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r6,PTR_DAT_08024d28\n\
     add        r2,r2,r6\n\
     ldr        r2,[r2,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_08024d36\n\
     ldrb       r0,[r4,#0x7]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024d2c\n\
     mov        r0,#0x40\n\
     ldrh       r7,[r2,#0x12]\n\
     orr        r0,r7\n\
     b          LAB_08024d34\n\
.space 1\n\
.space 1\n\
PTR_DAT_08024d18:\n\
     .word       DAT_03002400\n\
PTR_DAT_08024d1c:\n\
     .word       DAT_02005760\n\
PTR_DAT_08024d20:\n\
     .word       DAT_02005750\n\
PTR_DAT_08024d24:\n\
     .word       DAT_02005710\n\
PTR_DAT_08024d28:\n\
     .word       DAT_03002444\n\
LAB_08024d2c:\n\
     ldr        r1,DAT_08024d44\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
LAB_08024d34:\n\
     strh       r0,[r2,#0x12]\n\
LAB_08024d36:\n\
     mov        r0,r10\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     b          LAB_08024d4c\n\
.space 1\n\
.space 1\n\
DAT_08024d44:\n\
     .word 0x0000FFBF\n\
LAB_08024d48:\n\
     mov        r6,#0x0\n\
     mov        r12,r6\n\
LAB_08024d4c:\n\
     mov        r7,r8\n\
     lsl        r3,r7,#0x1\n\
     add        r1,r3,r7\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,DAT_08024df0\n\
     add        r0,r9\n\
     add        r5,r1,r0\n\
     ldr        r2,[r5,#0x0]\n\
     ldr        r6,DAT_08024df4\n\
     ldr        r0,[r6,#0x4]\n\
     ldrb       r7,[r4,#0x9]\n\
     add        r0,r7,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0xd6\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r9\n\
     add        r6,r1,r0\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r7,DAT_08024df4\n\
     ldr        r0,[r7,#0x4]\n\
     ldrb       r7,[r4,#0xa]\n\
     add        r0,r7,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_08024df8\n\
     add        r0,r9\n\
     add        r7,r1,r0\n\
     ldr        r1,[r7,#0x0]\n\
     ldr        r2,DAT_08024df4\n\
     ldr        r0,[r2,#0x4]\n\
     ldrb       r4,[r4,#0xb]\n\
     add        r0,r4,r0\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,r12\n\
     lsl        r0,r4,#0x5\n\
     ldr        r1,DAT_08024dfc\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024e04\n\
     ldr        r1,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08024e04\n\
     ldrh       r2,[r0,#0x4]\n\
     mov        r4,#0x2\n\
     ldrsh      r3,[r0,r4]\n\
     add        r0,r3,#0x0\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     sub        r2,#0x32\n\
     strh       r2,[r0,#0x4]\n\
     ldr        r1,[r5,#0x0]\n\
     ldr        r0,DAT_08024e00\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r6,#0x0]\n\
     sub        r0,r3,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r6,#0x0]\n\
     strh       r2,[r0,#0x4]\n\
     ldr        r1,[r6,#0x0]\n\
     ldr        r0,DAT_08024e00\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r7,#0x0]\n\
     add        r3,#0x4\n\
     strh       r3,[r0,#0x2]\n\
     ldr        r0,[r7,#0x0]\n\
     strh       r2,[r0,#0x4]\n\
     ldr        r1,[r7,#0x0]\n\
     ldr        r0,DAT_08024e00\n\
     ldrh       r7,[r1,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_08024e64\n\
DAT_08024df0:\n\
     .word 0x00000D5C\n\
DAT_08024df4:\n\
     .word 0x0865FD94\n\
DAT_08024df8:\n\
     .word 0x00000D64\n\
DAT_08024dfc:\n\
     .word 0x03002444\n\
DAT_08024e00:\n\
     .word 0x0000FDFF\n\
LAB_08024e04:\n\
     mov        r0,r8\n\
     add        r2,r3,r0\n\
     lsl        r2,r2,#0x2\n\
     ldr        r0,DAT_08024e44\n\
     add        r0,r9\n\
     add        r0,r2,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0xd6\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r9\n\
     add        r0,r2,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_08024e48\n\
     add        r0,r9\n\
     add        r2,r2,r0\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     ldrh       r6,[r1,#0x12]\n\
     orr        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_08024e64\n\
DAT_08024e44:\n\
     .word 0x00000D5C\n\
DAT_08024e48:\n\
     .word 0x00000D64\n\
LAB_08024e4c:\n\
     mov        r7,r10\n\
     lsl        r1,r7,#0x5\n\
     mov        r0,r9\n\
     add        r0,#0x40\n\
     add        r1,r1,r0\n\
     mov        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,r10\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
LAB_08024e64:\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08024e74\n\
     b          LAB_08024cbe\n\
LAB_08024e74:\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024ec2\n\
     mov        r1,#0x0\n\
     mov        r8,r1\n\
     ldr        r7,PTR_DAT_08024f38\n\
     ldr        r6,PTR_DAT_08024f3c\n\
     sub        r5,r6,#0x2\n\
LAB_08024e84:\n\
     mov        r2,r8\n\
     lsl        r0,r2,#0x4\n\
     add        r4,r0,r7\n\
     ldrb       r0,[r4,#0x1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024eb4\n\
     lsl        r2,r2,#0x1\n\
     add        r3,r2,r6\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08024eb4\n\
     ldrb       r0,[r5,#0x0]\n\
     add        r1,r0,#0x1\n\
     strb       r1,[r5,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     lsl        r0,r2\n\
     ldr        r4,PTR_DAT_08024f40\n\
     ldrb       r4,[r4,#0x8]\n\
     orr        r0,r4\n\
     ldr        r1,PTR_DAT_08024f40\n\
     strb       r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_08024eb4:\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     cmp        r0,#0x3\n\
     bls        LAB_08024e84\n\
LAB_08024ec2:\n\
     bl         fun_08002968\n\
     ldr        r5,PTR_DAT_08024f44\n\
     ldr        r2,DAT_08024f48\n\
     add        r4,r5,r2\n\
     ldrh       r3,[r4,#0x0]\n\
     cmp        r0,r3\n\
     ble        LAB_08024ed8\n\
     bl         fun_08002968\n\
     strh       r0,[r4,#0x0]\n\
LAB_08024ed8:\n\
     mov        r2,#0x0\n\
     mov        r8,r2\n\
     add        r1,r5,#0x0\n\
     ldr        r3,PTR_DAT_08024f38\n\
LAB_08024ee0:\n\
     mov        r4,r8\n\
     lsl        r0,r4,#0x4\n\
     add        r0,r0,r3\n\
     ldrb       r0,[r0,#0x1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08024ef2\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
LAB_08024ef2:\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     cmp        r0,#0x3\n\
     bls        LAB_08024ee0\n\
     ldr        r6,DAT_08024f48\n\
     add        r0,r1,r6\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08024f26\n\
     ldrh       r7,[r1,#0x0]\n\
     cmp        r7,#0x9\n\
     beq        LAB_08024f26\n\
     mov        r0,#0x9\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08024f4c\n\
     add        r1,r1,r0\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x0\n\
     mov        r2,#0x3c\n\
     bl         fun_08002d34\n\
LAB_08024f26:\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08024f38:\n\
     .word       DAT_02005710\n\
PTR_DAT_08024f3c:\n\
     .word       DAT_03003190\n\
PTR_DAT_08024f40:\n\
     .word       DAT_02005760\n\
PTR_DAT_08024f44:\n\
     .word       DAT_03002400\n\
DAT_08024f48:\n\
     .word 0x00000D8C\n\
DAT_08024f4c:\n\
     .word 0x0000066C\n\
    ");
}
__attribute__((naked)) void fun_08024f50()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r6,r0,#0x0\n\
     ldrh       r5,[r6,#0x16]\n\
     lsl        r0,r5,#0x3\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_08024f78\n\
     add        r4,r0,r1\n\
     mov        r7,#0x0\n\
     add        r0,r4,#0x4\n\
     bl         fun_08025d04\n\
     ldrb       r0,[r4,#0x1c]\n\
     cmp        r0,#0x2\n\
     beq        LAB_08024f8a\n\
     cmp        r0,#0x2\n\
     bgt        LAB_08024f7c\n\
     cmp        r0,#0x1\n\
     beq        LAB_08024f86\n\
     b          LAB_08024fa8\n\
DAT_08024f78:\n\
     .word 0x03002AB0\n\
LAB_08024f7c:\n\
     cmp        r0,#0x3\n\
     beq        LAB_08024f94\n\
     cmp        r0,#0x4\n\
     beq        LAB_08024f9e\n\
     b          LAB_08024fa8\n\
LAB_08024f86:\n\
     ldr        r1,[r4,#0x8]\n\
     b          LAB_08024f96\n\
LAB_08024f8a:\n\
     ldr        r1,[r4,#0x8]\n\
     ldr        r0,[r4,#0x20]\n\
     cmp        r1,r0\n\
     blt        LAB_08024fa8\n\
     b          LAB_08024fac\n\
LAB_08024f94:\n\
     ldr        r1,[r4,#0x4]\n\
LAB_08024f96:\n\
     ldr        r0,[r4,#0x20]\n\
     cmp        r1,r0\n\
     bgt        LAB_08024fa8\n\
     b          LAB_08024fac\n\
LAB_08024f9e:\n\
     ldr        r1,[r4,#0x4]\n\
     ldr        r0,[r4,#0x20]\n\
     cmp        r1,r0\n\
     blt        LAB_08024fa8\n\
     mov        r7,#0x1\n\
LAB_08024fa8:\n\
     cmp        r7,#0x0\n\
     beq        LAB_08024fb8\n\
LAB_08024fac:\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_08024fe8\n\
LAB_08024fb8:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r4,r1]\n\
     strh       r0,[r6,#0x4]\n\
     mov        r1,#0xa\n\
     ldrsh      r0,[r4,r1]\n\
     strh       r0,[r6,#0x6]\n\
     ldr        r2,[r6,#0xc]\n\
     cmp        r2,#0x0\n\
     beq        LAB_08024fdc\n\
     ldr        r0,DAT_08024fe4\n\
     lsl        r1,r5,#0x1\n\
     add        r1,r1,r5\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r0\n\
     ldrh       r1,[r1,#0x8]\n\
     add        r0,r2,#0x0\n\
     bl         fun_0800489c\n\
LAB_08024fdc:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08024fe4:\n\
     .word 0x08787700\n\
    ");
}
__attribute__((naked)) void fun_08024fe8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     ldr        r1,DAT_08025098\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r8\n\
     lsl        r0,r0,#0x2\n\
     add        r6,r0,r1\n\
     ldrh       r0,[r6,#0x4]\n\
     lsl        r1,r0,#0x1\n\
     ldr        r0,DAT_0802509c\n\
     add        r5,r1,r0\n\
     ldr        r1,DAT_080250a0\n\
     mov        r2,r8\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r8\n\
     lsl        r7,r0,#0x2\n\
     add        r4,r7,r1\n\
     mov        r0,#0xd6\n\
     lsl        r0,r0,#0x3\n\
     add        r3,r4,r0\n\
     ldrh       r2,[r3,#0x0]\n\
     ldrh       r0,[r6,#0x6]\n\
     sub        r0,#0x1\n\
     mov        r9,r1\n\
     cmp        r2,r0\n\
     blt        LAB_08025030\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     mov        r2,#0x0\n\
LAB_08025030:\n\
     ldr        r3,DAT_080250a4\n\
     lsl        r2,r2,#0x1\n\
     add        r2,r2,r5\n\
     ldrh       r1,[r2,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r1,r0,r3\n\
     ldrh       r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x10\n\
     mov        r10,r1\n\
     ldr        r1,DAT_080250a8\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     ldrh       r2,[r2,#0x2]\n\
     lsl        r0,r2,#0x1\n\
     add        r3,r0,r3\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r3,r3,#0x10\n\
     mov        r12,r3\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r5,r0,#0x10\n\
     mov        r2,r10\n\
     sub        r1,r3,r2\n\
     ldr        r0,[sp,#0x0]\n\
     sub        r3,r5,r0\n\
     add        r2,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_0802506e\n\
.syntax unified\n\
    rsbs        r2,r1,#0\n\
.syntax divided\n\
LAB_0802506e:\n\
     add        r0,r3,#0x0\n\
     cmp        r3,#0x0\n\
     bge        LAB_08025076\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
LAB_08025076:\n\
     cmp        r2,r0\n\
     ble        LAB_080250c4\n\
     mov        r0,#0xda\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r9\n\
     add        r0,r7,r0\n\
     mov        r2,r12\n\
     str        r2,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     ble        LAB_080250b0\n\
     ldr        r0,DAT_080250ac\n\
     add        r1,r4,r0\n\
     mov        r0,#0x4\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r2,[r6,#0x0]\n\
     mov        r3,#0x0\n\
     b          LAB_080250f2\n\
DAT_08025098:\n\
     .word 0x08787700\n\
DAT_0802509c:\n\
     .word 0x0852D974\n\
DAT_080250a0:\n\
     .word 0x03002400\n\
DAT_080250a4:\n\
     .word 0x0852D810\n\
DAT_080250a8:\n\
     .word 0x0852D8C2\n\
DAT_080250ac:\n\
     .word 0x000006CC\n\
LAB_080250b0:\n\
     ldr        r1,DAT_080250c0\n\
     add        r0,r4,r1\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
.syntax unified\n\
    rsbs        r2,r0,#0\n\
.syntax divided\n\
     mov        r3,#0x0\n\
     b          LAB_080250f2\n\
DAT_080250c0:\n\
     .word 0x000006CC\n\
LAB_080250c4:\n\
     mov        r0,#0xda\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r9\n\
     add        r0,r7,r0\n\
     str        r5,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     ble        LAB_080250e4\n\
     ldr        r2,DAT_080250e0\n\
     add        r1,r4,r2\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r3,[r6,#0x0]\n\
     b          LAB_080250f2\n\
DAT_080250e0:\n\
     .word 0x000006CC\n\
LAB_080250e4:\n\
     ldr        r1,DAT_08025148\n\
     add        r0,r4,r1\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r0,[r6,#0x0]\n\
.syntax unified\n\
    rsbs        r3,r0,#0\n\
.syntax divided\n\
LAB_080250f2:\n\
     mov        r4,r8\n\
     lsl        r1,r4,#0x3\n\
     add        r1,r8\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,DAT_0802514c\n\
     add        r0,r9\n\
     add        r0,r1,r0\n\
     mov        r4,r10\n\
     str        r4,[r0,#0x0]\n\
     mov        r0,#0xd7\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r9\n\
     add        r0,r1,r0\n\
     ldr        r4,[sp,#0x0]\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,DAT_08025150\n\
     add        r0,r9\n\
     add        r0,r1,r0\n\
     str        r2,[r0,#0x0]\n\
     mov        r0,#0xd8\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r9\n\
     add        r0,r1,r0\n\
     str        r3,[r0,#0x0]\n\
     ldr        r0,DAT_08025154\n\
     add        r0,r9\n\
     add        r0,r1,r0\n\
     mov        r2,#0x0\n\
     str        r2,[r0,#0x0]\n\
     mov        r0,#0xd9\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r9\n\
     add        r1,r1,r0\n\
     str        r2,[r1,#0x0]\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08025148:\n\
     .word 0x000006CC\n\
DAT_0802514c:\n\
     .word 0x000006B4\n\
DAT_08025150:\n\
     .word 0x000006BC\n\
DAT_08025154:\n\
     .word 0x000006C4\n\
    ");
}
__attribute__((naked)) void fun_08025158()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r5,r0,#0x0\n\
     ldrh       r6,[r5,#0x16]\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x4\n\
     ldr        r1,DAT_08025198\n\
     add        r4,r0,r1\n\
     mov        r7,#0x0\n\
     ldrh       r0,[r4,#0x2a]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08025260\n\
     ldrh       r0,[r4,#0x28]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802519c\n\
     add        r0,r4,#0x4\n\
     bl         fun_08025d04\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r4,r1]\n\
     strh       r0,[r5,#0x4]\n\
     mov        r2,#0xa\n\
     ldrsh      r0,[r4,r2]\n\
     strh       r0,[r5,#0x6]\n\
     ldr        r0,[r5,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08025260\n\
     mov        r0,#0x1\n\
     str        r0,[r5,#0x8]\n\
     strh       r0,[r4,#0x2a]\n\
     b          LAB_08025260\n\
.space 1\n\
.space 1\n\
DAT_08025198:\n\
     .word 0x03002E58\n\
LAB_0802519c:\n\
     ldrb       r0,[r4,#0x1c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025200\n\
     add        r0,r4,#0x4\n\
     bl         fun_08025d04\n\
     ldrb       r0,[r4,#0x1c]\n\
     cmp        r0,#0x2\n\
     beq        LAB_080251c6\n\
     cmp        r0,#0x2\n\
     bgt        LAB_080251b8\n\
     cmp        r0,#0x1\n\
     beq        LAB_080251c2\n\
     b          LAB_080251e4\n\
LAB_080251b8:\n\
     cmp        r0,#0x3\n\
     beq        LAB_080251d0\n\
     cmp        r0,#0x4\n\
     beq        LAB_080251da\n\
     b          LAB_080251e4\n\
LAB_080251c2:\n\
     ldr        r1,[r4,#0x8]\n\
     b          LAB_080251d2\n\
LAB_080251c6:\n\
     ldr        r1,[r4,#0x8]\n\
     ldr        r0,[r4,#0x20]\n\
     cmp        r1,r0\n\
     blt        LAB_080251e4\n\
     b          LAB_080251e8\n\
LAB_080251d0:\n\
     ldr        r1,[r4,#0x4]\n\
LAB_080251d2:\n\
     ldr        r0,[r4,#0x20]\n\
     cmp        r1,r0\n\
     bgt        LAB_080251e4\n\
     b          LAB_080251e8\n\
LAB_080251da:\n\
     ldr        r1,[r4,#0x4]\n\
     ldr        r0,[r4,#0x20]\n\
     cmp        r1,r0\n\
     blt        LAB_080251e4\n\
     mov        r7,#0x1\n\
LAB_080251e4:\n\
     cmp        r7,#0x0\n\
     beq        LAB_080251f4\n\
LAB_080251e8:\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     add        r0,r6,#0x0\n\
     bl         fun_0802526c\n\
LAB_080251f4:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r4,r1]\n\
     strh       r0,[r5,#0x4]\n\
     mov        r2,#0xa\n\
     ldrsh      r0,[r4,r2]\n\
     strh       r0,[r5,#0x6]\n\
LAB_08025200:\n\
     ldr        r1,DAT_0802524c\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r1,[r4,#0x24]\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     str        r1,[r4,#0x24]\n\
     ldr        r0,DAT_08025250\n\
     cmp        r1,r0\n\
     ble        LAB_08025220\n\
     ldr        r2,DAT_08025254\n\
     add        r0,r1,r2\n\
     str        r0,[r4,#0x24]\n\
LAB_08025220:\n\
     mov        r1,#0x26\n\
     ldrsh      r0,[r4,r1]\n\
     strh       r0,[r5,#0x10]\n\
     ldrh       r0,[r4,#0x2c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025260\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x2c]\n\
     ldr        r1,[r5,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08025260\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bls        LAB_08025258\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     b          LAB_0802525e\n\
.space 1\n\
.space 1\n\
DAT_0802524c:\n\
     .word 0x08787838\n\
DAT_08025250:\n\
     .word 0x0001FFFF\n\
DAT_08025254:\n\
     .word 0xFFFE0000\n\
LAB_08025258:\n\
     ldr        r0,DAT_08025268\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
LAB_0802525e:\n\
     strh       r0,[r1,#0x12]\n\
LAB_08025260:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08025268:\n\
     .word 0x0000F7FF\n\
    ");
}
__attribute__((naked)) void fun_0802526c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     ldr        r2,DAT_080252f0\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r9\n\
     lsl        r0,r1,#0x2\n\
     add        r5,r0,r2\n\
     ldrh       r0,[r5,#0x4]\n\
     lsl        r2,r0,#0x1\n\
     ldr        r0,DAT_080252f4\n\
     add        r7,r2,r0\n\
     ldr        r0,DAT_080252f8\n\
     lsl        r1,r1,#0x4\n\
     mov        r12,r1\n\
     add        r6,r1,r0\n\
     ldr        r2,DAT_080252fc\n\
     add        r1,r6,r2\n\
     ldrh       r4,[r1,#0x0]\n\
     mov        r8,r0\n\
     ldrh       r3,[r5,#0x6]\n\
     cmp        r3,#0x1\n\
     bne        LAB_08025310\n\
     ldr        r0,DAT_08025300\n\
     add        r1,r6,r0\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r2,r9\n\
     add        r2,#0x25\n\
     lsl        r2,r2,#0x5\n\
     add        r2,r8\n\
     ldr        r3,DAT_08025304\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r7\n\
     ldrh       r4,[r1,#0x0]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x3c]\n\
     ldr        r3,DAT_08025308\n\
     ldrh       r1,[r1,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x3e]\n\
     ldr        r0,DAT_0802530c\n\
     add        r0,r8\n\
     add        r0,r12\n\
     ldrh       r3,[r2,#0x3c]\n\
     lsl        r1,r3,#0x10\n\
     str        r1,[r0,#0x0]\n\
     mov        r0,#0xa6\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r8\n\
     add        r0,r12\n\
     ldrh       r2,[r2,#0x3e]\n\
     lsl        r1,r2,#0x10\n\
     str        r1,[r0,#0x0]\n\
     b          LAB_08025418\n\
.space 1\n\
.space 1\n\
DAT_080252f0:\n\
     .word 0x08787838\n\
DAT_080252f4:\n\
     .word 0x0852D974\n\
DAT_080252f8:\n\
     .word 0x03002400\n\
DAT_080252fc:\n\
     .word 0x00000A58\n\
DAT_08025300:\n\
     .word 0x00000A74\n\
DAT_08025304:\n\
     .word 0x0852D810\n\
DAT_08025308:\n\
     .word 0x0852D8C2\n\
DAT_0802530c:\n\
     .word 0x00000A5C\n\
LAB_08025310:\n\
     ldrh       r0,[r5,#0x6]\n\
     sub        r0,#0x1\n\
     cmp        r4,r0\n\
     blt        LAB_0802531e\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
LAB_0802531e:\n\
     ldr        r3,DAT_08025380\n\
     lsl        r2,r4,#0x1\n\
     add        r2,r2,r7\n\
     ldrh       r4,[r2,#0x0]\n\
     lsl        r0,r4,#0x1\n\
     add        r1,r0,r3\n\
     ldrh       r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x10\n\
     mov        r10,r1\n\
     ldr        r1,DAT_08025384\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     ldrh       r2,[r2,#0x2]\n\
     lsl        r0,r2,#0x1\n\
     add        r3,r0,r3\n\
     ldrh       r3,[r3,#0x0]\n\
     lsl        r7,r3,#0x10\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r2,r0,#0x10\n\
     mov        r0,r10\n\
     sub        r1,r7,r0\n\
     ldr        r4,[sp,#0x0]\n\
     sub        r3,r2,r4\n\
     add        r4,r1,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_0802535a\n\
.syntax unified\n\
    rsbs        r4,r1,#0\n\
.syntax divided\n\
LAB_0802535a:\n\
     add        r0,r3,#0x0\n\
     cmp        r3,#0x0\n\
     bge        LAB_08025362\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
LAB_08025362:\n\
     cmp        r4,r0\n\
     ble        LAB_080253a4\n\
     ldr        r0,DAT_08025388\n\
     add        r0,r8\n\
     add        r0,r12\n\
     str        r7,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     ble        LAB_08025390\n\
     ldr        r0,DAT_0802538c\n\
     add        r1,r6,r0\n\
     mov        r0,#0x4\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r2,[r5,#0x0]\n\
     mov        r3,#0x0\n\
     b          LAB_080253d6\n\
DAT_08025380:\n\
     .word 0x0852D810\n\
DAT_08025384:\n\
     .word 0x0852D8C2\n\
DAT_08025388:\n\
     .word 0x00000A78\n\
DAT_0802538c:\n\
     .word 0x00000A74\n\
LAB_08025390:\n\
     ldr        r1,DAT_080253a0\n\
     add        r0,r6,r1\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r0,[r5,#0x0]\n\
.syntax unified\n\
    rsbs        r2,r0,#0\n\
.syntax divided\n\
     mov        r3,#0x0\n\
     b          LAB_080253d6\n\
DAT_080253a0:\n\
     .word 0x00000A74\n\
LAB_080253a4:\n\
     ldr        r0,DAT_080253c0\n\
     add        r0,r8\n\
     add        r0,r12\n\
     str        r2,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     ble        LAB_080253c8\n\
     ldr        r2,DAT_080253c4\n\
     add        r1,r6,r2\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r3,[r5,#0x0]\n\
     b          LAB_080253d6\n\
.space 1\n\
.space 1\n\
DAT_080253c0:\n\
     .word 0x00000A78\n\
DAT_080253c4:\n\
     .word 0x00000A74\n\
LAB_080253c8:\n\
     ldr        r3,DAT_08025428\n\
     add        r0,r6,r3\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     mov        r2,#0x0\n\
     ldr        r0,[r5,#0x0]\n\
.syntax unified\n\
    rsbs        r3,r0,#0\n\
.syntax divided\n\
LAB_080253d6:\n\
     mov        r4,r9\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r9\n\
     lsl        r1,r1,#0x4\n\
     ldr        r0,DAT_0802542c\n\
     add        r0,r8\n\
     add        r0,r1,r0\n\
     mov        r4,r10\n\
     str        r4,[r0,#0x0]\n\
     mov        r0,#0xa6\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r8\n\
     add        r0,r1,r0\n\
     ldr        r4,[sp,#0x0]\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,DAT_08025430\n\
     add        r0,r8\n\
     add        r0,r1,r0\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,DAT_08025434\n\
     add        r0,r8\n\
     add        r0,r1,r0\n\
     str        r3,[r0,#0x0]\n\
     ldr        r0,DAT_08025438\n\
     add        r0,r8\n\
     add        r0,r1,r0\n\
     mov        r2,#0x0\n\
     str        r2,[r0,#0x0]\n\
     mov        r0,#0xa7\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r8\n\
     add        r1,r1,r0\n\
     str        r2,[r1,#0x0]\n\
LAB_08025418:\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08025428:\n\
     .word 0x00000A74\n\
DAT_0802542c:\n\
     .word 0x00000A5C\n\
DAT_08025430:\n\
     .word 0x00000A64\n\
DAT_08025434:\n\
     .word 0x00000A68\n\
DAT_08025438:\n\
     .word 0x00000A6C\n\
    ");
}
__attribute__((naked)) void fun_0802543c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     mov        r9,r0\n\
     mov        r10,r1\n\
     ldrh       r1,[r0,#0x16]\n\
     lsl        r0,r1,#0x5\n\
     ldr        r1,DAT_080254fc\n\
     add        r6,r0,r1\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802545c\n\
     b          LAB_08025562\n\
LAB_0802545c:\n\
     ldr        r7,DAT_08025500\n\
     mov        r4,#0x0\n\
     ldr        r2,DAT_08025504\n\
     add        r2,r2,r1\n\
     mov        r8,r2\n\
     ldr        r3,DAT_08025508\n\
     add        r3,r8\n\
LAB_0802546a:\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xc\n\
     bls        LAB_0802547c\n\
     mov        r0,#0xb\n\
     strh       r0,[r3,#0x0]\n\
LAB_0802547c:\n\
     ldrh       r2,[r3,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     mov        r5,r8\n\
     add        r1,r0,r5\n\
     ldr        r5,DAT_0802550c\n\
     add        r0,r1,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802549c\n\
     sub        r5,#0x2\n\
     add        r0,r1,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025520\n\
LAB_0802549c:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0xb\n\
     bls        LAB_0802546a\n\
LAB_080254a6:\n\
     ldr        r0,DAT_08025510\n\
     mov        r8,r0\n\
     lsr        r0,r0,#0x10\n\
     cmp        r7,r0\n\
     beq        LAB_0802555a\n\
     mov        r5,#0x0\n\
     ldr        r4,DAT_08025514\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x25\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r4\n\
     add        r0,#0x48\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080254c6\n\
     mov        r5,#0x1\n\
LAB_080254c6:\n\
     add        r0,r6,#0x4\n\
     bl         fun_08025cec\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r7\n\
     lsl        r0,r0,#0x4\n\
     ldr        r1,DAT_08025518\n\
     add        r2,r4,r1\n\
     add        r2,r0,r2\n\
     mov        r3,#0xa6\n\
     lsl        r3,r3,#0x4\n\
     add        r1,r4,r3\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x2]\n\
     lsl        r0,r0,#0x10\n\
     ldrh       r2,[r2,#0x2]\n\
     lsl        r1,r2,#0x10\n\
     str        r1,[r6,#0x4]\n\
     ldr        r1,DAT_0802551c\n\
     add        r0,r0,r1\n\
     str        r0,[r6,#0x8]\n\
     cmp        r5,#0x0\n\
     beq        LAB_08025524\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r6,#0xc]\n\
     b          LAB_08025528\n\
DAT_080254fc:\n\
     .word 0x0300309C\n\
DAT_08025500:\n\
     .word 0x0000FFFF\n\
DAT_08025504:\n\
     .word 0xFFFFF364\n\
DAT_08025508:\n\
     .word 0x00000C98\n\
DAT_0802550c:\n\
     .word 0x00000A82\n\
DAT_08025510:\n\
     .word 0xFFFF0000\n\
DAT_08025514:\n\
     .word 0x03002400\n\
DAT_08025518:\n\
     .word 0x00000A5C\n\
DAT_0802551c:\n\
     .word 0xFFEC0000\n\
LAB_08025520:\n\
     add        r7,r2,#0x0\n\
     b          LAB_080254a6\n\
LAB_08025524:\n\
     mov        r2,r8\n\
     str        r2,[r6,#0xc]\n\
LAB_08025528:\n\
     ldr        r0,DAT_08025648\n\
     str        r0,[r6,#0x10]\n\
     ldr        r0,DAT_0802564c\n\
     str        r0,[r6,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r6,#0x0]\n\
     ldr        r1,DAT_08025650\n\
     ldr        r0,[r1,#0x4]\n\
     ldr        r3,DAT_08025654\n\
     add        r2,r1,r3\n\
     ldrh       r5,[r2,#0x0]\n\
     add        r0,r5,r0\n\
     mov        r3,#0x7\n\
     and        r0,r3\n\
     strh       r0,[r6,#0x2]\n\
     cmp        r0,#0x7\n\
     bne        LAB_08025556\n\
     ldr        r0,[r1,#0x4]\n\
     ldrh       r2,[r2,#0x0]\n\
     add        r0,r2,r0\n\
     add        r0,#0x1\n\
     and        r0,r3\n\
     strh       r0,[r6,#0x2]\n\
LAB_08025556:\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x1c]\n\
LAB_0802555a:\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08025562\n\
     b          LAB_0802569e\n\
LAB_08025562:\n\
     add        r0,r6,#0x4\n\
     bl         fun_08025d04\n\
     ldrh       r5,[r6,#0x6]\n\
     ldrh       r4,[r6,#0xa]\n\
     mov        r0,r9\n\
     strh       r5,[r0,#0x4]\n\
     strh       r4,[r0,#0x6]\n\
     ldr        r0,[r6,#0xc]\n\
     ldr        r1,DAT_08025658\n\
     cmp        r0,r1\n\
     ble        LAB_0802557c\n\
     str        r1,[r6,#0xc]\n\
LAB_0802557c:\n\
     ldr        r0,[r6,#0xc]\n\
     ldr        r2,DAT_0802565c\n\
     cmp        r0,r2\n\
     bge        LAB_08025586\n\
     str        r2,[r6,#0xc]\n\
LAB_08025586:\n\
     ldr        r0,[r6,#0x10]\n\
     cmp        r0,r1\n\
     ble        LAB_0802558e\n\
     str        r1,[r6,#0x10]\n\
LAB_0802558e:\n\
     mov        r7,#0x0\n\
     lsl        r5,r5,#0x10\n\
     lsr        r0,r5,#0x10\n\
     lsl        r4,r4,#0x10\n\
     asr        r1,r4,#0x10\n\
     mov        r2,r10\n\
     ldrh       r2,[r2,#0x1a]\n\
     add        r1,r2,r1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_080058bc\n\
     mov        r3,#0x2\n\
     mov        r8,r3\n\
     mov        r1,r8\n\
     and        r1,r0\n\
     str        r5,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080255bc\n\
     ldr        r0,DAT_08025648\n\
     str        r0,[r6,#0x10]\n\
     mov        r7,#0x1\n\
LAB_080255bc:\n\
     ldr        r5,[sp,#0x0]\n\
     asr        r4,r5,#0x10\n\
     mov        r1,r10\n\
     ldrh       r1,[r1,#0x14]\n\
     add        r0,r1,r4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r2,[sp,#0x4]\n\
     lsr        r5,r2,#0x10\n\
     add        r1,r5,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,r8\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_080255e8\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     str        r0,[r6,#0xc]\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
LAB_080255e8:\n\
     mov        r3,r10\n\
     ldrh       r3,[r3,#0x18]\n\
     add        r0,r3,r4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r1,r5,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,r8\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802560a\n\
     ldr        r0,DAT_08025660\n\
     str        r0,[r6,#0xc]\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
LAB_0802560a:\n\
     cmp        r7,#0x3\n\
     bne        LAB_08025612\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
LAB_08025612:\n\
     mov        r5,r9\n\
     ldr        r0,[r5,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025620\n\
     ldrh       r1,[r6,#0x2]\n\
     bl         fun_0800489c\n\
LAB_08025620:\n\
     ldrh       r0,[r6,#0x1c]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x1c]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x13\n\
     mov        r1,#0x3\n\
     and        r0,r1\n\
     mov        r1,r9\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r1,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08025670\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08025668\n\
     ldr        r0,DAT_08025664\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     b          LAB_0802566e\n\
.space 1\n\
.space 1\n\
DAT_08025648:\n\
     .word 0xFFFE5556\n\
DAT_0802564c:\n\
     .word 0x00001555\n\
DAT_08025650:\n\
     .word 0x03002400\n\
DAT_08025654:\n\
     .word 0x00000C98\n\
DAT_08025658:\n\
     .word 0x00035555\n\
DAT_0802565c:\n\
     .word 0xFFFCAAAB\n\
DAT_08025660:\n\
     .word 0xFFFF0000\n\
DAT_08025664:\n\
     .word 0x0000FFBF\n\
LAB_08025668:\n\
     mov        r0,#0x40\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
LAB_0802566e:\n\
     strh       r0,[r1,#0x12]\n\
LAB_08025670:\n\
     ldr        r1,DAT_080256b0\n\
     ldrh       r5,[r1,#0xe]\n\
     lsl        r0,r5,#0x10\n\
     ldr        r2,[sp,#0x4]\n\
     cmp        r2,r0\n\
     ble        LAB_0802569e\n\
     ldr        r3,[sp,#0x0]\n\
     asr        r5,r3,#0x10\n\
     mov        r2,#0x10\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r5,r0\n\
     blt        LAB_08025690\n\
     mov        r3,#0x18\n\
     ldrsh      r0,[r1,r3]\n\
     cmp        r5,r0\n\
     ble        LAB_0802569e\n\
LAB_08025690:\n\
     mov        r0,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x4\n\
     mov        r5,r9\n\
     strh       r0,[r5,#0x4]\n\
     strh       r0,[r5,#0x6]\n\
LAB_0802569e:\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080256b0:\n\
     .word 0x0852D6A0\n\
    ");
}
__attribute__((naked)) void fun_080256b4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     lsl        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r3,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r6,r2,#0x10\n\
     ldr        r1,DAT_08025748\n\
     lsr        r4,r0,#0x10\n\
     ldrh       r5,[r1,#0x18]\n\
     lsl        r2,r5,#0x10\n\
     add        r5,r1,#0x0\n\
     cmp        r0,r2\n\
     bge        LAB_080256d4\n\
     ldrh       r4,[r5,#0x18]\n\
LAB_080256d4:\n\
     lsl        r1,r4,#0x10\n\
     ldrh       r2,[r5,#0x1a]\n\
     lsl        r0,r2,#0x10\n\
     cmp        r1,r0\n\
     ble        LAB_080256e0\n\
     ldrh       r4,[r5,#0x1a]\n\
LAB_080256e0:\n\
     lsl        r1,r3,#0x10\n\
     ldrh       r2,[r5,#0x1c]\n\
     lsl        r0,r2,#0x10\n\
     cmp        r1,r0\n\
     bge        LAB_080256ec\n\
     ldrh       r3,[r5,#0x1c]\n\
LAB_080256ec:\n\
     lsl        r1,r3,#0x10\n\
     ldrh       r2,[r5,#0x1e]\n\
     lsl        r0,r2,#0x10\n\
     cmp        r1,r0\n\
     ble        LAB_080256f8\n\
     ldrh       r3,[r5,#0x1e]\n\
LAB_080256f8:\n\
     strh       r4,[r5,#0x10]\n\
     strh       r3,[r5,#0x12]\n\
     ldrh       r1,[r5,#0x14]\n\
     sub        r0,r4,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     ldrh       r2,[r5,#0x16]\n\
     sub        r0,r3,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     cmp        r6,#0x0\n\
     bne        LAB_0802577a\n\
     lsl        r2,r1,#0x10\n\
     asr        r0,r2,#0x10\n\
     lsl        r6,r3,#0x10\n\
     cmp        r0,#0x8\n\
     ble        LAB_08025728\n\
LAB_0802571a:\n\
     ldr        r1,DAT_0802574c\n\
     add        r0,r2,r1\n\
     lsr        r1,r0,#0x10\n\
     lsl        r2,r1,#0x10\n\
     asr        r0,r2,#0x10\n\
     cmp        r0,#0x8\n\
     bgt        LAB_0802571a\n\
LAB_08025728:\n\
     lsl        r2,r1,#0x10\n\
     asr        r0,r2,#0x10\n\
     mov        r4,#0x8\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     cmp        r0,r4\n\
     bge        LAB_08025744\n\
LAB_08025734:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xc\n\
     add        r0,r2,r1\n\
     lsr        r1,r0,#0x10\n\
     lsl        r2,r1,#0x10\n\
     asr        r0,r2,#0x10\n\
     cmp        r0,r4\n\
     blt        LAB_08025734\n\
LAB_08025744:\n\
     add        r2,r6,#0x0\n\
     b          LAB_08025758\n\
DAT_08025748:\n\
     .word 0x03002400\n\
DAT_0802574c:\n\
     .word 0xFFF80000\n\
LAB_08025750:\n\
     ldr        r3,DAT_080257e8\n\
     add        r0,r2,r3\n\
     lsr        r3,r0,#0x10\n\
     lsl        r2,r3,#0x10\n\
LAB_08025758:\n\
     asr        r0,r2,#0x10\n\
     cmp        r0,#0x8\n\
     bgt        LAB_08025750\n\
     lsl        r2,r3,#0x10\n\
     asr        r0,r2,#0x10\n\
     mov        r4,#0x8\n\
.syntax unified\n\
    rsbs        r4,r4,#0\n\
.syntax divided\n\
     cmp        r0,r4\n\
     bge        LAB_0802577a\n\
LAB_0802576a:\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0xc\n\
     add        r0,r2,r3\n\
     lsr        r3,r0,#0x10\n\
     lsl        r2,r3,#0x10\n\
     asr        r0,r2,#0x10\n\
     cmp        r0,r4\n\
     blt        LAB_0802576a\n\
LAB_0802577a:\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r1,[r5,#0x14]\n\
     add        r0,r1,r0\n\
     strh       r0,[r5,#0x14]\n\
     lsl        r1,r3,#0x10\n\
     asr        r1,r1,#0x10\n\
     ldrh       r2,[r5,#0x16]\n\
     add        r1,r2,r1\n\
     strh       r1,[r5,#0x16]\n\
     ldrh       r1,[r5,#0x18]\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     ldrh       r3,[r5,#0x1a]\n\
     sub        r1,r3,r1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r7,r1,#0x10\n\
     mov        r6,#0x2\n\
LAB_080257a2:\n\
     mov        r4,#0x2\n\
     sub        r4,r4,r6\n\
     lsl        r4,r4,#0x12\n\
     asr        r4,r4,#0x10\n\
     mov        r1,r8\n\
     lsl        r0,r1,#0x1\n\
     mul        r0,r4\n\
     add        r1,r7,#0x0\n\
     bl         __divsi3\n\
     sub        r0,r0,r4\n\
     lsl        r2,r6,#0x1\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x26\n\
     add        r1,r2,r1\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r3,[r5,#0x14]\n\
     sub        r0,r3,r0\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x2e\n\
     add        r2,r2,r0\n\
     ldrh       r0,[r5,#0x16]\n\
     strh       r0,[r2,#0x0]\n\
     sub        r0,r6,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     cmp        r6,#0x2\n\
     bls        LAB_080257a2\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080257e8:\n\
     .word 0xFFF80000\n\
    ");
}
__attribute__((naked)) void fun_080257ec()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_08025810\n\
     lsl        r0,r0,#0x10\n\
     ldrh       r4,[r3,#0x3c]\n\
     lsl        r1,r4,#0x10\n\
     cmp        r0,r1\n\
     bge        LAB_080257fe\n\
     mov        r2,#0x1\n\
LAB_080257fe:\n\
     add        r5,r2,#0x0\n\
     mov        r0,#0xcf\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r3,r0\n\
     cmp        r5,#0x0\n\
     beq        LAB_08025818\n\
     ldr        r0,DAT_08025814\n\
     b          LAB_0802581a\n\
.space 1\n\
.space 1\n\
DAT_08025810:\n\
     .word 0x03002400\n\
DAT_08025814:\n\
     .word 0x00035555\n\
LAB_08025818:\n\
     ldr        r0,DAT_08025844\n\
LAB_0802581a:\n\
     str        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08025848\n\
     ldr        r2,DAT_0802584c\n\
     add        r1,r4,r2\n\
     ldr        r0,DAT_08025850\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     ldr        r1,[r4,#0x44]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802585c\n\
     cmp        r5,#0x0\n\
     beq        LAB_08025854\n\
     mov        r0,#0x40\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     b          LAB_0802585a\n\
DAT_08025844:\n\
     .word 0xFFFCAAAB\n\
DAT_08025848:\n\
     .word 0x03002400\n\
DAT_0802584c:\n\
     .word 0x0000067C\n\
DAT_08025850:\n\
     .word 0xFFFBD556\n\
LAB_08025854:\n\
     ldr        r0,DAT_08025880\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
LAB_0802585a:\n\
     strh       r0,[r1,#0x12]\n\
LAB_0802585c:\n\
     ldr        r1,DAT_08025884\n\
     ldr        r4,DAT_08025888\n\
     add        r2,r1,r4\n\
     mov        r0,#0x54\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_0802588c\n\
     add        r2,r1,r0\n\
     mov        r0,#0x5a\n\
     strh       r0,[r2,#0x0]\n\
     mov        r2,#0xd1\n\
     lsl        r2,r2,#0x3\n\
     add        r1,r1,r2\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08025880:\n\
     .word 0x0000FFBF\n\
DAT_08025884:\n\
     .word 0x03002400\n\
DAT_08025888:\n\
     .word 0x0000068A\n\
DAT_0802588c:\n\
     .word 0x0000068C\n\
    ");
}
__attribute__((naked)) void fun_08025890()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,DAT_080258f0\n\
     ldr        r2,DAT_080258f4\n\
     add        r0,r1,r2\n\
     ldrh       r4,[r0,#0x0]\n\
     add        r2,r1,#0x0\n\
     cmp        r4,#0x0\n\
     bne        LAB_08025944\n\
     add        r1,#0xc0\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r3,#0x0\n\
     ldr        r1,[r2,#0x44]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080258bc\n\
     mov        r0,#0x40\n\
     ldrh       r1,[r1,#0x12]\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r3,r0,#0x1f\n\
LAB_080258bc:\n\
     ldr        r1,DAT_080258f8\n\
     add        r0,r2,r1\n\
     strh       r4,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     beq        LAB_08025908\n\
     mov        r3,#0xd2\n\
     lsl        r3,r3,#0x3\n\
     add        r1,r2,r3\n\
     ldrh       r3,[r2,#0x3c]\n\
     lsl        r0,r3,#0x10\n\
     ldr        r3,DAT_080258fc\n\
     add        r0,r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08025900\n\
     add        r1,r2,r0\n\
     ldrh       r3,[r2,#0x3e]\n\
     lsl        r0,r3,#0x10\n\
     ldr        r3,DAT_08025904\n\
     add        r0,r0,r3\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xd3\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r2,r0\n\
     ldr        r0,DAT_080258fc\n\
     b          LAB_08025932\n\
.space 1\n\
.space 1\n\
DAT_080258f0:\n\
     .word 0x03002400\n\
DAT_080258f4:\n\
     .word 0x000006AA\n\
DAT_080258f8:\n\
     .word 0x000006AC\n\
DAT_080258fc:\n\
     .word 0xFFFB0000\n\
DAT_08025900:\n\
     .word 0x00000694\n\
DAT_08025904:\n\
     .word 0xFFEC0000\n\
LAB_08025908:\n\
     mov        r3,#0xd2\n\
     lsl        r3,r3,#0x3\n\
     add        r1,r2,r3\n\
     ldrh       r3,[r2,#0x3c]\n\
     lsl        r0,r3,#0x10\n\
     mov        r3,#0xa0\n\
     lsl        r3,r3,#0xb\n\
     add        r0,r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802594c\n\
     add        r1,r2,r0\n\
     ldrh       r3,[r2,#0x3e]\n\
     lsl        r0,r3,#0x10\n\
     ldr        r3,DAT_08025950\n\
     add        r0,r0,r3\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xd3\n\
     lsl        r0,r0,#0x3\n\
     add        r1,r2,r0\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0xb\n\
LAB_08025932:\n\
     str        r0,[r1,#0x0]\n\
     ldr        r3,DAT_08025954\n\
     add        r1,r2,r3\n\
     ldr        r0,DAT_08025958\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802595c\n\
     add        r1,r2,r0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08025944:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802594c:\n\
     .word 0x00000694\n\
DAT_08025950:\n\
     .word 0xFFEC0000\n\
DAT_08025954:\n\
     .word 0x0000069C\n\
DAT_08025958:\n\
     .word 0xFFFFD556\n\
DAT_0802595c:\n\
     .word 0x000006AA\n\
    ");
}
__attribute__((naked)) void fun_08025960()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r0,DAT_08025998\n\
     ldr        r1,[r0,#0x4]\n\
     str        r1,[r0,#0x8]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0xc]\n\
     mov        r3,#0x0\n\
     mov        r2,#0x0\n\
     add        r6,r0,#0x0\n\
     ldr        r7,DAT_0802599c\n\
     add        r4,r6,#0x0\n\
LAB_08025976:\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r0,r4\n\
     ldr        r5,DAT_080259a0\n\
     add        r0,r1,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080259a4\n\
     sub        r5,#0x2\n\
     add        r0,r1,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080259a4\n\
     strh       r0,[r4,#0xc]\n\
     b          LAB_080259aa\n\
.space 1\n\
.space 1\n\
DAT_08025998:\n\
     .word 0x03002400\n\
DAT_0802599c:\n\
     .word 0x020025FC\n\
DAT_080259a0:\n\
     .word 0x00000A82\n\
LAB_080259a4:\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
LAB_080259aa:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0xb\n\
     bls        LAB_08025976\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     ldr        r4,[r6,#0x8]\n\
     ldr        r1,DAT_08025a10\n\
     add        r0,r4,r1\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x1\n\
     bl         __udivsi3\n\
     lsl        r1,r0,#0x2\n\
     add        r1,r1,r0\n\
     mov        r0,#0xc8\n\
     lsl        r0,r0,#0x1\n\
     add        r3,r0,#0x0\n\
     sub        r1,r3,r1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r2,r1,#0x10\n\
     cmp        r1,#0x0\n\
     bge        LAB_080259e0\n\
     mov        r2,#0x0\n\
LAB_080259e0:\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r1,r3,#0x0\n\
     cmp        r0,r1\n\
     ble        LAB_080259ec\n\
     add        r2,r1,#0x0\n\
LAB_080259ec:\n\
     mov        r0,#0xe1\n\
     lsl        r0,r0,#0x5\n\
     mov        r3,#0x0\n\
     cmp        r4,r0\n\
     bhi        LAB_080259f8\n\
     mov        r3,#0x64\n\
LAB_080259f8:\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     lsl        r1,r2,#0x10\n\
     asr        r1,r1,#0x10\n\
     add        r0,r0,r1\n\
     add        r0,r0,r3\n\
     add        r0,#0x64\n\
     str        r0,[r7,#0x0]\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08025a10:\n\
     .word 0xFFFFE3E0\n\
    ");
}
__attribute__((naked)) void fun_08025a14()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     add        r7,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r10,r1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[sp,#0x0]\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     mov        r9,r3\n\
     mov        r8,r10\n\
     lsl        r4,r2,#0x10\n\
     lsr        r1,r4,#0x10\n\
     mov        r0,r8\n\
     bl         fun_080058bc\n\
     mov        r6,#0x2\n\
     add        r1,r6,#0x0\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_08025b38\n\
     mov        r0,r9\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025a7e\n\
     asr        r5,r4,#0x10\n\
     ldr        r0,DAT_08025b48\n\
     add        r1,r4,r0\n\
     lsr        r1,r1,#0x10\n\
     mov        r0,r8\n\
     bl         fun_080058bc\n\
     add        r1,r6,#0x0\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08025a7e\n\
     mov        r0,#0x8\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     bic        r5,r0\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldrh       r3,[r7,#0x2]\n\
     lsl        r1,r3,#0x10\n\
     cmp        r0,r1\n\
     ble        LAB_08025a7e\n\
     strh       r2,[r7,#0x2]\n\
LAB_08025a7e:\n\
     mov        r0,#0x1\n\
     mov        r1,r9\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025abe\n\
     mov        r0,r10\n\
     ldr        r2,[sp,#0x0]\n\
     lsl        r1,r2,#0x10\n\
     asr        r4,r1,#0x10\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0xc\n\
     add        r1,r1,r3\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_080058bc\n\
     mov        r1,#0x2\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08025abe\n\
     mov        r0,#0x8\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r0,r4\n\
     add        r1,r4,#0x0\n\
     sub        r1,#0x8\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldrh       r3,[r7,#0x6]\n\
     lsl        r1,r3,#0x10\n\
     cmp        r0,r1\n\
     ble        LAB_08025abe\n\
     strh       r2,[r7,#0x6]\n\
LAB_08025abe:\n\
     mov        r0,#0x4\n\
     mov        r1,r9\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025afe\n\
     mov        r2,r10\n\
     lsl        r0,r2,#0x10\n\
     asr        r4,r0,#0x10\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0xc\n\
     add        r0,r0,r3\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,[sp,#0x0]\n\
     bl         fun_080058bc\n\
     mov        r1,#0x2\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08025afe\n\
     mov        r0,#0x8\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r0,r4\n\
     add        r1,r4,#0x0\n\
     sub        r1,#0x8\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldrh       r3,[r7,#0x4]\n\
     lsl        r1,r3,#0x10\n\
     cmp        r0,r1\n\
     ble        LAB_08025afe\n\
     strh       r2,[r7,#0x4]\n\
LAB_08025afe:\n\
     mov        r0,#0x8\n\
     mov        r1,r9\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025b38\n\
     mov        r2,r10\n\
     lsl        r0,r2,#0x10\n\
     asr        r4,r0,#0x10\n\
     ldr        r3,DAT_08025b48\n\
     add        r0,r0,r3\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,[sp,#0x0]\n\
     bl         fun_080058bc\n\
     mov        r1,#0x2\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08025b38\n\
     mov        r0,#0x8\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     bic        r4,r0\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldrh       r3,[r7,#0x0]\n\
     lsl        r1,r3,#0x10\n\
     cmp        r0,r1\n\
     ble        LAB_08025b38\n\
     strh       r2,[r7,#0x0]\n\
LAB_08025b38:\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08025b48:\n\
     .word 0xFFF80000\n\
    ");
}
__attribute__((naked)) void fun_08025b4c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     mov        r10,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x0]\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[sp,#0x4]\n\
     mov        r0,#0x0\n\
     mov        r12,r0\n\
     ldr        r1,DAT_08025c80\n\
     mov        r8,r1\n\
     ldr        r2,DAT_08025c84\n\
     mov        r9,r2\n\
LAB_08025b72:\n\
     mov        r3,r12\n\
     lsl        r0,r3,#0x5\n\
     mov        r4,r8\n\
     add        r7,r0,r4\n\
     ldr        r0,[r7,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025c60\n\
     ldr        r1,DAT_08025c88\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025b94\n\
     mov        r0,#0xb1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r12\n\
     beq        LAB_08025c60\n\
LAB_08025b94:\n\
     ldr        r4,[r7,#0x0]\n\
     ldrh       r2,[r7,#0x4]\n\
     ldrh       r3,[r4,#0x14]\n\
     add        r0,r3,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r1,r9\n\
     and        r1,r5\n\
     orr        r1,r0\n\
     add        r5,r1,#0x0\n\
     add        r0,r5,#0x4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r3,r9\n\
     and        r3,r1\n\
     orr        r3,r0\n\
     ldrh       r0,[r4,#0x18]\n\
     add        r2,r0,r2\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     mov        r1,r9\n\
     and        r1,r6\n\
     orr        r1,r2\n\
     add        r6,r1,#0x0\n\
     sub        r0,r6,#0x4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r2,r9\n\
     and        r2,r1\n\
     orr        r2,r0\n\
     ldrh       r1,[r7,#0x6]\n\
     ldrh       r7,[r4,#0x16]\n\
     add        r0,r7,r1\n\
     lsl        r0,r0,#0x10\n\
     ldr        r7,DAT_08025c8c\n\
     and        r7,r3\n\
     orr        r7,r0\n\
     add        r5,r7,#0x0\n\
     ldrh       r4,[r4,#0x1a]\n\
     add        r1,r4,r1\n\
     lsl        r1,r1,#0x10\n\
     ldr        r4,DAT_08025c8c\n\
     and        r4,r2\n\
     orr        r4,r1\n\
     add        r6,r4,#0x0\n\
     ldr        r1,[sp,#0x0]\n\
     lsl        r0,r1,#0x10\n\
     lsl        r1,r5,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r0,r1\n\
     blt        LAB_08025c60\n\
     lsl        r0,r6,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r2,r0\n\
     bge        LAB_08025c60\n\
     asr        r3,r7,#0x10\n\
     ldr        r2,[sp,#0x4]\n\
     lsl        r0,r2,#0x10\n\
     asr        r1,r0,#0x10\n\
     cmp        r1,r3\n\
     blt        LAB_08025c60\n\
     asr        r0,r4,#0x10\n\
     cmp        r1,r0\n\
     bge        LAB_08025c60\n\
     mov        r0,#0x1\n\
     ldr        r4,DAT_08025c88\n\
     strh       r0,[r4,#0x0]\n\
     mov        r0,#0xb1\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r8\n\
     mov        r7,r12\n\
     strh       r7,[r0,#0x0]\n\
     sub        r1,r1,r3\n\
     lsl        r1,r1,#0x10\n\
     lsr        r2,r1,#0x10\n\
     mov        r3,r10\n\
     ldrh       r3,[r3,#0x2]\n\
     lsl        r0,r3,#0x10\n\
     cmp        r1,r0\n\
     ble        LAB_08025c38\n\
     mov        r4,r10\n\
     strh       r2,[r4,#0x2]\n\
LAB_08025c38:\n\
     mov        r7,r12\n\
     lsl        r1,r7,#0x3\n\
     add        r1,r12\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,DAT_08025c90\n\
     add        r0,r8\n\
     add        r0,r0,r1\n\
     mov        r3,#0x2\n\
     ldrsh      r2,[r0,r3]\n\
     ldr        r0,DAT_08025c94\n\
     add        r0,r8\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0xbc\n\
     lsl        r0,r0,#0x3\n\
     add        r0,r8\n\
     add        r0,r0,r1\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r0,r4]\n\
     ldr        r7,DAT_08025c98\n\
     strh       r0,[r7,#0x0]\n\
LAB_08025c60:\n\
     mov        r0,r12\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r12,r0\n\
     cmp        r0,#0x19\n\
     bls        LAB_08025b72\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08025c80:\n\
     .word 0x030024D8\n\
DAT_08025c84:\n\
     .word 0xFFFF0000\n\
DAT_08025c88:\n\
     .word 0x03002A5E\n\
DAT_08025c8c:\n\
     .word 0x0000FFFF\n\
DAT_08025c90:\n\
     .word 0x000005DC\n\
DAT_08025c94:\n\
     .word 0x0000058A\n\
DAT_08025c98:\n\
     .word 0x03002A64\n\
    ");
}
__attribute__((naked)) void fun_08025c9c()
{
    asm("\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r0,#0x4]\n\
     strh       r1,[r0,#0x2]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08025ca8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r3,r1,#0x0\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r3,r4]\n\
     cmp        r1,r0\n\
     bgt        LAB_08025cde\n\
     mov        r0,#0x4\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r3,r4]\n\
     cmp        r1,r0\n\
     blt        LAB_08025cde\n\
     mov        r0,#0x2\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r4,#0x6\n\
     ldrsh      r0,[r3,r4]\n\
     cmp        r1,r0\n\
     bgt        LAB_08025cde\n\
     mov        r0,#0x6\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r3,r2]\n\
     cmp        r1,r0\n\
     bge        LAB_08025ce2\n\
LAB_08025cde:\n\
     mov        r0,#0x0\n\
     b          LAB_08025ce4\n\
LAB_08025ce2:\n\
     mov        r0,#0x1\n\
LAB_08025ce4:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08025cec()
{
    asm("\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     str        r1,[r0,#0x4]\n\
     str        r1,[r0,#0x8]\n\
     str        r1,[r0,#0xc]\n\
     str        r1,[r0,#0x10]\n\
     ldr        r1,DAT_08025d00\n\
     str        r1,[r0,#0x14]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08025d00:\n\
     .word 0x00005555\n\
    ");
}
__attribute__((naked)) void fun_08025d04()
{
    asm("\n\
     ldr        r3,[r0,#0x8]\n\
     ldr        r1,[r0,#0x10]\n\
     add        r3,r3,r1\n\
     str        r3,[r0,#0x8]\n\
     ldr        r2,[r0,#0xc]\n\
     ldr        r1,[r0,#0x14]\n\
     add        r2,r2,r1\n\
     str        r2,[r0,#0xc]\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,r1,r3\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,[r0,#0x4]\n\
     add        r1,r1,r2\n\
     str        r1,[r0,#0x4]\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08025d24()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803abbc\n\
     bl         fun_0803ab88\n\
     bl         fun_0800457c\n\
     bl         fun_0803a980\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08025d3c()
{
    asm("\n\
     push       {r4,lr}\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1e\n\
     beq        LAB_08025d7a\n\
     bl         fun_08023d00\n\
     bl         fun_0803ab30\n\
     bl         fun_08023f24\n\
     bl         fun_08024a58\n\
     ldr        r0,DAT_08025d84\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025d66\n\
     bl         fun_08024c74\n\
LAB_08025d66:\n\
     ldr        r4,DAT_08025d88\n\
     ldrh       r0,[r4,#0x2a]\n\
     ldrh       r1,[r4,#0x32]\n\
     bl         fun_0803a140\n\
     bl         fun_0803a00c\n\
     ldr        r0,[r4,#0x4]\n\
     add        r0,#0x1\n\
     str        r0,[r4,#0x4]\n\
LAB_08025d7a:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08025d84:\n\
     .word 0x02005750\n\
DAT_08025d88:\n\
     .word 0x03002400\n\
    ");
}
__attribute__((naked)) void fun_08025d8c()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08025d90()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08025d94()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_08023c74\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08025da0()
{
    asm("\n\
     ldr        r1,DAT_08025dc4\n\
     mov        r0,#0x80\n\
     strh       r0,[r1,#0x18]\n\
     ldr        r2,DAT_08025dc8\n\
     ldrh       r3,[r2,#0x0]\n\
     lsl        r0,r3,#0x3\n\
     sub        r0,#0x79\n\
     strh       r0,[r1,#0x1a]\n\
     mov        r0,#0x58\n\
     strh       r0,[r1,#0x1c]\n\
     ldrh       r2,[r2,#0x2]\n\
     lsl        r0,r2,#0x3\n\
     sub        r0,#0x51\n\
     strh       r0,[r1,#0x1e]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x36]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08025dc4:\n\
     .word 0x03002400\n\
DAT_08025dc8:\n\
     .word 0x0852DA78\n\
    ");
}
__attribute__((naked)) void fun_08025dcc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0xc\n\
     add        r0,sp,#0x8\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_08025e44\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08025e48\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r0,sp,#0x8\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08025e4c\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0xba\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08025e50\n\
     bl         fun_08039e64\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_08025e54\n\
     ldrh       r0,[r0,#0x8]\n\
     cmp        r4,r0\n\
     bcs        LAB_08025e34\n\
     mov        r6,#0x1\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     mov        r5,#0x0\n\
     add        r7,r0,#0x0\n\
LAB_08025e1a:\n\
     str        r5,[sp,#0x0]\n\
     str        r5,[sp,#0x4]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1\n\
     add        r2,r6,#0x0\n\
     add        r3,r6,#0x0\n\
     bl         fun_080059c8\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,r7\n\
     bcc        LAB_08025e1a\n\
LAB_08025e34:\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     add        sp,#0xc\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08025e44:\n\
     .word 0x040000D4\n\
DAT_08025e48:\n\
     .word 0x8100C000\n\
DAT_08025e4c:\n\
     .word 0x81000200\n\
DAT_08025e50:\n\
     .word 0x0200F3C0\n\
DAT_08025e54:\n\
     .word 0x0852DA78\n\
    ");
}
__attribute__((naked)) void fun_08025e58()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r5,r1,#0x10\n\
     lsl        r1,r0,#0x5\n\
     ldr        r2,DAT_08025e94\n\
     add        r6,r1,r2\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x4\n\
     mov        r0,#0xb0\n\
     lsl        r0,r0,#0x3\n\
     add        r2,r2,r0\n\
     add        r4,r1,r2\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     mov        r0,#0x22\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_08025e98\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08025e9c\n\
     mov        r0,#0xb4\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r4,#0x2c]\n\
     b          LAB_08025ebe\n\
.space 1\n\
.space 1\n\
DAT_08025e94:\n\
     .word 0x030028D8\n\
DAT_08025e98:\n\
     .word 0x02005750\n\
LAB_08025e9c:\n\
     lsl        r1,r5,#0x10\n\
     ldrh       r2,[r6,#0x4]\n\
     lsl        r0,r2,#0x10\n\
     ldr        r2,DAT_08025ec4\n\
     cmp        r1,r0\n\
     bge        LAB_08025eac\n\
     mov        r2,#0xa0\n\
     lsl        r2,r2,#0xa\n\
LAB_08025eac:\n\
     str        r2,[r4,#0xc]\n\
     ldr        r0,DAT_08025ec8\n\
     str        r0,[r4,#0x10]\n\
     ldr        r0,DAT_08025ecc\n\
     str        r0,[r4,#0x18]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x28]\n\
     mov        r0,#0x2\n\
     strh       r0,[r6,#0x10]\n\
LAB_08025ebe:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08025ec4:\n\
     .word 0xFFFD8000\n\
DAT_08025ec8:\n\
     .word 0xFFFBD556\n\
DAT_08025ecc:\n\
     .word 0x00005555\n\
    ");
}
__attribute__((naked)) void fun_08025ed0()
{
    asm("\n\
     ldr        r2,DAT_08025ee8\n\
     ldr        r0,DAT_08025eec\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08025ef0\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_08025ef4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08025ee8:\n\
     .word 0x0200F3D0\n\
DAT_08025eec:\n\
     .word 0x0853C01C\n\
DAT_08025ef0:\n\
     .word 0x0200F3E0\n\
DAT_08025ef4:\n\
     .word 0x0853BFB8\n\
    ");
}
__attribute__((naked)) void fun_08025ef8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r4,DAT_08025f88\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     str        r1,[r4,#0x4]\n\
     ldr        r0,DAT_08025f8c\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     mov        r8,r0\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08025f90\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x13\n\
     ldr        r0,DAT_08025f94\n\
     add        r5,r0,#0x0\n\
     strh       r5,[r6,#0x0]\n\
     ldr        r0,DAT_08025f98\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_08025f9c\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,r8\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08025fa0\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     strh       r5,[r6,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     mov        r0,#0xe\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08025f74\n\
     mov        r0,#0xe\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08025f74\n\
     mov        r0,#0x28\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08025f74:\n\
     ldr        r1,DAT_08025fa4\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08025f88:\n\
     .word 0x040000D4\n\
DAT_08025f8c:\n\
     .word 0x8100C000\n\
DAT_08025f90:\n\
     .word 0x81000200\n\
DAT_08025f94:\n\
     .word 0x00001F44\n\
DAT_08025f98:\n\
     .word 0x0853C2EC\n\
DAT_08025f9c:\n\
     .word 0x0853C0EC\n\
DAT_08025fa0:\n\
     .word 0x80000100\n\
DAT_08025fa4:\n\
     .word 0x0200F3EC\n\
    ");
}
__attribute__((naked)) void fun_08025fa8()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_08025fe8\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x77\n\
     bhi        LAB_08025fb6\n\
     add        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
LAB_08025fb6:\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08025fd0\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026004\n\
     ldrb       r4,[r4,#0x0]\n\
     cmp        r4,#0x77\n\
     bls        LAB_08026004\n\
LAB_08025fd0:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4b\n\
     bls        LAB_08025fec\n\
     mov        r0,#0x13\n\
     bl         fun_080017b8\n\
     b          LAB_08025ffe\n\
.space 1\n\
.space 1\n\
DAT_08025fe8:\n\
     .word 0x0200F3EC\n\
LAB_08025fec:\n\
     cmp        r0,#0x23\n\
     bls        LAB_08025ff8\n\
     mov        r0,#0x14\n\
     bl         fun_080017b8\n\
     b          LAB_08025ffe\n\
LAB_08025ff8:\n\
     mov        r0,#0x15\n\
     bl         fun_080017b8\n\
LAB_08025ffe:\n\
     mov        r0,#0x1e\n\
     bl         fun_08001070\n\
LAB_08026004:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802600c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08026018()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0802601c()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08026020()
{
    asm("\n\
     ldr        r2,DAT_08026038\n\
     ldr        r0,DAT_0802603c\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08026040\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_08026044\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08026038:\n\
     .word 0x0200F3F0\n\
DAT_0802603c:\n\
     .word 0x085407D8\n\
DAT_08026040:\n\
     .word 0x0200F400\n\
DAT_08026044:\n\
     .word 0x08540774\n\
    ");
}
__attribute__((naked)) void fun_08026048()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r4,DAT_0802611c\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     str        r1,[r4,#0x4]\n\
     ldr        r0,DAT_08026120\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r6,#0xa0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08026124\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r5,#0x80\n\
     lsl        r5,r5,#0x13\n\
     ldr        r2,DAT_08026128\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r2,DAT_0802612c\n\
     mov        r0,#0xff\n\
     strh       r0,[r2,#0x0]\n\
     add        r2,#0x4\n\
     mov        r0,#0xf\n\
     strh       r0,[r2,#0x0]\n\
     ldrh       r0,[r5,#0x0]\n\
     mov        r2,#0x10\n\
     orr        r0,r2\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_08026130\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_08026134\n\
     str        r0,[r4,#0x0]\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08026138\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldrh       r1,[r5,#0x0]\n\
     ldr        r0,DAT_0802613c\n\
     and        r0,r1\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_08026140\n\
     ldr        r1,DAT_08026144\n\
     bl         fun_0803d070\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802614c\n\
     ldr        r4,DAT_08026148\n\
     ldrh       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080260d4\n\
     mov        r0,#0x0\n\
     mov        r1,#0xb\n\
     bl         fun_08026548\n\
LAB_080260d4:\n\
     ldrh       r4,[r4,#0x2]\n\
     cmp        r4,#0x1\n\
     bls        LAB_080260ec\n\
LAB_080260da:\n\
     bl         fun_08026248\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080260da\n\
     mov        r0,#0xb\n\
     mov        r1,#0x17\n\
     bl         fun_08026548\n\
LAB_080260ec:\n\
     ldr        r0,DAT_08026148\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r0,#0x2\n\
     bls        LAB_08026106\n\
LAB_080260f4:\n\
     bl         fun_08026248\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080260f4\n\
     mov        r0,#0x22\n\
     mov        r1,#0x16\n\
     bl         fun_08026548\n\
LAB_08026106:\n\
     ldr        r0,DAT_08026148\n\
     ldrh       r0,[r0,#0x2]\n\
     cmp        r0,#0x3\n\
     bls        LAB_0802615c\n\
LAB_0802610e:\n\
     bl         fun_08026248\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802610e\n\
     b          LAB_0802615c\n\
.space 1\n\
.space 1\n\
DAT_0802611c:\n\
     .word 0x040000D4\n\
DAT_08026120:\n\
     .word 0x8100C000\n\
DAT_08026124:\n\
     .word 0x81000200\n\
DAT_08026128:\n\
     .word 0x00001F54\n\
DAT_0802612c:\n\
     .word 0x04000050\n\
DAT_08026130:\n\
     .word 0x08546CBC\n\
DAT_08026134:\n\
     .word 0x08546ABC\n\
DAT_08026138:\n\
     .word 0x80000100\n\
DAT_0802613c:\n\
     .word 0x0000FFEF\n\
DAT_08026140:\n\
     .word 0x08540AA8\n\
DAT_08026144:\n\
     .word 0x0600A000\n\
DAT_08026148:\n\
     .word 0x0200F410\n\
LAB_0802614c:\n\
     ldr        r1,DAT_08026170\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xb\n\
     bl         fun_08026548\n\
LAB_0802615c:\n\
     ldr        r0,DAT_08026174\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,#0x4\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08026170:\n\
     .word 0x0200F410\n\
DAT_08026174:\n\
     .word 0x04000050\n\
    ");
}
__attribute__((naked)) void fun_08026178()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r4,DAT_080261b4\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802618e\n\
     bl         fun_08026248\n\
LAB_0802618e:\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080261a2\n\
     bl         fun_0800132c\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026236\n\
LAB_080261a2:\n\
     ldrh       r0,[r4,#0x2]\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x4\n\
     bhi        LAB_08026236\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,PTR_PTR_080261b8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_080261b4:\n\
     .word 0x0200F410\n\
PTR_PTR_080261b8:\n\
     .word       PTR_LAB_080261bc\n\
PTR_LAB_080261bc:\n\
     .word       LAB_080261d0\n\
     .word       LAB_080261e8\n\
     .word       LAB_08026200\n\
     .word       LAB_08026224\n\
     .word       LAB_08026236\n\
LAB_080261d0:\n\
     ldr        r1,DAT_080261dc\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,DAT_080261e0\n\
     ldr        r2,DAT_080261e4\n\
     b          LAB_0802620a\n\
DAT_080261dc:\n\
     .word 0x0200F410\n\
DAT_080261e0:\n\
     .word 0x020025E8\n\
DAT_080261e4:\n\
     .word 0x0000028D\n\
LAB_080261e8:\n\
     ldr        r1,DAT_080261f4\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,DAT_080261f8\n\
     ldr        r2,DAT_080261fc\n\
     b          LAB_0802620a\n\
DAT_080261f4:\n\
     .word 0x0200F410\n\
DAT_080261f8:\n\
     .word 0x020025E8\n\
DAT_080261fc:\n\
     .word 0x0000028F\n\
LAB_08026200:\n\
     ldr        r1,DAT_08026218\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,DAT_0802621c\n\
     ldr        r2,DAT_08026220\n\
LAB_0802620a:\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     b          LAB_08026236\n\
.space 1\n\
.space 1\n\
DAT_08026218:\n\
     .word 0x0200F410\n\
DAT_0802621c:\n\
     .word 0x020025E8\n\
DAT_08026220:\n\
     .word 0x00000291\n\
LAB_08026224:\n\
     ldr        r1,DAT_08026240\n\
     mov        r0,#0x5\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,DAT_08026244\n\
     mov        r0,#0x7\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x29\n\
     bl         fun_08001070\n\
LAB_08026236:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08026240:\n\
     .word 0x0200F410\n\
DAT_08026244:\n\
     .word 0x0200254C\n\
    ");
}
__attribute__((naked)) void fun_08026248()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r2,DAT_08026260\n\
     ldrh       r0,[r2,#0x6]\n\
     ldrh       r1,[r2,#0x8]\n\
     cmp        r0,r1\n\
     bcc        LAB_08026264\n\
     mov        r0,#0x0\n\
     b          LAB_08026374\n\
DAT_08026260:\n\
     .word 0x0200F410\n\
LAB_08026264:\n\
     ldr        r1,[r2,#0xc]\n\
     ldr        r0,[r2,#0x20]\n\
     add        r1,r1,r0\n\
     mov        r8,r1\n\
     ldr        r1,[r2,#0x10]\n\
     ldr        r0,[r2,#0x24]\n\
     add        r1,r1,r0\n\
     mov        r12,r1\n\
     ldrh       r3,[r2,#0x30]\n\
     mov        r10,r3\n\
     mov        r1,r10\n\
     lsl        r0,r1,#0x10\n\
     ldr        r7,DAT_080262e4\n\
     add        r0,r0,r7\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     lsl        r1,r1,#0x10\n\
     cmp        r1,#0x0\n\
     ble        LAB_08026332\n\
     mov        r9,r2\n\
LAB_0802628c:\n\
     mov        r0,r8\n\
     lsr        r4,r0,#0x10\n\
     add        r6,r4,#0x0\n\
     mov        r1,r12\n\
     lsr        r2,r1,#0x10\n\
     cmp        r2,#0x9f\n\
     bhi        LAB_08026316\n\
     lsl        r0,r2,#0x4\n\
     sub        r0,r0,r2\n\
     lsl        r3,r0,#0x4\n\
     add        r0,r4,r3\n\
     ldr        r5,DAT_080262e8\n\
     and        r0,r5\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     add        r1,r0,r1\n\
     ldr        r7,DAT_080262ec\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r1,r9\n\
     ldrh       r0,[r1,#0x32]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080262f0\n\
     add        r1,r2,#0x2\n\
     lsl        r0,r1,#0x4\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r4,r0\n\
     and        r0,r5\n\
     mov        r3,#0xc0\n\
     lsl        r3,r3,#0x13\n\
     add        r1,r0,r3\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     sub        r1,r2,#0x2\n\
     lsl        r0,r1,#0x4\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r4,r0\n\
     and        r0,r5\n\
     add        r1,r0,r3\n\
     b          LAB_0802630e\n\
DAT_080262e4:\n\
     .word 0xFFFF0000\n\
DAT_080262e8:\n\
     .word 0x0000FFFE\n\
DAT_080262ec:\n\
     .word 0x0600A000\n\
LAB_080262f0:\n\
     ldr        r7,DAT_08026384\n\
     add        r0,r3,r7\n\
     add        r0,r6,r0\n\
     and        r0,r5\n\
     mov        r2,#0xc0\n\
     lsl        r2,r2,#0x13\n\
     add        r1,r0,r2\n\
     ldr        r7,DAT_08026388\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r3,#0x1\n\
     add        r0,r6,r0\n\
     and        r0,r5\n\
     add        r1,r0,r2\n\
LAB_0802630e:\n\
     add        r2,r7,#0x0\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
LAB_08026316:\n\
     mov        r3,r9\n\
     ldr        r0,[r3,#0x28]\n\
     add        r8,r0\n\
     ldr        r0,[r3,#0x2c]\n\
     add        r12,r0\n\
     mov        r1,r10\n\
     lsl        r0,r1,#0x10\n\
     ldr        r7,DAT_0802638c\n\
     add        r0,r0,r7\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     lsl        r1,r1,#0x10\n\
     cmp        r1,#0x0\n\
     bgt        LAB_0802628c\n\
LAB_08026332:\n\
     ldr        r2,DAT_08026390\n\
     ldr        r0,[r2,#0xc]\n\
     ldr        r1,[r2,#0x14]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0xc]\n\
     ldr        r0,[r2,#0x10]\n\
     ldr        r1,[r2,#0x18]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0x10]\n\
     ldrh       r0,[r2,#0x1c]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x1c]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bge        LAB_08026364\n\
     ldrh       r0,[r2,#0x6]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x6]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r2,[r2,#0x8]\n\
     cmp        r0,r2\n\
     bcs        LAB_08026364\n\
     bl         fun_08026394\n\
LAB_08026364:\n\
     mov        r1,#0x0\n\
     ldr        r0,DAT_08026390\n\
     ldrh       r2,[r0,#0x6]\n\
     ldrh       r3,[r0,#0x8]\n\
     cmp        r2,r3\n\
     bcs        LAB_08026372\n\
     mov        r1,#0x1\n\
LAB_08026372:\n\
     add        r0,r1,#0x0\n\
LAB_08026374:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08026384:\n\
     .word 0x0000FFFF\n\
DAT_08026388:\n\
     .word 0x0600A000\n\
DAT_0802638c:\n\
     .word 0xFFFF0000\n\
DAT_08026390:\n\
     .word 0x0200F410\n\
    ");
}
__attribute__((naked)) void fun_08026394()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r2,DAT_08026410\n\
     ldr        r5,DAT_08026414\n\
     ldr        r7,DAT_08026418\n\
     ldrh       r0,[r7,#0x6]\n\
     ldrh       r3,[r7,#0x4]\n\
     add        r1,r0,r3\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r6,r0,r2\n\
     ldr        r4,DAT_0802641c\n\
     add        r0,r0,r4\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r5\n\
     ldrh       r1,[r1,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r2,r0,r2\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r0,r0,r4\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     ldrsh      r4,[r6,r0]\n\
     lsl        r0,r4,#0x10\n\
     str        r0,[r7,#0xc]\n\
     lsl        r3,r3,#0x10\n\
     asr        r0,r3,#0x10\n\
     str        r3,[r7,#0x10]\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     sub        r1,r1,r4\n\
     lsl        r6,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     sub        r2,r2,r0\n\
     lsl        r2,r2,#0x10\n\
     mov        r8,r2\n\
     add        r4,r6,#0x0\n\
     cmp        r6,#0x0\n\
     bge        LAB_080263f0\n\
.syntax unified\n\
    rsbs        r4,r6,#0\n\
.syntax divided\n\
LAB_080263f0:\n\
     mov        r5,r8\n\
     cmp        r5,#0x0\n\
     bge        LAB_080263f8\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
LAB_080263f8:\n\
     mov        r0,#0x0\n\
     cmp        r4,r5\n\
     ble        LAB_08026400\n\
     mov        r0,#0x1\n\
LAB_08026400:\n\
     strh       r0,[r7,#0x1e]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802643c\n\
     cmp        r6,#0x0\n\
     ble        LAB_08026420\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     b          LAB_08026422\n\
DAT_08026410:\n\
     .word 0x08540624\n\
DAT_08026414:\n\
     .word 0x08540704\n\
DAT_08026418:\n\
     .word 0x0200F410\n\
DAT_0802641c:\n\
     .word 0x08540694\n\
LAB_08026420:\n\
     ldr        r0,DAT_08026434\n\
LAB_08026422:\n\
     str        r0,[r7,#0x14]\n\
     mov        r0,r8\n\
     add        r1,r4,#0x0\n\
     bl         fun_080030f8\n\
     ldr        r1,DAT_08026438\n\
     str        r0,[r1,#0x18]\n\
     asr        r0,r4,#0x10\n\
     b          LAB_0802645a\n\
DAT_08026434:\n\
     .word 0xFFFF0000\n\
DAT_08026438:\n\
     .word 0x0200F410\n\
LAB_0802643c:\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_080030f8\n\
     str        r0,[r7,#0x14]\n\
     mov        r3,r8\n\
     cmp        r3,#0x0\n\
     ble        LAB_08026452\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     b          LAB_08026454\n\
LAB_08026452:\n\
     ldr        r0,DAT_080264e4\n\
LAB_08026454:\n\
     str        r0,[r7,#0x18]\n\
     ldr        r1,DAT_080264e8\n\
     asr        r0,r5,#0x10\n\
LAB_0802645a:\n\
     strh       r0,[r1,#0x1c]\n\
     add        r0,r4,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080030e4\n\
     add        r4,r0,#0x0\n\
     add        r0,r5,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_080030e4\n\
     add        r4,r4,r0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800310c\n\
     add        r4,r0,#0x0\n\
     add        r0,r6,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080030f8\n\
     add        r5,r0,#0x0\n\
     mov        r0,r8\n\
     add        r1,r4,#0x0\n\
     bl         fun_080030f8\n\
     mov        r4,#0xc0\n\
     lsl        r4,r4,#0xd\n\
     add        r1,r4,#0x0\n\
     bl         fun_080030e4\n\
     add        r6,r0,#0x0\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080030e4\n\
     add        r2,r0,#0x0\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
     mov        r8,r0\n\
     ldr        r7,DAT_080264e8\n\
.syntax unified\n\
    rsbs        r1,r6,#0\n\
.syntax divided\n\
     lsr        r0,r1,#0x1f\n\
     add        r0,r1,r0\n\
     asr        r0,r0,#0x1\n\
     str        r0,[r7,#0x20]\n\
     lsr        r0,r2,#0x1f\n\
     add        r0,r2,r0\n\
     asr        r0,r0,#0x1\n\
     str        r0,[r7,#0x24]\n\
     add        r4,r6,#0x0\n\
     cmp        r6,#0x0\n\
     bge        LAB_080264c0\n\
     add        r4,r1,#0x0\n\
LAB_080264c0:\n\
     mov        r5,r8\n\
     cmp        r5,#0x0\n\
     bge        LAB_080264c8\n\
     add        r5,r2,#0x0\n\
LAB_080264c8:\n\
     mov        r1,#0x0\n\
     ldrh       r0,[r7,#0x1e]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080264d2\n\
     mov        r1,#0x1\n\
LAB_080264d2:\n\
     strh       r1,[r7,#0x32]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08026508\n\
     cmp        r6,#0x0\n\
     ble        LAB_080264ec\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     b          LAB_080264ee\n\
.space 1\n\
.space 1\n\
DAT_080264e4:\n\
     .word 0xFFFF0000\n\
DAT_080264e8:\n\
     .word 0x0200F410\n\
LAB_080264ec:\n\
     ldr        r0,DAT_08026500\n\
LAB_080264ee:\n\
     str        r0,[r7,#0x28]\n\
     mov        r0,r8\n\
     add        r1,r4,#0x0\n\
     bl         fun_080030f8\n\
     ldr        r1,DAT_08026504\n\
     str        r0,[r1,#0x2c]\n\
     asr        r0,r4,#0x10\n\
     b          LAB_08026526\n\
DAT_08026500:\n\
     .word 0xFFFF0000\n\
DAT_08026504:\n\
     .word 0x0200F410\n\
LAB_08026508:\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_080030f8\n\
     str        r0,[r7,#0x28]\n\
     mov        r3,r8\n\
     cmp        r3,#0x0\n\
     ble        LAB_0802651e\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     b          LAB_08026520\n\
LAB_0802651e:\n\
     ldr        r0,DAT_08026534\n\
LAB_08026520:\n\
     str        r0,[r7,#0x2c]\n\
     ldr        r1,DAT_08026538\n\
     asr        r0,r5,#0x10\n\
LAB_08026526:\n\
     strh       r0,[r1,#0x30]\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08026534:\n\
     .word 0xFFFF0000\n\
DAT_08026538:\n\
     .word 0x0200F410\n\
    ");
}
__attribute__((naked)) void fun_0802653c()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08026540()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08026544()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08026548()
{
    asm("\n\
     push       {lr}\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldr        r2,DAT_08026564\n\
     mov        r3,#0x0\n\
     strh       r0,[r2,#0x4]\n\
     sub        r1,#0x1\n\
     strh       r1,[r2,#0x8]\n\
     strh       r3,[r2,#0x6]\n\
     bl         fun_08026394\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08026564:\n\
     .word 0x0200F410\n\
    ");
}
__attribute__((naked)) void fun_08026568()
{
    asm("\n\
     push       {r4,lr}\n\
     bl         fun_0803c1a4\n\
     ldr        r3,DAT_080265b4\n\
     ldr        r0,DAT_080265b8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,DAT_080265bc\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r4,[r2,#0x22]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r3,#0x4\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,DAT_080265c0\n\
     mov        r1,#0x85\n\
     bl         fun_0803c010\n\
     ldr        r4,DAT_080265c4\n\
     ldrb       r2,[r4,#0x0]\n\
     cmp        r2,#0x2\n\
     bhi        LAB_080265cc\n\
     ldr        r1,DAT_080265c8\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08026618\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r2,#0x1\n\
     b          LAB_08026600\n\
.space 1\n\
.space 1\n\
DAT_080265b4:\n\
     .4byte 0x08669620\n\
DAT_080265b8:\n\
     .4byte 0x020025B4\n\
DAT_080265bc:\n\
     .4byte 0x02002600\n\
DAT_080265c0:\n\
     .4byte 0x0865FD94\n\
DAT_080265c4:\n\
     .4byte 0x02009AD4\n\
DAT_080265c8:\n\
     .4byte 0x0200F444\n\
LAB_080265cc:\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080265da\n\
     bl         fun_080010d8\n\
LAB_080265da:\n\
     ldr        r2,DAT_0802660c\n\
     ldrh       r0,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08026618\n\
     ldr        r0,DAT_08026610\n\
     ldrb       r1,[r4,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026614\n\
     mov        r0,#0xc\n\
     strh       r0,[r2,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
LAB_08026600:\n\
     strb       r0,[r4,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     bl         fun_08026620\n\
     b          LAB_08026618\n\
.space 1\n\
.space 1\n\
DAT_0802660c:\n\
     .4byte 0x0200F448\n\
DAT_08026610:\n\
     .4byte 0x087878D4\n\
LAB_08026614:\n\
     bl         fun_080010d8\n\
LAB_08026618:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08026620()
{
    asm("\n\
     push       {r4,lr}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     mov        r0,#0x1\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_08026678\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_08026660\n\
     lsl        r4,r4,#0x2\n\
     add        r0,r4,r0\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,DAT_08026664\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_08026668\n\
     ldr        r0,DAT_0802666c\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08026670\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_08026674\n\
     b          LAB_080266aa\n\
DAT_08026660:\n\
     .4byte 0x087878D4\n\
DAT_08026664:\n\
     .4byte 0x0600A000\n\
DAT_08026668:\n\
     .4byte 0x040000D4\n\
DAT_0802666c:\n\
     .4byte 0x08787934\n\
DAT_08026670:\n\
     .4byte 0x80000100\n\
DAT_08026674:\n\
     .4byte 0x00001454\n\
LAB_08026678:\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_080266b4\n\
     lsl        r4,r4,#0x2\n\
     add        r0,r4,r0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r1,DAT_080266b8\n\
     ldr        r0,DAT_080266bc\n\
     add        r4,r4,r0\n\
     ldr        r0,[r4,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_080266c0\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_080266c4\n\
LAB_080266aa:\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080266b4:\n\
     .4byte 0x087878D4\n\
DAT_080266b8:\n\
     .4byte 0x040000D4\n\
DAT_080266bc:\n\
     .4byte 0x08787934\n\
DAT_080266c0:\n\
     .4byte 0x80000100\n\
DAT_080266c4:\n\
     .4byte 0x00001444\n\
    ");
}
__attribute__((naked)) void fun_080266c8()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x4\n\
     mov        r0,sp\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_08026730\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08026734\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     mov        r0,sp\n\
     strh       r4,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_08026738\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     ldr        r2,DAT_0802673c\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08026740\n\
     strb       r4,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_08026620\n\
     ldr        r1,DAT_08026744\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08026748\n\
     mov        r0,#0xc\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08026730:\n\
     .4byte 0x040000D4\n\
DAT_08026734:\n\
     .4byte 0x8100C000\n\
DAT_08026738:\n\
     .4byte 0x81000200\n\
DAT_0802673c:\n\
     .4byte 0x00001454\n\
DAT_08026740:\n\
     .4byte 0x02009AD4\n\
DAT_08026744:\n\
     .4byte 0x0200F444\n\
DAT_08026748:\n\
     .4byte 0x0200F448\n\
    ");
}
__attribute__((naked)) void fun_0802674c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08026758()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r10\n\
     mov        r5,r9\n\
     mov        r4,r8\n\
     push       {r4,r5,r6}\n\
     sub        sp,#0x4\n\
     bl         fun_08002e64\n\
     ldr        r2,DAT_080268f4\n\
     ldr        r0,DAT_080268f8\n\
     str        r0,[r2,#0x0]\n\
     mov        r3,#0x0\n\
     mov        r0,#0xf\n\
     strh       r0,[r2,#0x4]\n\
     mov        r1,#0x1\n\
     strh       r1,[r2,#0x6]\n\
     mov        r0,#0x10\n\
     strh       r0,[r2,#0x8]\n\
     ldr        r0,PTR_DAT_080268fc\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08026900\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     strh       r1,[r0,#0x4]\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,PTR_DAT_08026904\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08026908\n\
     ldr        r0,PTR_DAT_0802690c\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08026910\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08026914\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08026918\n\
     ldr        r0,DAT_0802691c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08026920\n\
     ldr        r0,DAT_08026924\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08026928\n\
     str        r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802692c\n\
     str        r3,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08026930\n\
     mov        r0,#0x3\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08026934\n\
     str        r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08026938\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802693c\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08026940\n\
     mov        r2,#0x0\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x48\n\
LAB_080267cc:\n\
     str        r2,[r0,#0x0]\n\
     sub        r0,#0x18\n\
     cmp        r0,r1\n\
     bge        LAB_080267cc\n\
     mov        r0,#0x0\n\
     mov        r10,r0\n\
     ldr        r2,PTR_DAT_08026944\n\
     ldr        r1,DAT_080268f8\n\
     str        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08026948\n\
     str        r0,[r2,#0x4]\n\
     str        r1,[r2,#0x8]\n\
     str        r1,[r2,#0xc]\n\
     ldr        r0,DAT_0802694c\n\
     str        r0,[r2,#0x10]\n\
     ldr        r0,DAT_08026950\n\
     str        r0,[r2,#0x14]\n\
     ldr        r2,DAT_08026954\n\
     mov        r0,#0x11\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08026958\n\
     mov        r3,#0x2f\n\
     str        r3,[r1,#0x0]\n\
     mov        r0,#0x59\n\
     mov        r8,r0\n\
     str        r0,[r2,#0x4]\n\
     mov        r0,#0x4d\n\
     str        r0,[r1,#0x4]\n\
     mov        r0,#0xa1\n\
     str        r0,[r2,#0x8]\n\
     str        r3,[r1,#0x8]\n\
     mov        r0,r8\n\
     str        r0,[r2,#0xc]\n\
     mov        r0,#0x12\n\
     str        r0,[r1,#0xc]\n\
     ldr        r5,DAT_0802695c\n\
     mov        r1,#0xb9\n\
     strh       r1,[r5,#0x0]\n\
     mov        r0,#0xd7\n\
     strh       r0,[r5,#0x2]\n\
     strh       r1,[r5,#0x4]\n\
     mov        r0,#0xaf\n\
     strh       r0,[r5,#0x6]\n\
     add        r0,#0x5f\n\
     strh       r0,[r5,#0x8]\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     bl         fun_08002bcc\n\
     mov        r0,sp\n\
     mov        r1,r10\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_08026960\n\
     str        r0,[r4,#0x0]\n\
     mov        r2,#0xc0\n\
     lsl        r2,r2,#0x13\n\
     mov        r9,r2\n\
     str        r2,[r4,#0x4]\n\
     ldr        r0,DAT_08026964\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r6,#0xa0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08026968\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0802696c\n\
     bl         fun_080045f0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     ldr        r2,DAT_08026970\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08026974\n\
     str        r0,[r4,#0x0]\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_08026978\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0802697c\n\
     mov        r1,r9\n\
     bl         fun_0803d070\n\
     ldr        r0,DAT_08026980\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_08026984\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x81\n\
     strh       r1,[r0,#0x4]\n\
     ldrh       r3,[r5,#0x8]\n\
     mov        r1,#0x0\n\
     add        r2,r3,#0x0\n\
     bl         fun_080040d4\n\
     ldr        r0,DAT_08026988\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802698c\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x69\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x79\n\
     strh       r1,[r0,#0x4]\n\
     mov        r2,r10\n\
     strh       r2,[r0,#0x6]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r1,r2,#0x0\n\
     ldrh       r2,[r0,#0x12]\n\
     orr        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r0,DAT_08026990\n\
     mov        r1,r10\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08026994\n\
     ldr        r2,DAT_08026998\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     bl         fun_08002fe4\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_080268f4:\n\
     .4byte 0x0200F500\n\
DAT_080268f8:\n\
     .4byte 0x087A6618\n\
PTR_DAT_080268fc:\n\
     .4byte       DAT_0200f4a0\n\
PTR_DAT_08026900:\n\
     .4byte       DAT_0200f590\n\
PTR_DAT_08026904:\n\
     .4byte       DAT_0200ecc0\n\
PTR_DAT_08026908:\n\
     .4byte       DAT_0200ece0\n\
PTR_DAT_0802690c:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_08026910:\n\
     .4byte       DAT_0200f4f4\n\
PTR_DAT_08026914:\n\
     .4byte       DAT_0200f460\n\
PTR_DAT_08026918:\n\
     .4byte       DAT_0200f48c\n\
DAT_0802691c:\n\
     .4byte 0x00001518\n\
DAT_08026920:\n\
     .4byte 0x0200F47C\n\
DAT_08026924:\n\
     .4byte 0x087A1004\n\
PTR_DAT_08026928:\n\
     .4byte       DAT_0200f598\n\
PTR_DAT_0802692c:\n\
     .4byte       DAT_0200f4fc\n\
PTR_DAT_08026930:\n\
     .4byte       DAT_0200f4c0\n\
PTR_DAT_08026934:\n\
     .4byte       DAT_0200f468\n\
PTR_DAT_08026938:\n\
     .4byte       DAT_0200f478\n\
PTR_DAT_0802693c:\n\
     .4byte       DAT_0200f46c\n\
PTR_DAT_08026940:\n\
     .4byte       DAT_0200f520\n\
PTR_DAT_08026944:\n\
     .4byte       DAT_0200f4d0\n\
DAT_08026948:\n\
     .4byte 0x087B1818\n\
DAT_0802694c:\n\
     .4byte 0x087A8818\n\
DAT_08026950:\n\
     .4byte 0x087A7818\n\
DAT_08026954:\n\
     .4byte 0x0200F4B0\n\
DAT_08026958:\n\
     .4byte 0x0200F490\n\
DAT_0802695c:\n\
     .4byte 0x0200F580\n\
DAT_08026960:\n\
     .4byte 0x040000D4\n\
DAT_08026964:\n\
     .4byte 0x8100C000\n\
DAT_08026968:\n\
     .4byte 0x81000200\n\
DAT_0802696c:\n\
     .4byte 0x087A7618\n\
DAT_08026970:\n\
     .4byte 0x00001F44\n\
DAT_08026974:\n\
     .4byte 0x087A6418\n\
DAT_08026978:\n\
     .4byte 0x80000100\n\
DAT_0802697c:\n\
     .4byte 0x087A1024\n\
DAT_08026980:\n\
     .4byte 0x0854CFB0\n\
DAT_08026984:\n\
     .4byte 0x0200F514\n\
DAT_08026988:\n\
     .4byte 0x0854CFC0\n\
DAT_0802698c:\n\
     .4byte 0x0200F458\n\
DAT_08026990:\n\
     .4byte 0x0200F4F8\n\
DAT_08026994:\n\
     .4byte 0x0000017F\n\
DAT_08026998:\n\
     .4byte 0x00007FFF\n\
    ");
}
