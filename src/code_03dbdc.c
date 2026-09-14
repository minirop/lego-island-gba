__attribute__((naked)) void fun_0803dbdc()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803dc22\n\
     lsr        r2,r0,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r3,DAT_0803dc28\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r2,r2,#0x6\n\
     add        r1,r2,r1\n\
     lsl        r0,r4,#0x1\n\
     add        r1,#0x2b\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803dc12\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r2,r0\n\
     add        r0,#0x2b\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
LAB_0803dc12:\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,r2,r1\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r2,#0x80\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_0803dc22:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803dc28:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803dc2c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x10\n\
     add        r5,r1,#0x0\n\
     ldr        r1,DAT_0803dc64\n\
     ldr        r2,[r1,#0x0]\n\
     add        r1,r2,#0x0\n\
     add        r1,#0xc8\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r0,r0,#0x6\n\
     add        r0,r0,r1\n\
     add        r0,#0x3e\n\
     ldrb       r4,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     mov        r1,#0x92\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     add        r7,r2,r0\n\
     ldr        r2,[r7,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803dc68\n\
     ldr        r1,[r5,#0x4]\n\
     ldr        r0,[r5,#0x8]\n\
     cmp        r1,r0\n\
     bcs        LAB_0803dcd2\n\
     str        r2,[r5,#0xc]\n\
     str        r2,[r5,#0x10]\n\
     b          LAB_0803dcd2\n\
.space 1\n\
.space 1\n\
DAT_0803dc64:\n\
     .4byte 0x02027048\n\
LAB_0803dc68:\n\
     ldr        r1,[r5,#0x8]\n\
     ldr        r0,[r5,#0x4]\n\
     sub        r1,r1,r0\n\
     sub        r1,#0x1\n\
     mov        r0,#0x0\n\
     str        r0,[r5,#0x10]\n\
     str        r0,[r5,#0xc]\n\
     ldrh       r2,[r5,#0x14]\n\
     lsl        r0,r2,#0x7\n\
     ldrh       r2,[r5,#0x16]\n\
     add        r0,r2,r0\n\
     ldr        r2,DAT_0803dcb4\n\
     add        r0,r0,r2\n\
     asr        r0,r0,#0xc\n\
     sub        r6,r0,r1\n\
     cmp        r6,#0x0\n\
     ble        LAB_0803dcd2\n\
     add        r2,sp,#0x8\n\
     add        r3,sp,#0xc\n\
     str        r4,[sp,#0x0]\n\
     ldr        r4,[r7,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r1,sp,#0x4\n\
     bl         _call_via_r4\n\
     add        r3,r0,#0x0\n\
     ldr        r2,[sp,#0x8]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803dcbc\n\
     ldr        r2,[sp,#0x4]\n\
     add        r1,r2,r3\n\
     ldr        r0,[r5,#0x4]\n\
     cmp        r1,r0\n\
     bcs        LAB_0803dcb8\n\
     str        r2,[r5,#0xc]\n\
     str        r3,[r5,#0x10]\n\
     b          LAB_0803dcca\n\
.space 1\n\
.space 1\n\
DAT_0803dcb4:\n\
     .4byte 0x00000FFF\n\
LAB_0803dcb8:\n\
     str        r1,[r5,#0x8]\n\
     b          LAB_0803dcca\n\
LAB_0803dcbc:\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,[sp,#0xc]\n\
     add        r0,r0,r1\n\
     str        r0,[r5,#0x8]\n\
     str        r2,[r5,#0xc]\n\
     sub        r1,r3,r1\n\
     str        r1,[r5,#0x10]\n\
LAB_0803dcca:\n\
     cmp        r3,r6\n\
     bge        LAB_0803dcd2\n\
     mov        r0,#0x0\n\
     str        r0,[r7,#0x0]\n\
LAB_0803dcd2:\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803dcdc()
{
    asm("\n\
     push       {r4,lr}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     ldr        r0,DAT_0803dd0c\n\
     ldr        r2,[r0,#0x0]\n\
     ldrb       r3,[r2,#0x0]\n\
     cmp        r3,r1\n\
     beq        LAB_0803dd18\n\
     mov        r4,#0x8c\n\
     lsl        r4,r4,#0x1\n\
     add        r0,r2,r4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r4,#0x3a\n\
     add        r0,r0,r4\n\
     ldrb       r4,[r0,#0x0]\n\
     cmp        r1,r4\n\
     bls        LAB_0803dd00\n\
     ldrb       r1,[r0,#0x0]\n\
LAB_0803dd00:\n\
     strb       r1,[r2,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803dd10\n\
     bl         fun_0803fb78\n\
     b          LAB_0803dd18\n\
DAT_0803dd0c:\n\
     .4byte 0x02027048\n\
LAB_0803dd10:\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803dd18\n\
     bl         fun_0803feb0\n\
LAB_0803dd18:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803dd20()
{
    asm("\n\
     push       {lr}\n\
     add        r3,r0,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803dd54\n\
     lsr        r2,r3,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r0,DAT_0803dd50\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r3\n\
     bne        LAB_0803dd54\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803f610\n\
     mov        r0,#0x1\n\
     b          LAB_0803dd56\n\
.space 1\n\
.space 1\n\
DAT_0803dd50:\n\
     .4byte 0x02027048\n\
LAB_0803dd54:\n\
     mov        r0,#0x0\n\
LAB_0803dd56:\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803dd5c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r0,DAT_0803dda0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8e\n\
     lsl        r1,r1,#0x1\n\
     add        r6,r0,r1\n\
     mov        r5,#0x0\n\
     mov        r4,#0x0\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r5,r0\n\
     bge        LAB_0803dd96\n\
LAB_0803dd74:\n\
     ldr        r0,[r6,#0x4]\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803dd88\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803f610\n\
     add        r5,#0x1\n\
LAB_0803dd88:\n\
     add        r4,#0x1\n\
     ldr        r0,DAT_0803dda0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     add        r0,#0x4\n\
     cmp        r4,r0\n\
     blt        LAB_0803dd74\n\
LAB_0803dd96:\n\
     add        r0,r5,#0x0\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803dda0:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803dda4()
{
    asm("\n\
     add        r3,r0,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803dde4\n\
     lsr        r2,r3,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r0,DAT_0803dde0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     mov        r0,#0x90\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r12\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r3\n\
     bne        LAB_0803dde4\n\
     mov        r0,#0x8a\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r12\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803dde4\n\
     mov        r0,#0x1\n\
     b          LAB_0803dde6\n\
.space 1\n\
.space 1\n\
DAT_0803dde0:\n\
     .4byte 0x02027048\n\
LAB_0803dde4:\n\
     mov        r0,#0x0\n\
LAB_0803dde6:\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0803dde8()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803de0c\n\
     lsr        r2,r3,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r0,DAT_0803de14\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r3\n\
     beq        LAB_0803de18\n\
LAB_0803de0c:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_0803de38\n\
.space 1\n\
.space 1\n\
DAT_0803de14:\n\
     .4byte 0x02027048\n\
LAB_0803de18:\n\
     cmp        r2,#0x3\n\
     bgt        LAB_0803de26\n\
     lsl        r0,r2,#0x3\n\
     add        r0,#0x8c\n\
     add        r0,r4,r0\n\
     ldrb       r0,[r0,#0x7]\n\
     b          LAB_0803de38\n\
LAB_0803de26:\n\
     sub        r2,#0x4\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     add        r0,#0x24\n\
     ldrb       r0,[r0,#0x7]\n\
     lsr        r0,r0,#0x1\n\
LAB_0803de38:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803de40()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803de7c\n\
     lsr        r2,r3,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r0,DAT_0803de74\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r1,#0x90\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r4,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,r3\n\
     bne        LAB_0803de7c\n\
     cmp        r2,#0x2\n\
     bgt        LAB_0803de78\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r4,r0\n\
     ldrh       r0,[r0,#0x20]\n\
     b          LAB_0803de90\n\
DAT_0803de74:\n\
     .4byte 0x02027048\n\
LAB_0803de78:\n\
     cmp        r2,#0x3\n\
     bgt        LAB_0803de80\n\
LAB_0803de7c:\n\
     mov        r0,#0x0\n\
     b          LAB_0803de90\n\
LAB_0803de80:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_0803de98\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
LAB_0803de90:\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803de98:\n\
     .4byte 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0803de9c()
{
    asm("\n\
     add        r1,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803deb4\n\
     ldr        r0,DAT_0803deb0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x87\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     strb       r1,[r0,#0x0]\n\
     b          LAB_0803decc\n\
DAT_0803deb0:\n\
     .4byte 0x02027048\n\
LAB_0803deb4:\n\
     ldr        r0,DAT_0803ded0\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xf4\n\
     ldr        r1,[r0,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
     orr        r0,r1\n\
     lsr        r0,r0,#0x1f\n\
     mov        r3,#0x87\n\
     lsl        r3,r3,#0x1\n\
     add        r1,r2,r3\n\
     strb       r0,[r1,#0x0]\n\
LAB_0803decc:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803ded0:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803ded4()
{
    asm("\n\
     ldr        r0,DAT_0803dedc\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r0,[r0,#0x8]\n\
     bx         lr\n\
DAT_0803dedc:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803dee0()
{
    asm("\n\
     add        r2,r0,#0x0\n\
     ldr        r0,DAT_0803def0\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,[r1,#0x8]\n\
     eor        r0,r2\n\
     str        r2,[r1,#0x8]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803def0:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803def4()
{
    asm("\n\
     ldr        r1,DAT_0803df08\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r1,#0x1\n\
     lsl        r1,r0\n\
     ldr        r0,[r2,#0x8]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803df06\n\
     mov        r0,#0x1\n\
LAB_0803df06:\n\
     bx         lr\n\
DAT_0803df08:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803df0c()
{
    asm("\n\
     mov        r1,#0x1\n\
     lsl        r1,r0\n\
     ldr        r0,DAT_0803df28\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r3,[r2,#0x8]\n\
     add        r0,r3,#0x0\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x8]\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803df26\n\
     mov        r0,#0x1\n\
LAB_0803df26:\n\
     bx         lr\n\
DAT_0803df28:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803df2c()
{
    asm("\n\
     mov        r1,#0x1\n\
     lsl        r1,r0\n\
     ldr        r0,DAT_0803df48\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r3,[r2,#0x8]\n\
     add        r0,r3,#0x0\n\
     bic        r0,r1\n\
     str        r0,[r2,#0x8]\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803df46\n\
     mov        r0,#0x1\n\
LAB_0803df46:\n\
     bx         lr\n\
DAT_0803df48:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803df4c()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     ldr        r0,DAT_0803df60\n\
     ldr        r2,[r0,#0x0]\n\
     strh       r1,[r2,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803df5e\n\
     add        r0,r1,#0x1\n\
     strh       r0,[r2,#0xc]\n\
LAB_0803df5e:\n\
     bx         lr\n\
DAT_0803df60:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803df64()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     ldr        r0,DAT_0803df78\n\
     ldr        r2,[r0,#0x0]\n\
     strh       r1,[r2,#0xe]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803df76\n\
     add        r0,r1,#0x1\n\
     strh       r0,[r2,#0xe]\n\
LAB_0803df76:\n\
     bx         lr\n\
DAT_0803df78:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803df7c()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     ldr        r1,DAT_0803df88\n\
     strb       r0,[r1,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803df88:\n\
     .4byte 0x04000082\n\
    ");
}
__attribute__((naked)) void fun_0803df8c()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     ldr        r2,DAT_0803df9c\n\
     mov        r1,#0x77\n\
     and        r0,r1\n\
     strb       r0,[r2,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803df9c:\n\
     .4byte 0x04000080\n\
    ");
}
__attribute__((naked)) void fun_0803dfa0()
{
    asm("\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803dfb0\n\
     mov        r2,#0x0\n\
LAB_0803dfa6:\n\
     strb       r2,[r0,#0x0]\n\
     add        r0,#0x1\n\
     sub        r1,#0x1\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803dfa6\n\
LAB_0803dfb0:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803dfb4()
{
    asm("\n\
     add        r3,r0,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803dfc8\n\
LAB_0803dfba:\n\
     ldrb       r0,[r1,#0x0]\n\
     strb       r0,[r3,#0x0]\n\
     add        r1,#0x1\n\
     add        r3,#0x1\n\
     sub        r2,#0x1\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803dfba\n\
LAB_0803dfc8:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803dfcc()
{
    asm("\n\
     ldr        r0,DAT_0803dfe0\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0803dfe4\n\
     mul        r0,r1\n\
     str        r0,[r2,#0x4]\n\
     lsl        r0,r0,#0xb\n\
     lsr        r0,r0,#0x11\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803dfe0:\n\
     .4byte 0x02027048\n\
DAT_0803dfe4:\n\
     .4byte 0xA8351D63\n\
    ");
}
__attribute__((naked)) void fun_0803dfe8()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     ldr        r0,DAT_0803e010\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0803e014\n\
     mul        r0,r1\n\
     str        r0,[r2,#0x4]\n\
     lsl        r0,r0,#0xa\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,r3\n\
     bls        LAB_0803e00c\n\
     add        r1,r3,#0x0\n\
     bl         __umodsi3\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
LAB_0803e00c:\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0803e010:\n\
     .4byte 0x02027048\n\
DAT_0803e014:\n\
     .4byte 0xA8351D63\n\
    ");
}
__attribute__((naked)) void fun_0803e018()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0803e034\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xbb\n\
     ldrb       r1,[r0,#0x0]\n\
     sub        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     lsl        r1,r1,#0x18\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803e030\n\
     bl         fun_080496f8\n\
LAB_0803e030:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803e034:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803e038()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0803e058\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xbb\n\
     ldrb       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803e052\n\
     bl         fun_080496f0\n\
LAB_0803e052:\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803e058:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803e05c()
{
    asm("\n\
     push       {r4,lr}\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e084\n\
     lsr        r3,r0,#0x10\n\
     mov        r0,#0xff\n\
     and        r3,r0\n\
     ldr        r0,DAT_0803e08c\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r4,r3,#0x2\n\
     add        r4,r4,r0\n\
     add        r2,#0xc0\n\
     lsl        r1,r3,#0x3\n\
     sub        r1,r1,r3\n\
     lsl        r1,r1,#0x2\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r4,#0x0]\n\
LAB_0803e084:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803e08c:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803e090()
{
    asm("\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e0c8\n\
     ldr        r3,DAT_0803e0cc\n\
     and        r3,r0\n\
     lsr        r1,r0,#0x10\n\
     mov        r0,#0xff\n\
     and        r1,r0\n\
     ldr        r0,DAT_0803e0d0\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     add        r0,#0xc4\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r2\n\
     mov        r2,#0x0\n\
     str        r2,[r0,#0x0]\n\
     lsl        r3,r3,#0x2\n\
     mov        r0,#0x92\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r12\n\
     add        r0,r0,r3\n\
     str        r2,[r0,#0x0]\n\
     mov        r0,r12\n\
     add        r0,#0xc8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r1,#0x6\n\
     add        r1,r1,r0\n\
     str        r2,[r1,#0x38]\n\
LAB_0803e0c8:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803e0cc:\n\
     .4byte 0x0000FFFF\n\
DAT_0803e0d0:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803e0d4()
{
    asm("\n\
     add        r3,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e100\n\
     lsr        r2,r0,#0x10\n\
     mov        r0,#0xff\n\
     and        r2,r0\n\
     ldr        r1,DAT_0803e104\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r2,r2,#0x6\n\
     add        r0,r2,r0\n\
     add        r0,#0x3c\n\
     strb       r3,[r0,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r0,[r0,#0x0]\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803e100:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803e104:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803e108()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r4,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e140\n\
     lsr        r1,r0,#0x10\n\
     mov        r0,#0xff\n\
     and        r1,r0\n\
     ldr        r0,DAT_0803e138\n\
     ldr        r3,[r0,#0x0]\n\
     add        r2,r3,#0x0\n\
     add        r2,#0xc0\n\
     lsl        r0,r1,#0x3\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,r1,r0\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803e13c\n\
     mov        r0,#0x87\n\
     lsl        r0,r0,#0x1\n\
     add        r2,r3,r0\n\
     ldrb       r0,[r2,#0x0]\n\
     b          LAB_0803e13e\n\
.space 1\n\
.space 1\n\
DAT_0803e138:\n\
     .4byte 0x02027048\n\
LAB_0803e13c:\n\
     mov        r0,#0x0\n\
LAB_0803e13e:\n\
     strb       r0,[r1,#0x1b]\n\
LAB_0803e140:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803e148()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0xc\n\
     ldr        r1,DAT_0803e160\n\
     ldr        r1,[r1,#0x0]\n\
     ldrh       r1,[r1,#0x2]\n\
     bl         __udivsi3\n\
     lsr        r0,r0,#0x5\n\
     add        r0,#0x2\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803e160:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803e164()
{
    asm("\n\
     ldr        r1,DAT_0803e1dc\n\
     mov        r0,#0x80\n\
     strh       r0,[r1,#0x0]\n\
     sub        r1,#0x4\n\
     ldr        r0,DAT_0803e1e0\n\
     str        r0,[r1,#0x0]\n\
     sub        r1,#0x20\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0803e1e4\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     add        r0,#0x2\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x8\n\
     add        r1,r3,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,#0x4\n\
     strh       r2,[r0,#0x0]\n\
     add        r0,#0x4\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0803e1e8\n\
     mov        r0,#0x40\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0x20\n\
     mov        r0,#0x7\n\
LAB_0803e198:\n\
     strh       r2,[r1,#0x0]\n\
     add        r1,#0x2\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803e198\n\
     ldr        r1,DAT_0803e1e8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0x20\n\
     mov        r2,#0x0\n\
     mov        r0,#0x7\n\
LAB_0803e1ae:\n\
     strh       r2,[r1,#0x0]\n\
     add        r1,#0x2\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803e1ae\n\
     ldr        r0,DAT_0803e1ec\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,#0x2\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x8\n\
     add        r2,r3,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,#0x4\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,#0x4\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0803e1f0\n\
     ldr        r2,DAT_0803e1f4\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bx         lr\n\
DAT_0803e1dc:\n\
     .4byte 0x04000084\n\
DAT_0803e1e0:\n\
     .4byte 0x9A0D0000\n\
DAT_0803e1e4:\n\
     .4byte 0x04000062\n\
DAT_0803e1e8:\n\
     .4byte 0x04000070\n\
DAT_0803e1ec:\n\
     .4byte 0x04000072\n\
DAT_0803e1f0:\n\
     .4byte 0x04000080\n\
DAT_0803e1f4:\n\
     .4byte 0x0000FF77\n\
    ");
}
__attribute__((naked)) void fun_0803e1f8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r5,r2,#0x0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     cmp        r5,#0x2\n\
     bgt        LAB_0803e298\n\
     lsl        r0,r3,#0x10\n\
     ldr        r4,DAT_0803e228\n\
     lsl        r1,r1,#0x10\n\
     ldr        r7,DAT_0803e22c\n\
     lsl        r6,r5,#0x1\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803e236\n\
LAB_0803e216:\n\
     mov        r2,#0xa8\n\
     lsl        r2,r2,#0xf\n\
     add        r0,r0,r2\n\
     lsr        r3,r0,#0x10\n\
     lsl        r0,r3,#0x10\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803e216\n\
     b          LAB_0803e236\n\
.space 1\n\
.space 1\n\
DAT_0803e228:\n\
     .4byte 0x086CCC1A\n\
DAT_0803e22c:\n\
     .4byte 0x02027048\n\
LAB_0803e230:\n\
     ldr        r3,DAT_0803e250\n\
     add        r0,r2,r3\n\
     lsr        r3,r0,#0x10\n\
LAB_0803e236:\n\
     lsl        r2,r3,#0x10\n\
     asr        r0,r2,#0x10\n\
     cmp        r0,#0x53\n\
     bgt        LAB_0803e230\n\
     asr        r2,r1,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803e254\n\
     lsl        r0,r3,#0x10\n\
     asr        r0,r0,#0xf\n\
     add        r0,r0,r4\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r4,r0,#0x0\n\
     b          LAB_0803e276\n\
DAT_0803e250:\n\
     .4byte 0xFFAC0000\n\
LAB_0803e254:\n\
     lsl        r1,r3,#0x10\n\
     asr        r1,r1,#0xf\n\
     add        r1,r1,r4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r1,#0x2]\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     mul        r0,r2\n\
     mov        r1,#0xff\n\
     bl         __divsi3\n\
     add        r0,r4,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
LAB_0803e276:\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0xb4\n\
     add        r0,r0,r6\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,r4\n\
     beq        LAB_0803e298\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_0803e2a0\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x7\n\
     and        r0,r1\n\
     orr        r4,r0\n\
     strh       r4,[r2,#0x0]\n\
LAB_0803e298:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803e2a0:\n\
     .4byte 0x087D5ED0\n\
    ");
}
__attribute__((naked)) void fun_0803e2a4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     add        r3,r1,#0x0\n\
     lsr        r4,r4,#0x3\n\
     cmp        r3,#0x1\n\
     ble        LAB_0803e2b4\n\
     cmp        r3,#0x3\n\
     bne        LAB_0803e2f8\n\
LAB_0803e2b4:\n\
     ldr        r5,DAT_0803e2ec\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r1,r3,#0x3\n\
     add        r0,r0,r1\n\
     add        r0,#0x92\n\
     ldrb       r1,[r0,#0x0]\n\
     strb       r4,[r0,#0x0]\n\
     cmp        r1,r4\n\
     beq        LAB_0803e332\n\
     ldr        r0,DAT_0803e2f0\n\
     lsl        r3,r3,#0x2\n\
     add        r0,r3,r0\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r1,[r2,#0x0]\n\
     ldr        r0,DAT_0803e2f4\n\
     and        r0,r1\n\
     lsl        r1,r4,#0xc\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,[r5,#0x0]\n\
     add        r1,#0x10\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0803e332\n\
DAT_0803e2ec:\n\
     .4byte 0x02027048\n\
DAT_0803e2f0:\n\
     .4byte 0x087D5EE0\n\
DAT_0803e2f4:\n\
     .4byte 0x00000FFF\n\
LAB_0803e2f8:\n\
     cmp        r3,#0x2\n\
     bne        LAB_0803e332\n\
     ldr        r5,DAT_0803e338\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0xa2\n\
     ldrb       r1,[r0,#0x0]\n\
     strb       r4,[r0,#0x0]\n\
     ldr        r0,DAT_0803e33c\n\
     add        r1,r1,r0\n\
     add        r3,r4,r0\n\
     ldrb       r1,[r1,#0x0]\n\
     ldrb       r0,[r3,#0x0]\n\
     cmp        r1,r0\n\
     beq        LAB_0803e332\n\
     ldr        r0,DAT_0803e340\n\
     ldr        r2,[r0,#0x8]\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0xff\n\
     and        r0,r1\n\
     ldrb       r3,[r3,#0x0]\n\
     lsl        r1,r3,#0x8\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,[r5,#0x0]\n\
     ldr        r0,[r2,#0x18]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x18]\n\
LAB_0803e332:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803e338:\n\
     .4byte 0x02027048\n\
DAT_0803e33c:\n\
     .4byte 0x087D5EF0\n\
DAT_0803e340:\n\
     .4byte 0x087D5EE0\n\
    ");
}
__attribute__((naked)) void fun_0803e344()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     cmp        r4,#0x3\n\
     bgt        LAB_0803e3b0\n\
     ldr        r0,DAT_0803e388\n\
     ldr        r5,[r0,#0x0]\n\
     lsl        r3,r4,#0x2\n\
     add        r1,r5,#0x0\n\
     add        r1,#0x10\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x22\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     and        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     cmp        r4,#0x2\n\
     bgt        LAB_0803e376\n\
     lsl        r1,r4,#0x1\n\
     add        r0,r5,#0x0\n\
     add        r0,#0xb4\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     cmp        r4,#0x2\n\
     beq        LAB_0803e390\n\
LAB_0803e376:\n\
     ldr        r0,DAT_0803e38c\n\
     add        r0,r3,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803e396\n\
.space 1\n\
.space 1\n\
DAT_0803e388:\n\
     .4byte 0x02027048\n\
DAT_0803e38c:\n\
     .4byte 0x087D5EE0\n\
LAB_0803e390:\n\
     ldr        r0,DAT_0803e3a8\n\
     ldr        r0,[r0,#0x8]\n\
     strh       r1,[r0,#0x0]\n\
LAB_0803e396:\n\
     ldr        r0,DAT_0803e3ac\n\
     add        r0,r3,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x8\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803e3d4\n\
.space 1\n\
.space 1\n\
DAT_0803e3a8:\n\
     .4byte 0x087D5EE0\n\
DAT_0803e3ac:\n\
     .4byte 0x087D5ED0\n\
LAB_0803e3b0:\n\
     sub        r4,#0x4\n\
     ldr        r0,DAT_0803e3dc\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     add        r2,#0xc8\n\
     ldr        r0,[r2,#0x0]\n\
     lsl        r1,r4,#0x6\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x38]\n\
     ldr        r2,DAT_0803e3e0\n\
     and        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_0803e3d4:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803e3dc:\n\
     .4byte 0x02027048\n\
DAT_0803e3e0:\n\
     .4byte 0xFFFFFDFF\n\
    ");
}
__attribute__((naked)) void fun_0803e3e4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r4,r1,#0x0\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r4,#0x3\n\
     bgt        LAB_0803e460\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x15\n\
     lsl        r0,r4\n\
     lsr        r3,r0,#0x18\n\
     ldr        r2,DAT_0803e428\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xba\n\
     ldrb       r1,[r0,#0x0]\n\
     bic        r1,r3\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r6,DAT_0803e42c\n\
     add        r1,r0,r6\n\
     mov        r6,#0x10\n\
     add        r0,r6,#0x0\n\
     ldrb       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     add        r7,r2,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803e43c\n\
     cmp        r5,#0xff\n\
     beq        LAB_0803e43c\n\
     cmp        r5,#0x29\n\
     bhi        LAB_0803e430\n\
     add        r0,r6,#0x0\n\
     lsl        r0,r4\n\
     lsl        r0,r0,#0x18\n\
     b          LAB_0803e43a\n\
DAT_0803e428:\n\
     .4byte 0x02027048\n\
DAT_0803e42c:\n\
     .4byte 0x0000010F\n\
LAB_0803e430:\n\
     cmp        r5,#0x55\n\
     bls        LAB_0803e43c\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x11\n\
     lsl        r0,r4\n\
LAB_0803e43a:\n\
     lsr        r3,r0,#0x18\n\
LAB_0803e43c:\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0xba\n\
     ldrb       r1,[r0,#0x0]\n\
     orr        r3,r1\n\
     strb       r3,[r0,#0x0]\n\
     ldr        r2,DAT_0803e45c\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r1,#0xff\n\
     and        r1,r0\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0xba\n\
     ldrb       r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x8\n\
     orr        r1,r0\n\
     strh       r1,[r2,#0x0]\n\
     b          LAB_0803e484\n\
DAT_0803e45c:\n\
     .4byte 0x04000080\n\
LAB_0803e460:\n\
     ldr        r0,DAT_0803e48c\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r4,#0x6\n\
     ldr        r2,DAT_0803e490\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x3c\n\
     ldrb       r1,[r0,#0x0]\n\
     strb       r5,[r0,#0x0]\n\
     cmp        r5,r1\n\
     beq        LAB_0803e484\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803e484:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803e48c:\n\
     .4byte 0x02027048\n\
DAT_0803e490:\n\
     .4byte 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0803e494()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r3,r1,#0x0\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     asr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803e54c\n\
     cmp        r3,#0x3\n\
     bgt        LAB_0803e50a\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x15\n\
     lsl        r0,r3\n\
     lsr        r4,r0,#0x18\n\
     ldr        r0,DAT_0803e4ec\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_0803e4f0\n\
     add        r2,r1,r0\n\
     mov        r0,#0x10\n\
     ldrb       r2,[r2,#0x0]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803e4fc\n\
     add        r1,#0xba\n\
     add        r0,r4,#0x0\n\
     ldrb       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     asr        r0,r3\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r1,#0x2a\n\
     cmp        r0,#0x10\n\
     beq        LAB_0803e4dc\n\
     mov        r1,#0x40\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803e4dc\n\
     mov        r1,#0x55\n\
LAB_0803e4dc:\n\
     lsl        r0,r5,#0x18\n\
     asr        r0,r0,#0x18\n\
     add        r1,r1,r0\n\
     cmp        r1,#0x0\n\
     bge        LAB_0803e4f4\n\
     mov        r1,#0x0\n\
     b          LAB_0803e4fe\n\
.space 1\n\
.space 1\n\
DAT_0803e4ec:\n\
     .4byte 0x02027048\n\
DAT_0803e4f0:\n\
     .4byte 0x0000010F\n\
LAB_0803e4f4:\n\
     cmp        r1,#0x7f\n\
     ble        LAB_0803e4fe\n\
     mov        r1,#0x7f\n\
     b          LAB_0803e4fe\n\
LAB_0803e4fc:\n\
     mov        r1,#0x40\n\
LAB_0803e4fe:\n\
     lsl        r0,r1,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r3,#0x0\n\
     bl         fun_0803e3e4\n\
     b          LAB_0803e54c\n\
LAB_0803e50a:\n\
     ldr        r0,DAT_0803e530\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r3,#0x6\n\
     ldr        r2,DAT_0803e534\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x3c\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0xff\n\
     beq        LAB_0803e54c\n\
     ldrb       r1,[r1,#0x0]\n\
     add        r1,r1,r4\n\
     cmp        r1,#0x0\n\
     bge        LAB_0803e538\n\
     mov        r1,#0x0\n\
     b          LAB_0803e53e\n\
DAT_0803e530:\n\
     .4byte 0x02027048\n\
DAT_0803e534:\n\
     .4byte 0xFFFFFF00\n\
LAB_0803e538:\n\
     cmp        r1,#0x7f\n\
     ble        LAB_0803e53e\n\
     mov        r1,#0x7f\n\
LAB_0803e53e:\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x3c\n\
     strb       r1,[r0,#0x0]\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803e54c:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803e554()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r2,#0x0\n\
     ldr        r0,DAT_0803e5a8\n\
     mov        r10,r0\n\
     mov        r9,r10\n\
LAB_0803e566:\n\
     lsl        r0,r2,#0x3\n\
     add        r7,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,#0x20\n\
     mov        r8,r0\n\
     mov        r5,#0x4\n\
     lsl        r2,r2,#0x2\n\
     mov        r12,r2\n\
     mov        r6,#0x1\n\
LAB_0803e57a:\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r8\n\
     add        r2,r0,r5\n\
     ldrh       r1,[r2,#0x2]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e5c8\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r1,r1,r0\n\
     strh       r1,[r2,#0x0]\n\
     ldrh       r4,[r2,#0x4]\n\
     mov        r0,#0x4\n\
     ldrsh      r3,[r2,r0]\n\
     cmp        r3,#0x0\n\
     ble        LAB_0803e5ac\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r3\n\
     ble        LAB_0803e5b8\n\
     b          LAB_0803e5b4\n\
.space 1\n\
.space 1\n\
DAT_0803e5a8:\n\
     .4byte 0x02027048\n\
LAB_0803e5ac:\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r3\n\
     bge        LAB_0803e5b8\n\
LAB_0803e5b4:\n\
     sub        r0,r1,r4\n\
     strh       r0,[r2,#0x0]\n\
LAB_0803e5b8:\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x10\n\
     add        r0,r12\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x40\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_0803e5c8:\n\
     add        r5,#0x8\n\
     sub        r6,#0x1\n\
     cmp        r6,#0x0\n\
     bge        LAB_0803e57a\n\
     add        r2,r7,#0x0\n\
     cmp        r2,#0x2\n\
     ble        LAB_0803e566\n\
     mov        r2,#0x0\n\
     b          LAB_0803e632\n\
LAB_0803e5da:\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r5,[r0,#0x0]\n\
     add        r7,r2,#0x1\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803e630\n\
     add        r2,r5,#0x4\n\
     mov        r6,#0x1\n\
LAB_0803e5f0:\n\
     ldrh       r1,[r2,#0x2]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e628\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r1,r1,r0\n\
     strh       r1,[r2,#0x0]\n\
     ldrh       r4,[r2,#0x4]\n\
     mov        r0,#0x4\n\
     ldrsh      r3,[r2,r0]\n\
     cmp        r3,#0x0\n\
     ble        LAB_0803e614\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r3\n\
     ble        LAB_0803e620\n\
     b          LAB_0803e61c\n\
LAB_0803e614:\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r3\n\
     bge        LAB_0803e620\n\
LAB_0803e61c:\n\
     sub        r0,r1,r4\n\
     strh       r0,[r2,#0x0]\n\
LAB_0803e620:\n\
     ldr        r0,[r5,#0x38]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r5,#0x38]\n\
LAB_0803e628:\n\
     add        r2,#0x8\n\
     sub        r6,#0x1\n\
     cmp        r6,#0x0\n\
     bge        LAB_0803e5f0\n\
LAB_0803e630:\n\
     add        r2,r7,#0x0\n\
LAB_0803e632:\n\
     mov        r1,r10\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     blt        LAB_0803e5da\n\
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
__attribute__((naked)) void fun_0803e64c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r5,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     cmp        r2,#0x2\n\
     bgt        LAB_0803e67c\n\
     ldr        r3,DAT_0803e678\n\
     ldr        r0,[r3,#0x0]\n\
     lsl        r1,r2,#0x3\n\
     add        r1,r1,r2\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r0,r1\n\
     add        r0,#0x39\n\
     strb       r4,[r0,#0x0]\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,r0,r1\n\
     lsr        r2,r4,#0x1\n\
     add        r0,#0x38\n\
     strb       r2,[r0,#0x0]\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x36]\n\
     b          LAB_0803e696\n\
DAT_0803e678:\n\
     .4byte 0x02027048\n\
LAB_0803e67c:\n\
     cmp        r2,#0x3\n\
     ble        LAB_0803e696\n\
     ldr        r0,DAT_0803e69c\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r2,#0x6\n\
     ldr        r1,[r1,#0x0]\n\
     add        r0,r0,r1\n\
     sub        r0,#0xec\n\
     strb       r4,[r0,#0x5]\n\
     lsr        r1,r4,#0x1\n\
     strb       r1,[r0,#0x4]\n\
     strh       r5,[r0,#0x2]\n\
LAB_0803e696:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803e69c:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803e6a0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_0803e6f8\n\
     mov        r12,r0\n\
     mov        r6,r12\n\
     mov        r5,#0x20\n\
LAB_0803e6ac:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r2,r0,r5\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x14\n\
     ldrh       r3,[r1,#0x2]\n\
     mov        r7,#0x2\n\
     ldrsh      r0,[r1,r7]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e6ec\n\
     ldrh       r7,[r2,#0x14]\n\
     add        r0,r3,r7\n\
     strh       r0,[r2,#0x14]\n\
     ldrb       r0,[r1,#0x4]\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x4]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0xff\n\
     bne        LAB_0803e6dc\n\
     ldrb       r0,[r1,#0x5]\n\
     strb       r0,[r1,#0x4]\n\
     ldrh       r2,[r1,#0x2]\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
     strh       r0,[r1,#0x2]\n\
LAB_0803e6dc:\n\
     ldr        r2,[r6,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r2,#0x10\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
LAB_0803e6ec:\n\
     add        r5,#0x24\n\
     add        r4,#0x1\n\
     cmp        r4,#0x2\n\
     ble        LAB_0803e6ac\n\
     mov        r4,#0x0\n\
     b          LAB_0803e742\n\
DAT_0803e6f8:\n\
     .4byte 0x02027048\n\
LAB_0803e6fc:\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803e740\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x14\n\
     ldrh       r3,[r1,#0x2]\n\
     mov        r5,#0x2\n\
     ldrsh      r0,[r1,r5]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e740\n\
     ldrh       r7,[r2,#0x14]\n\
     add        r0,r3,r7\n\
     strh       r0,[r2,#0x14]\n\
     ldrb       r0,[r1,#0x4]\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x4]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0xff\n\
     bne        LAB_0803e738\n\
     ldrb       r0,[r1,#0x5]\n\
     strb       r0,[r1,#0x4]\n\
     ldrh       r3,[r1,#0x2]\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
     strh       r0,[r1,#0x2]\n\
LAB_0803e738:\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803e740:\n\
     add        r4,#0x1\n\
LAB_0803e742:\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r4,r0\n\
     blt        LAB_0803e6fc\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803e754()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     mov        r12,r7\n\
     lsl        r1,r1,#0x10\n\
     lsr        r5,r1,#0x10\n\
     mov        r8,r5\n\
     lsl        r2,r2,#0x10\n\
     lsr        r6,r2,#0x10\n\
     add        r2,r6,#0x0\n\
     cmp        r3,#0x2\n\
     bgt        LAB_0803e7b6\n\
     ldr        r0,DAT_0803e7a4\n\
     lsl        r1,r3,#0x3\n\
     add        r1,r1,r3\n\
     lsl        r2,r1,#0x2\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x20\n\
     ldr        r0,[r0,#0x0]\n\
     add        r3,r0,r1\n\
     add        r4,r3,#0x0\n\
     add        r4,#0x1c\n\
     cmp        r7,#0x0\n\
     beq        LAB_0803e7a8\n\
     add        r2,r0,r2\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r5,[r2,#0x20]\n\
     sub        r1,r0,r5\n\
     strh       r1,[r4,#0x4]\n\
     mov        r5,#0x20\n\
     ldrsh      r1,[r2,r5]\n\
     mov        r5,#0x1c\n\
     ldrsh      r2,[r3,r5]\n\
     add        r1,r1,r2\n\
     sub        r0,r0,r1\n\
     add        r1,r6,#0x0\n\
     b          LAB_0803e806\n\
DAT_0803e7a4:\n\
     .4byte 0x02027048\n\
LAB_0803e7a8:\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r2,[r4,#0x4]\n\
     add        r1,r2,r0\n\
     strh       r1,[r4,#0x4]\n\
     add        r1,r6,#0x0\n\
     b          LAB_0803e806\n\
LAB_0803e7b6:\n\
     cmp        r3,#0x3\n\
     ble        LAB_0803e80c\n\
     ldr        r0,DAT_0803e7f0\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r3,#0x6\n\
     ldr        r3,DAT_0803e7f4\n\
     add        r0,r0,r3\n\
     ldr        r1,[r1,#0x0]\n\
     add        r3,r1,r0\n\
     add        r4,r3,#0x0\n\
     add        r4,#0x1c\n\
     mov        r0,r12\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e7f8\n\
     lsl        r0,r5,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r2,[r3,#0x0]\n\
     sub        r1,r0,r2\n\
     strh       r1,[r4,#0x4]\n\
     mov        r5,#0x0\n\
     ldrsh      r1,[r3,r5]\n\
     mov        r5,#0x1c\n\
     ldrsh      r2,[r3,r5]\n\
     add        r1,r1,r2\n\
     sub        r0,r0,r1\n\
     add        r1,r6,#0x0\n\
     b          LAB_0803e806\n\
.space 1\n\
.space 1\n\
DAT_0803e7f0:\n\
     .4byte 0x02027048\n\
DAT_0803e7f4:\n\
     .4byte 0xFFFFFF00\n\
LAB_0803e7f8:\n\
     mov        r1,r8\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r3,[r4,#0x4]\n\
     add        r1,r3,r0\n\
     strh       r1,[r4,#0x4]\n\
     add        r1,r2,#0x0\n\
LAB_0803e806:\n\
     bl         __divsi3\n\
     strh       r0,[r4,#0x2]\n\
LAB_0803e80c:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803e818()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r7,r0,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r12,r1\n\
     cmp        r2,#0x3\n\
     beq        LAB_0803e890\n\
     ldr        r0,DAT_0803e854\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r4,r1,r0\n\
     cmp        r2,#0x2\n\
     bgt        LAB_0803e858\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,#0x20\n\
     add        r6,r3,r0\n\
     b          LAB_0803e866\n\
DAT_0803e854:\n\
     .4byte 0x02027048\n\
LAB_0803e858:\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r2,DAT_0803e898\n\
     add        r1,r1,r2\n\
     ldr        r0,[r0,#0x0]\n\
     add        r6,r0,r1\n\
LAB_0803e866:\n\
     add        r5,r6,#0x0\n\
     add        r5,#0x1c\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803e890\n\
     mov        r0,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     ldrb       r4,[r4,#0x7]\n\
     lsl        r1,r4,#0x8\n\
     lsl        r0,r7,#0x10\n\
     asr        r0,r0,#0x10\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r5,#0x6]\n\
     sub        r0,r0,r4\n\
     strh       r0,[r5,#0x4]\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r5,r1]\n\
     mov        r1,r12\n\
     bl         __divsi3\n\
     strh       r0,[r5,#0x2]\n\
     strh       r4,[r6,#0x0]\n\
LAB_0803e890:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803e898:\n\
     .4byte 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0803e89c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     mov        r5,#0x0\n\
     ldr        r0,DAT_0803e8e4\n\
     mov        r8,r0\n\
     mov        r12,r8\n\
     mov        r7,#0x20\n\
LAB_0803e8ae:\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     add        r3,r0,r7\n\
     add        r2,r3,#0x0\n\
     add        r2,#0x1c\n\
     ldrh       r1,[r2,#0x2]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r2,r4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e908\n\
     ldrh       r0,[r3,#0x1c]\n\
     add        r1,r1,r0\n\
     mov        r6,#0x0\n\
     strh       r1,[r3,#0x1c]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r2,r4]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803e8e8\n\
     lsl        r1,r1,#0x10\n\
     ldrh       r0,[r2,#0x4]\n\
     mov        r9,r0\n\
     lsl        r0,r0,#0x10\n\
     cmp        r1,r0\n\
     ble        LAB_0803e8f6\n\
     mov        r1,r9\n\
     strh       r1,[r3,#0x1c]\n\
     b          LAB_0803e8f4\n\
DAT_0803e8e4:\n\
     .4byte 0x02027048\n\
LAB_0803e8e8:\n\
     lsl        r1,r1,#0x10\n\
     ldrh       r4,[r2,#0x4]\n\
     lsl        r0,r4,#0x10\n\
     cmp        r1,r0\n\
     bge        LAB_0803e8f6\n\
     strh       r4,[r3,#0x1c]\n\
LAB_0803e8f4:\n\
     strh       r6,[r2,#0x2]\n\
LAB_0803e8f6:\n\
     mov        r0,r12\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r2,#0x10\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
LAB_0803e908:\n\
     add        r7,#0x24\n\
     add        r5,#0x1\n\
     cmp        r5,#0x2\n\
     ble        LAB_0803e8ae\n\
     mov        r5,#0x0\n\
     b          LAB_0803e966\n\
LAB_0803e914:\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r3,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803e964\n\
     add        r2,r3,#0x0\n\
     add        r2,#0x1c\n\
     mov        r1,#0x2\n\
     ldrsh      r0,[r2,r1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e964\n\
     ldr        r0,[r3,#0x38]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r3,#0x38]\n\
     ldrh       r4,[r3,#0x1c]\n\
     ldrh       r7,[r2,#0x2]\n\
     add        r1,r4,r7\n\
     mov        r6,#0x0\n\
     strh       r1,[r3,#0x1c]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r2,r4]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803e956\n\
     lsl        r1,r1,#0x10\n\
     ldrh       r4,[r2,#0x4]\n\
     lsl        r0,r4,#0x10\n\
     cmp        r1,r0\n\
     ble        LAB_0803e964\n\
     b          LAB_0803e960\n\
LAB_0803e956:\n\
     lsl        r1,r1,#0x10\n\
     ldrh       r4,[r2,#0x4]\n\
     lsl        r0,r4,#0x10\n\
     cmp        r1,r0\n\
     bge        LAB_0803e964\n\
LAB_0803e960:\n\
     strh       r4,[r3,#0x1c]\n\
     strh       r6,[r2,#0x2]\n\
LAB_0803e964:\n\
     add        r5,#0x1\n\
LAB_0803e966:\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r5,r0\n\
     blt        LAB_0803e914\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803e97c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     ldr        r2,DAT_0803e9cc\n\
     ldr        r1,[r2,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r5,[r0,#0x0]\n\
     mov        r6,#0x0\n\
     ldrb       r1,[r1,#0x0]\n\
     cmp        r6,r1\n\
     bge        LAB_0803ea08\n\
     mov        r12,r2\n\
     mov        r7,#0x0\n\
LAB_0803e994:\n\
     ldr        r2,[r5,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803e9f8\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803e9f8\n\
     add        r3,r2,#0x0\n\
     add        r3,#0x2c\n\
     mov        r1,#0x2c\n\
     ldrsh      r0,[r2,r1]\n\
     mov        r2,#0x2\n\
     ldrsh      r1,[r3,r2]\n\
     add        r1,r0,r1\n\
     ldrh       r4,[r3,#0x2]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r3,r2]\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803e9d0\n\
     mov        r0,#0x5\n\
     ldrsb      r0,[r3,r0]\n\
     lsl        r2,r0,#0x8\n\
     cmp        r1,r2\n\
     blt        LAB_0803e9e2\n\
     b          LAB_0803e9da\n\
.space 1\n\
.space 1\n\
DAT_0803e9cc:\n\
     .4byte 0x02027048\n\
LAB_0803e9d0:\n\
     mov        r0,#0x4\n\
     ldrsb      r0,[r3,r0]\n\
     lsl        r2,r0,#0x8\n\
     cmp        r1,r2\n\
     bgt        LAB_0803e9e2\n\
LAB_0803e9da:\n\
     lsl        r0,r0,#0x9\n\
     sub        r1,r0,r1\n\
.syntax unified\n\
    rsbs        r0,r4,#0\n\
.syntax divided\n\
     strh       r0,[r3,#0x2]\n\
LAB_0803e9e2:\n\
     strh       r1,[r3,#0x0]\n\
     mov        r2,r12\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xc0\n\
     ldr        r2,[r0,#0x0]\n\
     add        r2,r2,r7\n\
     lsr        r1,r1,#0x8\n\
     add        r1,#0x10\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r2,#0xc]\n\
LAB_0803e9f8:\n\
     add        r7,#0x1c\n\
     add        r6,#0x1\n\
     add        r5,#0x4\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r6,r0\n\
     blt        LAB_0803e994\n\
LAB_0803ea08:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803ea10()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r0,#0x0\n\
     mov        r9,r0\n\
     ldr        r1,DAT_0803ea28\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r10,r1\n\
     b          LAB_0803eb04\n\
.space 1\n\
.space 1\n\
DAT_0803ea28:\n\
     .4byte 0x02027048\n\
LAB_0803ea2c:\n\
     ldr        r4,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,r9\n\
     lsl        r3,r1,#0x2\n\
     add        r0,r3,r0\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803eafc\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x4\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803eafc\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r3,r0\n\
     ldr        r7,[r0,#0x0]\n\
     cmp        r7,#0x0\n\
     beq        LAB_0803eafc\n\
     add        r3,r2,#0x0\n\
     add        r3,#0x2c\n\
     ldrb       r0,[r3,#0x7]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803eaf8\n\
     ldrb       r0,[r3,#0x6]\n\
     strb       r0,[r3,#0x7]\n\
     ldrh       r0,[r3,#0x4]\n\
     add        r6,r0,#0x0\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803ea96\n\
     ldr        r1,[r2,#0x38]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x7\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ea88\n\
     ldrh       r0,[r3,#0x2]\n\
     strh       r0,[r3,#0x4]\n\
     ldrh       r1,[r2,#0x2c]\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
     strh       r0,[r2,#0x2c]\n\
     b          LAB_0803ea8e\n\
LAB_0803ea88:\n\
     ldr        r0,DAT_0803eac4\n\
     and        r1,r0\n\
     str        r1,[r2,#0x38]\n\
LAB_0803ea8e:\n\
     ldrh       r0,[r3,#0x4]\n\
     add        r6,r0,#0x0\n\
     cmp        r6,#0x0\n\
     beq        LAB_0803eafc\n\
LAB_0803ea96:\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r3,r1]\n\
     ldr        r1,[r7,#0xc]\n\
     add        r5,r1,r0\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     ldr        r4,[r7,#0x0]\n\
     add        r2,r4,#0x0\n\
     add        r2,#0x10\n\
     ldr        r0,[r7,#0x8]\n\
     mov        r12,r1\n\
     cmp        r12,r0\n\
     bhi        LAB_0803eac8\n\
     cmp        r5,r2\n\
     bcc        LAB_0803eae2\n\
     ldr        r1,[r7,#0x10]\n\
     add        r1,r5,r1\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,r2,r0\n\
     cmp        r1,r0\n\
     bls        LAB_0803eadc\n\
     b          LAB_0803eae2\n\
.space 1\n\
.space 1\n\
DAT_0803eac4:\n\
     .4byte 0xFFFFB7FF\n\
LAB_0803eac8:\n\
     ldr        r0,[r7,#0x10]\n\
     sub        r0,r5,r0\n\
     cmp        r0,r2\n\
     bcc        LAB_0803ead8\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,r2,r0\n\
     cmp        r5,r0\n\
     bls        LAB_0803eadc\n\
LAB_0803ead8:\n\
     mov        r1,#0x1\n\
     mov        r8,r1\n\
LAB_0803eadc:\n\
     mov        r0,r8\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803eaf0\n\
LAB_0803eae2:\n\
     mov        r5,r12\n\
     ldrh       r1,[r3,#0x2]\n\
     sub        r0,r1,r6\n\
     mov        r1,#0x0\n\
     strh       r0,[r3,#0x2]\n\
     strh       r1,[r3,#0x4]\n\
     b          LAB_0803eaf4\n\
LAB_0803eaf0:\n\
     sub        r0,r6,#0x1\n\
     strh       r0,[r3,#0x4]\n\
LAB_0803eaf4:\n\
     str        r5,[r7,#0xc]\n\
     b          LAB_0803eafc\n\
LAB_0803eaf8:\n\
     sub        r0,#0x1\n\
     strb       r0,[r3,#0x7]\n\
LAB_0803eafc:\n\
     mov        r0,#0x1\n\
     add        r9,r0\n\
     mov        r1,r10\n\
     ldr        r0,[r1,#0x0]\n\
LAB_0803eb04:\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r9,r0\n\
     blt        LAB_0803ea2c\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803eb18()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r6,r0,#0x0\n\
     lsl        r1,r1,#0x18\n\
     lsr        r5,r1,#0x18\n\
     cmp        r2,#0x3\n\
     bgt        LAB_0803eb60\n\
     ldr        r0,DAT_0803eb5c\n\
     ldr        r4,[r0,#0x0]\n\
     lsl        r1,r2,#0x2\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x10\n\
     add        r3,r0,r1\n\
     ldr        r1,[r3,#0x0]\n\
     mov        r0,#0x27\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     str        r1,[r3,#0x0]\n\
     mov        r0,#0x9\n\
     cmp        r5,#0x0\n\
     bne        LAB_0803eb42\n\
     mov        r0,#0x1\n\
LAB_0803eb42:\n\
     orr        r1,r0\n\
     str        r1,[r3,#0x0]\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r4,r2\n\
     add        r0,#0x90\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8c\n\
     add        r0,r0,r2\n\
     str        r6,[r0,#0x0]\n\
     b          LAB_0803eb8c\n\
.space 1\n\
.space 1\n\
DAT_0803eb5c:\n\
     .4byte 0x02027048\n\
LAB_0803eb60:\n\
     ldr        r0,DAT_0803eb94\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r2,#0x6\n\
     ldr        r2,DAT_0803eb98\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,r1,r0\n\
     ldr        r3,[r1,#0x38]\n\
     mov        r0,#0x27\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r3,r0\n\
     str        r3,[r1,#0x38]\n\
     mov        r0,#0x9\n\
     cmp        r5,#0x0\n\
     bne        LAB_0803eb82\n\
     mov        r0,#0x1\n\
LAB_0803eb82:\n\
     orr        r3,r0\n\
     str        r3,[r1,#0x38]\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x28]\n\
     str        r6,[r1,#0x24]\n\
LAB_0803eb8c:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803eb94:\n\
     .4byte 0x02027048\n\
DAT_0803eb98:\n\
     .4byte 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0803eb9c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r4,r2,#0x0\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     lsl        r1,r1,#0x10\n\
     lsr        r7,r1,#0x10\n\
     cmp        r4,#0x3\n\
     bgt        LAB_0803ec20\n\
     ldr        r3,DAT_0803ec1c\n\
     ldr        r5,[r3,#0x0]\n\
     lsl        r2,r4,#0x2\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x21\n\
     and        r1,r0\n\
     mov        r8,r3\n\
     mov        r12,r2\n\
     lsl        r4,r4,#0x3\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803ebde\n\
     add        r0,r5,r4\n\
     mov        r1,#0x0\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803ebda\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     add        r1,r2,#0x0\n\
LAB_0803ebda:\n\
     add        r0,#0x90\n\
     strh       r1,[r0,#0x0]\n\
LAB_0803ebde:\n\
     mov        r0,r8\n\
     ldr        r3,[r0,#0x0]\n\
     add        r2,r3,#0x0\n\
     add        r2,#0x10\n\
     add        r2,r12\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x8\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     mov        r1,#0x20\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     add        r3,#0x8c\n\
     add        r3,r3,r4\n\
     str        r7,[r3,#0x0]\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803ec04\n\
.syntax unified\n\
    rsbs        r0,r7,#0\n\
.syntax divided\n\
     str        r0,[r3,#0x0]\n\
LAB_0803ec04:\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r0,r4\n\
     mov        r1,#0x0\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803ec16\n\
     mov        r2,#0xff\n\
     lsl        r2,r2,#0x8\n\
     add        r1,r2,#0x0\n\
LAB_0803ec16:\n\
     add        r0,#0x90\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_0803ec60\n\
DAT_0803ec1c:\n\
     .4byte 0x02027048\n\
LAB_0803ec20:\n\
     ldr        r0,DAT_0803ec6c\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r4,#0x6\n\
     ldr        r2,DAT_0803ec70\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x21\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803ec48\n\
     mov        r0,#0x0\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803ec46\n\
     mov        r1,#0xff\n\
     lsl        r1,r1,#0x8\n\
     add        r0,r1,#0x0\n\
LAB_0803ec46:\n\
     strh       r0,[r2,#0x28]\n\
LAB_0803ec48:\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x8\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     mov        r1,#0x20\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
     str        r7,[r2,#0x24]\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803ec60\n\
.syntax unified\n\
    rsbs        r0,r7,#0\n\
.syntax divided\n\
     str        r0,[r2,#0x24]\n\
LAB_0803ec60:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803ec6c:\n\
     .4byte 0x02027048\n\
DAT_0803ec70:\n\
     .4byte 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0803ec74()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r0,#0xf0\n\
     lsl        r0,r0,#0x8\n\
     mov        r10,r0\n\
     mov        r1,#0x8c\n\
     mov        r9,r1\n\
     mov        r2,#0x0\n\
     mov        r12,r2\n\
     mov        r3,#0x3\n\
     mov        r8,r3\n\
LAB_0803ec90:\n\
     ldr        r5,DAT_0803ecc8\n\
     ldr        r2,[r5,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x10\n\
     mov        r1,r12\n\
     add        r6,r0,r1\n\
     ldr        r1,[r6,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ed5c\n\
     mov        r3,r9\n\
     add        r5,r2,r3\n\
     add        r7,r5,#0x4\n\
     ldrh       r4,[r5,#0x4]\n\
     mov        r2,#0x6\n\
     add        r0,r1,#0x0\n\
     and        r0,r2\n\
     lsr        r0,r0,#0x1\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803ecf0\n\
     cmp        r0,#0x1\n\
     bcc        LAB_0803eccc\n\
     cmp        r0,#0x2\n\
     beq        LAB_0803ed0e\n\
     cmp        r0,#0x3\n\
     beq        LAB_0803ed20\n\
     b          LAB_0803ed42\n\
DAT_0803ecc8:\n\
     .4byte 0x02027048\n\
LAB_0803eccc:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r3,r0,r4\n\
     ldr        r0,DAT_0803ecec\n\
     cmp        r3,r0\n\
     ble        LAB_0803ed0a\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     mov        r0,#0x2\n\
     orr        r1,r0\n\
     str        r1,[r6,#0x0]\n\
     mov        r3,#0xff\n\
     lsl        r3,r3,#0x8\n\
     b          LAB_0803ed0a\n\
.space 1\n\
.space 1\n\
DAT_0803ecec:\n\
     .4byte 0x0000FEFF\n\
LAB_0803ecf0:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r2,[r0,#0x2]\n\
     sub        r3,r4,r2\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r3,r0\n\
     bgt        LAB_0803ed0a\n\
     add        r3,r0,#0x0\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     mov        r0,#0x4\n\
     orr        r1,r0\n\
     str        r1,[r6,#0x0]\n\
LAB_0803ed0a:\n\
     strh       r3,[r5,#0x4]\n\
     b          LAB_0803ed42\n\
LAB_0803ed0e:\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ed42\n\
     mov        r3,#0x7\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     and        r1,r3\n\
     orr        r1,r2\n\
     str        r1,[r6,#0x0]\n\
LAB_0803ed20:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r5,[r7,#0x0]\n\
     ldrh       r0,[r0,#0x6]\n\
     sub        r3,r5,r0\n\
     cmp        r3,#0xff\n\
     bgt        LAB_0803ed40\n\
     mov        r3,#0x0\n\
     ldr        r1,DAT_0803ed58\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x10\n\
     add        r0,r12\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x8\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     and        r1,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_0803ed40:\n\
     strh       r3,[r7,#0x0]\n\
LAB_0803ed42:\n\
     mov        r2,r10\n\
     and        r4,r2\n\
     mov        r0,r10\n\
     ldrh       r7,[r7,#0x0]\n\
     and        r0,r7\n\
     cmp        r4,r0\n\
     beq        LAB_0803edba\n\
     ldr        r3,DAT_0803ed58\n\
     ldr        r0,[r3,#0x0]\n\
     b          LAB_0803edae\n\
.space 1\n\
.space 1\n\
DAT_0803ed58:\n\
     .4byte 0x02027048\n\
LAB_0803ed5c:\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803edba\n\
     mov        r5,r9\n\
     add        r0,r2,r5\n\
     add        r7,r0,#0x4\n\
     ldrh       r4,[r0,#0x4]\n\
     ldr        r0,[r0,#0x0]\n\
     add        r3,r4,r0\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803ed8c\n\
     ldr        r0,DAT_0803ed88\n\
     cmp        r3,r0\n\
     ble        LAB_0803ed9e\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     str        r1,[r6,#0x0]\n\
     mov        r3,#0xff\n\
     lsl        r3,r3,#0x8\n\
     b          LAB_0803ed9e\n\
DAT_0803ed88:\n\
     .4byte 0x0000FEFF\n\
LAB_0803ed8c:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     cmp        r3,r0\n\
     bgt        LAB_0803ed9e\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     str        r1,[r6,#0x0]\n\
     mov        r3,#0x0\n\
LAB_0803ed9e:\n\
     strh       r3,[r7,#0x0]\n\
     mov        r0,r10\n\
     and        r4,r0\n\
     and        r3,r0\n\
     cmp        r4,r3\n\
     beq        LAB_0803edba\n\
     ldr        r1,DAT_0803ee2c\n\
     ldr        r0,[r1,#0x0]\n\
LAB_0803edae:\n\
     add        r0,#0x10\n\
     add        r0,r12\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_0803edba:\n\
     mov        r2,#0x8\n\
     add        r9,r2\n\
     mov        r3,#0x4\n\
     add        r12,r3\n\
     mov        r5,#0x1\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     add        r8,r5\n\
     mov        r0,r8\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803edd0\n\
     b          LAB_0803ec90\n\
LAB_0803edd0:\n\
     mov        r1,#0x0\n\
     mov        r8,r1\n\
     ldr        r1,DAT_0803ee2c\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r8,r0\n\
     blt        LAB_0803ede0\n\
     b          LAB_0803ef08\n\
LAB_0803ede0:\n\
     sub        r2,#0xf\n\
     mov        r9,r2\n\
     mov        r6,#0xff\n\
     lsl        r6,r6,#0x8\n\
LAB_0803ede8:\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r3,r8\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803edfc\n\
     b          LAB_0803eef8\n\
LAB_0803edfc:\n\
     ldr        r1,[r2,#0x38]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803eea4\n\
     add        r5,r2,#0x0\n\
     add        r5,#0x24\n\
     add        r7,r2,#0x0\n\
     add        r7,#0x28\n\
     ldrh       r4,[r2,#0x28]\n\
     mov        r3,#0x6\n\
     add        r0,r1,#0x0\n\
     and        r0,r3\n\
     lsr        r0,r0,#0x1\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803ee50\n\
     cmp        r0,#0x1\n\
     bcc        LAB_0803ee30\n\
     cmp        r0,#0x2\n\
     beq        LAB_0803ee6c\n\
     cmp        r0,#0x3\n\
     beq        LAB_0803ee7c\n\
     b          LAB_0803ee96\n\
.space 1\n\
.space 1\n\
DAT_0803ee2c:\n\
     .4byte 0x02027048\n\
LAB_0803ee30:\n\
     ldr        r0,[r2,#0x24]\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r3,r0,r4\n\
     ldr        r0,DAT_0803ee4c\n\
     cmp        r3,r0\n\
     ble        LAB_0803ee68\n\
     mov        r5,r9\n\
     and        r1,r5\n\
     mov        r0,#0x2\n\
     orr        r1,r0\n\
     str        r1,[r2,#0x38]\n\
     mov        r3,#0xff\n\
     lsl        r3,r3,#0x8\n\
     b          LAB_0803ee68\n\
DAT_0803ee4c:\n\
     .4byte 0x0000FEFF\n\
LAB_0803ee50:\n\
     ldr        r0,[r2,#0x24]\n\
     ldrh       r5,[r0,#0x2]\n\
     sub        r3,r4,r5\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r3,r0\n\
     bgt        LAB_0803ee68\n\
     add        r3,r0,#0x0\n\
     mov        r0,r9\n\
     and        r1,r0\n\
     mov        r0,#0x4\n\
     orr        r1,r0\n\
     str        r1,[r2,#0x38]\n\
LAB_0803ee68:\n\
     strh       r3,[r2,#0x28]\n\
     b          LAB_0803ee96\n\
LAB_0803ee6c:\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ee96\n\
     mov        r0,r9\n\
     and        r1,r0\n\
     orr        r1,r3\n\
     str        r1,[r2,#0x38]\n\
LAB_0803ee7c:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r1,[r7,#0x0]\n\
     ldrh       r0,[r0,#0x6]\n\
     sub        r3,r1,r0\n\
     cmp        r3,#0xff\n\
     bgt        LAB_0803ee94\n\
     mov        r3,#0x0\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x8\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803ee94:\n\
     strh       r3,[r7,#0x0]\n\
LAB_0803ee96:\n\
     and        r4,r6\n\
     add        r0,r6,#0x0\n\
     ldrh       r7,[r7,#0x0]\n\
     and        r0,r7\n\
     cmp        r4,r0\n\
     beq        LAB_0803eef8\n\
     b          LAB_0803eef0\n\
LAB_0803eea4:\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803eef8\n\
     add        r7,r2,#0x0\n\
     add        r7,#0x28\n\
     ldrh       r4,[r2,#0x28]\n\
     ldr        r0,[r2,#0x24]\n\
     add        r3,r4,r0\n\
     cmp        r0,#0x0\n\
     blt        LAB_0803eed4\n\
     ldr        r0,DAT_0803eed0\n\
     cmp        r3,r0\n\
     ble        LAB_0803eee6\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     str        r1,[r2,#0x38]\n\
     mov        r3,#0xff\n\
     lsl        r3,r3,#0x8\n\
     b          LAB_0803eee6\n\
.space 1\n\
.space 1\n\
DAT_0803eed0:\n\
     .4byte 0x0000FEFF\n\
LAB_0803eed4:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     cmp        r3,r0\n\
     bgt        LAB_0803eee6\n\
     mov        r0,#0x21\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     str        r1,[r2,#0x38]\n\
     mov        r3,#0x0\n\
LAB_0803eee6:\n\
     strh       r3,[r7,#0x0]\n\
     and        r4,r6\n\
     and        r3,r6\n\
     cmp        r4,r3\n\
     beq        LAB_0803eef8\n\
LAB_0803eef0:\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_0803eef8:\n\
     mov        r2,#0x1\n\
     add        r8,r2\n\
     ldr        r1,DAT_0803ef18\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r8,r0\n\
     bge        LAB_0803ef08\n\
     b          LAB_0803ede8\n\
LAB_0803ef08:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803ef18:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803ef1c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r5,#0x0\n\
     ldr        r1,DAT_0803ef6c\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r12,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r5,r0\n\
     bge        LAB_0803efae\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x6\n\
LAB_0803ef34:\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r3,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803efa2\n\
     mov        r8,r3\n\
     ldrh       r4,[r3,#0x12]\n\
     mov        r0,#0x12\n\
     ldrsh      r2,[r3,r0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803efa2\n\
     mov        r6,#0xa\n\
     ldrsh      r1,[r3,r6]\n\
     add        r0,r2,#0x0\n\
     add        r1,r1,r0\n\
     cmp        r2,#0x0\n\
     ble        LAB_0803ef70\n\
     ldrb       r0,[r3,#0x1b]\n\
     lsl        r2,r0,#0x8\n\
     cmp        r1,r2\n\
     blt        LAB_0803ef88\n\
     sub        r0,r1,r2\n\
     sub        r1,r2,r0\n\
     b          LAB_0803ef7c\n\
.space 1\n\
.space 1\n\
DAT_0803ef6c:\n\
     .4byte 0x02027048\n\
LAB_0803ef70:\n\
     ldrb       r6,[r3,#0x1a]\n\
     lsl        r2,r6,#0x8\n\
     cmp        r1,r2\n\
     bgt        LAB_0803ef88\n\
     sub        r0,r2,r1\n\
     add        r1,r2,r0\n\
LAB_0803ef7c:\n\
     ldr        r0,[r3,#0x38]\n\
     and        r0,r7\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ef86\n\
.syntax unified\n\
    rsbs        r0,r4,#0\n\
.syntax divided\n\
LAB_0803ef86:\n\
     strh       r0,[r3,#0x12]\n\
LAB_0803ef88:\n\
     mov        r0,r8\n\
     strh       r1,[r0,#0xa]\n\
     asr        r0,r1,#0x8\n\
     add        r2,r3,#0x0\n\
     add        r2,#0x3c\n\
     ldrb       r1,[r2,#0x0]\n\
     cmp        r0,r1\n\
     beq        LAB_0803efa2\n\
     strb       r0,[r2,#0x0]\n\
     ldr        r0,[r3,#0x38]\n\
     mov        r1,#0x80\n\
     orr        r0,r1\n\
     str        r0,[r3,#0x38]\n\
LAB_0803efa2:\n\
     add        r5,#0x1\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r5,r0\n\
     blt        LAB_0803ef34\n\
LAB_0803efae:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803efb8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r5,r0,#0x0\n\
     ldr        r2,DAT_0803f028\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r12,r0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f0c4\n\
     ldrh       r0,[r0,#0x28]\n\
     lsr        r4,r0,#0x8\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803efde\n\
     add        r4,#0x1\n\
LAB_0803efde:\n\
     mov        r0,r12\n\
     add        r0,#0x2b\n\
     ldrb       r0,[r0,#0x0]\n\
     mul        r0,r4\n\
     lsl        r0,r0,#0x8\n\
     lsr        r4,r0,#0x10\n\
     mov        r0,r12\n\
     add        r0,#0x2a\n\
     strb       r4,[r0,#0x0]\n\
     add        r0,#0x12\n\
     ldrb       r3,[r0,#0x0]\n\
     ldr        r1,[r2,#0x0]\n\
     add        r1,#0xc0\n\
     lsl        r0,r5,#0x3\n\
     sub        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r7,r1,r0\n\
     lsl        r1,r3,#0x18\n\
     lsr        r0,r1,#0x18\n\
     cmp        r0,#0x3f\n\
     bhi        LAB_0803f038\n\
     mov        r0,#0x40\n\
     sub        r0,r0,r3\n\
     ldr        r1,DAT_0803f02c\n\
     mul        r0,r1\n\
     asr        r0,r0,#0x6\n\
     ldr        r1,DAT_0803f030\n\
     add        r0,r0,r1\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     ldr        r0,DAT_0803f034\n\
     mul        r0,r3\n\
     asr        r0,r0,#0x6\n\
     b          LAB_0803f05c\n\
DAT_0803f028:\n\
     .4byte 0x02027048\n\
DAT_0803f02c:\n\
     .4byte 0x00004AC8\n\
DAT_0803f030:\n\
     .4byte 0x0000B538\n\
DAT_0803f034:\n\
     .4byte 0x0000B818\n\
LAB_0803f038:\n\
     cmp        r1,#0x0\n\
     blt        LAB_0803f078\n\
     mov        r0,#0x7f\n\
     sub        r0,r0,r3\n\
     ldr        r1,DAT_0803f06c\n\
     mul        r0,r1\n\
     asr        r0,r0,#0x6\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     add        r1,r3,#0x0\n\
     sub        r1,#0x3f\n\
     ldr        r0,DAT_0803f070\n\
     mul        r0,r1\n\
     asr        r0,r0,#0x6\n\
     ldr        r1,DAT_0803f074\n\
     add        r0,r0,r1\n\
LAB_0803f05c:\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     b          LAB_0803f088\n\
.space 1\n\
.space 1\n\
DAT_0803f06c:\n\
     .4byte 0x0000B818\n\
DAT_0803f070:\n\
     .4byte 0x00004AC8\n\
DAT_0803f074:\n\
     .4byte 0x0000B538\n\
LAB_0803f078:\n\
     ldr        r0,DAT_0803f09c\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     add        r6,r5,#0x0\n\
     mov        r1,#0x1\n\
     mov        r8,r1\n\
LAB_0803f088:\n\
     mov        r1,r12\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f0a0\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xbe\n\
     b          LAB_0803f0a4\n\
DAT_0803f09c:\n\
     .4byte 0x0000B538\n\
LAB_0803f0a0:\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xbc\n\
LAB_0803f0a4:\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r4,r0,#0x0\n\
     bl         fun_0803e038\n\
     add        r0,r6,#0x0\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x8\n\
     strb       r0,[r7,#0x18]\n\
     add        r0,r5,#0x0\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x8\n\
     strb       r0,[r7,#0x19]\n\
     mov        r0,r8\n\
     strb       r0,[r7,#0x1a]\n\
     bl         fun_0803e018\n\
LAB_0803f0c4:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803f0d0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     bl         fun_080411f8\n\
     bl         fun_0803e554\n\
     bl         fun_0803e6a0\n\
     bl         fun_0803e89c\n\
     bl         fun_0803e97c\n\
     bl         fun_0803ea10\n\
     bl         fun_0803ec74\n\
     bl         fun_0803ef1c\n\
     mov        r0,#0x0\n\
     mov        r9,r0\n\
     mov        r4,#0x0\n\
LAB_0803f102:\n\
     ldr        r0,DAT_0803f1ac\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r2,r9\n\
     lsl        r1,r2,#0x2\n\
     add        r0,r3,#0x0\n\
     add        r0,#0x10\n\
     add        r2,r0,r1\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f14c\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     str        r1,[r2,#0x0]\n\
     add        r0,r3,r4\n\
     ldrh       r3,[r0,#0x20]\n\
     ldrh       r1,[r0,#0x22]\n\
     add        r2,r3,r1\n\
     ldrh       r3,[r0,#0x24]\n\
     add        r2,r3,r2\n\
     ldrh       r1,[r0,#0x2c]\n\
     add        r2,r1,r2\n\
     ldrh       r3,[r0,#0x34]\n\
     add        r2,r3,r2\n\
     ldrh       r0,[r0,#0x3c]\n\
     add        r2,r0,r2\n\
     lsl        r2,r2,#0x10\n\
     lsr        r0,r2,#0x18\n\
     mov        r1,#0xff\n\
     lsl        r1,r1,#0x10\n\
     and        r1,r2\n\
     asr        r1,r1,#0x10\n\
     mov        r2,r9\n\
     bl         fun_0803e1f8\n\
LAB_0803f14c:\n\
     add        r4,#0x24\n\
     mov        r0,#0x1\n\
     add        r9,r0\n\
     mov        r1,r9\n\
     cmp        r1,#0x2\n\
     ble        LAB_0803f102\n\
     mov        r2,#0x0\n\
     mov        r9,r2\n\
     mov        r5,#0x0\n\
LAB_0803f15e:\n\
     ldr        r0,DAT_0803f1ac\n\
     ldr        r4,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x10\n\
     add        r2,r0,r5\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f1c4\n\
     mov        r3,#0x81\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     and        r3,r1\n\
     str        r3,[r2,#0x0]\n\
     mov        r1,r9\n\
     lsl        r0,r1,#0x3\n\
     add        r2,r4,r0\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x90\n\
     ldrh       r0,[r0,#0x0]\n\
     lsr        r1,r0,#0x8\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803f18e\n\
     add        r1,#0x1\n\
LAB_0803f18e:\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x93\n\
     ldrb       r0,[r0,#0x0]\n\
     mul        r0,r1\n\
     lsl        r0,r0,#0x8\n\
     lsr        r1,r0,#0x10\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     and        r3,r0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803f1b0\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xbe\n\
     b          LAB_0803f1b4\n\
.space 1\n\
.space 1\n\
DAT_0803f1ac:\n\
     .4byte 0x02027048\n\
LAB_0803f1b0:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xbc\n\
LAB_0803f1b4:\n\
     ldrh       r0,[r0,#0x0]\n\
     mul        r0,r1\n\
     lsl        r0,r0,#0x8\n\
     lsr        r1,r0,#0x10\n\
     add        r0,r1,#0x0\n\
     mov        r1,r9\n\
     bl         fun_0803e2a4\n\
LAB_0803f1c4:\n\
     ldr        r2,DAT_0803f1fc\n\
     ldr        r3,[r2,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     and        r1,r0\n\
     add        r6,r2,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803f222\n\
     mov        r2,r9\n\
     cmp        r2,#0x3\n\
     beq        LAB_0803f204\n\
     ldr        r0,DAT_0803f200\n\
     add        r0,r5,r0\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r1,r9\n\
     lsl        r0,r1,#0x1\n\
     add        r1,r3,#0x0\n\
     add        r1,#0xb4\n\
     add        r1,r1,r0\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x8\n\
     add        r0,r3,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     b          LAB_0803f210\n\
DAT_0803f1fc:\n\
     .4byte 0x02027048\n\
DAT_0803f200:\n\
     .4byte 0x087D5ED0\n\
LAB_0803f204:\n\
     ldr        r0,DAT_0803f2dc\n\
     ldr        r2,[r0,#0xc]\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x8\n\
     add        r1,r3,#0x0\n\
LAB_0803f210:\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0x10\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,DAT_0803f2e0\n\
     and        r1,r2\n\
     str        r1,[r0,#0x0]\n\
LAB_0803f222:\n\
     add        r5,#0x4\n\
     mov        r0,#0x1\n\
     add        r9,r0\n\
     mov        r1,r9\n\
     cmp        r1,#0x3\n\
     ble        LAB_0803f15e\n\
     mov        r2,#0x0\n\
     mov        r9,r2\n\
     add        r1,r6,#0x0\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r9,r0\n\
     blt        LAB_0803f23e\n\
     b          LAB_0803f408\n\
LAB_0803f23e:\n\
     mov        r3,#0x0\n\
     str        r3,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x4]\n\
     mov        r10,r1\n\
LAB_0803f248:\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[sp,#0x4]\n\
     add        r0,r1,r0\n\
     ldr        r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0803f25a\n\
     b          LAB_0803f3ec\n\
LAB_0803f25a:\n\
     ldrh       r0,[r5,#0x36]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f272\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x3f\n\
     ldrh       r2,[r5,#0x36]\n\
     ldrb       r0,[r0,#0x0]\n\
     sub        r0,r2,r0\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803f270\n\
     mov        r0,#0x0\n\
LAB_0803f270:\n\
     strh       r0,[r5,#0x36]\n\
LAB_0803f272:\n\
     ldr        r1,[r5,#0x38]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f27e\n\
     b          LAB_0803f37e\n\
LAB_0803f27e:\n\
     mov        r0,#0x81\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r1,r0\n\
     str        r1,[r5,#0x38]\n\
     ldrh       r3,[r5,#0x28]\n\
     lsr        r4,r3,#0x8\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803f290\n\
     add        r4,#0x1\n\
LAB_0803f290:\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x2b\n\
     ldrb       r0,[r0,#0x0]\n\
     mul        r0,r4\n\
     lsl        r0,r0,#0x8\n\
     lsr        r3,r0,#0x10\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x2a\n\
     strb       r3,[r0,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0xc0\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[sp,#0x0]\n\
     add        r0,r0,r1\n\
     mov        r8,r0\n\
     add        r2,r5,#0x0\n\
     add        r2,#0x3c\n\
     ldrb       r0,[r2,#0x0]\n\
     lsl        r1,r0,#0x18\n\
     lsr        r0,r1,#0x18\n\
     cmp        r0,#0x3f\n\
     bhi        LAB_0803f2f0\n\
     ldrb       r2,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     sub        r0,r0,r2\n\
     ldr        r1,DAT_0803f2e4\n\
     mul        r0,r1\n\
     asr        r0,r0,#0x6\n\
     ldr        r1,DAT_0803f2e8\n\
     add        r0,r0,r1\n\
     mul        r0,r3\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     ldr        r0,DAT_0803f2ec\n\
     mul        r0,r2\n\
     asr        r0,r0,#0x6\n\
     b          LAB_0803f314\n\
DAT_0803f2dc:\n\
     .4byte 0x087D5ED0\n\
DAT_0803f2e0:\n\
     .4byte 0xFFFFFDFF\n\
DAT_0803f2e4:\n\
     .4byte 0x00004AC8\n\
DAT_0803f2e8:\n\
     .4byte 0x0000B538\n\
DAT_0803f2ec:\n\
     .4byte 0x0000B818\n\
LAB_0803f2f0:\n\
     cmp        r1,#0x0\n\
     blt        LAB_0803f32c\n\
     ldrb       r2,[r2,#0x0]\n\
     mov        r0,#0x7f\n\
     sub        r0,r0,r2\n\
     ldr        r1,DAT_0803f320\n\
     mul        r0,r1\n\
     asr        r0,r0,#0x6\n\
     mul        r0,r3\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     sub        r2,#0x3f\n\
     ldr        r0,DAT_0803f324\n\
     mul        r0,r2\n\
     asr        r0,r0,#0x6\n\
     ldr        r2,DAT_0803f328\n\
     add        r0,r0,r2\n\
LAB_0803f314:\n\
     mul        r0,r3\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     mov        r2,#0x0\n\
     b          LAB_0803f33a\n\
DAT_0803f320:\n\
     .4byte 0x0000B818\n\
DAT_0803f324:\n\
     .4byte 0x00004AC8\n\
DAT_0803f328:\n\
     .4byte 0x0000B538\n\
LAB_0803f32c:\n\
     ldr        r0,DAT_0803f350\n\
     mul        r0,r3\n\
     asr        r0,r0,#0x10\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     add        r7,r6,#0x0\n\
     mov        r2,#0x1\n\
LAB_0803f33a:\n\
     ldr        r0,[r5,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f354\n\
     mov        r3,r10\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xbe\n\
     b          LAB_0803f35a\n\
.space 1\n\
.space 1\n\
DAT_0803f350:\n\
     .4byte 0x0000B538\n\
LAB_0803f354:\n\
     mov        r1,r10\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xbc\n\
LAB_0803f35a:\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r4,r0,#0x0\n\
     str        r2,[sp,#0x8]\n\
     bl         fun_0803e038\n\
     add        r0,r7,#0x0\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x8\n\
     mov        r3,r8\n\
     strb       r0,[r3,#0x18]\n\
     add        r0,r6,#0x0\n\
     mul        r0,r4\n\
     asr        r0,r0,#0x8\n\
     strb       r0,[r3,#0x19]\n\
     ldr        r2,[sp,#0x8]\n\
     strb       r2,[r3,#0x1a]\n\
     bl         fun_0803e018\n\
LAB_0803f37e:\n\
     ldr        r1,[r5,#0x38]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f3ce\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     str        r0,[r5,#0x38]\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x5\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f3ce\n\
     mov        r1,r10\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xc0\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r2,[sp,#0x0]\n\
     add        r4,r4,r2\n\
     ldrh       r3,[r5,#0x0]\n\
     ldrh       r1,[r5,#0x2]\n\
     add        r0,r3,r1\n\
     ldrh       r2,[r5,#0x4]\n\
     add        r0,r2,r0\n\
     ldrh       r3,[r5,#0xc]\n\
     add        r0,r3,r0\n\
     ldrh       r1,[r5,#0x14]\n\
     add        r0,r1,r0\n\
     ldrh       r2,[r5,#0x1c]\n\
     add        r0,r2,r0\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldr        r0,[r4,#0x0]\n\
     lsr        r1,r2,#0x8\n\
     lsl        r2,r2,#0x18\n\
     lsr        r2,r2,#0x18\n\
     bl         fun_0803fde4\n\
     strh       r0,[r4,#0x14]\n\
LAB_0803f3ce:\n\
     ldr        r1,[r5,#0x38]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x8\n\
     and        r1,r0\n\
     ldr        r6,DAT_0803f488\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803f3ec\n\
     mov        r3,r10\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[sp,#0x4]\n\
     add        r0,r1,r0\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
LAB_0803f3ec:\n\
     ldr        r2,[sp,#0x0]\n\
     add        r2,#0x1c\n\
     str        r2,[sp,#0x0]\n\
     ldr        r3,[sp,#0x4]\n\
     add        r3,#0x4\n\
     str        r3,[sp,#0x4]\n\
     mov        r0,#0x1\n\
     add        r9,r0\n\
     add        r1,r6,#0x0\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r9,r0\n\
     bge        LAB_0803f408\n\
     b          LAB_0803f248\n\
LAB_0803f408:\n\
     bl         fun_0803e038\n\
     mov        r1,#0x0\n\
     mov        r9,r1\n\
     ldr        r1,DAT_0803f488\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r9,r0\n\
     bge        LAB_0803f46e\n\
     add        r6,r1,#0x0\n\
     mov        r4,#0x0\n\
LAB_0803f41e:\n\
     ldr        r2,[r1,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,r9\n\
     lsl        r3,r1,#0x2\n\
     add        r0,r3,r0\n\
     ldr        r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803f45e\n\
     ldr        r1,[r5,#0x38]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f45e\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x5\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f45e\n\
     ldr        r0,DAT_0803f48c\n\
     and        r1,r0\n\
     str        r1,[r5,#0x38]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,r3,r1\n\
     sub        r0,#0x4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r4\n\
     str        r0,[r1,#0x0]\n\
LAB_0803f45e:\n\
     add        r4,#0x1c\n\
     mov        r2,#0x1\n\
     add        r9,r2\n\
     add        r1,r6,#0x0\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r9,r0\n\
     blt        LAB_0803f41e\n\
LAB_0803f46e:\n\
     bl         fun_0803e018\n\
     bl         fun_080421d0\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803f488:\n\
     .4byte 0x02027048\n\
DAT_0803f48c:\n\
     .4byte 0xFFFFFDFF\n\
    ");
}
__attribute__((naked)) void fun_0803f490()
{
    asm("\n\
     ldr        r2,DAT_0803f4a0\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r1,r2\n\
     ldr        r1,[r1,#0x0]\n\
     lsl        r0,r0,#0x6\n\
     strb       r0,[r1,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803f4a0:\n\
     .4byte 0x087D5EE0\n\
    ");
}
__attribute__((naked)) void fun_0803f4a4()
{
    asm("\n\
     ldr        r1,DAT_0803f4ac\n\
     ldr        r1,[r1,#0xc]\n\
     strb       r0,[r1,#0x0]\n\
     bx         lr\n\
DAT_0803f4ac:\n\
     .4byte 0x087D5ED0\n\
    ");
}
__attribute__((naked)) void fun_0803f4b0()
{
    asm("\n\
     push       {r4,lr}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     mov        r0,#0x8\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f4dc\n\
     ldr        r0,DAT_0803f4d4\n\
     lsl        r3,r1,#0x2\n\
     add        r0,r3,r0\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r1,[r2,#0x0]\n\
     ldr        r0,DAT_0803f4d8\n\
     and        r0,r1\n\
     lsl        r1,r4,#0x8\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     b          LAB_0803f4ea\n\
DAT_0803f4d4:\n\
     .4byte 0x087D5EE0\n\
DAT_0803f4d8:\n\
     .4byte 0x0000F0C0\n\
LAB_0803f4dc:\n\
     ldr        r0,DAT_0803f508\n\
     lsl        r2,r1,#0x2\n\
     add        r0,r2,r0\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r4,#0x8\n\
     strh       r0,[r1,#0x0]\n\
     add        r3,r2,#0x0\n\
LAB_0803f4ea:\n\
     ldr        r0,DAT_0803f50c\n\
     ldr        r2,[r0,#0x0]\n\
     add        r2,#0x10\n\
     add        r2,r2,r3\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0xa2\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803f508:\n\
     .4byte 0x087D5EE0\n\
DAT_0803f50c:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803f510()
{
    asm("\n\
     add        r2,r0,#0x0\n\
     cmp        r2,#0x3\n\
     bgt        LAB_0803f530\n\
     ldr        r0,DAT_0803f52c\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0xb0\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0803f548\n\
DAT_0803f52c:\n\
     .4byte 0x02027048\n\
LAB_0803f530:\n\
     sub        r2,#0x4\n\
     ldr        r0,DAT_0803f54c\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r2,#0x6\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_0803f548:\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0803f54c:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803f550()
{
    asm("\n\
     add        r2,r0,#0x0\n\
     ldr        r3,DAT_0803f574\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x10\n\
     bne        LAB_0803f57c\n\
     ldr        r1,DAT_0803f578\n\
     mov        r0,#0x40\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x10]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x14]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x18]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x1c]\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     b          LAB_0803f5ac\n\
DAT_0803f574:\n\
     .4byte 0x04000090\n\
DAT_0803f578:\n\
     .4byte 0x04000070\n\
LAB_0803f57c:\n\
     ldr        r1,DAT_0803f5b0\n\
     mov        r0,#0x60\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x10]\n\
     str        r0,[r3,#0x0]\n\
     ldr        r3,DAT_0803f5b4\n\
     ldr        r0,[r2,#0x14]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x18]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x1c]\n\
     str        r0,[r3,#0x0]\n\
     ldr        r3,DAT_0803f5b8\n\
     mov        r0,#0x20\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x20]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x24]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x28]\n\
     stmia      r3!,{r0}\n\
     ldr        r0,[r2,#0x2c]\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0xa0\n\
LAB_0803f5ac:\n\
     strb       r0,[r1,#0x0]\n\
     bx         lr\n\
DAT_0803f5b0:\n\
     .4byte 0x04000070\n\
DAT_0803f5b4:\n\
     .4byte 0x04000094\n\
DAT_0803f5b8:\n\
     .4byte 0x04000090\n\
    ");
}
__attribute__((naked)) void fun_0803f5bc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r4,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     add        r5,r2,#0x0\n\
     cmp        r3,#0x2\n\
     bgt        LAB_0803f5e4\n\
     ldr        r0,DAT_0803f5e0\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r1,r4,#0x3\n\
     lsl        r0,r3,#0x3\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     add        r2,r2,r1\n\
     strh       r5,[r2,#0x28]\n\
     strh       r6,[r2,#0x26]\n\
     b          LAB_0803f600\n\
.space 1\n\
.space 1\n\
DAT_0803f5e0:\n\
     .4byte 0x02027048\n\
LAB_0803f5e4:\n\
     cmp        r3,#0x3\n\
     ble        LAB_0803f600\n\
     ldr        r0,DAT_0803f608\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     lsl        r1,r3,#0x6\n\
     ldr        r2,DAT_0803f60c\n\
     add        r1,r1,r2\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     lsl        r1,r4,#0x3\n\
     add        r0,r0,r1\n\
     strh       r5,[r0,#0x8]\n\
     strh       r6,[r0,#0x6]\n\
LAB_0803f600:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803f608:\n\
     .4byte 0x02027048\n\
DAT_0803f60c:\n\
     .4byte 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0803f610()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     ldr        r0,DAT_0803f630\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r1,#0x8a\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r3,r1\n\
     lsl        r1,r2,#0x4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r4,r0,r1\n\
     cmp        r2,#0x3\n\
     bgt        LAB_0803f634\n\
     lsl        r0,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r1,r3,r0\n\
     b          LAB_0803f640\n\
DAT_0803f630:\n\
     .4byte 0x02027048\n\
LAB_0803f634:\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     sub        r1,#0xc8\n\
LAB_0803f640:\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     orr        r2,r0\n\
     str        r2,[r1,#0x0]\n\
     mov        r0,#0x9\n\
     and        r0,r2\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803f66c\n\
     mov        r3,#0x10\n\
     orr        r3,r2\n\
     str        r3,[r1,#0x0]\n\
     mov        r2,#0x6\n\
     add        r0,r3,#0x0\n\
     and        r0,r2\n\
     cmp        r0,#0x2\n\
     bhi        LAB_0803f66c\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     and        r3,r0\n\
     orr        r3,r2\n\
     str        r3,[r1,#0x0]\n\
LAB_0803f66c:\n\
     ldr        r1,[r4,#0x4]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803f678\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xa]\n\
     str        r1,[r4,#0x0]\n\
LAB_0803f678:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803f680()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r2,r0,#0x0\n\
     ldr        r0,DAT_0803f6d4\n\
     ldr        r4,[r0,#0x0]\n\
     add        r0,r4,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r3,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     beq        LAB_0803f6ce\n\
     add        r1,r4,#0x0\n\
     add        r1,#0xc0\n\
     lsl        r0,r2,#0x3\n\
     sub        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     ldr        r4,[r1,#0x0]\n\
     add        r4,r4,r0\n\
     ldrh       r0,[r3,#0x0]\n\
     ldrh       r1,[r3,#0x2]\n\
     add        r2,r0,r1\n\
     ldrh       r0,[r3,#0x4]\n\
     add        r2,r0,r2\n\
     ldrh       r1,[r3,#0xc]\n\
     add        r2,r1,r2\n\
     ldrh       r0,[r3,#0x14]\n\
     add        r2,r0,r2\n\
     ldrh       r3,[r3,#0x1c]\n\
     add        r2,r3,r2\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     ldr        r0,[r4,#0x0]\n\
     lsr        r1,r2,#0x8\n\
     lsl        r2,r2,#0x18\n\
     lsr        r2,r2,#0x18\n\
     bl         fun_0803fde4\n\
     strh       r0,[r4,#0x14]\n\
LAB_0803f6ce:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803f6d4:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803f6d8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x14\n\
     add        r7,r0,#0x0\n\
     str        r1,[sp,#0x0]\n\
     ldrb       r0,[r7,#0x2]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f6f2\n\
     mov        r0,#0x0\n\
     b          LAB_0803fb50\n\
LAB_0803f6f2:\n\
     ldr        r4,DAT_0803f748\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r2,[r7,#0x2]\n\
     lsl        r1,r2,#0x2\n\
     bl         fun_0803dfa0\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0xc0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r3,[r7,#0x2]\n\
     lsl        r1,r3,#0x3\n\
     sub        r1,r1,r3\n\
     lsl        r1,r1,#0x2\n\
     bl         fun_0803dfa0\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r2,[r7,#0x2]\n\
     lsl        r1,r2,#0x2\n\
     bl         fun_0803dfa0\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r0,[r0,#0x0]\n\
     ldrb       r3,[r7,#0x2]\n\
     lsl        r1,r3,#0x6\n\
     bl         fun_0803dfa0\n\
     ldr        r0,[r4,#0x0]\n\
     add        r6,r0,#0x0\n\
     add        r6,#0xd0\n\
     mov        r0,#0x3\n\
     ldrb       r1,[r7,#0x3]\n\
     and        r0,r1\n\
     cmp        r0,#0x3\n\
     bne        LAB_0803f754\n\
     ldr        r4,DAT_0803f74c\n\
     ldr        r3,DAT_0803f750\n\
     b          LAB_0803f780\n\
.space 1\n\
.space 1\n\
DAT_0803f748:\n\
     .4byte 0x02027048\n\
DAT_0803f74c:\n\
     .4byte 0x08043140\n\
DAT_0803f750:\n\
     .4byte 0x080432CC\n\
LAB_0803f754:\n\
     cmp        r0,#0x2\n\
     bne        LAB_0803f768\n\
     ldr        r4,DAT_0803f760\n\
     ldr        r3,DAT_0803f764\n\
     b          LAB_0803f780\n\
.space 1\n\
.space 1\n\
DAT_0803f760:\n\
     .4byte 0x08042F8C\n\
DAT_0803f764:\n\
     .4byte 0x08043140\n\
LAB_0803f768:\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803f77c\n\
     ldr        r4,DAT_0803f774\n\
     ldr        r3,DAT_0803f778\n\
     b          LAB_0803f780\n\
.space 1\n\
.space 1\n\
DAT_0803f774:\n\
     .4byte 0x08042E00\n\
DAT_0803f778:\n\
     .4byte 0x08042F8C\n\
LAB_0803f77c:\n\
     ldr        r4,DAT_0803f794\n\
     ldr        r3,DAT_0803f798\n\
LAB_0803f780:\n\
     ldrb       r1,[r7,#0x3]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f7a4\n\
     ldr        r2,DAT_0803f79c\n\
     mov        r9,r2\n\
     ldr        r5,DAT_0803f7a0\n\
     b          LAB_0803f7aa\n\
.space 1\n\
.space 1\n\
DAT_0803f794:\n\
     .4byte 0x08042C20\n\
DAT_0803f798:\n\
     .4byte 0x08042E00\n\
DAT_0803f79c:\n\
     .4byte 0x08042A74\n\
DAT_0803f7a0:\n\
     .4byte 0x08042B88\n\
LAB_0803f7a4:\n\
     ldr        r0,DAT_0803f7bc\n\
     mov        r9,r0\n\
     ldr        r5,DAT_0803f7c0\n\
LAB_0803f7aa:\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f7cc\n\
     ldr        r2,DAT_0803f7c4\n\
     mov        r10,r2\n\
     ldr        r0,DAT_0803f7c8\n\
     b          LAB_0803f7ea\n\
.space 1\n\
.space 1\n\
DAT_0803f7bc:\n\
     .4byte 0x08042B88\n\
DAT_0803f7c0:\n\
     .4byte 0x08042C20\n\
DAT_0803f7c4:\n\
     .4byte 0x08043420\n\
DAT_0803f7c8:\n\
     .4byte 0x080434C4\n\
LAB_0803f7cc:\n\
     mov        r0,#0x4\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f7e4\n\
     ldr        r2,DAT_0803f7dc\n\
     mov        r10,r2\n\
     ldr        r0,DAT_0803f7e0\n\
     b          LAB_0803f7ea\n\
DAT_0803f7dc:\n\
     .4byte 0x08043370\n\
DAT_0803f7e0:\n\
     .4byte 0x08043420\n\
LAB_0803f7e4:\n\
     ldr        r2,DAT_0803f848\n\
     mov        r10,r2\n\
     ldr        r0,DAT_0803f84c\n\
LAB_0803f7ea:\n\
     mov        r12,r0\n\
     mov        r0,#0x8\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f898\n\
     ldr        r1,[sp,#0x0]\n\
     ldr        r2,[r1,#0x4]\n\
     str        r2,[r6,#0x0]\n\
     add        r1,r4,#0x0\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x21\n\
     str        r0,[sp,#0xc]\n\
     sub        r0,#0x1\n\
     str        r0,[sp,#0x8]\n\
     mov        r0,#0x24\n\
     add        r0,r0,r6\n\
     mov        r8,r0\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x3f\n\
     str        r0,[sp,#0x10]\n\
     cmp        r1,r3\n\
     bcs        LAB_0803f81e\n\
LAB_0803f816:\n\
     ldmia      r1!,{r0}\n\
     stmia      r2!,{r0}\n\
     cmp        r1,r3\n\
     bcc        LAB_0803f816\n\
LAB_0803f81e:\n\
     str        r2,[r6,#0x8]\n\
     mov        r1,r9\n\
     cmp        r1,r5\n\
     bcs        LAB_0803f82e\n\
LAB_0803f826:\n\
     ldmia      r1!,{r0}\n\
     stmia      r2!,{r0}\n\
     cmp        r1,r5\n\
     bcc        LAB_0803f826\n\
LAB_0803f82e:\n\
     ldrb       r1,[r7,#0x3]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f840\n\
     mov        r0,#0x6\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f850\n\
LAB_0803f840:\n\
     ldr        r0,[r6,#0x0]\n\
     str        r0,[r6,#0x4]\n\
     b          LAB_0803f87c\n\
.space 1\n\
.space 1\n\
DAT_0803f848:\n\
     .4byte 0x080432CC\n\
DAT_0803f84c:\n\
     .4byte 0x08043370\n\
LAB_0803f850:\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f868\n\
     ldr        r4,DAT_0803f860\n\
     ldr        r3,DAT_0803f864\n\
     b          LAB_0803f86c\n\
.space 1\n\
.space 1\n\
DAT_0803f860:\n\
     .4byte 0x08042F8C\n\
DAT_0803f864:\n\
     .4byte 0x08043140\n\
LAB_0803f868:\n\
     ldr        r4,DAT_0803f890\n\
     ldr        r3,DAT_0803f894\n\
LAB_0803f86c:\n\
     str        r2,[r6,#0x4]\n\
     add        r1,r4,#0x0\n\
     cmp        r1,r3\n\
     bcs        LAB_0803f87c\n\
LAB_0803f874:\n\
     ldmia      r1!,{r0}\n\
     stmia      r2!,{r0}\n\
     cmp        r1,r3\n\
     bcc        LAB_0803f874\n\
LAB_0803f87c:\n\
     str        r2,[r6,#0xc]\n\
     mov        r1,r10\n\
     cmp        r1,r12\n\
     bcs        LAB_0803f8de\n\
LAB_0803f884:\n\
     ldmia      r1!,{r0}\n\
     stmia      r2!,{r0}\n\
     cmp        r1,r12\n\
     bcc        LAB_0803f884\n\
     b          LAB_0803f8de\n\
.space 1\n\
.space 1\n\
DAT_0803f890:\n\
     .4byte 0x08043140\n\
DAT_0803f894:\n\
     .4byte 0x080432CC\n\
LAB_0803f898:\n\
     str        r4,[r6,#0x0]\n\
     mov        r1,r9\n\
     str        r1,[r6,#0x8]\n\
     ldrb       r1,[r7,#0x3]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f8b0\n\
     mov        r0,#0x6\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f8b4\n\
LAB_0803f8b0:\n\
     str        r4,[r6,#0x4]\n\
     b          LAB_0803f8c2\n\
LAB_0803f8b4:\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     ldr        r1,DAT_0803f8f8\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f8c0\n\
     ldr        r1,DAT_0803f8fc\n\
LAB_0803f8c0:\n\
     str        r1,[r6,#0x4]\n\
LAB_0803f8c2:\n\
     mov        r2,r10\n\
     str        r2,[r6,#0xc]\n\
     add        r3,r6,#0x0\n\
     add        r3,#0x21\n\
     str        r3,[sp,#0xc]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     str        r0,[sp,#0x8]\n\
     mov        r1,#0x24\n\
     add        r1,r1,r6\n\
     mov        r8,r1\n\
     add        r2,r6,#0x0\n\
     add        r2,#0x3f\n\
     str        r2,[sp,#0x10]\n\
LAB_0803f8de:\n\
     ldr        r3,[sp,#0x0]\n\
     ldr        r1,[r3,#0x8]\n\
     str        r1,[r6,#0x10]\n\
     mov        r0,#0x2\n\
     ldrb       r2,[r7,#0x3]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803f900\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r1,r1,r3\n\
     b          LAB_0803f906\n\
.space 1\n\
.space 1\n\
DAT_0803f8f8:\n\
     .4byte 0x08043140\n\
DAT_0803f8fc:\n\
     .4byte 0x08042F8C\n\
LAB_0803f900:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
LAB_0803f906:\n\
     str        r1,[r6,#0x14]\n\
     mov        r0,#0x2\n\
     ldrb       r2,[r7,#0x3]\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803f916\n\
     str        r1,[r6,#0x18]\n\
     b          LAB_0803f91e\n\
LAB_0803f916:\n\
     mov        r3,#0xc0\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r1,r3\n\
     str        r0,[r6,#0x18]\n\
LAB_0803f91e:\n\
     ldr        r1,[r6,#0x18]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
     str        r1,[r6,#0x1c]\n\
     ldr        r0,[r6,#0x10]\n\
     sub        r1,r1,r0\n\
     bl         fun_0803dfa0\n\
     ldr        r1,DAT_0803f99c\n\
     mov        r10,r1\n\
     ldr        r2,[r1,#0x0]\n\
     ldrb       r0,[r7,#0x2]\n\
     mov        r1,#0x0\n\
     strb       r0,[r2,#0x0]\n\
     ldr        r2,[sp,#0xc]\n\
     strb       r1,[r2,#0x0]\n\
     ldrh       r1,[r7,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x11\n\
     bl         __divsi3\n\
     mov        r9,r0\n\
     ldr        r0,DAT_0803f9a0\n\
     mov        r3,r9\n\
     and        r3,r0\n\
     mov        r9,r3\n\
     lsl        r4,r3,#0x10\n\
     asr        r4,r4,#0x10\n\
     add        r0,r4,#0x0\n\
     bl         __floatsisf\n\
     add        r2,r0,#0x0\n\
     cmp        r4,#0x0\n\
     bge        LAB_0803f96c\n\
     ldr        r1,DAT_0803f9a4\n\
     bl         __addsf3\n\
     add        r2,r0,#0x0\n\
LAB_0803f96c:\n\
     ldr        r0,DAT_0803f9a8\n\
     add        r1,r2,#0x0\n\
     bl         __divsf3\n\
     add        r5,r0,#0x0\n\
     mov        r0,r10\n\
     ldr        r4,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         __fixunssfsi\n\
     strh       r0,[r4,#0x2]\n\
     ldr        r0,DAT_0803f9ac\n\
     add        r1,r5,#0x0\n\
     bl         __divsf3\n\
     bl         __fixunssfsi\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_0803f9b0\n\
     cmp        r1,r0\n\
     bhi        LAB_0803f9b4\n\
     mov        r4,#0x0\n\
     b          LAB_0803f9ec\n\
.space 1\n\
.space 1\n\
DAT_0803f99c:\n\
     .4byte 0x02027048\n\
DAT_0803f9a0:\n\
     .4byte 0x0000FFC0\n\
DAT_0803f9a4:\n\
     .4byte 0x47800000\n\
DAT_0803f9a8:\n\
     .4byte 0x4B800000\n\
DAT_0803f9ac:\n\
     .4byte 0x51CAA7E2\n\
DAT_0803f9b0:\n\
     .4byte 0x003B9ACA\n\
LAB_0803f9b4:\n\
     ldr        r0,DAT_0803f9c0\n\
     cmp        r1,r0\n\
     bhi        LAB_0803f9c4\n\
     mov        r4,#0x1\n\
     lsr        r1,r1,#0x6\n\
     b          LAB_0803f9ec\n\
DAT_0803f9c0:\n\
     .4byte 0x0EE6B280\n\
LAB_0803f9c4:\n\
     ldr        r0,DAT_0803f9d0\n\
     cmp        r1,r0\n\
     bhi        LAB_0803f9d4\n\
     mov        r4,#0x2\n\
     lsr        r1,r1,#0x8\n\
     b          LAB_0803f9ec\n\
DAT_0803f9d0:\n\
     .4byte 0x3B9ACA00\n\
LAB_0803f9d4:\n\
     ldr        r0,DAT_0803f9e4\n\
     cmp        r1,r0\n\
     bls        LAB_0803f9e8\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     mov        r10,r1\n\
     b          LAB_0803fa34\n\
.space 1\n\
.space 1\n\
DAT_0803f9e4:\n\
     .4byte 0xEE6B2800\n\
LAB_0803f9e8:\n\
     mov        r4,#0x3\n\
     lsr        r1,r1,#0xa\n\
LAB_0803f9ec:\n\
     cmp        r1,#0x0\n\
     blt        LAB_0803f9f8\n\
     add        r0,r1,#0x0\n\
     bl         __floatsisf\n\
     b          LAB_0803fa0c\n\
LAB_0803f9f8:\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     lsr        r1,r1,#0x1\n\
     orr        r0,r1\n\
     bl         __floatsisf\n\
     add        r2,r0,#0x0\n\
     add        r1,r2,#0x0\n\
     bl         __addsf3\n\
LAB_0803fa0c:\n\
     add        r2,r0,#0x0\n\
     ldr        r1,DAT_0803fad0\n\
     add        r0,r2,#0x0\n\
     bl         __divsf3\n\
     bl         __fixsfsi\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     cmp        r0,r1\n\
     bls        LAB_0803fa24\n\
     add        r0,r1,#0x0\n\
LAB_0803fa24:\n\
     lsl        r4,r4,#0x10\n\
     mov        r10,r4\n\
     sub        r0,r1,r0\n\
     ldr        r1,DAT_0803fad4\n\
     and        r0,r1\n\
     mov        r2,r10\n\
     orr        r2,r0\n\
     mov        r10,r2\n\
LAB_0803fa34:\n\
     mov        r3,r9\n\
     lsl        r0,r3,#0x10\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[sp,#0x4]\n\
     lsl        r0,r3,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     strh       r0,[r6,#0x22]\n\
     mov        r0,#0x1\n\
     mov        r9,r0\n\
     mov        r2,r9\n\
     ldr        r1,[sp,#0x8]\n\
     strb       r2,[r1,#0x0]\n\
     ldrh       r0,[r7,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fae4\n\
     ldr        r3,[sp,#0x0]\n\
     ldr        r1,[r3,#0xc]\n\
     mov        r0,#0x6\n\
     ldrb       r2,[r7,#0x3]\n\
     and        r0,r2\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fa68\n\
     mov        r4,#0x80\n\
LAB_0803fa68:\n\
     str        r1,[r6,#0x24]\n\
     lsl        r5,r4,#0x1\n\
     add        r1,r1,r5\n\
     mov        r3,r8\n\
     str        r1,[r3,#0x4]\n\
     ldr        r0,DAT_0803fad8\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r2,[r7,#0x4]\n\
     ldrh       r3,[r0,#0x2]\n\
     add        r1,r2,#0x0\n\
     mul        r1,r3\n\
     add        r0,r1,#0x0\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x9\n\
     bl         __udivsi3\n\
     add        r1,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803fa90\n\
     mov        r1,#0x1\n\
LAB_0803fa90:\n\
     cmp        r1,#0xff\n\
     bls        LAB_0803fa96\n\
     mov        r1,#0xff\n\
LAB_0803fa96:\n\
     mov        r0,r8\n\
     ldr        r2,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     str        r2,[r0,#0xc]\n\
     add        r0,r2,#0x0\n\
     cmp        r1,#0x1\n\
     bls        LAB_0803faaa\n\
     add        r0,r0,r5\n\
     mov        r3,r8\n\
     str        r0,[r3,#0xc]\n\
LAB_0803faaa:\n\
     mul        r1,r4\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r2,r1\n\
     mov        r0,r8\n\
     str        r1,[r0,#0x10]\n\
     ldr        r0,[r6,#0x24]\n\
     sub        r1,r1,r0\n\
     bl         fun_0803dfa0\n\
     ldr        r0,DAT_0803fadc\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x14]\n\
     ldr        r0,DAT_0803fad4\n\
     strh       r0,[r1,#0x16]\n\
     ldr        r0,DAT_0803fae0\n\
     strh       r0,[r1,#0x18]\n\
     mov        r2,r9\n\
     strb       r2,[r1,#0x1a]\n\
     b          LAB_0803faec\n\
DAT_0803fad0:\n\
     .4byte 0x426E6B28\n\
DAT_0803fad4:\n\
     .4byte 0x0000FFFF\n\
DAT_0803fad8:\n\
     .4byte 0x02027048\n\
DAT_0803fadc:\n\
     .4byte 0x00007332\n\
DAT_0803fae0:\n\
     .4byte 0x0000CCCC\n\
LAB_0803fae4:\n\
     mov        r0,r8\n\
     mov        r1,#0x1c\n\
     bl         fun_0803dfa0\n\
LAB_0803faec:\n\
     ldrb       r0,[r7,#0x3]\n\
     ldr        r3,[sp,#0x10]\n\
     strb       r0,[r3,#0x0]\n\
     ldr        r4,DAT_0803fb60\n\
     ldr        r3,DAT_0803fb64\n\
     mov        r1,#0x0\n\
     ldr        r2,DAT_0803fb68\n\
     mov        r0,#0x7\n\
LAB_0803fafc:\n\
     str        r1,[r3,#0x0]\n\
     str        r1,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803fafc\n\
     ldr        r1,DAT_0803fb6c\n\
     ldr        r0,[r6,#0x14]\n\
     str        r0,[r1,#0x0]\n\
     add        r1,#0x4\n\
     ldr        r0,DAT_0803fb64\n\
     str        r0,[r1,#0x0]\n\
     add        r0,#0x24\n\
     mov        r3,#0x4\n\
     strh       r3,[r0,#0x0]\n\
     add        r0,#0x2\n\
     ldr        r1,DAT_0803fb70\n\
     add        r2,r1,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0803fb74\n\
     ldr        r0,[r6,#0x18]\n\
     str        r0,[r1,#0x0]\n\
     add        r1,#0x4\n\
     ldr        r0,DAT_0803fb68\n\
     str        r0,[r1,#0x0]\n\
     add        r0,#0x2c\n\
     strh       r3,[r0,#0x0]\n\
     add        r0,#0x2\n\
     strh       r2,[r0,#0x0]\n\
     add        r1,#0x38\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x10\n\
     mov        r2,r10\n\
     orr        r2,r0\n\
     str        r2,[r1,#0x0]\n\
     sub        r1,#0x4\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x10\n\
     ldr        r3,[sp,#0x4]\n\
     orr        r0,r3\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
LAB_0803fb50:\n\
     add        sp,#0x14\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0803fb60:\n\
     .4byte 0x02027048\n\
DAT_0803fb64:\n\
     .4byte 0x040000A0\n\
DAT_0803fb68:\n\
     .4byte 0x040000A4\n\
DAT_0803fb6c:\n\
     .4byte 0x040000BC\n\
DAT_0803fb70:\n\
     .4byte 0x0000B660\n\
DAT_0803fb74:\n\
     .4byte 0x040000C8\n\
    ");
}
__attribute__((naked)) void fun_0803fb78()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r0,DAT_0803fbe0\n\
     ldr        r4,[r0,#0x0]\n\
     add        r6,r4,#0x0\n\
     add        r6,#0xd0\n\
     bl         fun_0803e038\n\
     add        r4,#0xf1\n\
     mov        r5,#0x0\n\
     strb       r5,[r4,#0x0]\n\
     ldr        r3,DAT_0803fbe4\n\
     ldrh       r2,[r3,#0x0]\n\
     ldr        r1,DAT_0803fbe8\n\
     add        r0,r1,#0x0\n\
     and        r0,r2\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r2,DAT_0803fbec\n\
     ldrh       r0,[r2,#0x0]\n\
     and        r1,r0\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,DAT_0803fbf0\n\
     strh       r5,[r0,#0x0]\n\
     add        r0,#0xc\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,DAT_0803fbf4\n\
     mov        r0,#0x88\n\
     strb       r0,[r1,#0x0]\n\
     sub        r3,#0x66\n\
     mov        r1,#0x0\n\
     sub        r2,#0x5e\n\
     mov        r0,#0x7\n\
LAB_0803fbb6:\n\
     str        r1,[r3,#0x0]\n\
     str        r1,[r2,#0x0]\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803fbb6\n\
     bl         fun_0803e018\n\
     ldr        r0,[r6,#0x10]\n\
     ldr        r1,[r6,#0x1c]\n\
     sub        r1,r1,r0\n\
     bl         fun_0803dfa0\n\
     ldr        r0,[r6,#0x24]\n\
     ldr        r1,[r6,#0x34]\n\
     sub        r1,r1,r0\n\
     bl         fun_0803dfa0\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803fbe0:\n\
     .4byte 0x02027048\n\
DAT_0803fbe4:\n\
     .4byte 0x04000106\n\
DAT_0803fbe8:\n\
     .4byte 0x0000FF3F\n\
DAT_0803fbec:\n\
     .4byte 0x04000102\n\
DAT_0803fbf0:\n\
     .4byte 0x040000C6\n\
DAT_0803fbf4:\n\
     .4byte 0x04000083\n\
    ");
}
__attribute__((naked)) void fun_0803fbf8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x14\n\
     ldr        r6,DAT_0803fccc\n\
     ldr        r5,[r6,#0x0]\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803fc10\n\
     b          LAB_0803fd66\n\
LAB_0803fc10:\n\
     add        r7,r5,#0x0\n\
     add        r7,#0xd0\n\
     ldr        r0,[r7,#0x0]\n\
     str        r0,[sp,#0x0]\n\
     ldr        r1,[r7,#0x4]\n\
     str        r1,[sp,#0x4]\n\
     ldr        r2,[r7,#0x8]\n\
     str        r2,[sp,#0x8]\n\
     ldr        r3,[r7,#0xc]\n\
     str        r3,[sp,#0xc]\n\
     add        r2,r5,#0x0\n\
     add        r2,#0xf1\n\
     ldrb       r1,[r2,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803fc42\n\
     mov        r0,#0x1\n\
     strb       r0,[r2,#0x0]\n\
     ldr        r0,DAT_0803fcd0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_0803fcd4\n\
     mov        r0,#0xc1\n\
     lsl        r0,r0,#0x10\n\
     ldrh       r2,[r7,#0x22]\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
LAB_0803fc42:\n\
     add        r4,r5,#0x0\n\
     add        r4,#0xf0\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x3\n\
     bne        LAB_0803fc58\n\
     mov        r0,#0x0\n\
     strb       r0,[r4,#0x0]\n\
LAB_0803fc58:\n\
     ldrb       r3,[r4,#0x0]\n\
     cmp        r3,#0x1\n\
     bne        LAB_0803fc7e\n\
     ldr        r3,DAT_0803fcd8\n\
     ldr        r1,DAT_0803fcdc\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r2,DAT_0803fce0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_0803fce4\n\
     ldr        r0,[r7,#0x14]\n\
     str        r0,[r1,#0x0]\n\
     add        r1,#0xc\n\
     ldr        r0,[r7,#0x18]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0803fce8\n\
     add        r0,r1,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
LAB_0803fc7e:\n\
     mov        r2,#0x0\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r3,#0x87\n\
     lsl        r3,r3,#0x1\n\
     add        r3,r3,r5\n\
     mov        r9,r3\n\
     mov        r10,r4\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bge        LAB_0803fd3c\n\
     mov        r8,r6\n\
LAB_0803fc94:\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r6,r2,#0x2\n\
     add        r0,r6,r0\n\
     ldr        r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803fd30\n\
     ldrb       r4,[r5,#0x1b]\n\
     cmp        r4,#0x0\n\
     bne        LAB_0803fcec\n\
     ldr        r1,[r7,#0x10]\n\
     add        r0,r5,#0x0\n\
     str        r2,[sp,#0x10]\n\
     ldr        r3,[sp,#0x0]\n\
     bl         _call_via_r3\n\
     ldr        r2,[sp,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fd0c\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r6,r0\n\
     str        r4,[r0,#0x0]\n\
     b          LAB_0803fd0c\n\
DAT_0803fccc:\n\
     .4byte 0x02027048\n\
DAT_0803fcd0:\n\
     .4byte 0x04000106\n\
DAT_0803fcd4:\n\
     .4byte 0x04000104\n\
DAT_0803fcd8:\n\
     .4byte 0x040000C6\n\
DAT_0803fcdc:\n\
     .4byte 0x00003660\n\
DAT_0803fce0:\n\
     .4byte 0x040000D2\n\
DAT_0803fce4:\n\
     .4byte 0x040000BC\n\
DAT_0803fce8:\n\
     .4byte 0x0000B660\n\
LAB_0803fcec:\n\
     ldr        r1,[r7,#0x24]\n\
     add        r0,r5,#0x0\n\
     str        r2,[sp,#0x10]\n\
     ldr        r3,[sp,#0x4]\n\
     bl         _call_via_r3\n\
     ldr        r2,[sp,#0x10]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fd0c\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r6,r0\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
LAB_0803fd0c:\n\
     mov        r3,r8\n\
     ldr        r0,[r3,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xa\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fd30\n\
     add        r0,r2,#0x0\n\
     add        r1,r5,#0x0\n\
     str        r2,[sp,#0x10]\n\
     bl         fun_0803dc2c\n\
     ldr        r2,[sp,#0x10]\n\
LAB_0803fd30:\n\
     add        r2,#0x1\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     blt        LAB_0803fc94\n\
LAB_0803fd3c:\n\
     mov        r2,r9\n\
     ldrb       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fd50\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x24\n\
     ldr        r1,[r7,#0x10]\n\
     ldr        r3,[sp,#0xc]\n\
     bl         _call_via_r3\n\
LAB_0803fd50:\n\
     mov        r1,r10\n\
     ldrb       r1,[r1,#0x0]\n\
     lsl        r0,r1,#0x7\n\
     ldr        r1,[r7,#0x14]\n\
     add        r1,r1,r0\n\
     ldr        r2,[r7,#0x18]\n\
     add        r2,r2,r0\n\
     ldr        r0,[r7,#0x10]\n\
     ldr        r3,[sp,#0x8]\n\
     bl         _call_via_r3\n\
LAB_0803fd66:\n\
     add        sp,#0x14\n\
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
__attribute__((naked)) void fun_0803fd78()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r1,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x11\n\
     bl         __udivsi3\n\
     ldr        r4,DAT_0803fdbc\n\
     and        r4,r0\n\
     lsl        r4,r4,#0x10\n\
     asr        r4,r4,#0x10\n\
     add        r0,r4,#0x0\n\
     bl         __floatsisf\n\
     add        r2,r0,#0x0\n\
     cmp        r4,#0x0\n\
     bge        LAB_0803fda4\n\
     ldr        r1,DAT_0803fdc0\n\
     bl         __addsf3\n\
     add        r2,r0,#0x0\n\
LAB_0803fda4:\n\
     ldr        r0,DAT_0803fdc4\n\
     add        r1,r2,#0x0\n\
     bl         __divsf3\n\
     bl         __fixunssfsi\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803fdbc:\n\
     .4byte 0x0000FFC0\n\
DAT_0803fdc0:\n\
     .4byte 0x47800000\n\
DAT_0803fdc4:\n\
     .4byte 0x4B800000\n\
    ");
}
__attribute__((naked)) void fun_0803fdc8()
{
    asm("\n\
     push       {lr}\n\
     mul        r0,r1\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x9\n\
     bl         __udivsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803fdda\n\
     mov        r0,#0x1\n\
LAB_0803fdda:\n\
     cmp        r0,#0xff\n\
     bls        LAB_0803fde0\n\
     mov        r0,#0xff\n\
LAB_0803fde0:\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803fde4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     lsl        r1,r1,#0x18\n\
     lsr        r3,r1,#0x18\n\
     add        r1,r3,#0x0\n\
     lsl        r2,r2,#0x18\n\
     lsr        r5,r2,#0x18\n\
     ldrb       r0,[r4,#0xa]\n\
     cmp        r5,#0x0\n\
     bne        LAB_0803fe26\n\
     cmp        r3,r0\n\
     beq        LAB_0803fe20\n\
     ldrh       r2,[r4,#0x8]\n\
     cmp        r0,r3\n\
     bcs        LAB_0803fe0c\n\
     ldr        r1,DAT_0803fe08\n\
     sub        r0,r3,r0\n\
     b          LAB_0803fe10\n\
DAT_0803fe08:\n\
     .4byte 0x087D5F90\n\
LAB_0803fe0c:\n\
     ldr        r1,DAT_0803fe1c\n\
     sub        r0,r0,r3\n\
LAB_0803fe10:\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     mul        r3,r2\n\
     b          LAB_0803fe64\n\
DAT_0803fe1c:\n\
     .4byte 0x087D6090\n\
LAB_0803fe20:\n\
     ldrh       r4,[r4,#0x8]\n\
     lsl        r3,r4,#0xc\n\
     b          LAB_0803fe64\n\
LAB_0803fe26:\n\
     cmp        r3,r0\n\
     bcc        LAB_0803fe44\n\
     ldr        r2,DAT_0803fe40\n\
     sub        r1,r3,r0\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r2\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r0,r1,r3\n\
     b          LAB_0803fe58\n\
DAT_0803fe40:\n\
     .4byte 0x087D5F90\n\
LAB_0803fe44:\n\
     ldr        r2,DAT_0803fe7c\n\
     sub        r1,r0,r1\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r2\n\
     ldrh       r1,[r1,#0x0]\n\
     sub        r0,r3,r1\n\
LAB_0803fe58:\n\
     mul        r0,r5\n\
     lsr        r0,r0,#0x8\n\
     add        r0,r3,r0\n\
     ldrh       r4,[r4,#0x8]\n\
     add        r3,r4,#0x0\n\
     mul        r3,r0\n\
LAB_0803fe64:\n\
     ldr        r0,DAT_0803fe80\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     add        r0,r3,#0x0\n\
     bl         __udivsi3\n\
     add        r3,r0,#0x0\n\
     lsl        r0,r3,#0x10\n\
     lsr        r0,r0,#0x10\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0803fe7c:\n\
     .4byte 0x087D6090\n\
DAT_0803fe80:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803fe84()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_0803feac\n\
     ldr        r0,[r0,#0x0]\n\
     add        r5,r0,#0x0\n\
     add        r5,#0xf4\n\
     ldr        r0,[r5,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fea6\n\
     ldrb       r4,[r5,#0x1a]\n\
     mov        r0,#0x0\n\
     strb       r0,[r5,#0x1a]\n\
     ldr        r0,[r5,#0x0]\n\
     ldr        r1,[r5,#0x10]\n\
     sub        r1,r1,r0\n\
     bl         fun_0803dfa0\n\
     strb       r4,[r5,#0x1a]\n\
LAB_0803fea6:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803feac:\n\
     .4byte 0x02027048\n\
    ");
}
__attribute__((naked)) void fun_0803feb0()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,DAT_0803ff10\n\
     ldr        r4,[r0,#0x0]\n\
     add        r4,#0xd0\n\
     bl         fun_0803e038\n\
     ldr        r1,DAT_0803ff14\n\
     mov        r0,#0x9a\n\
     strb       r0,[r1,#0x0]\n\
     add        r1,#0x39\n\
     ldr        r0,[r4,#0x14]\n\
     str        r0,[r1,#0x0]\n\
     add        r1,#0x4\n\
     ldr        r0,DAT_0803ff18\n\
     str        r0,[r1,#0x0]\n\
     add        r0,#0x24\n\
     mov        r3,#0x4\n\
     strh       r3,[r0,#0x0]\n\
     add        r0,#0x2\n\
     ldr        r1,DAT_0803ff1c\n\
     add        r2,r1,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_0803ff20\n\
     ldr        r0,[r4,#0x18]\n\
     str        r0,[r1,#0x0]\n\
     add        r1,#0x4\n\
     ldr        r0,DAT_0803ff24\n\
     str        r0,[r1,#0x0]\n\
     add        r0,#0x2c\n\
     strh       r3,[r0,#0x0]\n\
     add        r0,#0x2\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r2,DAT_0803ff28\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r1,#0xc0\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     sub        r2,#0x4\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r1,#0x80\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x0]\n\
     bl         fun_0803e018\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803ff10:\n\
     .4byte 0x02027048\n\
DAT_0803ff14:\n\
     .4byte 0x04000083\n\
DAT_0803ff18:\n\
     .4byte 0x040000A0\n\
DAT_0803ff1c:\n\
     .4byte 0x0000B660\n\
DAT_0803ff20:\n\
     .4byte 0x040000C8\n\
DAT_0803ff24:\n\
     .4byte 0x040000A4\n\
DAT_0803ff28:\n\
     .4byte 0x04000106\n\
    ");
}
__attribute__((naked)) void fun_0803ff2c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     cmp        r5,#0x3\n\
     bgt        LAB_0803ff4c\n\
     ldr        r2,DAT_0803ff48\n\
     ldr        r0,[r2,#0x0]\n\
     lsl        r1,r5,#0x1\n\
     add        r0,#0xac\n\
     add        r0,r0,r1\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_0803ff66\n\
.space 1\n\
.space 1\n\
DAT_0803ff48:\n\
     .4byte 0x02027048\n\
LAB_0803ff4c:\n\
     sub        r2,r5,#0x4\n\
     ldr        r4,DAT_0803ff88\n\
     ldr        r1,[r4,#0x0]\n\
     add        r1,#0xc8\n\
     ldr        r0,[r1,#0x0]\n\
     lsl        r2,r2,#0x6\n\
     add        r0,r2,r0\n\
     mov        r3,#0x0\n\
     strh       r3,[r0,#0x34]\n\
     ldr        r0,[r1,#0x0]\n\
     add        r2,r2,r0\n\
     strh       r3,[r2,#0x36]\n\
     add        r2,r4,#0x0\n\
LAB_0803ff66:\n\
     mov        r0,#0x0\n\
     str        r0,[r6,#0x0]\n\
     cmp        r5,#0x3\n\
     ble        LAB_0803ff90\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_0803ff8c\n\
     add        r2,r0,r1\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x8\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
     b          LAB_0803ffa2\n\
DAT_0803ff88:\n\
     .4byte 0x02027048\n\
DAT_0803ff8c:\n\
     .4byte 0xFFFFFF00\n\
LAB_0803ff90:\n\
     ldr        r1,[r2,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x8\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
LAB_0803ffa2:\n\
     mov        r0,#0x0\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_0803ffac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     add        r5,r0,#0x0\n\
     add        r7,r1,#0x0\n\
     ldr        r0,[r7,#0x0]\n\
     mov        r12,r0\n\
     cmp        r5,#0x3\n\
     bgt        LAB_0804000c\n\
     ldr        r3,DAT_0803ffe4\n\
     lsl        r0,r5,#0x3\n\
     add        r0,#0x8c\n\
     ldr        r4,[r3,#0x0]\n\
     add        r6,r4,r0\n\
     lsl        r2,r5,#0x2\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x10\n\
     add        r0,r0,r2\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x9\n\
     and        r1,r0\n\
     mov        r8,r3\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803ffe8\n\
     ldrh       r0,[r4,#0xe]\n\
     b          LAB_0803ffea\n\
.space 1\n\
.space 1\n\
DAT_0803ffe4:\n\
     .4byte 0x02027048\n\
LAB_0803ffe8:\n\
     ldrh       r0,[r4,#0xc]\n\
LAB_0803ffea:\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803fff0\n\
     add        r0,#0x1\n\
LAB_0803fff0:\n\
     mov        r1,r12\n\
     ldrb       r1,[r1,#0x1]\n\
     mul        r0,r1\n\
     lsr        r0,r0,#0x8\n\
     strb       r0,[r6,#0x7]\n\
     mov        r3,r8\n\
     ldr        r1,[r3,#0x0]\n\
     add        r1,#0x10\n\
     add        r1,r1,r2\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0804006a\n\
LAB_0804000c:\n\
     sub        r5,#0x4\n\
     ldr        r2,DAT_08040034\n\
     ldr        r3,[r2,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r5,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     add        r6,r0,#0x0\n\
     add        r6,#0x24\n\
     ldr        r0,[r0,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     and        r0,r1\n\
     mov        r8,r2\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040038\n\
     ldrh       r0,[r3,#0xe]\n\
     b          LAB_0804003a\n\
.space 1\n\
.space 1\n\
DAT_08040034:\n\
     .4byte 0x02027048\n\
LAB_08040038:\n\
     ldrh       r0,[r3,#0xc]\n\
LAB_0804003a:\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040040\n\
     add        r0,#0x1\n\
LAB_08040040:\n\
     mov        r1,r12\n\
     ldrb       r1,[r1,#0x1]\n\
     mul        r0,r1\n\
     lsr        r0,r0,#0x8\n\
     lsl        r2,r0,#0x1\n\
     strb       r2,[r6,#0x7]\n\
     lsl        r0,r2,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040056\n\
     add        r0,r2,#0x1\n\
     strb       r0,[r6,#0x7]\n\
LAB_08040056:\n\
     mov        r2,r8\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r5,#0x6\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r2,#0x80\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_0804006a:\n\
     ldr        r0,[r7,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r7,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0804007c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r3,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r6,[r5,#0x0]\n\
     cmp        r3,#0x3\n\
     bgt        LAB_080400a0\n\
     ldr        r1,DAT_0804009c\n\
     lsl        r0,r3,#0x2\n\
     add        r0,#0x10\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     lsl        r0,r3,#0x3\n\
     add        r0,#0x8c\n\
     add        r4,r1,r0\n\
     b          LAB_080400dc\n\
.space 1\n\
.space 1\n\
DAT_0804009c:\n\
     .4byte 0x02027048\n\
LAB_080400a0:\n\
     ldr        r0,DAT_080400f8\n\
     ldr        r1,[r0,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xcc\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r2,r3,#0x2\n\
     add        r0,r2,r0\n\
     sub        r0,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040100\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r2,r0\n\
     sub        r0,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040100\n\
     add        r0,r1,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r3,#0x6\n\
     ldr        r2,DAT_080400fc\n\
     add        r1,r1,r2\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     add        r2,r0,#0x0\n\
     add        r2,#0x38\n\
     add        r4,r0,#0x0\n\
     add        r4,#0x24\n\
LAB_080400dc:\n\
     ldrb       r0,[r6,#0x1]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040100\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x21\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040100\n\
     ldrb       r0,[r4,#0x6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040100\n\
     mov        r0,#0x0\n\
     b          LAB_0804010e\n\
.space 1\n\
.space 1\n\
DAT_080400f8:\n\
     .4byte 0x02027048\n\
DAT_080400fc:\n\
     .4byte 0xFFFFFF00\n\
LAB_08040100:\n\
     add        r0,r3,#0x0\n\
     bl         fun_0803e344\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x2\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
LAB_0804010e:\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08040114()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r5,[r4,#0x0]\n\
     ldrh       r0,[r4,#0xa]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080401c8\n\
     ldrh       r0,[r5,#0x2]\n\
     add        r7,r0,#0x0\n\
     cmp        r7,#0x0\n\
     bne        LAB_0804012c\n\
     b          LAB_08040248\n\
LAB_0804012c:\n\
     ldrb       r1,[r5,#0x1]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     add        r6,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_0804016c\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08040150\n\
     ldr        r0,DAT_0804014c\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     b          LAB_08040162\n\
.space 1\n\
.space 1\n\
DAT_0804014c:\n\
     .4byte 0x02027048\n\
LAB_08040150:\n\
     ldr        r0,DAT_080401bc\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080401c0\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
LAB_08040162:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040248\n\
LAB_0804016c:\n\
     mov        r0,#0x4\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_080401a8\n\
     cmp        r2,#0x3\n\
     ble        LAB_080401a8\n\
     ldr        r0,DAT_080401bc\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080401c0\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080401a8\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     sub        r0,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040248\n\
LAB_080401a8:\n\
     mov        r0,#0x2\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_080401c4\n\
     ldrh       r0,[r5,#0x2]\n\
     bl         fun_0803dfe8\n\
     strh       r0,[r4,#0xa]\n\
     b          LAB_0804025c\n\
.space 1\n\
.space 1\n\
DAT_080401bc:\n\
     .4byte 0x02027048\n\
DAT_080401c0:\n\
     .4byte 0xFFFFFF00\n\
LAB_080401c4:\n\
     strh       r7,[r4,#0xa]\n\
     b          LAB_0804025c\n\
LAB_080401c8:\n\
     ldr        r1,DAT_080401e0\n\
     ldrh       r3,[r5,#0x2]\n\
     cmp        r3,r1\n\
     beq        LAB_080401e4\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0xa]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080401e4\n\
     add        r0,r5,#0x4\n\
     b          LAB_0804024c\n\
.space 1\n\
.space 1\n\
DAT_080401e0:\n\
     .4byte 0x0000FFFF\n\
LAB_080401e4:\n\
     ldrb       r1,[r5,#0x1]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     add        r6,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040224\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08040208\n\
     ldr        r0,DAT_08040204\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     b          LAB_0804021a\n\
.space 1\n\
.space 1\n\
DAT_08040204:\n\
     .4byte 0x02027048\n\
LAB_08040208:\n\
     ldr        r0,DAT_08040254\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08040258\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
LAB_0804021a:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040244\n\
LAB_08040224:\n\
     mov        r0,#0x4\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_0804025c\n\
     cmp        r2,#0x3\n\
     ble        LAB_0804025c\n\
     ldr        r0,DAT_08040254\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     sub        r0,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0804025c\n\
LAB_08040244:\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0xa]\n\
LAB_08040248:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x4\n\
LAB_0804024c:\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     b          LAB_0804025e\n\
.space 1\n\
.space 1\n\
DAT_08040254:\n\
     .4byte 0x02027048\n\
DAT_08040258:\n\
     .4byte 0xFFFFFF00\n\
LAB_0804025c:\n\
     mov        r0,#0x0\n\
LAB_0804025e:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08040264()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r2,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r5,[r4,#0x0]\n\
     ldrh       r0,[r4,#0x8]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0804031a\n\
     ldrh       r0,[r5,#0x2]\n\
     add        r7,r0,#0x0\n\
     cmp        r7,#0x0\n\
     beq        LAB_080402f4\n\
     ldrb       r1,[r5,#0x1]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     add        r6,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_080402b8\n\
     cmp        r2,#0x3\n\
     bgt        LAB_0804029c\n\
     ldr        r0,DAT_08040298\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     b          LAB_080402ae\n\
DAT_08040298:\n\
     .4byte 0x02027048\n\
LAB_0804029c:\n\
     ldr        r0,DAT_080402fc\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08040300\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
LAB_080402ae:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080402f4\n\
LAB_080402b8:\n\
     mov        r0,#0x4\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040304\n\
     cmp        r2,#0x3\n\
     ble        LAB_08040304\n\
     ldr        r0,DAT_080402fc\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08040300\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040304\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     sub        r0,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040304\n\
LAB_080402f4:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x6\n\
     b          LAB_080403b0\n\
.space 1\n\
.space 1\n\
DAT_080402fc:\n\
     .4byte 0x02027048\n\
DAT_08040300:\n\
     .4byte 0xFFFFFF00\n\
LAB_08040304:\n\
     mov        r0,#0x2\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040316\n\
     ldrh       r0,[r5,#0x2]\n\
     bl         fun_0803dfe8\n\
     strh       r0,[r4,#0x8]\n\
     b          LAB_080403a8\n\
LAB_08040316:\n\
     strh       r7,[r4,#0x8]\n\
     b          LAB_080403a8\n\
LAB_0804031a:\n\
     ldr        r1,DAT_08040330\n\
     ldrh       r3,[r5,#0x2]\n\
     cmp        r3,r1\n\
     beq        LAB_08040334\n\
     sub        r0,#0x1\n\
     strh       r0,[r4,#0x8]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040334\n\
     add        r0,r5,#0x6\n\
     b          LAB_080403b0\n\
DAT_08040330:\n\
     .4byte 0x0000FFFF\n\
LAB_08040334:\n\
     ldrb       r1,[r5,#0x1]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     add        r6,r1,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040374\n\
     cmp        r2,#0x3\n\
     bgt        LAB_08040358\n\
     ldr        r0,DAT_08040354\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r1,r2,#0x2\n\
     add        r0,#0x10\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     b          LAB_0804036a\n\
.space 1\n\
.space 1\n\
DAT_08040354:\n\
     .4byte 0x02027048\n\
LAB_08040358:\n\
     ldr        r0,DAT_080403a0\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc8\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x6\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_080403a4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
LAB_0804036a:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040394\n\
LAB_08040374:\n\
     mov        r0,#0x4\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_080403a8\n\
     cmp        r2,#0x3\n\
     ble        LAB_080403a8\n\
     ldr        r0,DAT_080403a0\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     sub        r0,#0x10\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080403a8\n\
LAB_08040394:\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x6\n\
     b          LAB_080403b0\n\
.space 1\n\
.space 1\n\
DAT_080403a0:\n\
     .4byte 0x02027048\n\
DAT_080403a4:\n\
     .4byte 0xFFFFFF00\n\
LAB_080403a8:\n\
     mov        r3,#0x4\n\
     ldrsh      r1,[r5,r3]\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,r0,r1\n\
LAB_080403b0:\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080403bc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r3,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     ldr        r5,[r4,#0x0]\n\
     cmp        r3,#0x2\n\
     bgt        LAB_080403f0\n\
     ldr        r0,DAT_080403ec\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r0,r3,#0x3\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r2,r0\n\
     ldrh       r5,[r5,#0x2]\n\
     ldrh       r6,[r0,#0x20]\n\
     sub        r1,r5,r6\n\
     strh       r1,[r0,#0x22]\n\
     lsl        r0,r3,#0x2\n\
     add        r2,#0x10\n\
     add        r2,r2,r0\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x0]\n\
     b          LAB_08040414\n\
DAT_080403ec:\n\
     .4byte 0x02027048\n\
LAB_080403f0:\n\
     cmp        r3,#0x3\n\
     ble        LAB_08040414\n\
     ldr        r0,DAT_08040424\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r3,#0x6\n\
     ldr        r2,DAT_08040428\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r1,r1,r0\n\
     ldrh       r5,[r5,#0x2]\n\
     ldrh       r6,[r1,#0x0]\n\
     sub        r0,r5,r6\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r1,#0x38]\n\
     mov        r2,#0x40\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x38]\n\
LAB_08040414:\n\
     ldr        r0,[r4,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08040424:\n\
     .4byte 0x02027048\n\
DAT_08040428:\n\
     .4byte 0xFFFFFF00\n\
    ");
}
__attribute__((naked)) void fun_0804042c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r3,r0,#0x0\n\
     add        r5,r1,#0x0\n\
     ldr        r4,[r5,#0x0]\n\
     cmp        r3,#0x2\n\
     bgt        LAB_08040484\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r4,#0x1]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040458\n\
     ldr        r2,DAT_08040454\n\
     ldr        r1,[r2,#0x0]\n\
     lsl        r0,r3,#0x3\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r4,#0x2]\n\
     b          LAB_0804046a\n\
.space 1\n\
.space 1\n\
DAT_08040454:\n\
     .4byte 0x02027048\n\
LAB_08040458:\n\
     ldr        r2,DAT_08040480\n\
     ldr        r1,[r2,#0x0]\n\
     lsl        r0,r3,#0x3\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     ldrh       r6,[r1,#0x22]\n\
     ldrh       r4,[r4,#0x2]\n\
     add        r0,r6,r4\n\
LAB_0804046a:\n\
     strh       r0,[r1,#0x22]\n\
     ldr        r1,[r2,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x40\n\
     orr        r0,r2\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_080404c0\n\
.space 1\n\
.space 1\n\
DAT_08040480:\n\
     .4byte 0x02027048\n\
LAB_08040484:\n\
     cmp        r3,#0x3\n\
     ble        LAB_080404c0\n\
     ldr        r0,DAT_080404a8\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0xc8\n\
     lsl        r0,r3,#0x6\n\
     ldr        r2,DAT_080404ac\n\
     add        r0,r0,r2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r2,r1,r0\n\
     mov        r0,#0x1\n\
     ldrb       r6,[r4,#0x1]\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     beq        LAB_080404b0\n\
     ldrh       r0,[r4,#0x2]\n\
     b          LAB_080404b6\n\
.space 1\n\
.space 1\n\
DAT_080404a8:\n\
     .4byte 0x02027048\n\
DAT_080404ac:\n\
     .4byte 0xFFFFFF00\n\
LAB_080404b0:\n\
     ldrh       r1,[r2,#0x2]\n\
     ldrh       r4,[r4,#0x2]\n\
     add        r0,r1,r4\n\
LAB_080404b6:\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r2,#0x38]\n\
     mov        r1,#0x40\n\
     orr        r0,r1\n\
     str        r0,[r2,#0x38]\n\
LAB_080404c0:\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x4\n\
     str        r0,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_080404d0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r6,r0,#0x0\n\
     mov        r9,r2\n\
     mov        r10,r3\n\
     ldr        r3,DAT_08040548\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r12,r0\n\
     add        r0,#0xc8\n\
     lsl        r2,r6,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r7,r0,r2\n\
     mov        r2,r12\n\
     add        r2,#0xc0\n\
     lsl        r0,r6,#0x3\n\
     sub        r0,r0,r6\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,[r2,#0x0]\n\
     add        r4,r2,r0\n\
     mov        r0,r12\n\
     add        r0,#0xc4\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r0,r6,#0x2\n\
     add        r0,r0,r2\n\
     mov        r2,#0x0\n\
     mov        r8,r2\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,[r7,#0x38]\n\
     ldr        r2,DAT_0804054c\n\
     and        r0,r2\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x5\n\
     orr        r0,r2\n\
     str        r0,[r7,#0x38]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r12\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x1c]\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r2,r0\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r2,r2,r0\n\
     str        r2,[r4,#0x0]\n\
     add        r1,r2,#0x0\n\
     add        r1,#0x10\n\
     str        r1,[r4,#0x4]\n\
     ldr        r5,[r2,#0x0]\n\
     add        r0,r1,r5\n\
     str        r0,[r4,#0x8]\n\
     ldr        r2,[r2,#0x4]\n\
     cmp        r2,#0x0\n\
     bge        LAB_08040550\n\
     mov        r0,r8\n\
     str        r0,[r4,#0xc]\n\
     b          LAB_08040556\n\
DAT_08040548:\n\
     .4byte 0x02027048\n\
DAT_0804054c:\n\
     .4byte 0xFFFFB3FF\n\
LAB_08040550:\n\
     add        r0,r1,r2\n\
     str        r0,[r4,#0xc]\n\
     sub        r0,r5,r2\n\
LAB_08040556:\n\
     str        r0,[r4,#0x10]\n\
     mov        r1,r9\n\
     cmp        r1,#0x0\n\
     beq        LAB_0804056a\n\
     ldr        r0,[r4,#0x4]\n\
     add        r2,r0,r1\n\
     ldr        r0,[r4,#0x8]\n\
     cmp        r2,r0\n\
     bcs        LAB_0804056a\n\
     str        r2,[r4,#0x4]\n\
LAB_0804056a:\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     strh       r1,[r4,#0x16]\n\
     strb       r0,[r4,#0x1a]\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x3d\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040588\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r2,#0x87\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     b          LAB_0804058a\n\
LAB_08040588:\n\
     mov        r0,#0x0\n\
LAB_0804058a:\n\
     strb       r0,[r4,#0x1b]\n\
     add        r0,r6,#0x0\n\
     bl         fun_0803efb8\n\
     mov        r0,r10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080405a0\n\
     add        r0,r6,#0x0\n\
     bl         fun_0803f680\n\
     b          LAB_080405b0\n\
LAB_080405a0:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x5\n\
     strh       r0,[r4,#0x14]\n\
     ldr        r0,[r7,#0x38]\n\
     mov        r1,#0x41\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     str        r0,[r7,#0x38]\n\
LAB_080405b0:\n\
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
__attribute__((naked)) void fun_080405c0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     add        r3,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     ldr        r5,[r6,#0x0]\n\
     cmp        r3,#0x2\n\
     bne        LAB_080405f8\n\
     ldr        r0,DAT_080405f4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r0,[r2,#0x1c]\n\
     ldrh       r5,[r5,#0x2]\n\
     lsl        r1,r5,#0x2\n\
     add        r0,r2,r0\n\
     add        r1,r1,r0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,r2,r0\n\
     ldrb       r1,[r0,#0xb]\n\
     cmp        r1,#0x1\n\
     bne        LAB_08040656\n\
     bl         fun_0803f550\n\
     b          LAB_08040656\n\
.space 1\n\
.space 1\n\
DAT_080405f4:\n\
     .4byte 0x02027048\n\
LAB_080405f8:\n\
     cmp        r3,#0x3\n\
     ble        LAB_08040656\n\
     ldrh       r0,[r5,#0x6]\n\
     lsl        r4,r0,#0x10\n\
     ldrh       r1,[r5,#0x4]\n\
     orr        r4,r1\n\
     ldrb       r7,[r5,#0x1]\n\
     cmp        r4,#0x0\n\
     beq        LAB_08040648\n\
     ldr        r0,DAT_0804063c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x8c\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldrb       r2,[r0,#0x8]\n\
     cmp        r2,#0x0\n\
     beq        LAB_0804062c\n\
     add        r2,#0x1\n\
LAB_0804062c:\n\
     mov        r0,#0x80\n\
     and        r0,r7\n\
     cmp        r0,#0x0\n\
     bne        LAB_08040640\n\
     add        r0,r4,#0x0\n\
     mul        r0,r2\n\
     lsr        r4,r0,#0x7\n\
     b          LAB_08040648\n\
DAT_0804063c:\n\
     .4byte 0x02027048\n\
LAB_08040640:\n\
     add        r0,r4,#0x0\n\
     mul        r0,r2\n\
     lsr        r0,r0,#0x7\n\
     sub        r4,r4,r0\n\
LAB_08040648:\n\
     sub        r0,r3,#0x4\n\
     ldrh       r1,[r5,#0x2]\n\
     mov        r3,#0x1\n\
     and        r3,r7\n\
     add        r2,r4,#0x0\n\
     bl         fun_080404d0\n\
LAB_08040656:\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0x8\n\
     str        r0,[r6,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08040664()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r2,r0,#0x0\n\
     mov        r9,r1\n\
     ldr        r4,[r1,#0x0]\n\
     cmp        r2,#0x3\n\
     ble        LAB_0804073c\n\
     sub        r2,#0x4\n\
     ldr        r0,DAT_080406e4\n\
     ldr        r3,[r0,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r2,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x38]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x5\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0804073c\n\
     add        r1,r3,#0x0\n\
     add        r1,#0xc0\n\
     lsl        r0,r2,#0x3\n\
     sub        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r6,r1,r0\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x10\n\
     add        r1,r1,r0\n\
     mov        r12,r1\n\
     ldrh       r1,[r4,#0x8]\n\
     lsl        r3,r1,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     orr        r3,r1\n\
     ldrh       r1,[r4,#0x4]\n\
     lsl        r2,r1,#0x10\n\
     ldrh       r1,[r4,#0x2]\n\
     orr        r2,r1\n\
     ldr        r1,[r0,#0x0]\n\
     cmp        r2,r1\n\
     bcc        LAB_080406c0\n\
     mov        r2,#0x0\n\
LAB_080406c0:\n\
     add        r0,r2,r3\n\
     cmp        r0,r1\n\
     bcc        LAB_080406ce\n\
     cmp        r2,#0x0\n\
     beq        LAB_080406cc\n\
     sub        r2,#0x1\n\
LAB_080406cc:\n\
     sub        r3,r1,r2\n\
LAB_080406ce:\n\
     ldr        r0,[r6,#0xc]\n\
     mov        r8,r0\n\
     ldrb       r1,[r4,#0x1]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080406e8\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r7,[r0,#0x0]\n\
     b          LAB_080406ea\n\
.space 1\n\
.space 1\n\
DAT_080406e4:\n\
     .4byte 0x02027048\n\
LAB_080406e8:\n\
     ldr        r7,[r6,#0x10]\n\
LAB_080406ea:\n\
     mov        r0,#0x7f\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0804070e\n\
     mov        r1,r12\n\
     add        r5,r1,r2\n\
     cmp        r3,#0x0\n\
     bne        LAB_08040702\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     add        r4,r1,r0\n\
     b          LAB_08040704\n\
LAB_08040702:\n\
     add        r4,r5,r3\n\
LAB_08040704:\n\
     cmp        r7,#0x0\n\
     beq        LAB_0804072a\n\
     mov        r8,r5\n\
     sub        r7,r4,r5\n\
     b          LAB_0804072a\n\
LAB_0804070e:\n\
     ldr        r0,[r6,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r12\n\
     add        r1,r2,#0x1\n\
     sub        r5,r0,r1\n\
     sub        r4,r5,r3\n\
     cmp        r3,#0x0\n\
     bne        LAB_08040722\n\
     mov        r4,r12\n\
     sub        r4,#0x1\n\
LAB_08040722:\n\
     cmp        r7,#0x0\n\
     beq        LAB_0804072a\n\
     mov        r8,r5\n\
     sub        r7,r5,r4\n\
LAB_0804072a:\n\
     bl         fun_0803e038\n\
     str        r5,[r6,#0x4]\n\
     str        r4,[r6,#0x8]\n\
     mov        r0,r8\n\
     str        r0,[r6,#0xc]\n\
     str        r7,[r6,#0x10]\n\
     bl         fun_0803e018\n\
LAB_0804073c:\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xa\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08040754()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r5,r0,#0x0\n\
     mov        r8,r1\n\
     ldr        r3,[r1,#0x0]\n\
     cmp        r5,#0x3\n\
     ble        LAB_08040856\n\
     sub        r5,#0x4\n\
     ldr        r0,DAT_08040804\n\
     mov        r9,r0\n\
     ldr        r2,[r0,#0x0]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc8\n\
     lsl        r1,r5,#0x6\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,r0,r1\n\
     mov        r12,r0\n\
     add        r1,r2,#0x0\n\
     add        r1,#0xc0\n\
     lsl        r0,r5,#0x3\n\
     sub        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,[r1,#0x0]\n\
     add        r4,r1,r0\n\
     mov        r0,r12\n\
     ldr        r1,[r0,#0x38]\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x3\n\
     add        r6,r1,#0x0\n\
     and        r6,r7\n\
     cmp        r6,#0x0\n\
     bne        LAB_08040822\n\
     ldr        r0,DAT_08040808\n\
     and        r1,r0\n\
     orr        r1,r7\n\
     mov        r0,r12\n\
     str        r1,[r0,#0x38]\n\
     add        r0,r2,#0x0\n\
     add        r0,#0xc4\n\
     ldr        r1,[r0,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r1\n\
     str        r6,[r0,#0x0]\n\
     mov        r1,r12\n\
     add        r1,#0x2c\n\
     ldrb       r0,[r3,#0x2]\n\
     strb       r0,[r1,#0x4]\n\
     ldrb       r0,[r3,#0x3]\n\
     strb       r0,[r1,#0x5]\n\
     ldrh       r0,[r3,#0x4]\n\
     mov        r2,#0x0\n\
     strh       r0,[r1,#0x2]\n\
     ldrb       r3,[r3,#0x1]\n\
     lsl        r0,r3,#0x8\n\
     mov        r3,r12\n\
     strh       r0,[r3,#0x2c]\n\
     ldr        r0,DAT_0804080c\n\
     str        r0,[r4,#0x0]\n\
     ldrb       r1,[r1,#0x4]\n\
     lsl        r1,r1,#0x18\n\
     asr        r1,r1,#0x18\n\
     add        r1,#0x10\n\
     add        r1,r1,r0\n\
     str        r1,[r4,#0xc]\n\
     str        r1,[r4,#0x4]\n\
     ldr        r0,[r0,#0x0]\n\
     lsr        r0,r0,#0x1\n\
     add        r0,r1,r0\n\
     str        r0,[r4,#0x8]\n\
     sub        r0,r0,r1\n\
     str        r0,[r4,#0x10]\n\
     strh       r6,[r4,#0x16]\n\
     strb       r2,[r4,#0x1a]\n\
     mov        r0,r12\n\
     add        r0,#0x3d\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08040810\n\
     mov        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r3,#0x87\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r0,r3\n\
     ldrb       r0,[r0,#0x0]\n\
     b          LAB_08040812\n\
.space 1\n\
.space 1\n\
DAT_08040804:\n\
     .4byte 0x02027048\n\
DAT_08040808:\n\
     .4byte 0xFFFFE7FF\n\
DAT_0804080c:\n\
     .4byte 0x087D5F00\n\
LAB_08040810:\n\
     mov        r0,#0x0\n\
LAB_08040812:\n\
     strb       r0,[r4,#0x1b]\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803efb8\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803f680\n\
     b          LAB_08040856\n\
LAB_08040822:\n\
     mov        r1,r12\n\
     add        r1,#0x2c\n\
     ldrb       r0,[r3,#0x2]\n\
     strb       r0,[r1,#0x4]\n\
     ldrb       r0,[r3,#0x3]\n\
     strb       r0,[r1,#0x5]\n\
     ldrh       r0,[r3,#0x4]\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,r12\n\
     mov        r3,#0x2c\n\
     ldrsh      r2,[r0,r3]\n\
     mov        r0,#0x5\n\
     ldrsb      r0,[r1,r0]\n\
     lsl        r0,r0,#0x8\n\
     cmp        r2,r0\n\
     ble        LAB_08040848\n\
     mov        r1,r12\n\
     strh       r0,[r1,#0x2c]\n\
     b          LAB_08040856\n\
LAB_08040848:\n\
     mov        r0,#0x4\n\
     ldrsb      r0,[r1,r0]\n\
     lsl        r0,r0,#0x8\n\
     cmp        r2,r0\n\
     bge        LAB_08040856\n\
     mov        r3,r12\n\
     strh       r0,[r3,#0x2c]\n\
LAB_08040856:\n\
     mov        r1,r8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x6\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
