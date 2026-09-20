__attribute__((naked)) void fun_0800fb04()
{
    asm("\n\
    ldr         r1,[r0,#0xc]\n\
    cmp         r1,#0x0\n\
    bne         LAB_0800fb0c\n\
    strb        r1,[r0,#0x18]\n\
LAB_0800fb0c:\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800fb10()
{
    asm("\n\
    ldr         r1,DAT_0800fb48\n\
    ldr         r2,DAT_0800fb4c\n\
    add         r0,r1,r2\n\
    mov         r2,#0x1\n\
    str         r2,[r0,#0x0]\n\
    ldr         r3,DAT_0800fb50\n\
    add         r0,r1,r3\n\
    str         r2,[r0,#0x0]\n\
    add         r3,#0x20\n\
    add         r0,r1,r3\n\
    str         r2,[r0,#0x0]\n\
    ldr         r3,DAT_0800fb54\n\
    add         r0,r1,r3\n\
    str         r2,[r0,#0x0]\n\
    ldr         r3,DAT_0800fb58\n\
    add         r0,r1,r3\n\
    str         r2,[r0,#0x0]\n\
    add         r3,#0x20\n\
    add         r0,r1,r3\n\
    str         r2,[r0,#0x0]\n\
    add         r3,#0x20\n\
    add         r0,r1,r3\n\
    str         r2,[r0,#0x0]\n\
    ldr         r0,DAT_0800fb5c\n\
    add         r1,r1,r0\n\
    str         r2,[r1,#0x0]\n\
    bx          lr\n\
\n\
.space 2\n\
\n\
DAT_0800fb48:\n\
    .word 0x020006A0\n\
DAT_0800fb4c:\n\
    .word 0x000008E8\n\
DAT_0800fb50:\n\
    .word 0x00000908\n\
DAT_0800fb54:\n\
    .word 0x00000B48\n\
DAT_0800fb58:\n\
    .word 0x00001368\n\
DAT_0800fb5c:\n\
    .word 0x000013C8\n\
    ");
}
__attribute__((naked)) void fun_0800fb60()
{
    asm("\n\
    push        {lr}\n\
    ldr         r2,DAT_0800fbb0\n\
    mov         r1,#0x1\n\
    str         r1,[r2,#0x68]\n\
    add         r0,r2,#0x0\n\
    add         r0,#0x88\n\
    str         r1,[r0,#0x0]\n\
    add         r0,#0x20\n\
    str         r1,[r0,#0x0]\n\
    add         r0,#0x20\n\
    str         r1,[r0,#0x0]\n\
    add         r0,#0x20\n\
    str         r1,[r0,#0x0]\n\
    mov         r3,#0x84\n\
    lsl         r3,r3,#0x1\n\
    add         r0,r2,r3\n\
    str         r1,[r0,#0x0]\n\
    mov         r0,#0xfd\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    mov         r0,#0x57\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    mov         r0,#0x58\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    mov         r0,#0x7e\n\
    mov         r1,#0x0\n\
    mov         r2,#0x1\n\
    bl          fun_080034d4\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800fbb0:\n\
    .word 0x020006A0\n\
    ");
}
__attribute__((naked)) void fun_0800fbb4()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    ldr         r4,DAT_0800fc04\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_0800fc08\n\
    str         r0,[r1,#0x0]\n\
    mov         r6,#0x0\n\
    mov         r1,#0x5\n\
    strh        r1,[r0,#0x2]\n\
    mov         r1,#0x7e\n\
    strh        r1,[r0,#0x4]\n\
    mov         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x2\n\
    add         r5,r1,#0x0\n\
    ldrh        r1,[r0,#0x12]\n\
    orr         r1,r5\n\
    strh        r1,[r0,#0x12]\n\
    sub         r4,#0x20\n\
    add         r0,r4,#0x0\n\
    bl          fun_08003998\n\
    ldr         r1,DAT_0800fc0c\n\
    str         r0,[r1,#0x0]\n\
    mov         r1,#0x68\n\
    strh        r1,[r0,#0x2]\n\
    mov         r1,#0x4\n\
    strh        r1,[r0,#0x4]\n\
    ldrh        r1,[r0,#0x12]\n\
    orr         r1,r5\n\
    strh        r1,[r0,#0x12]\n\
    strh        r6,[r0,#0x0]\n\
    mov         r1,#0x40\n\
    bl          fun_0800476c\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_0800fc04:\n\
    .word 0x08449518\n\
DAT_0800fc08:\n\
    .word 0x0200DC04\n\
DAT_0800fc0c:\n\
    .word 0x0200DC08\n\
    ");
}
__attribute__((naked)) void fun_0800fc10()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    mov         r6,r8\n\
    push        {r6}\n\
    add         r5,r2,#0x0\n\
    mov         r8,r3\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800fc9c\n\
    add         r0,r0,r1\n\
    mov         r1,#0xe1\n\
    lsl         r1,r1,#0x2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_0800ddc8\n\
    ldr         r4,DAT_0800fca0\n\
    ldr         r2,DAT_0800fca4\n\
    add         r0,r4,r2\n\
    mov         r1,#0x3\n\
    strb        r1,[r0,#0x0]\n\
    sub         r2,#0x14\n\
    add         r0,r4,r2\n\
    ldr         r6,DAT_0800fca8\n\
    strh        r6,[r0,#0x0]\n\
    strh        r6,[r5,#0x0]\n\
    strh        r6,[r4,#0x4]\n\
    add         r2,#0x2\n\
    add         r0,r4,r2\n\
    ldr         r5,DAT_0800fcac\n\
    strh        r5,[r0,#0x0]\n\
    mov         r0,r8\n\
    strh        r5,[r0,#0x0]\n\
    strh        r5,[r4,#0x6]\n\
    add         r2,#0xa\n\
    add         r0,r4,r2\n\
    strh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800fcb0\n\
    add         r1,r4,r0\n\
    mov         r0,#0x2\n\
    str         r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800fcb4\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0xd\n\
    orr         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_0800fbb4\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800fcb8\n\
    add         r0,r0,r2\n\
    mov         r1,#0x19\n\
    strb        r1,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    str         r0,[r4,#0x8]\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800fc9c:\n\
    .word 0x00000E34\n\
DAT_0800fca0:\n\
    .word 0x020006A0\n\
DAT_0800fca4:\n\
    .word 0x00000B58\n\
DAT_0800fca8:\n\
    .word 0x0000097D\n\
DAT_0800fcac:\n\
    .word 0x000011A3\n\
DAT_0800fcb0:\n\
    .word 0x00000B48\n\
DAT_0800fcb4:\n\
    .word 0x00000E84\n\
DAT_0800fcb8:\n\
    .word 0x00000E1F\n\
    ");
}
__attribute__((naked)) void fun_0800fcbc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r9,r0\n\
    mov         r10,r1\n\
    add         r6,r2,#0x0\n\
    add         r7,r3,#0x0\n\
    ldr         r0,DAT_0800fce0\n\
    ldr         r1,[r0,#0x0]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800fce8\n\
    ldr         r0,DAT_0800fce4\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    b           LAB_0800fcec\n\
DAT_0800fce0:\n\
    .word 0x0200DC08\n\
DAT_0800fce4:\n\
    .word 0x0000FDFF\n\
LAB_0800fce8:\n\
    bl          fun_0800fbb4\n\
LAB_0800fcec:\n\
    bl          fun_080020a4\n\
    add         r4,r0,#0x0\n\
    ldrh        r0,[r6,#0x0]\n\
    ldrh        r1,[r7,#0x0]\n\
    bl          fun_08003330\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    mov         r8,r1\n\
    add         r4,r8\n\
    strh        r0,[r4,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r0,r2]\n\
    cmp         r0,#0x8f\n\
    ble         LAB_0800fe04\n\
    bl          fun_080020a4\n\
    mov         r1,#0xde\n\
    lsl         r1,r1,#0x4\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r0,r2]\n\
    cmp         r0,#0xa3\n\
    bgt         LAB_0800fe04\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r6,#0x0]\n\
    ldr         r2,DAT_0800fdc8\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldrh        r1,[r7,#0x0]\n\
    ldr         r2,DAT_0800fdcc\n\
    add         r0,r0,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    mov         r2,r9\n\
    ldrh        r1,[r2,#0x10]\n\
    mov         r2,#0xe3\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r0,r2\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    ldrb        r1,[r0,#0x0]\n\
    add         r1,#0x70\n\
    lsl         r1,r1,#0x18\n\
    lsr         r1,r1,#0x18\n\
    ldr         r0,DAT_0800fdd0\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r5,DAT_0800fdd4\n\
    lsl         r3,r1,#0x2\n\
    add         r3,r3,r1\n\
    lsl         r3,r3,#0x1\n\
    add         r1,r3,r5\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x0]\n\
    add         r1,r5,#0x2\n\
    add         r1,r3,r1\n\
    ldrh        r1,[r1,#0x0]\n\
    add         r2,r5,#0x4\n\
    add         r2,r3,r2\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r2,r2,#0x18\n\
    lsr         r2,r2,#0x10\n\
    add         r4,r5,#0x6\n\
    add         r3,r3,r4\n\
    ldrh        r3,[r3,#0x0]\n\
    lsl         r3,r3,#0x18\n\
    lsr         r3,r3,#0x10\n\
    bl          fun_080040d4\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    ldrb        r4,[r0,#0x0]\n\
    add         r4,#0x70\n\
    lsl         r4,r4,#0x18\n\
    lsr         r4,r4,#0x18\n\
    bl          fun_080020a4\n\
    lsl         r1,r4,#0x2\n\
    add         r1,r1,r4\n\
    lsl         r1,r1,#0x1\n\
    add         r5,#0x8\n\
    add         r1,r1,r5\n\
    ldrh        r1,[r1,#0x0]\n\
    ldr         r2,DAT_0800fdd8\n\
    add         r0,r0,r2\n\
    strb        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800fdd8\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r0,#0x19\n\
    beq         LAB_0800fdf0\n\
    cmp         r0,#0x19\n\
    bgt         LAB_0800fddc\n\
    cmp         r0,#0xa\n\
    beq         LAB_0800fde2\n\
    b           LAB_0800fe04\n\
\n\
.space 2\n\
\n\
DAT_0800fdc8:\n\
    .word 0x00000E22\n\
DAT_0800fdcc:\n\
    .word 0x00000E24\n\
DAT_0800fdd0:\n\
    .word 0x0200DC08\n\
DAT_0800fdd4:\n\
    .word 0x0877EE74\n\
DAT_0800fdd8:\n\
    .word 0x00000E1F\n\
LAB_0800fddc:\n\
    cmp         r0,#0x28\n\
    beq         LAB_0800fdfc\n\
    b           LAB_0800fe04\n\
LAB_0800fde2:\n\
    ldr         r0,DAT_0800fdec\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    b           LAB_0800fe02\n\
\n\
.space 2\n\
\n\
DAT_0800fdec:\n\
    .word 0x0200DC04\n\
LAB_0800fdf0:\n\
    ldr         r0,DAT_0800fdf8\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x1\n\
    b           LAB_0800fe02\n\
DAT_0800fdf8:\n\
    .word 0x0200DC04\n\
LAB_0800fdfc:\n\
    ldr         r0,DAT_0800fe38\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x2\n\
LAB_0800fe02:\n\
    strh        r0,[r1,#0x0]\n\
LAB_0800fe04:\n\
    bl          fun_080020a4\n\
    mov         r2,#0xde\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r0,r2\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r0,#0xa4\n\
    ble         LAB_0800fe3c\n\
    bl          fun_080020a4\n\
    mov         r2,#0xde\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r0,r2\n\
    mov         r1,#0x0\n\
    ldrsh       r0,[r0,r1]\n\
    cmp         r0,#0xaa\n\
    bgt         LAB_0800fe3c\n\
    mov         r0,r9\n\
    mov         r1,r10\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_08010208\n\
    b           LAB_0800fe64\n\
\n\
.space 2\n\
\n\
DAT_0800fe38:\n\
    .word 0x0200DC04\n\
LAB_0800fe3c:\n\
    bl          fun_080020a4\n\
    mov         r2,#0xde\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r0,r2\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0xa4\n\
    bne         LAB_0800fe58\n\
    mov         r0,r9\n\
    mov         r1,r10\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800fe78\n\
LAB_0800fe58:\n\
    mov         r0,r9\n\
    mov         r1,r10\n\
    add         r2,r6,#0x0\n\
    add         r3,r7,#0x0\n\
    bl          fun_0800ff80\n\
LAB_0800fe64:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0800fe78()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r10,r2\n\
    add         r7,r3,#0x0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ff48\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,DAT_0800ff4c\n\
    and         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800ff50\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_0800ff54\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_0800ff58\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_0800ff5c\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r4,DAT_0800ff60\n\
    ldr         r2,DAT_0800ff64\n\
    add         r0,r4,r2\n\
    mov         r3,#0x1\n\
    mov         r8,r3\n\
    mov         r1,r8\n\
    strb        r1,[r0,#0x0]\n\
    sub         r2,#0x10\n\
    add         r0,r4,r2\n\
    str         r3,[r0,#0x0]\n\
    mov         r0,#0x0\n\
    mov         r9,r0\n\
    ldr         r6,DAT_0800ff68\n\
    strh        r6,[r4,#0x4]\n\
    mov         r1,r10\n\
    strh        r6,[r1,#0x0]\n\
    ldr         r5,DAT_0800ff6c\n\
    strh        r5,[r4,#0x6]\n\
    strh        r5,[r7,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ff70\n\
    add         r0,r0,r2\n\
    mov         r3,r10\n\
    ldrh        r3,[r3,#0x0]\n\
    lsl         r1,r3,#0x8\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ff74\n\
    add         r0,r0,r1\n\
    ldrh        r7,[r7,#0x0]\n\
    lsl         r1,r7,#0x8\n\
    str         r1,[r0,#0x0]\n\
    mov         r0,#0x2\n\
    str         r0,[r4,#0x8]\n\
    mov         r2,r9\n\
    strb        r2,[r4,#0x18]\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    mov         r0,#0x10\n\
    bl          fun_080017b8\n\
    ldr         r0,DAT_0800ff78\n\
    mov         r3,r8\n\
    strh        r3,[r0,#0x0]\n\
    ldr         r1,DAT_0800ff7c\n\
    mov         r2,#0xdb\n\
    lsl         r2,r2,#0x1\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    mov         r3,#0xe2\n\
    lsl         r3,r3,#0x4\n\
    add         r0,r0,r3\n\
    mov         r1,r8\n\
    strh        r1,[r0,#0x0]\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_0800ff48:\n\
    .word 0x00000E84\n\
DAT_0800ff4c:\n\
    .word 0xFFEFFFFF\n\
DAT_0800ff50:\n\
    .word 0x0200DC04\n\
DAT_0800ff54:\n\
    .word 0x0200DC88\n\
DAT_0800ff58:\n\
    .word 0x0200DC84\n\
DAT_0800ff5c:\n\
    .word 0x0200DC08\n\
DAT_0800ff60:\n\
    .word 0x020006A0\n\
DAT_0800ff64:\n\
    .word 0x00000B58\n\
DAT_0800ff68:\n\
    .word 0x00000A54\n\
DAT_0800ff6c:\n\
    .word 0x00001102\n\
DAT_0800ff70:\n\
    .word 0x00000E14\n\
DAT_0800ff74:\n\
    .word 0x00000E18\n\
DAT_0800ff78:\n\
    .word 0x0200DCA0\n\
DAT_0800ff7c:\n\
    .word 0x0200DC90\n\
    ");
}
__attribute__((naked)) void fun_0800ff80()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ffd8\n\
    add         r0,r0,r1\n\
    mov         r2,#0x0\n\
    ldrsh       r0,[r0,r2]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x3\n\
    bl          fun_08002c9c\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    mov         r1,#0xc8\n\
    lsl         r1,r1,#0x6\n\
    bl          fun_08002c84\n\
    add         r4,r0,#0x0\n\
    lsl         r4,r4,#0x10\n\
    asr         r4,r4,#0x18\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_0800ffdc\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    cmp         r4,r0\n\
    bgt         LAB_0800ffb8\n\
    b           LAB_0801014c\n\
LAB_0800ffb8:\n\
    bl          fun_080020a4\n\
    ldr         r2,DAT_0800ffe0\n\
    add         r0,r0,r2\n\
    mov         r1,#0x1\n\
    ldrb        r0,[r0,#0x0]\n\
    and         r1,r0\n\
    cmp         r1,#0x0\n\
    beq         LAB_0800ffec\n\
    ldr         r0,DAT_0800ffe4\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_0800ffe8\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    b           LAB_0800fffa\n\
\n\
.space 2\n\
\n\
DAT_0800ffd8:\n\
    .word 0x00000E1C\n\
DAT_0800ffdc:\n\
    .word 0x00000E1F\n\
DAT_0800ffe0:\n\
    .word 0x00000E2A\n\
DAT_0800ffe4:\n\
    .word 0x0200DC04\n\
DAT_0800ffe8:\n\
    .word 0x0000FDFF\n\
LAB_0800ffec:\n\
    ldr         r0,DAT_080100b8\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0x2\n\
    add         r0,r2,#0x0\n\
    ldrh        r2,[r1,#0x12]\n\
    orr         r0,r2\n\
LAB_0800fffa:\n\
    strh        r0,[r1,#0x12]\n\
    bl          fun_080020a4\n\
    ldr         r4,DAT_080100bc\n\
    add         r0,r0,r4\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    mov         r6,#0x0\n\
    mov         r5,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x5a\n\
    bhi         LAB_0801001c\n\
    b           LAB_08010164\n\
LAB_0801001c:\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    strh        r5,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080100c0\n\
    add         r0,r0,r1\n\
    strh        r5,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r4,#0x2\n\
    add         r0,r0,r4\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r4\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x3\n\
    bne         LAB_080100f0\n\
    ldr         r0,DAT_080100c4\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r1,DAT_080100c8\n\
    mov         r2,#0xe0\n\
    lsl         r2,r2,#0x1\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080100cc\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,DAT_080100d0\n\
    and         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_080100b8\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_080100d4\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_080100d8\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r0,DAT_080100dc\n\
    ldr         r0,[r0,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r3,DAT_080100e0\n\
    ldr         r2,DAT_080100e4\n\
    add         r0,r3,r2\n\
    mov         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
    sub         r2,#0x10\n\
    add         r0,r3,r2\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_080100e8\n\
    strh        r0,[r3,#0x4]\n\
    ldr         r1,DAT_080100ec\n\
    strh        r1,[r3,#0x6]\n\
    mov         r2,#0x2\n\
    str         r2,[r3,#0x8]\n\
    strb        r6,[r3,#0x18]\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    mov         r0,#0x0\n\
    b           LAB_08010166\n\
\n\
.space 2\n\
\n\
DAT_080100b8:\n\
    .word 0x0200DC04\n\
DAT_080100bc:\n\
    .word 0x00000E2C\n\
DAT_080100c0:\n\
    .word 0x00000E1C\n\
DAT_080100c4:\n\
    .word 0x0200DCA0\n\
DAT_080100c8:\n\
    .word 0x0200DC90\n\
DAT_080100cc:\n\
    .word 0x00000E84\n\
DAT_080100d0:\n\
    .word 0xFFEFFFFF\n\
DAT_080100d4:\n\
    .word 0x0200DC88\n\
DAT_080100d8:\n\
    .word 0x0200DC84\n\
DAT_080100dc:\n\
    .word 0x0200DC08\n\
DAT_080100e0:\n\
    .word 0x020006A0\n\
DAT_080100e4:\n\
    .word 0x00000B58\n\
DAT_080100e8:\n\
    .word 0x00000A54\n\
DAT_080100ec:\n\
    .word 0x00001102\n\
LAB_080100f0:\n\
    ldr         r0,DAT_08010134\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x2\n\
    add         r2,r0,#0x0\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_08010138\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_0801013c\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_08010140\n\
    ldr         r0,[r0,#0x0]\n\
    ldrh        r1,[r0,#0x12]\n\
    orr         r2,r1\n\
    strh        r2,[r0,#0x12]\n\
    ldr         r0,DAT_08010144\n\
    strh        r5,[r0,#0x0]\n\
    ldr         r1,DAT_08010148\n\
    mov         r2,#0xdc\n\
    lsl         r2,r2,#0x1\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    b           LAB_08010164\n\
DAT_08010134:\n\
    .word 0x0200DC04\n\
DAT_08010138:\n\
    .word 0x0200DC88\n\
DAT_0801013c:\n\
    .word 0x0200DC84\n\
DAT_08010140:\n\
    .word 0x0200DC08\n\
DAT_08010144:\n\
    .word 0x0200DCA0\n\
DAT_08010148:\n\
    .word 0x0200DC90\n\
LAB_0801014c:\n\
    ldr         r0,DAT_0801016c\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r0,DAT_08010170\n\
    ldrh        r2,[r1,#0x12]\n\
    and         r0,r2\n\
    mov         r4,#0x0\n\
    strh        r0,[r1,#0x12]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08010174\n\
    add         r0,r0,r1\n\
    strh        r4,[r0,#0x0]\n\
LAB_08010164:\n\
    mov         r0,#0x1\n\
LAB_08010166:\n\
    pop         {r4,r5,r6}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_0801016c:\n\
    .word 0x0200DC04\n\
DAT_08010170:\n\
    .word 0x0000FDFF\n\
DAT_08010174:\n\
    .word 0x00000E2C\n\
    ");
}
__attribute__((naked)) void fun_08010178()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    ldr         r3,DAT_080101f4\n\
    mov         r0,#0xb5\n\
    lsl         r0,r0,#0x4\n\
    add         r5,r3,r0\n\
    mov         r1,#0xb4\n\
    lsl         r1,r1,#0x4\n\
    add         r4,r3,r1\n\
    ldr         r0,[r4,#0x0]\n\
    ldrh        r1,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x22]\n\
    cmp         r1,r0\n\
    bne         LAB_080101a2\n\
    ldr         r0,DAT_080101f8\n\
    add         r2,r3,r0\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,DAT_080101fc\n\
    strh        r0,[r1,#0xc]\n\
    ldr         r1,[r2,#0x0]\n\
    add         r0,#0x11\n\
    strh        r0,[r1,#0xe]\n\
LAB_080101a2:\n\
    ldr         r0,[r4,#0x0]\n\
    ldrh        r1,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x26]\n\
    cmp         r1,r0\n\
    bne         LAB_080101bc\n\
    ldr         r0,DAT_080101f8\n\
    add         r2,r3,r0\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,DAT_08010200\n\
    strh        r0,[r1,#0xc]\n\
    ldr         r1,[r2,#0x0]\n\
    sub         r0,#0x18\n\
    strh        r0,[r1,#0xe]\n\
LAB_080101bc:\n\
    ldr         r0,[r4,#0x0]\n\
    ldrh        r1,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x28]\n\
    cmp         r1,r0\n\
    bne         LAB_080101d4\n\
    ldr         r0,DAT_080101f8\n\
    add         r2,r3,r0\n\
    ldr         r0,[r2,#0x0]\n\
    ldr         r1,DAT_08010204\n\
    strh        r1,[r0,#0xc]\n\
    ldr         r0,[r2,#0x0]\n\
    strh        r1,[r0,#0xe]\n\
LAB_080101d4:\n\
    ldr         r0,[r4,#0x0]\n\
    ldrh        r5,[r5,#0x0]\n\
    ldrh        r0,[r0,#0x24]\n\
    cmp         r5,r0\n\
    bne         LAB_080101ee\n\
    ldr         r1,DAT_080101f8\n\
    add         r2,r3,r1\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,DAT_08010204\n\
    strh        r0,[r1,#0xc]\n\
    ldr         r1,[r2,#0x0]\n\
    sub         r0,#0x1e\n\
    strh        r0,[r1,#0xe]\n\
LAB_080101ee:\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_080101f4:\n\
    .word 0x020006A0\n\
DAT_080101f8:\n\
    .word 0x00000B4C\n\
DAT_080101fc:\n\
    .word 0x0000FFCF\n\
DAT_08010200:\n\
    .word 0x0000FFF8\n\
DAT_08010204:\n\
    .word 0x0000FFE0\n\
    ");
}
__attribute__((naked)) void fun_08010208()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r9,r2\n\
    mov         r10,r3\n\
    ldr         r0,DAT_0801038c\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    mov         r2,#0xdf\n\
    lsl         r2,r2,#0x1\n\
    add         r0,r2,#0x0\n\
    ldr         r3,DAT_08010390\n\
    strh        r0,[r3,#0x0]\n\
    mov         r0,#0x1a\n\
    bl          fun_08001088\n\
    ldr         r0,DAT_08010394\n\
    ldr         r1,[r0,#0x0]\n\
    mov         r3,#0x80\n\
    lsl         r3,r3,#0x2\n\
    add         r2,r3,#0x0\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r0,DAT_08010398\n\
    ldr         r1,[r0,#0x0]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r3,DAT_0801039c\n\
    ldr         r1,[r3,#0x0]\n\
    ldrh        r0,[r1,#0x12]\n\
    orr         r0,r2\n\
    strh        r0,[r1,#0x12]\n\
    ldr         r1,DAT_080103a0\n\
    ldr         r0,[r1,#0x0]\n\
    ldrh        r3,[r0,#0x12]\n\
    orr         r2,r3\n\
    strh        r2,[r0,#0x12]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080103a4\n\
    mov         r8,r1\n\
    add         r0,r8\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r1,#0x1\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r7,DAT_080103a8\n\
    ldr         r6,DAT_080103ac\n\
    add         r0,r0,r6\n\
    ldrh        r2,[r0,#0x0]\n\
    ldr         r3,DAT_080103b0\n\
    add         r1,r7,r3\n\
    strh        r2,[r1,#0x0]\n\
    ldrh        r1,[r0,#0x0]\n\
    strh        r1,[r7,#0x4]\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r1,r9\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r5,DAT_080103b4\n\
    add         r0,r0,r5\n\
    ldrh        r2,[r0,#0x0]\n\
    ldr         r3,DAT_080103b8\n\
    add         r1,r7,r3\n\
    strh        r2,[r1,#0x0]\n\
    ldrh        r1,[r0,#0x0]\n\
    strh        r1,[r7,#0x6]\n\
    ldrh        r0,[r0,#0x0]\n\
    mov         r1,r10\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_080020a4\n\
    mov         r4,#0xe3\n\
    lsl         r4,r4,#0x4\n\
    add         r0,r0,r4\n\
    ldrb        r1,[r0,#0x0]\n\
    mov         r2,#0xb5\n\
    lsl         r2,r2,#0x4\n\
    add         r0,r7,r2\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_080103bc\n\
    add         r1,r7,r3\n\
    ldr         r1,[r1,#0x0]\n\
    add         r0,r0,r4\n\
    ldrb        r0,[r0,#0x0]\n\
    strh        r0,[r1,#0x0]\n\
    bl          fun_08010178\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080103c0\n\
    add         r0,r0,r1\n\
    mov         r2,r9\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r1,r2,#0x8\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_080103c4\n\
    add         r0,r0,r3\n\
    mov         r2,r10\n\
    ldrh        r2,[r2,#0x0]\n\
    lsl         r1,r2,#0x8\n\
    str         r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r3,DAT_080103c8\n\
    add         r0,r0,r3\n\
    mov         r1,#0x0\n\
    strh        r1,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r6\n\
    ldrh        r4,[r0,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,r0,r5\n\
    ldrh        r1,[r0,#0x0]\n\
    add         r0,r4,#0x0\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
    bl          fun_080020a4\n\
    add         r0,r8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x3\n\
    bne         LAB_0801037a\n\
    mov         r2,#0xe0\n\
    lsl         r2,r2,#0x1\n\
    add         r0,r2,#0x0\n\
    ldr         r3,DAT_08010390\n\
    strh        r0,[r3,#0x0]\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_080103cc\n\
    add         r0,r0,r1\n\
    ldr         r1,[r0,#0x0]\n\
    ldr         r2,DAT_080103d0\n\
    and         r1,r2\n\
    str         r1,[r0,#0x0]\n\
    ldr         r2,DAT_08010394\n\
    ldr         r0,[r2,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r3,DAT_08010398\n\
    ldr         r0,[r3,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r1,DAT_0801039c\n\
    ldr         r0,[r1,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r2,DAT_080103a0\n\
    ldr         r0,[r2,#0x0]\n\
    bl          fun_08003b00\n\
    ldr         r3,DAT_080103d4\n\
    add         r0,r7,r3\n\
    mov         r1,#0x1\n\
    strb        r1,[r0,#0x0]\n\
    ldr         r2,DAT_080103d8\n\
    add         r0,r7,r2\n\
    str         r1,[r0,#0x0]\n\
    ldr         r0,DAT_080103dc\n\
    strh        r0,[r7,#0x4]\n\
    ldr         r1,DAT_080103e0\n\
    strh        r1,[r7,#0x6]\n\
    mov         r2,#0x2\n\
    str         r2,[r7,#0x8]\n\
    mov         r3,#0x0\n\
    strb        r3,[r7,#0x18]\n\
    bl          fun_0803a140\n\
    bl          fun_0803a9ec\n\
LAB_0801037a:\n\
    mov         r0,#0x0\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_0801038c:\n\
    .word 0x0200DCA0\n\
DAT_08010390:\n\
    .word 0x0200DC90\n\
DAT_08010394:\n\
    .word 0x0200DC04\n\
DAT_08010398:\n\
    .word 0x0200DC88\n\
DAT_0801039c:\n\
    .word 0x0200DC84\n\
DAT_080103a0:\n\
    .word 0x0200DC08\n\
DAT_080103a4:\n\
    .word 0x00000E2E\n\
DAT_080103a8:\n\
    .word 0x020006A0\n\
DAT_080103ac:\n\
    .word 0x00000E22\n\
DAT_080103b0:\n\
    .word 0x00000B44\n\
DAT_080103b4:\n\
    .word 0x00000E24\n\
DAT_080103b8:\n\
    .word 0x00000B46\n\
DAT_080103bc:\n\
    .word 0x00000B4C\n\
DAT_080103c0:\n\
    .word 0x00000E14\n\
DAT_080103c4:\n\
    .word 0x00000E18\n\
DAT_080103c8:\n\
    .word 0x00000E1C\n\
DAT_080103cc:\n\
    .word 0x00000E84\n\
DAT_080103d0:\n\
    .word 0xFFEFFFFF\n\
DAT_080103d4:\n\
    .word 0x00000B58\n\
DAT_080103d8:\n\
    .word 0x00000B48\n\
DAT_080103dc:\n\
    .word 0x00000A54\n\
DAT_080103e0:\n\
    .word 0x00001102\n\
\n\
    ");
}
