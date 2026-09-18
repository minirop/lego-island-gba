__attribute__((naked)) void fun_0801f684()
{
    asm("\n\
     ldr        r3,DAT_0801f6ac\n\
     ldrb       r1,[r3,#0x1]\n\
     lsl        r0,r1,#0x19\n\
     cmp        r0,#0x0\n\
     bge        LAB_0801f6b8\n\
     ldr        r1,DAT_0801f6b0\n\
     mov        r2,#0x88\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0801f6b4\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x7f\n\
     ldrb       r1,[r3,#0x1]\n\
     and        r0,r1\n\
     b          LAB_0801f6ce\n\
.space 1\n\
.space 1\n\
DAT_0801f6ac:\n\
     .4byte 0x0200EE50\n\
DAT_0801f6b0:\n\
     .4byte 0x0200ED24\n\
DAT_0801f6b4:\n\
     .4byte 0x0200EDE0\n\
LAB_0801f6b8:\n\
     ldr        r0,DAT_0801f6e0\n\
     mov        r2,#0x28\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r1,r2,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,DAT_0801f6e4\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     mov        r0,#0x80\n\
     ldrb       r1,[r3,#0x1]\n\
     orr        r0,r1\n\
LAB_0801f6ce:\n\
     strb       r0,[r3,#0x1]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x32\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801f6e8\n\
     mov        r0,#0xb4\n\
     strh       r0,[r1,#0x0]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_0801f6e0:\n\
     .4byte 0x0200ED24\n\
DAT_0801f6e4:\n\
     .4byte 0x0200EDE0\n\
DAT_0801f6e8:\n\
     .4byte 0x0200ED4C\n\
    ");
}
__attribute__((naked)) void fun_0801f6ec()
{
    asm("\n\
     ldr        r2,DAT_0801f704\n\
     ldr        r0,DAT_0801f708\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0801f70c\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0801f710\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0801f704:\n\
     .4byte 0x0200EE80\n\
DAT_0801f708:\n\
     .4byte 0x084C6F0C\n\
DAT_0801f70c:\n\
     .4byte 0x0200EE70\n\
DAT_0801f710:\n\
     .4byte 0x084C6EA8\n\
    ");
}
__attribute__((naked)) void fun_0801f714()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_0801f75c\n\
     ldr        r0,DAT_0801f760\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801f764\n\
     str        r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801f768\n\
     str        r1,[r0,#0x0]\n\
     ldr        r3,DAT_0801f76c\n\
     str        r3,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     add        r1,#0x48\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bcs        LAB_0801f754\n\
     add        r6,r3,#0x0\n\
     ldr        r5,DAT_0801f770\n\
     mov        r3,#0x0\n\
     add        r4,r0,#0x0\n\
LAB_0801f73c:\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r6\n\
     lsl        r1,r2,#0x5\n\
     add        r1,r1,r5\n\
     str        r1,[r0,#0x0]\n\
     strh       r3,[r0,#0x4]\n\
     strh       r3,[r0,#0x6]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,r4\n\
     bcc        LAB_0801f73c\n\
LAB_0801f754:\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801f75c:\n\
     .4byte 0x0200EE90\n\
DAT_0801f760:\n\
     .4byte 0x084EFA5C\n\
DAT_0801f764:\n\
     .4byte 0x0200EEA0\n\
DAT_0801f768:\n\
     .4byte 0x084EF9F8\n\
DAT_0801f76c:\n\
     .4byte 0x0200EE98\n\
DAT_0801f770:\n\
     .4byte 0x084EF924\n\
    ");
}
__attribute__((naked)) void fun_0801f774()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r6,DAT_0801f7e0\n\
     add        r0,r6,#0x0\n\
     bl         fun_08003998\n\
     ldr        r5,DAT_0801f7e4\n\
     str        r0,[r5,#0x14]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x10\n\
     bl         fun_08003998\n\
     str        r0,[r5,#0x18]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x50\n\
     bl         fun_08003998\n\
     ldr        r4,DAT_0801f7e8\n\
     str        r0,[r4,#0x14]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x60\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0x18]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x30\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0xc]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x40\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0x10]\n\
     mov        r0,#0x0\n\
     strh       r0,[r5,#0x0]\n\
     mov        r0,#0x20\n\
     str        r0,[r5,#0x8]\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r5,#0x14]\n\
     mov        r1,#0x2\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r5,#0x18]\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x14]\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x18]\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r1,[r0,#0x6]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801f7e0:\n\
     .4byte 0x084FBDCC\n\
DAT_0801f7e4:\n\
     .4byte 0x0200F0D0\n\
DAT_0801f7e8:\n\
     .4byte 0x0200EED0\n\
    ");
}
__attribute__((naked)) void fun_0801f7ec()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     sub        sp,#0xc\n\
     ldr        r0,DAT_0801fa60\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801f80c\n\
     bl         fun_0800117c\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     ldr        r1,DAT_0801fa64\n\
     mov        r0,#0x3\n\
     strb       r0,[r1,#0x0]\n\
LAB_0801f80c:\n\
     ldr        r0,DAT_0801fa68\n\
     mov        r1,#0x0\n\
     mov        r2,#0x10\n\
     bl         memset\n\
     add        r0,sp,#0x8\n\
     mov        r4,#0x0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_0801fa6c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801fa70\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r0,sp,#0x8\n\
     strh       r4,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_0801fa74\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0801fa78\n\
     bl         fun_08001170\n\
     ldr        r0,PTR_DAT_0801fa7c\n\
     bl         fun_08039e64\n\
     mov        r0,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_08004bcc\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     mov        r0,#0x2\n\
     bl         fun_08004670\n\
     bl         fun_08020e14\n\
     bl         fun_0801fc4c\n\
     bl         fun_0801f774\n\
     bl         fun_08002fe4\n\
     ldr        r0,PTR_DAT_0801fa80\n\
     mov        r4,#0x0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fa84\n\
     mov        r0,#0x96\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801fa88\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fa8c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fa90\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801fa94\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fa98\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fa9c\n\
     mov        r0,#0x78\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801faa0\n\
     mov        r0,#0x50\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801faa4\n\
     mov        r2,#0xa0\n\
     lsl        r2,r2,#0x1\n\
     str        r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801faa8\n\
     mov        r0,#0xa\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801faac\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fab0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fab4\n\
     mov        r0,#0x80\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801fab8\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fabc\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fac0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fac4\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fac8\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801facc\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fad0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fad4\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fad8\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fadc\n\
     mov        r0,#0x6\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801fae0\n\
     mov        r1,#0x1\n\
     mov        r8,r1\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fae4\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fae8\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801faec\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801faf0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801faf4\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801faf8\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fafc\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb00\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb04\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb08\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb0c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb10\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb14\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb18\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb1c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb20\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb24\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb28\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb2c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb30\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb34\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb38\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb3c\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fb40\n\
     mov        r0,#0xe1\n\
     lsl        r0,r0,#0x5\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb44\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb48\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fb4c\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x6\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb50\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb54\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb58\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb5c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb60\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb64\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb68\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb6c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb70\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb74\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb78\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb7c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb80\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb84\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb88\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb8c\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb90\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb94\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb98\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fb9c\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fba0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fba4\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0801fba8\n\
     str        r4,[r0,#0x0]\n\
     str        r4,[r0,#0x8]\n\
     str        r4,[r0,#0xc]\n\
     ldr        r6,PTR_DAT_0801fbac\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x5\n\
     bl         fun_08039bb4\n\
     add        r2,r0,#0x0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[r6,#0x0]\n\
     mov        r5,#0x1\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     mov        r0,#0x1\n\
     mov        r1,#0x1\n\
     add        r3,r5,#0x0\n\
     bl         fun_080059c8\n\
     ldr        r2,[r6,#0x0]\n\
     str        r4,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     mov        r0,#0x2\n\
     mov        r1,#0x1\n\
     add        r3,r5,#0x0\n\
     bl         fun_080059c8\n\
     ldr        r1,DAT_0801fbb0\n\
     ldr        r2,DAT_0801fbb4\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r0,DAT_0801fbb8\n\
     bl         fun_08003998\n\
     ldr        r4,DAT_0801fbbc\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0x28\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x7c\n\
     strh       r1,[r0,#0x4]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x10]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_0800482c\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,r8\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x8\n\
     mov        r1,#0x1\n\
     mov        r2,#0x1\n\
     mov        r3,#0x1\n\
     bl         fun_080048b4\n\
     mov        r0,#0x0\n\
     add        sp,#0xc\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0801fa60:\n\
     .4byte 0x02005750\n\
DAT_0801fa64:\n\
     .4byte 0x02005760\n\
DAT_0801fa68:\n\
     .4byte 0x0200EF10\n\
DAT_0801fa6c:\n\
     .4byte 0x040000D4\n\
DAT_0801fa70:\n\
     .4byte 0x8100C000\n\
DAT_0801fa74:\n\
     .4byte 0x81000200\n\
DAT_0801fa78:\n\
     .4byte 0x0801FBC1\n\
PTR_DAT_0801fa7c:\n\
     .4byte       DAT_0200eea0\n\
PTR_DAT_0801fa80:\n\
     .4byte       DAT_0200f0f0\n\
PTR_DAT_0801fa84:\n\
     .4byte       DAT_0200f100\n\
PTR_DAT_0801fa88:\n\
     .4byte       DAT_0200effc\n\
PTR_DAT_0801fa8c:\n\
     .4byte       DAT_0200f0f8\n\
PTR_DAT_0801fa90:\n\
     .4byte       DAT_0200f074\n\
PTR_DAT_0801fa94:\n\
     .4byte       DAT_0200efd0\n\
PTR_DAT_0801fa98:\n\
     .4byte       DAT_0200f104\n\
PTR_DAT_0801fa9c:\n\
     .4byte       DAT_0200f070\n\
PTR_DAT_0801faa0:\n\
     .4byte       DAT_0200f0f4\n\
PTR_DAT_0801faa4:\n\
     .4byte       DAT_0200f140\n\
PTR_DAT_0801faa8:\n\
     .4byte       DAT_0200f0b8\n\
PTR_DAT_0801faac:\n\
     .4byte       DAT_0200efb0\n\
PTR_DAT_0801fab0:\n\
     .4byte       DAT_0200f0a0\n\
PTR_DAT_0801fab4:\n\
     .4byte       DAT_0200f11c\n\
PTR_DAT_0801fab8:\n\
     .4byte       DAT_0200efe4\n\
PTR_DAT_0801fabc:\n\
     .4byte       DAT_0200f0fc\n\
PTR_DAT_0801fac0:\n\
     .4byte       DAT_0200ef20\n\
PTR_DAT_0801fac4:\n\
     .4byte       DAT_0200f0b4\n\
PTR_DAT_0801fac8:\n\
     .4byte       DAT_0200f0c0\n\
PTR_DAT_0801facc:\n\
     .4byte       DAT_0200efe8\n\
PTR_DAT_0801fad0:\n\
     .4byte       DAT_0200eff4\n\
PTR_DAT_0801fad4:\n\
     .4byte       DAT_0200ef04\n\
PTR_DAT_0801fad8:\n\
     .4byte       DAT_0200f098\n\
PTR_DAT_0801fadc:\n\
     .4byte       DAT_0200eff8\n\
PTR_DAT_0801fae0:\n\
     .4byte       DAT_0200efcc\n\
PTR_DAT_0801fae4:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_0801fae8:\n\
     .4byte       DAT_0200f108\n\
PTR_DAT_0801faec:\n\
     .4byte       DAT_0200eeec\n\
PTR_DAT_0801faf0:\n\
     .4byte       DAT_0200f128\n\
PTR_DAT_0801faf4:\n\
     .4byte       DAT_0200f118\n\
PTR_DAT_0801faf8:\n\
     .4byte       DAT_0200f09c\n\
PTR_DAT_0801fafc:\n\
     .4byte       DAT_0200f0ec\n\
PTR_DAT_0801fb00:\n\
     .4byte       DAT_0200f0c8\n\
PTR_DAT_0801fb04:\n\
     .4byte       DAT_0200eeb8\n\
PTR_DAT_0801fb08:\n\
     .4byte       DAT_0200f130\n\
PTR_DAT_0801fb0c:\n\
     .4byte       DAT_0200f0a8\n\
PTR_DAT_0801fb10:\n\
     .4byte       DAT_0200f094\n\
PTR_DAT_0801fb14:\n\
     .4byte       DAT_0200f120\n\
PTR_DAT_0801fb18:\n\
     .4byte       DAT_0200f084\n\
PTR_DAT_0801fb1c:\n\
     .4byte       DAT_0200f064\n\
PTR_DAT_0801fb20:\n\
     .4byte       DAT_0200eff0\n\
PTR_DAT_0801fb24:\n\
     .4byte       DAT_0200efb8\n\
PTR_DAT_0801fb28:\n\
     .4byte       DAT_0200eec0\n\
PTR_DAT_0801fb2c:\n\
     .4byte       DAT_0200f07c\n\
PTR_DAT_0801fb30:\n\
     .4byte       DAT_0200f13c\n\
PTR_DAT_0801fb34:\n\
     .4byte       DAT_0200f0b0\n\
PTR_DAT_0801fb38:\n\
     .4byte       DAT_0200f078\n\
PTR_DAT_0801fb3c:\n\
     .4byte       DAT_0200efec\n\
PTR_DAT_0801fb40:\n\
     .4byte       DAT_0200efbc\n\
PTR_DAT_0801fb44:\n\
     .4byte       DAT_0200f090\n\
PTR_DAT_0801fb48:\n\
     .4byte       DAT_0200f0a4\n\
PTR_DAT_0801fb4c:\n\
     .4byte       DAT_0200f114\n\
PTR_DAT_0801fb50:\n\
     .4byte       DAT_0200f12c\n\
PTR_DAT_0801fb54:\n\
     .4byte       DAT_0200f080\n\
PTR_DAT_0801fb58:\n\
     .4byte       DAT_0200f088\n\
PTR_DAT_0801fb5c:\n\
     .4byte       DAT_0200efb4\n\
PTR_DAT_0801fb60:\n\
     .4byte       DAT_0200ef00\n\
PTR_DAT_0801fb64:\n\
     .4byte       DAT_0200f06c\n\
PTR_DAT_0801fb68:\n\
     .4byte       DAT_0200f068\n\
PTR_DAT_0801fb6c:\n\
     .4byte       DAT_0200f134\n\
PTR_DAT_0801fb70:\n\
     .4byte       DAT_0200f138\n\
PTR_DAT_0801fb74:\n\
     .4byte       DAT_0200efc0\n\
PTR_DAT_0801fb78:\n\
     .4byte       DAT_0200f0bc\n\
PTR_DAT_0801fb7c:\n\
     .4byte       DAT_0200f08c\n\
PTR_DAT_0801fb80:\n\
     .4byte       DAT_0200f0cc\n\
PTR_DAT_0801fb84:\n\
     .4byte       DAT_0200f110\n\
PTR_DAT_0801fb88:\n\
     .4byte       DAT_0200efc4\n\
PTR_DAT_0801fb8c:\n\
     .4byte       DAT_0200eebc\n\
PTR_DAT_0801fb90:\n\
     .4byte       DAT_0200efc8\n\
PTR_DAT_0801fb94:\n\
     .4byte       DAT_0200efe0\n\
PTR_DAT_0801fb98:\n\
     .4byte       DAT_0200f124\n\
PTR_DAT_0801fb9c:\n\
     .4byte       DAT_0200efdc\n\
PTR_DAT_0801fba0:\n\
     .4byte       DAT_0200efd4\n\
PTR_DAT_0801fba4:\n\
     .4byte       DAT_0200f0c4\n\
PTR_DAT_0801fba8:\n\
     .4byte       DAT_0200eef0\n\
PTR_DAT_0801fbac:\n\
     .4byte       DAT_0200f10c\n\
DAT_0801fbb0:\n\
     .4byte 0x0000017F\n\
DAT_0801fbb4:\n\
     .4byte 0x00007FFF\n\
DAT_0801fbb8:\n\
     .4byte 0x084FBDBC\n\
DAT_0801fbbc:\n\
     .4byte 0x0200F144\n\
    ");
}
__attribute__((naked)) void fun_0801fbc0()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r2,DAT_0801fbe8\n\
     ldr        r0,DAT_0801fbec\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r0,#0x78\n\
     lsr        r1,r0,#0x1\n\
     ldr        r3,DAT_0801fbf0\n\
     and        r1,r3\n\
     str        r1,[r2,#0x0]\n\
     str        r0,[r2,#0x8]\n\
     lsl        r0,r0,#0x1\n\
     and        r0,r3\n\
     str        r0,[r2,#0xc]\n\
     ldr        r0,DAT_0801fbf4\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fbf8\n\
     bl         fun_0803a9ec\n\
     b          LAB_0801fc42\n\
DAT_0801fbe8:\n\
     .4byte 0x0200EEF0\n\
DAT_0801fbec:\n\
     .4byte 0x0200F070\n\
DAT_0801fbf0:\n\
     .4byte 0x00000FFF\n\
DAT_0801fbf4:\n\
     .4byte 0x0200EFF4\n\
LAB_0801fbf8:\n\
     mov        r4,#0x0\n\
LAB_0801fbfa:\n\
     add        r0,r4,#0x0\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x1\n\
     lsl        r0,r4\n\
     mov        r1,#0x20\n\
     lsl        r1,r4\n\
     orr        r0,r1\n\
     bl         fun_08004c04\n\
     cmp        r4,#0x1\n\
     bne        LAB_0801fc18\n\
     bl         fun_0803a9ec\n\
     b          LAB_0801fc2c\n\
LAB_0801fc18:\n\
     ldr        r0,DAT_0801fc48\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r1,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_08005aa4\n\
     bl         fun_08005060\n\
LAB_0801fc2c:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_0801fbfa\n\
     mov        r0,#0x1\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x42\n\
     bl         fun_08004c04\n\
LAB_0801fc42:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801fc48:\n\
     .4byte 0x0200EEF0\n\
    ");
}
__attribute__((naked)) void fun_0801fc4c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r5,#0x0\n\
     b          LAB_0801fc7a\n\
LAB_0801fc52:\n\
     lsl        r4,r5,#0x5\n\
     ldr        r0,DAT_0801fc98\n\
     add        r4,r4,r0\n\
     mov        r0,#0x2c\n\
     add        r1,r5,#0x0\n\
     mul        r1,r0\n\
     ldr        r0,DAT_0801fc9c\n\
     add        r1,r1,r0\n\
     add        r0,r4,#0x0\n\
     bl         fun_080004ac\n\
     mov        r0,#0x0\n\
     strb       r0,[r4,#0x14]\n\
     mov        r0,#0x28\n\
     strh       r0,[r4,#0x4]\n\
     mov        r0,#0x7d\n\
     strh       r0,[r4,#0x6]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
LAB_0801fc7a:\n\
     ldr        r0,DAT_0801fca0\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r5,r0\n\
     bcc        LAB_0801fc52\n\
     ldr        r0,DAT_0801fca4\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_0801fc98\n\
     ldr        r1,DAT_0801fca0\n\
     ldrh       r1,[r1,#0x4]\n\
     bl         fun_0803aa14\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0801fc98:\n\
     .4byte 0x0200EF30\n\
DAT_0801fc9c:\n\
     .4byte 0x08786990\n\
DAT_0801fca0:\n\
     .4byte 0x0200EF10\n\
DAT_0801fca4:\n\
     .4byte 0x084FBE3C\n\
    ");
}
__attribute__((naked)) void fun_0801fca8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r0,PTR_DAT_0801fcfc\n\
     ldr        r1,[r0,#0xc]\n\
     add        r6,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0801fd40\n\
     ldr        r4,PTR_DAT_0801fd00\n\
     ldr        r5,PTR_DAT_0801fd04\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r1,[r5,#0x0]\n\
     bl         __umodsi3\n\
     add        r7,r4,#0x0\n\
     mov        r8,r5\n\
     ldr        r4,PTR_DAT_0801fd08\n\
     ldr        r5,PTR_DAT_0801fd0c\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fcf0\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fcf6\n\
     ldr        r0,PTR_DAT_0801fd10\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fcf0\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fcf0\n\
     ldrh       r0,[r6,#0x10]\n\
     add        r0,#0x1\n\
     mov        r1,#0x7\n\
     bl         __modsi3\n\
     strh       r0,[r6,#0x10]\n\
LAB_0801fcf0:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801fd14\n\
LAB_0801fcf6:\n\
     mov        r0,#0x0\n\
     b          LAB_0801fd1e\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801fcfc:\n\
     .4byte       DAT_0200ef30\n\
PTR_DAT_0801fd00:\n\
     .4byte       DAT_0200eff4\n\
PTR_DAT_0801fd04:\n\
     .4byte       DAT_0200eff8\n\
PTR_DAT_0801fd08:\n\
     .4byte       DAT_0200efb4\n\
PTR_DAT_0801fd0c:\n\
     .4byte       DAT_0200f08c\n\
PTR_DAT_0801fd10:\n\
     .4byte       DAT_0200ef00\n\
LAB_0801fd14:\n\
     ldr        r0,DAT_0801fd4c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801fd20\n\
     mov        r0,#0x5\n\
LAB_0801fd1e:\n\
     strh       r0,[r6,#0x10]\n\
LAB_0801fd20:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801fd40\n\
     ldr        r0,[r7,#0x0]\n\
     mov        r2,r8\n\
     ldr        r1,[r2,#0x0]\n\
     bl         __umodsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fd40\n\
     ldrh       r0,[r6,#0x10]\n\
     add        r0,#0x1\n\
     mov        r1,#0xb\n\
     bl         __modsi3\n\
     strh       r0,[r6,#0x10]\n\
LAB_0801fd40:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0801fd4c:\n\
     .4byte 0x0200EF00\n\
    ");
}
__attribute__((naked)) void fun_0801fd50()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r2,PTR_DAT_0801fd94\n\
     mov        r0,#0x2\n\
     str        r0,[r2,#0x8]\n\
     ldr        r4,PTR_DAT_0801fd98\n\
     ldr        r1,PTR_DAT_0801fd9c\n\
     ldr        r0,[r1,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,PTR_DAT_0801fda0\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r8,r2\n\
     add        r2,r1,#0x0\n\
     add        r5,r0,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_0801fdb0\n\
     sub        r1,r3,#0x1\n\
     str        r1,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_0801fd7e\n\
     ldr        r0,PTR_DAT_0801fda4\n\
     strh       r1,[r0,#0x0]\n\
LAB_0801fd7e:\n\
     ldr        r1,PTR_DAT_0801fda8\n\
     mov        r0,#0xa0\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801fdac\n\
     mov        r0,#0xf\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     str        r0,[r4,#0x0]\n\
     b          LAB_0801fe20\n\
PTR_DAT_0801fd94:\n\
     .4byte       DAT_0200ef30\n\
PTR_DAT_0801fd98:\n\
     .4byte       DAT_0200f11c\n\
PTR_DAT_0801fd9c:\n\
     .4byte       DAT_0200f0a0\n\
PTR_DAT_0801fda0:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_0801fda4:\n\
     .4byte       DAT_0200f08c\n\
PTR_DAT_0801fda8:\n\
     .4byte       DAT_0200efb0\n\
PTR_DAT_0801fdac:\n\
     .4byte       DAT_0200eff8\n\
LAB_0801fdb0:\n\
     ldr        r0,DAT_0801fdc8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801fdd4\n\
     ldr        r1,DAT_0801fdcc\n\
     mov        r0,#0xe0\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801fdd0\n\
     mov        r0,#0x8\n\
     b          LAB_0801fe10\n\
.space 1\n\
.space 1\n\
DAT_0801fdc8:\n\
     .4byte 0x0200F138\n\
DAT_0801fdcc:\n\
     .4byte 0x0200EFB0\n\
DAT_0801fdd0:\n\
     .4byte 0x0200EFF8\n\
LAB_0801fdd4:\n\
     ldr        r0,DAT_0801fde8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801fdf4\n\
     ldr        r1,DAT_0801fdec\n\
     mov        r0,#0xc0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801fdf0\n\
     mov        r0,#0xc\n\
     b          LAB_0801fe10\n\
DAT_0801fde8:\n\
     .4byte 0x0200F134\n\
DAT_0801fdec:\n\
     .4byte 0x0200EFB0\n\
DAT_0801fdf0:\n\
     .4byte 0x0200EFF8\n\
LAB_0801fdf4:\n\
     ldr        r0,PTR_DAT_0801fe50\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801fe12\n\
     ldr        r0,PTR_DAT_0801fe54\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fe12\n\
     ldr        r1,PTR_DAT_0801fe58\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801fe5c\n\
     mov        r0,#0x6\n\
LAB_0801fe10:\n\
     str        r0,[r1,#0x0]\n\
LAB_0801fe12:\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0801fe20\n\
     ldr        r1,PTR_DAT_0801fe5c\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_0801fe20:\n\
     ldr        r0,PTR_DAT_0801fe60\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     ldr        r2,PTR_DAT_0801fe64\n\
     cmp        r1,#0x0\n\
     beq        LAB_0801fe9c\n\
     ldr        r0,PTR_DAT_0801fe68\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801fe9c\n\
     mov        r2,#0x1\n\
     mov        r1,r8\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_0801fe6c\n\
     ldr        r1,[r0,#0x0]\n\
     cmp        r1,#0x1\n\
     bhi        LAB_0801fe70\n\
     mov        r0,#0x2\n\
     sub        r0,r0,r1\n\
     mov        r2,r8\n\
     strb       r0,[r2,#0x14]\n\
     b          LAB_0801fe74\n\
PTR_DAT_0801fe50:\n\
     .4byte       DAT_0200f068\n\
PTR_DAT_0801fe54:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_0801fe58:\n\
     .4byte       DAT_0200efb0\n\
PTR_DAT_0801fe5c:\n\
     .4byte       DAT_0200eff8\n\
PTR_DAT_0801fe60:\n\
     .4byte       DAT_0200f088\n\
PTR_DAT_0801fe64:\n\
     .4byte       DAT_0200efb4\n\
PTR_DAT_0801fe68:\n\
     .4byte       DAT_0200f06c\n\
PTR_DAT_0801fe6c:\n\
     .4byte       DAT_0200efcc\n\
LAB_0801fe70:\n\
     mov        r4,r8\n\
     strb       r2,[r4,#0x14]\n\
LAB_0801fe74:\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r2,PTR_DAT_0801fed0\n\
     mov        r1,#0x1\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0801fed4\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fed8\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801fedc\n\
     mov        r0,#0xe0\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801fee0\n\
     ldr        r0,PTR_DAT_0801fee4\n\
     ldr        r0,[r0,#0x0]\n\
     asr        r0,r0,#0x8\n\
     add        r0,#0x19\n\
     str        r0,[r1,#0x0]\n\
LAB_0801fe9c:\n\
     ldrh       r5,[r2,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0801ff0c\n\
     ldr        r1,PTR_DAT_0801fee8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0801fed8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r3,r0,#0x1\n\
     str        r3,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0801fee0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r3,r0\n\
     bls        LAB_0801fef8\n\
     ldr        r0,PTR_DAT_0801feec\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0801fef0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801fef4\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0801ffb8\n\
PTR_DAT_0801fed0:\n\
     .4byte       DAT_0200efb4\n\
PTR_DAT_0801fed4:\n\
     .4byte       DAT_0200f06c\n\
PTR_DAT_0801fed8:\n\
     .4byte       DAT_0200f098\n\
PTR_DAT_0801fedc:\n\
     .4byte       DAT_0200f128\n\
PTR_DAT_0801fee0:\n\
     .4byte       DAT_0200f118\n\
PTR_DAT_0801fee4:\n\
     .4byte       DAT_0200efb0\n\
PTR_DAT_0801fee8:\n\
     .4byte       DAT_0200f078\n\
PTR_DAT_0801feec:\n\
     .4byte       DAT_0200efc8\n\
PTR_DAT_0801fef0:\n\
     .4byte       DAT_0200ef00\n\
PTR_DAT_0801fef4:\n\
     .4byte       DAT_0200ef04\n\
LAB_0801fef8:\n\
     ldr        r4,DAT_0801ff08\n\
     sub        r0,r0,r3\n\
     mov        r1,#0xa\n\
     bl         __udivsi3\n\
     ldrh       r5,[r4,#0x6]\n\
     sub        r0,r5,r0\n\
     b          LAB_0801ffb6\n\
DAT_0801ff08:\n\
     .4byte 0x0200EF30\n\
LAB_0801ff0c:\n\
     ldr        r0,PTR_DAT_0801ff60\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ffb8\n\
     ldr        r4,PTR_DAT_0801ff64\n\
     ldr        r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r4,#0x0]\n\
     ldr        r2,PTR_DAT_0801ff68\n\
     mov        r0,#0x5\n\
     strh       r0,[r2,#0x10]\n\
     ldr        r3,PTR_DAT_0801ff6c\n\
     ldr        r1,[r3,#0x0]\n\
     lsr        r0,r1,#0x2\n\
     add        r0,#0x1\n\
     ldrh       r6,[r2,#0x6]\n\
     add        r0,r6,r0\n\
     strh       r0,[r2,#0x6]\n\
     add        r1,#0x1\n\
     str        r1,[r3,#0x0]\n\
     mov        r0,#0x6\n\
     ldrsh      r2,[r2,r0]\n\
     ldr        r1,DAT_0801ff70\n\
     ldr        r0,DAT_0801ff74\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     blt        LAB_0801ffb8\n\
     str        r5,[r4,#0x0]\n\
     ldr        r1,DAT_0801ff78\n\
     mov        r0,#0x8\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801ff7c\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     b          LAB_0801ff82\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801ff60:\n\
     .4byte       DAT_0200ef00\n\
PTR_DAT_0801ff64:\n\
     .4byte       DAT_0200f078\n\
PTR_DAT_0801ff68:\n\
     .4byte       DAT_0200ef30\n\
PTR_DAT_0801ff6c:\n\
     .4byte       DAT_0200ef04\n\
DAT_0801ff70:\n\
     .4byte 0x08786984\n\
DAT_0801ff74:\n\
     .4byte 0x0200EFCC\n\
DAT_0801ff78:\n\
     .4byte 0x0200F0B0\n\
LAB_0801ff7c:\n\
     mov        r0,#0x11\n\
     bl         fun_080016f0\n\
LAB_0801ff82:\n\
     ldr        r4,DAT_08020014\n\
     ldr        r0,DAT_08020018\n\
     ldrh       r1,[r4,#0x12]\n\
     and        r0,r1\n\
     mov        r5,#0x0\n\
     strh       r0,[r4,#0x12]\n\
     ldr        r0,DAT_0802001c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x28\n\
     strh       r1,[r0,#0x2]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_0800482c\n\
     ldr        r0,DAT_08020020\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_08020024\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,DAT_08020028\n\
     ldr        r0,PTR_DAT_0802002c\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
LAB_0801ffb6:\n\
     strh       r0,[r4,#0x6]\n\
LAB_0801ffb8:\n\
     ldr        r0,DAT_08020024\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r7,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0801ffe2\n\
     ldr        r0,PTR_DAT_08020030\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_0801ffe2\n\
     ldr        r3,PTR_DAT_08020034\n\
     ldr        r0,PTR_DAT_08020038\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x5\n\
     str        r0,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_0802003c\n\
     ldr        r1,[r1,#0x0]\n\
     cmp        r0,r1\n\
     ble        LAB_0801ffde\n\
     str        r1,[r3,#0x0]\n\
LAB_0801ffde:\n\
     ldr        r0,PTR_DAT_08020040\n\
     str        r2,[r0,#0x0]\n\
LAB_0801ffe2:\n\
     ldr        r3,PTR_DAT_08020044\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020086\n\
     ldr        r2,PTR_DAT_0802002c\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08020054\n\
     ldr        r0,DAT_08020014\n\
     ldrh       r4,[r0,#0x6]\n\
     mov        r5,#0x6\n\
     ldrsh      r1,[r0,r5]\n\
     mov        r8,r0\n\
     cmp        r1,#0x6d\n\
     ble        LAB_0802004c\n\
     ldr        r1,PTR_DAT_08020048\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x6\n\
     bl         __udivsi3\n\
     sub        r0,r4,r0\n\
     b          LAB_080200f8\n\
.space 1\n\
.space 1\n\
DAT_08020014:\n\
     .4byte 0x0200EF30\n\
DAT_08020018:\n\
     .4byte 0x0000FFFE\n\
DAT_0802001c:\n\
     .4byte 0x0200F144\n\
DAT_08020020:\n\
     .4byte 0x0200EF00\n\
DAT_08020024:\n\
     .4byte 0x0200F06C\n\
DAT_08020028:\n\
     .4byte 0x08786984\n\
PTR_DAT_0802002c:\n\
     .4byte       DAT_0200efcc\n\
PTR_DAT_08020030:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_08020034:\n\
     .4byte       DAT_0200efb0\n\
PTR_DAT_08020038:\n\
     .4byte       DAT_0200f098\n\
PTR_DAT_0802003c:\n\
     .4byte       DAT_0200f128\n\
PTR_DAT_08020040:\n\
     .4byte       DAT_0200f11c\n\
PTR_DAT_08020044:\n\
     .4byte       DAT_0200efc0\n\
PTR_DAT_08020048:\n\
     .4byte       DAT_0200eeec\n\
LAB_0802004c:\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     mov        r0,#0x0\n\
     b          LAB_08020108\n\
LAB_08020054:\n\
     cmp        r0,#0x2\n\
     bne        LAB_08020086\n\
     ldr        r0,DAT_08020078\n\
     ldrh       r6,[r0,#0x6]\n\
     mov        r4,#0x6\n\
     ldrsh      r1,[r0,r4]\n\
     mov        r8,r0\n\
     cmp        r1,#0x7d\n\
     ble        LAB_08020080\n\
     ldr        r5,DAT_0802007c\n\
     ldr        r4,[r5,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x6\n\
     bl         __udivsi3\n\
     sub        r0,r6,r0\n\
     b          LAB_080200b4\n\
.space 1\n\
.space 1\n\
DAT_08020078:\n\
     .4byte 0x0200EF30\n\
DAT_0802007c:\n\
     .4byte 0x0200EEEC\n\
LAB_08020080:\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     b          LAB_08020106\n\
LAB_08020086:\n\
     ldr        r3,PTR_DAT_080200c0\n\
     ldrh       r0,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_080200c4\n\
     mov        r8,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802010a\n\
     ldr        r2,PTR_DAT_080200c8\n\
     ldr        r1,[r2,#0x0]\n\
     cmp        r1,#0x1\n\
     bne        LAB_080200d8\n\
     mov        r4,r8\n\
     ldrh       r6,[r4,#0x6]\n\
     mov        r5,#0x6\n\
     ldrsh      r0,[r4,r5]\n\
     cmp        r0,#0x8a\n\
     bgt        LAB_080200d0\n\
     ldr        r5,PTR_DAT_080200cc\n\
     ldr        r4,[r5,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x6\n\
     bl         __udivsi3\n\
     add        r0,r6,r0\n\
LAB_080200b4:\n\
     mov        r6,r8\n\
     strh       r0,[r6,#0x6]\n\
     add        r4,#0x1\n\
     str        r4,[r5,#0x0]\n\
     b          LAB_0802010a\n\
.space 1\n\
.space 1\n\
PTR_DAT_080200c0:\n\
     .4byte       DAT_0200f0bc\n\
PTR_DAT_080200c4:\n\
     .4byte       DAT_0200ef30\n\
PTR_DAT_080200c8:\n\
     .4byte       DAT_0200efcc\n\
PTR_DAT_080200cc:\n\
     .4byte       DAT_0200eeec\n\
LAB_080200d0:\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     b          LAB_08020108\n\
LAB_080200d8:\n\
     cmp        r1,#0x0\n\
     bne        LAB_0802010a\n\
     mov        r0,r8\n\
     ldrh       r4,[r0,#0x6]\n\
     mov        r5,#0x6\n\
     ldrsh      r0,[r0,r5]\n\
     cmp        r0,#0x7c\n\
     bgt        LAB_08020104\n\
     ldr        r1,DAT_08020100\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x6\n\
     bl         __udivsi3\n\
     add        r0,r4,r0\n\
LAB_080200f8:\n\
     mov        r6,r8\n\
     strh       r0,[r6,#0x6]\n\
     b          LAB_0802010a\n\
.space 1\n\
.space 1\n\
DAT_08020100:\n\
     .4byte 0x0200EEEC\n\
LAB_08020104:\n\
     strh       r1,[r3,#0x0]\n\
LAB_08020106:\n\
     mov        r0,#0x1\n\
LAB_08020108:\n\
     str        r0,[r2,#0x0]\n\
LAB_0802010a:\n\
     ldr        r0,DAT_08020180\n\
     ldr        r2,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_08020132\n\
     mov        r0,r8\n\
     ldr        r1,[r0,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802012c\n\
     sub        r0,r2,#0x1\n\
     str        r0,[r3,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r2,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
LAB_0802012c:\n\
     ldr        r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020142\n\
LAB_08020132:\n\
     mov        r5,r8\n\
     ldr        r1,[r5,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08020142\n\
     ldr        r0,DAT_08020184\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
LAB_08020142:\n\
     ldr        r0,PTR_DAT_08020188\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r6,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_08020166\n\
     ldr        r0,PTR_DAT_0802018c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020166\n\
     ldr        r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020166\n\
     ldr        r1,PTR_DAT_08020190\n\
     mov        r0,#0x80\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08020194\n\
     mov        r0,#0x8\n\
     str        r0,[r1,#0x0]\n\
LAB_08020166:\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802021c\n\
     ldr        r0,PTR_DAT_08020198\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080201a0\n\
     ldr        r4,PTR_DAT_0802019c\n\
     ldr        r0,PTR_DAT_08020190\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1e\n\
     b          LAB_080201a8\n\
.space 1\n\
.space 1\n\
DAT_08020180:\n\
     .4byte 0x0200F108\n\
DAT_08020184:\n\
     .4byte 0x0000F7FF\n\
PTR_DAT_08020188:\n\
     .4byte       DAT_0200f110\n\
PTR_DAT_0802018c:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_08020190:\n\
     .4byte       DAT_0200efb0\n\
PTR_DAT_08020194:\n\
     .4byte       DAT_0200eff8\n\
PTR_DAT_08020198:\n\
     .4byte       DAT_0200f0a0\n\
PTR_DAT_0802019c:\n\
     .4byte       DAT_0200f0b8\n\
LAB_080201a0:\n\
     ldr        r4,DAT_080201d4\n\
     ldr        r0,DAT_080201d8\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x3c\n\
LAB_080201a8:\n\
     bl         __divsi3\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,r8\n\
     ldrh       r0,[r1,#0x10]\n\
     cmp        r0,#0x5\n\
     beq        LAB_080201ba\n\
     cmp        r0,#0x2\n\
     bne        LAB_08020204\n\
LAB_080201ba:\n\
     ldr        r5,DAT_080201dc\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080201ea\n\
     ldrh       r4,[r6,#0x0]\n\
     cmp        r4,#0x0\n\
     bne        LAB_080201e0\n\
     mov        r0,#0x37\n\
     bl         fun_080016f0\n\
     strh       r4,[r5,#0x0]\n\
     b          LAB_080201ea\n\
.space 1\n\
.space 1\n\
DAT_080201d4:\n\
     .4byte 0x0200F0B8\n\
DAT_080201d8:\n\
     .4byte 0x0200EFB0\n\
DAT_080201dc:\n\
     .4byte 0x0200EEBC\n\
LAB_080201e0:\n\
     mov        r0,#0x24\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r5,#0x0]\n\
LAB_080201ea:\n\
     ldr        r0,DAT_080201f8\n\
     ldr        r1,DAT_080201fc\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     ldr        r7,DAT_08020200\n\
     b          LAB_0802021c\n\
.space 1\n\
.space 1\n\
DAT_080201f8:\n\
     .4byte 0x0200F140\n\
DAT_080201fc:\n\
     .4byte 0x0200EFB0\n\
DAT_08020200:\n\
     .4byte 0x0200F06C\n\
LAB_08020204:\n\
     cmp        r0,#0x5\n\
     beq        LAB_0802021c\n\
     cmp        r0,#0x2\n\
     beq        LAB_0802021c\n\
     ldr        r2,PTR_DAT_080202f0\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_080202f4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802021c:\n\
     ldr        r0,PTR_DAT_080202f8\n\
     ldr        r1,[r0,#0x0]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08020236\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020236\n\
     ldr        r0,PTR_DAT_080202fc\n\
     ldrh       r0,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_080202f0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020240\n\
LAB_08020236:\n\
     ldr        r0,PTR_DAT_080202f0\n\
     ldr        r1,PTR_DAT_08020300\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     add        r1,r0,#0x0\n\
LAB_08020240:\n\
     ldr        r2,PTR_DAT_08020304\n\
     ldr        r0,PTR_DAT_08020308\n\
     ldr        r1,[r1,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     add        r1,r1,r0\n\
     str        r1,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_0802030c\n\
     ldr        r0,[r2,#0x0]\n\
     add        r1,r0,r1\n\
     str        r1,[r2,#0x0]\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020270\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020270\n\
     ldr        r0,PTR_DAT_08020310\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020270\n\
     ldr        r0,PTR_DAT_08020314\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020348\n\
LAB_08020270:\n\
     ldr        r1,PTR_DAT_08020318\n\
     mov        r0,#0x4\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020290\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020290\n\
     ldr        r0,PTR_DAT_08020310\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020290\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080202ea\n\
LAB_08020290:\n\
     ldrh       r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020338\n\
     ldr        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020338\n\
     ldr        r0,PTR_DAT_08020310\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020338\n\
     ldr        r0,PTR_DAT_0802031c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020338\n\
     ldr        r1,PTR_DAT_08020320\n\
     mov        r3,#0x4\n\
     add        r0,r3,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080202ea\n\
     ldr        r1,PTR_DAT_08020324\n\
     add        r0,r3,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080202ea\n\
     ldr        r1,PTR_DAT_08020328\n\
     add        r0,r3,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080202ea\n\
     ldr        r1,PTR_DAT_0802032c\n\
     add        r0,r3,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080202ea\n\
     ldr        r1,PTR_DAT_08020330\n\
     add        r0,r3,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020338\n\
LAB_080202ea:\n\
     ldr        r1,PTR_DAT_08020334\n\
     mov        r0,#0x1\n\
     b          LAB_0802035a\n\
PTR_DAT_080202f0:\n\
     .4byte       DAT_0200f140\n\
PTR_DAT_080202f4:\n\
     .4byte       DAT_0200eebc\n\
PTR_DAT_080202f8:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_080202fc:\n\
     .4byte       DAT_0200f110\n\
PTR_DAT_08020300:\n\
     .4byte       DAT_0200efb0\n\
PTR_DAT_08020304:\n\
     .4byte       DAT_0200f0a4\n\
PTR_DAT_08020308:\n\
     .4byte       DAT_0200f11c\n\
PTR_DAT_0802030c:\n\
     .4byte       DAT_0200f114\n\
PTR_DAT_08020310:\n\
     .4byte       DAT_0200f108\n\
PTR_DAT_08020314:\n\
     .4byte       DAT_0200f080\n\
PTR_DAT_08020318:\n\
     .4byte       DAT_0200f0b0\n\
PTR_DAT_0802031c:\n\
     .4byte       DAT_0200f0c4\n\
PTR_DAT_08020320:\n\
     .4byte       DAT_0200eff0\n\
PTR_DAT_08020324:\n\
     .4byte       DAT_0200efb8\n\
PTR_DAT_08020328:\n\
     .4byte       DAT_0200eec0\n\
PTR_DAT_0802032c:\n\
     .4byte       DAT_0200f07c\n\
PTR_DAT_08020330:\n\
     .4byte       DAT_0200f13c\n\
PTR_DAT_08020334:\n\
     .4byte       DAT_0200f0cc\n\
LAB_08020338:\n\
     ldr        r1,DAT_08020344\n\
     ldr        r0,[r2,#0x0]\n\
     lsr        r0,r0,#0x8\n\
     strh       r0,[r1,#0x4]\n\
     b          LAB_0802035c\n\
.space 1\n\
.space 1\n\
DAT_08020344:\n\
     .4byte 0x0200EF30\n\
LAB_08020348:\n\
     ldr        r0,DAT_08020368\n\
     lsr        r1,r1,#0x8\n\
     strh       r1,[r0,#0x4]\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     ldrh       r2,[r0,#0x6]\n\
     bl         fun_0803aac8\n\
     ldr        r1,DAT_0802036c\n\
LAB_0802035a:\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802035c:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08020368:\n\
     .4byte 0x0200EF30\n\
DAT_0802036c:\n\
     .4byte 0x0200F0CC\n\
    ");
}
__attribute__((naked)) void fun_08020370()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     bl         fun_08002dd8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802037e\n\
     b          LAB_080205f6\n\
LAB_0802037e:\n\
     ldr        r2,PTR_DAT_08020464\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     add        r5,r2,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_080203ce\n\
     ldr        r0,PTR_DAT_08020468\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080203ce\n\
     ldr        r2,PTR_DAT_0802046c\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080203ce\n\
     ldr        r0,PTR_DAT_08020470\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080203ce\n\
     ldr        r0,PTR_DAT_08020474\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080203ce\n\
     ldr        r0,PTR_DAT_08020478\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080203ce\n\
     ldr        r0,PTR_DAT_0802047c\n\
     ldr        r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_080203ce\n\
     ldr        r0,PTR_DAT_08020480\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r0,#0x1\n\
     cmp        r0,#0x1\n\
     bhi        LAB_080203ce\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08020484\n\
     str        r1,[r0,#0x0]\n\
LAB_080203ce:\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020418\n\
     ldr        r0,PTR_DAT_08020468\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020418\n\
     ldr        r0,PTR_DAT_0802046c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020418\n\
     ldr        r2,PTR_DAT_08020470\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020418\n\
     ldr        r0,PTR_DAT_08020474\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020418\n\
     ldr        r0,PTR_DAT_08020478\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020418\n\
     ldr        r0,PTR_DAT_0802047c\n\
     ldr        r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08020418\n\
     ldr        r0,PTR_DAT_08020480\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bhi        LAB_08020418\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_08020484\n\
     str        r1,[r0,#0x0]\n\
LAB_08020418:\n\
     ldr        r2,PTR_DAT_08020488\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r3,#0x10\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     add        r6,r2,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_080204a2\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r0,r3,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080204a2\n\
     ldr        r0,PTR_DAT_08020468\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080204a2\n\
     ldr        r0,PTR_DAT_08020474\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080204a2\n\
     ldr        r0,PTR_DAT_08020478\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080204a2\n\
     ldr        r0,PTR_DAT_0802047c\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_080204a2\n\
     ldr        r3,PTR_DAT_0802048c\n\
     ldrh       r1,[r3,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08020494\n\
     ldr        r1,PTR_DAT_08020490\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r2,[r3,#0x0]\n\
     b          LAB_080204a2\n\
PTR_DAT_08020464:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_08020468:\n\
     .4byte       DAT_0200f06c\n\
PTR_DAT_0802046c:\n\
     .4byte       DAT_0200efc0\n\
PTR_DAT_08020470:\n\
     .4byte       DAT_0200f0bc\n\
PTR_DAT_08020474:\n\
     .4byte       DAT_0200f08c\n\
PTR_DAT_08020478:\n\
     .4byte       DAT_0200f080\n\
PTR_DAT_0802047c:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_08020480:\n\
     .4byte       DAT_0200efcc\n\
PTR_DAT_08020484:\n\
     .4byte       DAT_0200eeec\n\
PTR_DAT_08020488:\n\
     .4byte       DAT_0200f0ac\n\
PTR_DAT_0802048c:\n\
     .4byte       DAT_0200f068\n\
PTR_DAT_08020490:\n\
     .4byte       DAT_0200f138\n\
LAB_08020494:\n\
     ldr        r2,PTR_DAT_080204ec\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080204a2\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     strh       r1,[r2,#0x0]\n\
LAB_080204a2:\n\
     ldrh       r1,[r6,#0x0]\n\
     mov        r2,#0x20\n\
     add        r0,r2,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020512\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r0,r2,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020512\n\
     ldr        r0,PTR_DAT_080204f0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020512\n\
     ldr        r0,PTR_DAT_080204f4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020512\n\
     ldr        r0,PTR_DAT_080204f8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020512\n\
     ldr        r0,PTR_DAT_080204fc\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_08020512\n\
     ldr        r3,PTR_DAT_08020500\n\
     ldrh       r1,[r3,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08020504\n\
     ldr        r1,PTR_DAT_080204ec\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r2,[r3,#0x0]\n\
     b          LAB_08020512\n\
.space 1\n\
.space 1\n\
PTR_DAT_080204ec:\n\
     .4byte       DAT_0200f134\n\
PTR_DAT_080204f0:\n\
     .4byte       DAT_0200f06c\n\
PTR_DAT_080204f4:\n\
     .4byte       DAT_0200f08c\n\
PTR_DAT_080204f8:\n\
     .4byte       DAT_0200f080\n\
PTR_DAT_080204fc:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_08020500:\n\
     .4byte       DAT_0200f068\n\
LAB_08020504:\n\
     ldr        r2,PTR_DAT_080205fc\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020512\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     strh       r1,[r2,#0x0]\n\
LAB_08020512:\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r2,#0x1\n\
     add        r0,r2,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080205f2\n\
     ldr        r0,PTR_DAT_08020600\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205f2\n\
     ldrh       r1,[r6,#0x0]\n\
     add        r0,r2,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205f2\n\
     ldr        r0,PTR_DAT_08020604\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205f2\n\
     ldr        r0,PTR_DAT_08020608\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205f2\n\
     ldr        r0,PTR_DAT_0802060c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205f2\n\
     ldr        r0,PTR_DAT_08020610\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080205f2\n\
     ldr        r0,PTR_DAT_08020614\n\
     ldr        r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     bne        LAB_080205f2\n\
     ldr        r0,PTR_DAT_08020618\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bls        LAB_080205f2\n\
     ldr        r0,PTR_DAT_0802061c\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x13\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_08020620\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08020624\n\
     mov        r2,#0x4\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_08020628\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_0802062c\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_08020630\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_08020634\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_08020638\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_0802063c\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_08020640\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_08020644\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080205e8\n\
     ldr        r1,PTR_DAT_08020648\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080205f2\n\
LAB_080205e8:\n\
     ldr        r1,PTR_DAT_08020620\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r5,PTR_DAT_0802064c\n\
     ldr        r6,PTR_DAT_08020650\n\
LAB_080205f2:\n\
     ldrh       r0,[r5,#0x0]\n\
     strh       r0,[r6,#0x0]\n\
LAB_080205f6:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
PTR_DAT_080205fc:\n\
     .4byte       DAT_0200f138\n\
PTR_DAT_08020600:\n\
     .4byte       DAT_0200f06c\n\
PTR_DAT_08020604:\n\
     .4byte       DAT_0200efc0\n\
PTR_DAT_08020608:\n\
     .4byte       DAT_0200f0bc\n\
PTR_DAT_0802060c:\n\
     .4byte       DAT_0200f08c\n\
PTR_DAT_08020610:\n\
     .4byte       DAT_0200f080\n\
PTR_DAT_08020614:\n\
     .4byte       DAT_0200efd8\n\
PTR_DAT_08020618:\n\
     .4byte       DAT_0200eff4\n\
PTR_DAT_0802061c:\n\
     .4byte       DAT_0200f088\n\
PTR_DAT_08020620:\n\
     .4byte       DAT_0200f0c4\n\
PTR_DAT_08020624:\n\
     .4byte       DAT_0200f09c\n\
PTR_DAT_08020628:\n\
     .4byte       DAT_0200f0ec\n\
PTR_DAT_0802062c:\n\
     .4byte       DAT_0200f0c8\n\
PTR_DAT_08020630:\n\
     .4byte       DAT_0200eeb8\n\
PTR_DAT_08020634:\n\
     .4byte       DAT_0200f130\n\
PTR_DAT_08020638:\n\
     .4byte       DAT_0200f0a8\n\
PTR_DAT_0802063c:\n\
     .4byte       DAT_0200f094\n\
PTR_DAT_08020640:\n\
     .4byte       DAT_0200f120\n\
PTR_DAT_08020644:\n\
     .4byte       DAT_0200f084\n\
PTR_DAT_08020648:\n\
     .4byte       DAT_0200f064\n\
PTR_DAT_0802064c:\n\
     .4byte       DAT_02005830\n\
PTR_DAT_08020650:\n\
     .4byte       DAT_0200f0ac\n\
    ");
}
__attribute__((naked)) void fun_08020654()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080206a8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080206ac\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080206fa\n\
     ldr        r0,DAT_080206b0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080206fa\n\
     ldr        r0,DAT_080206b4\n\
     ldrh       r1,[r0,#0x4]\n\
     ldr        r2,DAT_080206b8\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x17\n\
     bls        LAB_080206a0\n\
     ldr        r2,DAT_080206bc\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x17\n\
     bls        LAB_080206a0\n\
     ldr        r2,DAT_080206c0\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x17\n\
     bls        LAB_080206a0\n\
     ldr        r2,DAT_080206c4\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x17\n\
     bhi        LAB_080206c8\n\
LAB_080206a0:\n\
     mov        r0,#0x21\n\
     bl         fun_080016f0\n\
     b          LAB_080206d4\n\
DAT_080206a8:\n\
     .4byte 0x0200F110\n\
DAT_080206ac:\n\
     .4byte 0x0200F0CC\n\
DAT_080206b0:\n\
     .4byte 0x0200F08C\n\
DAT_080206b4:\n\
     .4byte 0x0200EF30\n\
DAT_080206b8:\n\
     .4byte 0xFFFFFAB8\n\
DAT_080206bc:\n\
     .4byte 0xFFFFF240\n\
DAT_080206c0:\n\
     .4byte 0xFFFFEAB8\n\
DAT_080206c4:\n\
     .4byte 0xFFFFE240\n\
LAB_080206c8:\n\
     mov        r0,#0x26\n\
     bl         fun_080016f0\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
LAB_080206d4:\n\
     ldr        r1,DAT_08020718\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802071c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08020720\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08020724\n\
     mov        r0,#0x3c\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08020728\n\
     mov        r0,#0xb4\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802072c\n\
     mov        r0,#0x6\n\
     strh       r0,[r1,#0x10]\n\
LAB_080206fa:\n\
     ldr        r1,DAT_08020730\n\
     mov        r0,#0x8\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020714\n\
     ldr        r0,DAT_08020734\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020714\n\
     ldr        r1,DAT_08020738\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08020714:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08020718:\n\
     .4byte 0x0200EFE8\n\
DAT_0802071c:\n\
     .4byte 0x0200F08C\n\
DAT_08020720:\n\
     .4byte 0x0200F0CC\n\
DAT_08020724:\n\
     .4byte 0x0200EFD8\n\
DAT_08020728:\n\
     .4byte 0x0200F108\n\
DAT_0802072c:\n\
     .4byte 0x0200EF30\n\
DAT_08020730:\n\
     .4byte 0x0200F0B0\n\
DAT_08020734:\n\
     .4byte 0x0200F06C\n\
DAT_08020738:\n\
     .4byte 0x0200F110\n\
    ");
}
__attribute__((naked)) void fun_0802073c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x4\n\
     bl         fun_0803c1a4\n\
     ldr        r7,DAT_0802095c\n\
     ldr        r0,[r7,#0x0]\n\
     sub        r1,r0,#0x1\n\
     str        r1,[r7,#0x0]\n\
     ldr        r0,DAT_08020960\n\
     mov        r9,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020764\n\
     add        r0,r1,#0x0\n\
     mov        r1,#0x5\n\
     bl         fun_08002ff0\n\
LAB_08020764:\n\
     ldr        r6,DAT_08020964\n\
     ldr        r0,[r6,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r6,#0x0]\n\
     ldr        r5,DAT_08020968\n\
     ldr        r4,DAT_0802096c\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     str        r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802078c\n\
     ldr        r0,DAT_08020970\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08020974\n\
     strh       r1,[r0,#0x0]\n\
LAB_0802078c:\n\
     ldr        r0,DAT_08020974\n\
     ldrh       r0,[r0,#0x0]\n\
     ldr        r1,DAT_08020978\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802079c\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_0802079c:\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080207ac\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_080207ac:\n\
     ldr        r2,DAT_0802097c\n\
     ldr        r0,DAT_08020980\n\
     ldr        r3,[r0,#0x0]\n\
     asr        r0,r3,#0x8\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08020984\n\
     ldr        r0,DAT_08020988\n\
     ldr        r3,[r0,#0x0]\n\
     lsr        r0,r3,#0x8\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0802098c\n\
     ldr        r1,DAT_08020990\n\
     mov        r8,r1\n\
     ldr        r3,[r1,#0x0]\n\
     lsr        r0,r3,#0x8\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08020994\n\
     mov        r0,#0x4\n\
     ldrsh      r3,[r4,r0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x3\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08020998\n\
     ldr        r3,[r5,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x4\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0802099c\n\
     ldr        r0,DAT_080209a0\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x5\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_080209a4\n\
     ldr        r0,DAT_080209a8\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x6\n\
     bl         fun_080032a0\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209ac\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     add        r1,#0x8\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209b0\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     add        r1,#0x10\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209b4\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     add        r1,#0x18\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209b8\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     add        r1,#0x20\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209bc\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209c0\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209c4\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x10\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209c8\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209cc\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x20\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209d0\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x28\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209d4\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x30\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209d8\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x38\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209dc\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x40\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209e0\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x48\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209e4\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     bl         fun_0803ab18\n\
     ldr        r1,DAT_080209e8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,#0x5\n\
     bl         __umodsi3\n\
     add        r1,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0802093a\n\
     ldr        r0,DAT_080209ec\n\
     strh       r1,[r0,#0x0]\n\
LAB_0802093a:\n\
     mov        r1,r8\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x6\n\
     cmp        r3,r0\n\
     bhi        LAB_0802094c\n\
     ldr        r0,[r7,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080209f0\n\
LAB_0802094c:\n\
     bl         fun_08003048\n\
     mov        r0,#0x0\n\
     mov        r2,r9\n\
     strh       r0,[r2,#0x0]\n\
     bl         fun_08020a74\n\
     b          LAB_08020a12\n\
DAT_0802095c:\n\
     .4byte 0x0200EFBC\n\
DAT_08020960:\n\
     .4byte 0x0200F080\n\
DAT_08020964:\n\
     .4byte 0x0200EFF4\n\
DAT_08020968:\n\
     .4byte 0x0200F0F0\n\
DAT_0802096c:\n\
     .4byte 0x0200EF30\n\
DAT_08020970:\n\
     .4byte 0x0200F0F8\n\
DAT_08020974:\n\
     .4byte 0x0200EFFC\n\
DAT_08020978:\n\
     .4byte 0x0200F100\n\
DAT_0802097c:\n\
     .4byte 0x084EFB2C\n\
DAT_08020980:\n\
     .4byte 0x0200F0A4\n\
DAT_08020984:\n\
     .4byte 0x084EFB40\n\
DAT_08020988:\n\
     .4byte 0x0200F114\n\
DAT_0802098c:\n\
     .4byte 0x084EFB54\n\
DAT_08020990:\n\
     .4byte 0x0200F070\n\
DAT_08020994:\n\
     .4byte 0x084EFB68\n\
DAT_08020998:\n\
     .4byte 0x084EFB70\n\
DAT_0802099c:\n\
     .4byte 0x084EFB80\n\
DAT_080209a0:\n\
     .4byte 0x0200F140\n\
DAT_080209a4:\n\
     .4byte 0x084EFB98\n\
DAT_080209a8:\n\
     .4byte 0x0200EFD0\n\
DAT_080209ac:\n\
     .4byte 0x0200EFF0\n\
DAT_080209b0:\n\
     .4byte 0x0200EFB8\n\
DAT_080209b4:\n\
     .4byte 0x0200EEC0\n\
DAT_080209b8:\n\
     .4byte 0x0200F07C\n\
DAT_080209bc:\n\
     .4byte 0x0200F13C\n\
DAT_080209c0:\n\
     .4byte 0x0200F09C\n\
DAT_080209c4:\n\
     .4byte 0x0200F0EC\n\
DAT_080209c8:\n\
     .4byte 0x0200F0C8\n\
DAT_080209cc:\n\
     .4byte 0x0200EEB8\n\
DAT_080209d0:\n\
     .4byte 0x0200F130\n\
DAT_080209d4:\n\
     .4byte 0x0200F0A8\n\
DAT_080209d8:\n\
     .4byte 0x0200F094\n\
DAT_080209dc:\n\
     .4byte 0x0200F120\n\
DAT_080209e0:\n\
     .4byte 0x0200F084\n\
DAT_080209e4:\n\
     .4byte 0x0200F064\n\
DAT_080209e8:\n\
     .4byte 0x0200F0B0\n\
DAT_080209ec:\n\
     .4byte 0x0200EFC4\n\
LAB_080209f0:\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x5\n\
     cmp        r3,r0\n\
     bls        LAB_08020a12\n\
     ldr        r2,DAT_08020a58\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x3\n\
     bgt        LAB_08020a12\n\
     ldr        r1,DAT_08020a5c\n\
     mov        r0,#0x78\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08020a60\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08020a12:\n\
     ldr        r0,DAT_08020a64\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r0,r2]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x6\n\
     cmp        r1,r0\n\
     ble        LAB_08020a38\n\
     ldr        r5,DAT_08020a68\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020a38\n\
     ldr        r0,DAT_08020a6c\n\
     mov        r4,#0x0\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
     strh       r4,[r5,#0x0]\n\
LAB_08020a38:\n\
     ldr        r0,DAT_08020a70\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020a44\n\
     bl         fun_08020ce0\n\
LAB_08020a44:\n\
     bl         fun_08020f2c\n\
     add        sp,#0x4\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08020a58:\n\
     .4byte 0x0200F0A0\n\
DAT_08020a5c:\n\
     .4byte 0x0200F0C0\n\
DAT_08020a60:\n\
     .4byte 0x0200EFC4\n\
DAT_08020a64:\n\
     .4byte 0x0200EF30\n\
DAT_08020a68:\n\
     .4byte 0x0200EFDC\n\
DAT_08020a6c:\n\
     .4byte 0x0200EEB0\n\
DAT_08020a70:\n\
     .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_08020a74()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r3,DAT_08020aac\n\
     ldrh       r5,[r3,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_08020adc\n\
     ldr        r1,DAT_08020ab0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08020ab4\n\
     ldr        r0,[r1,#0x0]\n\
     add        r2,r0,#0x1\n\
     str        r2,[r1,#0x0]\n\
     ldr        r0,DAT_08020ab8\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bls        LAB_08020ac8\n\
     ldr        r0,DAT_08020abc\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r0,DAT_08020ac0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_08020ac4\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_08020b84\n\
DAT_08020aac:\n\
     .4byte 0x0200EFB4\n\
DAT_08020ab0:\n\
     .4byte 0x0200F078\n\
DAT_08020ab4:\n\
     .4byte 0x0200F098\n\
DAT_08020ab8:\n\
     .4byte 0x0200F118\n\
DAT_08020abc:\n\
     .4byte 0x0200EFC8\n\
DAT_08020ac0:\n\
     .4byte 0x0200EF00\n\
DAT_08020ac4:\n\
     .4byte 0x0200EF04\n\
LAB_08020ac8:\n\
     ldr        r4,DAT_08020ad8\n\
     sub        r0,r0,r2\n\
     mov        r1,#0xa\n\
     bl         __udivsi3\n\
     ldrh       r1,[r4,#0x6]\n\
     sub        r0,r1,r0\n\
     b          LAB_08020b82\n\
DAT_08020ad8:\n\
     .4byte 0x0200EF30\n\
LAB_08020adc:\n\
     ldr        r0,DAT_08020b30\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020b84\n\
     ldr        r4,DAT_08020b34\n\
     ldr        r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r4,#0x0]\n\
     ldr        r2,DAT_08020b38\n\
     mov        r0,#0x5\n\
     strh       r0,[r2,#0x10]\n\
     ldr        r3,DAT_08020b3c\n\
     ldr        r1,[r3,#0x0]\n\
     lsr        r0,r1,#0x2\n\
     add        r0,#0x1\n\
     ldrh       r6,[r2,#0x6]\n\
     add        r0,r6,r0\n\
     strh       r0,[r2,#0x6]\n\
     add        r1,#0x1\n\
     str        r1,[r3,#0x0]\n\
     mov        r0,#0x6\n\
     ldrsh      r2,[r2,r0]\n\
     ldr        r1,DAT_08020b40\n\
     ldr        r0,DAT_08020b44\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     blt        LAB_08020b84\n\
     str        r5,[r4,#0x0]\n\
     ldr        r1,DAT_08020b48\n\
     mov        r0,#0x8\n\
     ldrh       r1,[r1,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020b4c\n\
     mov        r0,#0x3\n\
     bl         fun_080016f0\n\
     b          LAB_08020b52\n\
.space 1\n\
.space 1\n\
DAT_08020b30:\n\
     .4byte 0x0200EF00\n\
DAT_08020b34:\n\
     .4byte 0x0200F078\n\
DAT_08020b38:\n\
     .4byte 0x0200EF30\n\
DAT_08020b3c:\n\
     .4byte 0x0200EF04\n\
DAT_08020b40:\n\
     .4byte 0x08786984\n\
DAT_08020b44:\n\
     .4byte 0x0200EFCC\n\
DAT_08020b48:\n\
     .4byte 0x0200F0B0\n\
LAB_08020b4c:\n\
     mov        r0,#0x11\n\
     bl         fun_080016f0\n\
LAB_08020b52:\n\
     ldr        r4,DAT_08020bbc\n\
     ldr        r0,DAT_08020bc0\n\
     ldrh       r1,[r4,#0x12]\n\
     and        r0,r1\n\
     mov        r5,#0x0\n\
     strh       r0,[r4,#0x12]\n\
     ldr        r0,DAT_08020bc4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_0800482c\n\
     ldr        r0,DAT_08020bc8\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,DAT_08020bcc\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,DAT_08020bd0\n\
     ldr        r0,DAT_08020bd4\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
LAB_08020b82:\n\
     strh       r0,[r4,#0x6]\n\
LAB_08020b84:\n\
     ldr        r2,DAT_08020bbc\n\
     ldrh       r3,[r2,#0x4]\n\
     mov        r6,#0x4\n\
     ldrsh      r1,[r2,r6]\n\
     ldr        r0,DAT_08020bd8\n\
     cmp        r1,r0\n\
     bgt        LAB_08020b96\n\
     add        r0,r3,#0x2\n\
     strh       r0,[r2,#0x4]\n\
LAB_08020b96:\n\
     ldrh       r0,[r2,#0x10]\n\
     cmp        r0,#0x5\n\
     beq        LAB_08020ba0\n\
     cmp        r0,#0x2\n\
     bne        LAB_08020be4\n\
LAB_08020ba0:\n\
     ldr        r5,DAT_08020bdc\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020bfe\n\
     ldr        r0,DAT_08020be0\n\
     ldrh       r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     bne        LAB_08020bfe\n\
     mov        r0,#0x37\n\
     bl         fun_080016f0\n\
     strh       r4,[r5,#0x0]\n\
     b          LAB_08020bfe\n\
.space 1\n\
.space 1\n\
DAT_08020bbc:\n\
     .4byte 0x0200EF30\n\
DAT_08020bc0:\n\
     .4byte 0x0000FFFE\n\
DAT_08020bc4:\n\
     .4byte 0x0200F144\n\
DAT_08020bc8:\n\
     .4byte 0x0200EF00\n\
DAT_08020bcc:\n\
     .4byte 0x0200F06C\n\
DAT_08020bd0:\n\
     .4byte 0x08786984\n\
DAT_08020bd4:\n\
     .4byte 0x0200EFCC\n\
DAT_08020bd8:\n\
     .4byte 0x000020EF\n\
DAT_08020bdc:\n\
     .4byte 0x0200EEBC\n\
DAT_08020be0:\n\
     .4byte 0x0200F110\n\
LAB_08020be4:\n\
     cmp        r0,#0x5\n\
     beq        LAB_08020bfe\n\
     cmp        r0,#0x2\n\
     beq        LAB_08020bfe\n\
     ldr        r2,DAT_08020c24\n\
     ldr        r1,DAT_08020c28\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,[r1,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08020c2c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08020bfe:\n\
     ldr        r1,DAT_08020c30\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020c64\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_08020c34\n\
     ldr        r0,DAT_08020c38\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x3c\n\
     bl         __udivsi3\n\
     str        r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08020c40\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0x0]\n\
     ldr        r5,DAT_08020c3c\n\
     b          LAB_08020c48\n\
DAT_08020c24:\n\
     .4byte 0x0200F140\n\
DAT_08020c28:\n\
     .4byte 0x0200F0B8\n\
DAT_08020c2c:\n\
     .4byte 0x0200EEBC\n\
DAT_08020c30:\n\
     .4byte 0x0200F074\n\
DAT_08020c34:\n\
     .4byte 0x0200F0FC\n\
DAT_08020c38:\n\
     .4byte 0x0200EFBC\n\
DAT_08020c3c:\n\
     .4byte 0x0200EF20\n\
LAB_08020c40:\n\
     ldr        r1,DAT_08020c9c\n\
     mov        r0,#0x63\n\
     str        r0,[r1,#0x0]\n\
     add        r5,r1,#0x0\n\
LAB_08020c48:\n\
     ldr        r3,DAT_08020ca0\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x1\n\
     add        r1,r1,r0\n\
     ldr        r0,DAT_08020ca4\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     sub        r1,r1,r0\n\
     ldr        r0,[r5,#0x0]\n\
     add        r0,#0x64\n\
     add        r1,r1,r0\n\
     str        r1,[r3,#0x0]\n\
LAB_08020c64:\n\
     ldr        r0,DAT_08020ca8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020c72\n\
     ldr        r1,DAT_08020cac\n\
     mov        r0,#0x78\n\
     str        r0,[r1,#0x0]\n\
LAB_08020c72:\n\
     ldr        r0,DAT_08020cb0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020cbc\n\
     ldr        r0,DAT_08020cb4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020c8a\n\
     ldr        r0,DAT_08020cb8\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020cd4\n\
LAB_08020c8a:\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
     b          LAB_08020cd4\n\
DAT_08020c9c:\n\
     .4byte 0x0200EF20\n\
DAT_08020ca0:\n\
     .4byte 0x020025FC\n\
DAT_08020ca4:\n\
     .4byte 0x0200EFE8\n\
DAT_08020ca8:\n\
     .4byte 0x0200EFD4\n\
DAT_08020cac:\n\
     .4byte 0x0200F0B4\n\
DAT_08020cb0:\n\
     .4byte 0x02005750\n\
DAT_08020cb4:\n\
     .4byte 0x0200EF10\n\
DAT_08020cb8:\n\
     .4byte 0x0200EFBC\n\
LAB_08020cbc:\n\
     ldr        r0,DAT_08020cdc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020cd4\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_080034d4\n\
LAB_08020cd4:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08020cdc:\n\
     .4byte 0x0200F12C\n\
    ");
}
__attribute__((naked)) void fun_08020ce0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     ldr        r2,DAT_08020d50\n\
     ldr        r1,DAT_08020d54\n\
     ldrh       r0,[r1,#0x4]\n\
     strh       r0,[r2,#0x2]\n\
     ldrh       r0,[r1,#0x6]\n\
     strh       r0,[r2,#0x4]\n\
     ldrh       r0,[r1,#0x10]\n\
     strb       r0,[r2,#0x6]\n\
     mov        r5,#0x0\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x6\n\
     mov        r10,r0\n\
     ldr        r1,DAT_08020d58\n\
     mov        r9,r1\n\
LAB_08020d06:\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r9\n\
     ldrh       r6,[r0,#0x0]\n\
     cmp        r6,#0x0\n\
     beq        LAB_08020da8\n\
     add        r0,r5,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020da8\n\
     lsl        r1,r5,#0x4\n\
     ldr        r0,DAT_08020d5c\n\
     add        r4,r1,r0\n\
     ldr        r1,DAT_08020d54\n\
     lsl        r2,r6,#0x5\n\
     add        r3,r2,r1\n\
     ldrh       r0,[r4,#0x2]\n\
     mov        r7,#0x0\n\
     mov        r12,r7\n\
     strh       r0,[r3,#0x4]\n\
     ldrh       r0,[r4,#0x4]\n\
     strh       r0,[r3,#0x6]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     mov        r8,r1\n\
     add        r7,r2,#0x0\n\
     cmp        r0,#0x6d\n\
     bgt        LAB_08020d60\n\
     mov        r0,#0x1\n\
     ldrh       r1,[r3,#0x12]\n\
     orr        r0,r1\n\
     strh       r0,[r3,#0x12]\n\
     mov        r0,#0x2\n\
     strb       r0,[r3,#0x14]\n\
     b          LAB_08020d6a\n\
.space 1\n\
.space 1\n\
DAT_08020d50:\n\
     .4byte 0x02005760\n\
DAT_08020d54:\n\
     .4byte 0x0200EF30\n\
DAT_08020d58:\n\
     .4byte 0x0200EF16\n\
DAT_08020d5c:\n\
     .4byte 0x02005710\n\
LAB_08020d60:\n\
     ldr        r2,DAT_08020e08\n\
     add        r0,r2,#0x0\n\
     ldrh       r1,[r3,#0x12]\n\
     and        r0,r1\n\
     strh       r0,[r3,#0x12]\n\
LAB_08020d6a:\n\
     mov        r0,r8\n\
     add        r2,r7,#0x0\n\
     add        r3,r2,r0\n\
     ldrb       r1,[r4,#0x6]\n\
     mov        r4,#0x0\n\
     strh       r1,[r3,#0x10]\n\
     add        r0,#0x8\n\
     add        r2,r2,r0\n\
     mov        r0,#0x2\n\
     str        r0,[r2,#0x0]\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r3,r2]\n\
     cmp        r0,r10\n\
     ble        LAB_08020d90\n\
     ldr        r0,DAT_08020e0c\n\
     lsl        r1,r6,#0x1\n\
     add        r1,r1,r0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08020d90:\n\
     mov        r0,r8\n\
     add        r0,#0xc\n\
     add        r0,r7,r0\n\
     ldr        r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08020da8\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x4\n\
     add        r0,r7,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_08020da8:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x3\n\
     bls        LAB_08020d06\n\
     ldr        r1,DAT_08020e10\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x2]\n\
     mov        r5,#0x0\n\
     add        r6,r1,#0x0\n\
LAB_08020dbc:\n\
     lsl        r0,r5,#0x1\n\
     add        r1,r6,#0x6\n\
     add        r0,r0,r1\n\
     ldrh       r4,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020de2\n\
     ldr        r0,DAT_08020e0c\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020de2\n\
     ldrh       r0,[r6,#0x2]\n\
     add        r0,#0x1\n\
     strh       r0,[r6,#0x2]\n\
LAB_08020de2:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x3\n\
     bls        LAB_08020dbc\n\
     ldr        r1,DAT_08020e10\n\
     ldrh       r7,[r1,#0x2]\n\
     ldrh       r0,[r1,#0x4]\n\
     cmp        r7,r0\n\
     bne        LAB_08020dfa\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08020dfa:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08020e08:\n\
     .4byte 0x0000FFFE\n\
DAT_08020e0c:\n\
     .4byte 0x0200EEB0\n\
DAT_08020e10:\n\
     .4byte 0x0200EF10\n\
    ");
}
__attribute__((naked)) void fun_08020e14()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r4,DAT_08020e78\n\
     ldrh       r2,[r4,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_08020e84\n\
     bl         fun_08002968\n\
     ldr        r2,DAT_08020e7c\n\
     mov        r1,#0x0\n\
     strh       r0,[r2,#0x4]\n\
     strh       r1,[r2,#0x2]\n\
     strh       r1,[r2,#0x0]\n\
     ldr        r0,DAT_08020e80\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     strh       r1,[r0,#0x4]\n\
     strh       r1,[r0,#0x6]\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r4,r3]\n\
     lsl        r0,r0,#0x1\n\
     add        r2,#0x6\n\
     add        r0,r0,r2\n\
     mov        r5,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     mov        r4,#0x0\n\
     add        r6,r2,#0x0\n\
LAB_08020e48:\n\
     ldr        r0,DAT_08020e78\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r4,r0\n\
     beq        LAB_08020e6c\n\
     add        r0,r4,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020e6c\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r6\n\
     add        r2,r5,#0x0\n\
     add        r1,r2,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r5,r1,#0x10\n\
     strh       r2,[r0,#0x0]\n\
LAB_08020e6c:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08020e48\n\
     b          LAB_08020e8c\n\
DAT_08020e78:\n\
     .4byte 0x02005750\n\
DAT_08020e7c:\n\
     .4byte 0x0200EF10\n\
DAT_08020e80:\n\
     .4byte 0x0200EEB0\n\
LAB_08020e84:\n\
     ldr        r1,DAT_08020e94\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
     strh       r2,[r1,#0x6]\n\
LAB_08020e8c:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08020e94:\n\
     .4byte 0x0200EF10\n\
    ");
}
__attribute__((naked)) void fun_08020e98()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_08020f18\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08020eba\n\
     ldr        r0,DAT_08020f1c\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_08020f20\n\
     ldrh       r0,[r1,#0x6]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,[r1,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020eba\n\
     ldrh       r0,[r0,#0x6]\n\
     strh       r0,[r2,#0x6]\n\
LAB_08020eba:\n\
     ldr        r0,DAT_08020f24\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020ee2\n\
     ldr        r0,DAT_08020f1c\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     add        r0,#0x2\n\
     strh       r0,[r2,#0x2]\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x11\n\
     cmp        r0,r1\n\
     ble        LAB_08020ee2\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     ldrh       r1,[r2,#0x12]\n\
     orr        r0,r1\n\
     strh       r0,[r2,#0x12]\n\
LAB_08020ee2:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020f14\n\
     ldr        r0,DAT_08020f28\n\
     ldr        r2,[r0,#0x0]\n\
     lsl        r0,r2,#0x3\n\
     add        r0,r0,r2\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r1,r3,#0x0\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r2\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r2,r3,#0x0\n\
     sub        r2,r2,r0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     ldr        r0,DAT_08020f1c\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_0800482c\n\
LAB_08020f14:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08020f18:\n\
     .4byte 0x0200F06C\n\
DAT_08020f1c:\n\
     .4byte 0x0200F144\n\
DAT_08020f20:\n\
     .4byte 0x0200EF30\n\
DAT_08020f24:\n\
     .4byte 0x0200F080\n\
DAT_08020f28:\n\
     .4byte 0x0200F078\n\
    ");
}
__attribute__((naked)) void fun_08020f2c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_08020f68\n\
     ldrh       r2,[r0,#0x4]\n\
     ldr        r3,DAT_08020f6c\n\
     add        r1,r2,r3\n\
     lsl        r1,r1,#0x10\n\
     mov        r2,#0x98\n\
     lsl        r2,r2,#0x11\n\
     add        r3,r0,#0x0\n\
     ldr        r4,DAT_08020f70\n\
     cmp        r1,r2\n\
     bhi        LAB_08020f4a\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020f96\n\
LAB_08020f4a:\n\
     ldrh       r1,[r3,#0x4]\n\
     ldr        r2,DAT_08020f74\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     ldr        r1,DAT_08020f78\n\
     cmp        r0,r1\n\
     bhi        LAB_08020f80\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020f80\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r5,DAT_08020f7c\n\
     b          LAB_08020fca\n\
.space 1\n\
.space 1\n\
DAT_08020f68:\n\
     .4byte 0x0200EF30\n\
DAT_08020f6c:\n\
     .4byte 0xFFFFFB90\n\
DAT_08020f70:\n\
     .4byte 0x0200F0D0\n\
DAT_08020f74:\n\
     .4byte 0xFFFFFA5F\n\
DAT_08020f78:\n\
     .4byte 0x07460000\n\
DAT_08020f7c:\n\
     .4byte 0x0200EED0\n\
LAB_08020f80:\n\
     ldrh       r1,[r3,#0x4]\n\
     ldr        r2,DAT_08020fa8\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x98\n\
     lsl        r1,r1,#0x11\n\
     cmp        r0,r1\n\
     bhi        LAB_08020fb0\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020fb0\n\
LAB_08020f96:\n\
     mov        r0,#0xf0\n\
     str        r0,[r4,#0x4]\n\
     ldr        r1,DAT_08020fac\n\
     str        r0,[r1,#0x4]\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x0]\n\
     add        r5,r1,#0x0\n\
     b          LAB_08020fca\n\
.space 1\n\
.space 1\n\
DAT_08020fa8:\n\
     .4byte 0xFFFFF318\n\
DAT_08020fac:\n\
     .4byte 0x0200EED0\n\
LAB_08020fb0:\n\
     ldrh       r1,[r3,#0x4]\n\
     ldr        r2,DAT_08020fec\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     ldr        r1,DAT_08020ff0\n\
     ldr        r5,DAT_08020ff4\n\
     cmp        r0,r1\n\
     bhi        LAB_08020fca\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08020fca\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_08020fca:\n\
     ldrh       r1,[r3,#0x4]\n\
     ldr        r2,DAT_08020ff8\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x98\n\
     lsl        r1,r1,#0x11\n\
     cmp        r0,r1\n\
     bhi        LAB_08020ffc\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08020ffc\n\
     mov        r0,#0xf0\n\
     str        r0,[r4,#0x4]\n\
     str        r0,[r5,#0x4]\n\
     mov        r0,#0x1\n\
     b          LAB_08021050\n\
.space 1\n\
.space 1\n\
DAT_08020fec:\n\
     .4byte 0xFFFFF1E7\n\
DAT_08020ff0:\n\
     .4byte 0x06560000\n\
DAT_08020ff4:\n\
     .4byte 0x0200EED0\n\
DAT_08020ff8:\n\
     .4byte 0xFFFFEB90\n\
LAB_08020ffc:\n\
     ldrh       r1,[r3,#0x4]\n\
     ldr        r2,DAT_08021030\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     ldr        r1,DAT_08021034\n\
     cmp        r0,r1\n\
     bhi        LAB_08021010\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802104e\n\
LAB_08021010:\n\
     ldrh       r1,[r3,#0x4]\n\
     ldr        r2,DAT_08021038\n\
     add        r0,r1,r2\n\
     lsl        r0,r0,#0x10\n\
     mov        r1,#0x98\n\
     lsl        r1,r1,#0x11\n\
     cmp        r0,r1\n\
     bhi        LAB_0802103c\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802103c\n\
     mov        r0,#0xf0\n\
     str        r0,[r4,#0x4]\n\
     str        r0,[r5,#0x4]\n\
     mov        r0,#0x1\n\
     b          LAB_08021050\n\
DAT_08021030:\n\
     .4byte 0xFFFFEA5F\n\
DAT_08021034:\n\
     .4byte 0x07460000\n\
DAT_08021038:\n\
     .4byte 0xFFFFE318\n\
LAB_0802103c:\n\
     mov        r0,#0x4\n\
     ldrsh      r1,[r3,r0]\n\
     ldr        r0,DAT_0802108c\n\
     cmp        r1,r0\n\
     ble        LAB_08021052\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802104e\n\
     b          LAB_08021176\n\
LAB_0802104e:\n\
     mov        r0,#0x0\n\
LAB_08021050:\n\
     strh       r0,[r4,#0x0]\n\
LAB_08021052:\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802105a\n\
     b          LAB_08021176\n\
LAB_0802105a:\n\
     ldr        r0,DAT_08021090\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021072\n\
     ldr        r1,DAT_08021094\n\
     ldr        r0,[r4,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,[r5,#0x4]\n\
     sub        r0,r0,r1\n\
     str        r0,[r5,#0x4]\n\
LAB_08021072:\n\
     ldr        r0,DAT_08021098\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x14\n\
     bl         __umodsi3\n\
     cmp        r0,#0x9\n\
     bhi        LAB_0802109c\n\
     mov        r1,#0x0\n\
     mov        r0,#0x1\n\
     strh       r0,[r4,#0x2]\n\
     strh       r1,[r5,#0x2]\n\
     b          LAB_080210a4\n\
.space 1\n\
.space 1\n\
DAT_0802108c:\n\
     .4byte 0x00001E18\n\
DAT_08021090:\n\
     .4byte 0x0200F080\n\
DAT_08021094:\n\
     .4byte 0x0200EFD0\n\
DAT_08021098:\n\
     .4byte 0x0200EFF4\n\
LAB_0802109c:\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x2]\n\
     mov        r0,#0x1\n\
     strh       r0,[r5,#0x2]\n\
LAB_080210a4:\n\
     ldrh       r0,[r4,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080210e4\n\
     ldr        r2,[r4,#0x14]\n\
     ldr        r1,DAT_080210e0\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,[r4,#0x18]\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r1,[r4,#0x14]\n\
     ldr        r0,[r4,#0x4]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x14]\n\
     ldrh       r0,[r4,#0x8]\n\
     add        r0,#0x38\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x30\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r4,#0x8]\n\
     add        r0,#0x38\n\
     strh       r0,[r1,#0x4]\n\
     b          LAB_080210fa\n\
.space 1\n\
.space 1\n\
DAT_080210e0:\n\
     .4byte 0x0000FDFF\n\
LAB_080210e4:\n\
     ldr        r1,[r4,#0x14]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r2,r3,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_080210fa:\n\
     ldrh       r0,[r5,#0x2]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802116c\n\
     ldr        r2,[r5,#0x14]\n\
     ldr        r1,DAT_08021168\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r2,[r5,#0x18]\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r2,[r5,#0xc]\n\
     add        r0,r1,#0x0\n\
     ldrh       r3,[r2,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r2,#0x12]\n\
     ldr        r0,[r5,#0x10]\n\
     ldrh       r2,[r0,#0x12]\n\
     and        r1,r2\n\
     strh       r1,[r0,#0x12]\n\
     ldr        r1,[r5,#0x14]\n\
     ldr        r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r5,#0x14]\n\
     ldrh       r0,[r5,#0x8]\n\
     add        r0,#0x38\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r5,#0x18]\n\
     ldrh       r0,[r5,#0x4]\n\
     add        r0,#0x30\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r5,#0x18]\n\
     ldrh       r0,[r5,#0x8]\n\
     add        r0,#0x38\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r5,#0xc]\n\
     ldrh       r0,[r5,#0x4]\n\
     add        r0,#0x10\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r5,#0xc]\n\
     ldr        r0,[r5,#0x8]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r5,#0x10]\n\
     ldrh       r0,[r5,#0x4]\n\
     add        r0,#0x10\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r5,#0x10]\n\
     ldrh       r0,[r5,#0x8]\n\
     add        r0,#0x40\n\
     strh       r0,[r1,#0x4]\n\
     b          LAB_080211ac\n\
.space 1\n\
.space 1\n\
DAT_08021168:\n\
     .4byte 0x0000FDFF\n\
LAB_0802116c:\n\
     ldr        r1,[r5,#0x14]\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x2\n\
     add        r2,r3,#0x0\n\
     b          LAB_0802118e\n\
LAB_08021176:\n\
     ldr        r1,[r4,#0x14]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x2\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x18]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r5,#0x14]\n\
LAB_0802118e:\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r5,#0x18]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r5,#0xc]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r5,#0x10]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_080211ac:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080211b4()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,PTR_DAT_080211e0\n\
     ldr        r2,PTR_DAT_080211e4\n\
     ldr        r1,[r2,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080211e8\n\
     ldr        r0,[r0,#0x0]\n\
     lsr        r0,r0,#0x8\n\
     add        r0,#0x50\n\
     str        r0,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_080211ec\n\
     sub        r1,r0,r1\n\
     str        r1,[r2,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,PTR_DAT_080211f0\n\
     ldrh       r1,[r1,#0x0]\n\
     bl         fun_0803aa28\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_080211e0:\n\
     .4byte       DAT_0200f104\n\
PTR_DAT_080211e4:\n\
     .4byte       DAT_0200f070\n\
PTR_DAT_080211e8:\n\
     .4byte       DAT_0200f114\n\
PTR_DAT_080211ec:\n\
     .4byte       DAT_0200efd0\n\
PTR_DAT_080211f0:\n\
     .4byte       DAT_0200f0f4\n\
    ");
}
__attribute__((naked)) void fun_080211f4()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,DAT_08021230\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r4,DAT_08021234\n\
     add        r1,r4,#0x0\n\
     bl         fun_08002f00\n\
     ldr        r2,DAT_08021238\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0xa\n\
     bl         fun_0803c010\n\
     ldr        r3,DAT_0802123c\n\
     ldr        r2,[r3,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_08021228\n\
     ldr        r0,DAT_08021240\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     sub        r0,r2,#0x1\n\
     str        r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08021228\n\
     ldr        r1,DAT_08021244\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08021228:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08021230:\n\
     .4byte 0x0200EFBC\n\
DAT_08021234:\n\
     .4byte 0x0200F000\n\
DAT_08021238:\n\
     .4byte 0x0865FB7C\n\
DAT_0802123c:\n\
     .4byte 0x0200F0B4\n\
DAT_08021240:\n\
     .4byte 0x0200EFD4\n\
DAT_08021244:\n\
     .4byte 0x0200F12C\n\
    ");
}
__attribute__((naked)) void fun_08021248()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_08021260\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0803a980\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08021260:\n\
     .4byte 0x0200F144\n\
    ");
}
__attribute__((naked)) void fun_08021264()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0802073c\n\
     bl         fun_0801fca8\n\
     ldr        r0,DAT_08021298\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802127e\n\
     bl         fun_080211b4\n\
     bl         fun_0801fd50\n\
LAB_0802127e:\n\
     bl         fun_08020e98\n\
     bl         fun_08020654\n\
     bl         fun_08020370\n\
     bl         fun_080211f4\n\
     bl         fun_0803a00c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08021298:\n\
     .4byte 0x0200F080\n\
    ");
}
int fun_0802129c()
{
    return 1;
}
int fun_080212a0()
{
    return 1;
}
__attribute__((naked)) void fun_080212a4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_080212ec\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     bl         fun_08002c9c\n\
     lsl        r0,r0,#0x10\n\
     asr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     ble        LAB_080212e4\n\
     ldr        r5,DAT_080212f0\n\
     ldr        r0,[r5,#0x0]\n\
     lsl        r4,r4,#0x11\n\
     lsr        r1,r4,#0x10\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     bl         fun_0800482c\n\
     asr        r4,r4,#0x10\n\
     mov        r0,#0x20\n\
     add        r1,r4,#0x0\n\
     bl         fun_08002c84\n\
     ldr        r1,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x11\n\
     sub        r0,#0x1b\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x90\n\
     strh       r0,[r1,#0x4]\n\
LAB_080212e4:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080212ec:\n\
     .4byte 0x0200F238\n\
DAT_080212f0:\n\
     .4byte 0x0200F250\n\
    ");
}
__attribute__((naked)) void fun_080212f4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x14\n\
     ldr        r5,DAT_08021330\n\
     ldr        r4,DAT_08021334\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021310\n\
     bl         fun_0800117c\n\
     mov        r0,#0x1\n\
     bl         fun_08002ccc\n\
     mov        r0,#0x3\n\
     strb       r0,[r5,#0x0]\n\
LAB_08021310:\n\
     ldr        r0,DAT_08021338\n\
     bl         fun_08001170\n\
     bl         fun_080098f8\n\
     ldrh       r1,[r4,#0x8]\n\
     ldr        r0,DAT_0802133c\n\
     cmp        r1,r0\n\
     beq        LAB_0802134c\n\
     cmp        r1,r0\n\
     bgt        LAB_08021340\n\
     sub        r0,#0x1\n\
     cmp        r1,r0\n\
     beq        LAB_08021358\n\
     b          LAB_0802136a\n\
.space 1\n\
.space 1\n\
DAT_08021330:\n\
     .4byte 0x02005760\n\
DAT_08021334:\n\
     .4byte 0x02005750\n\
DAT_08021338:\n\
     .4byte 0x08021B41\n\
DAT_0802133c:\n\
     .4byte 0x0000138A\n\
LAB_08021340:\n\
     ldr        r0,DAT_08021348\n\
     cmp        r1,r0\n\
     beq        LAB_08021364\n\
     b          LAB_0802136a\n\
DAT_08021348:\n\
     .4byte 0x0000138C\n\
LAB_0802134c:\n\
     ldr        r1,DAT_08021354\n\
     mov        r0,#0x1\n\
     b          LAB_08021368\n\
.space 1\n\
.space 1\n\
DAT_08021354:\n\
     .4byte 0x0200F230\n\
LAB_08021358:\n\
     ldr        r1,DAT_08021360\n\
     mov        r0,#0x2\n\
     b          LAB_08021368\n\
.space 1\n\
.space 1\n\
DAT_08021360:\n\
     .4byte 0x0200F230\n\
LAB_08021364:\n\
     ldr        r1,DAT_0802147c\n\
     mov        r0,#0x0\n\
LAB_08021368:\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802136a:\n\
     add        r2,sp,#0x10\n\
     mov        r3,#0x0\n\
     strh       r3,[r2,#0x0]\n\
     ldr        r0,DAT_08021480\n\
     str        r2,[r0,#0x0]\n\
     mov        r1,#0xc0\n\
     lsl        r1,r1,#0x13\n\
     str        r1,[r0,#0x4]\n\
     ldr        r1,DAT_08021484\n\
     str        r1,[r0,#0x8]\n\
     ldr        r1,[r0,#0x8]\n\
     strh       r3,[r2,#0x0]\n\
     str        r2,[r0,#0x0]\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x13\n\
     str        r1,[r0,#0x4]\n\
     ldr        r1,DAT_08021488\n\
     str        r1,[r0,#0x8]\n\
     ldr        r0,[r0,#0x8]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xba\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802148c\n\
     bl         fun_08039e64\n\
     ldr        r1,PTR_DAT_08021490\n\
     mov        r0,#0xf0\n\
     strb       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     mov        r0,#0x2\n\
     bl         fun_08004670\n\
     mov        r1,#0xfa\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     bl         fun_0803a140\n\
     bl         fun_08021650\n\
     ldr        r4,PTR_DAT_08021494\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080213d8\n\
     ldr        r1,PTR_DAT_08021498\n\
     mov        r0,#0x7\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r1,#0x3]\n\
     and        r0,r2\n\
     strb       r0,[r1,#0x3]\n\
LAB_080213d8:\n\
     ldr        r1,PTR_DAT_0802149c\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_080214a0\n\
     add        r0,r0,r1\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     mov        r0,#0x7\n\
     and        r1,r0\n\
     mov        r0,#0x8\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r2,[r5,#0x2]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     strb       r0,[r5,#0x2]\n\
     ldr        r1,DAT_080214a4\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r4,r2]\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x4]\n\
     strh       r0,[r5,#0xc]\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r4,r2]\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x6]\n\
     strh       r0,[r5,#0xe]\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_080214a8\n\
LAB_08021418:\n\
     ldr        r0,DAT_080214ac\n\
     bl         fun_08003998\n\
     lsl        r2,r4,#0x2\n\
     add        r2,r2,r5\n\
     str        r0,[r2,#0x0]\n\
     lsl        r1,r4,#0x4\n\
     sub        r1,r1,r4\n\
     lsl        r1,r1,#0x2\n\
     sub        r1,#0x1\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08021418\n\
     ldr        r1,DAT_080214b0\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080214b4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080214b8\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_080214bc\n\
     mov        r2,#0xf0\n\
     lsl        r2,r2,#0x4\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802147c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_080214c6\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080214c0\n\
     cmp        r0,#0x0\n\
     beq        LAB_080214cc\n\
     b          LAB_080214d6\n\
DAT_0802147c:\n\
     .4byte 0x0200F230\n\
DAT_08021480:\n\
     .4byte 0x040000D4\n\
DAT_08021484:\n\
     .4byte 0x8100C000\n\
DAT_08021488:\n\
     .4byte 0x81000200\n\
PTR_DAT_0802148c:\n\
     .4byte       DAT_0200c8d0\n\
PTR_DAT_08021490:\n\
     .4byte       DAT_0200f1f0\n\
PTR_DAT_08021494:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_08021498:\n\
     .4byte       DAT_02005760\n\
PTR_DAT_0802149c:\n\
     .4byte       DAT_020117e0\n\
DAT_080214a0:\n\
     .4byte 0x00000E54\n\
DAT_080214a4:\n\
     .4byte 0x0200F150\n\
DAT_080214a8:\n\
     .4byte 0x0200F240\n\
DAT_080214ac:\n\
     .4byte 0x084495E8\n\
DAT_080214b0:\n\
     .4byte 0x0200F238\n\
DAT_080214b4:\n\
     .4byte 0x084495F8\n\
DAT_080214b8:\n\
     .4byte 0x0200F250\n\
DAT_080214bc:\n\
     .4byte 0x0200F254\n\
LAB_080214c0:\n\
     cmp        r0,#0x2\n\
     beq        LAB_080214d2\n\
     b          LAB_080214d6\n\
LAB_080214c6:\n\
     bl         fun_0802238c\n\
     b          LAB_080214d6\n\
LAB_080214cc:\n\
     bl         fun_08021e14\n\
     b          LAB_080214d6\n\
LAB_080214d2:\n\
     bl         fun_08021eac\n\
LAB_080214d6:\n\
     bl         fun_08021a60\n\
     bl         fun_0800dd24\n\
     mov        r0,#0x0\n\
     add        sp,#0x14\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080214e8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     mov        r1,#0x0\n\
     lsl        r0,r0,#0x18\n\
     asr        r6,r0,#0x18\n\
     lsl        r0,r6,#0x5\n\
     mov        r9,r0\n\
     mov        r2,#0x20\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     mov        r8,r2\n\
     mov        r3,#0x8\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     mov        r12,r3\n\
LAB_08021506:\n\
     lsl        r0,r1,#0x18\n\
     asr        r4,r0,#0x18\n\
     add        r5,r0,#0x0\n\
     cmp        r4,r6\n\
     beq        LAB_0802158a\n\
     ldr        r3,DAT_08021564\n\
     lsl        r1,r4,#0x5\n\
     add        r0,r3,#0x0\n\
     add        r0,#0x8\n\
     add        r0,r1,r0\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_0802158a\n\
     mov        r7,r9\n\
     add        r2,r7,r3\n\
     add        r1,r1,r3\n\
     ldrh       r3,[r2,#0x4]\n\
     ldrh       r7,[r1,#0x4]\n\
     sub        r0,r3,r7\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     ldrh       r2,[r2,#0x6]\n\
     ldrh       r1,[r1,#0x6]\n\
     sub        r0,r2,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     add        r2,r1,#0x0\n\
     ldr        r0,DAT_08021568\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0802156c\n\
     lsl        r0,r3,#0x10\n\
     mov        r2,#0xf8\n\
     lsl        r2,r2,#0xd\n\
     add        r0,r0,r2\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x3e\n\
     bhi        LAB_0802158a\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r8\n\
     ble        LAB_0802158a\n\
     cmp        r0,#0x1f\n\
     bgt        LAB_0802158a\n\
     add        r0,r4,#0x0\n\
     b          LAB_0802159c\n\
.space 1\n\
.space 1\n\
DAT_08021564:\n\
     .4byte 0x0200F150\n\
DAT_08021568:\n\
     .4byte 0x0200F230\n\
LAB_0802156c:\n\
     lsl        r0,r3,#0x10\n\
     mov        r3,#0xe0\n\
     lsl        r3,r3,#0xb\n\
     add        r0,r0,r3\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xe\n\
     bhi        LAB_0802158a\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,r12\n\
     ble        LAB_0802158a\n\
     cmp        r0,#0x7\n\
     bgt        LAB_0802158a\n\
     add        r0,r4,#0x0\n\
     b          LAB_0802159c\n\
LAB_0802158a:\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x11\n\
     add        r0,r5,r7\n\
     lsr        r1,r0,#0x18\n\
     asr        r0,r0,#0x18\n\
     cmp        r0,#0x4\n\
     ble        LAB_08021506\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_0802159c:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_080215a8()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_080215d4\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080215b6\n\
     sub        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_080215b6:\n\
     bl         fun_0803c1a4\n\
     bl         fun_080212a4\n\
     bl         fun_0803ab30\n\
     ldr        r0,DAT_080215d8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_080215e2\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080215dc\n\
     cmp        r0,#0x0\n\
     beq        LAB_080215e8\n\
     b          LAB_080215f2\n\
DAT_080215d4:\n\
     .4byte 0x0200F1F0\n\
DAT_080215d8:\n\
     .4byte 0x0200F230\n\
LAB_080215dc:\n\
     cmp        r0,#0x2\n\
     beq        LAB_080215ee\n\
     b          LAB_080215f2\n\
LAB_080215e2:\n\
     bl         fun_08022320\n\
     b          LAB_080215f2\n\
LAB_080215e8:\n\
     bl         fun_08021bb0\n\
     b          LAB_080215f2\n\
LAB_080215ee:\n\
     bl         fun_08021f00\n\
LAB_080215f2:\n\
     ldr        r1,PTR_DAT_08021618\n\
     ldrh       r0,[r1,#0x6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021602\n\
     ldr        r0,PTR_DAT_0802161c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     beq        LAB_08021628\n\
LAB_08021602:\n\
     ldr        r2,PTR_DAT_08021620\n\
     ldr        r0,PTR_DAT_08021624\n\
     mov        r3,#0x4\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r1,r1,#0x5\n\
     add        r1,r1,r2\n\
     ldrh       r0,[r1,#0x4]\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_0803a140\n\
     b          LAB_08021642\n\
PTR_DAT_08021618:\n\
     .4byte       DAT_02005710\n\
PTR_DAT_0802161c:\n\
     .4byte       DAT_0200f230\n\
PTR_DAT_08021620:\n\
     .4byte       DAT_0200f150\n\
PTR_DAT_08021624:\n\
     .4byte       DAT_02005750\n\
LAB_08021628:\n\
     ldr        r2,DAT_0802164c\n\
     ldrb       r1,[r1,#0x3]\n\
     lsl        r1,r1,#0x1d\n\
     lsr        r0,r1,#0x1e\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x4]\n\
     lsr        r1,r1,#0x1e\n\
     lsl        r1,r1,#0x5\n\
     add        r1,r1,r2\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_0803a140\n\
LAB_08021642:\n\
     bl         fun_0803a00c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_0802164c:\n\
     .4byte 0x0200F150\n\
    ");
}
__attribute__((naked)) void fun_08021650()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r5,#0x0\n\
     mov        r8,r5\n\
LAB_0802165a:\n\
     lsl        r0,r5,#0x5\n\
     ldr        r7,DAT_080216b8\n\
     add        r4,r0,r7\n\
     mov        r0,#0x2c\n\
     add        r1,r5,#0x0\n\
     mul        r1,r0\n\
     ldr        r0,DAT_080216bc\n\
     add        r6,r1,r0\n\
     add        r0,r4,#0x0\n\
     add        r1,r6,#0x0\n\
     bl         fun_080004ac\n\
     strh       r5,[r4,#0x16]\n\
     cmp        r5,#0x4\n\
     beq        LAB_08021694\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r5\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_080216c0\n\
     add        r0,r0,r1\n\
     str        r4,[r0,#0x0]\n\
     str        r6,[r0,#0x4]\n\
     ldr        r1,DAT_080216c4\n\
     str        r1,[r0,#0x8]\n\
     bl         fun_0803ab8c\n\
     ldr        r0,DAT_080216c8\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x0]\n\
LAB_08021694:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0x4\n\
     bls        LAB_0802165a\n\
     add        r0,r7,#0x0\n\
     mov        r1,#0x5\n\
     bl         fun_0803aa14\n\
     ldr        r0,DAT_080216cc\n\
     bl         fun_080045f0\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080216b8:\n\
     .4byte 0x0200F150\n\
DAT_080216bc:\n\
     .4byte 0x08786A94\n\
DAT_080216c0:\n\
     .4byte 0x0200F200\n\
DAT_080216c4:\n\
     .4byte 0x080216D1\n\
DAT_080216c8:\n\
     .4byte 0x020117D0\n\
DAT_080216cc:\n\
     .4byte 0x084496C8\n\
    ");
}
__attribute__((naked)) void fun_080216d0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     add        r7,r0,#0x0\n\
     ldrb       r0,[r7,#0x16]\n\
     mov        r10,r0\n\
     ldr        r0,PTR_DAT_08021728\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r0,r2]\n\
     add        r6,r0,#0x0\n\
     cmp        r10,r1\n\
     beq        LAB_080216f0\n\
     b          LAB_0802187c\n\
LAB_080216f0:\n\
     ldr        r3,PTR_DAT_0802172c\n\
     str        r3,[sp,#0x4]\n\
     ldr        r2,PTR_DAT_08021730\n\
     mov        r4,r10\n\
     lsl        r0,r4,#0x5\n\
     add        r0,r0,r2\n\
     ldrh       r1,[r0,#0x4]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     mov        r5,#0x4\n\
     ldrsh      r0,[r6,r5]\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x6]\n\
     mov        r1,sp\n\
     add        r1,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     ldr        r0,PTR_DAT_08021734\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r8,r2\n\
     cmp        r0,#0x0\n\
     blt        LAB_0802177e\n\
     cmp        r0,#0x1\n\
     ble        LAB_08021738\n\
     cmp        r0,#0x2\n\
     beq        LAB_0802173e\n\
     b          LAB_0802177e\n\
PTR_DAT_08021728:\n\
     .4byte       DAT_02005750\n\
PTR_DAT_0802172c:\n\
     .4byte       DAT_02005760\n\
PTR_DAT_08021730:\n\
     .4byte       DAT_0200f150\n\
PTR_DAT_08021734:\n\
     .4byte       DAT_0200f230\n\
LAB_08021738:\n\
     mov        r0,#0x4\n\
     ldrsh      r2,[r6,r0]\n\
     b          LAB_08021766\n\
LAB_0802173e:\n\
     ldr        r3,DAT_08021800\n\
     ldrb       r1,[r3,#0x3]\n\
     lsl        r2,r1,#0x1d\n\
     lsr        r0,r2,#0x1e\n\
     mov        r5,#0x4\n\
     ldrsh      r1,[r6,r5]\n\
     cmp        r0,r1\n\
     beq        LAB_08021754\n\
     ldrh       r0,[r3,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08021760\n\
LAB_08021754:\n\
     lsr        r0,r2,#0x1e\n\
     cmp        r0,r1\n\
     bne        LAB_0802177e\n\
     ldrh       r0,[r3,#0x6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802177e\n\
LAB_08021760:\n\
     ldr        r0,DAT_08021804\n\
     mov        r6,#0x4\n\
     ldrsh      r2,[r0,r6]\n\
LAB_08021766:\n\
     lsl        r0,r2,#0x5\n\
     add        r0,r8\n\
     mov        r1,#0x2c\n\
     mul        r1,r2\n\
     ldr        r2,DAT_08021808\n\
     add        r1,r1,r2\n\
     mov        r2,sp\n\
     mov        r3,sp\n\
     add        r3,#0x2\n\
     bl         fun_0800ce7c\n\
     mov        r4,#0x1\n\
LAB_0802177e:\n\
     bl         fun_080014ec\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802183c\n\
     ldr        r0,DAT_0802180c\n\
     mov        r9,r0\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0xa\n\
     ble        LAB_0802183c\n\
     cmp        r4,#0x0\n\
     beq        LAB_0802183c\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     ldrh       r2,[r0,#0x2]\n\
     add        r0,r7,#0x0\n\
     bl         fun_0803aaf0\n\
     ldr        r2,DAT_08021804\n\
     mov        r8,r2\n\
     mov        r3,#0x4\n\
     ldrsh      r1,[r2,r3]\n\
     lsl        r0,r1,#0x5\n\
     ldr        r6,DAT_08021810\n\
     add        r0,r0,r6\n\
     mov        r5,#0x2c\n\
     mul        r1,r5\n\
     ldr        r4,DAT_08021808\n\
     add        r1,r1,r4\n\
     mov        r2,sp\n\
     mov        r3,sp\n\
     add        r3,#0x2\n\
     bl         fun_0800ce7c\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     ldrh       r2,[r0,#0x2]\n\
     add        r0,r7,#0x0\n\
     bl         fun_0803aaf0\n\
     mov        r0,r8\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r0,r2]\n\
     lsl        r0,r1,#0x5\n\
     add        r0,r0,r6\n\
     mul        r1,r5\n\
     add        r1,r1,r4\n\
     mov        r2,sp\n\
     mov        r3,sp\n\
     add        r3,#0x2\n\
     bl         fun_0800ce7c\n\
     ldr        r0,DAT_08021814\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     bne        LAB_08021818\n\
     ldr        r0,DAT_08021800\n\
     ldrh       r0,[r0,#0x6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021818\n\
     mov        r3,r9\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x5\n\
     strh       r0,[r3,#0x0]\n\
     b          LAB_08021822\n\
DAT_08021800:\n\
     .4byte 0x02005710\n\
DAT_08021804:\n\
     .4byte 0x02005750\n\
DAT_08021808:\n\
     .4byte 0x08786A94\n\
DAT_0802180c:\n\
     .4byte 0x0200F238\n\
DAT_08021810:\n\
     .4byte 0x0200F150\n\
DAT_08021814:\n\
     .4byte 0x0200F230\n\
LAB_08021818:\n\
     ldr        r0,DAT_08021834\n\
     ldrh       r1,[r0,#0x0]\n\
     sub        r1,#0xa\n\
     strh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
LAB_08021822:\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r3,r4]\n\
     ldr        r6,DAT_08021838\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08021894\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     b          LAB_08021894\n\
.space 1\n\
.space 1\n\
DAT_08021834:\n\
     .4byte 0x0200F238\n\
DAT_08021838:\n\
     .4byte 0x02005750\n\
LAB_0802183c:\n\
     ldr        r0,PTR_DAT_0802186c\n\
     ldrh       r2,[r0,#0x0]\n\
     add        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08021870\n\
     add        r3,r0,#0x0\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,#0x2\n\
     bne        LAB_0802185a\n\
     ldr        r0,PTR_DAT_08021874\n\
     ldrh       r0,[r0,#0x6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802185a\n\
     add        r0,r2,#0x1\n\
     strh       r0,[r3,#0x0]\n\
LAB_0802185a:\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r3,r5]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x3\n\
     ldr        r6,PTR_DAT_08021878\n\
     cmp        r0,r1\n\
     ble        LAB_08021894\n\
     strh       r1,[r3,#0x0]\n\
     b          LAB_08021894\n\
PTR_DAT_0802186c:\n\
     .4byte       DAT_0200f238\n\
PTR_DAT_08021870:\n\
     .4byte       DAT_0200f230\n\
PTR_DAT_08021874:\n\
     .4byte       DAT_02005710\n\
PTR_DAT_08021878:\n\
     .4byte       DAT_02005750\n\
LAB_0802187c:\n\
     mov        r0,r10\n\
     lsl        r1,r0,#0x4\n\
     ldr        r0,DAT_080218a4\n\
     add        r1,r1,r0\n\
     str        r1,[sp,#0x4]\n\
     mov        r1,sp\n\
     ldr        r2,[sp,#0x4]\n\
     ldrh       r0,[r2,#0xc]\n\
     strh       r0,[r1,#0x0]\n\
     add        r1,#0x2\n\
     ldrh       r0,[r2,#0xe]\n\
     strh       r0,[r1,#0x0]\n\
LAB_08021894:\n\
     ldr        r3,[sp,#0x4]\n\
     ldrb       r1,[r3,#0x2]\n\
     lsl        r0,r1,#0x1d\n\
     lsr        r0,r0,#0x1d\n\
     cmp        r0,#0x0\n\
     bne        LAB_080218a8\n\
     mov        r2,#0x4\n\
     b          LAB_080218ae\n\
DAT_080218a4:\n\
     .4byte 0x02005710\n\
LAB_080218a8:\n\
     sub        r0,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
LAB_080218ae:\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r6,r4]\n\
     cmp        r10,r0\n\
     beq        LAB_080218b8\n\
     b          LAB_080219c8\n\
LAB_080218b8:\n\
     ldr        r5,[sp,#0x4]\n\
     ldrh       r5,[r5,#0x2]\n\
     lsl        r0,r5,#0x17\n\
     lsr        r4,r0,#0x1e\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r6,[r7,#0x4]\n\
     cmp        r0,r6\n\
     bne        LAB_080218d4\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x2]\n\
     ldrh       r1,[r7,#0x6]\n\
     cmp        r0,r1\n\
     beq        LAB_08021998\n\
LAB_080218d4:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r7,r3]\n\
     cmp        r1,r0\n\
     bge        LAB_080218e4\n\
     mov        r4,#0x3\n\
     b          LAB_08021902\n\
LAB_080218e4:\n\
     cmp        r1,r0\n\
     ble        LAB_080218ec\n\
     mov        r4,#0x2\n\
     b          LAB_08021902\n\
LAB_080218ec:\n\
     mov        r5,sp\n\
     ldrh       r1,[r5,#0x2]\n\
     mov        r6,#0x6\n\
     ldrsh      r0,[r7,r6]\n\
     cmp        r1,r0\n\
     ble        LAB_080218fc\n\
     mov        r4,#0x1\n\
     b          LAB_08021902\n\
LAB_080218fc:\n\
     cmp        r1,r0\n\
     bge        LAB_08021902\n\
     mov        r4,#0x0\n\
LAB_08021902:\n\
     mov        r0,#0x1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021998\n\
     ldr        r1,DAT_08021980\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     lsl        r6,r2,#0x10\n\
     ldr        r5,DAT_08021984\n\
     cmp        r0,#0x3\n\
     bls        LAB_08021944\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r2,[r5,#0x0]\n\
     add        r2,#0x1\n\
     strh       r2,[r5,#0x0]\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     ldr        r3,DAT_08021988\n\
     asr        r1,r6,#0x10\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r3\n\
     ldrh       r0,[r0,#0x8]\n\
     sub        r0,#0x1\n\
     cmp        r2,r0\n\
     blt        LAB_08021944\n\
     mov        r1,r8\n\
     strh       r1,[r5,#0x0]\n\
LAB_08021944:\n\
     ldr        r2,DAT_0802198c\n\
     strb       r4,[r2,#0x0]\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r1,#0x1\n\
     lsl        r0,r1,#0x10\n\
     lsr        r5,r0,#0x10\n\
     mov        r0,#0xf\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x3\n\
     mov        r0,#0x79\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldr        r3,DAT_08021990\n\
     ldrb       r3,[r3,#0x2]\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     ldr        r4,DAT_08021990\n\
     strb       r0,[r4,#0x2]\n\
     ldrb       r0,[r2,#0x0]\n\
     add        r4,r0,#0x0\n\
     mov        r1,#0x3\n\
     and        r1,r4\n\
     lsl        r1,r1,#0x7\n\
     ldr        r0,DAT_08021994\n\
     ldr        r2,DAT_08021990\n\
     ldrh       r2,[r2,#0x2]\n\
     and        r0,r2\n\
     orr        r0,r1\n\
     ldr        r3,DAT_08021990\n\
     strh       r0,[r3,#0x2]\n\
     b          LAB_080219d6\n\
DAT_08021980:\n\
     .4byte 0x020117D0\n\
DAT_08021984:\n\
     .4byte 0x020117C8\n\
DAT_08021988:\n\
     .4byte 0x08786A40\n\
DAT_0802198c:\n\
     .4byte 0x020117E0\n\
DAT_08021990:\n\
     .4byte 0x02005760\n\
DAT_08021994:\n\
     .4byte 0xFFFFFE7F\n\
LAB_08021998:\n\
     mov        r5,#0x0\n\
     mov        r0,#0x79\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldr        r6,DAT_080219c0\n\
     ldrb       r6,[r6,#0x2]\n\
     and        r0,r6\n\
     ldr        r1,DAT_080219c0\n\
     strb       r0,[r1,#0x2]\n\
     mov        r0,#0x3\n\
     add        r1,r4,#0x0\n\
     and        r1,r0\n\
     lsl        r1,r1,#0x7\n\
     ldr        r0,DAT_080219c4\n\
     ldr        r3,DAT_080219c0\n\
     ldrh       r3,[r3,#0x2]\n\
     and        r0,r3\n\
     orr        r0,r1\n\
     ldr        r6,DAT_080219c0\n\
     strh       r0,[r6,#0x2]\n\
     b          LAB_080219d4\n\
DAT_080219c0:\n\
     .4byte 0x02005760\n\
DAT_080219c4:\n\
     .4byte 0xFFFFFE7F\n\
LAB_080219c8:\n\
     lsl        r0,r1,#0x19\n\
     lsr        r5,r0,#0x1c\n\
     ldr        r1,[sp,#0x4]\n\
     ldrh       r1,[r1,#0x2]\n\
     lsl        r0,r1,#0x17\n\
     lsr        r4,r0,#0x1e\n\
LAB_080219d4:\n\
     lsl        r6,r2,#0x10\n\
LAB_080219d6:\n\
     mov        r0,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_080219e6\n\
     ldr        r0,DAT_080219f4\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r10,r0\n\
     beq        LAB_080219f8\n\
LAB_080219e6:\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r7,#0x4]\n\
     mov        r3,sp\n\
     ldrh       r0,[r3,#0x2]\n\
     strh       r0,[r7,#0x6]\n\
     b          LAB_08021a04\n\
DAT_080219f4:\n\
     .4byte 0x02005750\n\
LAB_080219f8:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     ldrh       r2,[r0,#0x2]\n\
     add        r0,r7,#0x0\n\
     bl         fun_0803aaf0\n\
LAB_08021a04:\n\
     ldr        r2,DAT_08021a50\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r2,r1]\n\
     cmp        r10,r0\n\
     bne        LAB_08021a2a\n\
     ldr        r1,DAT_08021a54\n\
     mov        r3,r10\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x4]\n\
     ldr        r3,DAT_08021a58\n\
     strh       r0,[r3,#0xc]\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r2,r3]\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x6]\n\
     ldr        r1,DAT_08021a58\n\
     strh       r0,[r1,#0xe]\n\
LAB_08021a2a:\n\
     ldr        r3,DAT_08021a5c\n\
     lsl        r1,r4,#0x1\n\
     asr        r2,r6,#0x10\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r1,r1,r0\n\
     add        r1,r1,r3\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r0,r1,r5\n\
     strh       r0,[r7,#0x10]\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08021a50:\n\
     .4byte 0x02005750\n\
DAT_08021a54:\n\
     .4byte 0x0200F150\n\
DAT_08021a58:\n\
     .4byte 0x02005760\n\
DAT_08021a5c:\n\
     .4byte 0x08786A40\n\
    ");
}
__attribute__((naked)) void fun_08021a60()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r3,DAT_08021ad8\n\
     mov        r0,#0xfa\n\
     lsl        r0,r0,#0x2\n\
     strh       r0,[r3,#0x4]\n\
     mov        r2,#0x82\n\
     lsl        r2,r2,#0x3\n\
     strh       r2,[r3,#0x6]\n\
     strh       r2,[r3,#0x24]\n\
     strh       r2,[r3,#0x26]\n\
     add        r1,r3,#0x0\n\
     add        r1,#0x44\n\
     add        r0,#0x50\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0x46\n\
     strh       r2,[r0,#0x0]\n\
     add        r1,#0x20\n\
     mov        r0,#0x8c\n\
     lsl        r0,r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r3,#0x0\n\
     add        r0,#0x66\n\
     strh       r2,[r0,#0x0]\n\
     mov        r4,#0x0\n\
     add        r5,r3,#0x0\n\
     add        r5,#0x8\n\
LAB_08021a96:\n\
     add        r0,r4,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021aaa\n\
     lsl        r0,r4,#0x5\n\
     add        r0,r0,r5\n\
     mov        r1,#0x2\n\
     str        r1,[r0,#0x0]\n\
LAB_08021aaa:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08021a96\n\
     ldr        r3,DAT_08021adc\n\
     ldr        r2,DAT_08021ad8\n\
     ldr        r1,DAT_08021ae0\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r1,r4]\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x4]\n\
     strh       r0,[r3,#0xc]\n\
     mov        r4,#0x4\n\
     ldrsh      r0,[r1,r4]\n\
     lsl        r0,r0,#0x5\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x6]\n\
     strh       r0,[r3,#0xe]\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08021ad8:\n\
     .4byte 0x0200F150\n\
DAT_08021adc:\n\
     .4byte 0x02005760\n\
DAT_08021ae0:\n\
     .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_08021ae4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0xc\n\
     mov        r4,#0x0\n\
     ldr        r6,DAT_08021b34\n\
LAB_08021aec:\n\
     add        r0,r4,#0x0\n\
     bl         fun_080028c4\n\
     lsl        r0,r0,#0x10\n\
     add        r5,r4,#0x1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08021b22\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r6\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,sp\n\
     ldr        r1,DAT_08021b38\n\
     add        r2,r5,#0x0\n\
     bl         sprintf\n\
     lsl        r1,r4,#0x4\n\
     sub        r1,r1,r4\n\
     lsl        r1,r1,#0x12\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0xb\n\
     add        r1,r1,r0\n\
     asr        r1,r1,#0x10\n\
     mov        r0,sp\n\
     mov        r2,#0x5\n\
     ldr        r3,DAT_08021b3c\n\
     bl         fun_0803c138\n\
LAB_08021b22:\n\
     lsl        r0,r5,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08021aec\n\
     add        sp,#0xc\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08021b34:\n\
     .4byte 0x02005714\n\
DAT_08021b38:\n\
     .4byte 0x084FC10C\n\
DAT_08021b3c:\n\
     .4byte 0x0865FD94\n\
    ");
}
void fun_0803a9ec();
void fun_08021b40()
{
    fun_0803a9ec();
}

asm(".space 2");
