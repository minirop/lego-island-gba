__attribute__((naked)) void fun_0804086c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r5,r0,#0x0\n\
     mov        r10,r1\n\
     ldr        r7,[r1,#0x0]\n\
     cmp        r5,#0x3\n\
     bgt        LAB_08040882\n\
     b          LAB_08040994\n\
LAB_08040882:\n\
     sub        r5,#0x4\n\
     ldr        r2,DAT_080408ec\n\
     ldr        r3,[r2,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r5,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     mov        r9,r0\n\
     add        r1,r3,#0x0\n\
     add        r1,#0xc0\n\
     lsl        r0,r5,#0x3\n\
     sub        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r6,r1,r0\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x38]\n\
     ldr        r1,DAT_080408f0\n\
     and        r0,r1\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     orr        r0,r1\n\
     mov        r1,r9\n\
     str        r0,[r1,#0x38]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     add        r0,#0x30\n\
     mov        r1,#0x1\n\
     ldrsb      r1,[r7,r1]\n\
     ldrb       r0,[r0,#0x6]\n\
     add        r4,r0,r1\n\
     cmp        r4,#0x0\n\
     bgt        LAB_080408f4\n\
     mov        r4,#0x1\n\
     b          LAB_080408fa\n\
.space 1\n\
.space 1\n\
DAT_080408ec:\n\
     .word 0x02027048\n\
DAT_080408f0:\n\
     .word 0xFFFFE7FF\n\
LAB_080408f4:\n\
     cmp        r4,#0x7f\n\
     ble        LAB_080408fa\n\
     mov        r4,#0x7f\n\
LAB_080408fa:\n\
     mov        r2,#0x3\n\
     ldrsb      r2,[r7,r2]\n\
     mov        r8,r2\n\
     ldrb       r7,[r7,#0x2]\n\
     lsl        r7,r7,#0x18\n\
     asr        r7,r7,#0x18\n\
     sub        r1,r2,r7\n\
     cmp        r1,#0x0\n\
     bge        LAB_08040920\n\
     sub        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x7f\n\
     bl         __divsi3\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x10\n\
     mov        r2,r8\n\
     add        r1,r2,r0\n\
     b          LAB_08040930\n\
LAB_08040920:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x7f\n\
     bl         __divsi3\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x10\n\
     add        r1,r7,r0\n\
LAB_08040930:\n\
     mov        r0,r9\n\
     add        r0,#0x2c\n\
     mov        r3,#0x0\n\
     strb       r1,[r0,#0x5]\n\
     strb       r1,[r0,#0x4]\n\
     lsl        r1,r1,#0x8\n\
     mov        r4,#0x0\n\
     mov        r2,r9\n\
     strh       r1,[r2,#0x2c]\n\
     strh       r3,[r0,#0x2]\n\
     ldr        r2,DAT_0804097c\n\
     str        r2,[r6,#0x0]\n\
     mov        r1,#0x4\n\
     ldrsb      r1,[r0,r1]\n\
     add        r1,#0x10\n\
     add        r1,r1,r2\n\
     str        r1,[r6,#0xc]\n\
     str        r1,[r6,#0x4]\n\
     ldr        r0,[r2,#0x0]\n\
     lsr        r0,r0,#0x1\n\
     add        r0,r1,r0\n\
     str        r0,[r6,#0x8]\n\
     sub        r0,r0,r1\n\
     str        r0,[r6,#0x10]\n\
     strh       r3,[r6,#0x16]\n\
     strb       r4,[r6,#0x1a]\n\
     mov        r0,r9\n\
     add        r0,#0x3d\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040984\n\
     ldr        r1,DAT_08040980\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x87\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     b          LAB_08040986\n\
DAT_0804097c:\n\
     .word 0x087D5F00\n\
DAT_08040980:\n\
     .word 0x02027048\n\
LAB_08040984:\n\
     mov        r0,#0x0\n\
LAB_08040986:\n\
     strb       r0,[r6,#0x1b]\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803efb8\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803f680\n\
LAB_08040994:\n\
     mov        r1,r10\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080409ac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r5,r0,#0x0\n\
     mov        r8,r1\n\
     ldr        r4,[r1,#0x0]\n\
     cmp        r5,#0x3\n\
     beq        LAB_08040a5a\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x2]\n\
     sub        r7,r0,r1\n\
     cmp        r7,#0x0\n\
     beq        LAB_08040a5a\n\
     mov        r0,#0x1\n\
     ldrb       r2,[r4,#0x1]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_080409de\n\
     lsl        r0,r7,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803dfe8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     b          LAB_080409f8\n\
LAB_080409de:\n\
     asr        r0,r7,#0x8\n\
     cmp        r0,#0x0\n\
     bne        LAB_080409ec\n\
     add        r0,r4,#0x6\n\
     mov        r1,r8\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_08040a62\n\
LAB_080409ec:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_0803dfe8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x8\n\
LAB_080409f8:\n\
     cmp        r5,#0x3\n\
     bgt        LAB_08040a18\n\
     ldr        r1,DAT_08040a14\n\
     lsl        r0,r5,#0x3\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     add        r0,#0x20\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     lsl        r0,r5,#0x2\n\
     add        r0,#0x10\n\
     add        r3,r1,r0\n\
     b          LAB_08040a2c\n\
.space 1\n\
.space 1\n\
DAT_08040a14:\n\
     .word 0x02027048\n\
LAB_08040a18:\n\
     ldr        r0,DAT_08040a40\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r5,#0x6\n\
     ldr        r2,DAT_08040a44\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     add        r3,r2,#0x0\n\
     add        r3,#0x38\n\
LAB_08040a2c:\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r4,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040a48\n\
     asr        r0,r7,#0x1\n\
     ldrh       r4,[r4,#0x2]\n\
     add        r0,r4,r0\n\
     sub        r0,r6,r0\n\
     b          LAB_08040a50\n\
DAT_08040a40:\n\
     .word 0x02027048\n\
DAT_08040a44:\n\
     .word 0xFFFFFF00\n\
LAB_08040a48:\n\
     ldrh       r4,[r4,#0x2]\n\
     add        r0,r4,r6\n\
     ldrh       r1,[r2,#0x0]\n\
     sub        r0,r0,r1\n\
LAB_08040a50:\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r3,#0x0]\n\
LAB_08040a5a:\n\
     mov        r2,r8\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r2,#0x0]\n\
LAB_08040a62:\n\
     mov        r0,#0x1\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08040a70()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r3,r0,#0x0\n\
     mov        r12,r1\n\
     ldr        r7,[r1,#0x0]\n\
     cmp        r3,#0x3\n\
     beq        LAB_08040b5c\n\
     cmp        r3,#0x3\n\
     bgt        LAB_08040a9c\n\
     ldr        r2,DAT_08040a98\n\
     lsl        r0,r3,#0x3\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r0,#0x20\n\
     ldr        r1,[r2,#0x0]\n\
     add        r4,r1,r0\n\
     lsl        r0,r3,#0x2\n\
     add        r0,#0x10\n\
     add        r5,r1,r0\n\
     b          LAB_08040ab0\n\
.space 1\n\
.space 1\n\
DAT_08040a98:\n\
     .word 0x02027048\n\
LAB_08040a9c:\n\
     ldr        r2,DAT_08040b6c\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r3,#0x6\n\
     ldr        r4,DAT_08040b70\n\
     add        r0,r0,r4\n\
     ldr        r1,[r1,#0x0]\n\
     add        r4,r1,r0\n\
     add        r5,r4,#0x0\n\
     add        r5,#0x38\n\
LAB_08040ab0:\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040abe\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x16]\n\
LAB_08040abe:\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040acc\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x1e]\n\
LAB_08040acc:\n\
     mov        r0,#0x4\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040ada\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x6]\n\
LAB_08040ada:\n\
     mov        r0,#0x8\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040ae8\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xe]\n\
LAB_08040ae8:\n\
     mov        r0,#0x10\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040b2c\n\
     cmp        r3,#0x3\n\
     ble        LAB_08040b2c\n\
     sub        r3,#0x4\n\
     ldr        r0,[r2,#0x0]\n\
     add        r6,r0,#0x0\n\
     add        r6,#0xc8\n\
     ldr        r0,[r6,#0x0]\n\
     lsl        r2,r3,#0x6\n\
     add        r3,r2,r0\n\
     ldr        r1,[r3,#0x38]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x3\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040b2c\n\
     ldr        r0,DAT_08040b74\n\
     and        r1,r0\n\
     str        r1,[r3,#0x38]\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,r0,r2\n\
     add        r1,r0,#0x0\n\
     add        r1,#0x2c\n\
     ldrh       r0,[r0,#0x2c]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x18\n\
     mov        r2,#0x0\n\
     strb       r0,[r1,#0x5]\n\
     strb       r0,[r1,#0x4]\n\
     strh       r2,[r1,#0x2]\n\
LAB_08040b2c:\n\
     mov        r0,#0x40\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040b42\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,DAT_08040b78\n\
     and        r0,r1\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x12]\n\
LAB_08040b42:\n\
     mov        r0,#0x20\n\
     ldrb       r7,[r7,#0x1]\n\
     and        r0,r7\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040b54\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,DAT_08040b7c\n\
     and        r0,r1\n\
     str        r0,[r5,#0x0]\n\
LAB_08040b54:\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0xc0\n\
     orr        r0,r1\n\
     str        r0,[r5,#0x0]\n\
LAB_08040b5c:\n\
     mov        r4,r12\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08040b6c:\n\
     .word 0x02027048\n\
DAT_08040b70:\n\
     .word 0xFFFFFF00\n\
DAT_08040b74:\n\
     .word 0xFFFFFBFF\n\
DAT_08040b78:\n\
     .word 0xFFFFDFFF\n\
DAT_08040b7c:\n\
     .word 0xFFFFB7FF\n\
    ");
}
__attribute__((naked)) void fun_08040b80()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r4,[r5,#0x0]\n\
     cmp        r2,#0x3\n\
     beq        LAB_08040c08\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08040bac\n\
     ldr        r1,DAT_08040ba8\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,#0x20\n\
     ldr        r1,[r1,#0x0]\n\
     add        r3,r1,r0\n\
     lsl        r0,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r2,r1,r0\n\
     b          LAB_08040bc0\n\
.space 1\n\
.space 1\n\
DAT_08040ba8:\n\
     .word 0x02027048\n\
LAB_08040bac:\n\
     ldr        r0,DAT_08040c18\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r2,#0x6\n\
     ldr        r2,DAT_08040c1c\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r3,r1,r0\n\
     add        r2,r3,#0x0\n\
     add        r2,#0x38\n\
LAB_08040bc0:\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r4,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040bd0\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x14]\n\
     strh       r0,[r3,#0x16]\n\
LAB_08040bd0:\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r4,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040be0\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x1c]\n\
     strh       r0,[r3,#0x1e]\n\
LAB_08040be0:\n\
     mov        r0,#0x4\n\
     ldrb       r1,[r4,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040bf0\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x4]\n\
     strh       r0,[r3,#0x6]\n\
LAB_08040bf0:\n\
     mov        r0,#0x8\n\
     ldrb       r4,[r4,#0x1]\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040c00\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0xc]\n\
     strh       r0,[r3,#0xe]\n\
LAB_08040c00:\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
LAB_08040c08:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08040c18:\n\
     .word 0x02027048\n\
DAT_08040c1c:\n\
     .word 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_08040c20()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r5,[r4,#0x0]\n\
     cmp        r2,#0x3\n\
     beq        LAB_08040ca8\n\
     ldr        r0,DAT_08040c80\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r12\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldrb       r1,[r0,#0x5]\n\
     cmp        r1,#0xff\n\
     beq        LAB_08040ca8\n\
     mov        r0,#0x9c\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r12\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0xff\n\
     beq        LAB_08040ca8\n\
     lsl        r0,r0,#0x8\n\
     ldrh       r5,[r5,#0x2]\n\
     add        r0,r5,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08040c84\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,#0x20\n\
     add        r1,r3,r0\n\
     lsl        r0,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r2,r3,r0\n\
     b          LAB_08040c96\n\
.space 1\n\
.space 1\n\
DAT_08040c80:\n\
     .word 0x02027048\n\
LAB_08040c84:\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r2,DAT_08040cb8\n\
     add        r1,r1,r2\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r0,r1\n\
     add        r2,r1,#0x0\n\
     add        r2,#0x38\n\
LAB_08040c96:\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r3,[r1,#0x0]\n\
     sub        r0,r0,r3\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
LAB_08040ca8:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08040cb8:\n\
     .word 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_08040cbc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r5,r0,#0x0\n\
     mov        r8,r1\n\
     ldr        r4,[r1,#0x0]\n\
     ldr        r0,DAT_08040d3c\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,r2,r1\n\
     ldrh       r6,[r4,#0x2]\n\
     lsl        r0,r6,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r2,r0\n\
     mov        r0,#0x0\n\
     mov        r12,r0\n\
     ldrb       r0,[r1,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040dc0\n\
     ldrh       r7,[r1,#0x4]\n\
     add        r6,r1,#0x6\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r3,#0x88\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r0,r3\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     mov        r3,#0x4\n\
     ldrsh      r1,[r4,r3]\n\
     ldrb       r0,[r0,#0x7]\n\
     add        r4,r0,r1\n\
     cmp        r4,#0x0\n\
     blt        LAB_08040d58\n\
     cmp        r4,r7\n\
     bge        LAB_08040d58\n\
     cmp        r5,#0x2\n\
     bne        LAB_08040d40\n\
     lsl        r0,r4,#0x3\n\
     add        r0,r0,r6\n\
     ldr        r1,[r2,#0x1c]\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r2,r1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r2,r0\n\
     ldrb       r1,[r0,#0xb]\n\
     cmp        r1,#0x1\n\
     bne        LAB_08040d58\n\
     bl         fun_0803f550\n\
     b          LAB_08040d5e\n\
.space 1\n\
.space 1\n\
DAT_08040d3c:\n\
     .word 0x02027048\n\
LAB_08040d40:\n\
     cmp        r5,#0x3\n\
     ble        LAB_08040d58\n\
     sub        r0,r5,#0x4\n\
     lsl        r2,r4,#0x3\n\
     add        r2,r2,r6\n\
     ldrh       r1,[r2,#0x0]\n\
     ldrb       r3,[r2,#0x6]\n\
     mov        r2,#0x0\n\
     bl         fun_080404d0\n\
     mov        r2,#0x1\n\
     mov        r12,r2\n\
LAB_08040d58:\n\
     mov        r3,r12\n\
     cmp        r3,#0x0\n\
     beq        LAB_08040dc0\n\
LAB_08040d5e:\n\
     lsl        r0,r4,#0x3\n\
     add        r4,r0,r6\n\
     mov        r0,#0x4\n\
     ldrsb      r0,[r4,r0]\n\
     add        r1,r5,#0x0\n\
     bl         fun_0803e494\n\
     ldrh       r3,[r4,#0x2]\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r4,r6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040dc0\n\
     cmp        r5,#0x2\n\
     bne        LAB_08040d98\n\
     ldr        r0,DAT_08040d94\n\
     ldr        r2,[r0,#0x0]\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x6a\n\
     ldrh       r4,[r1,#0x0]\n\
     add        r0,r3,r4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x18]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x18]\n\
     b          LAB_08040dc0\n\
.space 1\n\
.space 1\n\
DAT_08040d94:\n\
     .word 0x02027048\n\
LAB_08040d98:\n\
     cmp        r5,#0x3\n\
     ble        LAB_08040dc0\n\
     ldrb       r0,[r4,#0x6]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040dc0\n\
     ldr        r0,DAT_08040dd4\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r5,#0x6\n\
     ldr        r6,DAT_08040dd8\n\
     add        r0,r0,r6\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,r1,r0\n\
     ldrh       r2,[r1,#0x2]\n\
     add        r0,r3,r2\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r2,#0x40\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_08040dc0:\n\
     mov        r3,r8\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08040dd4:\n\
     .word 0x02027048\n\
DAT_08040dd8:\n\
     .word 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_08040ddc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     add        r6,r0,#0x0\n\
     mov        r9,r1\n\
     ldr        r5,[r1,#0x0]\n\
     ldrb       r2,[r5,#0x5]\n\
     ldr        r0,DAT_08040e10\n\
     ldr        r1,[r0,#0x0]\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r2,r0\n\
     blt        LAB_08040e02\n\
     cmp        r2,#0xff\n\
     beq        LAB_08040e02\n\
     b          LAB_08040f92\n\
LAB_08040e02:\n\
     cmp        r6,#0x3\n\
     bgt        LAB_08040e14\n\
     lsl        r0,r6,#0x1\n\
     add        r0,#0xac\n\
     add        r4,r1,r0\n\
     b          LAB_08040e22\n\
.space 1\n\
.space 1\n\
DAT_08040e10:\n\
     .word 0x02027048\n\
LAB_08040e14:\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r6,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     add        r4,r1,#0x0\n\
     sub        r4,#0xcc\n\
LAB_08040e22:\n\
     ldrh       r0,[r4,#0x0]\n\
     mov        r8,r0\n\
     ldr        r1,DAT_08040e48\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     ldrb       r0,[r5,#0x5]\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08040e4c\n\
     ldrb       r1,[r5,#0x4]\n\
     ldrb       r2,[r5,#0x5]\n\
     mov        r0,#0x0\n\
     bl         fun_080427c0\n\
     mov        r7,#0x1\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040e68\n\
     ldrb       r7,[r5,#0x5]\n\
     b          LAB_08040e68\n\
DAT_08040e48:\n\
     .word 0x00007FFF\n\
LAB_08040e4c:\n\
     ldrb       r7,[r5,#0x5]\n\
     cmp        r7,#0xff\n\
     beq        LAB_08040e54\n\
     sub        r7,#0x4\n\
LAB_08040e54:\n\
     ldrb       r1,[r5,#0x4]\n\
     mov        r0,#0x0\n\
     mov        r2,#0xff\n\
     add        r3,r7,#0x0\n\
     bl         fun_08042738\n\
     add        r7,r0,#0x0\n\
     cmp        r7,#0x0\n\
     blt        LAB_08040e68\n\
     add        r7,#0x4\n\
LAB_08040e68:\n\
     mov        r1,r8\n\
     strh       r1,[r4,#0x0]\n\
     cmp        r7,#0x0\n\
     bge        LAB_08040e72\n\
     b          LAB_08040f92\n\
LAB_08040e72:\n\
     ldr        r0,DAT_08040ecc\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r3,#0x88\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r4,r3\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r1,[r5,#0x6]\n\
     lsl        r1,r1,#0x2\n\
     mov        r8,r1\n\
     add        r0,r2,r0\n\
     add        r0,r8\n\
     ldr        r0,[r0,#0x0]\n\
     add        r2,r2,r0\n\
     mov        r10,r2\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,r1\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,r1,r3\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r6,r1,r0\n\
     cmp        r7,#0x3\n\
     bgt        LAB_08040ee4\n\
     mov        r0,#0x1\n\
     ldrb       r4,[r5,#0x2]\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040ed0\n\
     mov        r1,#0x3\n\
     ldrsb      r1,[r5,r1]\n\
     ldrb       r0,[r6,#0x7]\n\
     add        r1,r0,r1\n\
     ldrb       r3,[r6,#0x6]\n\
     ldrb       r0,[r5,#0x4]\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r2,#0x40\n\
     bl         fun_08042524\n\
     b          LAB_08040f44\n\
.space 1\n\
.space 1\n\
DAT_08040ecc:\n\
     .word 0x02027048\n\
LAB_08040ed0:\n\
     mov        r1,#0x3\n\
     ldrsb      r1,[r5,r1]\n\
     ldrb       r4,[r6,#0x7]\n\
     add        r1,r4,r1\n\
     ldrb       r2,[r6,#0x6]\n\
     ldrb       r3,[r5,#0x4]\n\
     add        r0,r7,#0x0\n\
     bl         fun_080425bc\n\
     b          LAB_08040f44\n\
LAB_08040ee4:\n\
     sub        r7,#0x4\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r7,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     mov        r8,r0\n\
     mov        r1,#0x1\n\
     ldrb       r0,[r5,#0x2]\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08040f20\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r4,r7,#0x2\n\
     add        r0,r4,r0\n\
     str        r1,[r0,#0x0]\n\
     mov        r1,#0x3\n\
     ldrsb      r1,[r5,r1]\n\
     ldrb       r0,[r6,#0x7]\n\
     add        r1,r0,r1\n\
     ldrb       r3,[r6,#0x6]\n\
     ldrb       r0,[r5,#0x4]\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,r8\n\
     mov        r2,#0x40\n\
     bl         fun_080424b4\n\
     b          LAB_08040f34\n\
LAB_08040f20:\n\
     mov        r1,#0x3\n\
     ldrsb      r1,[r5,r1]\n\
     ldrb       r4,[r6,#0x7]\n\
     add        r1,r4,r1\n\
     ldrb       r2,[r6,#0x6]\n\
     ldrb       r3,[r5,#0x4]\n\
     mov        r0,r8\n\
     bl         fun_080427e8\n\
     lsl        r4,r7,#0x2\n\
LAB_08040f34:\n\
     ldr        r0,DAT_08040fac\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r4,r0\n\
     mov        r1,r8\n\
     str        r1,[r0,#0x0]\n\
     add        r7,#0x4\n\
LAB_08040f44:\n\
     ldr        r3,DAT_08040fac\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r4,#0x8c\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r0,r4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r0,r7,#0x1\n\
     add        r0,r0,r7\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,r1,r0\n\
     mov        r2,#0x0\n\
     strb       r2,[r1,#0x4]\n\
     ldrb       r0,[r6,#0x5]\n\
     strb       r0,[r1,#0x5]\n\
     ldrb       r0,[r6,#0x6]\n\
     strb       r0,[r1,#0x6]\n\
     ldrb       r6,[r6,#0x7]\n\
     ldrb       r4,[r5,#0x3]\n\
     add        r0,r6,r4\n\
     strb       r0,[r1,#0x7]\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r1,r7,#0x4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     strh       r2,[r0,#0x8]\n\
     strh       r2,[r0,#0xa]\n\
     str        r2,[r0,#0x4]\n\
     mov        r1,r10\n\
     add        r1,#0x4\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x6]\n\
     strh       r1,[r0,#0xc]\n\
LAB_08040f92:\n\
     mov        r4,r9\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x8\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08040fac:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_08040fb0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r4,[r5,#0x0]\n\
     cmp        r2,#0x3\n\
     ble        LAB_0804100c\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0804100c\n\
     sub        r2,#0x4\n\
     ldr        r0,DAT_08040fe4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r3,r0,r1\n\
     add        r1,r3,#0x0\n\
     add        r2,r3,#0x0\n\
     add        r2,#0x3c\n\
     ldrb       r0,[r2,#0x0]\n\
     cmp        r0,#0xff\n\
     beq        LAB_08040fe8\n\
     ldrb       r2,[r2,#0x0]\n\
     lsl        r0,r2,#0x8\n\
     b          LAB_08040fee\n\
DAT_08040fe4:\n\
     .word 0x02027048\n\
LAB_08040fe8:\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x7\n\
     add        r0,r2,#0x0\n\
LAB_08040fee:\n\
     strh       r0,[r1,#0xa]\n\
     ldrh       r0,[r4,#0x4]\n\
     strh       r0,[r1,#0x12]\n\
     ldrb       r0,[r4,#0x2]\n\
     strb       r0,[r1,#0x1a]\n\
     ldrb       r0,[r4,#0x3]\n\
     strb       r0,[r1,#0x1b]\n\
     ldrb       r0,[r4,#0x1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0804100c\n\
     ldr        r0,[r3,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x6\n\
     orr        r0,r1\n\
     str        r0,[r3,#0x38]\n\
LAB_0804100c:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0804101c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r4,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     ldr        r3,[r6,#0x0]\n\
     ldr        r2,DAT_0804104c\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r7,#0x88\n\
     lsl        r7,r7,#0x1\n\
     add        r1,r1,r7\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r5,r1,r0\n\
     ldrb       r0,[r3,#0x1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041050\n\
     ldrh       r1,[r3,#0x4]\n\
     ldrb       r7,[r5,#0x6]\n\
     b          LAB_08041054\n\
DAT_0804104c:\n\
     .word 0x02027048\n\
LAB_08041050:\n\
     ldrh       r1,[r3,#0x4]\n\
     ldrb       r7,[r5,#0x8]\n\
LAB_08041054:\n\
     add        r0,r1,#0x0\n\
     mul        r0,r7\n\
     asr        r0,r0,#0x8\n\
     mov        r1,#0x2\n\
     ldrsb      r1,[r3,r1]\n\
     add        r3,r0,r1\n\
     cmp        r3,#0x0\n\
     bge        LAB_08041068\n\
     mov        r3,#0x0\n\
     b          LAB_0804106e\n\
LAB_08041068:\n\
     cmp        r3,#0x7f\n\
     ble        LAB_0804106e\n\
     mov        r3,#0x7f\n\
LAB_0804106e:\n\
     strb       r3,[r5,#0x6]\n\
     cmp        r4,#0x3\n\
     bgt        LAB_08041090\n\
     lsl        r0,r4,#0x3\n\
     add        r0,#0x8c\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,r1,r0\n\
     strb       r3,[r1,#0x7]\n\
     ldr        r1,[r2,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_080410be\n\
LAB_08041090:\n\
     sub        r4,#0x4\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r4,r4,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r4\n\
     add        r1,r0,#0x0\n\
     add        r1,#0x24\n\
     lsl        r3,r3,#0x1\n\
     strb       r3,[r1,#0x7]\n\
     lsl        r0,r3,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080410ae\n\
     add        r0,r3,#0x1\n\
     strb       r0,[r1,#0x7]\n\
LAB_080410ae:\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,r4,r1\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r2,#0x80\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_080410be:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r6,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080410cc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r3,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     ldr        r5,[r6,#0x0]\n\
     cmp        r3,#0x3\n\
     ble        LAB_08041150\n\
     sub        r3,#0x4\n\
     ldr        r2,DAT_08041114\n\
     ldr        r4,[r2,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r3,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x38]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x5\n\
     and        r1,r0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x5\n\
     add        r7,r2,#0x0\n\
     cmp        r1,r0\n\
     bne        LAB_08041150\n\
     ldrb       r0,[r5,#0x1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041118\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x4\n\
     b          LAB_0804112a\n\
DAT_08041114:\n\
     .word 0x02027048\n\
LAB_08041118:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x7\n\
LAB_0804112a:\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r1,r3,#0x6\n\
     ldr        r2,[r0,#0x0]\n\
     add        r2,r2,r1\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x2c\n\
     ldrh       r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x2]\n\
     ldrb       r0,[r5,#0x6]\n\
     strb       r0,[r1,#0x7]\n\
     ldrb       r0,[r5,#0x6]\n\
     strb       r0,[r1,#0x6]\n\
     ldrh       r0,[r5,#0x2]\n\
     strh       r0,[r2,#0x2c]\n\
LAB_08041150:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0x8\n\
     str        r0,[r6,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041160()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r7,[r5,#0x0]\n\
     cmp        r4,#0x3\n\
     ble        LAB_080411e6\n\
     sub        r4,#0x4\n\
     ldr        r0,DAT_080411f4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     add        r0,#0xc8\n\
     lsl        r1,r4,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r2,r0,r1\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080411e6\n\
     add        r6,r2,#0x0\n\
     add        r6,#0x2c\n\
     mov        r1,r12\n\
     add        r1,#0xc0\n\
     lsl        r0,r4,#0x3\n\
     sub        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r3,r1,r0\n\
     mov        r0,r12\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r12\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x1c]\n\
     ldrh       r7,[r7,#0x2]\n\
     lsl        r1,r7,#0x2\n\
     add        r0,r2,r0\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r1,r2,r0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x7f\n\
     bls        LAB_080411e6\n\
     str        r1,[r3,#0x0]\n\
     mov        r0,#0x4\n\
     ldrsb      r0,[r6,r0]\n\
     add        r0,#0x10\n\
     add        r0,r1,r0\n\
     str        r0,[r3,#0xc]\n\
     str        r0,[r3,#0x4]\n\
     add        r0,#0x40\n\
     str        r0,[r3,#0x8]\n\
     mov        r0,#0x40\n\
     str        r0,[r3,#0x10]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803efb8\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803f680\n\
LAB_080411e6:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080411f4:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_080411f8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r5,#0x0\n\
     b          LAB_0804123c\n\
LAB_080411fe:\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r5,#0x4\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     add        r4,r1,#0x0\n\
     add        r6,r5,#0x1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0804123a\n\
     ldr        r7,DAT_08041250\n\
LAB_08041218:\n\
     ldr        r0,DAT_08041254\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,r4,r1\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r7\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         _call_via_r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041218\n\
LAB_0804123a:\n\
     add        r5,r6,#0x0\n\
LAB_0804123c:\n\
     ldr        r1,DAT_08041254\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r5,r0\n\
     blt        LAB_080411fe\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08041250:\n\
     .word 0x087D6190\n\
DAT_08041254:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_08041258()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r6,[r5,#0x0]\n\
     bl         fun_0803f510\n\
     cmp        r4,#0x3\n\
     ble        LAB_08041296\n\
     ldr        r0,DAT_080412a4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x87\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r1,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041296\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc0\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x3\n\
     sub        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     add        r1,r0,#0x0\n\
     sub        r1,#0x70\n\
     mov        r2,#0x0\n\
     ldrb       r0,[r6,#0x1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041294\n\
     mov        r2,#0x1\n\
LAB_08041294:\n\
     strb       r2,[r1,#0x1b]\n\
LAB_08041296:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080412a4:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_080412a8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r6,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r4,[r5,#0x0]\n\
     ldrb       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080412c0\n\
     ldrb       r0,[r4,#0x1]\n\
     add        r1,r6,#0x0\n\
     bl         fun_0803e3e4\n\
     b          LAB_080412ec\n\
LAB_080412c0:\n\
     ldrb       r1,[r4,#0x2]\n\
     lsl        r0,r1,#0x1\n\
     bl         fun_0803dfe8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrb       r1,[r4,#0x2]\n\
     sub        r0,r0,r1\n\
     ldrb       r4,[r4,#0x1]\n\
     add        r0,r4,r0\n\
     cmp        r0,#0x0\n\
     bge        LAB_080412dc\n\
     mov        r0,#0x0\n\
     b          LAB_080412e2\n\
LAB_080412dc:\n\
     cmp        r0,#0x7f\n\
     ble        LAB_080412e2\n\
     mov        r0,#0x7f\n\
LAB_080412e2:\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r6,#0x0\n\
     bl         fun_0803e3e4\n\
LAB_080412ec:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080412fc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r1,r3]\n\
     ldrb       r1,[r1,#0x1]\n\
     bl         fun_0803e64c\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0804131c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r3,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r2,[r4,#0x0]\n\
     ldrb       r0,[r2,#0x1]\n\
     mov        r5,#0x2\n\
     ldrsh      r1,[r2,r5]\n\
     mov        r5,#0x4\n\
     ldrsh      r2,[r2,r5]\n\
     bl         fun_0803f5bc\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041340()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r3,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r2,#0x1]\n\
     and        r0,r1\n\
     mov        r5,#0x2\n\
     ldrsh      r1,[r2,r5]\n\
     ldrh       r2,[r2,#0x4]\n\
     bl         fun_0803e754\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041368()
{
    asm("\n\
     ldr        r2,[r1,#0x0]\n\
     ldrh       r3,[r2,#0x4]\n\
     lsl        r0,r3,#0x10\n\
     ldrh       r3,[r2,#0x2]\n\
     orr        r0,r3\n\
     add        r2,r2,r0\n\
     str        r2,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0804137c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r5,[r4,#0x0]\n\
     ldr        r0,DAT_080413b4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[r0,#0x4]\n\
     ldrh       r6,[r5,#0x2]\n\
     lsl        r3,r6,#0x2\n\
     add        r1,r0,r1\n\
     add        r3,r3,r1\n\
     ldr        r1,[r3,#0x0]\n\
     add        r0,r0,r1\n\
     ldrb       r1,[r5,#0x1]\n\
     bl         fun_0803eb18\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_080413b4:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_080413b8()
{
    asm("\n\
     ldr        r2,[r1,#0x0]\n\
     ldrh       r3,[r2,#0x4]\n\
     lsl        r0,r3,#0x10\n\
     ldrh       r3,[r2,#0x2]\n\
     orr        r0,r3\n\
     add        r0,r2,r0\n\
     str        r0,[r1,#0x4]\n\
     add        r2,#0x6\n\
     str        r2,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080413d0()
{
    asm("\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080413e0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r1,[r4,#0x0]\n\
     ldrb       r0,[r1,#0x1]\n\
     ldrh       r1,[r1,#0x2]\n\
     bl         fun_0803eb9c\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041400()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r1,#0x0\n\
     ldr        r3,[r4,#0x0]\n\
     ldr        r1,DAT_08041434\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     sub        r2,#0x8\n\
     add        r1,r1,r2\n\
     ldr        r2,[r1,#0x0]\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r2\n\
     ldrb       r1,[r1,#0x7]\n\
     ldrb       r0,[r3,#0x1]\n\
     cmp        r1,r0\n\
     bcc        LAB_08041438\n\
     ldrh       r1,[r3,#0x4]\n\
     lsl        r0,r1,#0x10\n\
     ldrh       r2,[r3,#0x2]\n\
     orr        r0,r2\n\
     add        r0,r3,r0\n\
     b          LAB_0804143a\n\
DAT_08041434:\n\
     .word 0x02027048\n\
LAB_08041438:\n\
     add        r0,r3,#0x6\n\
LAB_0804143a:\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041444()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r1,#0x0\n\
     ldr        r3,[r4,#0x0]\n\
     ldr        r1,DAT_08041478\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     sub        r2,#0x8\n\
     add        r1,r1,r2\n\
     ldr        r2,[r1,#0x0]\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r2\n\
     ldrb       r1,[r1,#0x8]\n\
     ldrb       r0,[r3,#0x1]\n\
     cmp        r1,r0\n\
     bcc        LAB_0804147c\n\
     ldrh       r1,[r3,#0x4]\n\
     lsl        r0,r1,#0x10\n\
     ldrh       r2,[r3,#0x2]\n\
     orr        r0,r2\n\
     add        r0,r3,r0\n\
     b          LAB_0804147e\n\
DAT_08041478:\n\
     .word 0x02027048\n\
LAB_0804147c:\n\
     add        r0,r3,#0x6\n\
LAB_0804147e:\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041488()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r1,#0x0\n\
     ldr        r4,[r5,#0x0]\n\
     mov        r0,#0xff\n\
     bl         fun_0803dfe8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrb       r1,[r4,#0x1]\n\
     cmp        r0,r1\n\
     bcc        LAB_080414ac\n\
     ldrh       r0,[r4,#0x4]\n\
     lsl        r1,r0,#0x10\n\
     ldrh       r4,[r4,#0x2]\n\
     orr        r1,r4\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,r0,r1\n\
     b          LAB_080414b0\n\
LAB_080414ac:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x6\n\
LAB_080414b0:\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080414bc()
{
    asm("\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080414c8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r2,#0x1\n\
     bgt        LAB_080414fe\n\
     ldrb       r0,[r0,#0x1]\n\
     cmp        r0,#0xff\n\
     bne        LAB_080414f8\n\
     ldr        r0,DAT_0804150c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x6]\n\
     lsr        r0,r0,#0x5\n\
LAB_080414f8:\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803f490\n\
LAB_080414fe:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0804150c:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_08041510()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r1,#0x0\n\
     ldr        r1,[r4,#0x0]\n\
     cmp        r0,#0x3\n\
     bne        LAB_08041520\n\
     ldrb       r0,[r1,#0x1]\n\
     bl         fun_0803f4a4\n\
LAB_08041520:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041530()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r0,[r4,#0x0]\n\
     ldrb       r1,[r0,#0x1]\n\
     ldr        r0,DAT_08041550\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r1,r0\n\
     bge        LAB_08041554\n\
     add        r0,r1,#0x0\n\
     bl         fun_0803f610\n\
     b          LAB_0804155e\n\
.space 1\n\
.space 1\n\
DAT_08041550:\n\
     .word 0x02027048\n\
LAB_08041554:\n\
     cmp        r1,#0xff\n\
     bne        LAB_0804155e\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803f610\n\
LAB_0804155e:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0804156c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r1,#0x0\n\
     ldr        r6,[r5,#0x0]\n\
     mov        r4,#0x0\n\
     b          LAB_0804159a\n\
LAB_08041576:\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x4\n\
     add        r1,r0,r1\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041598\n\
     ldrh       r1,[r1,#0xc]\n\
     ldrh       r0,[r6,#0x2]\n\
     cmp        r1,r0\n\
     bne        LAB_08041598\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803f610\n\
LAB_08041598:\n\
     add        r4,#0x1\n\
LAB_0804159a:\n\
     ldr        r1,DAT_080415b4\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     blt        LAB_08041576\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080415b4:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_080415b8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r2,#0x1\n\
     ble        LAB_080415c8\n\
     cmp        r2,#0x3\n\
     bne        LAB_080415d0\n\
LAB_080415c8:\n\
     ldrb       r0,[r0,#0x1]\n\
     add        r1,r2,#0x0\n\
     bl         fun_0803f4b0\n\
LAB_080415d0:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080415e0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     cmp        r4,#0x1\n\
     ble        LAB_080415ee\n\
     cmp        r4,#0x3\n\
     bne        LAB_0804160a\n\
LAB_080415ee:\n\
     mov        r0,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0803f4b0\n\
     ldr        r0,DAT_08041618\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0xa0\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
LAB_0804160a:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08041618:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0804161c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r3,r1,#0x0\n\
     ldr        r4,[r3,#0x0]\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08041638\n\
     ldr        r0,DAT_08041634\n\
     lsl        r1,r2,#0x1\n\
     add        r1,#0xac\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r0,r1\n\
     b          LAB_08041646\n\
DAT_08041634:\n\
     .word 0x02027048\n\
LAB_08041638:\n\
     ldr        r0,DAT_08041664\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     sub        r1,#0xcc\n\
LAB_08041646:\n\
     mov        r0,#0xff\n\
     lsl        r0,r0,#0x8\n\
     ldrh       r2,[r1,#0x0]\n\
     and        r0,r2\n\
     ldrb       r4,[r4,#0x1]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08041664:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_08041668()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r5,[r4,#0x0]\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08041684\n\
     ldr        r0,DAT_08041680\n\
     lsl        r1,r2,#0x1\n\
     add        r1,#0xac\n\
     ldr        r0,[r0,#0x0]\n\
     add        r3,r0,r1\n\
     b          LAB_08041694\n\
DAT_08041680:\n\
     .word 0x02027048\n\
LAB_08041684:\n\
     ldr        r0,DAT_080416ac\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     add        r3,r1,#0x0\n\
     sub        r3,#0xcc\n\
LAB_08041694:\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     and        r2,r1\n\
     mov        r0,#0x1\n\
     ldrsb      r0,[r5,r0]\n\
     orr        r2,r0\n\
     cmp        r2,#0x0\n\
     bge        LAB_080416b0\n\
     mov        r2,#0x0\n\
     b          LAB_080416b6\n\
.space 1\n\
.space 1\n\
DAT_080416ac:\n\
     .word 0x02027048\n\
LAB_080416b0:\n\
     cmp        r2,#0xff\n\
     ble        LAB_080416b6\n\
     mov        r2,#0xff\n\
LAB_080416b6:\n\
     mov        r0,#0xff\n\
     lsl        r0,r0,#0x8\n\
     and        r0,r1\n\
     lsl        r1,r2,#0x18\n\
     lsr        r1,r1,#0x18\n\
     orr        r1,r0\n\
     strh       r1,[r3,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080416d4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     add        r2,r1,#0x0\n\
     ldr        r4,[r2,#0x0]\n\
     cmp        r3,#0x3\n\
     ble        LAB_080416f4\n\
     ldr        r0,DAT_08041704\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r3,DAT_08041708\n\
     add        r1,r0,r3\n\
     ldrh       r0,[r4,#0x2]\n\
     strh       r0,[r1,#0x36]\n\
LAB_080416f4:\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08041704:\n\
     .word 0x02027048\n\
DAT_08041708:\n\
     .word 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0804170c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     add        r3,r1,#0x0\n\
     ldr        r4,[r3,#0x0]\n\
     cmp        r2,#0x3\n\
     ble        LAB_0804174e\n\
     ldr        r0,DAT_0804173c\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r2,#0x6\n\
     ldr        r2,DAT_08041740\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,r1,r0\n\
     add        r2,r1,#0x0\n\
     add        r2,#0x36\n\
     mov        r5,#0x2\n\
     ldrsh      r0,[r4,r5]\n\
     ldrh       r1,[r1,#0x36]\n\
     add        r0,r1,r0\n\
     cmp        r0,#0x0\n\
     bge        LAB_08041744\n\
     mov        r0,#0x0\n\
     b          LAB_0804174c\n\
DAT_0804173c:\n\
     .word 0x02027048\n\
DAT_08041740:\n\
     .word 0xFFFFFF00\n\
LAB_08041744:\n\
     ldr        r1,DAT_0804175c\n\
     cmp        r0,r1\n\
     ble        LAB_0804174c\n\
     add        r0,r1,#0x0\n\
LAB_0804174c:\n\
     strh       r0,[r2,#0x0]\n\
LAB_0804174e:\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0804175c:\n\
     .word 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_08041760()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r1,#0x0\n\
     ldr        r3,[r4,#0x0]\n\
     ldrb       r0,[r3,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041780\n\
     ldr        r0,DAT_0804177c\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     ldrb       r3,[r3,#0x3]\n\
     lsl        r1,r3\n\
     ldr        r0,[r2,#0x8]\n\
     orr        r0,r1\n\
     b          LAB_0804178e\n\
DAT_0804177c:\n\
     .word 0x02027048\n\
LAB_08041780:\n\
     ldr        r0,DAT_080417a0\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     ldrb       r3,[r3,#0x3]\n\
     lsl        r1,r3\n\
     ldr        r0,[r2,#0x8]\n\
     bic        r0,r1\n\
LAB_0804178e:\n\
     str        r0,[r2,#0x8]\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_080417a0:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_080417a4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r1,#0x0\n\
     ldr        r2,[r3,#0x0]\n\
     ldr        r0,DAT_080417c8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     ldrb       r4,[r2,#0x1]\n\
     lsl        r1,r4\n\
     ldr        r0,[r0,#0x8]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080417cc\n\
     ldrh       r1,[r2,#0x4]\n\
     lsl        r0,r1,#0x10\n\
     ldrh       r4,[r2,#0x2]\n\
     orr        r0,r4\n\
     add        r0,r2,r0\n\
     b          LAB_080417ce\n\
DAT_080417c8:\n\
     .word 0x02027048\n\
LAB_080417cc:\n\
     add        r0,r2,#0x6\n\
LAB_080417ce:\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080417d8()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     add        r3,r1,#0x0\n\
     ldr        r4,[r3,#0x0]\n\
     cmp        r2,#0x3\n\
     ble        LAB_08041812\n\
     ldr        r0,DAT_08041820\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r5,#0x87\n\
     lsl        r5,r5,#0x1\n\
     add        r0,r1,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041812\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc0\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x3\n\
     sub        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     add        r1,r0,#0x0\n\
     sub        r1,#0x70\n\
     mov        r2,#0x0\n\
     ldrb       r0,[r4,#0x1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041810\n\
     mov        r2,#0x1\n\
LAB_08041810:\n\
     strb       r2,[r1,#0x1b]\n\
LAB_08041812:\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08041820:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_08041824()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08041840\n\
     ldr        r0,DAT_0804183c\n\
     lsl        r1,r2,#0x2\n\
     add        r1,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r0,r1\n\
     b          LAB_0804184e\n\
.space 1\n\
.space 1\n\
DAT_0804183c:\n\
     .word 0x02027048\n\
LAB_08041840:\n\
     ldr        r0,DAT_08041880\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     sub        r1,#0xc8\n\
LAB_0804184e:\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041872\n\
     mov        r2,#0x10\n\
     orr        r2,r3\n\
     str        r2,[r1,#0x0]\n\
     mov        r3,#0x6\n\
     add        r0,r2,#0x0\n\
     and        r0,r3\n\
     cmp        r0,#0x2\n\
     bhi        LAB_08041872\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r2,r0\n\
     orr        r2,r3\n\
     str        r2,[r1,#0x0]\n\
LAB_08041872:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08041880:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_08041884()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r1,r3]\n\
     ldrh       r1,[r1,#0x4]\n\
     bl         fun_0803e818\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080418a4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r2,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r6,[r5,#0x0]\n\
     cmp        r2,#0x3\n\
     ble        LAB_08041904\n\
     ldr        r0,DAT_08041914\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08041918\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x5\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041904\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc0\n\
     lsl        r1,r2,#0x3\n\
     sub        r1,r1,r2\n\
     lsl        r1,r1,#0x2\n\
     sub        r1,#0x70\n\
     ldr        r0,[r0,#0x0]\n\
     add        r2,r0,r1\n\
     ldr        r3,[r2,#0xc]\n\
     cmp        r3,#0x0\n\
     beq        LAB_08041904\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x10\n\
     add        r4,r1,r0\n\
     mov        r0,#0x2\n\
     ldrsh      r1,[r6,r0]\n\
     ldr        r0,[r2,#0x10]\n\
     add        r1,r0,r1\n\
     cmp        r1,#0x0\n\
     bge        LAB_080418fa\n\
     mov        r1,#0x0\n\
LAB_080418fa:\n\
     add        r0,r3,r1\n\
     cmp        r0,r4\n\
     bls        LAB_08041902\n\
     sub        r1,r4,r3\n\
LAB_08041902:\n\
     str        r1,[r2,#0x10]\n\
LAB_08041904:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08041914:\n\
     .word 0x02027048\n\
DAT_08041918:\n\
     .word 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0804191c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     add        r2,r1,#0x0\n\
     ldr        r4,[r2,#0x0]\n\
     cmp        r3,#0x3\n\
     ble        LAB_0804193a\n\
     ldr        r0,DAT_08041948\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x6\n\
     add        r0,r0,r1\n\
     ldrb       r1,[r4,#0x1]\n\
     sub        r0,#0xc1\n\
     strb       r1,[r0,#0x0]\n\
LAB_0804193a:\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08041948:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0804194c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r2,r0,#0x0\n\
     add        r7,r1,#0x0\n\
     ldr        r4,[r7,#0x0]\n\
     cmp        r2,#0x3\n\
     ble        LAB_080419ce\n\
     ldr        r0,DAT_080419b0\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080419b4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x5\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080419ce\n\
     ldrh       r0,[r4,#0x4]\n\
     lsl        r5,r0,#0x10\n\
     ldrh       r4,[r4,#0x2]\n\
     orr        r5,r4\n\
     add        r1,r3,#0x0\n\
     add        r1,#0xc0\n\
     lsl        r0,r2,#0x3\n\
     sub        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     sub        r0,#0x70\n\
     ldr        r1,[r1,#0x0]\n\
     add        r4,r1,r0\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x10\n\
     add        r6,r1,r0\n\
     bl         fun_0803e038\n\
     ldr        r1,[r4,#0xc]\n\
     cmp        r1,#0x0\n\
     bne        LAB_080419b8\n\
     ldr        r0,[r4,#0x4]\n\
     add        r1,r0,r5\n\
     cmp        r1,r6\n\
     bls        LAB_080419aa\n\
     sub        r5,r6,r0\n\
LAB_080419aa:\n\
     add        r1,r0,#0x0\n\
     b          LAB_080419c2\n\
.space 1\n\
.space 1\n\
DAT_080419b0:\n\
     .word 0x02027048\n\
DAT_080419b4:\n\
     .word 0xFFFFFF00\n\
LAB_080419b8:\n\
     add        r0,r1,r5\n\
     cmp        r0,r6\n\
     bls        LAB_080419c0\n\
     sub        r5,r6,r1\n\
LAB_080419c0:\n\
     ldr        r0,[r4,#0x4]\n\
LAB_080419c2:\n\
     add        r0,r0,r5\n\
     str        r0,[r4,#0x8]\n\
     str        r5,[r4,#0x10]\n\
     str        r1,[r4,#0xc]\n\
     bl         fun_0803e018\n\
LAB_080419ce:\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r7,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080419dc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r0,DAT_08041a40\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,r1\n\
     ldr        r7,[r0,#0x0]\n\
     mov        r2,#0xa5\n\
     lsl        r2,r2,#0x1\n\
     add        r6,r7,r2\n\
     ldrh       r0,[r6,#0x0]\n\
     lsl        r1,r0,#0x8\n\
     lsl        r0,r0,#0x9\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x5\n\
     mov        r1,#0xe1\n\
     lsl        r1,r1,#0x4\n\
     bl         __udivsi3\n\
     mov        r1,#0xa4\n\
     lsl        r1,r1,#0x1\n\
     add        r5,r7,r1\n\
     ldrh       r2,[r5,#0x0]\n\
     mul        r0,r2\n\
     lsr        r0,r0,#0xc\n\
     mov        r2,#0xa6\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r7,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r1,[r6,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x11\n\
     ldrh       r2,[r4,#0x2]\n\
     lsl        r1,r2,#0x2\n\
     add        r1,r1,r2\n\
     bl         __udivsi3\n\
     lsl        r0,r0,#0xc\n\
     ldrh       r1,[r5,#0x0]\n\
     bl         __udivsi3\n\
     mov        r2,#0xa7\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r7,r2\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08041a40:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_08041a44()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r5,r0,#0x0\n\
     ldr        r2,DAT_08041b38\n\
     ldr        r3,[r2,#0x0]\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[r0,#0x18]\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r5\n\
     bhi        LAB_08041a68\n\
     b          LAB_08041bec\n\
LAB_08041a68:\n\
     mov        r4,#0x8c\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r3,r4\n\
     ldr        r7,[r0,#0x0]\n\
     ldr        r2,DAT_08041b3c\n\
     add        r1,r7,r2\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x8a\n\
     lsl        r0,r0,#0x1\n\
     add        r3,r7,r0\n\
     ldr        r1,DAT_08041b38\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r2,#0x41\n\
     add        r0,r0,r2\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x18]\n\
     lsl        r1,r5,#0x2\n\
     add        r0,r2,r0\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x4]\n\
     add        r2,r2,r0\n\
     mov        r8,r2\n\
     str        r2,[r3,#0x0]\n\
     add        r1,r7,r4\n\
     mov        r4,#0x3\n\
LAB_08041a9c:\n\
     ldmia      r2!,{r0}\n\
     stmia      r1!,{r0}\n\
     sub        r4,#0x1\n\
     cmp        r4,#0x0\n\
     bge        LAB_08041a9c\n\
     mov        r3,#0xa4\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r7,r3\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x5\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,#0x83\n\
     lsl        r4,r4,#0x3\n\
     add        r4,r8\n\
     ldrh       r0,[r4,#0x0]\n\
     mov        r2,#0xa5\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r7,r2\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     lsl        r1,r0,#0x8\n\
     lsl        r0,r0,#0x9\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x5\n\
     mov        r1,#0xe1\n\
     lsl        r1,r1,#0x4\n\
     bl         __udivsi3\n\
     mov        r3,#0xa6\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r7,r3\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x11\n\
     ldr        r3,DAT_08041b38\n\
     ldr        r2,[r3,#0x0]\n\
     ldrh       r4,[r2,#0x2]\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r4\n\
     bl         __udivsi3\n\
     mov        r2,#0xa7\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r7,r2\n\
     strh       r0,[r1,#0x0]\n\
     mov        r1,#0x82\n\
     lsl        r1,r1,#0x3\n\
     mov        r3,r8\n\
     add        r0,r3,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     mov        r4,#0x88\n\
     add        r4,r4,r7\n\
     mov        r10,r4\n\
     mov        r2,#0x8c\n\
     add        r2,r2,r7\n\
     mov        r9,r2\n\
     mov        r3,#0x0\n\
     mov        r12,r3\n\
     mov        r6,#0x0\n\
     add        r3,r7,#0x4\n\
     add        r2,r7,#0x0\n\
     mov        r4,r8\n\
     add        r5,r4,r0\n\
     mov        r4,#0x10\n\
LAB_08041b22:\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041b40\n\
     mov        r1,#0x82\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r0,r1\n\
     add        r0,r8\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     b          LAB_08041b42\n\
DAT_08041b38:\n\
     .word 0x02027048\n\
DAT_08041b3c:\n\
     .word 0x00000151\n\
LAB_08041b40:\n\
     str        r0,[r2,#0x0]\n\
LAB_08041b42:\n\
     str        r0,[r3,#0x0]\n\
     mov        r1,r10\n\
     add        r0,r1,r6\n\
     mov        r1,r12\n\
     str        r1,[r0,#0x0]\n\
     mov        r1,r9\n\
     add        r0,r1,r6\n\
     mov        r1,r12\n\
     str        r1,[r0,#0x0]\n\
     add        r6,#0x8\n\
     add        r3,#0x8\n\
     add        r2,#0x8\n\
     add        r5,#0x4\n\
     sub        r4,#0x1\n\
     cmp        r4,#0x0\n\
     bge        LAB_08041b22\n\
     mov        r2,#0xff\n\
     mov        r3,#0x94\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r7,r3\n\
     mov        r4,#0xf\n\
LAB_08041b6c:\n\
     ldrb       r0,[r1,#0x10]\n\
     orr        r0,r2\n\
     strb       r0,[r1,#0x10]\n\
     ldrb       r0,[r1,#0x0]\n\
     orr        r0,r2\n\
     strb       r0,[r1,#0x0]\n\
     add        r1,#0x1\n\
     sub        r4,#0x1\n\
     cmp        r4,#0x0\n\
     bge        LAB_08041b6c\n\
     mov        r4,#0x0\n\
     ldr        r6,DAT_08041be4\n\
     ldr        r0,[r6,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r4,r0\n\
     bge        LAB_08041bc8\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     add        r2,r7,r0\n\
     mov        r5,#0x0\n\
     mov        r3,#0x0\n\
LAB_08041b96:\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     strb       r5,[r0,#0x4]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     strb       r5,[r0,#0x6]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     strb       r5,[r0,#0x8]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     str        r5,[r0,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     strb       r5,[r0,#0x7]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r3,r0\n\
     mov        r1,#0xff\n\
     strb       r1,[r0,#0x5]\n\
     add        r3,#0xc\n\
     add        r4,#0x1\n\
     ldr        r0,[r6,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r4,r0\n\
     blt        LAB_08041b96\n\
LAB_08041bc8:\n\
     mov        r1,#0xa8\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r7,r1\n\
     mov        r1,#0x0\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r2,DAT_08041be4\n\
     ldr        r0,[r2,#0x0]\n\
     strb       r1,[r0,#0x1]\n\
     ldr        r3,DAT_08041be8\n\
     add        r1,r7,r3\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     b          LAB_08041bee\n\
.space 1\n\
.space 1\n\
DAT_08041be4:\n\
     .word 0x02027048\n\
DAT_08041be8:\n\
     .word 0x00000151\n\
LAB_08041bec:\n\
     mov        r0,#0x0\n\
LAB_08041bee:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041bfc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r8,r0\n\
     ldr        r0,DAT_08041c5c\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r1,r2\n\
     ldr        r5,[r1,#0x0]\n\
     ldr        r1,DAT_08041c60\n\
     add        r3,r5,r1\n\
     ldrb       r2,[r3,#0x0]\n\
     mov        r1,#0x3\n\
     and        r1,r2\n\
     mov        r12,r0\n\
     cmp        r1,#0x3\n\
     bne        LAB_08041ca8\n\
     mov        r0,#0xfc\n\
     and        r0,r2\n\
     strb       r0,[r3,#0x0]\n\
     mov        r2,r8\n\
     cmp        r2,#0x0\n\
     beq        LAB_08041c96\n\
     mov        r4,#0x0\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     bge        LAB_08041c96\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r6,r5,r2\n\
     mov        r5,#0x0\n\
     mov        r7,#0x0\n\
LAB_08041c44:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,r5,r0\n\
     ldrb       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041c86\n\
     mov        r0,r8\n\
     cmp        r0,#0x1\n\
     bne        LAB_08041c64\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803f610\n\
     b          LAB_08041c7c\n\
DAT_08041c5c:\n\
     .word 0x02027048\n\
DAT_08041c60:\n\
     .word 0x00000151\n\
LAB_08041c64:\n\
     ldr        r0,DAT_08041ca4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x4\n\
     add        r0,r0,r1\n\
     str        r7,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803e344\n\
LAB_08041c7c:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,r5,r0\n\
     strb       r7,[r0,#0x4]\n\
     ldr        r2,DAT_08041ca4\n\
     mov        r12,r2\n\
LAB_08041c86:\n\
     add        r5,#0xc\n\
     add        r4,#0x1\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     blt        LAB_08041c44\n\
LAB_08041c96:\n\
     mov        r2,r12\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x1]\n\
     mov        r0,#0x1\n\
     b          LAB_08041caa\n\
.space 1\n\
.space 1\n\
DAT_08041ca4:\n\
     .word 0x02027048\n\
LAB_08041ca8:\n\
     mov        r0,#0x0\n\
LAB_08041caa:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041cb4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r8,r0\n\
     ldr        r0,DAT_08041d18\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r1,r2\n\
     ldr        r5,[r1,#0x0]\n\
     ldr        r1,DAT_08041d1c\n\
     add        r3,r5,r1\n\
     ldrb       r2,[r3,#0x0]\n\
     mov        r1,#0x7\n\
     and        r1,r2\n\
     mov        r12,r0\n\
     cmp        r1,#0x3\n\
     bne        LAB_08041d5c\n\
     mov        r0,#0xfd\n\
     and        r0,r2\n\
     mov        r1,#0x4\n\
     orr        r0,r1\n\
     strb       r0,[r3,#0x0]\n\
     mov        r2,r8\n\
     cmp        r2,#0x0\n\
     beq        LAB_08041d52\n\
     mov        r4,#0x0\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     bge        LAB_08041d52\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r6,r5,r2\n\
     mov        r5,#0x0\n\
     mov        r7,#0x0\n\
LAB_08041d00:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,r5,r0\n\
     ldrb       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041d42\n\
     mov        r0,r8\n\
     cmp        r0,#0x1\n\
     bne        LAB_08041d20\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803f610\n\
     b          LAB_08041d38\n\
DAT_08041d18:\n\
     .word 0x02027048\n\
DAT_08041d1c:\n\
     .word 0x00000151\n\
LAB_08041d20:\n\
     ldr        r0,DAT_08041d58\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x4\n\
     add        r0,r0,r1\n\
     str        r7,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803e344\n\
LAB_08041d38:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,r5,r0\n\
     strb       r7,[r0,#0x4]\n\
     ldr        r2,DAT_08041d58\n\
     mov        r12,r2\n\
LAB_08041d42:\n\
     add        r5,#0xc\n\
     add        r4,#0x1\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     blt        LAB_08041d00\n\
LAB_08041d52:\n\
     mov        r0,#0x1\n\
     b          LAB_08041d5e\n\
.space 1\n\
.space 1\n\
DAT_08041d58:\n\
     .word 0x02027048\n\
LAB_08041d5c:\n\
     mov        r0,#0x0\n\
LAB_08041d5e:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041d68()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r0,DAT_08041dec\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r1,r2\n\
     ldr        r4,[r1,#0x0]\n\
     ldr        r1,DAT_08041df0\n\
     add        r2,r4,r1\n\
     mov        r1,#0x2\n\
     ldrb       r2,[r2,#0x0]\n\
     and        r1,r2\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_08041da4\n\
     mov        r3,#0x0\n\
     add        r2,r4,#0x0\n\
     add        r2,#0x88\n\
     add        r1,r4,#0x0\n\
LAB_08041d8e:\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041e08\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041e08\n\
     add        r2,#0x8\n\
     add        r1,#0x8\n\
     add        r3,#0x1\n\
     cmp        r3,#0xf\n\
     ble        LAB_08041d8e\n\
LAB_08041da4:\n\
     mov        r3,#0x0\n\
     ldr        r0,[r5,#0x0]\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r1,#0x4\n\
     cmp        r3,r1\n\
     bge        LAB_08041e18\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r4,r2\n\
     add        r7,r5,#0x0\n\
     add        r6,r1,#0x0\n\
     ldr        r5,[r0,#0x0]\n\
LAB_08041dbc:\n\
     lsl        r4,r3,#0x1\n\
     ldrb       r0,[r5,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041e08\n\
     ldr        r2,[r7,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r2,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08041e10\n\
     cmp        r3,#0x3\n\
     bgt        LAB_08041df4\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xac\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xff\n\
     ble        LAB_08041e08\n\
     b          LAB_08041e10\n\
.space 1\n\
.space 1\n\
DAT_08041dec:\n\
     .word 0x02027048\n\
DAT_08041df0:\n\
     .word 0x00000151\n\
LAB_08041df4:\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r2,DAT_08041e0c\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x34]\n\
     cmp        r0,#0xff\n\
     bgt        LAB_08041e10\n\
LAB_08041e08:\n\
     mov        r0,#0x1\n\
     b          LAB_08041e1a\n\
DAT_08041e0c:\n\
     .word 0xFFFFFF00\n\
LAB_08041e10:\n\
     add        r5,#0xc\n\
     add        r3,#0x1\n\
     cmp        r3,r6\n\
     blt        LAB_08041dbc\n\
LAB_08041e18:\n\
     mov        r0,#0x0\n\
LAB_08041e1a:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041e20()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r6,r0,#0x0\n\
     mov        r1,#0x3\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041efc\n\
     ldr        r0,DAT_08041ef4\n\
     mov        r8,r0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     ldr        r5,[r0,#0x0]\n\
     ldr        r3,DAT_08041ef8\n\
     add        r7,r5,r3\n\
     add        r0,r1,#0x0\n\
     ldrb       r4,[r7,#0x0]\n\
     and        r0,r4\n\
     cmp        r0,#0x1\n\
     bne        LAB_08041efc\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x88\n\
     bl         fun_0803dfb4\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x88\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x88\n\
     mov        r2,#0x88\n\
     bl         fun_0803dfb4\n\
     mov        r4,#0x8a\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r6,r4\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r5,r2\n\
     mov        r2,#0x10\n\
     bl         fun_0803dfb4\n\
     mov        r3,#0x92\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r6,r3\n\
     mov        r2,#0x94\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r5,r2\n\
     mov        r2,#0x10\n\
     bl         fun_0803dfb4\n\
     mov        r3,#0x9a\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r6,r3\n\
     mov        r2,#0x9c\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r5,r2\n\
     mov        r2,#0x10\n\
     bl         fun_0803dfb4\n\
     mov        r3,#0x88\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r6,r3\n\
     add        r4,r5,r4\n\
     ldr        r0,[r4,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,#0xa4\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r5,r2\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r4,#0xa2\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r6,r4\n\
     strh       r1,[r0,#0x0]\n\
     mov        r1,#0xa5\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r5,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r4,#0x2\n\
     add        r3,r6,r4\n\
     strh       r0,[r3,#0x0]\n\
     mov        r3,#0xa6\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r5,r3\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r2,r6,r2\n\
     strh       r0,[r2,#0x0]\n\
     mov        r2,#0xa7\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r5,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r1,r6,r1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,r8\n\
     ldr        r0,[r4,#0x0]\n\
     ldrb       r0,[r0,#0x1]\n\
     sub        r2,#0x1\n\
     add        r1,r6,r2\n\
     strb       r0,[r1,#0x0]\n\
     ldrb       r0,[r7,#0x0]\n\
     add        r3,r6,r3\n\
     strb       r0,[r3,#0x0]\n\
     mov        r0,#0x1\n\
     b          LAB_08041efe\n\
.space 1\n\
.space 1\n\
DAT_08041ef4:\n\
     .word 0x02027048\n\
DAT_08041ef8:\n\
     .word 0x00000151\n\
LAB_08041efc:\n\
     mov        r0,#0x0\n\
LAB_08041efe:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041f08()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r6,r0,#0x0\n\
     mov        r0,#0x3\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041fe0\n\
     ldr        r0,DAT_08041fd8\n\
     mov        r8,r0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r5,[r0,#0x0]\n\
     ldr        r2,DAT_08041fdc\n\
     add        r7,r5,r2\n\
     mov        r0,#0x2\n\
     ldrb       r3,[r7,#0x0]\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     bne        LAB_08041fe0\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     mov        r2,#0x88\n\
     bl         fun_0803dfb4\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x88\n\
     add        r1,r6,#0x0\n\
     add        r1,#0x88\n\
     mov        r2,#0x88\n\
     bl         fun_0803dfb4\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r5,r1\n\
     mov        r4,#0x8a\n\
     lsl        r4,r4,#0x1\n\
     add        r1,r6,r4\n\
     mov        r2,#0x10\n\
     bl         fun_0803dfb4\n\
     mov        r2,#0x94\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r5,r2\n\
     mov        r3,#0x92\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r6,r3\n\
     mov        r2,#0x10\n\
     bl         fun_0803dfb4\n\
     mov        r1,#0x9c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r5,r1\n\
     mov        r2,#0x9a\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r6,r2\n\
     mov        r2,#0x10\n\
     bl         fun_0803dfb4\n\
     add        r4,r5,r4\n\
     mov        r3,#0x88\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r6,r3\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xa2\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r6,r1\n\
     ldrh       r2,[r0,#0x0]\n\
     add        r1,#0x4\n\
     add        r0,r5,r1\n\
     strh       r2,[r0,#0x0]\n\
     mov        r2,#0xa3\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r6,r2\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r2,#0x4\n\
     add        r0,r5,r2\n\
     strh       r3,[r0,#0x0]\n\
     add        r1,r6,r1\n\
     ldrh       r3,[r1,#0x0]\n\
     mov        r1,#0xa6\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r5,r1\n\
     strh       r3,[r0,#0x0]\n\
     add        r2,r6,r2\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r3,#0xa7\n\
     lsl        r3,r3,#0x1\n\
     add        r2,r5,r3\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,r8\n\
     ldr        r2,[r0,#0x0]\n\
     sub        r3,#0x1\n\
     add        r0,r6,r3\n\
     ldrb       r0,[r0,#0x0]\n\
     strb       r0,[r2,#0x1]\n\
     add        r1,r6,r1\n\
     ldrb       r0,[r1,#0x0]\n\
     strb       r0,[r7,#0x0]\n\
     mov        r0,#0x1\n\
     b          LAB_08041fe2\n\
DAT_08041fd8:\n\
     .word 0x02027048\n\
DAT_08041fdc:\n\
     .word 0x00000151\n\
LAB_08041fe0:\n\
     mov        r0,#0x0\n\
LAB_08041fe2:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08041fec()
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
     mov        r8,r2\n\
     str        r3,[sp,#0x4]\n\
     mov        r2,#0x9c\n\
     lsl        r2,r2,#0x1\n\
     add        r2,r9\n\
     add        r2,r10\n\
     mov        r0,#0x94\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r9\n\
     add        r0,r10\n\
     ldrb       r1,[r0,#0x0]\n\
     strb       r1,[r2,#0x0]\n\
     mov        r1,sp\n\
     ldrb       r1,[r1,#0x4]\n\
     strb       r1,[r0,#0x0]\n\
     mov        r0,#0x8c\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r9\n\
     add        r0,r10\n\
     ldrb       r1,[r0,#0x0]\n\
     mov        r2,r10\n\
     cmp        r2,#0x9\n\
     beq        LAB_08042036\n\
     mov        r0,#0x8a\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r9\n\
     lsl        r1,r1,#0x2\n\
     add        r1,#0x10\n\
     b          LAB_08042044\n\
LAB_08042036:\n\
     mov        r0,#0x8a\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r9\n\
     lsl        r1,r1,#0x2\n\
     mov        r3,#0x84\n\
     lsl        r3,r3,#0x2\n\
     add        r1,r1,r3\n\
LAB_08042044:\n\
     ldr        r0,[r0,#0x0]\n\
     add        r6,r0,r1\n\
     ldr        r0,DAT_080420c8\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r4,#0x88\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r3,r4\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r4,[r6,#0x0]\n\
     lsl        r1,r4,#0x2\n\
     add        r0,r2,r0\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r7,r2,r0\n\
     ldrh       r1,[r3,#0xc]\n\
     mov        r0,r8\n\
     mul        r0,r1\n\
     asr        r0,r0,#0x8\n\
     mov        r8,r0\n\
     mov        r2,r10\n\
     cmp        r2,#0x3\n\
     bgt        LAB_080420da\n\
     mov        r4,r10\n\
     ldrb       r3,[r7,#0x0]\n\
     cmp        r3,#0x3\n\
     bhi        LAB_0804207c\n\
     ldrb       r4,[r7,#0x0]\n\
LAB_0804207c:\n\
     mov        r2,#0x1\n\
     add        r0,r2,#0x0\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0804209c\n\
     cmp        r4,#0x1\n\
     bgt        LAB_0804209c\n\
     mov        r0,#0xa8\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r9\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r4,r4,r1\n\
     and        r4,r2\n\
     eor        r1,r2\n\
     strb       r1,[r0,#0x0]\n\
LAB_0804209c:\n\
     ldrb       r1,[r6,#0x2]\n\
     mov        r0,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_080427c0\n\
     cmp        r0,#0x0\n\
     bne        LAB_080420ac\n\
     b          LAB_080421bc\n\
LAB_080420ac:\n\
     mov        r0,#0x80\n\
     ldrb       r2,[r7,#0x1]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_080420cc\n\
     ldrb       r0,[r6,#0x2]\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r4,#0x0\n\
     ldr        r1,[sp,#0x4]\n\
     mov        r2,#0x40\n\
     mov        r3,r8\n\
     bl         fun_08042524\n\
     b          LAB_08042164\n\
DAT_080420c8:\n\
     .word 0x02027048\n\
LAB_080420cc:\n\
     ldrb       r3,[r6,#0x2]\n\
     add        r0,r4,#0x0\n\
     ldr        r1,[sp,#0x4]\n\
     mov        r2,r8\n\
     bl         fun_080425bc\n\
     b          LAB_08042164\n\
LAB_080420da:\n\
     ldrb       r4,[r7,#0x0]\n\
     cmp        r4,#0xff\n\
     beq        LAB_080420ee\n\
     sub        r4,#0x4\n\
     cmp        r4,#0x0\n\
     blt        LAB_080420ec\n\
     ldrb       r3,[r3,#0x0]\n\
     cmp        r4,r3\n\
     blt        LAB_080420ee\n\
LAB_080420ec:\n\
     mov        r4,#0xff\n\
LAB_080420ee:\n\
     ldrb       r1,[r6,#0x2]\n\
     ldrb       r2,[r6,#0x3]\n\
     mov        r0,#0x0\n\
     add        r3,r4,#0x0\n\
     bl         fun_08042738\n\
     add        r4,r0,#0x0\n\
     cmp        r4,#0x0\n\
     blt        LAB_080421bc\n\
     ldr        r0,DAT_0804213c\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r4,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r5,r0,r1\n\
     mov        r0,#0x80\n\
     ldrb       r1,[r7,#0x1]\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r2,r0,#0x18\n\
     cmp        r2,#0x0\n\
     bne        LAB_08042140\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     str        r2,[r0,#0x0]\n\
     ldrb       r0,[r6,#0x2]\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r5,#0x0\n\
     ldr        r1,[sp,#0x4]\n\
     mov        r2,#0x40\n\
     mov        r3,r8\n\
     bl         fun_080424b4\n\
     b          LAB_0804214c\n\
.space 1\n\
.space 1\n\
DAT_0804213c:\n\
     .word 0x02027048\n\
LAB_08042140:\n\
     ldrb       r3,[r6,#0x2]\n\
     add        r0,r5,#0x0\n\
     ldr        r1,[sp,#0x4]\n\
     mov        r2,r8\n\
     bl         fun_080427e8\n\
LAB_0804214c:\n\
     ldr        r0,DAT_080421cc\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     str        r5,[r0,#0x0]\n\
     add        r4,#0x4\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x3d\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_08042164:\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r9\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r4\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,r1,r0\n\
     ldr        r0,[sp,#0x28]\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     mov        r3,r10\n\
     strb       r3,[r1,#0x5]\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x4]\n\
     mov        r0,r8\n\
     strb       r0,[r1,#0x6]\n\
     strb       r0,[r1,#0x8]\n\
     mov        r3,sp\n\
     ldrb       r3,[r3,#0x4]\n\
     strb       r3,[r1,#0x7]\n\
     ldr        r0,DAT_080421cc\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     lsl        r1,r4,#0x4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     strh       r2,[r0,#0x8]\n\
     strh       r2,[r0,#0xa]\n\
     str        r2,[r0,#0x4]\n\
     add        r1,r7,#0x4\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r1,[r6,#0x0]\n\
     strh       r1,[r0,#0xc]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     str        r2,[r0,#0x0]\n\
LAB_080421bc:\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080421cc:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_080421d0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     ldr        r1,DAT_08042270\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r3,r2\n\
     ldr        r6,[r0,#0x0]\n\
     ldr        r0,DAT_08042274\n\
     add        r2,r6,r0\n\
     mov        r0,#0x2\n\
     ldrb       r2,[r2,#0x0]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_080421f8\n\
     b          LAB_080424a2\n\
LAB_080421f8:\n\
     mov        r1,#0xa6\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r6,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r10,r0\n\
     mov        r7,#0x0\n\
     ldrb       r0,[r3,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r7,r0\n\
     bge        LAB_08042248\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r2,r2,r6\n\
     mov        r8,r2\n\
     mov        r5,#0x0\n\
LAB_08042216:\n\
     mov        r3,r8\n\
     ldr        r0,[r3,#0x0]\n\
     add        r4,r0,r5\n\
     ldrb       r0,[r4,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08042238\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,r10\n\
     sub        r0,r0,r1\n\
     str        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08042238\n\
     add        r0,r7,#0x0\n\
     bl         fun_0803f610\n\
     mov        r0,#0x0\n\
     strb       r0,[r4,#0x4]\n\
LAB_08042238:\n\
     add        r5,#0xc\n\
     add        r7,#0x1\n\
     ldr        r0,DAT_08042270\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r7,r0\n\
     blt        LAB_08042216\n\
LAB_08042248:\n\
     mov        r7,#0x0\n\
     mov        r2,#0x0\n\
     mov        r9,r2\n\
     mov        r3,#0x82\n\
     lsl        r3,r3,#0x3\n\
     mov        r12,r3\n\
     add        r4,r6,#0x0\n\
     mov        r8,r2\n\
LAB_08042258:\n\
     ldr        r1,[r4,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08042350\n\
     ldr        r0,[r4,#0x4]\n\
     mov        r2,r10\n\
     sub        r0,r0,r2\n\
     str        r0,[r4,#0x4]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08042350\n\
     ldr        r1,[r1,#0x4]\n\
     b          LAB_08042344\n\
.space 1\n\
.space 1\n\
DAT_08042270:\n\
     .word 0x02027048\n\
DAT_08042274:\n\
     .word 0x00000151\n\
LAB_08042278:\n\
     ldr        r2,[r4,#0x0]\n\
     ldr        r1,[r2,#0x4]\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     add        r5,r2,#0x0\n\
     cmp        r1,r0\n\
     bne        LAB_080422c4\n\
     add        r3,r5,#0x0\n\
     add        r3,#0x8\n\
     str        r3,[r4,#0x0]\n\
     ldr        r1,DAT_080422c0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x8c\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r1,r12\n\
     add        r0,r2,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r12\n\
     add        r0,r2,r0\n\
     lsl        r1,r7,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r12\n\
     add        r2,r2,r0\n\
     ldr        r0,[r5,#0x8]\n\
     add        r2,r2,r0\n\
     str        r2,[r4,#0x0]\n\
     ldr        r1,[r3,#0x4]\n\
     b          LAB_08042332\n\
.space 1\n\
.space 1\n\
DAT_080422c0:\n\
     .word 0x02027048\n\
LAB_080422c4:\n\
     mov        r2,#0x8a\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r6,r2\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r3,DAT_080422fc\n\
     add        r0,r2,r3\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r3,#0x4\n\
     add        r0,r0,r3\n\
     add        r0,r2,r0\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r0,r3\n\
     add        r1,r2,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_08042300\n\
     cmp        r0,r2\n\
     bne        LAB_08042304\n\
     ldrh       r3,[r1,#0x2]\n\
     cmp        r3,r0\n\
     bne        LAB_08042304\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x88\n\
     add        r0,r8\n\
     mov        r1,r9\n\
     str        r1,[r0,#0x0]\n\
     b          LAB_0804232a\n\
DAT_080422fc:\n\
     .word 0x00000414\n\
DAT_08042300:\n\
     .word 0x0000FFFF\n\
LAB_08042304:\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x88\n\
     add        r0,r8\n\
     str        r1,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x8c\n\
     mov        r2,r8\n\
     add        r3,r0,r2\n\
     ldrh       r1,[r1,#0x0]\n\
     lsl        r1,r1,#0x8\n\
     str        r1,[r3,#0x0]\n\
     cmp        r7,#0x3\n\
     bgt        LAB_0804232a\n\
     mov        r2,#0xa7\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r6,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r3,#0x0]\n\
LAB_0804232a:\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x8\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,[r5,#0x8]\n\
LAB_08042332:\n\
     lsl        r1,r1,#0x8\n\
     ldr        r0,[r4,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,[r4,#0x4]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08042350\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r1,[r0,#0x4]\n\
LAB_08042344:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bne        LAB_08042278\n\
     mov        r3,r9\n\
     str        r3,[r4,#0x0]\n\
LAB_08042350:\n\
     add        r4,#0x8\n\
     mov        r0,#0x8\n\
     add        r8,r0\n\
     add        r7,#0x1\n\
     cmp        r7,#0x10\n\
     bgt        LAB_0804235e\n\
     b          LAB_08042258\n\
LAB_0804235e:\n\
     mov        r7,#0x0\n\
LAB_08042360:\n\
     lsl        r0,r7,#0x3\n\
     add        r0,#0x88\n\
     add        r5,r6,r0\n\
     ldr        r1,[r5,#0x0]\n\
     add        r2,r7,#0x1\n\
     mov        r9,r2\n\
     cmp        r1,#0x0\n\
     beq        LAB_08042442\n\
     ldr        r0,[r5,#0x4]\n\
     mov        r3,r10\n\
     sub        r0,r0,r3\n\
     str        r0,[r5,#0x4]\n\
     add        r4,r1,#0x0\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08042442\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r6,r1\n\
     add        r0,r0,r7\n\
     mov        r8,r0\n\
LAB_08042388:\n\
     mov        r0,#0x2\n\
     ldrsb      r0,[r4,r0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080423da\n\
     mov        r0,#0x80\n\
     ldrb       r2,[r4,#0x3]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_080423b4\n\
     ldrh       r0,[r4,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080423b0\n\
     mov        r2,#0x2\n\
     ldrsb      r2,[r4,r2]\n\
     ldrb       r3,[r4,#0x3]\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_08041fec\n\
LAB_080423b0:\n\
     mov        r1,#0x6\n\
     b          LAB_08042412\n\
LAB_080423b4:\n\
     ldrb       r0,[r4,#0x4]\n\
     mov        r3,r8\n\
     strb       r0,[r3,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080423d6\n\
     mov        r2,#0x2\n\
     ldrsb      r2,[r4,r2]\n\
     mov        r3,#0x7f\n\
     ldrb       r0,[r4,#0x3]\n\
     and        r3,r0\n\
     ldrh       r0,[r4,#0x6]\n\
     str        r0,[sp,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_08041fec\n\
LAB_080423d6:\n\
     mov        r1,#0x8\n\
     b          LAB_08042412\n\
LAB_080423da:\n\
     cmp        r0,#0x0\n\
     bne        LAB_0804240c\n\
     ldrb       r1,[r4,#0x3]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080423f0\n\
     mov        r2,r8\n\
     strb       r1,[r2,#0x0]\n\
     mov        r1,#0x4\n\
     b          LAB_08042412\n\
LAB_080423f0:\n\
     mov        r2,#0x7f\n\
     and        r2,r1\n\
     ldr        r0,DAT_08042408\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r1,[r0,#0x0]\n\
     cmp        r2,r1\n\
     ble        LAB_08042400\n\
     add        r2,r1,#0x0\n\
LAB_08042400:\n\
     strb       r2,[r0,#0x1]\n\
     mov        r1,#0x4\n\
     b          LAB_08042412\n\
.space 1\n\
.space 1\n\
DAT_08042408:\n\
     .word 0x02027048\n\
LAB_0804240c:\n\
     mov        r0,#0x0\n\
     str        r0,[r5,#0x0]\n\
     b          LAB_08042442\n\
LAB_08042412:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r5,#0x0]\n\
     add        r4,r0,#0x0\n\
     ldrh       r1,[r4,#0x0]\n\
     ldr        r0,DAT_08042430\n\
     cmp        r1,r0\n\
     bne        LAB_08042434\n\
     ldrh       r3,[r4,#0x2]\n\
     cmp        r3,r1\n\
     bne        LAB_08042434\n\
     mov        r0,#0x0\n\
     str        r0,[r5,#0x4]\n\
     str        r0,[r5,#0x0]\n\
     b          LAB_08042442\n\
DAT_08042430:\n\
     .word 0x0000FFFF\n\
LAB_08042434:\n\
     ldrh       r0,[r4,#0x0]\n\
     lsl        r1,r0,#0x8\n\
     ldr        r0,[r5,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08042388\n\
LAB_08042442:\n\
     mov        r7,r9\n\
     cmp        r7,#0xf\n\
     ble        LAB_08042360\n\
     mov        r1,#0x84\n\
     lsl        r1,r1,#0x1\n\
     add        r5,r6,r1\n\
     ldr        r1,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080424a2\n\
     ldr        r0,[r5,#0x4]\n\
     mov        r2,r10\n\
     sub        r0,r0,r2\n\
     str        r0,[r5,#0x4]\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     bgt        LAB_080424a2\n\
     mov        r4,#0x0\n\
     ldr        r7,DAT_08042490\n\
LAB_08042466:\n\
     ldrh       r0,[r2,#0x2]\n\
     mov        r3,#0xa5\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r6,r3\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080419dc\n\
     ldr        r1,[r5,#0x0]\n\
     add        r0,r1,#0x4\n\
     str        r0,[r5,#0x0]\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r2,#0x2]\n\
     cmp        r0,r7\n\
     bne        LAB_08042494\n\
     ldrh       r1,[r1,#0x4]\n\
     cmp        r1,r0\n\
     bne        LAB_08042494\n\
     str        r4,[r5,#0x4]\n\
     str        r4,[r5,#0x0]\n\
     b          LAB_080424a2\n\
.space 1\n\
.space 1\n\
DAT_08042490:\n\
     .word 0x0000FFFF\n\
LAB_08042494:\n\
     ldrh       r0,[r2,#0x0]\n\
     lsl        r1,r0,#0x8\n\
     ldr        r0,[r5,#0x4]\n\
     add        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08042466\n\
LAB_080424a2:\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080424b4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r12,r0\n\
     add        r5,r1,#0x0\n\
     add        r4,r2,#0x0\n\
     add        r0,#0x3d\n\
     mov        r2,#0x0\n\
     strb       r2,[r0,#0x0]\n\
     mov        r0,#0xff\n\
     lsl        r0,r0,#0x8\n\
     mov        r1,r12\n\
     strh       r0,[r1,#0x28]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x8\n\
     strh       r0,[r1,#0x36]\n\
     add        r1,#0x3f\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r3,r3,#0x1\n\
     sub        r1,#0x14\n\
     strb       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080424e6\n\
     add        r0,r3,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_080424e6:\n\
     mov        r3,r12\n\
     add        r3,#0x2a\n\
     mov        r0,#0x0\n\
     strb       r0,[r3,#0x0]\n\
     mov        r3,r12\n\
     str        r2,[r3,#0x38]\n\
     mov        r0,r12\n\
     add        r0,#0x3c\n\
     strb       r4,[r0,#0x0]\n\
     ldr        r0,[sp,#0xc]\n\
     strh       r0,[r3,#0x34]\n\
     ldrh       r4,[r3,#0x0]\n\
     ldrh       r1,[r3,#0x1c]\n\
     add        r0,r4,r1\n\
     strh       r0,[r3,#0x22]\n\
     lsl        r0,r5,#0x8\n\
     strh       r0,[r3,#0x0]\n\
     strh       r2,[r3,#0x2]\n\
     strh       r2,[r3,#0x1c]\n\
     strh       r2,[r3,#0x1e]\n\
     strh       r2,[r3,#0x20]\n\
     strh       r2,[r3,#0x14]\n\
     strh       r2,[r3,#0x16]\n\
     strh       r2,[r3,#0x4]\n\
     strh       r2,[r3,#0x6]\n\
     strh       r2,[r3,#0xc]\n\
     strh       r2,[r3,#0xe]\n\
     strh       r2,[r3,#0x12]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08042524()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r7,r0,#0x0\n\
     mov        r8,r1\n\
     add        r4,r2,#0x0\n\
     mov        r9,r3\n\
     bl         fun_0803e344\n\
     lsl        r4,r4,#0x18\n\
     lsr        r4,r4,#0x18\n\
     add        r0,r4,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_0803e3e4\n\
     ldr        r5,DAT_080425b8\n\
     ldr        r1,[r5,#0x0]\n\
     lsl        r2,r7,#0x2\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r0,r2\n\
     mov        r3,#0x0\n\
     str        r3,[r0,#0x0]\n\
     lsl        r2,r7,#0x1\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xac\n\
     add        r0,r0,r2\n\
     mov        r2,#0x0\n\
     mov        r4,sp\n\
     ldrh       r4,[r4,#0x1c]\n\
     strh       r4,[r0,#0x0]\n\
     lsl        r4,r7,#0x3\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8c\n\
     add        r1,r1,r0\n\
     mov        r0,#0xff\n\
     lsl        r0,r0,#0x8\n\
     strh       r0,[r1,#0x4]\n\
     mov        r6,r9\n\
     strb       r6,[r1,#0x7]\n\
     strb       r2,[r1,#0x6]\n\
     cmp        r7,#0x2\n\
     bgt        LAB_080425aa\n\
     add        r1,r4,r7\n\
     lsl        r1,r1,#0x2\n\
     add        r1,#0x20\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r4,[r0,#0x1c]\n\
     add        r1,r2,r4\n\
     strh       r1,[r0,#0x22]\n\
     mov        r6,r8\n\
     lsl        r1,r6,#0x8\n\
     strh       r1,[r0,#0x0]\n\
     strh       r3,[r0,#0x2]\n\
     strh       r3,[r0,#0x1c]\n\
     strh       r3,[r0,#0x1e]\n\
     strh       r3,[r0,#0x20]\n\
     strh       r3,[r0,#0x14]\n\
     strh       r3,[r0,#0x16]\n\
     strh       r3,[r0,#0x4]\n\
     strh       r3,[r0,#0x6]\n\
     strh       r3,[r0,#0xc]\n\
     strh       r3,[r0,#0xe]\n\
     strh       r3,[r0,#0x12]\n\
LAB_080425aa:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080425b8:\n\
     .word 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_080425bc()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r7,r0,#0x0\n\
     mov        r12,r1\n\
     ldr        r6,DAT_0804260c\n\
     ldr        r5,[r6,#0x0]\n\
     lsl        r0,r7,#0x2\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08042610\n\
     and        r0,r4\n\
     str        r0,[r1,#0x0]\n\
     lsl        r4,r7,#0x3\n\
     add        r5,r5,r4\n\
     add        r5,#0x93\n\
     strb       r2,[r5,#0x0]\n\
     ldr        r6,[r6,#0x0]\n\
     lsl        r1,r7,#0x1\n\
     add        r0,r6,#0x0\n\
     add        r0,#0xac\n\
     add        r0,r0,r1\n\
     strh       r3,[r0,#0x0]\n\
     cmp        r7,#0x3\n\
     beq        LAB_08042606\n\
     add        r0,r4,r7\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r6,r0\n\
     ldrh       r2,[r0,#0x20]\n\
     ldrh       r3,[r0,#0x3c]\n\
     add        r1,r2,r3\n\
     add        r2,r0,#0x0\n\
     add        r2,#0x42\n\
     strh       r1,[r2,#0x0]\n\
     mov        r2,r12\n\
     lsl        r1,r2,#0x8\n\
     strh       r1,[r0,#0x20]\n\
LAB_08042606:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0804260c:\n\
     .word 0x02027048\n\
DAT_08042610:\n\
     .word 0xFFFF7EEF\n\
    ");
}
__attribute__((naked)) void fun_08042614()
{
    asm("\n\
     ldr        r0,DAT_08042630\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,#0x39\n\
     add        r2,r0,r1\n\
     ldrb       r1,[r2,#0x0]\n\
     cmp        r1,#0x1\n\
     beq        LAB_08042634\n\
     mov        r0,#0x0\n\
     b          LAB_0804263c\n\
.space 1\n\
.space 1\n\
DAT_08042630:\n\
     .word 0x02027048\n\
LAB_08042634:\n\
     mov        r0,#0x2\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
LAB_0804263c:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08042640()
{
    asm("\n\
     ldr        r0,DAT_08042660\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,#0x39\n\
     add        r2,r0,r1\n\
     ldrb       r1,[r2,#0x0]\n\
     mov        r0,#0x7\n\
     and        r0,r1\n\
     cmp        r0,#0x5\n\
     beq        LAB_08042664\n\
     mov        r0,#0x0\n\
     b          LAB_08042670\n\
.space 1\n\
.space 1\n\
DAT_08042660:\n\
     .word 0x02027048\n\
LAB_08042664:\n\
     mov        r0,#0xfb\n\
     and        r0,r1\n\
     mov        r1,#0x2\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
LAB_08042670:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08042674()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     ldr        r0,DAT_080426a8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     beq        LAB_080426b0\n\
     ldr        r0,DAT_080426ac\n\
     add        r1,r2,r0\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080426b0\n\
     mov        r1,#0xa4\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r2,r1\n\
     strh       r3,[r0,#0x0]\n\
     bl         fun_080419dc\n\
     mov        r0,#0x1\n\
     b          LAB_080426b2\n\
DAT_080426a8:\n\
     .word 0x02027048\n\
DAT_080426ac:\n\
     .word 0x00000151\n\
LAB_080426b0:\n\
     mov        r0,#0x0\n\
LAB_080426b2:\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080426b8()
{
    asm("\n\
     mov        r0,#0xa8\n\
     lsl        r0,r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080426c0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6}\n\
     mov        r9,r0\n\
     add        r5,r1,#0x0\n\
     ldr        r0,DAT_08042730\n\
     mov        r8,r0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r6,#0x8c\n\
     lsl        r6,r6,#0x1\n\
     add        r0,r0,r6\n\
     str        r5,[r0,#0x0]\n\
     mov        r4,#0xaa\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_0803dfa0\n\
     add        r4,r5,r4\n\
     mov        r2,r8\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,r1,r6\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,r9\n\
     ldrb       r2,[r1,#0x2]\n\
     add        r2,#0x4\n\
     lsl        r1,r2,#0x1\n\
     add        r1,r1,r2\n\
     lsl        r1,r1,#0x2\n\
     bl         fun_0803dfa0\n\
     ldr        r2,DAT_08042734\n\
     add        r1,r5,r2\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r1,r9\n\
     ldrb       r0,[r1,#0x2]\n\
     add        r2,#0x1\n\
     add        r1,r5,r2\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08042730:\n\
     .word 0x02027048\n\
DAT_08042734:\n\
     .word 0x00000151\n\
    ");
}
__attribute__((naked)) void fun_08042738()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r12,r1\n\
     cmp        r3,#0xff\n\
     beq        LAB_08042760\n\
     ldr        r0,DAT_0804275c\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08042758\n\
     ldrh       r0,[r0,#0x34]\n\
     cmp        r0,r12\n\
     bhi        LAB_080427b6\n\
LAB_08042758:\n\
     add        r0,r3,#0x0\n\
     b          LAB_080427ba\n\
DAT_0804275c:\n\
     .word 0x02027048\n\
LAB_08042760:\n\
     mov        r7,#0x0\n\
     mov        r3,r12\n\
     add        r3,#0x1\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x9\n\
     ldr        r0,DAT_08042790\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r2,[r0,#0x1]\n\
     ldrb       r5,[r0,#0x0]\n\
     cmp        r2,r5\n\
     bge        LAB_080427aa\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r4,r0,r1\n\
LAB_0804277e:\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080427b2\n\
     ldrh       r1,[r0,#0x34]\n\
     cmp        r1,r3\n\
     bcs        LAB_08042794\n\
     add        r3,r1,#0x0\n\
     ldrh       r6,[r0,#0x36]\n\
     b          LAB_080427a0\n\
DAT_08042790:\n\
     .word 0x02027048\n\
LAB_08042794:\n\
     cmp        r1,r3\n\
     bne        LAB_080427a2\n\
     ldrh       r0,[r0,#0x36]\n\
     cmp        r0,r6\n\
     bcs        LAB_080427a2\n\
     add        r6,r0,#0x0\n\
LAB_080427a0:\n\
     add        r7,r2,#0x0\n\
LAB_080427a2:\n\
     add        r4,#0x4\n\
     add        r2,#0x1\n\
     cmp        r2,r5\n\
     blt        LAB_0804277e\n\
LAB_080427aa:\n\
     cmp        r3,r12\n\
     bhi        LAB_080427b6\n\
     add        r0,r7,#0x0\n\
     b          LAB_080427ba\n\
LAB_080427b2:\n\
     add        r0,r2,#0x0\n\
     b          LAB_080427ba\n\
LAB_080427b6:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_080427ba:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080427c0()
{
    asm("\n\
     add        r3,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_080427cc\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     add        r3,r3,r0\n\
LAB_080427cc:\n\
     ldr        r0,DAT_080427e0\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r2,#0x1\n\
     add        r0,#0xac\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r3\n\
     bls        LAB_080427e4\n\
     mov        r0,#0x0\n\
     b          LAB_080427e6\n\
DAT_080427e0:\n\
     .word 0x02027048\n\
LAB_080427e4:\n\
     mov        r0,#0x1\n\
LAB_080427e6:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080427e8()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r12,r0\n\
     add        r4,r1,#0x0\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x8\n\
     mov        r1,r12\n\
     strh       r0,[r1,#0x36]\n\
     add        r1,#0x3f\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x38]\n\
     ldr        r1,DAT_08042834\n\
     and        r0,r1\n\
     mov        r1,r12\n\
     str        r0,[r1,#0x38]\n\
     lsl        r2,r2,#0x1\n\
     add        r1,#0x2b\n\
     strb       r2,[r1,#0x0]\n\
     lsl        r0,r2,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08042818\n\
     add        r0,r2,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_08042818:\n\
     mov        r2,r12\n\
     strh       r3,[r2,#0x34]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r2,r3]\n\
     mov        r3,#0x1c\n\
     ldrsh      r1,[r2,r3]\n\
     add        r0,r0,r1\n\
     strh       r0,[r2,#0x22]\n\
     lsl        r0,r4,#0x8\n\
     strh       r0,[r2,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08042834:\n\
     .word 0xFFFF7EEF\n\
    ");
}
__attribute__((naked)) void fun_08042838()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     add        r4,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     cmp        r6,#0x0\n\
     bne        LAB_08042850\n\
     mov        r0,#0x0\n\
     b          LAB_08042a0a\n\
LAB_08042850:\n\
     ldrb       r2,[r4,#0x2]\n\
     lsl        r0,r2,#0x4\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[sp,#0x0]\n\
     lsl        r0,r2,#0x5\n\
     mov        r10,r0\n\
     add        r1,r2,#0x4\n\
     lsl        r3,r1,#0x4\n\
     str        r3,[sp,#0x4]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     mov        r3,#0xaa\n\
     lsl        r3,r3,#0x1\n\
     add        r3,r3,r0\n\
     mov        r9,r3\n\
     lsl        r1,r1,#0x2\n\
     add        r1,#0x8\n\
     mov        r8,r1\n\
     cmp        r2,#0x0\n\
     beq        LAB_0804288e\n\
     mov        r7,#0xa0\n\
     lsl        r7,r7,#0x2\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r4,#0x3]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08042890\n\
     lsl        r7,r7,#0x1\n\
     b          LAB_08042890\n\
LAB_0804288e:\n\
     mov        r7,#0x0\n\
LAB_08042890:\n\
     ldrh       r0,[r4,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080428f0\n\
     ldrb       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080428f0\n\
     ldrh       r2,[r4,#0x0]\n\
     ldr        r0,DAT_080428ac\n\
     cmp        r2,r0\n\
     bhi        LAB_080428b0\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x3\n\
     b          LAB_080428b8\n\
.space 1\n\
.space 1\n\
DAT_080428ac:\n\
     .word 0x000007CF\n\
LAB_080428b0:\n\
     ldr        r0,DAT_080428ec\n\
     cmp        r2,r0\n\
     bls        LAB_080428b8\n\
     add        r2,r0,#0x0\n\
LAB_080428b8:\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803fd78\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldrh       r1,[r4,#0x4]\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x2\n\
     cmp        r1,r0\n\
     bls        LAB_080428ce\n\
     add        r1,r0,#0x0\n\
LAB_080428ce:\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803fdc8\n\
     lsl        r0,r0,#0x8\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     add        r3,r0,r1\n\
     mov        r0,#0x6\n\
     ldrb       r1,[r4,#0x3]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080428f2\n\
     lsl        r3,r3,#0x1\n\
     b          LAB_080428f2\n\
.space 1\n\
.space 1\n\
DAT_080428ec:\n\
     .word 0x00005622\n\
LAB_080428f0:\n\
     mov        r3,#0x0\n\
LAB_080428f2:\n\
     mov        r5,#0x0\n\
     ldrb       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080429e0\n\
     ldrb       r1,[r4,#0x3]\n\
     mov        r0,#0x8\n\
     and        r0,r1\n\
     add        r2,r1,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_080429e0\n\
     mov        r0,#0x1\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08042934\n\
     mov        r0,#0x2\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08042924\n\
     ldr        r1,DAT_0804291c\n\
     ldr        r0,DAT_08042920\n\
     b          LAB_08042950\n\
DAT_0804291c:\n\
     .word 0x08042E00\n\
DAT_08042920:\n\
     .word 0x08042C20\n\
LAB_08042924:\n\
     ldr        r1,DAT_0804292c\n\
     ldr        r0,DAT_08042930\n\
     b          LAB_08042950\n\
.space 1\n\
.space 1\n\
DAT_0804292c:\n\
     .word 0x08043140\n\
DAT_08042930:\n\
     .word 0x08042F8C\n\
LAB_08042934:\n\
     mov        r0,#0x2\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_0804294c\n\
     ldr        r1,DAT_08042944\n\
     ldr        r0,DAT_08042948\n\
     b          LAB_08042950\n\
.space 1\n\
.space 1\n\
DAT_08042944:\n\
     .word 0x08042F8C\n\
DAT_08042948:\n\
     .word 0x08042E00\n\
LAB_0804294c:\n\
     ldr        r1,DAT_08042960\n\
     ldr        r0,DAT_08042964\n\
LAB_08042950:\n\
     sub        r5,r1,r0\n\
     mov        r0,#0x2\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08042970\n\
     ldr        r0,DAT_08042968\n\
     ldr        r1,DAT_0804296c\n\
     b          LAB_08042974\n\
DAT_08042960:\n\
     .word 0x080432CC\n\
DAT_08042964:\n\
     .word 0x08043140\n\
DAT_08042968:\n\
     .word 0x08042B88\n\
DAT_0804296c:\n\
     .word 0x08042A74\n\
LAB_08042970:\n\
     ldr        r0,DAT_08042988\n\
     ldr        r1,DAT_0804298c\n\
LAB_08042974:\n\
     sub        r0,r0,r1\n\
     add        r5,r5,r0\n\
     mov        r0,#0x2\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_08042998\n\
     ldr        r0,DAT_08042990\n\
     ldr        r1,DAT_08042994\n\
     b          LAB_080429dc\n\
.space 1\n\
.space 1\n\
DAT_08042988:\n\
     .word 0x08042C20\n\
DAT_0804298c:\n\
     .word 0x08042B88\n\
DAT_08042990:\n\
     .word 0x080434C4\n\
DAT_08042994:\n\
     .word 0x08043420\n\
LAB_08042998:\n\
     mov        r0,#0x4\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_080429d8\n\
     mov        r0,#0x1\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_080429b8\n\
     ldr        r0,DAT_080429b0\n\
     ldr        r1,DAT_080429b4\n\
     b          LAB_080429bc\n\
.space 1\n\
.space 1\n\
DAT_080429b0:\n\
     .word 0x08043140\n\
DAT_080429b4:\n\
     .word 0x08042F8C\n\
LAB_080429b8:\n\
     ldr        r0,DAT_080429c8\n\
     ldr        r1,DAT_080429cc\n\
LAB_080429bc:\n\
     sub        r0,r0,r1\n\
     add        r5,r5,r0\n\
     ldr        r0,DAT_080429d0\n\
     ldr        r1,DAT_080429d4\n\
     b          LAB_080429dc\n\
.space 1\n\
.space 1\n\
DAT_080429c8:\n\
     .word 0x080432CC\n\
DAT_080429cc:\n\
     .word 0x08043140\n\
DAT_080429d0:\n\
     .word 0x08043420\n\
DAT_080429d4:\n\
     .word 0x08043370\n\
LAB_080429d8:\n\
     ldr        r0,DAT_08042a1c\n\
     ldr        r1,DAT_08042a20\n\
LAB_080429dc:\n\
     sub        r0,r0,r1\n\
     add        r5,r5,r0\n\
LAB_080429e0:\n\
     mov        r0,#0x9a\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldr        r1,[sp,#0x0]\n\
     add        r0,r0,r1\n\
     ldr        r1,[sp,#0x4]\n\
     add        r0,r0,r1\n\
     add        r0,r9\n\
     add        r0,r8\n\
     str        r0,[r6,#0x0]\n\
     add        r4,r7,#0x0\n\
     str        r4,[r6,#0x8]\n\
     mov        r2,#0x4\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     str        r3,[r6,#0xc]\n\
     add        r1,r5,#0x3\n\
     and        r1,r2\n\
     str        r1,[r6,#0x4]\n\
     add        r0,r0,r4\n\
     add        r0,r0,r3\n\
     add        r0,r0,r1\n\
LAB_08042a0a:\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08042a1c:\n\
     .word 0x08043370\n\
DAT_08042a20:\n\
     .word 0x080432CC\n\
    ");
}
__attribute__((naked)) void fun_08042a24()
{
    asm("\n\
     str        r1,[r2,#0x4]\n\
     ldr        r3,[r0,#0x4]\n\
     add        r1,r1,r3\n\
     str        r1,[r2,#0x0]\n\
     ldr        r3,[r0,#0x0]\n\
     add        r1,r1,r3\n\
     str        r1,[r2,#0x8]\n\
     ldr        r0,[r0,#0x8]\n\
     add        r1,r1,r0\n\
     str        r1,[r2,#0xc]\n\
     bx         lr\n\
.space 2\n\
    ");
}
