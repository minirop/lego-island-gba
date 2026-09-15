__attribute__((naked)) void fun_08012068()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r6,r2,#0x0\n\
     add        r5,r3,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080120a0\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     mov        r4,#0x8\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012088\n\
     mov        r4,#0x6\n\
LAB_08012088:\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_080120a4\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x7\n\
     bhi        switchD_0801209e_caseD_8\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_080120a8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_080120a0:\n\
     .4byte 0x00000DBD\n\
DAT_080120a4:\n\
     .4byte 0x00000DBC\n\
DAT_080120a8:\n\
     .4byte 0x080120AC\n\
switchD_0801209e_switchdataD_080120ac:\n\
     .4byte switchD_0801209e_caseD_0\n\
     .4byte switchD_0801209e_caseD_1\n\
     .4byte switchD_0801209e_caseD_2\n\
     .4byte switchD_0801209e_caseD_3\n\
     .4byte switchD_0801209e_caseD_4\n\
     .4byte switchD_0801209e_caseD_5\n\
     .4byte switchD_0801209e_caseD_6\n\
     .4byte switchD_0801209e_caseD_7\n\
switchD_0801209e_caseD_4:\n\
     ldrh       r7,[r5,#0x0]\n\
     sub        r0,r7,r4\n\
     strh       r0,[r5,#0x0]\n\
     b          switchD_0801209e_caseD_8\n\
switchD_0801209e_caseD_5:\n\
     ldrh       r1,[r6,#0x0]\n\
     add        r0,r1,r4\n\
     strh       r0,[r6,#0x0]\n\
     ldrh       r2,[r5,#0x0]\n\
     sub        r0,r2,r4\n\
     strh       r0,[r5,#0x0]\n\
     b          switchD_0801209e_caseD_8\n\
switchD_0801209e_caseD_3:\n\
     ldrh       r7,[r6,#0x0]\n\
     sub        r0,r7,r4\n\
     strh       r0,[r6,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     sub        r0,r1,r4\n\
     strh       r0,[r5,#0x0]\n\
     b          switchD_0801209e_caseD_8\n\
switchD_0801209e_caseD_0:\n\
     ldrh       r2,[r5,#0x0]\n\
     add        r0,r2,r4\n\
     strh       r0,[r5,#0x0]\n\
     b          switchD_0801209e_caseD_8\n\
switchD_0801209e_caseD_7:\n\
     ldrh       r7,[r6,#0x0]\n\
     add        r0,r7,r4\n\
     strh       r0,[r6,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r0,r1,r4\n\
     strh       r0,[r5,#0x0]\n\
     b          switchD_0801209e_caseD_8\n\
switchD_0801209e_caseD_1:\n\
     ldrh       r2,[r6,#0x0]\n\
     sub        r0,r2,r4\n\
     strh       r0,[r6,#0x0]\n\
     ldrh       r7,[r5,#0x0]\n\
     add        r0,r7,r4\n\
     strh       r0,[r5,#0x0]\n\
     b          switchD_0801209e_caseD_8\n\
switchD_0801209e_caseD_6:\n\
     ldrh       r1,[r6,#0x0]\n\
     add        r0,r1,r4\n\
     b          LAB_08012174\n\
LAB_0801211a:\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     mov        r2,r10\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r0,r2,#0x5\n\
     mov        r1,r8\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     mov        r4,#0x1\n\
     str        r4,[r0,#0x0]\n\
     mov        r7,r10\n\
     ldrh       r7,[r7,#0x0]\n\
     lsl        r0,r7,#0x5\n\
     add        r0,r8\n\
     mov        r1,#0x0\n\
     strb       r4,[r0,#0x18]\n\
     ldr        r0,DAT_0801215c\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08012160\n\
     ldr        r2,DAT_08012164\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08012168\n\
     add        r0,r8\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,DAT_0801216c\n\
     add        r0,r8\n\
     strb       r4,[r0,#0x0]\n\
     b          LAB_080121d4\n\
DAT_0801215c:\n\
     .4byte 0x0200DCA0\n\
DAT_08012160:\n\
     .4byte 0x0200DC90\n\
DAT_08012164:\n\
     .4byte 0x00000267\n\
DAT_08012168:\n\
     .4byte 0x00000C48\n\
DAT_0801216c:\n\
     .4byte 0x00000C58\n\
switchD_0801209e_caseD_2:\n\
     ldrh       r7,[r6,#0x0]\n\
     sub        r0,r7,r4\n\
LAB_08012174:\n\
     strh       r0,[r6,#0x0]\n\
switchD_0801209e_caseD_8:\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_080121e4\n\
     mov        r8,r3\n\
     ldr        r0,DAT_080121e8\n\
     mov        r9,r0\n\
     mov        r1,#0xc\n\
     add        r1,r1,r3\n\
     mov        r12,r1\n\
LAB_08012186:\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r9\n\
     mov        r10,r0\n\
     ldrh       r4,[r0,#0x0]\n\
     lsl        r1,r4,#0x5\n\
     mov        r7,r12\n\
     add        r0,r1,r7\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080121ca\n\
     add        r0,r1,r3\n\
     ldrh       r4,[r6,#0x0]\n\
     ldrh       r7,[r0,#0x4]\n\
     sub        r1,r4,r7\n\
     ldrh       r4,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x6]\n\
     sub        r0,r4,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     mov        r7,#0xf0\n\
     lsl        r7,r7,#0xc\n\
     add        r1,r1,r7\n\
     lsr        r1,r1,#0x10\n\
     cmp        r1,#0x1e\n\
     bhi        LAB_080121ca\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r1,#0x10\n\
.syntax unified\n\
     rsbs       r1,r1,#0\n\
.syntax divided\n\
     cmp        r0,r1\n\
     ble        LAB_080121ca\n\
     cmp        r0,#0xf\n\
     ble        LAB_0801211a\n\
LAB_080121ca:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x4\n\
     bls        LAB_08012186\n\
LAB_080121d4:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080121e4:\n\
     .4byte 0x020006A0\n\
DAT_080121e8:\n\
     .4byte 0x0877FD0C\n\
    ");
}
__attribute__((naked)) void fun_080121ec()
{
    asm("\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080121f4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r10,r0\n\
     add        r7,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r6,DAT_080122b4\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_080122b8\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r6,#0x2\n\
     mov        r9,r1\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012252\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08012252:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012298\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08012298:\n\
     ldr        r1,DAT_080122bc\n\
     mov        r0,r10\n\
     mov        r2,#0x29\n\
     mov        r3,#0x1\n\
     bl         fun_08015f48\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080122b4:\n\
     .4byte 0x0877FD18\n\
DAT_080122b8:\n\
     .4byte 0x00000E98\n\
DAT_080122bc:\n\
     .4byte 0x0200DC58\n\
    ");
}
__attribute__((naked)) void fun_080122c0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080122c8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r10,r0\n\
     add        r7,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r6,DAT_08012388\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_0801238c\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r6,#0x2\n\
     mov        r9,r1\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012326\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0xa\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08012326:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801236c\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0xa\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_0801236c:\n\
     ldr        r1,DAT_08012390\n\
     mov        r0,r10\n\
     mov        r2,#0x28\n\
     mov        r3,#0x1\n\
     bl         fun_08015f48\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012388:\n\
     .4byte 0x0877FD30\n\
DAT_0801238c:\n\
     .4byte 0x00000E9B\n\
DAT_08012390:\n\
     .4byte 0x0200DC5C\n\
    ");
}
__attribute__((naked)) void fun_08012394()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801239c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080123a4()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080123b0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080123b8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080123c4()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080123cc()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080123d8()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012466\n\
     mov        r0,#0x31\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801240c\n\
     mov        r0,#0x32\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801240c\n\
     mov        r0,#0x33\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012424\n\
LAB_0801240c:\n\
     ldr        r1,DAT_08012420\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x12\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08012466\n\
.space 1\n\
.space 1\n\
DAT_08012420:\n\
     .4byte 0x00000189\n\
LAB_08012424:\n\
     ldr        r2,DAT_08012470\n\
     ldr        r3,DAT_08012474\n\
     mov        r0,#0x12\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x3\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,DAT_08012478\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x31\n\
     bl         fun_0800ebec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012466\n\
     mov        r0,#0x32\n\
     bl         fun_080018e4\n\
     mov        r0,#0x33\n\
     bl         fun_080018e4\n\
     mov        r0,#0x76\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     mov        r0,#0x7f\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_08012466:\n\
     add        sp,#0x10\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012470:\n\
     .4byte 0x0000018B\n\
DAT_08012474:\n\
     .4byte 0x00000189\n\
DAT_08012478:\n\
     .4byte 0x000003E7\n\
    ");
}
__attribute__((naked)) void fun_0801247c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r10,r0\n\
     add        r7,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r6,DAT_0801253c\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_08012540\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r6,#0x2\n\
     mov        r9,r1\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080124da\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_080124da:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012520\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08012520:\n\
     ldr        r1,DAT_08012544\n\
     mov        r0,r10\n\
     mov        r2,#0x28\n\
     mov        r3,#0x2\n\
     bl         fun_08015f48\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801253c:\n\
     .4byte 0x0877FD58\n\
DAT_08012540:\n\
     .4byte 0x00000E9E\n\
DAT_08012544:\n\
     .4byte 0x0200DC60\n\
    ");
}
__attribute__((naked)) void fun_08012548()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012550()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012558()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012564()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801256c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012578()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012580()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080125ac\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0801259e\n\
     cmp        r0,#0x0\n\
     beq        LAB_080125a4\n\
     b          LAB_080125c2\n\
LAB_0801259e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_080125bc\n\
     b          LAB_080125c2\n\
LAB_080125a4:\n\
     ldr        r1,DAT_080125a8\n\
     b          LAB_080125ae\n\
DAT_080125a8:\n\
     .4byte 0x0000036A\n\
LAB_080125ac:\n\
     ldr        r1,DAT_080125b8\n\
LAB_080125ae:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080125c2\n\
.space 1\n\
.space 1\n\
DAT_080125b8:\n\
     .4byte 0x0000036B\n\
LAB_080125bc:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080125c2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080125c8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080125d0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080125fc\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080125ee\n\
     cmp        r0,#0x0\n\
     beq        LAB_080125f4\n\
     b          LAB_08012612\n\
LAB_080125ee:\n\
     cmp        r1,#0x2\n\
     beq        LAB_0801260c\n\
     b          LAB_08012612\n\
LAB_080125f4:\n\
     ldr        r1,DAT_080125f8\n\
     b          LAB_080125fe\n\
DAT_080125f8:\n\
     .4byte 0x00000361\n\
LAB_080125fc:\n\
     ldr        r1,DAT_08012608\n\
LAB_080125fe:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08012612\n\
.space 1\n\
.space 1\n\
DAT_08012608:\n\
     .4byte 0x00000362\n\
LAB_0801260c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08012612:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08012618()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012620()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08012638\n\
     cmp        r4,#0x1\n\
     beq        LAB_0801264c\n\
     b          LAB_08012654\n\
LAB_08012638:\n\
     ldr        r1,DAT_08012648\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08012654\n\
.space 1\n\
.space 1\n\
DAT_08012648:\n\
     .4byte 0x000003A6\n\
LAB_0801264c:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08012654:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801265c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012664()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_0801267c\n\
     cmp        r4,#0x1\n\
     beq        LAB_0801268c\n\
     b          LAB_08012694\n\
LAB_0801267c:\n\
     mov        r1,#0xec\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08012694\n\
LAB_0801268c:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08012694:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801269c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080126a4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080126bc\n\
     cmp        r0,#0x1\n\
     beq        LAB_080126cc\n\
     b          LAB_080126d2\n\
LAB_080126bc:\n\
     ldr        r1,DAT_080126c8\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080126d2\n\
.space 1\n\
.space 1\n\
DAT_080126c8:\n\
     .4byte 0x000003BA\n\
LAB_080126cc:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080126d2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080126d8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080126e0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801270c\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080126fe\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012704\n\
     b          LAB_08012722\n\
LAB_080126fe:\n\
     cmp        r1,#0x2\n\
     beq        LAB_0801271c\n\
     b          LAB_08012722\n\
LAB_08012704:\n\
     ldr        r1,DAT_08012708\n\
     b          LAB_0801270e\n\
DAT_08012708:\n\
     .4byte 0x0000034D\n\
LAB_0801270c:\n\
     ldr        r1,DAT_08012718\n\
LAB_0801270e:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08012722\n\
.space 1\n\
.space 1\n\
DAT_08012718:\n\
     .4byte 0x0000034E\n\
LAB_0801271c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08012722:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08012728()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012730()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801275a\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0801274e\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012754\n\
     b          LAB_0801276e\n\
LAB_0801274e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08012768\n\
     b          LAB_0801276e\n\
LAB_08012754:\n\
     mov        r1,#0xe3\n\
     lsl        r1,r1,#0x2\n\
     b          LAB_0801275c\n\
LAB_0801275a:\n\
     ldr        r1,DAT_08012764\n\
LAB_0801275c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801276e\n\
DAT_08012764:\n\
     .4byte 0x0000038E\n\
LAB_08012768:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801276e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08012774()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801277c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08012794\n\
     cmp        r4,#0x1\n\
     beq        LAB_080127ac\n\
     b          LAB_080127ba\n\
LAB_08012794:\n\
     ldr        r1,DAT_080127a8\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080127ba\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_080127ba\n\
DAT_080127a8:\n\
     .4byte 0x000003B1\n\
LAB_080127ac:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080127ba\n\
     strb       r4,[r5,#0x18]\n\
LAB_080127ba:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080127c0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080127c8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080127d4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080127dc()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080127e8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080127f0()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080127fc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012804()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012810()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012818()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012824()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801287a\n\
     mov        r0,#0x2f\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801285e\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0xb0\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x2f\n\
     bl         fun_080018e4\n\
     mov        r0,#0x6\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0xf\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x1\n\
     b          LAB_08012860\n\
LAB_0801285e:\n\
     mov        r0,#0x0\n\
LAB_08012860:\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801287a\n\
     mov        r1,#0xae\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0xf\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_0801287a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08012880()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080128c8\n\
     mov        r0,#0x2f\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080128ba\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0xb0\n\
     lsl        r1,r1,#0x1\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x2f\n\
     bl         fun_080018e4\n\
     mov        r0,#0x6\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0xf\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x1\n\
     b          LAB_080128bc\n\
LAB_080128ba:\n\
     mov        r0,#0x0\n\
LAB_080128bc:\n\
     cmp        r0,#0x0\n\
     bne        LAB_080128c8\n\
     ldr        r1,DAT_080128d0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_080128c8:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080128d0:\n\
     .4byte 0x00000165\n\
    ");
}
__attribute__((naked)) void fun_080128d4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_080128f0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080128e8\n\
     mov        r0,#0x6\n\
     strb       r0,[r4,#0x18]\n\
LAB_080128e8:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080128f0:\n\
     .4byte 0x00000167\n\
    ");
}
__attribute__((naked)) void fun_080128f4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_08012920\n\
     ldr        r2,DAT_08012924\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     bl         fun_080020a4\n\
     mov        r1,#0xdf\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x5\n\
     strb       r0,[r4,#0x18]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012920:\n\
     .4byte 0x020025E8\n\
DAT_08012924:\n\
     .4byte 0x0000027F\n\
    ");
}
__attribute__((naked)) void fun_08012928()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2f\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801293c\n\
     mov        r0,#0x0\n\
     b          LAB_0801295a\n\
LAB_0801293c:\n\
     mov        r1,#0xb0\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x2f\n\
     bl         fun_080018e4\n\
     mov        r0,#0x6\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0xf\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x1\n\
LAB_0801295a:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08012960()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012968()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012980\n\
     cmp        r0,#0x1\n\
     beq        LAB_08012990\n\
     b          LAB_08012996\n\
LAB_08012980:\n\
     ldr        r1,DAT_0801298c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08012996\n\
.space 1\n\
.space 1\n\
DAT_0801298c:\n\
     .4byte 0x000003BD\n\
LAB_08012990:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08012996:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801299c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080129a4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r5,#0x1\n\
     add        r0,r5,#0x0\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012a18\n\
     mov        r0,#0x7e\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012a18\n\
     mov        r0,#0x19\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012a08\n\
     ldr        r1,DAT_08012a00\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x7e\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     mov        r0,#0x1d\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     ldr        r1,DAT_08012a04\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc8\n\
     str        r5,[r0,#0x0]\n\
     add        r0,#0x20\n\
     str        r5,[r0,#0x0]\n\
     mov        r2,#0x84\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r1,r2\n\
     str        r5,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     b          LAB_08012a18\n\
DAT_08012a00:\n\
     .4byte 0x0000021D\n\
DAT_08012a04:\n\
     .4byte 0x020006A0\n\
LAB_08012a08:\n\
     ldr        r1,DAT_08012a20\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1d\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08012a18:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012a20:\n\
     .4byte 0x0000021B\n\
    ");
}
__attribute__((naked)) void fun_08012a24()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012a30()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012a38()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08012a64\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08012a56\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012a5c\n\
     b          LAB_08012a7a\n\
LAB_08012a56:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08012a74\n\
     b          LAB_08012a7a\n\
LAB_08012a5c:\n\
     ldr        r1,DAT_08012a60\n\
     b          LAB_08012a66\n\
DAT_08012a60:\n\
     .4byte 0x00000355\n\
LAB_08012a64:\n\
     ldr        r1,DAT_08012a70\n\
LAB_08012a66:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08012a7a\n\
.space 1\n\
.space 1\n\
DAT_08012a70:\n\
     .4byte 0x00000356\n\
LAB_08012a74:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08012a7a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08012a80()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012a88()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x69\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012ab0\n\
     ldr        r1,DAT_08012aac\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x3e\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08012ab6\n\
.space 1\n\
.space 1\n\
DAT_08012aac:\n\
     .4byte 0x000001E7\n\
LAB_08012ab0:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08012ab6:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08012abc()
{
    asm("\n\
     push       {lr}\n\
     add        r0,r2,#0x0\n\
     add        r1,r3,#0x0\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x2\n\
     ldr        r3,DAT_08012af4\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012af0\n\
     ldr        r1,DAT_08012af8\n\
     ldr        r0,DAT_08012afc\n\
     add        r2,r1,r0\n\
     mov        r0,#0x1\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0xd4\n\
     lsl        r0,r0,#0x1\n\
     add        r2,r1,r0\n\
     mov        r0,#0x2\n\
     str        r0,[r2,#0x0]\n\
     mov        r0,#0xdc\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
     mov        r0,#0x4\n\
     strb       r0,[r1,#0x0]\n\
LAB_08012af0:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08012af4:\n\
     .4byte 0x00000DC8\n\
DAT_08012af8:\n\
     .4byte 0x020006A0\n\
DAT_08012afc:\n\
     .4byte 0x00000C68\n\
    ");
}
__attribute__((naked)) void fun_08012b00()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012b08()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012b40\n\
     add        r0,r0,r1\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,DAT_08012b44\n\
     mov        r3,#0x8c\n\
     lsl        r3,r3,#0x1\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x4\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x3\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0xb\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x24\n\
     bl         fun_0800ebec\n\
     add        sp,#0x10\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08012b40:\n\
     .4byte 0x00000DC6\n\
DAT_08012b44:\n\
     .4byte 0x00000197\n\
    ");
}
__attribute__((naked)) void fun_08012b48()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012b80\n\
     add        r0,r0,r1\n\
     mov        r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,DAT_08012b84\n\
     mov        r3,#0x94\n\
     lsl        r3,r3,#0x1\n\
     mov        r0,#0xa\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x4\n\
     str        r0,[sp,#0x4]\n\
     str        r1,[sp,#0x8]\n\
     mov        r0,#0xb\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x24\n\
     bl         fun_0800ebec\n\
     add        sp,#0x10\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012b80:\n\
     .4byte 0x00000DC6\n\
DAT_08012b84:\n\
     .4byte 0x00000197\n\
    ");
}
__attribute__((naked)) void fun_08012b88()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012ba4\n\
     add        r0,r0,r1\n\
     mov        r1,#0x4\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08012ba4:\n\
     .4byte 0x00000DC6\n\
    ");
}
__attribute__((naked)) void fun_08012ba8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012bce\n\
     bl         fun_0800d3f8\n\
     ldr        r0,DAT_08012bd4\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012bd8\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strb       r0,[r4,#0x18]\n\
LAB_08012bce:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08012bd4:\n\
     .4byte 0x0000FFFE\n\
DAT_08012bd8:\n\
     .4byte 0x00000DC6\n\
    ");
}
__attribute__((naked)) void fun_08012bdc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     ldr        r4,DAT_08012c90\n\
     mov        r0,#0xd8\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r4,r0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x2\n\
     ldr        r3,DAT_08012c94\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012c88\n\
     mov        r2,#0xd9\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r4,r2\n\
     ldr        r0,DAT_08012c98\n\
     ldrh       r2,[r1,#0x0]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x0]\n\
     mov        r1,#0x89\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     mov        r2,#0xd2\n\
     lsl        r2,r2,#0x1\n\
     add        r1,r4,r2\n\
     mov        r0,#0x89\n\
     lsl        r0,r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08012c9c\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     add        r2,#0x2\n\
     add        r1,r4,r2\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0xdc\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r4,r0\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08012ca0\n\
     ldr        r2,DAT_08012ca4\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0xd\n\
     bl         fun_080018e4\n\
     mov        r0,#0x64\n\
     mov        r1,#0x0\n\
     bl         fun_0800cab4\n\
     mov        r0,#0x70\n\
     mov        r1,#0x0\n\
     bl         fun_0800cab4\n\
     mov        r0,#0x69\n\
     mov        r1,#0x1\n\
     bl         fun_0800cab4\n\
     ldr        r0,DAT_08012ca8\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     ldr        r0,DAT_08012cac\n\
     add        r1,r4,r0\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     strb       r0,[r4,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012cb0\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
LAB_08012c88:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012c90:\n\
     .4byte 0x020006A0\n\
DAT_08012c94:\n\
     .4byte 0x00000D88\n\
DAT_08012c98:\n\
     .4byte 0x0000FFFE\n\
DAT_08012c9c:\n\
     .4byte 0x00000936\n\
DAT_08012ca0:\n\
     .4byte 0x0200DC90\n\
DAT_08012ca4:\n\
     .4byte 0x00000336\n\
DAT_08012ca8:\n\
     .4byte 0x00000147\n\
DAT_08012cac:\n\
     .4byte 0x00000C28\n\
DAT_08012cb0:\n\
     .4byte 0x00000DD8\n\
    ");
}
__attribute__((naked)) void fun_08012cb4()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012cbc()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08012cc8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x69\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012cf0\n\
     ldr        r1,DAT_08012cec\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x3e\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08012d18\n\
.space 1\n\
.space 1\n\
DAT_08012cec:\n\
     .4byte 0x000001E7\n\
LAB_08012cf0:\n\
     ldr        r1,DAT_08012d20\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012d18\n\
     ldr        r1,DAT_08012d24\n\
     mov        r0,#0x22\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08012d28\n\
     ldr        r2,DAT_08012d2c\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012d30\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
LAB_08012d18:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012d20:\n\
     .4byte 0x000001EB\n\
DAT_08012d24:\n\
     .4byte 0x02002524\n\
DAT_08012d28:\n\
     .4byte 0x020025E8\n\
DAT_08012d2c:\n\
     .4byte 0x00000283\n\
DAT_08012d30:\n\
     .4byte 0x00000DF2\n\
    ");
}
__attribute__((naked)) void fun_08012d34()
{
    asm("\n\
     push       {lr}\n\
     add        r0,r2,#0x0\n\
     add        r1,r3,#0x0\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x2\n\
     ldr        r3,DAT_08012d80\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08012d7a\n\
     ldr        r1,DAT_08012d84\n\
     ldr        r2,DAT_08012d88\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r2,DAT_08012d8c\n\
     mov        r3,#0xdc\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r2,r3\n\
     mov        r0,#0x5\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0xd9\n\
     lsl        r0,r0,#0x1\n\
     add        r3,r2,r0\n\
     mov        r1,#0x1\n\
     ldrh       r0,[r3,#0x0]\n\
     orr        r0,r1\n\
     strh       r0,[r3,#0x0]\n\
     mov        r3,#0xda\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r2,r3\n\
     strb       r1,[r0,#0x0]\n\
LAB_08012d7a:\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08012d80:\n\
     .4byte 0x00000DE8\n\
DAT_08012d84:\n\
     .4byte 0x0200DC90\n\
DAT_08012d88:\n\
     .4byte 0x00000335\n\
DAT_08012d8c:\n\
     .4byte 0x020006A0\n\
    ");
}
__attribute__((naked)) void fun_08012d90()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x14\n\
     str        r0,[sp,#0x0]\n\
     str        r2,[sp,#0x4]\n\
     str        r3,[sp,#0x8]\n\
     ldr        r0,[sp,#0x34]\n\
     ldr        r1,[sp,#0x38]\n\
     ldr        r2,[sp,#0x3c]\n\
     ldr        r3,[sp,#0x40]\n\
     ldr        r4,[sp,#0x44]\n\
     ldr        r5,[sp,#0x48]\n\
     ldr        r6,[sp,#0x4c]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r10,r1\n\
     lsl        r2,r2,#0x10\n\
     lsr        r7,r2,#0x10\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     mov        r8,r3\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     str        r5,[sp,#0xc]\n\
     lsl        r6,r6,#0x10\n\
     lsr        r6,r6,#0x10\n\
     str        r6,[sp,#0x10]\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_08012efc\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012e24\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012f00\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012e24\n\
     mov        r0,#0x2\n\
     ldr        r2,[sp,#0x0]\n\
     str        r0,[r2,#0x8]\n\
     ldr        r1,DAT_08012f04\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x18]\n\
     strh       r4,[r1,#0x10]\n\
     mov        r0,r9\n\
     strh       r0,[r2,#0x4]\n\
     mov        r1,r10\n\
     strh       r1,[r2,#0x6]\n\
     ldr        r2,[sp,#0x4]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[sp,#0x8]\n\
     strh       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     strh       r7,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012f00\n\
     add        r0,r0,r1\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x0]\n\
LAB_08012e24:\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_08012efc\n\
     add        r0,r0,r5\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r6,DAT_08012f00\n\
     add        r0,r0,r6\n\
     ldrh       r3,[r0,#0x0]\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0x8]\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     ldr        r0,[sp,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r7\n\
     bne        LAB_08012e92\n\
     ldr        r1,[sp,#0x8]\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r8\n\
     bne        LAB_08012e92\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r7\n\
     bne        LAB_08012e92\n\
     bl         fun_080020a4\n\
     add        r0,r0,r6\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r8\n\
     bne        LAB_08012e92\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     mov        r4,#0x0\n\
     mov        r2,r9\n\
     strh       r2,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r6\n\
     mov        r1,r10\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08012f08\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,DAT_08012f0c\n\
     mov        r2,sp\n\
     ldrh       r2,[r2,#0xc]\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
LAB_08012e92:\n\
     ldr        r0,[sp,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r9\n\
     bne        LAB_08012eec\n\
     ldr        r1,[sp,#0x8]\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r10\n\
     bne        LAB_08012eec\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_08012f00\n\
     add        r0,r0,r2\n\
     mov        r1,#0x0\n\
     mov        r5,#0x0\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_08012efc\n\
     add        r4,r4,r0\n\
     strh       r5,[r4,#0x0]\n\
     ldr        r0,DAT_08012f10\n\
     ldr        r2,[sp,#0x0]\n\
     strh       r0,[r2,#0x4]\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r2,[sp,#0x4]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[sp,#0x8]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_08012f04\n\
     strb       r1,[r0,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08012f14\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r2,#0xe5\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,[sp,#0x10]\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_08012eec:\n\
     add        sp,#0x14\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08012efc:\n\
     .4byte 0x00000E4A\n\
DAT_08012f00:\n\
     .4byte 0x00000E4C\n\
DAT_08012f04:\n\
     .4byte 0x020006A0\n\
DAT_08012f08:\n\
     .4byte 0x0200DCA0\n\
DAT_08012f0c:\n\
     .4byte 0x0200DC90\n\
DAT_08012f10:\n\
     .4byte 0x0000FFE0\n\
DAT_08012f14:\n\
     .4byte 0x00000DD8\n\
    ");
}
__attribute__((naked)) void fun_08012f18()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x1c\n\
     add        r4,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     add        r6,r2,#0x0\n\
     add        r7,r3,#0x0\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x42\n\
     bne        LAB_08012f6e\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x1\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012f6e\n\
     mov        r1,#0xa5\n\
     lsl        r1,r1,#0x3\n\
     str        r1,[sp,#0x0]\n\
     ldr        r0,DAT_080132d0\n\
     str        r0,[sp,#0x4]\n\
     str        r1,[sp,#0x8]\n\
     add        r0,#0x42\n\
     str        r0,[sp,#0xc]\n\
     mov        r0,#0x1c\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_080132d4\n\
     str        r0,[sp,#0x14]\n\
     str        r2,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_08012f6e:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x43\n\
     bne        LAB_08012fb8\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x2\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08012fb8\n\
     mov        r0,#0xf5\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[sp,#0x0]\n\
     ldr        r1,DAT_080132d8\n\
     str        r1,[sp,#0x4]\n\
     add        r0,#0x66\n\
     str        r0,[sp,#0x8]\n\
     str        r1,[sp,#0xc]\n\
     mov        r0,#0xe\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_080132dc\n\
     str        r0,[sp,#0x14]\n\
     str        r2,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_08012fb8:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x44\n\
     bne        LAB_08013002\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x4\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08013002\n\
     ldr        r0,DAT_080132e0\n\
     str        r0,[sp,#0x0]\n\
     ldr        r1,DAT_080132e4\n\
     str        r1,[sp,#0x4]\n\
     sub        r0,#0x70\n\
     str        r0,[sp,#0x8]\n\
     str        r1,[sp,#0xc]\n\
     mov        r0,#0x2a\n\
     str        r0,[sp,#0x10]\n\
     mov        r0,#0xaa\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[sp,#0x14]\n\
     str        r2,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_08013002:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x45\n\
     bne        LAB_0801304c\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r3,#0x8\n\
     and        r2,r3\n\
     cmp        r2,#0x0\n\
     bne        LAB_0801304c\n\
     mov        r1,#0xac\n\
     lsl        r1,r1,#0x4\n\
     str        r1,[sp,#0x0]\n\
     ldr        r0,DAT_080132e8\n\
     str        r0,[sp,#0x4]\n\
     str        r1,[sp,#0x8]\n\
     sub        r0,#0x62\n\
     str        r0,[sp,#0xc]\n\
     str        r2,[sp,#0x10]\n\
     mov        r0,#0xaf\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[sp,#0x14]\n\
     str        r3,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_0801304c:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x46\n\
     bne        LAB_08013096\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x10\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08013096\n\
     mov        r1,#0xb4\n\
     lsl        r1,r1,#0x1\n\
     str        r1,[sp,#0x0]\n\
     ldr        r0,DAT_080132ec\n\
     str        r0,[sp,#0x4]\n\
     str        r1,[sp,#0x8]\n\
     add        r0,#0x48\n\
     str        r0,[sp,#0xc]\n\
     mov        r0,#0x1c\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_080132f0\n\
     str        r0,[sp,#0x14]\n\
     str        r2,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_08013096:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x47\n\
     bne        LAB_080130e0\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080130e0\n\
     ldr        r0,DAT_080132f4\n\
     str        r0,[sp,#0x0]\n\
     ldr        r0,DAT_080132f8\n\
     str        r0,[sp,#0x4]\n\
     ldr        r0,DAT_080132fc\n\
     str        r0,[sp,#0x8]\n\
     ldr        r0,DAT_08013300\n\
     str        r0,[sp,#0xc]\n\
     mov        r0,#0x2a\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_08013304\n\
     str        r0,[sp,#0x14]\n\
     str        r1,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_080130e0:\n\
     mov        r0,#0x12\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013134\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x48\n\
     bne        LAB_08013134\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x40\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08013134\n\
     ldr        r0,DAT_08013308\n\
     str        r0,[sp,#0x0]\n\
     ldr        r1,DAT_0801330c\n\
     str        r1,[sp,#0x4]\n\
     sub        r0,#0x63\n\
     str        r0,[sp,#0x8]\n\
     str        r1,[sp,#0xc]\n\
     mov        r0,#0x2a\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_08013310\n\
     str        r0,[sp,#0x14]\n\
     str        r2,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_08013134:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x49\n\
     bne        LAB_0801317c\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801317c\n\
     ldr        r0,DAT_08013314\n\
     str        r0,[sp,#0x0]\n\
     sub        r1,#0xe1\n\
     str        r1,[sp,#0x4]\n\
     sub        r0,#0x5f\n\
     str        r0,[sp,#0x8]\n\
     str        r1,[sp,#0xc]\n\
     mov        r0,#0x2a\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_08013318\n\
     str        r0,[sp,#0x14]\n\
     str        r2,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_0801317c:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xad\n\
     bne        LAB_080131d4\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     bne        LAB_080131d4\n\
     ldr        r0,DAT_0801331c\n\
     ldrh       r1,[r0,#0x4]\n\
     ldrh       r2,[r0,#0x6]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x82\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     str        r2,[sp,#0x4]\n\
     sub        r1,#0x20\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x8]\n\
     str        r2,[sp,#0xc]\n\
     mov        r0,#0xe\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_08013320\n\
     str        r0,[sp,#0x14]\n\
     str        r3,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_080131d4:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xb0\n\
     bne        LAB_0801322c\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801322c\n\
     ldr        r0,DAT_0801331c\n\
     ldrh       r1,[r0,#0x4]\n\
     ldrh       r2,[r0,#0x6]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x82\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     str        r2,[sp,#0x4]\n\
     sub        r1,#0x20\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x8]\n\
     str        r2,[sp,#0xc]\n\
     mov        r0,#0xe\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_08013320\n\
     str        r0,[sp,#0x14]\n\
     str        r3,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_0801322c:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xb1\n\
     bne        LAB_08013284\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     and        r0,r3\n\
     cmp        r0,#0x0\n\
     bne        LAB_08013284\n\
     ldr        r0,DAT_0801331c\n\
     ldrh       r1,[r0,#0x4]\n\
     ldrh       r2,[r0,#0x6]\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x82\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x0]\n\
     str        r2,[sp,#0x4]\n\
     sub        r1,#0x20\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     str        r1,[sp,#0x8]\n\
     str        r2,[sp,#0xc]\n\
     mov        r0,#0xe\n\
     str        r0,[sp,#0x10]\n\
     ldr        r0,DAT_08013320\n\
     str        r0,[sp,#0x14]\n\
     str        r3,[sp,#0x18]\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     add        r3,r7,#0x0\n\
     bl         fun_08012d90\n\
LAB_08013284:\n\
     bl         fun_080020a4\n\
     mov        r4,#0xde\n\
     lsl        r4,r4,#0x4\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xad\n\
     beq        LAB_080132ac\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xb0\n\
     beq        LAB_080132ac\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0xb1\n\
     bne        LAB_08013332\n\
LAB_080132ac:\n\
     mov        r0,#0x23\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08013332\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     b          LAB_08013324\n\
.space 1\n\
.space 1\n\
DAT_080132d0:\n\
     .4byte 0x00000859\n\
DAT_080132d4:\n\
     .4byte 0x00000269\n\
DAT_080132d8:\n\
     .4byte 0x000002FF\n\
DAT_080132dc:\n\
     .4byte 0x000002A1\n\
DAT_080132e0:\n\
     .4byte 0x000008EE\n\
DAT_080132e4:\n\
     .4byte 0x00000D0F\n\
DAT_080132e8:\n\
     .4byte 0x0000114F\n\
DAT_080132ec:\n\
     .4byte 0x00000DF3\n\
DAT_080132f0:\n\
     .4byte 0x000002C7\n\
DAT_080132f4:\n\
     .4byte 0x00000C3C\n\
DAT_080132f8:\n\
     .4byte 0x00000201\n\
DAT_080132fc:\n\
     .4byte 0x00000BC2\n\
DAT_08013300:\n\
     .4byte 0x00000187\n\
DAT_08013304:\n\
     .4byte 0x000002CA\n\
DAT_08013308:\n\
     .4byte 0x000007CE\n\
DAT_0801330c:\n\
     .4byte 0x000004D7\n\
DAT_08013310:\n\
     .4byte 0x000002CD\n\
DAT_08013314:\n\
     .4byte 0x00000416\n\
DAT_08013318:\n\
     .4byte 0x000002D5\n\
DAT_0801331c:\n\
     .4byte 0x020006A0\n\
DAT_08013320:\n\
     .4byte 0x0000065B\n\
LAB_08013324:\n\
     beq        LAB_08013332\n\
     mov        r0,#0x23\n\
     bl         fun_080017b8\n\
     mov        r0,#0x1e\n\
     bl         fun_08001088\n\
LAB_08013332:\n\
     add        sp,#0x1c\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801333c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r5,#0x0\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801336c\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_08013370\n\
     add        r4,r4,r0\n\
     strh       r5,[r4,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe5\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     str        r5,[r0,#0x0]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801336c:\n\
     .4byte 0x00000E4C\n\
DAT_08013370:\n\
     .4byte 0x00000E4A\n\
    ");
}
__attribute__((naked)) void fun_08013374()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013380()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x1c\n\
     mov        r5,#0xa5\n\
     lsl        r5,r5,#0x3\n\
     str        r5,[sp,#0x0]\n\
     ldr        r4,DAT_080133ac\n\
     str        r4,[sp,#0x4]\n\
     str        r5,[sp,#0x8]\n\
     add        r4,#0x42\n\
     str        r4,[sp,#0xc]\n\
     mov        r4,#0x1c\n\
     str        r4,[sp,#0x10]\n\
     ldr        r4,DAT_080133b0\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x1\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080133ac:\n\
     .4byte 0x00000859\n\
DAT_080133b0:\n\
     .4byte 0x00000269\n\
    ");
}
__attribute__((naked)) void fun_080133b4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x1c\n\
     mov        r4,#0xf5\n\
     lsl        r4,r4,#0x2\n\
     str        r4,[sp,#0x0]\n\
     ldr        r5,DAT_080133e0\n\
     str        r5,[sp,#0x4]\n\
     add        r4,#0x66\n\
     str        r4,[sp,#0x8]\n\
     str        r5,[sp,#0xc]\n\
     mov        r4,#0xe\n\
     str        r4,[sp,#0x10]\n\
     ldr        r4,DAT_080133e4\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x2\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080133e0:\n\
     .4byte 0x000002FF\n\
DAT_080133e4:\n\
     .4byte 0x000002A1\n\
    ");
}
__attribute__((naked)) void fun_080133e8()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x1c\n\
     ldr        r4,DAT_08013414\n\
     str        r4,[sp,#0x0]\n\
     ldr        r5,DAT_08013418\n\
     str        r5,[sp,#0x4]\n\
     sub        r4,#0x70\n\
     str        r4,[sp,#0x8]\n\
     str        r5,[sp,#0xc]\n\
     mov        r4,#0x2a\n\
     str        r4,[sp,#0x10]\n\
     mov        r4,#0xaa\n\
     lsl        r4,r4,#0x2\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x4\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08013414:\n\
     .4byte 0x000008EE\n\
DAT_08013418:\n\
     .4byte 0x00000D0F\n\
    ");
}
__attribute__((naked)) void fun_0801341c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x1c\n\
     mov        r5,#0xac\n\
     lsl        r5,r5,#0x4\n\
     str        r5,[sp,#0x0]\n\
     ldr        r4,DAT_0801344c\n\
     str        r4,[sp,#0x4]\n\
     str        r5,[sp,#0x8]\n\
     sub        r4,#0x62\n\
     str        r4,[sp,#0xc]\n\
     mov        r4,#0x0\n\
     str        r4,[sp,#0x10]\n\
     mov        r4,#0xaf\n\
     lsl        r4,r4,#0x2\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x8\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801344c:\n\
     .4byte 0x0000114F\n\
    ");
}
__attribute__((naked)) void fun_08013450()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x1c\n\
     mov        r5,#0xb4\n\
     lsl        r5,r5,#0x1\n\
     str        r5,[sp,#0x0]\n\
     ldr        r4,DAT_0801347c\n\
     str        r4,[sp,#0x4]\n\
     str        r5,[sp,#0x8]\n\
     add        r4,#0x48\n\
     str        r4,[sp,#0xc]\n\
     mov        r4,#0x1c\n\
     str        r4,[sp,#0x10]\n\
     ldr        r4,DAT_08013480\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x10\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801347c:\n\
     .4byte 0x00000DF3\n\
DAT_08013480:\n\
     .4byte 0x000002C7\n\
    ");
}
__attribute__((naked)) void fun_08013484()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x1c\n\
     ldr        r4,DAT_080134b0\n\
     str        r4,[sp,#0x0]\n\
     ldr        r4,DAT_080134b4\n\
     str        r4,[sp,#0x4]\n\
     ldr        r4,DAT_080134b8\n\
     str        r4,[sp,#0x8]\n\
     ldr        r4,DAT_080134bc\n\
     str        r4,[sp,#0xc]\n\
     mov        r4,#0x2a\n\
     str        r4,[sp,#0x10]\n\
     ldr        r4,DAT_080134c0\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x20\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080134b0:\n\
     .4byte 0x00000C3C\n\
DAT_080134b4:\n\
     .4byte 0x00000201\n\
DAT_080134b8:\n\
     .4byte 0x00000BC2\n\
DAT_080134bc:\n\
     .4byte 0x00000187\n\
DAT_080134c0:\n\
     .4byte 0x000002CA\n\
    ");
}
__attribute__((naked)) void fun_080134c4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x1c\n\
     ldr        r4,DAT_080134f0\n\
     str        r4,[sp,#0x0]\n\
     ldr        r5,DAT_080134f4\n\
     str        r5,[sp,#0x4]\n\
     sub        r4,#0x63\n\
     str        r4,[sp,#0x8]\n\
     str        r5,[sp,#0xc]\n\
     mov        r4,#0x2a\n\
     str        r4,[sp,#0x10]\n\
     ldr        r4,DAT_080134f8\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x40\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080134f0:\n\
     .4byte 0x000007CE\n\
DAT_080134f4:\n\
     .4byte 0x000004D7\n\
DAT_080134f8:\n\
     .4byte 0x000002CD\n\
    ");
}
__attribute__((naked)) void fun_080134fc()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x1c\n\
     ldr        r4,DAT_08013528\n\
     str        r4,[sp,#0x0]\n\
     ldr        r5,DAT_0801352c\n\
     str        r5,[sp,#0x4]\n\
     sub        r4,#0x5f\n\
     str        r4,[sp,#0x8]\n\
     str        r5,[sp,#0xc]\n\
     mov        r4,#0x2a\n\
     str        r4,[sp,#0x10]\n\
     ldr        r4,DAT_08013530\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x80\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08013528:\n\
     .4byte 0x00000416\n\
DAT_0801352c:\n\
     .4byte 0x00000D6F\n\
DAT_08013530:\n\
     .4byte 0x000002D5\n\
    ");
}
__attribute__((naked)) void fun_08013534()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x1c\n\
     ldr        r4,DAT_08013570\n\
     ldrh       r5,[r4,#0x4]\n\
     ldrh       r6,[r4,#0x6]\n\
     add        r4,r5,#0x0\n\
     sub        r4,#0x82\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     str        r4,[sp,#0x0]\n\
     str        r6,[sp,#0x4]\n\
     sub        r5,#0x20\n\
     lsl        r5,r5,#0x10\n\
     lsr        r5,r5,#0x10\n\
     str        r5,[sp,#0x8]\n\
     str        r6,[sp,#0xc]\n\
     mov        r4,#0xe\n\
     str        r4,[sp,#0x10]\n\
     ldr        r4,DAT_08013574\n\
     str        r4,[sp,#0x14]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x1\n\
     str        r4,[sp,#0x18]\n\
     bl         fun_08012d90\n\
     add        sp,#0x1c\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08013570:\n\
     .4byte 0x020006A0\n\
DAT_08013574:\n\
     .4byte 0x0000065B\n\
    ");
}
__attribute__((naked)) void fun_08013578()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013580()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801358c()
{
    asm("\n\
     push       {lr}\n\
     add        r2,r0,#0x0\n\
     ldr        r1,DAT_080135b4\n\
     ldr        r0,DAT_080135b8\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x1d\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     beq        LAB_080135a8\n\
     mov        r0,#0x2\n\
     strb       r0,[r2,#0x18]\n\
LAB_080135a8:\n\
     ldr        r1,DAT_080135bc\n\
     add        r0,r2,#0x0\n\
     bl         fun_0800ebb4\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080135b4:\n\
     .4byte 0x020006A0\n\
DAT_080135b8:\n\
     .4byte 0x02000690\n\
DAT_080135bc:\n\
     .4byte 0x0000016F\n\
    ");
}
__attribute__((naked)) void fun_080135c0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080135c8()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_080135e0\n\
     cmp        r4,#0x1\n\
     beq        LAB_080135f4\n\
     b          LAB_080135fc\n\
LAB_080135e0:\n\
     ldr        r1,DAT_080135f0\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_080135fc\n\
.space 1\n\
.space 1\n\
DAT_080135f0:\n\
     .4byte 0x000003A7\n\
LAB_080135f4:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_080135fc:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013604()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801360c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013624\n\
     cmp        r0,#0x1\n\
     beq        LAB_08013634\n\
     b          LAB_0801363c\n\
LAB_08013624:\n\
     ldr        r1,DAT_08013630\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801363c\n\
.space 1\n\
.space 1\n\
DAT_08013630:\n\
     .4byte 0x0000030F\n\
LAB_08013634:\n\
     ldr        r1,DAT_08013644\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_0801363c:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08013644:\n\
     .4byte 0x00000311\n\
    ");
}
__attribute__((naked)) void fun_08013648()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013650()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013668\n\
     cmp        r0,#0x1\n\
     beq        LAB_08013678\n\
     b          LAB_0801367e\n\
LAB_08013668:\n\
     ldr        r1,DAT_08013674\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801367e\n\
.space 1\n\
.space 1\n\
DAT_08013674:\n\
     .4byte 0x0000039A\n\
LAB_08013678:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801367e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08013684()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801368c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080136a4\n\
     cmp        r0,#0x1\n\
     beq        LAB_080136b4\n\
     b          LAB_080136ba\n\
LAB_080136a4:\n\
     ldr        r1,DAT_080136b0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080136ba\n\
.space 1\n\
.space 1\n\
DAT_080136b0:\n\
     .4byte 0x0000039B\n\
LAB_080136b4:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080136ba:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080136c0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080136c8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080136e0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080136ec\n\
     b          LAB_080136f2\n\
LAB_080136e0:\n\
     mov        r1,#0xe7\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080136f2\n\
LAB_080136ec:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080136f2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080136f8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013700()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013718\n\
     cmp        r0,#0x1\n\
     beq        LAB_08013728\n\
     b          LAB_0801372e\n\
LAB_08013718:\n\
     ldr        r1,DAT_08013724\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801372e\n\
.space 1\n\
.space 1\n\
DAT_08013724:\n\
     .4byte 0x0000039D\n\
LAB_08013728:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801372e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08013734()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801373c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013754\n\
     cmp        r0,#0x1\n\
     beq        LAB_08013764\n\
     b          LAB_0801376a\n\
LAB_08013754:\n\
     ldr        r1,DAT_08013760\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801376a\n\
.space 1\n\
.space 1\n\
DAT_08013760:\n\
     .4byte 0x0000039F\n\
LAB_08013764:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801376a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08013770()
{
    asm("\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013778()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_08013792\n\
     mov        r1,#0xe8\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_08013792:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08013798()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r6,r0,#0x0\n\
     mov        r8,r2\n\
     mov        r9,r3\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080137b2\n\
     mov        r0,#0x0\n\
     strb       r0,[r6,#0x14]\n\
LAB_080137b2:\n\
     ldrh       r0,[r6,#0x4]\n\
     ldrh       r1,[r6,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x6c\n\
     bgt        LAB_080137d4\n\
     cmp        r0,#0x69\n\
     bge        LAB_080137e2\n\
     cmp        r0,#0x2a\n\
     blt        LAB_080137ec\n\
     cmp        r0,#0x2f\n\
     ble        LAB_080137e2\n\
     cmp        r0,#0x31\n\
     beq        LAB_080137e2\n\
     b          LAB_080137ec\n\
LAB_080137d4:\n\
     cmp        r0,#0x6d\n\
     bne        LAB_080137ec\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080137ec\n\
     mov        r0,#0x4\n\
     b          LAB_080137ea\n\
LAB_080137e2:\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080137ec\n\
     mov        r0,#0x3\n\
LAB_080137ea:\n\
     strb       r0,[r6,#0x14]\n\
LAB_080137ec:\n\
     ldr        r1,DAT_080139c8\n\
     add        r0,r6,#0x0\n\
     mov        r2,#0x36\n\
     mov        r3,#0x0\n\
     bl         fun_08015f48\n\
     ldr        r1,[r6,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08013802\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x6]\n\
LAB_08013802:\n\
     bl         fun_080020a4\n\
     ldr        r7,DAT_080139cc\n\
     mov        r5,#0xdc\n\
     lsl        r5,r5,#0x4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_080139d0\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     ldr        r2,DAT_080139d4\n\
     mov        r10,r2\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013862\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_08013862:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_080139d0\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080138b8\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_080138b8:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r2,DAT_080139d0\n\
     add        r0,r0,r2\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801390e\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_0801390e:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_080139d0\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013964\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_08013964:\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080139e0\n\
     mov        r2,r8\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_080139d8\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r4,r0\n\
     bne        LAB_0801398a\n\
     b          LAB_08013a8c\n\
LAB_0801398a:\n\
     mov        r0,#0x4\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080139a2\n\
     mov        r0,#0x4\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013a8c\n\
LAB_080139a2:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     strh       r4,[r0,#0x0]\n\
     cmp        r4,#0x39\n\
     bgt        LAB_08013a8c\n\
     cmp        r4,#0x37\n\
     blt        LAB_08013a8c\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080139dc\n\
     add        r0,r0,r1\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x2\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     strb       r0,[r6,#0x18]\n\
     b          LAB_08013a8c\n\
.space 1\n\
.space 1\n\
DAT_080139c8:\n\
     .4byte 0x0200DC64\n\
DAT_080139cc:\n\
     .4byte 0x083305B8\n\
DAT_080139d0:\n\
     .4byte 0x083300D0\n\
DAT_080139d4:\n\
     .4byte 0x08330344\n\
DAT_080139d8:\n\
     .4byte 0x00000DC4\n\
DAT_080139dc:\n\
     .4byte 0x00000DC2\n\
LAB_080139e0:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r2,DAT_08013a9c\n\
     add        r0,r0,r2\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013a36\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_08013a36:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_08013a9c\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013a8c\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_08013a8c:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08013a9c:\n\
     .4byte 0x083300D0\n\
    ");
}
__attribute__((naked)) void fun_08013aa0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08013ae0\n\
     add        r0,r0,r1\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013abc\n\
     mov        r0,#0x0\n\
     strb       r0,[r4,#0x14]\n\
LAB_08013abc:\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x6c\n\
     bgt        LAB_08013ae4\n\
     cmp        r0,#0x69\n\
     bge        LAB_08013af2\n\
     cmp        r0,#0x2a\n\
     blt        LAB_08013afc\n\
     cmp        r0,#0x2f\n\
     ble        LAB_08013af2\n\
     cmp        r0,#0x31\n\
     beq        LAB_08013af2\n\
     b          LAB_08013afc\n\
.space 1\n\
.space 1\n\
DAT_08013ae0:\n\
     .4byte 0x00000DC2\n\
LAB_08013ae4:\n\
     cmp        r0,#0x6d\n\
     bne        LAB_08013afc\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013afc\n\
     mov        r0,#0x4\n\
     b          LAB_08013afa\n\
LAB_08013af2:\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013afc\n\
     mov        r0,#0x3\n\
LAB_08013afa:\n\
     strb       r0,[r4,#0x14]\n\
LAB_08013afc:\n\
     ldr        r5,DAT_08013b6c\n\
     ldr        r0,[r5,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013b14\n\
     ldr        r0,[r5,#0x0]\n\
     bl         fun_08001704\n\
     mov        r0,#0x0\n\
     str        r0,[r5,#0x0]\n\
LAB_08013b14:\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08013b70\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08013b26\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
LAB_08013b26:\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x30\n\
     beq        LAB_08013b44\n\
     cmp        r0,#0x30\n\
     blt        LAB_08013b64\n\
     cmp        r0,#0x36\n\
     bgt        LAB_08013b64\n\
     cmp        r0,#0x35\n\
     blt        LAB_08013b64\n\
LAB_08013b44:\n\
     ldr        r0,DAT_08013b74\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013b64\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013b64\n\
     bl         fun_0800ddc8\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
LAB_08013b64:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08013b6c:\n\
     .4byte 0x0200DC64\n\
DAT_08013b70:\n\
     .4byte 0x00000DC2\n\
DAT_08013b74:\n\
     .4byte 0x0200D370\n\
    ");
}
__attribute__((naked)) void fun_08013b78()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r6,r0,#0x0\n\
     mov        r8,r2\n\
     mov        r9,r3\n\
     ldr        r1,DAT_08013bbc\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x18]\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013b9a\n\
     mov        r0,#0x0\n\
     strb       r0,[r6,#0x14]\n\
LAB_08013b9a:\n\
     ldrh       r0,[r6,#0x4]\n\
     ldrh       r1,[r6,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x6c\n\
     bgt        LAB_08013bc0\n\
     cmp        r0,#0x69\n\
     bge        LAB_08013bce\n\
     cmp        r0,#0x2a\n\
     blt        LAB_08013bd8\n\
     cmp        r0,#0x2f\n\
     ble        LAB_08013bce\n\
     cmp        r0,#0x31\n\
     beq        LAB_08013bce\n\
     b          LAB_08013bd8\n\
DAT_08013bbc:\n\
     .4byte 0x020006A0\n\
LAB_08013bc0:\n\
     cmp        r0,#0x6d\n\
     bne        LAB_08013bd8\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013bd8\n\
     mov        r0,#0x4\n\
     b          LAB_08013bd6\n\
LAB_08013bce:\n\
     ldr        r0,[r6,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013bd8\n\
     mov        r0,#0x3\n\
LAB_08013bd6:\n\
     strb       r0,[r6,#0x14]\n\
LAB_08013bd8:\n\
     bl         fun_080014a0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x0\n\
     bne        LAB_08013be6\n\
     b          LAB_08013d68\n\
LAB_08013be6:\n\
     ldr        r1,DAT_08013d58\n\
     add        r0,r6,#0x0\n\
     mov        r2,#0x36\n\
     mov        r3,#0x0\n\
     bl         fun_08015f48\n\
     bl         fun_080020a4\n\
     ldr        r7,DAT_08013d5c\n\
     mov        r5,#0xdc\n\
     lsl        r5,r5,#0x4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_08013d60\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     ldr        r2,DAT_08013d64\n\
     mov        r10,r2\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013c52\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_08013c52:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_08013d60\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013ca8\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_08013ca8:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r2,DAT_08013d60\n\
     add        r0,r0,r2\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013cfe\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
LAB_08013cfe:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     ldr        r1,DAT_08013d60\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r10\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,r8\n\
     mov        r1,r9\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013d7e\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0xd0\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     add        r0,#0xd1\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_08013d7e\n\
.space 1\n\
.space 1\n\
DAT_08013d58:\n\
     .4byte 0x0200DC64\n\
DAT_08013d5c:\n\
     .4byte 0x083305B8\n\
DAT_08013d60:\n\
     .4byte 0x083300D0\n\
DAT_08013d64:\n\
     .4byte 0x08330344\n\
LAB_08013d68:\n\
     ldr        r4,DAT_08013e18\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013d7e\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     str        r5,[r4,#0x0]\n\
LAB_08013d7e:\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     mov        r2,r8\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     bl         fun_08003330\n\
     ldr        r5,DAT_08013e1c\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r1,DAT_08013e20\n\
     mov        r2,r8\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     mov        r2,r9\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x6]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x36\n\
     beq        LAB_08013dec\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x35\n\
     beq        LAB_08013dec\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x30\n\
     beq        LAB_08013dec\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x39\n\
     beq        LAB_08013dec\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x38\n\
     beq        LAB_08013dec\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x37\n\
     bne        LAB_08013df4\n\
LAB_08013dec:\n\
     ldr        r0,DAT_08013e24\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x10\n\
     strh       r0,[r1,#0x0]\n\
LAB_08013df4:\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_08013e16_caseD_31\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08013e1c\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x30\n\
     cmp        r0,#0x9\n\
     bhi        switchD_08013e16_caseD_31\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_08013e28\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_08013e18:\n\
     .4byte 0x0200DC64\n\
DAT_08013e1c:\n\
     .4byte 0x00000DC4\n\
DAT_08013e20:\n\
     .4byte 0x020006A0\n\
DAT_08013e24:\n\
     .4byte 0x0200D370\n\
DAT_08013e28:\n\
     .4byte 0x08013E2C\n\
switchD_08013e16_switchdataD_08013e2c:\n\
     .4byte       switchD_08013e16_caseD_30\n\
     .4byte       switchD_08013e16_caseD_31\n\
     .4byte       switchD_08013e16_caseD_31\n\
     .4byte       switchD_08013e16_caseD_31\n\
     .4byte       switchD_08013e16_caseD_31\n\
     .4byte       switchD_08013e16_caseD_35\n\
     .4byte       switchD_08013e16_caseD_30\n\
     .4byte       switchD_08013e16_caseD_30\n\
     .4byte       switchD_08013e16_caseD_35\n\
     .4byte       switchD_08013e16_caseD_30\n\
switchD_08013e16_caseD_35:\n\
     mov        r0,#0x0\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013e6c\n\
     ldr        r0,DAT_08013e68\n\
     ldrh       r1,[r0,#0x4]\n\
     sub        r1,#0x42\n\
     b          LAB_08013e72\n\
DAT_08013e68:\n\
     .4byte 0x020006A0\n\
LAB_08013e6c:\n\
     ldr        r0,DAT_08013e8c\n\
     ldrh       r1,[r0,#0x4]\n\
     add        r1,#0x56\n\
LAB_08013e72:\n\
     strh       r1,[r0,#0x4]\n\
     add        r1,r0,#0x0\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x18]\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x3\n\
     strb       r0,[r6,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08013e90\n\
     add        r0,r0,r1\n\
     b          LAB_08013eb0\n\
DAT_08013e8c:\n\
     .4byte 0x020006A0\n\
DAT_08013e90:\n\
     .4byte 0x00000DC2\n\
switchD_08013e16_caseD_30:\n\
     ldr        r1,DAT_08013ed0\n\
     ldrh       r0,[r1,#0x6]\n\
     sub        r0,#0x42\n\
     mov        r2,#0x0\n\
     strh       r0,[r1,#0x6]\n\
     strb       r2,[r1,#0x18]\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x3\n\
     strb       r0,[r6,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_08013ed4\n\
     add        r0,r0,r2\n\
LAB_08013eb0:\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x2\n\
     strh       r1,[r0,#0x0]\n\
switchD_08013e16_caseD_31:\n\
     mov        r1,r8\n\
     ldrh       r0,[r1,#0x0]\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     bl         fun_0803a140\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08013ed0:\n\
     .4byte 0x020006A0\n\
DAT_08013ed4:\n\
     .4byte 0x00000DC2\n\
    ");
}
__attribute__((naked)) void fun_08013ed8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     mov        r1,#0xdc\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     mov        r1,#0xd1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08013f04\n\
     add        r0,r0,r1\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x2\n\
     strh       r1,[r0,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08013f04:\n\
     .4byte 0x00000DC2\n\
    ");
}
__attribute__((naked)) void fun_08013f08()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013f16\n\
     mov        r0,#0x0\n\
     strb       r0,[r4,#0x14]\n\
LAB_08013f16:\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x6c\n\
     bgt        LAB_08013f38\n\
     cmp        r0,#0x69\n\
     bge        LAB_08013f46\n\
     cmp        r0,#0x2a\n\
     blt        LAB_08013f50\n\
     cmp        r0,#0x2f\n\
     ble        LAB_08013f46\n\
     cmp        r0,#0x31\n\
     beq        LAB_08013f46\n\
     b          LAB_08013f50\n\
LAB_08013f38:\n\
     cmp        r0,#0x6d\n\
     bne        LAB_08013f50\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013f50\n\
     mov        r0,#0x4\n\
     b          LAB_08013f4e\n\
LAB_08013f46:\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08013f50\n\
     mov        r0,#0x3\n\
LAB_08013f4e:\n\
     strb       r0,[r4,#0x14]\n\
LAB_08013f50:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013f58()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013f60()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08013f78\n\
     cmp        r4,#0x1\n\
     beq        LAB_08013f8c\n\
     b          LAB_08013f94\n\
LAB_08013f78:\n\
     ldr        r1,DAT_08013f88\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08013f94\n\
.space 1\n\
.space 1\n\
DAT_08013f88:\n\
     .4byte 0x000003B2\n\
LAB_08013f8c:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08013f94:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08013f9c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08013fb8\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08013fbc\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08013fb8:\n\
     .4byte 0x00000DBE\n\
DAT_08013fbc:\n\
     .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_08013fc0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1a\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08013fd8()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801400c\n\
     add        r0,r0,r1\n\
     mov        r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,DAT_08014010\n\
     ldr        r3,DAT_08014014\n\
     mov        r0,#0x19\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     str        r1,[sp,#0x8]\n\
     ldr        r0,DAT_08014018\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x18\n\
     bl         fun_0800ebec\n\
     add        sp,#0x10\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801400c:\n\
     .4byte 0x00000DBE\n\
DAT_08014010:\n\
     .4byte 0x000001D7\n\
DAT_08014014:\n\
     .4byte 0x000001DB\n\
DAT_08014018:\n\
     .4byte 0x000003E7\n\
    ");
}
__attribute__((naked)) void fun_0801401c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014042\n\
     bl         fun_0800d3f8\n\
     ldr        r0,DAT_08014048\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801404c\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strb       r0,[r4,#0x18]\n\
LAB_08014042:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08014048:\n\
     .4byte 0x0000FFFE\n\
DAT_0801404c:\n\
     .4byte 0x00000DBE\n\
    ");
}
__attribute__((naked)) void fun_08014050()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014058()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014084\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014076\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801407c\n\
     b          LAB_0801409a\n\
LAB_08014076:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014094\n\
     b          LAB_0801409a\n\
LAB_0801407c:\n\
     ldr        r1,DAT_08014080\n\
     b          LAB_08014086\n\
DAT_08014080:\n\
     .4byte 0x00000349\n\
LAB_08014084:\n\
     ldr        r1,DAT_08014090\n\
LAB_08014086:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801409a\n\
.space 1\n\
.space 1\n\
DAT_08014090:\n\
     .4byte 0x0000034A\n\
LAB_08014094:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801409a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080140a0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080140a8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080140b4()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080140d0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080140ca\n\
     mov        r0,#0x18\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_080140ca:\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080140d0:\n\
     .4byte 0x000001C9\n\
    ");
}
__attribute__((naked)) void fun_080140d4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080140dc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080140f4\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014100\n\
     b          LAB_08014106\n\
LAB_080140f4:\n\
     mov        r1,#0xea\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014106\n\
LAB_08014100:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014106:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801410c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x4\n\
     str        r0,[sp,#0x0]\n\
     add        r7,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r1,DAT_0801422c\n\
     ldr        r0,DAT_08014230\n\
     mov        r2,#0x0\n\
     mov        r10,r2\n\
     strh       r2,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r6,DAT_08014234\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_08014238\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r6,#0x2\n\
     mov        r9,r1\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014178\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08014178:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080141be\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_080141be:\n\
     ldr        r2,[sp,#0x0]\n\
     ldr        r5,[r2,#0xc]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801424a\n\
     ldr        r4,DAT_0801423c\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080141dc\n\
     mov        r0,#0x28\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
LAB_080141dc:\n\
     ldr        r4,DAT_08014240\n\
     ldrh       r2,[r4,#0x0]\n\
     add        r2,#0x1\n\
     strh       r2,[r4,#0x0]\n\
     ldr        r0,[sp,#0x0]\n\
     ldr        r1,[r0,#0xc]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x47\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x12\n\
     bls        LAB_08014200\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x6f\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x12\n\
     bhi        LAB_08014260\n\
LAB_08014200:\n\
     lsl        r0,r2,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x64\n\
     bls        LAB_08014260\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x31\n\
     bhi        LAB_08014260\n\
     mov        r0,#0x4\n\
     bl         fun_080016f0\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x27\n\
     bhi        LAB_08014244\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x14\n\
     strh       r0,[r4,#0x0]\n\
     b          LAB_08014260\n\
.space 1\n\
.space 1\n\
DAT_0801422c:\n\
     .4byte 0x0200DC74\n\
DAT_08014230:\n\
     .4byte 0x0200DC70\n\
DAT_08014234:\n\
     .4byte 0x0877FD9C\n\
DAT_08014238:\n\
     .4byte 0x00000E97\n\
DAT_0801423c:\n\
     .4byte 0x0200DC6C\n\
DAT_08014240:\n\
     .4byte 0x0200DC68\n\
LAB_08014244:\n\
     mov        r1,r10\n\
     strh       r1,[r4,#0x0]\n\
     b          LAB_08014260\n\
LAB_0801424a:\n\
     ldr        r4,DAT_08014270\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014260\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     str        r5,[r4,#0x0]\n\
LAB_08014260:\n\
     add        sp,#0x4\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08014270:\n\
     .4byte 0x0200DC6C\n\
    ");
}
__attribute__((naked)) void fun_08014274()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r7,r0,#0x0\n\
     add        r4,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     ldr        r5,DAT_08014300\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080142a2\n\
     mov        r2,#0x9f\n\
     lsl        r2,r2,#0x4\n\
     ldr        r3,DAT_08014304\n\
     add        r0,r4,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801429c\n\
     mov        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
LAB_0801429c:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080142f8\n\
LAB_080142a2:\n\
     mov        r2,#0x9f\n\
     lsl        r2,r2,#0x4\n\
     mov        r3,#0x8d\n\
     lsl        r3,r3,#0x4\n\
     add        r0,r4,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080142f8\n\
     mov        r1,#0x9e\n\
     lsl        r1,r1,#0x3\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     mov        r1,#0x0\n\
     mov        r5,#0x0\n\
     mov        r0,#0x9e\n\
     lsl        r0,r0,#0x3\n\
     strh       r0,[r7,#0x4]\n\
     ldr        r2,DAT_08014308\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r6,#0x0]\n\
     strh       r0,[r7,#0x6]\n\
     mov        r0,#0x2\n\
     strb       r0,[r7,#0x18]\n\
     ldr        r0,DAT_0801430c\n\
     strb       r1,[r0,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r4,DAT_08014310\n\
     add        r0,r0,r4\n\
     strh       r5,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x12\n\
     bl         fun_080017b8\n\
     mov        r0,#0x1e\n\
     bl         fun_08001088\n\
LAB_080142f8:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08014300:\n\
     .4byte 0x0200DC74\n\
DAT_08014304:\n\
     .4byte 0x00000858\n\
DAT_08014308:\n\
     .4byte 0x000008E8\n\
DAT_0801430c:\n\
     .4byte 0x020006A0\n\
DAT_08014310:\n\
     .4byte 0x00000DD8\n\
    ");
}
__attribute__((naked)) void fun_08014314()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6}\n\
     add        r6,r0,#0x0\n\
     mov        r8,r2\n\
     mov        r9,r3\n\
     mov        r4,#0x0\n\
     mov        r0,#0x2\n\
     strb       r0,[r6,#0x18]\n\
     ldr        r0,DAT_08014374\n\
     str        r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08014378\n\
     add        r0,r0,r1\n\
     mov        r5,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0801437c\n\
     add        r0,r0,r2\n\
     strb       r5,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08014380\n\
     add        r0,r0,r1\n\
     strb       r5,[r0,#0x0]\n\
     ldr        r1,DAT_08014384\n\
     ldrh       r0,[r1,#0x0]\n\
     mov        r2,r8\n\
     strh       r0,[r2,#0x0]\n\
     strh       r0,[r6,#0x4]\n\
     ldrh       r0,[r1,#0x2]\n\
     mov        r1,r9\n\
     strh       r0,[r1,#0x0]\n\
     strh       r0,[r6,#0x6]\n\
     ldr        r1,DAT_08014388\n\
     ldr        r0,DAT_0801438c\n\
     strh       r4,[r0,#0x0]\n\
     strh       r4,[r1,#0x0]\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08014374:\n\
     .4byte 0x0200DC6C\n\
DAT_08014378:\n\
     .4byte 0x00000E3E\n\
DAT_0801437c:\n\
     .4byte 0x00000E3C\n\
DAT_08014380:\n\
     .4byte 0x00000E97\n\
DAT_08014384:\n\
     .4byte 0x0877FD9C\n\
DAT_08014388:\n\
     .4byte 0x0200DC74\n\
DAT_0801438c:\n\
     .4byte 0x0200DC70\n\
    ");
}
__attribute__((naked)) void fun_08014390()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r7,r0,#0x0\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     ldr        r4,DAT_080143f4\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080143be\n\
     mov        r2,#0x9f\n\
     lsl        r2,r2,#0x4\n\
     ldr        r3,DAT_080143f8\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080143b8\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
LAB_080143b8:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080143ee\n\
LAB_080143be:\n\
     mov        r2,#0xa4\n\
     lsl        r2,r2,#0x4\n\
     ldr        r3,DAT_080143f8\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080143ee\n\
     ldr        r0,DAT_080143fc\n\
     mov        r1,#0xce\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r0,r1\n\
     mov        r1,#0x4\n\
     strb       r1,[r0,#0x0]\n\
     mov        r0,#0x8\n\
     strb       r0,[r7,#0x18]\n\
     ldr        r1,DAT_08014400\n\
     mov        r0,#0x95\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
LAB_080143ee:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080143f4:\n\
     .4byte 0x0200DC70\n\
DAT_080143f8:\n\
     .4byte 0x00000858\n\
DAT_080143fc:\n\
     .4byte 0x020006A0\n\
DAT_08014400:\n\
     .4byte 0x0200DC90\n\
    ");
}
__attribute__((naked)) void fun_08014404()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801440c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014438\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0801442a\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014430\n\
     b          LAB_0801444a\n\
LAB_0801442a:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014444\n\
     b          LAB_0801444a\n\
LAB_08014430:\n\
     ldr        r1,DAT_08014434\n\
     b          LAB_0801443c\n\
DAT_08014434:\n\
     .4byte 0x00000363\n\
LAB_08014438:\n\
     mov        r1,#0xd9\n\
     lsl        r1,r1,#0x2\n\
LAB_0801443c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801444a\n\
LAB_08014444:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801444a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014450()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014458()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014484\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014476\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801447c\n\
     b          LAB_08014496\n\
LAB_08014476:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014490\n\
     b          LAB_08014496\n\
LAB_0801447c:\n\
     ldr        r1,DAT_08014480\n\
     b          LAB_08014488\n\
DAT_08014480:\n\
     .4byte 0x000003B3\n\
LAB_08014484:\n\
     mov        r1,#0xed\n\
     lsl        r1,r1,#0x2\n\
LAB_08014488:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014496\n\
LAB_08014490:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014496:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801449c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080144a4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080144d0\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080144c2\n\
     cmp        r0,#0x0\n\
     beq        LAB_080144c8\n\
     b          LAB_080144e2\n\
LAB_080144c2:\n\
     cmp        r1,#0x2\n\
     beq        LAB_080144dc\n\
     b          LAB_080144e2\n\
LAB_080144c8:\n\
     ldr        r1,DAT_080144cc\n\
     b          LAB_080144d4\n\
DAT_080144cc:\n\
     .4byte 0x0000035F\n\
LAB_080144d0:\n\
     mov        r1,#0xd8\n\
     lsl        r1,r1,#0x2\n\
LAB_080144d4:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080144e2\n\
LAB_080144dc:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080144e2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080144e8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080144f0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801451c\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0801450e\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014514\n\
     b          LAB_08014532\n\
LAB_0801450e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_0801452c\n\
     b          LAB_08014532\n\
LAB_08014514:\n\
     ldr        r1,DAT_08014518\n\
     b          LAB_0801451e\n\
DAT_08014518:\n\
     .4byte 0x0000036F\n\
LAB_0801451c:\n\
     ldr        r1,DAT_08014528\n\
LAB_0801451e:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014532\n\
.space 1\n\
.space 1\n\
DAT_08014528:\n\
     .4byte 0x00000371\n\
LAB_0801452c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014532:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014538()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014540()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x7c\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801456a\n\
     mov        r1,#0xc5\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014570\n\
     mov        r0,#0x20\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08014570\n\
LAB_0801456a:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014570:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014578()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014580()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080145aa\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0801459e\n\
     cmp        r0,#0x0\n\
     beq        LAB_080145a4\n\
     b          LAB_080145be\n\
LAB_0801459e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_080145b8\n\
     b          LAB_080145be\n\
LAB_080145a4:\n\
     mov        r1,#0xdf\n\
     lsl        r1,r1,#0x2\n\
     b          LAB_080145ac\n\
LAB_080145aa:\n\
     ldr        r1,DAT_080145b4\n\
LAB_080145ac:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080145be\n\
DAT_080145b4:\n\
     .4byte 0x0000037D\n\
LAB_080145b8:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080145be:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080145c4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     mov        r9,r0\n\
     add        r6,r2,#0x0\n\
     add        r5,r3,#0x0\n\
     mov        r0,#0x10\n\
     bl         fun_080034c0\n\
     add        r7,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     mov        r8,r1\n\
     add        r0,r8\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     ldr        r0,DAT_080148e8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bhi        LAB_0801460a\n\
     ldrh       r0,[r6,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     bl         fun_0803a140\n\
LAB_0801460a:\n\
     mov        r0,#0xc6\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801465c\n\
     ldr        r0,DAT_080148ec\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014636\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_08014636\n\
     mov        r0,#0x10\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     bl         fun_080020a4\n\
     add        r0,r8\n\
     ldr        r1,DAT_080148f0\n\
     strh       r1,[r0,#0x0]\n\
LAB_08014636:\n\
     mov        r0,#0xc6\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801465c\n\
     ldr        r0,DAT_080148f0\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801465c\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_0801465c\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     mov        r1,#0xcb\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_0801465c:\n\
     mov        r0,#0xcb\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080146d4\n\
     ldr        r0,DAT_080148f0\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014680\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_08014680\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080148f4\n\
     strh       r1,[r0,#0x0]\n\
LAB_08014680:\n\
     mov        r0,#0xcb\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080146d4\n\
     ldr        r0,DAT_080148f4\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080146ae\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_080146ae\n\
     mov        r0,#0x10\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080148f8\n\
     strh       r1,[r0,#0x0]\n\
LAB_080146ae:\n\
     mov        r0,#0xcb\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080146d4\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080146d4\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_080146d4\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     mov        r1,#0xb8\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_080146d4:\n\
     ldr        r0,DAT_080148fc\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080146f4\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080146f4\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_080146f4\n\
     mov        r0,#0x10\n\
     mov        r1,#0x2\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_080146f4:\n\
     ldr        r0,DAT_08014900\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014714\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014714\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x2\n\
     bhi        LAB_08014714\n\
     mov        r0,#0x10\n\
     mov        r1,#0x3\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_08014714:\n\
     mov        r0,#0xb8\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801475e\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014738\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08014738\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08014904\n\
     strh       r1,[r0,#0x0]\n\
LAB_08014738:\n\
     mov        r0,#0xb8\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801475e\n\
     ldr        r0,DAT_08014904\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801475e\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bhi        LAB_0801475e\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     mov        r1,#0xbc\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_0801475e:\n\
     mov        r0,#0xbc\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080147b2\n\
     ldr        r0,DAT_08014904\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014782\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08014782\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08014908\n\
     strh       r1,[r0,#0x0]\n\
LAB_08014782:\n\
     mov        r0,#0xbc\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080147b2\n\
     ldr        r0,DAT_08014908\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080147b2\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bhi        LAB_080147b2\n\
     mov        r0,#0x10\n\
     mov        r1,#0x4\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     mov        r1,#0xb8\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_080147b2:\n\
     mov        r0,#0xb8\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080147fc\n\
     ldr        r0,DAT_08014908\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080147d6\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x4\n\
     bne        LAB_080147d6\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080148f8\n\
     strh       r1,[r0,#0x0]\n\
LAB_080147d6:\n\
     mov        r0,#0xb8\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080147fc\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080147fc\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bls        LAB_080147fc\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     mov        r1,#0xcb\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_080147fc:\n\
     ldr        r0,DAT_0801490c\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801481c\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801481c\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bls        LAB_0801481c\n\
     mov        r0,#0x10\n\
     mov        r1,#0x5\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_0801481c:\n\
     ldr        r0,DAT_08014910\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801483c\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_0801483c\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bls        LAB_0801483c\n\
     mov        r0,#0x10\n\
     mov        r1,#0x6\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_0801483c:\n\
     mov        r0,#0xcb\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014886\n\
     ldr        r0,DAT_080148f8\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014860\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bls        LAB_08014860\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080148f0\n\
     strh       r1,[r0,#0x0]\n\
LAB_08014860:\n\
     mov        r0,#0xcb\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014886\n\
     ldr        r0,DAT_080148f0\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08014886\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bls        LAB_08014886\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     mov        r1,#0xc6\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_08014886:\n\
     mov        r0,#0xc6\n\
     lsl        r0,r0,#0x3\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080148d6\n\
     ldr        r0,DAT_080148f0\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_080148aa\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bls        LAB_080148aa\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08014914\n\
     strh       r1,[r0,#0x0]\n\
LAB_080148aa:\n\
     ldrh       r2,[r6,#0x0]\n\
     mov        r0,#0xc6\n\
     lsl        r0,r0,#0x3\n\
     cmp        r2,r0\n\
     bne        LAB_080148d6\n\
     ldrh       r1,[r5,#0x0]\n\
     ldr        r0,DAT_08014914\n\
     cmp        r1,r0\n\
     bne        LAB_080148d6\n\
     ldrh       r0,[r7,#0x6]\n\
     cmp        r0,#0x3\n\
     bls        LAB_080148d6\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803a140\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080148e0\n\
     add        r0,r0,r1\n\
     mov        r1,#0xa6\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_080148d6:\n\
     ldr        r0,DAT_08014918\n\
     ldrh       r6,[r6,#0x0]\n\
     cmp        r6,r0\n\
     b          LAB_0801491c\n\
.space 1\n\
.space 1\n\
DAT_080148e0:\n\
     .4byte 0x00000E36\n\
DAT_080148e4:\n\
     .4byte 0x00000E38\n\
DAT_080148e8:\n\
     .4byte 0x000008C6\n\
DAT_080148ec:\n\
     .4byte 0x0000089C\n\
DAT_080148f0:\n\
     .4byte 0x0000089F\n\
DAT_080148f4:\n\
     .4byte 0x0000087D\n\
DAT_080148f8:\n\
     .4byte 0x0000085F\n\
DAT_080148fc:\n\
     .4byte 0x00000626\n\
DAT_08014900:\n\
     .4byte 0x000005F4\n\
DAT_08014904:\n\
     .4byte 0x0000089E\n\
DAT_08014908:\n\
     .4byte 0x00000897\n\
DAT_0801490c:\n\
     .4byte 0x000005F6\n\
DAT_08014910:\n\
     .4byte 0x0000061E\n\
DAT_08014914:\n\
     .4byte 0x000008C7\n\
DAT_08014918:\n\
     .4byte 0x000005A4\n\
LAB_0801491c:\n\
     bne        LAB_08014976\n\
     ldr        r0,DAT_08014984\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,r0\n\
     bne        LAB_08014976\n\
     ldrh       r7,[r7,#0x6]\n\
     cmp        r7,#0x3\n\
     bls        LAB_08014976\n\
     mov        r4,#0x1\n\
     mov        r0,r9\n\
     str        r4,[r0,#0x8]\n\
     mov        r5,#0x0\n\
     strb       r5,[r0,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08014988\n\
     add        r0,r0,r1\n\
     strb       r4,[r0,#0x0]\n\
     ldr        r1,DAT_0801498c\n\
     mov        r0,#0x1b\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08014990\n\
     add        r0,#0x38\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08014994\n\
     add        r0,r0,r1\n\
     mov        r1,#0x4\n\
     strb       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08014998\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_0801499c\n\
     add        r4,r4,r0\n\
     strh       r5,[r4,#0x0]\n\
LAB_08014976:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08014984:\n\
     .4byte 0x000008C7\n\
DAT_08014988:\n\
     .4byte 0x00000DE6\n\
DAT_0801498c:\n\
     .4byte 0x0200DC90\n\
DAT_08014990:\n\
     .4byte 0x020006A0\n\
DAT_08014994:\n\
     .4byte 0x00000E04\n\
DAT_08014998:\n\
     .4byte 0x00000E38\n\
DAT_0801499c:\n\
     .4byte 0x00000E36\n\
    ");
}
__attribute__((naked)) void fun_080149a0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     add        r0,r2,#0x0\n\
     add        r1,r3,#0x0\n\
     mov        r5,#0x2\n\
     str        r5,[r4,#0x8]\n\
     mov        r2,#0xc6\n\
     lsl        r2,r2,#0x3\n\
     ldr        r3,DAT_080149c4\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080149be\n\
     strb       r5,[r4,#0x18]\n\
LAB_080149be:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080149c4:\n\
     .4byte 0x000008C7\n\
    ");
}
__attribute__((naked)) void fun_080149c8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r7,r0,#0x0\n\
     add        r4,r2,#0x0\n\
     add        r5,r3,#0x0\n\
     mov        r6,#0xc6\n\
     lsl        r6,r6,#0x3\n\
     ldr        r0,DAT_08014a1c\n\
     mov        r8,r0\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     add        r2,r6,#0x0\n\
     mov        r3,r8\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014a08\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08014a20\n\
     add        r0,r0,r1\n\
     strh       r6,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08014a24\n\
     add        r0,r0,r1\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     strb       r0,[r7,#0x18]\n\
LAB_08014a08:\n\
     ldrh       r0,[r4,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     bl         fun_0803a140\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08014a1c:\n\
     .4byte 0x0000089C\n\
DAT_08014a20:\n\
     .4byte 0x00000E36\n\
DAT_08014a24:\n\
     .4byte 0x00000E38\n\
    ");
}
__attribute__((naked)) void fun_08014a28()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014a30()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014a3c()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x13\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014a74\n\
     mov        r2,#0x81\n\
     lsl        r2,r2,#0x2\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     mov        r0,#0x1b\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x3\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0xe\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x13\n\
     bl         fun_0800ebec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08014aa6\n\
LAB_08014a74:\n\
     mov        r0,#0x15\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014ab0\n\
     mov        r2,#0x81\n\
     lsl        r2,r2,#0x2\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     mov        r0,#0x1b\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x3\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0xe\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x15\n\
     bl         fun_0800ebec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014ab0\n\
LAB_08014aa6:\n\
     mov        r0,#0x28\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     b          LAB_08014ade\n\
LAB_08014ab0:\n\
     mov        r2,#0x81\n\
     lsl        r2,r2,#0x2\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     mov        r0,#0x1b\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x3\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0xe\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x14\n\
     bl         fun_0800ebec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014ade\n\
     mov        r0,#0x28\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
LAB_08014ade:\n\
     add        sp,#0x10\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014ae8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014af0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08014b08\n\
     cmp        r4,#0x1\n\
     beq        LAB_08014b18\n\
     b          LAB_08014b20\n\
LAB_08014b08:\n\
     mov        r1,#0xeb\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08014b20\n\
LAB_08014b18:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08014b20:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014b28()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014b30()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014b5c\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014b4e\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014b54\n\
     b          LAB_08014b6e\n\
LAB_08014b4e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014b68\n\
     b          LAB_08014b6e\n\
LAB_08014b54:\n\
     ldr        r1,DAT_08014b58\n\
     b          LAB_08014b60\n\
DAT_08014b58:\n\
     .4byte 0x0000034B\n\
LAB_08014b5c:\n\
     mov        r1,#0xd3\n\
     lsl        r1,r1,#0x2\n\
LAB_08014b60:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014b6e\n\
LAB_08014b68:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014b6e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014b74()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014b7c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014b94\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014ba4\n\
     b          LAB_08014baa\n\
LAB_08014b94:\n\
     ldr        r1,DAT_08014ba0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014baa\n\
.space 1\n\
.space 1\n\
DAT_08014ba0:\n\
     .4byte 0x000003AB\n\
LAB_08014ba4:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014baa:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014bb0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014bb8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014be4\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014bd6\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014bdc\n\
     b          LAB_08014bf6\n\
LAB_08014bd6:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014bf0\n\
     b          LAB_08014bf6\n\
LAB_08014bdc:\n\
     ldr        r1,DAT_08014be0\n\
     b          LAB_08014be8\n\
DAT_08014be0:\n\
     .4byte 0x0000035B\n\
LAB_08014be4:\n\
     mov        r1,#0xd7\n\
     lsl        r1,r1,#0x2\n\
LAB_08014be8:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014bf6\n\
LAB_08014bf0:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014bf6:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014bfc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014c04()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014c30\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014c22\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014c28\n\
     b          LAB_08014c46\n\
LAB_08014c22:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014c40\n\
     b          LAB_08014c46\n\
LAB_08014c28:\n\
     ldr        r1,DAT_08014c2c\n\
     b          LAB_08014c32\n\
DAT_08014c2c:\n\
     .4byte 0x00000359\n\
LAB_08014c30:\n\
     ldr        r1,DAT_08014c3c\n\
LAB_08014c32:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014c46\n\
.space 1\n\
.space 1\n\
DAT_08014c3c:\n\
     .4byte 0x0000035A\n\
LAB_08014c40:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014c46:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014c4c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014c54()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014c80\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014c72\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014c78\n\
     b          LAB_08014c92\n\
LAB_08014c72:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014c8c\n\
     b          LAB_08014c92\n\
LAB_08014c78:\n\
     ldr        r1,DAT_08014c7c\n\
     b          LAB_08014c84\n\
DAT_08014c7c:\n\
     .4byte 0x00000357\n\
LAB_08014c80:\n\
     mov        r1,#0xd6\n\
     lsl        r1,r1,#0x2\n\
LAB_08014c84:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014c92\n\
LAB_08014c8c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014c92:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014c98()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014ca0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014ccc\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014cbe\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014cc4\n\
     b          LAB_08014ce2\n\
LAB_08014cbe:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014cdc\n\
     b          LAB_08014ce2\n\
LAB_08014cc4:\n\
     ldr        r1,DAT_08014cc8\n\
     b          LAB_08014cce\n\
DAT_08014cc8:\n\
     .4byte 0x00000386\n\
LAB_08014ccc:\n\
     ldr        r1,DAT_08014cd8\n\
LAB_08014cce:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014ce2\n\
.space 1\n\
.space 1\n\
DAT_08014cd8:\n\
     .4byte 0x00000387\n\
LAB_08014cdc:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014ce2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014ce8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014cf0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08014d08\n\
     cmp        r4,#0x1\n\
     beq        LAB_08014d1c\n\
     b          LAB_08014d24\n\
LAB_08014d08:\n\
     ldr        r1,DAT_08014d18\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08014d24\n\
.space 1\n\
.space 1\n\
DAT_08014d18:\n\
     .4byte 0x000003A2\n\
LAB_08014d1c:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08014d24:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014d2c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014d34()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08014d4c\n\
     cmp        r4,#0x1\n\
     beq        LAB_08014d60\n\
     b          LAB_08014d68\n\
LAB_08014d4c:\n\
     ldr        r1,DAT_08014d5c\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08014d68\n\
.space 1\n\
.space 1\n\
DAT_08014d5c:\n\
     .4byte 0x000003A5\n\
LAB_08014d60:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08014d68:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014d70()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014d78()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08014d90\n\
     cmp        r4,#0x1\n\
     beq        LAB_08014da0\n\
     b          LAB_08014da8\n\
LAB_08014d90:\n\
     mov        r1,#0xe9\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_08014da8\n\
LAB_08014da0:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_08014da8:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014db0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014db8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014dd0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014de0\n\
     b          LAB_08014de6\n\
LAB_08014dd0:\n\
     ldr        r1,DAT_08014ddc\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014de6\n\
.space 1\n\
.space 1\n\
DAT_08014ddc:\n\
     .4byte 0x000003AE\n\
LAB_08014de0:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014de6:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014dec()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014df4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014e0c\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014e1c\n\
     b          LAB_08014e22\n\
LAB_08014e0c:\n\
     ldr        r1,DAT_08014e18\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014e22\n\
.space 1\n\
.space 1\n\
DAT_08014e18:\n\
     .4byte 0x000003AF\n\
LAB_08014e1c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014e22:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014e28()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014e30()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014e5c\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014e4e\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014e54\n\
     b          LAB_08014e6e\n\
LAB_08014e4e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014e68\n\
     b          LAB_08014e6e\n\
LAB_08014e54:\n\
     ldr        r1,DAT_08014e58\n\
     b          LAB_08014e60\n\
DAT_08014e58:\n\
     .4byte 0x00000377\n\
LAB_08014e5c:\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x2\n\
LAB_08014e60:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014e6e\n\
LAB_08014e68:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014e6e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014e74()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014e7c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014ea8\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08014e9a\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014ea0\n\
     b          LAB_08014ebe\n\
LAB_08014e9a:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08014eb8\n\
     b          LAB_08014ebe\n\
LAB_08014ea0:\n\
     ldr        r1,DAT_08014ea4\n\
     b          LAB_08014eaa\n\
DAT_08014ea4:\n\
     .4byte 0x00000379\n\
LAB_08014ea8:\n\
     ldr        r1,DAT_08014eb4\n\
LAB_08014eaa:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014ebe\n\
.space 1\n\
.space 1\n\
DAT_08014eb4:\n\
     .4byte 0x0000037B\n\
LAB_08014eb8:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014ebe:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014ec4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014ecc()
{
    asm("\n\
     push       {lr}\n\
     mov        r1,#0xbe\n\
     lsl        r1,r1,#0x2\n\
     bl         fun_0800ebb4\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014edc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08014ee4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08014efc\n\
     cmp        r0,#0x1\n\
     beq        LAB_08014f0c\n\
     b          LAB_08014f12\n\
LAB_08014efc:\n\
     ldr        r1,DAT_08014f08\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08014f12\n\
.space 1\n\
.space 1\n\
DAT_08014f08:\n\
     .4byte 0x00000373\n\
LAB_08014f0c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08014f12:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08014f18()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     mov        r10,r0\n\
     mov        r8,r1\n\
     str        r2,[sp,#0x4]\n\
     str        r3,[sp,#0x0]\n\
     mov        r0,#0x3\n\
     mov        r1,r10\n\
     strb       r0,[r1,#0x18]\n\
     ldr        r5,PTR_DAT_08014ff8\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x7\n\
     and        r0,r1\n\
     strh       r0,[r5,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r2,r8\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     ldr        r6,DAT_08014ffc\n\
     add        r0,r0,r6\n\
     add        r0,r0,r1\n\
     ldrh       r1,[r5,#0x0]\n\
     strb       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     ldr        r7,PTR_DAT_08015000\n\
     mov        r9,r7\n\
     bl         fun_080020a4\n\
     mov        r2,r8\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r2,r3]\n\
     add        r0,r0,r6\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     mov        r1,r9\n\
     add        r1,#0x2\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     bl         fun_08002c04\n\
     mov        r7,r8\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r7,r2]\n\
     add        r4,r4,r6\n\
     add        r4,r4,r1\n\
     lsl        r0,r0,#0x4\n\
     ldrb       r3,[r4,#0x0]\n\
     orr        r0,r3\n\
     strb       r0,[r4,#0x0]\n\
     ldrh       r5,[r5,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r9\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r2,PTR_DAT_08015004\n\
     ldr        r5,PTR_DAT_08015008\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r7,r3]\n\
     add        r0,r0,r6\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     lsr        r0,r0,#0x4\n\
     add        r0,r4,r0\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r7,r10\n\
     strh       r0,[r7,#0x4]\n\
     ldr        r1,[sp,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r2,PTR_DAT_0801500c\n\
     mov        r3,r8\n\
     mov        r7,#0x0\n\
     ldrsh      r1,[r3,r7]\n\
     add        r0,r0,r6\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     lsr        r0,r0,#0x4\n\
     add        r4,r4,r0\n\
     lsl        r4,r4,#0x1\n\
     add        r4,r4,r5\n\
     ldrh       r4,[r4,#0x0]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r10\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r2,[sp,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
PTR_DAT_08014ff8:\n\
     .4byte       DAT_0200dc78\n\
DAT_08014ffc:\n\
     .4byte 0x00000E8D\n\
PTR_DAT_08015000:\n\
     .4byte       DAT_0877fdb4\n\
PTR_DAT_08015004:\n\
     .4byte       DAT_083300d0\n\
PTR_DAT_08015008:\n\
     .4byte       DAT_083305b8\n\
PTR_DAT_0801500c:\n\
     .4byte       DAT_08330344\n\
    ");
}
__attribute__((naked)) void fun_08015010()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r7,r1,#0x0\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     mov        r1,#0x0\n\
     ldrsh      r3,[r7,r1]\n\
     ldr        r1,DAT_080150e8\n\
     add        r4,r4,r1\n\
     add        r4,r4,r3\n\
     ldrb       r4,[r4,#0x0]\n\
     lsr        r2,r4,#0x4\n\
     ldr        r4,DAT_080150ec\n\
     mov        r9,r4\n\
     add        r0,r0,r1\n\
     add        r0,r0,r3\n\
     mov        r1,#0xf\n\
     mov        r8,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r9\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r2,r1,r2\n\
     lsl        r2,r2,#0x10\n\
     ldr        r1,DAT_080150f0\n\
     ldr        r0,DAT_080150f4\n\
     lsr        r2,r2,#0xf\n\
     add        r2,r2,r0\n\
     ldrh       r2,[r2,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r1,r0,r1\n\
     ldrh       r2,[r1,#0x0]\n\
     ldr        r1,DAT_080150f8\n\
     add        r0,r0,r1\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080150da\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r7,r2]\n\
     ldr        r3,DAT_080150e8\n\
     add        r4,r4,r3\n\
     add        r4,r4,r1\n\
     ldrb       r4,[r4,#0x0]\n\
     lsr        r2,r4,#0x4\n\
     add        r2,#0x1\n\
     add        r0,r0,r3\n\
     add        r0,r0,r1\n\
     mov        r1,r8\n\
     ldrb       r0,[r0,#0x0]\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x2\n\
     mov        r0,r9\n\
     add        r0,#0x2\n\
     add        r1,r1,r0\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r0,r2,#0x0\n\
     bl         __modsi3\n\
     add        r4,r0,#0x0\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     bl         fun_080020a4\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r7,r2]\n\
     ldr        r3,DAT_080150e8\n\
     add        r0,r0,r3\n\
     add        r0,r0,r1\n\
     mov        r1,r8\n\
     ldrb       r2,[r0,#0x0]\n\
     and        r1,r2\n\
     strb       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r7,r3]\n\
     ldr        r2,DAT_080150e8\n\
     add        r0,r0,r2\n\
     add        r0,r0,r1\n\
     lsl        r4,r4,#0x4\n\
     ldrb       r3,[r0,#0x0]\n\
     orr        r4,r3\n\
     strb       r4,[r0,#0x0]\n\
LAB_080150da:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080150e8:\n\
     .4byte 0x00000E8D\n\
DAT_080150ec:\n\
     .4byte 0x0877FDB4\n\
DAT_080150f0:\n\
     .4byte 0x083300D0\n\
DAT_080150f4:\n\
     .4byte 0x083305B8\n\
DAT_080150f8:\n\
     .4byte 0x08330344\n\
    ");
}
__attribute__((naked)) void fun_080150fc()
{
    asm("\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015100()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015108()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     ldrh       r2,[r3,#0x16]\n\
     mov        r0,#0x1\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015128\n\
     ldr        r0,DAT_08015130\n\
     add        r0,#0x76\n\
     mov        r1,#0x1\n\
     ldrh       r4,[r0,#0x0]\n\
     orr        r1,r4\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08015134\n\
     and        r0,r2\n\
     strh       r0,[r3,#0x16]\n\
LAB_08015128:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015130:\n\
     .4byte 0x020006A0\n\
DAT_08015134:\n\
     .4byte 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08015138()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     add        r0,r2,#0x0\n\
     add        r1,r3,#0x0\n\
     ldrh       r2,[r0,#0x0]\n\
     ldr        r3,DAT_08015160\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015158\n\
     ldr        r0,DAT_08015164\n\
     add        r0,#0xb8\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     str        r1,[r4,#0x8]\n\
LAB_08015158:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015160:\n\
     .4byte 0x000006AE\n\
DAT_08015164:\n\
     .4byte 0x020006A0\n\
    ");
}
__attribute__((naked)) void fun_08015168()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r7,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     ldr        r0,DAT_08015248\n\
     mov        r9,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,r9\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1\n\
     bls        LAB_0801526e\n\
     ldrh       r1,[r7,#0x10]\n\
     add        r2,r1,#0x1\n\
     add        r0,r2,#0x0\n\
     asr        r0,r0,#0x2\n\
     lsl        r0,r0,#0x2\n\
     sub        r0,r2,r0\n\
     strh       r0,[r7,#0x10]\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     ldr        r2,DAT_0801524c\n\
     mov        r8,r2\n\
     mov        r1,#0x0\n\
     ldrsb      r1,[r2,r1]\n\
     sub        r0,#0x1\n\
     mul        r0,r1\n\
     ldrh       r3,[r5,#0x0]\n\
     add        r0,r3,r0\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x8\n\
     bl         fun_08002c04\n\
     ldrh       r2,[r6,#0x0]\n\
     ldr        r3,DAT_08015250\n\
     add        r1,r2,r3\n\
     add        r1,r1,r0\n\
     strh       r1,[r6,#0x0]\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     sub        r0,#0x14\n\
     ldrh       r2,[r5,#0x0]\n\
     cmp        r2,r0\n\
     bge        LAB_080151da\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x14\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r3,r8\n\
     strb       r0,[r3,#0x0]\n\
LAB_080151da:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r4,r1]\n\
     add        r0,#0x14\n\
     ldrh       r2,[r5,#0x0]\n\
     cmp        r2,r0\n\
     ble        LAB_080151f6\n\
     ldrh       r0,[r4,#0x0]\n\
     add        r0,#0x14\n\
     strh       r0,[r5,#0x0]\n\
     mov        r3,#0x1\n\
.syntax unified\n\
     rsbs       r3,r3,#0\n\
.syntax divided\n\
     add        r0,r3,#0x0\n\
     mov        r1,r8\n\
     strb       r0,[r1,#0x0]\n\
LAB_080151f6:\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r4,r2]\n\
     sub        r0,#0xa\n\
     ldrh       r3,[r6,#0x0]\n\
     cmp        r3,r0\n\
     bge        LAB_08015208\n\
     ldrh       r0,[r4,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r6,#0x0]\n\
LAB_08015208:\n\
     mov        r1,#0x2\n\
     ldrsh      r0,[r4,r1]\n\
     add        r0,#0x1e\n\
     ldrh       r2,[r6,#0x0]\n\
     cmp        r2,r0\n\
     ble        LAB_0801521a\n\
     ldrh       r0,[r4,#0x2]\n\
     add        r0,#0x1e\n\
     strh       r0,[r6,#0x0]\n\
LAB_0801521a:\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r7,#0x4]\n\
     ldrh       r0,[r6,#0x0]\n\
     strh       r0,[r7,#0x6]\n\
     mov        r0,#0x0\n\
     mov        r3,r9\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r5,[r7,#0xc]\n\
     cmp        r5,#0x0\n\
     beq        LAB_08015258\n\
     ldr        r4,DAT_08015254\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801526e\n\
     mov        r0,#0x9\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
     b          LAB_0801526e\n\
.space 1\n\
.space 1\n\
DAT_08015248:\n\
     .4byte 0x0200DC7C\n\
DAT_0801524c:\n\
     .4byte 0x0200C650\n\
DAT_08015250:\n\
     .4byte 0x0000FFFC\n\
DAT_08015254:\n\
     .4byte 0x0200DC80\n\
LAB_08015258:\n\
     ldr        r4,DAT_0801527c\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801526e\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     str        r5,[r4,#0x0]\n\
LAB_0801526e:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801527c:\n\
     .4byte 0x0200DC80\n\
    ");
}
__attribute__((naked)) void fun_08015280()
{
    asm("\n\
     ldr        r2,PTR_DAT_0801529c\n\
     mov        r1,#0x0\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_080152a0\n\
     mov        r1,#0x0\n\
     str        r1,[r2,#0x0]\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x18]\n\
     ldr        r0,PTR_DAT_080152a4\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_080152a8\n\
     ldr        r0,DAT_080152ac\n\
     str        r0,[r1,#0x0]\n\
     bx         lr\n\
PTR_DAT_0801529c:\n\
     .4byte       DAT_0200dc7c\n\
PTR_DAT_080152a0:\n\
     .4byte       DAT_0200dc80\n\
PTR_DAT_080152a4:\n\
     .4byte       DAT_0200c650\n\
PTR_DAT_080152a8:\n\
     .4byte       DAT_02005cd4\n\
DAT_080152ac:\n\
     .4byte 0x00BE0DB4\n\
    ");
}
void fun_080152b0()
{
}
__attribute__((naked)) void fun_080152b4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r0,#0x0\n\
     ldrh       r1,[r5,#0x16]\n\
     mov        r6,#0x1\n\
     add        r0,r6,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801536c\n\
     ldr        r0,DAT_08015310\n\
     and        r0,r1\n\
     strh       r0,[r5,#0x16]\n\
     mov        r0,#0x3\n\
     strb       r0,[r5,#0x18]\n\
     mov        r0,#0x1d\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015324\n\
     ldr        r1,DAT_08015314\n\
     mov        r0,#0x47\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1d\n\
     bl         fun_080018e4\n\
     ldr        r4,DAT_08015318\n\
     ldr        r0,DAT_0801531c\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x1d\n\
     lsl        r0,r0,#0x5\n\
     add        r1,r4,#0x0\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     str        r6,[r0,#0x0]\n\
     mov        r0,#0x6\n\
     strb       r0,[r5,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08015320\n\
     add        r0,r0,r1\n\
     mov        r1,#0x7\n\
     strb       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     strb       r0,[r4,#0x18]\n\
     b          LAB_08015366\n\
.space 1\n\
.space 1\n\
DAT_08015310:\n\
     .4byte 0x0000FFFE\n\
DAT_08015314:\n\
     .4byte 0x0200DC90\n\
DAT_08015318:\n\
     .4byte 0x020006A0\n\
DAT_0801531c:\n\
     .4byte 0x02000690\n\
DAT_08015320:\n\
     .4byte 0x00000E04\n\
LAB_08015324:\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015348\n\
     cmp        r0,#0x1\n\
     bcc        LAB_0801533c\n\
     cmp        r0,#0x2\n\
     beq        LAB_08015354\n\
     cmp        r0,#0x3\n\
     beq        LAB_08015360\n\
     b          LAB_08015366\n\
LAB_0801533c:\n\
     ldr        r1,DAT_08015344\n\
     mov        r0,#0x34\n\
     b          LAB_08015364\n\
.space 1\n\
.space 1\n\
DAT_08015344:\n\
     .4byte 0x0200DC90\n\
LAB_08015348:\n\
     ldr        r1,DAT_08015350\n\
     mov        r0,#0x38\n\
     b          LAB_08015364\n\
.space 1\n\
.space 1\n\
DAT_08015350:\n\
     .4byte 0x0200DC90\n\
LAB_08015354:\n\
     ldr        r1,DAT_0801535c\n\
     mov        r0,#0x3c\n\
     b          LAB_08015364\n\
.space 1\n\
.space 1\n\
DAT_0801535c:\n\
     .4byte 0x0200DC90\n\
LAB_08015360:\n\
     ldr        r1,DAT_08015374\n\
     mov        r0,#0x40\n\
LAB_08015364:\n\
     strh       r0,[r1,#0x0]\n\
LAB_08015366:\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
LAB_0801536c:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015374:\n\
     .4byte 0x0200DC90\n\
    ");
}
__attribute__((naked)) void fun_08015378()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015380()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r0,#0x0\n\
     ldrh       r1,[r5,#0x16]\n\
     mov        r6,#0x1\n\
     add        r0,r6,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080153fc\n\
     ldr        r0,DAT_080153d4\n\
     and        r0,r1\n\
     strh       r0,[r5,#0x16]\n\
     mov        r0,#0x3\n\
     strb       r0,[r5,#0x18]\n\
     mov        r0,#0x1d\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080153e8\n\
     ldr        r1,DAT_080153d8\n\
     mov        r0,#0x47\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_080153dc\n\
     ldr        r0,DAT_080153e0\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x1d\n\
     lsl        r0,r0,#0x5\n\
     add        r1,r4,#0x0\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     str        r6,[r0,#0x0]\n\
     mov        r0,#0x6\n\
     strb       r0,[r5,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080153e4\n\
     add        r0,r0,r1\n\
     mov        r1,#0x7\n\
     strb       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     strb       r0,[r4,#0x18]\n\
     b          LAB_080153f6\n\
DAT_080153d4:\n\
     .4byte 0x0000FFFE\n\
DAT_080153d8:\n\
     .4byte 0x0200DC90\n\
DAT_080153dc:\n\
     .4byte 0x020006A0\n\
DAT_080153e0:\n\
     .4byte 0x02000690\n\
DAT_080153e4:\n\
     .4byte 0x00000E04\n\
LAB_080153e8:\n\
     ldr        r1,DAT_08015404\n\
     mov        r0,#0x27\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_080153f6:\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
LAB_080153fc:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015404:\n\
     .4byte 0x0200DC90\n\
    ");
}
__attribute__((naked)) void fun_08015408()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015410()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r6,r0,#0x0\n\
     add        r0,r2,#0x0\n\
     add        r1,r3,#0x0\n\
     ldrh       r2,[r0,#0x0]\n\
     ldr        r7,DAT_0801547c\n\
     add        r3,r7,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015474\n\
     ldr        r5,DAT_08015480\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x78\n\
     mov        r4,#0x0\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     str        r0,[r6,#0x8]\n\
     strb       r4,[r5,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08015484\n\
     add        r0,r0,r1\n\
     strh       r4,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x86\n\
     strh       r7,[r0,#0x0]\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x88\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x57\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     mov        r0,#0x58\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     mov        r0,#0x1\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x2\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08015474:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801547c:\n\
     .4byte 0x000006AE\n\
DAT_08015480:\n\
     .4byte 0x020006A0\n\
DAT_08015484:\n\
     .4byte 0x00000DD8\n\
    ");
}
__attribute__((naked)) void fun_08015488()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1d\n\
     bl         fun_080018e4\n\
     mov        r0,#0x8\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x7\n\
     bl         fun_080017b8\n\
     ldr        r1,DAT_080154b4\n\
     ldr        r0,DAT_080154b8\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x7\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     mov        r1,#0x4\n\
     str        r1,[r0,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080154b4:\n\
     .4byte 0x020006A0\n\
DAT_080154b8:\n\
     .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_080154bc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_080154e0\n\
     mov        r0,#0x52\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x5\n\
     strb       r0,[r4,#0x18]\n\
     ldr        r0,DAT_080154e4\n\
     add        r0,#0xb8\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080154e0:\n\
     .4byte 0x0200DC90\n\
DAT_080154e4:\n\
     .4byte 0x020006A0\n\
     .4byte 0x00004770\n\
    ");
}
__attribute__((naked)) void fun_080154ec()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080154f4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r1,#0xc8\n\
     lsl        r1,r1,#0x2\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801550a\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
LAB_0801550a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015510()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_08015558\n\
     ldr        r2,DAT_0801555c\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08015560\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08015564\n\
     ldr        r2,DAT_08015568\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     mov        r0,#0x32\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801554e\n\
     mov        r0,#0x32\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801554e\n\
     ldr        r1,DAT_0801556c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801554e:\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08015558:\n\
     .4byte 0x0200E030\n\
DAT_0801555c:\n\
     .4byte 0x020006A0\n\
DAT_08015560:\n\
     .4byte 0x0200DD70\n\
DAT_08015564:\n\
     .4byte 0x020025E8\n\
DAT_08015568:\n\
     .4byte 0x00000289\n\
DAT_0801556c:\n\
     .4byte 0x0200255C\n\
    ");
}
__attribute__((naked)) void fun_08015570()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015578()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015584()
{
    asm("\n\
     mov        r1,#0x1\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801558c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015594()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080155c0\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080155b2\n\
     cmp        r0,#0x0\n\
     beq        LAB_080155b8\n\
     b          LAB_080155d6\n\
LAB_080155b2:\n\
     cmp        r1,#0x2\n\
     beq        LAB_080155d0\n\
     b          LAB_080155d6\n\
LAB_080155b8:\n\
     ldr        r1,DAT_080155bc\n\
     b          LAB_080155c2\n\
DAT_080155bc:\n\
     .4byte 0x0000037E\n\
LAB_080155c0:\n\
     ldr        r1,DAT_080155cc\n\
LAB_080155c2:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080155d6\n\
.space 1\n\
.space 1\n\
DAT_080155cc:\n\
     .4byte 0x00000381\n\
LAB_080155d0:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080155d6:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080155dc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080155e4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080155fc\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801560c\n\
     b          LAB_08015612\n\
LAB_080155fc:\n\
     ldr        r1,DAT_08015608\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015612\n\
.space 1\n\
.space 1\n\
DAT_08015608:\n\
     .4byte 0x000003CF\n\
LAB_0801560c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015612:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015618()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015620()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015638\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015648\n\
     b          LAB_0801564e\n\
LAB_08015638:\n\
     ldr        r1,DAT_08015644\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801564e\n\
.space 1\n\
.space 1\n\
DAT_08015644:\n\
     .4byte 0x000003D2\n\
LAB_08015648:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801564e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015654()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801565c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015674\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015680\n\
     b          LAB_08015686\n\
LAB_08015674:\n\
     mov        r1,#0xf5\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015686\n\
LAB_08015680:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015686:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801568c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015694()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r1,#0xc6\n\
     lsl        r1,r1,#0x2\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080156aa\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
LAB_080156aa:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080156b0()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_080156f8\n\
     ldr        r2,DAT_080156fc\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08015700\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08015704\n\
     ldr        r2,DAT_08015708\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     mov        r0,#0x33\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080156ee\n\
     mov        r0,#0x33\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080156ee\n\
     ldr        r1,DAT_0801570c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_080156ee:\n\
     mov        r0,#0x2\n\
     strb       r0,[r4,#0x18]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080156f8:\n\
     .4byte 0x0200E030\n\
DAT_080156fc:\n\
     .4byte 0x020006A0\n\
DAT_08015700:\n\
     .4byte 0x0200DD70\n\
DAT_08015704:\n\
     .4byte 0x020025E8\n\
DAT_08015708:\n\
     .4byte 0x00000287\n\
DAT_0801570c:\n\
     .4byte 0x02002550\n\
    ");
}
__attribute__((naked)) void fun_08015710()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015718()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015730\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015740\n\
     b          LAB_08015746\n\
LAB_08015730:\n\
     ldr        r1,DAT_0801573c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015746\n\
.space 1\n\
.space 1\n\
DAT_0801573c:\n\
     .4byte 0x00000506\n\
LAB_08015740:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015746:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801574c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015754()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801577e\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08015772\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015778\n\
     b          LAB_08015792\n\
LAB_08015772:\n\
     cmp        r1,#0x2\n\
     beq        LAB_0801578c\n\
     b          LAB_08015792\n\
LAB_08015778:\n\
     mov        r1,#0xdb\n\
     lsl        r1,r1,#0x2\n\
     b          LAB_08015780\n\
LAB_0801577e:\n\
     ldr        r1,DAT_08015788\n\
LAB_08015780:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015792\n\
DAT_08015788:\n\
     .4byte 0x0000036E\n\
LAB_0801578c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015792:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015798()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080157a0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x1\n\
     beq        LAB_080157d0\n\
     cmp        r4,#0x1\n\
     bgt        LAB_080157bc\n\
     cmp        r4,#0x0\n\
     beq        LAB_080157c2\n\
     b          LAB_080157e8\n\
LAB_080157bc:\n\
     cmp        r4,#0x2\n\
     beq        LAB_080157de\n\
     b          LAB_080157e8\n\
LAB_080157c2:\n\
     ldr        r1,DAT_080157cc\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080157e4\n\
DAT_080157cc:\n\
     .4byte 0x00000353\n\
LAB_080157d0:\n\
     mov        r1,#0xd5\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     strb       r4,[r5,#0x18]\n\
     b          LAB_080157e8\n\
LAB_080157de:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080157e4:\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
LAB_080157e8:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080157f0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080157f8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015824\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08015816\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801581c\n\
     b          LAB_0801583a\n\
LAB_08015816:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08015834\n\
     b          LAB_0801583a\n\
LAB_0801581c:\n\
     ldr        r1,DAT_08015820\n\
     b          LAB_08015826\n\
DAT_08015820:\n\
     .4byte 0x0000035D\n\
LAB_08015824:\n\
     ldr        r1,DAT_08015830\n\
LAB_08015826:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801583a\n\
.space 1\n\
.space 1\n\
DAT_08015830:\n\
     .4byte 0x0000035E\n\
LAB_08015834:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801583a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015840()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080158fc\n\
     mov        r0,#0x72\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08015874\n\
     ldr        r1,DAT_08015870\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x3d\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_080158fc\n\
.space 1\n\
.space 1\n\
DAT_08015870:\n\
     .4byte 0x0000019D\n\
LAB_08015874:\n\
     mov        r0,#0x1e\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080158a4\n\
     mov        r0,#0x1f\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080158a4\n\
     mov        r0,#0x20\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080158a4\n\
     mov        r0,#0x21\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080158c4\n\
LAB_080158a4:\n\
     mov        r1,#0xc7\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x13\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     mov        r0,#0x3d\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
     b          LAB_080158fc\n\
LAB_080158c4:\n\
     mov        r2,#0xc8\n\
     lsl        r2,r2,#0x1\n\
     mov        r3,#0xc7\n\
     lsl        r3,r3,#0x1\n\
     mov        r0,#0x13\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     mov        r0,#0x4\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x2b\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1e\n\
     bl         fun_0800ebec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080158fc\n\
     mov        r0,#0x1f\n\
     bl         fun_080018e4\n\
     mov        r0,#0x20\n\
     bl         fun_080018e4\n\
     mov        r0,#0x21\n\
     bl         fun_080018e4\n\
LAB_080158fc:\n\
     add        sp,#0x10\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015904()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801590c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015918()
{
    asm("\n\
     push       {r4,lr}\n\
     sub        sp,#0x10\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080159a4\n\
     mov        r0,#0x1e\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015958\n\
     mov        r0,#0x1f\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015958\n\
     mov        r0,#0x20\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015958\n\
     mov        r0,#0x21\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08015970\n\
LAB_08015958:\n\
     ldr        r1,DAT_0801596c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x13\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_080159a4\n\
.space 1\n\
.space 1\n\
DAT_0801596c:\n\
     .4byte 0x00000199\n\
LAB_08015970:\n\
     mov        r2,#0xc8\n\
     lsl        r2,r2,#0x1\n\
     ldr        r3,DAT_080159ac\n\
     mov        r0,#0x13\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x2\n\
     str        r0,[sp,#0x4]\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x2b\n\
     str        r0,[sp,#0xc]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1e\n\
     bl         fun_0800ebec\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080159a4\n\
     mov        r0,#0x1f\n\
     bl         fun_080018e4\n\
     mov        r0,#0x20\n\
     bl         fun_080018e4\n\
     mov        r0,#0x21\n\
     bl         fun_080018e4\n\
LAB_080159a4:\n\
     add        sp,#0x10\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080159ac:\n\
     .4byte 0x00000199\n\
    ");
}
__attribute__((naked)) void fun_080159b0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080159b8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080159c4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080159cc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x68\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080159f8\n\
     ldr        r1,DAT_080159f4\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_08015a0e_caseD_9\n\
     mov        r0,#0x1f\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          switchD_08015a0e_caseD_9\n\
DAT_080159f4:\n\
     .4byte 0x00000337\n\
LAB_080159f8:\n\
     mov        r0,#0x9\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x8\n\
     bhi        switchD_08015a0e_caseD_9\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_08015a10\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_08015a10:\n\
     .4byte 0x08015A14\n\
switchD_08015a0e_switchdataD_08015a14:\n\
     .4byte       switchD_08015a0e_caseD_0\n\
     .4byte       switchD_08015a0e_caseD_1\n\
     .4byte       switchD_08015a0e_caseD_2\n\
     .4byte       switchD_08015a0e_caseD_3\n\
     .4byte       switchD_08015a0e_caseD_4\n\
     .4byte       switchD_08015a0e_caseD_5\n\
     .4byte       switchD_08015a0e_caseD_6\n\
     .4byte       switchD_08015a0e_caseD_7\n\
     .4byte       switchD_08015a0e_caseD_8\n\
switchD_08015a0e_caseD_0:\n\
     ldr        r1,DAT_08015a3c\n\
     b          LAB_08015a72\n\
DAT_08015a3c:\n\
     .4byte 0x00000603\n\
switchD_08015a0e_caseD_1:\n\
     ldr        r1,DAT_08015a44\n\
     b          LAB_08015a72\n\
DAT_08015a44:\n\
     .4byte 0x00000605\n\
switchD_08015a0e_caseD_2:\n\
     ldr        r1,DAT_08015a4c\n\
     b          LAB_08015a72\n\
DAT_08015a4c:\n\
     .4byte 0x00000609\n\
switchD_08015a0e_caseD_3:\n\
     ldr        r1,DAT_08015a54\n\
     b          LAB_08015a72\n\
DAT_08015a54:\n\
     .4byte 0x0000060E\n\
switchD_08015a0e_caseD_4:\n\
     ldr        r1,DAT_08015a5c\n\
     b          LAB_08015a72\n\
DAT_08015a5c:\n\
     .4byte 0x0000060F\n\
switchD_08015a0e_caseD_5:\n\
     ldr        r1,DAT_08015a64\n\
     b          LAB_08015a72\n\
DAT_08015a64:\n\
     .4byte 0x00000612\n\
switchD_08015a0e_caseD_6:\n\
     ldr        r1,DAT_08015a6c\n\
     b          LAB_08015a72\n\
DAT_08015a6c:\n\
     .4byte 0x00000614\n\
switchD_08015a0e_caseD_7:\n\
     ldr        r1,DAT_08015a7c\n\
LAB_08015a72:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          switchD_08015a0e_caseD_9\n\
.space 1\n\
.space 1\n\
DAT_08015a7c:\n\
     .4byte 0x00000615\n\
switchD_08015a0e_caseD_8:\n\
     ldr        r1,DAT_08015a90\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
switchD_08015a0e_caseD_9:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015a90:\n\
     .4byte 0x0000062A\n\
    ");
}
__attribute__((naked)) void fun_08015a94()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015a9c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015ac8\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08015aba\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015ac0\n\
     b          LAB_08015ade\n\
LAB_08015aba:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08015ad8\n\
     b          LAB_08015ade\n\
LAB_08015ac0:\n\
     ldr        r1,DAT_08015ac4\n\
     b          LAB_08015aca\n\
DAT_08015ac4:\n\
     .4byte 0x00000351\n\
LAB_08015ac8:\n\
     ldr        r1,DAT_08015ad4\n\
LAB_08015aca:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015ade\n\
.space 1\n\
.space 1\n\
DAT_08015ad4:\n\
     .4byte 0x00000352\n\
LAB_08015ad8:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015ade:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015ae4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015aec()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015b50\n\
     ldr        r1,DAT_08015b34\n\
     mov        r0,#0xbd\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08015b38\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x7\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08015b2a\n\
     mov        r0,#0x7\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015b3c\n\
LAB_08015b2a:\n\
     mov        r0,#0x7\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08015b44\n\
DAT_08015b34:\n\
     .4byte 0x0200DC90\n\
DAT_08015b38:\n\
     .4byte 0x0000FFFE\n\
LAB_08015b3c:\n\
     mov        r0,#0x8\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08015b44:\n\
     mov        r0,#0x34\n\
     bl         fun_080017b8\n\
     ldr        r1,DAT_08015b58\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08015b50:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015b58:\n\
     .4byte 0x0200DCA0\n\
    ");
}
__attribute__((naked)) void fun_08015b5c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015b68()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015b70()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015b88\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015b94\n\
     b          LAB_08015b9a\n\
LAB_08015b88:\n\
     mov        r1,#0xe8\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015b9a\n\
LAB_08015b94:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015b9a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015ba0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015ba8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015bc0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015bd0\n\
     b          LAB_08015bd6\n\
LAB_08015bc0:\n\
     ldr        r1,DAT_08015bcc\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015bd6\n\
.space 1\n\
.space 1\n\
DAT_08015bcc:\n\
     .4byte 0x000002E6\n\
LAB_08015bd0:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015bd6:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015bdc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015be4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015bfc\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015c08\n\
     b          LAB_08015c0e\n\
LAB_08015bfc:\n\
     mov        r1,#0xba\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015c0e\n\
LAB_08015c08:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015c0e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015c14()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015c1c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015c34\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015c44\n\
     b          LAB_08015c4a\n\
LAB_08015c34:\n\
     ldr        r1,DAT_08015c40\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015c4a\n\
.space 1\n\
.space 1\n\
DAT_08015c40:\n\
     .4byte 0x000002EA\n\
LAB_08015c44:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015c4a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015c50()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015c58()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015c70\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015c7c\n\
     b          LAB_08015c82\n\
LAB_08015c70:\n\
     mov        r1,#0xbb\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015c82\n\
LAB_08015c7c:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015c82:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015c88()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015c90()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015ca8\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015cb8\n\
     b          LAB_08015cbe\n\
LAB_08015ca8:\n\
     ldr        r1,DAT_08015cb4\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015cbe\n\
.space 1\n\
.space 1\n\
DAT_08015cb4:\n\
     .4byte 0x000002EF\n\
LAB_08015cb8:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015cbe:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015cc4()
{
    asm("\n\
     mov        r2,#0x0\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     ldr        r0,DAT_08015cd0\n\
     strh       r2,[r0,#0x0]\n\
     bx         lr\n\
DAT_08015cd0:\n\
     .4byte 0x0200DC8C\n\
    ");
}
__attribute__((naked)) void fun_08015cd4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r5,DAT_08015d24\n\
     ldrh       r0,[r5,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x96\n\
     bls        LAB_08015d08\n\
     mov        r0,#0xc8\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x9\n\
     bls        LAB_08015cf8\n\
     ldrh       r0,[r4,#0x10]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08015d08\n\
LAB_08015cf8:\n\
     ldrh       r0,[r4,#0x10]\n\
     add        r0,#0x1\n\
     lsr        r1,r0,#0x1\n\
     lsl        r1,r1,#0x1\n\
     sub        r0,r0,r1\n\
     mov        r1,#0x0\n\
     strh       r0,[r4,#0x10]\n\
     strh       r1,[r5,#0x0]\n\
LAB_08015d08:\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08015d38\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08015d28\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015d2e\n\
     b          LAB_08015d4e\n\
.space 1\n\
.space 1\n\
DAT_08015d24:\n\
     .4byte 0x0200DC8C\n\
LAB_08015d28:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08015d48\n\
     b          LAB_08015d4e\n\
LAB_08015d2e:\n\
     ldr        r1,DAT_08015d34\n\
     b          LAB_08015d3a\n\
.space 1\n\
.space 1\n\
DAT_08015d34:\n\
     .4byte 0x000004EB\n\
LAB_08015d38:\n\
     ldr        r1,DAT_08015d44\n\
LAB_08015d3a:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08015d4e\n\
.space 1\n\
.space 1\n\
DAT_08015d44:\n\
     .4byte 0x000004EC\n\
LAB_08015d48:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08015d4e:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08015d54()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r8,r0\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     ldrh       r4,[r5,#0x0]\n\
     ldr        r0,DAT_08015e74\n\
     cmp        r4,r0\n\
     bne        LAB_08015d9c\n\
     ldr        r0,DAT_08015e78\n\
     ldrh       r1,[r6,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08015d9c\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_08015e7c\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08015d9c\n\
     ldr        r1,DAT_08015e80\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08015e7c\n\
     add        r0,r0,r1\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r2,#0xe1\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r0,r2\n\
     ldr        r1,DAT_08015e84\n\
     strh       r1,[r0,#0x0]\n\
LAB_08015d9c:\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08015e7c\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r7,#0xe1\n\
     lsl        r7,r7,#0x4\n\
     add        r0,r0,r7\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     add        r1,r6,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     ldr        r0,DAT_08015e74\n\
     ldrh       r2,[r5,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08015e68\n\
     ldrh       r4,[r6,#0x0]\n\
     ldr        r0,DAT_08015e84\n\
     cmp        r4,r0\n\
     bne        LAB_08015e1c\n\
     bl         fun_080020a4\n\
     add        r0,r0,r7\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r4\n\
     bne        LAB_08015e1c\n\
     ldr        r2,DAT_08015e80\n\
     mov        r0,#0xcc\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r2,r0\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08015e88\n\
     mov        r0,#0x93\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08015e8c\n\
     add        r1,r2,r0\n\
     mov        r0,#0x9f\n\
     lsl        r0,r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08015e90\n\
     add        r1,r2,r0\n\
     sub        r0,#0x16\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08015e94\n\
     add        r2,r2,r1\n\
     mov        r0,#0x7\n\
     strb       r0,[r2,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x1\n\
     mov        r2,r8\n\
     strb       r0,[r2,#0x18]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r7\n\
     mov        r1,#0xfe\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
LAB_08015e1c:\n\
     ldr        r0,DAT_08015e74\n\
     ldrh       r5,[r5,#0x0]\n\
     cmp        r5,r0\n\
     bne        LAB_08015e68\n\
     ldrh       r4,[r6,#0x0]\n\
     mov        r0,#0xfe\n\
     lsl        r0,r0,#0x3\n\
     cmp        r4,r0\n\
     bne        LAB_08015e68\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe1\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r4\n\
     bne        LAB_08015e68\n\
     ldr        r0,DAT_08015e80\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x10]\n\
     mov        r2,#0xcc\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r0,r2\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08015e88\n\
     mov        r0,#0xa1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x1\n\
     mov        r1,r8\n\
     strb       r0,[r1,#0x18]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x6\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08015e68:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015e74:\n\
     .4byte 0x00000A18\n\
DAT_08015e78:\n\
     .4byte 0x000007EB\n\
DAT_08015e7c:\n\
     .4byte 0x00000E0E\n\
DAT_08015e80:\n\
     .4byte 0x020006A0\n\
DAT_08015e84:\n\
     .4byte 0x00000837\n\
DAT_08015e88:\n\
     .4byte 0x0200DC90\n\
DAT_08015e8c:\n\
     .4byte 0x000008E4\n\
DAT_08015e90:\n\
     .4byte 0x000008E6\n\
DAT_08015e94:\n\
     .4byte 0x000008F8\n\
    ");
}
__attribute__((naked)) void fun_08015e98()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r5,#0x0\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe1\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_08015ec0\n\
     add        r4,r4,r0\n\
     strh       r5,[r4,#0x0]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08015ec0:\n\
     .4byte 0x00000E0E\n\
    ");
}
__attribute__((naked)) void fun_08015ec4()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015ef2\n\
     ldr        r1,DAT_08015ef8\n\
     mov        r0,#0x88\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08015efc\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x4\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08015ef2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08015ef8:\n\
     .4byte 0x0200DC90\n\
DAT_08015efc:\n\
     .4byte 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08015f00()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015f22\n\
     ldr        r1,DAT_08015f28\n\
     mov        r0,#0xb4\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08015f2c\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
LAB_08015f22:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08015f28:\n\
     .4byte 0x0200DC90\n\
DAT_08015f2c:\n\
     .4byte 0x0000FFFE\n\
     .4byte 0x00004770\n\
    ");
}
__attribute__((naked)) void fun_08015f34()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015f3c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08015f48()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r4,r1,#0x0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r7,r2,#0x10\n\
     lsl        r3,r3,#0x18\n\
     lsr        r5,r3,#0x18\n\
     ldr        r6,[r0,#0xc]\n\
     cmp        r6,#0x0\n\
     beq        LAB_08015fdc\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08015f6e\n\
     add        r0,r7,#0x0\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
LAB_08015f6e:\n\
     ldr        r1,DAT_08015f98\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x64\n\
     bls        LAB_08015fd2\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x9\n\
     bhi        LAB_08015fd2\n\
     cmp        r5,#0x1\n\
     beq        LAB_08015f9c\n\
     cmp        r5,#0x1\n\
     ble        LAB_08015faa\n\
     cmp        r5,#0x2\n\
     beq        LAB_08015fa4\n\
     b          LAB_08015faa\n\
.space 1\n\
.space 1\n\
DAT_08015f98:\n\
     .4byte 0x0200DC68\n\
LAB_08015f9c:\n\
     mov        r0,#0x4\n\
     bl         fun_080016f0\n\
     b          LAB_08015faa\n\
LAB_08015fa4:\n\
     mov        r0,#0x5\n\
     bl         fun_080016f0\n\
LAB_08015faa:\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x18\n\
     bhi        LAB_08015fcc\n\
     ldr        r4,DAT_08015fc8\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
     ldrh       r1,[r4,#0x0]\n\
     sub        r1,#0xa\n\
     sub        r1,r1,r0\n\
     strh       r1,[r4,#0x0]\n\
     b          LAB_08015fd2\n\
.space 1\n\
.space 1\n\
DAT_08015fc8:\n\
     .4byte 0x0200DC68\n\
LAB_08015fcc:\n\
     ldr        r1,DAT_08015fd8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08015fd2:\n\
     mov        r0,#0x1\n\
     b          LAB_08015ff2\n\
.space 1\n\
.space 1\n\
DAT_08015fd8:\n\
     .4byte 0x0200DC68\n\
LAB_08015fdc:\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08015ff0\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001704\n\
     str        r6,[r4,#0x0]\n\
LAB_08015ff0:\n\
     mov        r0,#0x0\n\
LAB_08015ff2:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08015ff8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016000()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016018\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016028\n\
     b          LAB_0801602e\n\
LAB_08016018:\n\
     ldr        r1,DAT_08016024\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801602e\n\
.space 1\n\
.space 1\n\
DAT_08016024:\n\
     .4byte 0x00000312\n\
LAB_08016028:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801602e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08016034()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801603c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016054\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016064\n\
     b          LAB_0801606a\n\
LAB_08016054:\n\
     ldr        r1,DAT_08016060\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801606a\n\
.space 1\n\
.space 1\n\
DAT_08016060:\n\
     .4byte 0x000002F2\n\
LAB_08016064:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801606a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08016070()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016078()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x6a\n\
     bl         fun_080034c0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080160a4\n\
     ldr        r1,DAT_080160a0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080160aa\n\
     mov        r0,#0x18\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_080160aa\n\
DAT_080160a0:\n\
     .4byte 0x000001C9\n\
LAB_080160a4:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080160aa:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080160b0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r7,r2,#0x0\n\
     mov        r8,r3\n\
     ldr        r6,DAT_0801615c\n\
     bl         fun_080020a4\n\
     ldr        r5,DAT_08016160\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r6,#0x2\n\
     mov        r9,r1\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801610a\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x9\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_0801610a:\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r6\n\
     ldrh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r0,r7,#0x0\n\
     mov        r1,r8\n\
     add        r2,r4,#0x0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016150\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x1\n\
     mov        r1,#0x9\n\
     bl         __umodsi3\n\
     add        r4,r4,r5\n\
     strb       r0,[r4,#0x0]\n\
LAB_08016150:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801615c:\n\
     .4byte 0x0877FDD4\n\
DAT_08016160:\n\
     .4byte 0x00000E99\n\
    ");
}
__attribute__((naked)) void fun_08016164()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r4,#0x0\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0801617c\n\
     add        r0,r0,r1\n\
     strb       r4,[r0,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801617c:\n\
     .4byte 0x00000E99\n\
    ");
}
__attribute__((naked)) void fun_08016180()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r2,#0x0\n\
     ldr        r3,DAT_080161f8\n\
     ldr        r0,DAT_080161fc\n\
     add        r7,r3,r0\n\
     mov        r9,r2\n\
     mov        r1,#0x9f\n\
     lsl        r1,r1,#0x5\n\
     mov        r8,r1\n\
     mov        r6,#0x0\n\
     add        r1,r3,#0x0\n\
     add        r1,r8\n\
LAB_080161a0:\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc\n\
     mov        r4,r8\n\
     add        r5,r4,r0\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016258\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r4,#0x0\n\
     mov        r10,r4\n\
     strh       r0,[r1,#0x10]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x4\n\
     bne        LAB_08016258\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x32\n\
     bhi        LAB_0801626c\n\
     ldr        r4,DAT_08016200\n\
     add        r4,r6,r4\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08016204\n\
     add        r2,r6,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     cmp        r0,r1\n\
     bne        LAB_080161e2\n\
     mov        r0,r10\n\
     str        r0,[r2,#0x0]\n\
LAB_080161e2:\n\
     mov        r0,#0xa\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x4\n\
     bhi        LAB_0801620c\n\
     ldr        r1,[r5,#0x0]\n\
     ldr        r2,DAT_08016208\n\
     add        r0,r2,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     and        r0,r4\n\
     b          LAB_08016214\n\
DAT_080161f8:\n\
     .4byte 0x020006A0\n\
DAT_080161fc:\n\
     .4byte 0x000013E4\n\
DAT_08016200:\n\
     .4byte 0x08780058\n\
DAT_08016204:\n\
     .4byte 0x08780038\n\
DAT_08016208:\n\
     .4byte 0x0000FFBF\n\
LAB_0801620c:\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,#0x40\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
LAB_08016214:\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_08016248\n\
     add        r1,r6,r1\n\
     ldr        r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     ldr        r4,DAT_0801624c\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r0,[r7,#0x0]\n\
     ldr        r2,DAT_08016250\n\
     ldr        r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r9\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r0,[r7,#0x2]\n\
     ldr        r0,DAT_08016254\n\
     add        r0,#0xc\n\
     add        r0,r8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r7,#0xc]\n\
     b          LAB_0801626c\n\
.space 1\n\
.space 1\n\
DAT_08016248:\n\
     .4byte 0x08780038\n\
DAT_0801624c:\n\
     .4byte 0x0877FDF8\n\
DAT_08016250:\n\
     .4byte 0x0877FF18\n\
DAT_08016254:\n\
     .4byte 0x020006A0\n\
LAB_08016258:\n\
     add        r7,#0x20\n\
     mov        r4,#0x24\n\
     add        r9,r4\n\
     mov        r0,#0x20\n\
     add        r8,r0\n\
     add        r6,#0x4\n\
     add        r1,#0x20\n\
     add        r2,#0x1\n\
     cmp        r2,#0x7\n\
     bls        LAB_080161a0\n\
LAB_0801626c:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801627c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016284()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801629c\n\
     cmp        r0,#0x1\n\
     beq        LAB_080162ac\n\
     b          LAB_080162b2\n\
LAB_0801629c:\n\
     ldr        r1,DAT_080162a8\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080162b2\n\
.space 1\n\
.space 1\n\
DAT_080162a8:\n\
     .4byte 0x000003B6\n\
LAB_080162ac:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080162b2:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080162b8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080162c0()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_080162d8\n\
     cmp        r4,#0x1\n\
     beq        LAB_080162ec\n\
     b          LAB_080162f4\n\
LAB_080162d8:\n\
     ldr        r1,DAT_080162e8\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_080162f4\n\
.space 1\n\
.space 1\n\
DAT_080162e8:\n\
     .4byte 0x000003B5\n\
LAB_080162ec:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_080162f4:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080162fc()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016304()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016310()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016318()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_08016330\n\
     cmp        r4,#0x1\n\
     beq        LAB_08016344\n\
     b          LAB_0801634c\n\
LAB_08016330:\n\
     ldr        r1,DAT_08016340\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     b          LAB_0801634c\n\
.space 1\n\
.space 1\n\
DAT_08016340:\n\
     .4byte 0x000003A3\n\
LAB_08016344:\n\
     add        r0,r5,#0x0\n\
     bl         fun_0800eb28\n\
     strb       r4,[r5,#0x18]\n\
LAB_0801634c:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016354()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801635c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016388\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0801637a\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016380\n\
     b          LAB_0801639e\n\
LAB_0801637a:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08016398\n\
     b          LAB_0801639e\n\
LAB_08016380:\n\
     ldr        r1,DAT_08016384\n\
     b          LAB_0801638a\n\
DAT_08016384:\n\
     .4byte 0x0000056C\n\
LAB_08016388:\n\
     ldr        r1,DAT_08016394\n\
LAB_0801638a:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_0801639e\n\
.space 1\n\
.space 1\n\
DAT_08016394:\n\
     .4byte 0x00000575\n\
LAB_08016398:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_0801639e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080163a4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080163ac()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080163c4\n\
     cmp        r0,#0x1\n\
     beq        LAB_080163d4\n\
     b          LAB_080163da\n\
LAB_080163c4:\n\
     ldr        r1,DAT_080163d0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080163da\n\
.space 1\n\
.space 1\n\
DAT_080163d0:\n\
     .4byte 0x000003AD\n\
LAB_080163d4:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_080163da:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080163e0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080163e8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016414\n\
     ldr        r1,DAT_0801641c\n\
     mov        r0,#0x5c\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08016420\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08016414:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801641c:\n\
     .4byte 0x0200DC90\n\
DAT_08016420:\n\
     .4byte 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08016424()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016470\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016450\n\
     cmp        r0,#0x1\n\
     bcc        LAB_08016446\n\
     cmp        r0,#0x2\n\
     beq        LAB_0801645c\n\
     b          LAB_08016462\n\
LAB_08016446:\n\
     ldr        r1,DAT_0801644c\n\
     mov        r0,#0x6a\n\
     b          LAB_08016460\n\
DAT_0801644c:\n\
     .4byte 0x0200DC90\n\
LAB_08016450:\n\
     ldr        r1,DAT_08016458\n\
     mov        r0,#0x6c\n\
     b          LAB_08016460\n\
.space 1\n\
.space 1\n\
DAT_08016458:\n\
     .4byte 0x0200DC90\n\
LAB_0801645c:\n\
     ldr        r1,DAT_08016478\n\
     mov        r0,#0x6e\n\
LAB_08016460:\n\
     strh       r0,[r1,#0x0]\n\
LAB_08016462:\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_0801647c\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
LAB_08016470:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08016478:\n\
     .4byte 0x0200DC90\n\
DAT_0801647c:\n\
     .4byte 0x0000FFFE\n\
    ");
}
__attribute__((naked)) void fun_08016480()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x31\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080164aa\n\
     mov        r0,#0x31\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080164aa\n\
     mov        r0,#0x31\n\
     bl         fun_080017b8\n\
     mov        r0,#0x1e\n\
     bl         fun_08001088\n\
     b          LAB_080164b4\n\
LAB_080164aa:\n\
     mov        r0,#0xfe\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080003e0\n\
LAB_080164b4:\n\
     mov        r0,#0x6\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x3\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080164c8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080164f2\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080164e6\n\
     cmp        r0,#0x0\n\
     beq        LAB_080164ec\n\
     b          LAB_08016506\n\
LAB_080164e6:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08016500\n\
     b          LAB_08016506\n\
LAB_080164ec:\n\
     mov        r1,#0xab\n\
     lsl        r1,r1,#0x3\n\
     b          LAB_080164f4\n\
LAB_080164f2:\n\
     ldr        r1,DAT_080164fc\n\
LAB_080164f4:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016506\n\
DAT_080164fc:\n\
     .4byte 0x00000559\n\
LAB_08016500:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08016506:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801650c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016514()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r5,#0x1\n\
     add        r0,r5,#0x0\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016550\n\
     ldr        r1,DAT_08016558\n\
     ldr        r2,DAT_0801655c\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08016560\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     ldr        r0,DAT_08016564\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x15\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x17\n\
     bl         fun_080017b8\n\
LAB_08016550:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08016558:\n\
     .4byte 0x0200DC90\n\
DAT_0801655c:\n\
     .4byte 0x0000012D\n\
DAT_08016560:\n\
     .4byte 0x0000FFFE\n\
DAT_08016564:\n\
     .4byte 0x0200DCA0\n\
    ");
}
__attribute__((naked)) void fun_08016568()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016574()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801657c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016588()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080165a4\n\
     mov        r1,#0xe3\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
LAB_080165a4:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080165ac()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     ldr        r1,DAT_080165d4\n\
     ldr        r2,DAT_080165d8\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080165dc\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080165d4:\n\
     .4byte 0x020025E8\n\
DAT_080165d8:\n\
     .4byte 0x0000027B\n\
DAT_080165dc:\n\
     .4byte 0x00000DEE\n\
    ");
}
__attribute__((naked)) void fun_080165e0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080165e8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016614\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08016606\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801660c\n\
     b          LAB_08016626\n\
LAB_08016606:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08016620\n\
     b          LAB_08016626\n\
LAB_0801660c:\n\
     ldr        r1,DAT_08016610\n\
     b          LAB_08016618\n\
DAT_08016610:\n\
     .4byte 0x0000034F\n\
LAB_08016614:\n\
     mov        r1,#0xd4\n\
     lsl        r1,r1,#0x2\n\
LAB_08016618:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016626\n\
LAB_08016620:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08016626:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801662c()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016634()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016660\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08016652\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016658\n\
     b          LAB_08016676\n\
LAB_08016652:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08016670\n\
     b          LAB_08016676\n\
LAB_08016658:\n\
     ldr        r1,DAT_0801665c\n\
     b          LAB_08016662\n\
DAT_0801665c:\n\
     .4byte 0x00000382\n\
LAB_08016660:\n\
     ldr        r1,DAT_0801666c\n\
LAB_08016662:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016676\n\
.space 1\n\
.space 1\n\
DAT_0801666c:\n\
     .4byte 0x00000383\n\
LAB_08016670:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08016676:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801667c()
{
    asm("\n\
     mov        r1,#0x3\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016684()
{
    asm("\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016688()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x18\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080166c8\n\
     ldr        r1,DAT_080166bc\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080166d0\n\
     ldr        r1,DAT_080166c0\n\
     mov        r0,#0x17\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080166c4\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_080166d0\n\
.space 1\n\
.space 1\n\
DAT_080166bc:\n\
     .4byte 0x00000232\n\
DAT_080166c0:\n\
     .4byte 0x02002524\n\
DAT_080166c4:\n\
     .4byte 0x00000DF6\n\
LAB_080166c8:\n\
     ldr        r1,DAT_080166d8\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_080166d0:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080166d8:\n\
     .4byte 0x00000656\n\
    ");
}
__attribute__((naked)) void fun_080166dc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x12\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080166f0\n\
     mov        r0,#0x0\n\
     b          LAB_08016758\n\
LAB_080166f0:\n\
     ldr        r1,DAT_08016760\n\
     mov        r2,#0xa7\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r0,DAT_08016764\n\
     ldrh       r1,[r4,#0x16]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x16]\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x6\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x3f\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     ldr        r2,DAT_08016768\n\
     ldr        r1,DAT_0801676c\n\
     add        r0,r2,r1\n\
     mov        r4,#0xfe\n\
     lsl        r4,r4,#0x3\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,DAT_08016770\n\
     add        r1,r2,r0\n\
     ldr        r0,DAT_08016774\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08016778\n\
     add        r1,r2,r0\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     strb       r0,[r2,#0x18]\n\
     bl         fun_080020a4\n\
     mov        r1,#0xe0\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0801677c\n\
     add        r0,r0,r2\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x3\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
LAB_08016758:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08016760:\n\
     .4byte 0x0200DC90\n\
DAT_08016764:\n\
     .4byte 0x0000FFFE\n\
DAT_08016768:\n\
     .4byte 0x020006A0\n\
DAT_0801676c:\n\
     .4byte 0x00000B64\n\
DAT_08016770:\n\
     .4byte 0x00000B66\n\
DAT_08016774:\n\
     .4byte 0x00000532\n\
DAT_08016778:\n\
     .4byte 0x00000B68\n\
DAT_0801677c:\n\
     .4byte 0x00000E02\n\
    ");
}
__attribute__((naked)) void fun_08016780()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x4\n\
     mov        r9,r0\n\
     ldr        r7,DAT_08016894\n\
     ldr        r0,DAT_08016898\n\
     add        r0,r0,r7\n\
     mov        r8,r0\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0801689c\n\
     add        r6,r7,r1\n\
     ldrh       r0,[r6,#0x0]\n\
     mov        r4,sp\n\
     add        r4,#0x2\n\
     strh       r0,[r4,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r2,#0xe0\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r0,r2\n\
     ldrh       r5,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080168a0\n\
     add        r0,r0,r1\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,sp\n\
     add        r1,r4,#0x0\n\
     add        r2,r5,#0x0\n\
     bl         fun_0800eaa4\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r2,r8\n\
     strh       r0,[r2,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     mov        r0,#0x96\n\
     lsl        r0,r0,#0x3\n\
     mov        r8,r4\n\
     cmp        r5,r0\n\
     bne        LAB_0801681a\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080168a0\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,r5\n\
     bne        LAB_0801681a\n\
     ldr        r0,[r7,#0x8]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0801681a\n\
     bl         fun_080020a4\n\
     mov        r1,sp\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,#0x10\n\
     ldr        r2,DAT_080168a4\n\
     add        r0,r0,r2\n\
     strh       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldrh       r1,[r7,#0x6]\n\
     ldr        r2,DAT_080168a8\n\
     add        r0,r0,r2\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     strb       r0,[r7,#0x18]\n\
     ldr        r1,DAT_080168ac\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0801681a:\n\
     ldr        r6,DAT_08016894\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r6,r1]\n\
     mov        r1,sp\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r1,#0x10\n\
     cmp        r0,r1\n\
     bne        LAB_08016840\n\
     mov        r0,#0x1\n\
     str        r0,[r6,#0x8]\n\
     ldr        r0,DAT_080168ac\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_080168a0\n\
     add        r0,r0,r2\n\
     ldr        r1,DAT_080168b0\n\
     strh       r1,[r0,#0x0]\n\
LAB_08016840:\n\
     ldr        r0,DAT_080168b0\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r0\n\
     bne        LAB_08016884\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_080168a0\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r0,r1\n\
     bne        LAB_08016884\n\
     mov        r5,#0x0\n\
     mov        r4,#0x2\n\
     mov        r2,r9\n\
     strb       r4,[r2,#0x18]\n\
     bl         fun_08001f94\n\
     mov        r0,#0x16\n\
     bl         fun_08001088\n\
     str        r4,[r6,#0x8]\n\
     strb       r5,[r6,#0x18]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080168b4\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r2,DAT_080168b8\n\
     add        r1,r6,r2\n\
     mov        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_08016884:\n\
     add        sp,#0x4\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08016894:\n\
     .4byte 0x020006A0\n\
DAT_08016898:\n\
     .4byte 0x00000B64\n\
DAT_0801689c:\n\
     .4byte 0x00000B66\n\
DAT_080168a0:\n\
     .4byte 0x00000E02\n\
DAT_080168a4:\n\
     .4byte 0x00000DDC\n\
DAT_080168a8:\n\
     .4byte 0x00000DDE\n\
DAT_080168ac:\n\
     .4byte 0x02002554\n\
DAT_080168b0:\n\
     .4byte 0x0000052E\n\
DAT_080168b4:\n\
     .4byte 0x00000DD8\n\
DAT_080168b8:\n\
     .4byte 0x00000B68\n\
    ");
}
__attribute__((naked)) void fun_080168bc()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r5,#0x0\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080168e4\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0xe0\n\
     lsl        r0,r0,#0x4\n\
     add        r4,r4,r0\n\
     strh       r5,[r4,#0x0]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080168e4:\n\
     .4byte 0x00000E02\n\
     .4byte 0x00004770\n\
    ");
}
__attribute__((naked)) void fun_080168ec()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r5,[r4,#0x16]\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801691a\n\
     add        r0,r4,#0x0\n\
     bl         fun_080166dc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801691a\n\
     ldr        r1,DAT_08016920\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x3f\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_0801691a:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08016920:\n\
     .4byte 0x00000155\n\
    ");
}
__attribute__((naked)) void fun_08016924()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     ldrh       r5,[r4,#0x16]\n\
     and        r0,r5\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016946\n\
     add        r0,r4,#0x0\n\
     bl         fun_080166dc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08016946\n\
     ldr        r1,DAT_0801694c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_08016946:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801694c:\n\
     .4byte 0x00000159\n\
    ");
}
__attribute__((naked)) void fun_08016950()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016958()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016970\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016980\n\
     b          LAB_08016988\n\
LAB_08016970:\n\
     ldr        r1,DAT_0801697c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016988\n\
.space 1\n\
.space 1\n\
DAT_0801697c:\n\
     .4byte 0x000004FC\n\
LAB_08016980:\n\
     ldr        r1,DAT_08016990\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_08016988:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08016990:\n\
     .4byte 0x000004FD\n\
    ");
}
__attribute__((naked)) void fun_08016994()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0801699c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x2\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_080169b4\n\
     cmp        r0,#0x1\n\
     beq        LAB_080169c4\n\
     b          LAB_080169cc\n\
LAB_080169b4:\n\
     ldr        r1,DAT_080169c0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_080169cc\n\
.space 1\n\
.space 1\n\
DAT_080169c0:\n\
     .4byte 0x000004FA\n\
LAB_080169c4:\n\
     ldr        r1,DAT_080169d4\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_080169cc:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080169d4:\n\
     .4byte 0x000004FB\n\
    ");
}
__attribute__((naked)) void fun_080169d8()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080169e0()
{
    asm("\n\
     push       {lr}\n\
     mov        r1,#0x9f\n\
     lsl        r1,r1,#0x3\n\
     bl         fun_0800ebb4\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080169f0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080169f8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016a24\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08016a16\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016a1c\n\
     b          LAB_08016a3a\n\
LAB_08016a16:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08016a30\n\
     b          LAB_08016a3a\n\
LAB_08016a1c:\n\
     ldr        r1,DAT_08016a20\n\
     b          LAB_08016a28\n\
DAT_08016a20:\n\
     .4byte 0x000002DA\n\
LAB_08016a24:\n\
     mov        r1,#0xb8\n\
     lsl        r1,r1,#0x2\n\
LAB_08016a28:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016a3a\n\
LAB_08016a30:\n\
     mov        r1,#0xb9\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_08016a3a:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08016a40()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016a48()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016a54()
{
    asm("\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016a58()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016a60()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016a8c\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08016a7e\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016a84\n\
     b          LAB_08016a9e\n\
LAB_08016a7e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08016a98\n\
     b          LAB_08016a9e\n\
LAB_08016a84:\n\
     ldr        r1,DAT_08016a88\n\
     b          LAB_08016a90\n\
DAT_08016a88:\n\
     .4byte 0x000004FF\n\
LAB_08016a8c:\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x3\n\
LAB_08016a90:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016a9e\n\
LAB_08016a98:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08016a9e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08016aa4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016aac()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016ac4\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016ad4\n\
     b          LAB_08016ada\n\
LAB_08016ac4:\n\
     ldr        r1,DAT_08016ad0\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016ada\n\
.space 1\n\
.space 1\n\
DAT_08016ad0:\n\
     .4byte 0x000002FB\n\
LAB_08016ad4:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08016ada:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08016ae0()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016ae8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016af4()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016afc()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016b08()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016b10()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_08016b3c\n\
     cmp        r0,#0x1\n\
     bgt        LAB_08016b2e\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016b34\n\
     b          LAB_08016b4e\n\
LAB_08016b2e:\n\
     cmp        r1,#0x2\n\
     beq        LAB_08016b48\n\
     b          LAB_08016b4e\n\
LAB_08016b34:\n\
     ldr        r1,DAT_08016b38\n\
     b          LAB_08016b40\n\
DAT_08016b38:\n\
     .4byte 0x00000366\n\
LAB_08016b3c:\n\
     mov        r1,#0xda\n\
     lsl        r1,r1,#0x2\n\
LAB_08016b40:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     b          LAB_08016b4e\n\
LAB_08016b48:\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800eb28\n\
LAB_08016b4e:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08016b54()
{
    asm("\n\
     mov        r1,#0x2\n\
     strb       r1,[r0,#0x18]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016b5c()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1b\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016bb4\n\
     ldr        r1,DAT_08016bac\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016bd0\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0xfe\n\
     mov        r1,#0xfe\n\
     mov        r2,#0x0\n\
     bl         fun_080003e0\n\
     ldr        r1,DAT_08016bb0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1b\n\
     bl         fun_080018e4\n\
     mov        r0,#0x41\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0xb\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x10]\n\
     b          LAB_08016bd0\n\
.space 1\n\
.space 1\n\
DAT_08016bac:\n\
     .4byte 0x0000013F\n\
DAT_08016bb0:\n\
     .4byte 0x0200DCA0\n\
LAB_08016bb4:\n\
     mov        r1,#0x9a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016bd0\n\
     mov        r0,#0x3\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x41\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
LAB_08016bd0:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016bd8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x1b\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016c30\n\
     ldr        r1,DAT_08016c28\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016c38\n\
     mov        r0,#0xfe\n\
     mov        r1,#0xfe\n\
     mov        r2,#0x0\n\
     bl         fun_080003e0\n\
     ldr        r1,DAT_08016c2c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
     mov        r0,#0x41\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0xb\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x1b\n\
     bl         fun_080018e4\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x10]\n\
     b          LAB_08016c38\n\
.space 1\n\
.space 1\n\
DAT_08016c28:\n\
     .4byte 0x0000013F\n\
DAT_08016c2c:\n\
     .4byte 0x0200DCA0\n\
LAB_08016c30:\n\
     ldr        r1,DAT_08016c40\n\
     add        r0,r4,#0x0\n\
     bl         fun_0800ebb4\n\
LAB_08016c38:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08016c40:\n\
     .4byte 0x0000013D\n\
    ");
}
__attribute__((naked)) void fun_08016c44()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800eb28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016c50()
{
    asm("\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08016c54()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,DAT_08016c94\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,#0xa\n\
     bl         __umodsi3\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08016cc6\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x3b\n\
     bhi        LAB_08016cc6\n\
     ldr        r2,DAT_08016c98\n\
     ldr        r1,DAT_08016c9c\n\
     ldrh       r3,[r1,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x4\n\
     add        r4,r0,r2\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0xaa\n\
     bne        LAB_08016cac\n\
     ldr        r0,DAT_08016ca0\n\
     ldr        r3,[r0,#0x0]\n\
     ldrh       r2,[r3,#0x0]\n\
     ldr        r1,DAT_08016ca4\n\
     ldr        r0,DAT_08016ca8\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     b          LAB_08016cb8\n\
DAT_08016c94:\n\
     .4byte 0x0200DC9C\n\
DAT_08016c98:\n\
     .4byte 0x08669620\n\
DAT_08016c9c:\n\
     .4byte 0x0200DC90\n\
DAT_08016ca0:\n\
     .4byte 0x0200DC98\n\
DAT_08016ca4:\n\
     .4byte 0x087800EC\n\
DAT_08016ca8:\n\
     .4byte 0x020025BC\n\
LAB_08016cac:\n\
     ldr        r0,DAT_08016ccc\n\
     ldr        r3,[r0,#0x0]\n\
     ldrh       r2,[r3,#0x0]\n\
     ldr        r1,DAT_08016cd0\n\
     ldrb       r4,[r4,#0x0]\n\
     lsl        r0,r4,#0x1\n\
LAB_08016cb8:\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     cmp        r2,r0\n\
     bne        LAB_08016cc4\n\
     add        r0,#0x1\n\
LAB_08016cc4:\n\
     strh       r0,[r3,#0x0]\n\
LAB_08016cc6:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08016ccc:\n\
     .4byte 0x0200DC98\n\
DAT_08016cd0:\n\
     .4byte 0x087800EC\n\
    ");
}
__attribute__((naked)) void fun_08016cd4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     ldr        r0,DAT_08016d34\n\
     bl         fun_08003998\n\
     ldr        r6,DAT_08016d38\n\
     str        r0,[r6,#0x0]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x7c\n\
     strh       r1,[r0,#0x4]\n\
     bl         fun_08016f94\n\
     ldr        r5,DAT_08016d3c\n\
     ldr        r0,DAT_08016d40\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldr        r4,DAT_08016d44\n\
     ldrh       r2,[r4,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r0,r5,#0x4\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,#0x1d\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x13\n\
     mov        r3,#0x5\n\
     bl         fun_08017078\n\
     ldr        r1,DAT_08016d48\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r1,[r4,#0x0]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r0,r5\n\
     ldrb       r2,[r0,#0x0]\n\
     cmp        r2,#0xaa\n\
     bne        LAB_08016d54\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r1,DAT_08016d4c\n\
     ldr        r0,DAT_08016d50\n\
     ldrh       r0,[r0,#0x0]\n\
     b          LAB_08016d5a\n\
DAT_08016d34:\n\
     .4byte 0x0846A25C\n\
DAT_08016d38:\n\
     .4byte 0x0200DC98\n\
DAT_08016d3c:\n\
     .4byte 0x08669620\n\
DAT_08016d40:\n\
     .4byte 0x020025B4\n\
DAT_08016d44:\n\
     .4byte 0x0200DC90\n\
DAT_08016d48:\n\
     .4byte 0x0200DC94\n\
DAT_08016d4c:\n\
     .4byte 0x087800EC\n\
DAT_08016d50:\n\
     .4byte 0x020025BC\n\
LAB_08016d54:\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r1,DAT_08016d9c\n\
     ldrb       r0,[r0,#0x0]\n\
LAB_08016d5a:\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     bl         fun_08004c10\n\
     ldr        r1,DAT_08016da0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08016da4\n\
     ldr        r0,DAT_08016da8\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x8\n\
     bl         fun_08004c04\n\
     mov        r0,#0x3\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x3\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_08005aa4\n\
     bl         fun_0800117c\n\
     bl         fun_0803dd5c\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08016d9c:\n\
     .4byte 0x087800EC\n\
DAT_08016da0:\n\
     .4byte 0x02000400\n\
DAT_08016da4:\n\
     .4byte 0x02000402\n\
DAT_08016da8:\n\
     .4byte 0x02007F78\n\
    ");
}
__attribute__((naked)) void fun_08016dac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x3c\n\
     ldr        r0,DAT_08016de0\n\
     mov        r10,r0\n\
     bl         fun_0803a9dc\n\
     ldr        r1,DAT_08016de4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_08016c54\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08016dd8\n\
     b          LAB_08016f26\n\
LAB_08016dd8:\n\
     ldr        r3,DAT_08016de8\n\
     ldr        r1,DAT_08016dec\n\
     mov        r8,r1\n\
     b          LAB_08016e66\n\
DAT_08016de0:\n\
     .4byte 0x000006C4\n\
DAT_08016de4:\n\
     .4byte 0x0200DC9C\n\
DAT_08016de8:\n\
     .4byte 0x0200DC90\n\
DAT_08016dec:\n\
     .4byte 0x0200DC94\n\
LAB_08016df0:\n\
     ldrh       r2,[r3,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r9\n\
     ldrb       r0,[r0,#0x1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016e08\n\
     ldr        r0,DAT_08016e48\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016e28\n\
LAB_08016e08:\n\
     str        r3,[sp,#0x38]\n\
     bl         fun_0800138c\n\
     lsl        r0,r0,#0x10\n\
     ldr        r3,[sp,#0x38]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08016e28\n\
     ldr        r0,DAT_08016e48\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016e54\n\
     ldrh       r1,[r3,#0x0]\n\
     mov        r0,r10\n\
     sub        r0,#0x1\n\
     cmp        r1,r0\n\
     bne        LAB_08016e54\n\
LAB_08016e28:\n\
     ldr        r0,DAT_08016e4c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08016f04\n\
     ldr        r2,DAT_08016e50\n\
     mov        r0,#0x0\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r0,#0x1\n\
.syntax unified\n\
     rsbs       r0,r0,#0\n\
.syntax divided\n\
     bne        LAB_08016f0c\n\
     bl         fun_0800117c\n\
     bl         fun_080010d8\n\
     b          LAB_08016f64\n\
.space 2\n\
DAT_08016e48:\n\
     .4byte 0x0200252C\n\
DAT_08016e4c:\n\
     .4byte 0x0200DCA0\n\
DAT_08016e50:\n\
     .4byte 0x02002524\n\
LAB_08016e54:\n\
     ldr        r1,DAT_08016ee8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_08016eec\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     add        r3,r1,#0x0\n\
     mov        r8,r2\n\
LAB_08016e66:\n\
     mov        r1,r8\n\
     ldrh       r4,[r1,#0x0]\n\
     ldr        r2,DAT_08016ef0\n\
     mov        r9,r2\n\
     ldr        r7,DAT_08016ef4\n\
     ldr        r1,[r7,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     add        r5,r3,#0x0\n\
     ldrh       r2,[r5,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     mov        r6,r9\n\
     add        r6,#0x4\n\
     add        r1,r1,r6\n\
     ldr        r0,[r1,#0x0]\n\
     str        r3,[sp,#0x38]\n\
     bl         strlen\n\
     ldr        r3,[sp,#0x38]\n\
     cmp        r4,r0\n\
     beq        LAB_08016df0\n\
     bl         fun_08016f94\n\
     ldr        r1,[r7,#0x0]\n\
     lsl        r1,r1,#0x2\n\
     ldrh       r2,[r5,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r1,r1,r0\n\
     add        r1,r1,r6\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r0,r1,r0\n\
     mov        r1,#0x1d\n\
     str        r1,[sp,#0x0]\n\
     mov        r1,#0x10\n\
     mov        r2,#0x13\n\
     mov        r3,#0x5\n\
     bl         fun_08017078\n\
     mov        r2,r8\n\
     ldrh       r2,[r2,#0x0]\n\
     add        r0,r0,r2\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r2,[r5,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     mov        r1,r9\n\
     add        r3,r0,r1\n\
     ldrb       r2,[r3,#0x0]\n\
     cmp        r2,#0xaa\n\
     bne        LAB_08016f14\n\
     ldr        r0,DAT_08016ef8\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_08016efc\n\
     ldr        r0,DAT_08016f00\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     b          LAB_08016f1e\n\
DAT_08016ee8:\n\
     .4byte 0x0200DC90\n\
DAT_08016eec:\n\
     .4byte 0x0200DC94\n\
DAT_08016ef0:\n\
     .4byte 0x08669620\n\
DAT_08016ef4:\n\
     .4byte 0x020025B4\n\
DAT_08016ef8:\n\
     .4byte 0x0200DC98\n\
DAT_08016efc:\n\
     .4byte 0x087800EC\n\
DAT_08016f00:\n\
     .4byte 0x020025BC\n\
LAB_08016f04:\n\
     mov        r0,#0x1e\n\
     bl         fun_08001070\n\
     b          LAB_08016f64\n\
LAB_08016f0c:\n\
     ldrh       r0,[r2,#0x0]\n\
     bl         fun_08001070\n\
     b          LAB_08016f64\n\
LAB_08016f14:\n\
     ldr        r0,DAT_08016f78\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_08016f7c\n\
     ldrb       r3,[r3,#0x0]\n\
     lsl        r0,r3,#0x1\n\
LAB_08016f1e:\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_08016f26:\n\
     ldr        r0,DAT_08016f80\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08016f64\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_08016f84\n\
     ldr        r0,DAT_08016f88\n\
     ldrh       r2,[r0,#0x0]\n\
     ldr        r3,DAT_08016f8c\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x4\n\
     add        r0,r0,r3\n\
     ldrb       r3,[r0,#0x0]\n\
     add        r0,sp,#0x4\n\
     bl         sprintf\n\
     add        r0,sp,#0x4\n\
     bl         strlen\n\
     lsl        r0,r0,#0x3\n\
     mov        r1,#0xe8\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     ldr        r3,DAT_08016f90\n\
     add        r0,sp,#0x4\n\
     mov        r2,#0x4\n\
     bl         fun_0803c138\n\
LAB_08016f64:\n\
     mov        r0,#0x0\n\
     add        sp,#0x3c\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08016f78:\n\
     .4byte 0x0200DC98\n\
DAT_08016f7c:\n\
     .4byte 0x087800EC\n\
DAT_08016f80:\n\
     .4byte 0x0200252C\n\
DAT_08016f84:\n\
     .4byte 0x0844DA48\n\
DAT_08016f88:\n\
     .4byte 0x0200DC90\n\
DAT_08016f8c:\n\
     .4byte 0x08669620\n\
DAT_08016f90:\n\
     .4byte 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_08016f94()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     mov        r1,#0xe0\n\
     lsl        r1,r1,#0x7\n\
     add        r7,r1,#0x0\n\
LAB_08016fa8:\n\
     mov        r6,#0x0\n\
     mov        r0,#0xf\n\
     add        r0,r8\n\
     mov        r1,#0x1\n\
.syntax unified\n\
     rsbs       r1,r1,#0\n\
.syntax divided\n\
     add        r1,r8\n\
     mov        r9,r1\n\
     mov        r1,#0x1\n\
     add        r1,r8\n\
     mov        r10,r1\n\
     mov        r1,#0x1f\n\
     and        r0,r1\n\
     lsl        r5,r0,#0x10\n\
LAB_08016fc2:\n\
     mov        r4,#0x3f\n\
     and        r4,r6\n\
     mov        r0,r8\n\
     cmp        r0,#0x0\n\
     bne        LAB_08016ff8\n\
     cmp        r6,#0x0\n\
     bne        LAB_08016fd8\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x1\n\
     b          LAB_08016fe4\n\
LAB_08016fd8:\n\
     cmp        r6,#0x1d\n\
     beq        LAB_08016fec\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x0\n\
     add        r2,#0x8\n\
LAB_08016fe4:\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
     b          LAB_08016ff8\n\
LAB_08016fec:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x2\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
LAB_08016ff8:\n\
     mov        r1,r9\n\
     cmp        r1,#0x2\n\
     bhi        LAB_0801702a\n\
     cmp        r6,#0x0\n\
     bne        LAB_0801700a\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x5\n\
     b          LAB_08017016\n\
LAB_0801700a:\n\
     cmp        r6,#0x1d\n\
     beq        LAB_0801701e\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x0\n\
     add        r2,#0x9\n\
LAB_08017016:\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
     b          LAB_0801702a\n\
LAB_0801701e:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x6\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
LAB_0801702a:\n\
     mov        r0,r8\n\
     cmp        r0,#0x3\n\
     bls        LAB_0801705a\n\
     cmp        r6,#0x0\n\
     bne        LAB_0801703c\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x3\n\
     b          LAB_08017046\n\
LAB_0801703c:\n\
     cmp        r6,#0x1d\n\
     beq        LAB_0801704e\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x7\n\
LAB_08017046:\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
     b          LAB_0801705a\n\
LAB_0801704e:\n\
     add        r0,r4,#0x0\n\
     lsr        r1,r5,#0x10\n\
     add        r2,r7,#0x4\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
LAB_0801705a:\n\
     add        r6,#0x1\n\
     cmp        r6,#0x1d\n\
     bls        LAB_08016fc2\n\
     mov        r8,r10\n\
     mov        r1,r8\n\
     cmp        r1,#0x4\n\
     bls        LAB_08016fa8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08017078()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x10\n\
     mov        r10,r0\n\
     add        r4,r1,#0x0\n\
     ldr        r0,[sp,#0x30]\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[sp,#0x0]\n\
     lsl        r3,r3,#0x10\n\
     lsr        r3,r3,#0x10\n\
     str        r3,[sp,#0x4]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x0\n\
     mov        r9,r0\n\
     mov        r0,r10\n\
     bl         strlen\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0xc]\n\
     mov        r8,r4\n\
     ldr        r1,[sp,#0x0]\n\
     cmp        r8,r1\n\
     bcs        LAB_0801716e\n\
LAB_080170b8:\n\
     ldr        r7,[sp,#0x4]\n\
     ldr        r0,[sp,#0x8]\n\
     cmp        r7,r0\n\
     bcs        LAB_0801715e\n\
LAB_080170c0:\n\
     mov        r0,r10\n\
     add        r0,r9\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0801716e\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x20\n\
     bl         strchr\n\
     cmp        r0,#0x0\n\
     bne        LAB_080170dc\n\
     ldr        r0,[sp,#0xc]\n\
     b          LAB_080170ec\n\
LAB_080170dc:\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x20\n\
     bl         strchr\n\
     mov        r1,r10\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
LAB_080170ec:\n\
     mov        r1,r9\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r0,r7,r0\n\
     cmp        r0,#0x1c\n\
     bgt        LAB_08017150\n\
     ldrb       r2,[r5,#0x0]\n\
     cmp        r2,#0x20\n\
     beq        LAB_0801713e\n\
     add        r6,r7,#0x0\n\
     mov        r1,#0x3f\n\
     mov        r5,r8\n\
     add        r5,#0x0\n\
     mov        r0,#0x1f\n\
     add        r4,r2,#0x0\n\
     and        r6,r1\n\
     and        r5,r0\n\
     cmp        r4,#0x0\n\
     beq        LAB_0801712c\n\
     ldr        r0,DAT_0801714c\n\
     cmp        r4,r0\n\
     beq        LAB_08017132\n\
     mov        r1,#0xe0\n\
     lsl        r1,r1,#0x7\n\
     add        r0,r1,#0x0\n\
     orr        r2,r0\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
LAB_0801712c:\n\
     ldr        r0,DAT_0801714c\n\
     cmp        r4,r0\n\
     bne        LAB_0801713e\n\
LAB_08017132:\n\
     add        r0,r6,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x0\n\
     mov        r3,#0x3\n\
     bl         fun_08005bbc\n\
LAB_0801713e:\n\
     mov        r0,r9\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r9,r0\n\
     b          LAB_08017152\n\
.space 1\n\
.space 1\n\
DAT_0801714c:\n\
     .4byte 0x0000EA60\n\
LAB_08017150:\n\
     mov        r7,#0x1d\n\
LAB_08017152:\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     ldr        r1,[sp,#0x8]\n\
     cmp        r7,r1\n\
     bcc        LAB_080170c0\n\
LAB_0801715e:\n\
     mov        r0,r8\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r8,r0\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r8,r0\n\
     bcc        LAB_080170b8\n\
LAB_0801716e:\n\
     mov        r0,r9\n\
     add        sp,#0x10\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
