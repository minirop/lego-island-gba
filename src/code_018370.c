__attribute__((naked)) void fun_08018370()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     sub        sp,#0x14\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1a\n\
     bne        LAB_08018386\n\
     b          LAB_08018490\n\
LAB_08018386:\n\
     ldr        r7,DAT_080184d0\n\
     add        r0,r7,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_0803aa14\n\
     ldr        r1,DAT_080184d4\n\
     add        r0,r7,#0x0\n\
     bl         fun_080004ac\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x20\n\
     ldr        r1,DAT_080184d8\n\
     bl         fun_080004ac\n\
     add        r1,sp,#0x10\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_080184dc\n\
     str        r1,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_080184e0\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r2,r8\n\
     strh       r2,[r1,#0x0]\n\
     str        r1,[r4,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_080184e4\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r6,DAT_080184e8\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r3,#0xfa\n\
     lsl        r3,r3,#0x5\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     mov        r0,#0x2\n\
     bl         fun_08004670\n\
     ldr        r0,DAT_080184ec\n\
     bl         fun_080045f0\n\
     mov        r5,#0x0\n\
     strh       r5,[r7,#0x30]\n\
     add        r0,r7,#0x0\n\
     add        r0,#0x34\n\
     mov        r1,r8\n\
     strb       r1,[r0,#0x0]\n\
     mov        r0,#0xe0\n\
     strh       r0,[r7,#0x4]\n\
     mov        r0,#0x70\n\
     strh       r0,[r7,#0x6]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08039e64\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     mov        r1,sp\n\
     ldr        r2,[r6,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r2,#0x2]\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,sp\n\
     strh       r5,[r0,#0x8]\n\
     strh       r5,[r0,#0xc]\n\
     str        r5,[sp,#0x0]\n\
     strh       r5,[r0,#0xa]\n\
     mov        r1,#0x3\n\
     bl         fun_08004da8\n\
     mov        r0,#0x3\n\
     mov        r1,#0x3\n\
     bl         fun_08005b40\n\
     ldr        r0,DAT_080184f0\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_080184f4\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_080184f8\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     bl         fun_08004c10\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_080184fc\n\
     and        r0,r1\n\
     bl         fun_08004c04\n\
     ldr        r1,DAT_08018500\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r3,DAT_08018504\n\
     add        r0,r0,r3\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x4\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08018470\n\
     mov        r0,#0x2\n\
     str        r0,[r7,#0x28]\n\
LAB_08018470:\n\
     ldr        r0,DAT_08018508\n\
     bl         fun_08003998\n\
     ldr        r4,DAT_0801850c\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0x4\n\
     mov        r2,#0x4\n\
     bl         fun_08004894\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
LAB_08018490:\n\
     ldr        r1,DAT_08018500\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r5,DAT_080184d0\n\
     ldr        r0,DAT_08018510\n\
     str        r0,[r5,#0x3c]\n\
     bl         fun_08018924\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     bne        LAB_08018520\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1a\n\
     beq        LAB_08018520\n\
     ldr        r0,DAT_08018514\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,DAT_08018518\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801851c\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     add        r4,r5,#0x0\n\
     b          LAB_0801853e\n\
.space 1\n\
.space 1\n\
DAT_080184d0:\n\
     .4byte 0x0200DD90\n\
DAT_080184d4:\n\
     .4byte 0x084736F4\n\
DAT_080184d8:\n\
     .4byte 0x08473720\n\
DAT_080184dc:\n\
     .4byte 0x040000D4\n\
DAT_080184e0:\n\
     .4byte 0x8100C000\n\
DAT_080184e4:\n\
     .4byte 0x81000200\n\
DAT_080184e8:\n\
     .4byte 0x0200E040\n\
DAT_080184ec:\n\
     .4byte 0x084496C8\n\
DAT_080184f0:\n\
     .4byte 0x0844993C\n\
DAT_080184f4:\n\
     .4byte 0x0600C000\n\
DAT_080184f8:\n\
     .4byte 0x80002000\n\
DAT_080184fc:\n\
     .4byte 0x0000FEF7\n\
DAT_08018500:\n\
     .4byte 0x0200DD80\n\
DAT_08018504:\n\
     .4byte 0x00000E84\n\
DAT_08018508:\n\
     .4byte 0x08449588\n\
DAT_0801850c:\n\
     .4byte 0x0200E010\n\
DAT_08018510:\n\
     .4byte 0x087803D0\n\
DAT_08018514:\n\
     .4byte 0x0200DD7C\n\
DAT_08018518:\n\
     .4byte 0x0200E02C\n\
DAT_0801851c:\n\
     .4byte 0x0200DD78\n\
LAB_08018520:\n\
     ldr        r2,PTR_DAT_0801856c\n\
     ldr        r0,PTR_DAT_08018570\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x10]\n\
     ldr        r0,PTR_DAT_08018574\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_08018578\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x6]\n\
     add        r4,r2,#0x0\n\
LAB_0801853e:\n\
     ldr        r1,DAT_0801857c\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803c830\n\
     ldr        r0,DAT_08018580\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r4,#0x1c]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018584\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x4\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801858c\n\
     mov        r0,#0x1\n\
     strb       r0,[r4,#0x18]\n\
     ldr        r0,DAT_08018588\n\
     str        r0,[r4,#0x3c]\n\
     b          LAB_08018590\n\
.space 1\n\
.space 1\n\
PTR_DAT_0801856c:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_08018570:\n\
     .4byte       DAT_0200e02c\n\
PTR_DAT_08018574:\n\
     .4byte       DAT_0200e030\n\
PTR_DAT_08018578:\n\
     .4byte       DAT_0200dd70\n\
DAT_0801857c:\n\
     .4byte 0x084736F4\n\
DAT_08018580:\n\
     .4byte 0x0877F91C\n\
DAT_08018584:\n\
     .4byte 0x00000E84\n\
DAT_08018588:\n\
     .4byte 0x087803D0\n\
LAB_0801858c:\n\
     mov        r0,#0x4\n\
     strb       r0,[r4,#0x18]\n\
LAB_08018590:\n\
     ldr        r4,DAT_080185c0\n\
     ldr        r1,DAT_080185c4\n\
     ldr        r2,DAT_080185c8\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803c9fc\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_080185cc\n\
     add        r0,r0,r2\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     sub        r4,#0x20\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_0803aa14\n\
     mov        r0,#0x0\n\
     add        sp,#0x14\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080185c0:\n\
     .4byte 0x0200DDB0\n\
DAT_080185c4:\n\
     .4byte 0x08473720\n\
DAT_080185c8:\n\
     .4byte 0x0200E020\n\
DAT_080185cc:\n\
     .4byte 0x00000DD8\n\
    ");
}
__attribute__((naked)) void fun_080185d0()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r2,PTR_DAT_0801860c\n\
     ldr        r1,PTR_DAT_08018610\n\
     ldrh       r0,[r1,#0x4]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_08018614\n\
     ldrh       r0,[r1,#0x6]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r4,PTR_DAT_08018618\n\
     ldrh       r0,[r1,#0x4]\n\
     ldrh       r1,[r1,#0x6]\n\
     bl         fun_08003330\n\
     strb       r0,[r4,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     bl         fun_0801888c\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018646\n\
     ldrb       r1,[r4,#0x0]\n\
     cmp        r1,#0x1\n\
     beq        LAB_08018626\n\
     cmp        r1,#0x1\n\
     bgt        LAB_0801861c\n\
     cmp        r1,#0x0\n\
     beq        LAB_08018626\n\
     b          LAB_08018646\n\
PTR_DAT_0801860c:\n\
     .4byte       DAT_0200e030\n\
PTR_DAT_08018610:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_08018614:\n\
     .4byte       DAT_0200dd70\n\
PTR_DAT_08018618:\n\
     .4byte       DAT_0200dd74\n\
LAB_0801861c:\n\
     cmp        r1,#0x3\n\
     beq        LAB_08018638\n\
     cmp        r1,#0x4\n\
     beq        LAB_08018640\n\
     b          LAB_08018646\n\
LAB_08018626:\n\
     ldr        r0,DAT_08018634\n\
     strh       r1,[r0,#0xa]\n\
     mov        r0,#0x2b\n\
     bl         fun_08001088\n\
     b          LAB_08018646\n\
.space 1\n\
.space 1\n\
DAT_08018634:\n\
     .4byte 0x02005750\n\
LAB_08018638:\n\
     mov        r0,#0x26\n\
     bl         fun_08001088\n\
     b          LAB_08018646\n\
LAB_08018640:\n\
     mov        r0,#0x6\n\
     bl         fun_08001088\n\
LAB_08018646:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0801864c()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r2,#0x0\n\
     add        r5,r3,#0x0\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018680\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x4\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018668\n\
     b          switchD_0801867e_caseD_8\n\
LAB_08018668:\n\
     ldr        r0,DAT_08018684\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     add        r2,r0,#0x0\n\
     cmp        r1,#0x7\n\
     bls        LAB_08018676\n\
     b          switchD_0801867e_caseD_8\n\
LAB_08018676:\n\
     lsl        r0,r1,#0x2\n\
     ldr        r1,PTR_switchdataD_0801868c_08018688\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
DAT_08018680:\n\
     .4byte 0x00000E84\n\
DAT_08018684:\n\
     .4byte 0x0200DD80\n\
PTR_switchdataD_0801868c_08018688:\n\
     .4byte       switchD_0801867e_switchdataD_0801868c\n\
switchD_0801867e_switchdataD_0801868c:\n\
     .4byte       switchD_0801867e_caseD_0\n\
     .4byte       switchD_0801867e_caseD_1\n\
     .4byte       switchD_0801867e_caseD_2\n\
     .4byte       switchD_0801867e_caseD_3\n\
     .4byte       switchD_0801867e_caseD_4\n\
     .4byte       switchD_0801867e_caseD_5\n\
     .4byte       switchD_0801867e_caseD_6\n\
     .4byte       switchD_0801867e_caseD_7\n\
switchD_0801867e_caseD_0:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x68\n\
     mov        r3,#0x5e\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080186c0\n\
     b          switchD_0801867e_caseD_8\n\
LAB_080186c0:\n\
     ldr        r1,DAT_080186cc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_080186d0\n\
     ldr        r2,DAT_080186d4\n\
     b          LAB_08018764\n\
DAT_080186cc:\n\
     .4byte 0x0200DCA0\n\
DAT_080186d0:\n\
     .4byte 0x0200DC90\n\
DAT_080186d4:\n\
     .4byte 0x000003C7\n\
switchD_0801867e_caseD_1:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0xa9\n\
     mov        r3,#0x5e\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080186ec\n\
     b          switchD_0801867e_caseD_8\n\
LAB_080186ec:\n\
     ldr        r1,DAT_08018710\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08018714\n\
     mov        r2,#0xf2\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_08018718\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x30]\n\
     mov        r0,#0x15\n\
     strh       r0,[r1,#0x10]\n\
     b          switchD_0801867e_caseD_8\n\
.space 1\n\
.space 1\n\
DAT_08018710:\n\
     .4byte 0x0200DCA0\n\
DAT_08018714:\n\
     .4byte 0x0200DC90\n\
DAT_08018718:\n\
     .4byte 0x0200DD90\n\
switchD_0801867e_caseD_2:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x8f\n\
     mov        r3,#0x5f\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08018730\n\
     b          switchD_0801867e_caseD_8\n\
LAB_08018730:\n\
     ldr        r1,DAT_0801873c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08018740\n\
     ldr        r2,DAT_08018744\n\
     b          LAB_08018764\n\
DAT_0801873c:\n\
     .4byte 0x0200DCA0\n\
DAT_08018740:\n\
     .4byte 0x0200DC90\n\
DAT_08018744:\n\
     .4byte 0x000003C9\n\
switchD_0801867e_caseD_3:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x53\n\
     mov        r3,#0x5d\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_0801867e_caseD_8\n\
     ldr        r1,DAT_0801877c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08018780\n\
     ldr        r2,DAT_08018784\n\
LAB_08018764:\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_08018788\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x30]\n\
     mov        r0,#0xe\n\
     strh       r0,[r1,#0x10]\n\
     b          switchD_0801867e_caseD_8\n\
.space 1\n\
.space 1\n\
DAT_0801877c:\n\
     .4byte 0x0200DCA0\n\
DAT_08018780:\n\
     .4byte 0x0200DC90\n\
DAT_08018784:\n\
     .4byte 0x000003CA\n\
DAT_08018788:\n\
     .4byte 0x0200DD90\n\
switchD_0801867e_caseD_4:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0x55\n\
     mov        r3,#0x96\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_0801867e_caseD_8\n\
     ldr        r1,DAT_080187c0\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_080187c4\n\
     ldr        r2,DAT_080187c8\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_080187cc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x30]\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x10]\n\
     b          switchD_0801867e_caseD_8\n\
.space 1\n\
.space 1\n\
DAT_080187c0:\n\
     .4byte 0x0200DCA0\n\
DAT_080187c4:\n\
     .4byte 0x0200DC90\n\
DAT_080187c8:\n\
     .4byte 0x000003CB\n\
DAT_080187cc:\n\
     .4byte 0x0200DD90\n\
switchD_0801867e_caseD_5:\n\
     ldrh       r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     b          switchD_0801867e_caseD_8\n\
switchD_0801867e_caseD_6:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0xd8\n\
     mov        r3,#0x90\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_0801867e_caseD_8\n\
     ldr        r1,DAT_080187f4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          switchD_0801867e_caseD_8\n\
DAT_080187f4:\n\
     .4byte 0x0200DD80\n\
switchD_0801867e_caseD_7:\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     mov        r2,#0xd8\n\
     mov        r3,#0xa0\n\
     bl         fun_0800eaa4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        switchD_0801867e_caseD_8\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018830\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x4\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,DAT_08018834\n\
     mov        r2,#0x0\n\
     mov        r0,#0x4\n\
     strb       r0,[r1,#0x18]\n\
     strh       r2,[r1,#0x10]\n\
     mov        r0,#0x1\n\
     str        r0,[r1,#0x28]\n\
switchD_0801867e_caseD_8:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08018830:\n\
     .4byte 0x00000E84\n\
DAT_08018834:\n\
     .4byte 0x0200DD90\n\
    ");
}
__attribute__((naked)) void fun_08018838()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803abbc\n\
     ldr        r0,DAT_08018854\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1a\n\
     beq        LAB_0801884e\n\
     bl         fun_0803a980\n\
     bl         fun_0800457c\n\
LAB_0801884e:\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08018854:\n\
     .4byte 0x020025D8\n\
    ");
}
__attribute__((naked)) void fun_08018858()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080185d0\n\
     bl         fun_0803ab30\n\
     bl         fun_0803a9dc\n\
     ldr        r0,DAT_08018874\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0xa0\n\
     bgt        LAB_08018878\n\
     mov        r0,#0x0\n\
     b          LAB_0801887e\n\
DAT_08018874:\n\
     .4byte 0x0200DD90\n\
LAB_08018878:\n\
     bl         fun_080010d8\n\
     mov        r0,#0x1\n\
LAB_0801887e:\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08018884()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08018888()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0801888c()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     add        r1,r0,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_080188ae\n\
     cmp        r0,#0x1\n\
     bgt        LAB_080188a0\n\
     cmp        r0,#0x0\n\
     beq        LAB_080188aa\n\
     b          LAB_080188ba\n\
LAB_080188a0:\n\
     cmp        r1,#0x3\n\
     beq        LAB_080188b2\n\
     cmp        r1,#0x4\n\
     beq        LAB_080188b6\n\
     b          LAB_080188ba\n\
LAB_080188aa:\n\
     mov        r2,#0xd\n\
     b          LAB_080188bc\n\
LAB_080188ae:\n\
     mov        r2,#0xa\n\
     b          LAB_080188bc\n\
LAB_080188b2:\n\
     mov        r2,#0x9\n\
     b          LAB_080188bc\n\
LAB_080188b6:\n\
     mov        r2,#0xb\n\
     b          LAB_080188bc\n\
LAB_080188ba:\n\
     ldr        r2,DAT_080188d0\n\
LAB_080188bc:\n\
     ldr        r0,DAT_080188d0\n\
     cmp        r2,r0\n\
     beq        LAB_080188dc\n\
     ldr        r0,DAT_080188d4\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_080188d8\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     b          LAB_080188ea\n\
DAT_080188d0:\n\
     .4byte 0x0000FFFF\n\
DAT_080188d4:\n\
     .4byte 0x0200E010\n\
DAT_080188d8:\n\
     .4byte 0x0000FDFF\n\
LAB_080188dc:\n\
     ldr        r0,DAT_080188f0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
LAB_080188ea:\n\
     strh       r0,[r1,#0x12]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_080188f0:\n\
     .4byte 0x0200E010\n\
    ");
}
__attribute__((naked)) void fun_080188f4()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_08018908\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0xa]\n\
     mov        r0,#0x2b\n\
     bl         fun_08001088\n\
     mov        r0,#0x1\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08018908:\n\
     .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_0801890c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_08018920\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0xa]\n\
     mov        r0,#0x2b\n\
     bl         fun_08001088\n\
     mov        r0,#0x1\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08018920:\n\
     .4byte 0x02005750\n\
    ");
}
__attribute__((naked)) void fun_08018924()
{
    asm("\n\
     ldr        r2,DAT_0801893c\n\
     ldr        r0,DAT_08018940\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08018944\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_08018948\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0801893c:\n\
     .4byte 0x0200E050\n\
DAT_08018940:\n\
     .4byte 0x0847CBD8\n\
DAT_08018944:\n\
     .4byte 0x0200E040\n\
DAT_08018948:\n\
     .4byte 0x0847CB74\n\
    ");
}
__attribute__((naked)) void fun_0801894c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x14\n\
     ldr        r0,DAT_08018a88\n\
     bl         fun_08001170\n\
     bl         fun_08001124\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x1a\n\
     bne        LAB_08018964\n\
     b          LAB_08018a6c\n\
LAB_08018964:\n\
     add        r1,sp,#0x10\n\
     mov        r2,#0x0\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r4,DAT_08018a8c\n\
     str        r1,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08018a90\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     strh       r2,[r1,#0x0]\n\
     str        r1,[r4,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08018a94\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xda\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_08004c10\n\
     ldr        r5,DAT_08018a98\n\
     add        r0,r5,#0x0\n\
     bl         fun_08039e64\n\
     mov        r1,sp\n\
     ldr        r2,[r5,#0x0]\n\
     ldrh       r0,[r2,#0x0]\n\
     mov        r6,#0x0\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r2,#0x2]\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,sp\n\
     strh       r6,[r0,#0x8]\n\
     strh       r6,[r0,#0xc]\n\
     str        r6,[sp,#0x0]\n\
     strh       r6,[r0,#0xa]\n\
     mov        r1,#0x3\n\
     bl         fun_08004da8\n\
     mov        r0,#0x3\n\
     mov        r1,#0x3\n\
     bl         fun_08005b40\n\
     ldr        r0,DAT_08018a9c\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_08018aa0\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_08018aa4\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     bl         fun_08004c10\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_08018aa8\n\
     and        r0,r1\n\
     bl         fun_08004c04\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     mov        r0,#0x2\n\
     bl         fun_08004670\n\
     ldr        r0,DAT_08018aac\n\
     ldr        r5,DAT_08018ab0\n\
     add        r1,r5,#0x0\n\
     bl         fun_0803a140\n\
     ldr        r0,DAT_08018ab4\n\
     strh       r6,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08018ab8\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     bl         fun_08018d48\n\
     bl         fun_08018c2c\n\
     ldr        r1,DAT_08018abc\n\
     mov        r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r4,DAT_08018ac0\n\
     add        r0,r0,r4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x6\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,DAT_08018ac4\n\
     mov        r0,#0x90\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
     strh       r5,[r1,#0x6]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0xa\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018a58\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
LAB_08018a58:\n\
     ldr        r0,DAT_08018ac8\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_08018acc\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x8\n\
     strh       r1,[r0,#0x2]\n\
     strh       r1,[r0,#0x4]\n\
     ldr        r0,PTR_DAT_08018ad0\n\
     strh       r6,[r0,#0x0]\n\
LAB_08018a6c:\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x0\n\
     beq        LAB_08018adc\n\
     ldr        r1,DAT_08018ac4\n\
     ldr        r0,PTR_DAT_08018ad4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,PTR_DAT_08018ad8\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x6]\n\
     b          LAB_08018ae8\n\
DAT_08018a88:\n\
     .4byte 0x08018E31\n\
DAT_08018a8c:\n\
     .4byte 0x040000D4\n\
DAT_08018a90:\n\
     .4byte 0x8100C000\n\
DAT_08018a94:\n\
     .4byte 0x81000200\n\
DAT_08018a98:\n\
     .4byte 0x0200E450\n\
DAT_08018a9c:\n\
     .4byte 0x0844993C\n\
DAT_08018aa0:\n\
     .4byte 0x0600C000\n\
DAT_08018aa4:\n\
     .4byte 0x80002000\n\
DAT_08018aa8:\n\
     .4byte 0x0000FEF7\n\
DAT_08018aac:\n\
     .4byte 0x00000149\n\
DAT_08018ab0:\n\
     .4byte 0x0000013F\n\
DAT_08018ab4:\n\
     .4byte 0x0200DC54\n\
DAT_08018ab8:\n\
     .4byte 0x0000FFFF\n\
DAT_08018abc:\n\
     .4byte 0x0200E440\n\
DAT_08018ac0:\n\
     .4byte 0x00000E84\n\
DAT_08018ac4:\n\
     .4byte 0x020006A0\n\
DAT_08018ac8:\n\
     .4byte 0x08449588\n\
PTR_DAT_08018acc:\n\
     .4byte       DAT_0200d370\n\
PTR_DAT_08018ad0:\n\
     .4byte       DAT_0200252c\n\
PTR_DAT_08018ad4:\n\
     .4byte       DAT_0200e030\n\
PTR_DAT_08018ad8:\n\
     .4byte       DAT_0200dd70\n\
LAB_08018adc:\n\
     ldr        r2,DAT_08018b18\n\
     ldr        r1,DAT_08018b1c\n\
     ldr        r0,DAT_08018b20\n\
     strh       r3,[r0,#0x0]\n\
     strh       r3,[r1,#0x0]\n\
     strh       r3,[r2,#0x0]\n\
LAB_08018ae8:\n\
     bl         fun_08018e98\n\
     bl         fun_08018ee8\n\
     bl         fun_08018e3c\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018b24\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x6\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     mov        r1,#0xa0\n\
     lsl        r1,r1,#0x13\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     add        sp,#0x14\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08018b18:\n\
     .4byte 0x0200255C\n\
DAT_08018b1c:\n\
     .4byte 0x02002550\n\
DAT_08018b20:\n\
     .4byte 0x02002520\n\
DAT_08018b24:\n\
     .4byte 0x00000E84\n\
    ");
}
__attribute__((naked)) void fun_08018b28()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0x4\n\
     bl         fun_080020a4\n\
     ldr        r4,DAT_08018c04\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x14\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018b8a\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018b8a\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x12\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018b8a\n\
     mov        r0,#0x1\n\
     mov        r1,#0x0\n\
     mov        r2,#0x1\n\
     bl         fun_080034d4\n\
     ldr        r1,DAT_08018c08\n\
     mov        r0,#0xc1\n\
     lsl        r0,r0,#0x3\n\
     add        r2,r1,r0\n\
     mov        r0,#0x2\n\
     str        r0,[r2,#0x0]\n\
     ldr        r0,DAT_08018c0c\n\
     add        r2,r1,r0\n\
     ldr        r0,DAT_08018c10\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r2,DAT_08018c14\n\
     add        r1,r1,r2\n\
     mov        r0,#0x61\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018b8a:\n\
     ldr        r4,DAT_08018c18\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018b96\n\
     bl         fun_080010d8\n\
LAB_08018b96:\n\
     mov        r5,#0x0\n\
     strh       r5,[r4,#0x0]\n\
     bl         fun_080013a8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018baa\n\
     mov        r0,#0x7\n\
     bl         fun_08001088\n\
LAB_08018baa:\n\
     ldr        r4,DAT_08018c1c\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     bl         fun_0803ab30\n\
     bl         fun_0803a00c\n\
     ldr        r4,[r4,#0x0]\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08018bd6\n\
     ldr        r0,DAT_08018c20\n\
     ldrh       r1,[r4,#0x12]\n\
     and        r0,r1\n\
     strh       r0,[r4,#0x12]\n\
LAB_08018bd6:\n\
     ldr        r4,DAT_08018c08\n\
     ldr        r1,DAT_08018c24\n\
     add        r2,r4,#0x4\n\
     add        r3,r4,#0x6\n\
     add        r0,r4,#0x0\n\
     bl         fun_08018f6c\n\
     ldr        r2,DAT_08018c28\n\
     mov        r0,#0x4\n\
     ldrsh      r3,[r4,r0]\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r4,r1]\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_080032a0\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08018c04:\n\
     .4byte 0x00000E84\n\
DAT_08018c08:\n\
     .4byte 0x020006A0\n\
DAT_08018c0c:\n\
     .4byte 0x00000604\n\
DAT_08018c10:\n\
     .4byte 0x0000046E\n\
DAT_08018c14:\n\
     .4byte 0x00000606\n\
DAT_08018c18:\n\
     .4byte 0x0200DC54\n\
DAT_08018c1c:\n\
     .4byte 0x0200D370\n\
DAT_08018c20:\n\
     .4byte 0x0000FDFF\n\
DAT_08018c24:\n\
     .4byte 0x0877CF10\n\
DAT_08018c28:\n\
     .4byte 0x0847CCA8\n\
    ");
}
__attribute__((naked)) void fun_08018c2c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     mov        r5,#0x0\n\
     ldr        r7,DAT_08018cb0\n\
     mov        r0,#0x1c\n\
     add        r0,r0,r7\n\
     mov        r9,r0\n\
     mov        r8,r7\n\
LAB_08018c40:\n\
     ldr        r1,DAT_08018cb4\n\
     lsl        r0,r5,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r3,[r0,#0x0]\n\
     add        r4,r3,#0x0\n\
     cmp        r3,#0x0\n\
     beq        LAB_08018c68\n\
     lsl        r0,r3,#0x5\n\
     add        r0,r0,r7\n\
     mov        r1,#0x2c\n\
     mul        r1,r3\n\
     ldr        r2,DAT_08018cb8\n\
     add        r1,r1,r2\n\
     lsl        r2,r3,#0x1\n\
     add        r2,r2,r3\n\
     lsl        r2,r2,#0x2\n\
     ldr        r3,DAT_08018cbc\n\
     add        r2,r2,r3\n\
     bl         fun_0803c9fc\n\
LAB_08018c68:\n\
     lsl        r1,r4,#0x5\n\
     add        r1,r9\n\
     ldr        r6,DAT_08018cc0\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r6\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,#0xa\n\
     bls        LAB_08018c40\n\
     ldr        r1,DAT_08018cb8\n\
     mov        r0,r8\n\
     bl         fun_0803c830\n\
     ldr        r0,DAT_08018cc4\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_08018cc8\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,r8\n\
     bl         fun_0803aa14\n\
     ldr        r0,[r6,#0x0]\n\
     mov        r1,r8\n\
     str        r0,[r1,#0x1c]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0xc]\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08018cb0:\n\
     .4byte 0x020006A0\n\
DAT_08018cb4:\n\
     .4byte 0x087803D4\n\
DAT_08018cb8:\n\
     .4byte 0x0877CF10\n\
DAT_08018cbc:\n\
     .4byte 0x0200D430\n\
DAT_08018cc0:\n\
     .4byte 0x0877F91C\n\
DAT_08018cc4:\n\
     .4byte 0x084496C8\n\
DAT_08018cc8:\n\
     .4byte 0x02000690\n\
    ");
}
__attribute__((naked)) void fun_08018ccc()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,PTR_DAT_08018d24\n\
     ldr        r4,PTR_DAT_08018d28\n\
     ldrh       r0,[r4,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08018d2c\n\
     ldrh       r0,[r4,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08018d30\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1a\n\
     beq        LAB_08018d1c\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018d34\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r2,DAT_08018d38\n\
     and        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     bl         fun_0800457c\n\
     bl         fun_0803a980\n\
     bl         fun_0803abbc\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldr        r1,DAT_08018d3c\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08018d40\n\
     strh       r0,[r4,#0x4]\n\
     ldr        r0,DAT_08018d44\n\
     strh       r0,[r4,#0x6]\n\
     mov        r0,#0x0\n\
     bl         fun_08018d48\n\
LAB_08018d1c:\n\
     mov        r0,#0x0\n\
     pop        {r4}\n\
     pop        {r1}\n\
     bx         r1\n\
PTR_DAT_08018d24:\n\
     .4byte       DAT_0200e030\n\
PTR_DAT_08018d28:\n\
     .4byte       DAT_020006a0\n\
PTR_DAT_08018d2c:\n\
     .4byte       DAT_0200dd70\n\
PTR_DAT_08018d30:\n\
     .4byte       DAT_020025d8\n\
DAT_08018d34:\n\
     .4byte 0x00000E84\n\
DAT_08018d38:\n\
     .4byte 0xFFFFDFFF\n\
DAT_08018d3c:\n\
     .4byte 0x0000FFFF\n\
DAT_08018d40:\n\
     .4byte 0x00000754\n\
DAT_08018d44:\n\
     .4byte 0x000004D7\n\
    ");
}
__attribute__((naked)) void fun_08018d48()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r4,r0,#0x0\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     ldr        r5,DAT_08018dbc\n\
     add        r1,r4,#0x0\n\
     ldrh       r0,[r5,#0x0]\n\
     eor        r1,r0\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
     orr        r0,r1\n\
     lsr        r0,r0,#0x1f\n\
     ldr        r1,DAT_08018dc0\n\
     bl         fun_080032b4\n\
     strh       r4,[r5,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_08018dd0\n\
     mov        r2,#0x0\n\
     ldr        r4,DAT_08018dc4\n\
     ldr        r3,DAT_08018dc8\n\
LAB_08018d70:\n\
     lsl        r1,r2,#0x2\n\
     add        r1,r1,r4\n\
     lsl        r0,r2,#0x5\n\
     add        r0,r0,r3\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0xf3\n\
     bls        LAB_08018d70\n\
     mov        r2,#0x0\n\
     ldr        r5,DAT_08018dcc\n\
     ldr        r4,DAT_08018dc8\n\
     mov        r3,#0x1\n\
LAB_08018d8e:\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x8\n\
     cmp        r2,r0\n\
     beq        LAB_08018daa\n\
     add        r0,#0x2a\n\
     cmp        r2,r0\n\
     beq        LAB_08018daa\n\
     add        r0,#0x1\n\
     cmp        r2,r0\n\
     beq        LAB_08018daa\n\
     lsl        r0,r2,#0x5\n\
     add        r0,r0,r4\n\
     str        r3,[r0,#0x0]\n\
LAB_08018daa:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0xf3\n\
     bls        LAB_08018d8e\n\
     mov        r0,#0x2\n\
     bl         fun_08018f38\n\
     b          LAB_08018e10\n\
DAT_08018dbc:\n\
     .4byte 0x0200E060\n\
DAT_08018dc0:\n\
     .4byte 0x0847CCB8\n\
DAT_08018dc4:\n\
     .4byte 0x0200E070\n\
DAT_08018dc8:\n\
     .4byte 0x020006A8\n\
DAT_08018dcc:\n\
     .4byte 0x02000690\n\
LAB_08018dd0:\n\
     mov        r2,#0x0\n\
     ldr        r5,DAT_08018e18\n\
     ldr        r4,DAT_08018e1c\n\
     ldr        r3,DAT_08018e20\n\
LAB_08018dd8:\n\
     ldrh       r1,[r5,#0x0]\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x8\n\
     cmp        r2,r0\n\
     beq        LAB_08018dfa\n\
     add        r0,#0x2a\n\
     cmp        r2,r0\n\
     beq        LAB_08018dfa\n\
     add        r0,#0x1\n\
     cmp        r2,r0\n\
     beq        LAB_08018dfa\n\
     lsl        r0,r2,#0x5\n\
     add        r0,r0,r4\n\
     lsl        r1,r2,#0x2\n\
     add        r1,r1,r3\n\
     ldr        r1,[r1,#0x0]\n\
     str        r1,[r0,#0x0]\n\
LAB_08018dfa:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0xf3\n\
     bls        LAB_08018dd8\n\
     mov        r0,#0x1\n\
     bl         fun_08018f38\n\
     ldr        r1,DAT_08018e24\n\
     mov        r0,#0x2\n\
     str        r0,[r1,#0x8]\n\
LAB_08018e10:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08018e18:\n\
     .4byte 0x02000690\n\
DAT_08018e1c:\n\
     .4byte 0x020006A8\n\
DAT_08018e20:\n\
     .4byte 0x0200E070\n\
DAT_08018e24:\n\
     .4byte 0x020006A0\n\
    ");
}
__attribute__((naked)) void fun_08018e28()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08018e2c()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_08018e30()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803a9ec\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08018e3c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018e88\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x14\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018e84\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018e88\n\
     add        r0,r0,r1\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0xa\n\
     orr        r1,r2\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,DAT_08018e8c\n\
     ldr        r0,DAT_08018e90\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08018e84\n\
     mov        r0,#0x8\n\
     bl         fun_080017b8\n\
     ldr        r1,DAT_08018e94\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018e84:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08018e88:\n\
     .4byte 0x00000E84\n\
DAT_08018e8c:\n\
     .4byte 0x020006A0\n\
DAT_08018e90:\n\
     .4byte 0x02000690\n\
DAT_08018e94:\n\
     .4byte 0x02002520\n\
    ");
}
__attribute__((naked)) void fun_08018e98()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018ed8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x12\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018ed4\n\
     ldr        r1,DAT_08018edc\n\
     ldr        r0,DAT_08018ee0\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x32\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08018ed4\n\
     mov        r0,#0x32\n\
     bl         fun_080017b8\n\
     mov        r0,#0x1e\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_08018ee4\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018ed4:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08018ed8:\n\
     .4byte 0x00000E84\n\
DAT_08018edc:\n\
     .4byte 0x020006A0\n\
DAT_08018ee0:\n\
     .4byte 0x02000690\n\
DAT_08018ee4:\n\
     .4byte 0x0200255C\n\
    ");
}
__attribute__((naked)) void fun_08018ee8()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018f28\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08018f24\n\
     ldr        r1,DAT_08018f2c\n\
     ldr        r0,DAT_08018f30\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x33\n\
     lsl        r0,r0,#0x5\n\
     add        r1,#0x8\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_08018f24\n\
     mov        r0,#0x33\n\
     bl         fun_080017b8\n\
     mov        r0,#0x1e\n\
     bl         fun_08001088\n\
     ldr        r1,DAT_08018f34\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018f24:\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08018f28:\n\
     .4byte 0x00000E84\n\
DAT_08018f2c:\n\
     .4byte 0x020006A0\n\
DAT_08018f30:\n\
     .4byte 0x02000690\n\
DAT_08018f34:\n\
     .4byte 0x02002550\n\
    ");
}
__attribute__((naked)) void fun_08018f38()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     add        r2,r0,#0x0\n\
     mov        r1,#0x0\n\
     ldr        r4,DAT_08018f64\n\
     ldr        r3,DAT_08018f68\n\
LAB_08018f42:\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r4\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x30\n\
     beq        LAB_08018f52\n\
     lsl        r0,r5,#0x5\n\
     add        r0,r0,r3\n\
     str        r2,[r0,#0x0]\n\
LAB_08018f52:\n\
     add        r0,r1,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     cmp        r1,#0xa\n\
     bls        LAB_08018f42\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08018f64:\n\
     .4byte 0x087803D4\n\
DAT_08018f68:\n\
     .4byte 0x020006A8\n\
    ");
}
__attribute__((naked)) void fun_08018f6c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r5,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     bl         fun_080020a4\n\
     add        r4,r0,#0x0\n\
     ldrh       r0,[r5,#0x0]\n\
     ldrh       r1,[r6,#0x0]\n\
     bl         fun_08003330\n\
     mov        r5,#0xde\n\
     lsl        r5,r5,#0x4\n\
     add        r4,r4,r5\n\
     strh       r0,[r4,#0x0]\n\
     ldr        r4,DAT_08018fc0\n\
     bl         fun_080020a4\n\
     add        r0,r0,r5\n\
     ldrh       r1,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r1,r0\n\
     beq        LAB_08018fb8\n\
     bl         fun_080020a4\n\
     mov        r1,#0xde\n\
     lsl        r1,r1,#0x4\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_08018fc4\n\
     ldr        r2,DAT_08018fc8\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08018fcc\n\
     ldrh       r0,[r2,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
LAB_08018fb8:\n\
     mov        r0,#0x0\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08018fc0:\n\
     .4byte 0x0200E440\n\
DAT_08018fc4:\n\
     .4byte 0x0200E030\n\
DAT_08018fc8:\n\
     .4byte 0x020006A0\n\
DAT_08018fcc:\n\
     .4byte 0x0200DD70\n\
    ");
}
__attribute__((naked)) void fun_08018fd0()
{
    asm("\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08018fd4()
{
    asm("\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08018fd8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_08019020\n\
     ldr        r0,DAT_08019024\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,DAT_08019028\n\
     str        r0,[r1,#0x4]\n\
     ldr        r1,DAT_0801902c\n\
     str        r1,[r0,#0x0]\n\
     ldr        r3,DAT_08019030\n\
     str        r3,[r0,#0x4]\n\
     str        r2,[r0,#0x8]\n\
     add        r1,#0x48\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     bcs        LAB_08019018\n\
     add        r6,r3,#0x0\n\
     ldr        r5,DAT_08019034\n\
     mov        r3,#0x0\n\
     add        r4,r0,#0x0\n\
LAB_08019000:\n\
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
     bcc        LAB_08019000\n\
LAB_08019018:\n\
     mov        r0,#0x1\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_08019020:\n\
     .4byte 0x0200E470\n\
DAT_08019024:\n\
     .4byte 0x08487CCC\n\
DAT_08019028:\n\
     .4byte 0x0200E450\n\
DAT_0801902c:\n\
     .4byte 0x08487C68\n\
DAT_08019030:\n\
     .4byte 0x0200E460\n\
DAT_08019034:\n\
     .4byte 0x08487B10\n\
    ");
}
__attribute__((naked)) void fun_08019038()
{
    asm("\n\
     ldr        r2,DAT_08019050\n\
     ldr        r0,DAT_08019054\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08019058\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0801905c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08019050:\n\
     .4byte 0x0200E480\n\
DAT_08019054:\n\
     .4byte 0x0848EE90\n\
DAT_08019058:\n\
     .4byte 0x0200E490\n\
DAT_0801905c:\n\
     .4byte 0x0848EE2C\n\
    ");
}
__attribute__((naked)) void fun_08019060()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x14\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019076\n\
     ldr        r0,DAT_08019170\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1a\n\
     beq        LAB_0801915a\n\
LAB_08019076:\n\
     add        r1,sp,#0x10\n\
     mov        r4,#0x0\n\
     strh       r4,[r1,#0x0]\n\
     ldr        r5,DAT_08019174\n\
     str        r1,[r5,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,DAT_08019178\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     strh       r4,[r1,#0x0]\n\
     str        r1,[r5,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,DAT_0801917c\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     bl         fun_08019038\n\
     ldr        r6,DAT_08019180\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x13\n\
     mov        r2,#0xca\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r6,#0x0\n\
     bl         fun_08039e64\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     ldr        r0,DAT_08019184\n\
     bl         fun_080045f0\n\
     ldr        r0,DAT_08019188\n\
     strh       r4,[r0,#0x0]\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     cmp        r1,#0x0\n\
     bne        LAB_080190dc\n\
     ldr        r0,DAT_0801918c\n\
     strh       r1,[r0,#0x0]\n\
LAB_080190dc:\n\
     bl         fun_08019248\n\
     mov        r1,sp\n\
     ldr        r3,[r6,#0x0]\n\
     ldrh       r0,[r3,#0x0]\n\
     mov        r2,#0x0\n\
     strh       r0,[r1,#0x4]\n\
     ldrh       r0,[r3,#0x0]\n\
     strh       r0,[r1,#0x6]\n\
     mov        r0,sp\n\
     strh       r2,[r0,#0x8]\n\
     strh       r2,[r0,#0xc]\n\
     str        r2,[sp,#0x0]\n\
     strh       r2,[r0,#0xa]\n\
     mov        r1,#0x3\n\
     bl         fun_08004da8\n\
     mov        r0,#0x3\n\
     mov        r1,#0x3\n\
     bl         fun_08005b40\n\
     ldr        r0,DAT_08019190\n\
     str        r0,[r5,#0x0]\n\
     ldr        r0,DAT_08019194\n\
     str        r0,[r5,#0x4]\n\
     ldr        r0,DAT_08019198\n\
     str        r0,[r5,#0x8]\n\
     ldr        r0,[r5,#0x8]\n\
     bl         fun_08004c10\n\
     add        r1,r0,#0x0\n\
     ldr        r0,DAT_0801919c\n\
     and        r0,r1\n\
     bl         fun_08004c04\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803a140\n\
     ldr        r4,DAT_080191a0\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_0803aa14\n\
     ldr        r5,DAT_080191a4\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_080004ac\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x20\n\
     ldr        r1,DAT_080191a8\n\
     bl         fun_080004ac\n\
     add        r0,r4,#0x0\n\
     add        r1,r5,#0x0\n\
     bl         fun_0803c830\n\
     ldr        r0,DAT_080191ac\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080191b0\n\
     str        r0,[r1,#0x0]\n\
LAB_0801915a:\n\
     bl         fun_08001118\n\
     lsl        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     bne        LAB_080191b8\n\
     ldr        r1,DAT_080191b4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_080191a0\n\
     b          LAB_080191d4\n\
.space 1\n\
.space 1\n\
DAT_08019170:\n\
     .4byte 0x02002534\n\
DAT_08019174:\n\
     .4byte 0x040000D4\n\
DAT_08019178:\n\
     .4byte 0x8100C000\n\
DAT_0801917c:\n\
     .4byte 0x81000200\n\
DAT_08019180:\n\
     .4byte 0x0200E490\n\
DAT_08019184:\n\
     .4byte 0x084496C8\n\
DAT_08019188:\n\
     .4byte 0x0200E4A4\n\
DAT_0801918c:\n\
     .4byte 0x0200E4C8\n\
DAT_08019190:\n\
     .4byte 0x0844993C\n\
DAT_08019194:\n\
     .4byte 0x0600C000\n\
DAT_08019198:\n\
     .4byte 0x80002000\n\
DAT_0801919c:\n\
     .4byte 0x0000FEF7\n\
DAT_080191a0:\n\
     .4byte 0x0200DD90\n\
DAT_080191a4:\n\
     .4byte 0x084736F4\n\
DAT_080191a8:\n\
     .4byte 0x087803EC\n\
DAT_080191ac:\n\
     .4byte 0x08449588\n\
DAT_080191b0:\n\
     .4byte 0x0200E4A0\n\
DAT_080191b4:\n\
     .4byte 0x0200E02C\n\
LAB_080191b8:\n\
     ldr        r2,PTR_DAT_0801922c\n\
     ldr        r0,PTR_DAT_08019230\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_08019234\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r0,PTR_DAT_08019238\n\
     mov        r3,#0x0\n\
     ldrsh      r1,[r0,r3]\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r2,#0x10]\n\
LAB_080191d4:\n\
     ldr        r0,DAT_0801923c\n\
     ldr        r0,[r0,#0x0]\n\
     str        r0,[r2,#0x1c]\n\
     mov        r0,#0x4\n\
     strb       r0,[r2,#0x18]\n\
     ldr        r1,DAT_08019240\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019208\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019208\n\
     mov        r0,#0x2\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019208\n\
     mov        r0,#0x2\n\
     bl         fun_080017b8\n\
LAB_08019208:\n\
     ldr        r4,DAT_08019244\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x4\n\
     mov        r2,#0x4\n\
     bl         fun_08004894\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x0\n\
     add        sp,#0x14\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
PTR_DAT_0801922c:\n\
     .4byte       DAT_0200dd90\n\
PTR_DAT_08019230:\n\
     .4byte       DAT_0200e030\n\
PTR_DAT_08019234:\n\
     .4byte       DAT_0200dd70\n\
PTR_DAT_08019238:\n\
     .4byte       DAT_0200e02c\n\
DAT_0801923c:\n\
     .4byte 0x0877F91C\n\
DAT_08019240:\n\
     .4byte 0x0200E4C8\n\
DAT_08019244:\n\
     .4byte 0x0200E4A0\n\
    ");
}
__attribute__((naked)) void fun_08019248()
{
    asm("\n\
     push       {r4,lr}\n\
     mov        r4,#0x0\n\
LAB_0801924c:\n\
     ldr        r0,DAT_08019294\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_08019298\n\
     lsl        r2,r4,#0x2\n\
     add        r2,r2,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,DAT_0801929c\n\
     lsl        r1,r4,#0x1\n\
     add        r0,r1,r0\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x2]\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r0,DAT_080192a0\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x3\n\
     and        r0,r4\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x5\n\
     bls        LAB_0801924c\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08019294:\n\
     .4byte 0x0848F360\n\
DAT_08019298:\n\
     .4byte 0x0200E4B0\n\
DAT_0801929c:\n\
     .4byte 0x08780418\n\
DAT_080192a0:\n\
     .4byte 0x08780424\n\
    ");
}
__attribute__((naked)) void fun_080192a4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r5,DAT_080192d0\n\
     ldrh       r0,[r5,#0x4]\n\
     ldrh       r1,[r5,#0x6]\n\
     bl         fun_08003330\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     add        r0,r4,#0x0\n\
     bl         fun_08019438\n\
     bl         fun_080013f4\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019390\n\
     cmp        r4,#0x0\n\
     beq        LAB_080192d4\n\
     cmp        r4,#0x1\n\
     beq        LAB_08019314\n\
     b          LAB_08019390\n\
.space 1\n\
.space 1\n\
DAT_080192d0:\n\
     .4byte 0x0200DD90\n\
LAB_080192d4:\n\
     ldr        r1,PTR_DAT_080192fc\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08019300\n\
     ldrh       r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08019304\n\
     ldrh       r0,[r5,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08019308\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0801930c\n\
     ldr        r2,DAT_08019310\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x22\n\
     bl         fun_08001088\n\
     b          LAB_08019390\n\
.space 1\n\
.space 1\n\
PTR_DAT_080192fc:\n\
     .4byte       DAT_0200e4c8\n\
PTR_DAT_08019300:\n\
     .4byte       DAT_0200e030\n\
PTR_DAT_08019304:\n\
     .4byte       DAT_0200dd70\n\
PTR_DAT_08019308:\n\
     .4byte       DAT_02002530\n\
PTR_DAT_0801930c:\n\
     .4byte       DAT_020025e8\n\
DAT_08019310:\n\
     .4byte 0x0000023E\n\
LAB_08019314:\n\
     ldr        r1,DAT_08019358\n\
     ldrh       r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0801935c\n\
     ldrh       r0,[r5,#0x6]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x34\n\
     bl         fun_08001894\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08019364\n\
     ldr        r1,DAT_08019360\n\
     mov        r0,#0xda\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x7\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x8\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x22\n\
     mov        r1,#0x0\n\
     bl         fun_08001a14\n\
     mov        r0,#0x34\n\
     bl         fun_080018e4\n\
     b          LAB_08019390\n\
DAT_08019358:\n\
     .4byte 0x0200E030\n\
DAT_0801935c:\n\
     .4byte 0x0200DD70\n\
DAT_08019360:\n\
     .4byte 0x0200DC90\n\
LAB_08019364:\n\
     mov        r0,#0x34\n\
     bl         fun_080018bc\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0801938c\n\
     ldr        r1,DAT_08019388\n\
     mov        r0,#0xce\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1a\n\
     bl         fun_08001088\n\
     mov        r0,#0x22\n\
     mov        r1,#0x1\n\
     bl         fun_08001a14\n\
     b          LAB_08019390\n\
.space 1\n\
.space 1\n\
DAT_08019388:\n\
     .4byte 0x0200DC90\n\
LAB_0801938c:\n\
     bl         fun_0800193c\n\
LAB_08019390:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
    ");
}
__attribute__((naked)) void fun_08019398()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_080193bc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1a\n\
     beq        LAB_080193b6\n\
     bl         fun_0803abbc\n\
     bl         fun_0803a980\n\
     ldr        r0,DAT_080193c0\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_0800457c\n\
LAB_080193b6:\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080193bc:\n\
     .4byte 0x020025D8\n\
DAT_080193c0:\n\
     .4byte 0x0200E4A0\n\
    ");
}
__attribute__((naked)) void fun_080193c4()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803a9dc\n\
     bl         fun_080192a4\n\
     bl         fun_0803ab30\n\
     bl         fun_080193f4\n\
     bl         fun_0801948c\n\
     ldr        r1,DAT_080193e8\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080193e8:\n\
     .4byte 0x0200E4A4\n\
    ");
}
__attribute__((naked)) void fun_080193ec()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080193f0()
{
    asm("\n\
     mov        r0,#0x0\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080193f4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     mov        r4,#0x0\n\
     ldr        r5,DAT_08019430\n\
LAB_080193fa:\n\
     ldrh       r0,[r5,#0x0]\n\
     lsl        r1,r4,#0x1\n\
     add        r1,r1,r4\n\
     add        r1,#0xa\n\
     bl         __modsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_08019420\n\
     ldr        r1,DAT_08019434\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r3,[r0,#0x0]\n\
     ldrh       r1,[r3,#0x0]\n\
     add        r2,r1,#0x1\n\
     add        r0,r2,#0x0\n\
     asr        r0,r0,#0x2\n\
     lsl        r0,r0,#0x2\n\
     sub        r0,r2,r0\n\
     strh       r0,[r3,#0x0]\n\
LAB_08019420:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x5\n\
     bls        LAB_080193fa\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08019430:\n\
     .4byte 0x0200E4A4\n\
DAT_08019434:\n\
     .4byte 0x0200E4B0\n\
    ");
}
__attribute__((naked)) void fun_08019438()
{
    asm("\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x0\n\
     beq        LAB_0801944c\n\
     cmp        r0,#0x1\n\
     beq        LAB_08019450\n\
     ldr        r2,DAT_08019448\n\
     b          LAB_08019452\n\
DAT_08019448:\n\
     .4byte 0x0000FFFF\n\
LAB_0801944c:\n\
     mov        r2,#0xc\n\
     b          LAB_08019452\n\
LAB_08019450:\n\
     mov        r2,#0x1\n\
LAB_08019452:\n\
     ldr        r0,DAT_08019468\n\
     cmp        r2,r0\n\
     beq        LAB_08019474\n\
     ldr        r0,DAT_0801946c\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r0,DAT_08019470\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     b          LAB_08019482\n\
.space 1\n\
.space 1\n\
DAT_08019468:\n\
     .4byte 0x0000FFFF\n\
DAT_0801946c:\n\
     .4byte 0x0200E4A0\n\
DAT_08019470:\n\
     .4byte 0x0000FDFF\n\
LAB_08019474:\n\
     ldr        r0,DAT_08019488\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
LAB_08019482:\n\
     strh       r0,[r1,#0x12]\n\
     bx         lr\n\
.space 1\n\
.space 1\n\
DAT_08019488:\n\
     .4byte 0x0200E4A0\n\
    ");
}
__attribute__((naked)) void fun_0801948c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_0801949c\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0xa0\n\
     bgt        LAB_080194a0\n\
     mov        r0,#0x0\n\
     b          LAB_080194a6\n\
DAT_0801949c:\n\
     .4byte 0x0200DD90\n\
LAB_080194a0:\n\
     bl         fun_080010d8\n\
     mov        r0,#0x1\n\
LAB_080194a6:\n\
     pop        {r1}\n\
     bx         r1\n\
.space 2\n\
    ");
}
