__attribute__((naked)) void fun_08043504()
{
    asm("\n\
    cmp         r1,#0x0\n\
    beq         LAB_0804358c\n\
    push        {r4}\n\
    add         r4,r0,#0x0\n\
    eor         r4,r1\n\
    mov         r12,r4\n\
    mov         r3,#0x1\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x0\n\
    bpl         LAB_0804351a\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
LAB_0804351a:\n\
    cmp         r0,#0x0\n\
    bpl         LAB_08043520\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08043520:\n\
    cmp         r0,r1\n\
    bcc         LAB_0804357e\n\
    mov         r4,#0x1\n\
    lsl         r4,r4,#0x1c\n\
LAB_08043528:\n\
    cmp         r1,r4\n\
    bcs         LAB_08043536\n\
    cmp         r1,r0\n\
    bcs         LAB_08043536\n\
    lsl         r1,r1,#0x4\n\
    lsl         r3,r3,#0x4\n\
    b           LAB_08043528\n\
LAB_08043536:\n\
    lsl         r4,r4,#0x3\n\
LAB_08043538:\n\
    cmp         r1,r4\n\
    bcs         LAB_08043546\n\
    cmp         r1,r0\n\
    bcs         LAB_08043546\n\
    lsl         r1,r1,#0x1\n\
    lsl         r3,r3,#0x1\n\
    b           LAB_08043538\n\
LAB_08043546:\n\
    cmp         r0,r1\n\
    bcc         LAB_0804354e\n\
    sub         r0,r0,r1\n\
    orr         r2,r3\n\
LAB_0804354e:\n\
    lsr         r4,r1,#0x1\n\
    cmp         r0,r4\n\
    bcc         LAB_0804355a\n\
    sub         r0,r0,r4\n\
    lsr         r4,r3,#0x1\n\
    orr         r2,r4\n\
LAB_0804355a:\n\
    lsr         r4,r1,#0x2\n\
    cmp         r0,r4\n\
    bcc         LAB_08043566\n\
    sub         r0,r0,r4\n\
    lsr         r4,r3,#0x2\n\
    orr         r2,r4\n\
LAB_08043566:\n\
    lsr         r4,r1,#0x3\n\
    cmp         r0,r4\n\
    bcc         LAB_08043572\n\
    sub         r0,r0,r4\n\
    lsr         r4,r3,#0x3\n\
    orr         r2,r4\n\
LAB_08043572:\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804357e\n\
    lsr         r3,r3,#0x4\n\
    beq         LAB_0804357e\n\
    lsr         r1,r1,#0x4\n\
    b           LAB_08043546\n\
LAB_0804357e:\n\
    add         r0,r2,#0x0\n\
    mov         r4,r12\n\
    cmp         r4,#0x0\n\
    bpl         LAB_08043588\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08043588:\n\
    pop         {r4}\n\
    mov         pc,lr\n\
LAB_0804358c:\n\
    push        {lr}\n\
    bl          fun_08043598\n\
    mov         r0,#0x0\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08043598()
{
    asm("\n\
    mov         pc,lr\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_0804359c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    ldr         r1,DAT_080435b4\n\
    bl          fun_08044cb8\n\
    cmp         r0,#0x0\n\
    bge         LAB_080435b8\n\
    add         r0,r4,#0x0\n\
    bl          fun_08044df0\n\
    b           LAB_080435ca\n\
\n\
.space 2\n\
\n\
DAT_080435b4:\n\
    .4byte 0x4F000000\n\
LAB_080435b8:\n\
    ldr         r1,DAT_080435cc\n\
    add         r0,r4,#0x0\n\
    bl          fun_08044824\n\
    bl          fun_08044df0\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x18\n\
    add         r0,r0,r1\n\
LAB_080435ca:\n\
    pop         {r4,pc}\n\
DAT_080435cc:\n\
    .4byte 0xCF000000\n\
    ");
}
__attribute__((naked)) void fun_080435d0()
{
    asm("\n\
    mov         r3,#0x1\n\
    cmp         r1,#0x0\n\
    beq         LAB_08043694\n\
    bpl         LAB_080435da\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
LAB_080435da:\n\
    push        {r4}\n\
    push        {r0}\n\
    cmp         r0,#0x0\n\
    bpl         LAB_080435e4\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_080435e4:\n\
    cmp         r0,r1\n\
    bcc         LAB_08043688\n\
    mov         r4,#0x1\n\
    lsl         r4,r4,#0x1c\n\
LAB_080435ec:\n\
    cmp         r1,r4\n\
    bcs         LAB_080435fa\n\
    cmp         r1,r0\n\
    bcs         LAB_080435fa\n\
    lsl         r1,r1,#0x4\n\
    lsl         r3,r3,#0x4\n\
    b           LAB_080435ec\n\
LAB_080435fa:\n\
    lsl         r4,r4,#0x3\n\
LAB_080435fc:\n\
    cmp         r1,r4\n\
    bcs         LAB_0804360a\n\
    cmp         r1,r0\n\
    bcs         LAB_0804360a\n\
    lsl         r1,r1,#0x1\n\
    lsl         r3,r3,#0x1\n\
    b           LAB_080435fc\n\
LAB_0804360a:\n\
    mov         r2,#0x0\n\
    cmp         r0,r1\n\
    bcc         LAB_08043612\n\
    sub         r0,r0,r1\n\
LAB_08043612:\n\
    lsr         r4,r1,#0x1\n\
    cmp         r0,r4\n\
    bcc         LAB_08043624\n\
    sub         r0,r0,r4\n\
    mov         r12,r3\n\
    mov         r4,#0x1\n\
    ror         r3,r4\n\
    orr         r2,r3\n\
    mov         r3,r12\n\
LAB_08043624:\n\
    lsr         r4,r1,#0x2\n\
    cmp         r0,r4\n\
    bcc         LAB_08043636\n\
    sub         r0,r0,r4\n\
    mov         r12,r3\n\
    mov         r4,#0x2\n\
    ror         r3,r4\n\
    orr         r2,r3\n\
    mov         r3,r12\n\
LAB_08043636:\n\
    lsr         r4,r1,#0x3\n\
    cmp         r0,r4\n\
    bcc         LAB_08043648\n\
    sub         r0,r0,r4\n\
    mov         r12,r3\n\
    mov         r4,#0x3\n\
    ror         r3,r4\n\
    orr         r2,r3\n\
    mov         r3,r12\n\
LAB_08043648:\n\
    mov         r12,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043656\n\
    lsr         r3,r3,#0x4\n\
    beq         LAB_08043656\n\
    lsr         r1,r1,#0x4\n\
    b           LAB_0804360a\n\
LAB_08043656:\n\
    mov         r4,#0xe\n\
    lsl         r4,r4,#0x1c\n\
    and         r2,r4\n\
    beq         LAB_08043688\n\
    mov         r3,r12\n\
    mov         r4,#0x3\n\
    ror         r3,r4\n\
    tst         r2,r3\n\
    beq         LAB_0804366c\n\
    lsr         r4,r1,#0x3\n\
    add         r0,r0,r4\n\
LAB_0804366c:\n\
    mov         r3,r12\n\
    mov         r4,#0x2\n\
    ror         r3,r4\n\
    tst         r2,r3\n\
    beq         LAB_0804367a\n\
    lsr         r4,r1,#0x2\n\
    add         r0,r0,r4\n\
LAB_0804367a:\n\
    mov         r3,r12\n\
    mov         r4,#0x1\n\
    ror         r3,r4\n\
    tst         r2,r3\n\
    beq         LAB_08043688\n\
    lsr         r4,r1,#0x1\n\
    add         r0,r0,r4\n\
LAB_08043688:\n\
    pop         {r4}\n\
    cmp         r4,#0x0\n\
    bpl         LAB_08043690\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08043690:\n\
    pop         {r4}\n\
    mov         pc,lr\n\
LAB_08043694:\n\
    push        {lr}\n\
    bl          fun_08043598\n\
    mov         r0,#0x0\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080436a0()
{
    asm("\n\
    cmp         r1,#0x0\n\
    beq         LAB_0804370e\n\
    mov         r3,#0x1\n\
    mov         r2,#0x0\n\
    push        {r4}\n\
    cmp         r0,r1\n\
    bcc         LAB_08043708\n\
    mov         r4,#0x1\n\
    lsl         r4,r4,#0x1c\n\
LAB_080436b2:\n\
    cmp         r1,r4\n\
    bcs         LAB_080436c0\n\
    cmp         r1,r0\n\
    bcs         LAB_080436c0\n\
    lsl         r1,r1,#0x4\n\
    lsl         r3,r3,#0x4\n\
    b           LAB_080436b2\n\
LAB_080436c0:\n\
    lsl         r4,r4,#0x3\n\
LAB_080436c2:\n\
    cmp         r1,r4\n\
    bcs         LAB_080436d0\n\
    cmp         r1,r0\n\
    bcs         LAB_080436d0\n\
    lsl         r1,r1,#0x1\n\
    lsl         r3,r3,#0x1\n\
    b           LAB_080436c2\n\
LAB_080436d0:\n\
    cmp         r0,r1\n\
    bcc         LAB_080436d8\n\
    sub         r0,r0,r1\n\
    orr         r2,r3\n\
LAB_080436d8:\n\
    lsr         r4,r1,#0x1\n\
    cmp         r0,r4\n\
    bcc         LAB_080436e4\n\
    sub         r0,r0,r4\n\
    lsr         r4,r3,#0x1\n\
    orr         r2,r4\n\
LAB_080436e4:\n\
    lsr         r4,r1,#0x2\n\
    cmp         r0,r4\n\
    bcc         LAB_080436f0\n\
    sub         r0,r0,r4\n\
    lsr         r4,r3,#0x2\n\
    orr         r2,r4\n\
LAB_080436f0:\n\
    lsr         r4,r1,#0x3\n\
    cmp         r0,r4\n\
    bcc         LAB_080436fc\n\
    sub         r0,r0,r4\n\
    lsr         r4,r3,#0x3\n\
    orr         r2,r4\n\
LAB_080436fc:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043708\n\
    lsr         r3,r3,#0x4\n\
    beq         LAB_08043708\n\
    lsr         r1,r1,#0x4\n\
    b           LAB_080436d0\n\
LAB_08043708:\n\
    add         r0,r2,#0x0\n\
    pop         {r4}\n\
    mov         pc,lr\n\
LAB_0804370e:\n\
    push        {lr}\n\
    bl          fun_08043598\n\
    mov         r0,#0x0\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_08043718()
{
    asm("\n\
    cmp         r1,#0x0\n\
    beq         LAB_080437ce\n\
    mov         r3,#0x1\n\
    cmp         r0,r1\n\
    bcs         LAB_08043724\n\
    mov         pc,lr\n\
LAB_08043724:\n\
    push        {r4}\n\
    mov         r4,#0x1\n\
    lsl         r4,r4,#0x1c\n\
LAB_0804372a:\n\
    cmp         r1,r4\n\
    bcs         LAB_08043738\n\
    cmp         r1,r0\n\
    bcs         LAB_08043738\n\
    lsl         r1,r1,#0x4\n\
    lsl         r3,r3,#0x4\n\
    b           LAB_0804372a\n\
LAB_08043738:\n\
    lsl         r4,r4,#0x3\n\
LAB_0804373a:\n\
    cmp         r1,r4\n\
    bcs         LAB_08043748\n\
    cmp         r1,r0\n\
    bcs         LAB_08043748\n\
    lsl         r1,r1,#0x1\n\
    lsl         r3,r3,#0x1\n\
    b           LAB_0804373a\n\
LAB_08043748:\n\
    mov         r2,#0x0\n\
    cmp         r0,r1\n\
    bcc         LAB_08043750\n\
    sub         r0,r0,r1\n\
LAB_08043750:\n\
    lsr         r4,r1,#0x1\n\
    cmp         r0,r4\n\
    bcc         LAB_08043762\n\
    sub         r0,r0,r4\n\
    mov         r12,r3\n\
    mov         r4,#0x1\n\
    ror         r3,r4\n\
    orr         r2,r3\n\
    mov         r3,r12\n\
LAB_08043762:\n\
    lsr         r4,r1,#0x2\n\
    cmp         r0,r4\n\
    bcc         LAB_08043774\n\
    sub         r0,r0,r4\n\
    mov         r12,r3\n\
    mov         r4,#0x2\n\
    ror         r3,r4\n\
    orr         r2,r3\n\
    mov         r3,r12\n\
LAB_08043774:\n\
    lsr         r4,r1,#0x3\n\
    cmp         r0,r4\n\
    bcc         LAB_08043786\n\
    sub         r0,r0,r4\n\
    mov         r12,r3\n\
    mov         r4,#0x3\n\
    ror         r3,r4\n\
    orr         r2,r3\n\
    mov         r3,r12\n\
LAB_08043786:\n\
    mov         r12,r3\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043794\n\
    lsr         r3,r3,#0x4\n\
    beq         LAB_08043794\n\
    lsr         r1,r1,#0x4\n\
    b           LAB_08043748\n\
LAB_08043794:\n\
    mov         r4,#0xe\n\
    lsl         r4,r4,#0x1c\n\
    and         r2,r4\n\
    bne         LAB_080437a0\n\
    pop         {r4}\n\
    mov         pc,lr\n\
LAB_080437a0:\n\
    mov         r3,r12\n\
    mov         r4,#0x3\n\
    ror         r3,r4\n\
    tst         r2,r3\n\
    beq         LAB_080437ae\n\
    lsr         r4,r1,#0x3\n\
    add         r0,r0,r4\n\
LAB_080437ae:\n\
    mov         r3,r12\n\
    mov         r4,#0x2\n\
    ror         r3,r4\n\
    tst         r2,r3\n\
    beq         LAB_080437bc\n\
    lsr         r4,r1,#0x2\n\
    add         r0,r0,r4\n\
LAB_080437bc:\n\
    mov         r3,r12\n\
    mov         r4,#0x1\n\
    ror         r3,r4\n\
    tst         r2,r3\n\
    beq         LAB_080437ca\n\
    lsr         r4,r1,#0x1\n\
    add         r0,r0,r4\n\
LAB_080437ca:\n\
    pop         {r4}\n\
    mov         pc,lr\n\
LAB_080437ce:\n\
    push        {lr}\n\
    bl          fun_08043598\n\
    mov         r0,#0x0\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_080437d8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x8\n\
    add         r1,r0,#0x0\n\
    ldr         r4,[r1,#0xc]\n\
    ldr         r5,[r1,#0x10]\n\
    ldr         r7,[r1,#0x4]\n\
    mov         r6,#0x0\n\
    mov         r2,#0x0\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080437f0\n\
    mov         r2,#0x1\n\
LAB_080437f0:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08043810\n\
    ldr         r6,DAT_08043804\n\
    ldr         r2,DAT_08043808\n\
    ldr         r3,DAT_0804380c\n\
    add         r0,r4,#0x0\n\
    add         r1,r5,#0x0\n\
    orr         r1,r3\n\
    b           LAB_080438c8\n\
\n\
.space 2\n\
\n\
DAT_08043804:\n\
    .4byte 0x000007FF\n\
DAT_08043808:\n\
    .4byte 0x00000000\n\
DAT_0804380c:\n\
    .4byte 0x00080000\n\
LAB_08043810:\n\
    mov         r2,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_08043818\n\
    mov         r2,#0x1\n\
LAB_08043818:\n\
    cmp         r2,#0x0\n\
    bne         LAB_08043864\n\
    mov         r2,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08043824\n\
    mov         r2,#0x1\n\
LAB_08043824:\n\
    cmp         r2,#0x0\n\
    beq         LAB_0804382e\n\
    mov         r4,#0x0\n\
    mov         r5,#0x0\n\
    b           LAB_080438cc\n\
LAB_0804382e:\n\
    add         r0,r5,#0x0\n\
    orr         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_080438cc\n\
    ldr         r2,[r1,#0x8]\n\
    ldr         r0,DAT_0804384c\n\
    cmp         r2,r0\n\
    bge         LAB_0804385e\n\
    sub         r2,r0,r2\n\
    cmp         r2,#0x38\n\
    ble         LAB_08043850\n\
    mov         r4,#0x0\n\
    mov         r5,#0x0\n\
    b           LAB_080438be\n\
\n\
.space 2\n\
\n\
DAT_0804384c:\n\
    .4byte 0xFFFFFC02\n\
LAB_08043850:\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    bl          fun_08044ec0\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    b           LAB_080438be\n\
LAB_0804385e:\n\
    ldr         r0,DAT_0804386c\n\
    cmp         r2,r0\n\
    ble         LAB_08043874\n\
LAB_08043864:\n\
    ldr         r6,DAT_08043870\n\
    mov         r4,#0x0\n\
    mov         r5,#0x0\n\
    b           LAB_080438cc\n\
DAT_0804386c:\n\
    .4byte 0x000003FF\n\
DAT_08043870:\n\
    .4byte 0x000007FF\n\
LAB_08043874:\n\
    ldr         r0,DAT_0804389c\n\
    add         r6,r2,r0\n\
    mov         r0,#0xff\n\
    add         r1,r4,#0x0\n\
    and         r1,r0\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x80\n\
    bne         LAB_080438a0\n\
    cmp         r2,#0x0\n\
    bne         LAB_080438a0\n\
    add         r0,#0x1\n\
    add         r1,r4,#0x0\n\
    and         r1,r0\n\
    add         r0,r2,#0x0\n\
    orr         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080438a8\n\
    mov         r0,#0x80\n\
    mov         r1,#0x0\n\
    b           LAB_080438a4\n\
DAT_0804389c:\n\
    .4byte 0x000003FF\n\
LAB_080438a0:\n\
    mov         r0,#0x7f\n\
    mov         r1,#0x0\n\
LAB_080438a4:\n\
    add         r4,r4,r0\n\
    adc         r5,r1\n\
LAB_080438a8:\n\
    ldr         r0,DAT_0804390c\n\
    cmp         r5,r0\n\
    bls         LAB_080438be\n\
    lsl         r3,r5,#0x1f\n\
    lsr         r2,r4,#0x1\n\
    add         r0,r3,#0x0\n\
    orr         r0,r2\n\
    lsr         r1,r5,#0x1\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    add         r6,#0x1\n\
LAB_080438be:\n\
    lsl         r3,r5,#0x18\n\
    lsr         r2,r4,#0x8\n\
    add         r0,r3,#0x0\n\
    orr         r0,r2\n\
    lsr         r1,r5,#0x8\n\
LAB_080438c8:\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
LAB_080438cc:\n\
    str         r4,[sp,#0x0]\n\
    ldr         r2,DAT_08043910\n\
    and         r2,r5\n\
    ldr         r0,[sp,#0x4]\n\
    ldr         r1,DAT_08043914\n\
    and         r0,r1\n\
    orr         r0,r2\n\
    str         r0,[sp,#0x4]\n\
    mov         r2,sp\n\
    ldr         r1,DAT_08043918\n\
    add         r0,r1,#0x0\n\
    and         r6,r0\n\
    lsl         r1,r6,#0x4\n\
    ldr         r0,DAT_0804391c\n\
    ldrh        r3,[r2,#0x6]\n\
    and         r0,r3\n\
    orr         r0,r1\n\
    strh        r0,[r2,#0x6]\n\
    lsl         r1,r7,#0x7\n\
    mov         r0,#0x7f\n\
    ldrb        r3,[r2,#0x7]\n\
    and         r0,r3\n\
    orr         r0,r1\n\
    strb        r0,[r2,#0x7]\n\
    ldr         r1,[sp,#0x0]\n\
    ldr         r0,[sp,#0x4]\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#0x4]\n\
    ldr         r0,[sp,#0x0]\n\
    ldr         r1,[sp,#0x4]\n\
    add         sp,#0x8\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_0804390c:\n\
    .4byte 0x1FFFFFFF\n\
DAT_08043910:\n\
    .4byte 0x000FFFFF\n\
DAT_08043914:\n\
    .4byte 0xFFF00000\n\
DAT_08043918:\n\
    .4byte 0x000007FF\n\
DAT_0804391c:\n\
    .4byte 0xFFFF800F\n\
    ");
}
__attribute__((naked)) void fun_08043920()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x8\n\
    add         r2,r0,#0x0\n\
    add         r6,r1,#0x0\n\
    ldr         r1,[r2,#0x4]\n\
    str         r1,[sp,#0x0]\n\
    ldr         r0,[r2,#0x0]\n\
    str         r0,[sp,#0x4]\n\
    mov         r2,sp\n\
    add         r4,r1,#0x0\n\
    lsl         r0,r0,#0xc\n\
    lsr         r5,r0,#0xc\n\
    ldrh        r3,[r2,#0x6]\n\
    lsl         r0,r3,#0x11\n\
    lsr         r3,r0,#0x15\n\
    ldrb        r2,[r2,#0x7]\n\
    lsr         r0,r2,#0x7\n\
    str         r0,[r6,#0x4]\n\
    cmp         r3,#0x0\n\
    bne         LAB_08043994\n\
    orr         r1,r5\n\
    cmp         r1,#0x0\n\
    bne         LAB_08043954\n\
    mov         r0,#0x2\n\
    str         r0,[r6,#0x0]\n\
    b           LAB_080439e8\n\
LAB_08043954:\n\
    ldr         r0,DAT_0804398c\n\
    str         r0,[r6,#0x8]\n\
    lsr         r3,r4,#0x18\n\
    lsl         r2,r5,#0x8\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r4,#0x8\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x3\n\
    str         r0,[r6,#0x0]\n\
    ldr         r0,DAT_08043990\n\
    cmp         r5,r0\n\
    bhi         LAB_080439c4\n\
    add         r7,r0,#0x0\n\
LAB_08043972:\n\
    lsr         r3,r4,#0x1f\n\
    lsl         r2,r5,#0x1\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r4,#0x1\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    ldr         r0,[r6,#0x8]\n\
    sub         r0,#0x1\n\
    str         r0,[r6,#0x8]\n\
    cmp         r5,r7\n\
    bls         LAB_08043972\n\
    b           LAB_080439c4\n\
DAT_0804398c:\n\
    .4byte 0xFFFFFC02\n\
DAT_08043990:\n\
    .4byte 0x0FFFFFFF\n\
LAB_08043994:\n\
    ldr         r0,DAT_080439a8\n\
    cmp         r3,r0\n\
    bne         LAB_080439ca\n\
    orr         r1,r5\n\
    cmp         r1,#0x0\n\
    bne         LAB_080439ac\n\
    mov         r0,#0x4\n\
    str         r0,[r6,#0x0]\n\
    b           LAB_080439e8\n\
\n\
.space 2\n\
\n\
DAT_080439a8:\n\
    .4byte 0x000007FF\n\
LAB_080439ac:\n\
    mov         r2,#0x80\n\
    lsl         r2,r2,#0xc\n\
    mov         r0,#0x0\n\
    add         r1,r5,#0x0\n\
    and         r1,r2\n\
    orr         r1,r0\n\
    cmp         r1,#0x0\n\
    beq         LAB_080439c2\n\
    mov         r0,#0x1\n\
    str         r0,[r6,#0x0]\n\
    b           LAB_080439c4\n\
LAB_080439c2:\n\
    str         r1,[r6,#0x0]\n\
LAB_080439c4:\n\
    str         r4,[r6,#0xc]\n\
    str         r5,[r6,#0x10]\n\
    b           LAB_080439e8\n\
LAB_080439ca:\n\
    ldr         r1,DAT_080439ec\n\
    add         r0,r3,r1\n\
    str         r0,[r6,#0x8]\n\
    mov         r0,#0x3\n\
    str         r0,[r6,#0x0]\n\
    lsr         r3,r4,#0x18\n\
    lsl         r2,r5,#0x8\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r4,#0x8\n\
    ldr         r2,DAT_080439f0\n\
    ldr         r3,DAT_080439f4\n\
    orr         r1,r3\n\
    str         r0,[r6,#0xc]\n\
    str         r1,[r6,#0x10]\n\
LAB_080439e8:\n\
    add         sp,#0x8\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_080439ec:\n\
    .4byte 0xFFFFFC01\n\
DAT_080439f0:\n\
    .4byte 0x00000000\n\
DAT_080439f4:\n\
    .4byte 0x10000000\n\
    ");
}
__attribute__((naked)) void fun_080439f8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0xc\n\
    add         r3,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    mov         r10,r2\n\
    mov         r0,#0x0\n\
    ldr         r2,[r3,#0x0]\n\
    cmp         r2,#0x1\n\
    bhi         LAB_08043a14\n\
    mov         r0,#0x1\n\
LAB_08043a14:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043a1c\n\
LAB_08043a18:\n\
    add         r0,r3,#0x0\n\
    b           LAB_08043c54\n\
LAB_08043a1c:\n\
    mov         r1,#0x0\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08043a26\n\
    mov         r1,#0x1\n\
LAB_08043a26:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08043a9e\n\
    mov         r1,#0x0\n\
    cmp         r2,#0x4\n\
    bne         LAB_08043a32\n\
    mov         r1,#0x1\n\
LAB_08043a32:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08043a54\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_08043a3e\n\
    mov         r1,#0x1\n\
LAB_08043a3e:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08043a18\n\
    ldr         r1,[r3,#0x4]\n\
    ldr         r0,[r4,#0x4]\n\
    cmp         r1,r0\n\
    beq         LAB_08043a18\n\
    ldr         r0,DAT_08043a50\n\
    b           LAB_08043c54\n\
\n\
.space 2\n\
\n\
DAT_08043a50:\n\
    .4byte 0x020005B8\n\
LAB_08043a54:\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_08043a5c\n\
    mov         r1,#0x1\n\
LAB_08043a5c:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08043a9e\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08043a68\n\
    mov         r1,#0x1\n\
LAB_08043a68:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08043a90\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x2\n\
    bne         LAB_08043a74\n\
    mov         r0,#0x1\n\
LAB_08043a74:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043a18\n\
    mov         r1,r10\n\
    add         r0,r3,#0x0\n\
    ldmia       r0!,{r2,r5,r6}\n\
    stmia       r1!,{r2,r5,r6}\n\
    ldmia       r0!,{r2,r5}\n\
    stmia       r1!,{r2,r5}\n\
    ldr         r0,[r3,#0x4]\n\
    ldr         r1,[r4,#0x4]\n\
    and         r0,r1\n\
    mov         r6,r10\n\
    str         r0,[r6,#0x4]\n\
    b           LAB_08043c52\n\
LAB_08043a90:\n\
    mov         r1,#0x0\n\
    ldr         r0,[r3,#0x0]\n\
    cmp         r0,#0x2\n\
    bne         LAB_08043a9a\n\
    mov         r1,#0x1\n\
LAB_08043a9a:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08043aa2\n\
LAB_08043a9e:\n\
    add         r0,r4,#0x0\n\
    b           LAB_08043c54\n\
LAB_08043aa2:\n\
    ldr         r0,[r3,#0x8]\n\
    mov         r9,r0\n\
    ldr         r1,[r4,#0x8]\n\
    mov         r8,r1\n\
    ldr         r6,[r3,#0xc]\n\
    ldr         r7,[r3,#0x10]\n\
    ldr         r0,[r4,#0xc]\n\
    ldr         r1,[r4,#0x10]\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#0x4]\n\
    mov         r1,r9\n\
    mov         r2,r8\n\
    sub         r0,r1,r2\n\
    cmp         r0,#0x0\n\
    bge         LAB_08043ac2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08043ac2:\n\
    cmp         r0,#0x3f\n\
    bgt         LAB_08043b40\n\
    ldr         r3,[r3,#0x4]\n\
    mov         r12,r3\n\
    ldr         r4,[r4,#0x4]\n\
    str         r4,[sp,#0x8]\n\
    cmp         r9,r8\n\
    ble         LAB_08043b0c\n\
    mov         r3,r9\n\
    mov         r4,r8\n\
    sub         r3,r3,r4\n\
    mov         r8,r3\n\
LAB_08043ada:\n\
    mov         r5,#0x1\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
    add         r8,r5\n\
    ldr         r2,[sp,#0x0]\n\
    mov         r0,#0x1\n\
    and         r2,r0\n\
    mov         r3,#0x0\n\
    ldr         r1,[sp,#0x4]\n\
    lsl         r5,r1,#0x1f\n\
    ldr         r0,[sp,#0x0]\n\
    lsr         r4,r0,#0x1\n\
    add         r0,r5,#0x0\n\
    orr         r0,r4\n\
    add         r4,r1,#0x0\n\
    lsr         r1,r4,#0x1\n\
    add         r5,r2,#0x0\n\
    orr         r5,r0\n\
    str         r5,[sp,#0x0]\n\
    add         r4,r3,#0x0\n\
    orr         r4,r1\n\
    str         r4,[sp,#0x4]\n\
    mov         r5,r8\n\
    cmp         r5,#0x0\n\
    bne         LAB_08043ada\n\
    mov         r8,r9\n\
LAB_08043b0c:\n\
    cmp         r8,r9\n\
    ble         LAB_08043b5c\n\
    mov         r0,r8\n\
    mov         r1,r9\n\
    sub         r0,r0,r1\n\
    mov         r9,r0\n\
LAB_08043b18:\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    add         r9,r2\n\
    mov         r2,#0x1\n\
    and         r2,r6\n\
    mov         r3,#0x0\n\
    lsl         r5,r7,#0x1f\n\
    lsr         r4,r6,#0x1\n\
    add         r0,r5,#0x0\n\
    orr         r0,r4\n\
    lsr         r1,r7,#0x1\n\
    add         r6,r2,#0x0\n\
    orr         r6,r0\n\
    add         r7,r3,#0x0\n\
    orr         r7,r1\n\
    mov         r3,r9\n\
    cmp         r3,#0x0\n\
    bne         LAB_08043b18\n\
    mov         r9,r8\n\
    b           LAB_08043b5c\n\
LAB_08043b40:\n\
    cmp         r9,r8\n\
    ble         LAB_08043b4e\n\
    mov         r0,#0x0\n\
    mov         r1,#0x0\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#0x4]\n\
    b           LAB_08043b54\n\
LAB_08043b4e:\n\
    mov         r9,r8\n\
    mov         r6,#0x0\n\
    mov         r7,#0x0\n\
LAB_08043b54:\n\
    ldr         r3,[r3,#0x4]\n\
    mov         r12,r3\n\
    ldr         r4,[r4,#0x4]\n\
    str         r4,[sp,#0x8]\n\
LAB_08043b5c:\n\
    ldr         r1,[sp,#0x8]\n\
    cmp         r12,r1\n\
    beq         LAB_08043c04\n\
    mov         r2,r12\n\
    cmp         r2,#0x0\n\
    beq         LAB_08043b7e\n\
    add         r1,r7,#0x0\n\
    add         r0,r6,#0x0\n\
    bl          fun_08044f64\n\
    add         r3,r1,#0x0\n\
    add         r2,r0,#0x0\n\
    ldr         r4,[sp,#0x0]\n\
    ldr         r5,[sp,#0x4]\n\
    add         r2,r2,r4\n\
    adc         r3,r5\n\
    b           LAB_08043b8a\n\
LAB_08043b7e:\n\
    add         r3,r7,#0x0\n\
    add         r2,r6,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    ldr         r1,[sp,#0x4]\n\
    sub         r2,r2,r0\n\
    sbc         r3,r1\n\
LAB_08043b8a:\n\
    cmp         r3,#0x0\n\
    blt         LAB_08043ba0\n\
    mov         r0,#0x0\n\
    mov         r1,r10\n\
    str         r0,[r1,#0x4]\n\
    mov         r4,r9\n\
    str         r4,[r1,#0x8]\n\
    mov         r5,r10\n\
    str         r2,[r5,#0xc]\n\
    str         r3,[r5,#0x10]\n\
    b           LAB_08043bb8\n\
LAB_08043ba0:\n\
    mov         r0,#0x1\n\
    mov         r6,r10\n\
    str         r0,[r6,#0x4]\n\
    mov         r0,r9\n\
    str         r0,[r6,#0x8]\n\
    add         r1,r3,#0x0\n\
    add         r0,r2,#0x0\n\
    bl          fun_08044f64\n\
    mov         r2,r10\n\
    str         r0,[r2,#0xc]\n\
    str         r1,[r2,#0x10]\n\
LAB_08043bb8:\n\
    mov         r4,r10\n\
    ldr         r2,[r4,#0xc]\n\
    ldr         r3,[r4,#0x10]\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    asr         r1,r0,#0x1f\n\
LAB_08043bc4:\n\
    add         r2,r2,r0\n\
    adc         r3,r1\n\
    ldr         r0,DAT_08043c00\n\
    cmp         r3,r0\n\
    bhi         LAB_08043c1c\n\
    cmp         r3,r0\n\
    bne         LAB_08043bda\n\
    mov         r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,r0\n\
    bhi         LAB_08043c1c\n\
LAB_08043bda:\n\
    mov         r5,r10\n\
    ldr         r0,[r5,#0xc]\n\
    ldr         r1,[r5,#0x10]\n\
    lsr         r3,r0,#0x1f\n\
    lsl         r2,r1,#0x1\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r0,#0x1\n\
    mov         r6,r10\n\
    str         r0,[r6,#0xc]\n\
    str         r1,[r6,#0x10]\n\
    ldr         r2,[r6,#0x8]\n\
    sub         r2,#0x1\n\
    str         r2,[r6,#0x8]\n\
    mov         r2,#0x1\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
    asr         r3,r2,#0x1f\n\
    b           LAB_08043bc4\n\
\n\
.space 2\n\
\n\
DAT_08043c00:\n\
    .4byte 0x0FFFFFFF\n\
LAB_08043c04:\n\
    mov         r0,r12\n\
    mov         r1,r10\n\
    str         r0,[r1,#0x4]\n\
    mov         r2,r9\n\
    str         r2,[r1,#0x8]\n\
    ldr         r3,[sp,#0x0]\n\
    ldr         r4,[sp,#0x4]\n\
    add         r6,r6,r3\n\
    adc         r7,r4\n\
    mov         r4,r10\n\
    str         r6,[r4,#0xc]\n\
    str         r7,[r4,#0x10]\n\
LAB_08043c1c:\n\
    mov         r0,#0x3\n\
    mov         r5,r10\n\
    str         r0,[r5,#0x0]\n\
    ldr         r1,[r5,#0x10]\n\
    ldr         r0,DAT_08043c60\n\
    cmp         r1,r0\n\
    bls         LAB_08043c52\n\
    ldr         r4,[r5,#0xc]\n\
    ldr         r5,[r5,#0x10]\n\
    mov         r2,#0x1\n\
    add         r0,r4,#0x0\n\
    and         r0,r2\n\
    mov         r1,#0x0\n\
    lsl         r6,r5,#0x1f\n\
    mov         r8,r6\n\
    lsr         r6,r4,#0x1\n\
    mov         r2,r8\n\
    orr         r2,r6\n\
    lsr         r3,r5,#0x1\n\
    orr         r0,r2\n\
    orr         r1,r3\n\
    mov         r2,r10\n\
    str         r0,[r2,#0xc]\n\
    str         r1,[r2,#0x10]\n\
    ldr         r0,[r2,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r2,#0x8]\n\
LAB_08043c52:\n\
    mov         r0,r10\n\
LAB_08043c54:\n\
    add         sp,#0xc\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08043c60:\n\
    .4byte 0x1FFFFFFF\n\
    ");
}
__attribute__((naked)) void fun_08043c64()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x4c\n\
    str         r0,[sp,#0x3c]\n\
    str         r1,[sp,#0x40]\n\
    str         r2,[sp,#0x44]\n\
    str         r3,[sp,#0x48]\n\
    add         r0,sp,#0x3c\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x44\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    add         r2,sp,#0x28\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080439f8\n\
    bl          fun_080437d8\n\
    add         sp,#0x4c\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08043c94()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x4c\n\
    str         r0,[sp,#0x3c]\n\
    str         r1,[sp,#0x40]\n\
    str         r2,[sp,#0x44]\n\
    str         r3,[sp,#0x48]\n\
    add         r0,sp,#0x3c\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x44\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    ldr         r0,[r4,#0x4]\n\
    mov         r1,#0x1\n\
    eor         r0,r1\n\
    str         r0,[r4,#0x4]\n\
    add         r2,sp,#0x28\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080439f8\n\
    bl          fun_080437d8\n\
    add         sp,#0x4c\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08043ccc()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x74\n\
    str         r0,[sp,#0x3c]\n\
    str         r1,[sp,#0x40]\n\
    str         r2,[sp,#0x44]\n\
    str         r3,[sp,#0x48]\n\
    add         r0,sp,#0x3c\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x44\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r8,sp\n\
    add         r0,sp,#0x28\n\
    mov         r10,r0\n\
    mov         r0,#0x0\n\
    ldr         r1,[sp,#0x0]\n\
    cmp         r1,#0x1\n\
    bhi         LAB_08043d02\n\
    mov         r0,#0x1\n\
LAB_08043d02:\n\
    cmp         r0,#0x0\n\
    bne         LAB_08043d66\n\
    mov         r2,#0x0\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08043d10\n\
    mov         r2,#0x1\n\
LAB_08043d10:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08043d18\n\
    ldr         r0,[sp,#0x4]\n\
    b           LAB_08043d88\n\
LAB_08043d18:\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x4\n\
    bne         LAB_08043d20\n\
    mov         r2,#0x1\n\
LAB_08043d20:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08043d32\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08043d2c\n\
    mov         r1,#0x1\n\
LAB_08043d2c:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08043d4a\n\
    b           LAB_08043d66\n\
LAB_08043d32:\n\
    mov         r2,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_08043d3a\n\
    mov         r2,#0x1\n\
LAB_08043d3a:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08043d5a\n\
    mov         r0,#0x0\n\
    cmp         r1,#0x2\n\
    bne         LAB_08043d46\n\
    mov         r0,#0x1\n\
LAB_08043d46:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043d54\n\
LAB_08043d4a:\n\
    ldr         r0,DAT_08043d50\n\
    b           LAB_08043f52\n\
\n\
.space 2\n\
\n\
DAT_08043d50:\n\
    .4byte 0x020005B8\n\
LAB_08043d54:\n\
    mov         r1,r8\n\
    ldr         r0,[r1,#0x4]\n\
    b           LAB_08043d88\n\
LAB_08043d5a:\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x2\n\
    bne         LAB_08043d62\n\
    mov         r2,#0x1\n\
LAB_08043d62:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08043d78\n\
LAB_08043d66:\n\
    ldr         r0,[sp,#0x4]\n\
    ldr         r1,[sp,#0x18]\n\
    eor         r0,r1\n\
.syntax unified\n\
    rsbs        r1,r0,#0\n\
.syntax divided\n\
    orr         r1,r0\n\
    lsr         r1,r1,#0x1f\n\
    str         r1,[sp,#0x4]\n\
    mov         r0,sp\n\
    b           LAB_08043f52\n\
LAB_08043d78:\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08043d80\n\
    mov         r1,#0x1\n\
LAB_08043d80:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08043d98\n\
    mov         r2,r8\n\
    ldr         r0,[r2,#0x4]\n\
LAB_08043d88:\n\
    ldr         r1,[sp,#0x18]\n\
    eor         r0,r1\n\
.syntax unified\n\
    rsbs        r1,r0,#0\n\
.syntax divided\n\
    orr         r1,r0\n\
    lsr         r1,r1,#0x1f\n\
    str         r1,[sp,#0x18]\n\
    add         r0,r4,#0x0\n\
    b           LAB_08043f52\n\
LAB_08043d98:\n\
    mov         r4,r8\n\
    ldr         r0,[r4,#0xc]\n\
    ldr         r1,[r4,#0x10]\n\
    add         r6,r0,#0x0\n\
    mov         r7,#0x0\n\
    str         r1,[sp,#0x4c]\n\
    mov         r5,#0x0\n\
    str         r5,[sp,#0x50]\n\
    ldr         r0,[sp,#0x20]\n\
    ldr         r1,[sp,#0x24]\n\
    add         r4,r0,#0x0\n\
    str         r1,[sp,#0x54]\n\
    mov         r0,#0x0\n\
    str         r0,[sp,#0x58]\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    add         r3,r7,#0x0\n\
    add         r2,r6,#0x0\n\
    bl          fun_08044ef4\n\
    str         r0,[sp,#0x5c]\n\
    str         r1,[sp,#0x60]\n\
    ldr         r0,[sp,#0x54]\n\
    ldr         r1,[sp,#0x58]\n\
    add         r3,r7,#0x0\n\
    add         r2,r6,#0x0\n\
    bl          fun_08044ef4\n\
    add         r7,r1,#0x0\n\
    add         r6,r0,#0x0\n\
    add         r1,r5,#0x0\n\
    add         r0,r4,#0x0\n\
    ldr         r2,[sp,#0x4c]\n\
    ldr         r3,[sp,#0x50]\n\
    bl          fun_08044ef4\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    ldr         r0,[sp,#0x54]\n\
    ldr         r1,[sp,#0x58]\n\
    ldr         r2,[sp,#0x4c]\n\
    ldr         r3,[sp,#0x50]\n\
    bl          fun_08044ef4\n\
    str         r0,[sp,#0x64]\n\
    str         r1,[sp,#0x68]\n\
    mov         r1,#0x0\n\
    mov         r2,#0x0\n\
    str         r1,[sp,#0x6c]\n\
    str         r2,[sp,#0x70]\n\
    add         r3,r7,#0x0\n\
    add         r2,r6,#0x0\n\
    add         r2,r2,r4\n\
    adc         r3,r5\n\
    cmp         r7,r3\n\
    bhi         LAB_08043e10\n\
    cmp         r7,r3\n\
    bne         LAB_08043e18\n\
    cmp         r6,r2\n\
    bls         LAB_08043e18\n\
LAB_08043e10:\n\
    ldr         r5,DAT_08043f68\n\
    ldr         r4,DAT_08043f64\n\
    str         r4,[sp,#0x6c]\n\
    str         r5,[sp,#0x70]\n\
LAB_08043e18:\n\
    add         r1,r2,#0x0\n\
    mov         r6,#0x0\n\
    add         r7,r1,#0x0\n\
    ldr         r0,[sp,#0x5c]\n\
    ldr         r1,[sp,#0x60]\n\
    add         r6,r6,r0\n\
    adc         r7,r1\n\
    cmp         r1,r7\n\
    bhi         LAB_08043e34\n\
    ldr         r1,[sp,#0x60]\n\
    cmp         r1,r7\n\
    bne         LAB_08043e44\n\
    cmp         r0,r6\n\
    bls         LAB_08043e44\n\
LAB_08043e34:\n\
    mov         r0,#0x1\n\
    mov         r1,#0x0\n\
    ldr         r4,[sp,#0x6c]\n\
    ldr         r5,[sp,#0x70]\n\
    add         r4,r4,r0\n\
    adc         r5,r1\n\
    str         r4,[sp,#0x6c]\n\
    str         r5,[sp,#0x70]\n\
LAB_08043e44:\n\
    add         r0,r3,#0x0\n\
    add         r2,r0,#0x0\n\
    mov         r3,#0x0\n\
    add         r5,r3,#0x0\n\
    add         r4,r2,#0x0\n\
    ldr         r0,[sp,#0x64]\n\
    ldr         r1,[sp,#0x68]\n\
    add         r4,r4,r0\n\
    adc         r5,r1\n\
    ldr         r1,[sp,#0x6c]\n\
    ldr         r2,[sp,#0x70]\n\
    add         r4,r4,r1\n\
    adc         r5,r2\n\
    mov         r0,r8\n\
    ldr         r2,[r0,#0x8]\n\
    ldr         r0,[sp,#0x1c]\n\
    add         r2,r2,r0\n\
    str         r2,[sp,#0x30]\n\
    mov         r0,r8\n\
    ldr         r1,[r0,#0x4]\n\
    ldr         r0,[sp,#0x18]\n\
    eor         r1,r0\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    lsr         r0,r0,#0x1f\n\
    str         r0,[sp,#0x2c]\n\
    add         r2,#0x4\n\
    str         r2,[sp,#0x30]\n\
    ldr         r0,DAT_08043f6c\n\
    cmp         r5,r0\n\
    bls         LAB_08043ec6\n\
    mov         r1,#0x1\n\
    mov         r9,r1\n\
    mov         r8,r0\n\
    mov         r12,r2\n\
LAB_08043e8a:\n\
    mov         r2,#0x1\n\
    add         r12,r2\n\
    mov         r0,r9\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043eb0\n\
    lsl         r3,r7,#0x1f\n\
    lsr         r2,r6,#0x1\n\
    add         r0,r3,#0x0\n\
    orr         r0,r2\n\
    lsr         r1,r7,#0x1\n\
    add         r7,r1,#0x0\n\
    add         r6,r0,#0x0\n\
    add         r0,r6,#0x0\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x18\n\
    orr         r1,r7\n\
    add         r7,r1,#0x0\n\
    add         r6,r0,#0x0\n\
LAB_08043eb0:\n\
    lsl         r3,r5,#0x1f\n\
    lsr         r2,r4,#0x1\n\
    add         r0,r3,#0x0\n\
    orr         r0,r2\n\
    lsr         r1,r5,#0x1\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    cmp         r5,r8\n\
    bhi         LAB_08043e8a\n\
    mov         r0,r12\n\
    str         r0,[sp,#0x30]\n\
LAB_08043ec6:\n\
    ldr         r0,DAT_08043f70\n\
    cmp         r5,r0\n\
    bhi         LAB_08043f18\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x18\n\
    mov         r9,r1\n\
    mov         r8,r0\n\
    ldr         r2,[sp,#0x30]\n\
    mov         r12,r2\n\
LAB_08043ed8:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r12,r0\n\
    lsr         r3,r4,#0x1f\n\
    lsl         r2,r5,#0x1\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r4,#0x1\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x0\n\
    mov         r1,r9\n\
    and         r1,r7\n\
    orr         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043f02\n\
    mov         r0,#0x1\n\
    orr         r0,r4\n\
    add         r1,r5,#0x0\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
LAB_08043f02:\n\
    lsr         r3,r6,#0x1f\n\
    lsl         r2,r7,#0x1\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r6,#0x1\n\
    add         r7,r1,#0x0\n\
    add         r6,r0,#0x0\n\
    cmp         r5,r8\n\
    bls         LAB_08043ed8\n\
    mov         r1,r12\n\
    str         r1,[sp,#0x30]\n\
LAB_08043f18:\n\
    mov         r0,#0xff\n\
    add         r1,r4,#0x0\n\
    and         r1,r0\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x80\n\
    bne         LAB_08043f46\n\
    cmp         r2,#0x0\n\
    bne         LAB_08043f46\n\
    add         r0,#0x1\n\
    add         r1,r4,#0x0\n\
    and         r1,r0\n\
    add         r0,r2,#0x0\n\
    orr         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08043f3e\n\
    add         r0,r7,#0x0\n\
    orr         r0,r6\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043f46\n\
LAB_08043f3e:\n\
    mov         r0,#0x80\n\
    mov         r1,#0x0\n\
    add         r4,r4,r0\n\
    adc         r5,r1\n\
LAB_08043f46:\n\
    str         r4,[sp,#0x34]\n\
    str         r5,[sp,#0x38]\n\
    mov         r0,#0x3\n\
    mov         r2,r10\n\
    str         r0,[r2,#0x0]\n\
    add         r0,sp,#0x28\n\
LAB_08043f52:\n\
    bl          fun_080437d8\n\
    add         sp,#0x74\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_08043f64:\n\
    .4byte 0x00000000\n\
DAT_08043f68:\n\
    .4byte 0x00000001\n\
DAT_08043f6c:\n\
    .4byte 0x1FFFFFFF\n\
DAT_08043f70:\n\
    .4byte 0x0FFFFFFF\n\
    ");
}
__attribute__((naked)) void fun_08043f74()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x48\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r12,sp\n\
    mov         r0,#0x0\n\
    ldr         r3,[sp,#0x0]\n\
    cmp         r3,#0x1\n\
    bhi         LAB_08043f9e\n\
    mov         r0,#0x1\n\
LAB_08043f9e:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043fa6\n\
    mov         r1,sp\n\
    b           LAB_080440e8\n\
LAB_08043fa6:\n\
    mov         r0,#0x0\n\
    ldr         r2,[sp,#0x14]\n\
    add         r5,r2,#0x0\n\
    cmp         r2,#0x1\n\
    bhi         LAB_08043fb2\n\
    mov         r0,#0x1\n\
LAB_08043fb2:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08043fba\n\
    add         r1,r4,#0x0\n\
    b           LAB_080440e8\n\
LAB_08043fba:\n\
    ldr         r0,[sp,#0x4]\n\
    ldr         r1,[sp,#0x18]\n\
    eor         r0,r1\n\
    str         r0,[sp,#0x4]\n\
    mov         r0,#0x0\n\
    cmp         r3,#0x4\n\
    bne         LAB_08043fca\n\
    mov         r0,#0x1\n\
LAB_08043fca:\n\
    cmp         r0,#0x0\n\
    bne         LAB_08043fda\n\
    mov         r4,#0x0\n\
    cmp         r3,#0x2\n\
    bne         LAB_08043fd6\n\
    mov         r4,#0x1\n\
LAB_08043fd6:\n\
    cmp         r4,#0x0\n\
    beq         LAB_08043fec\n\
LAB_08043fda:\n\
    mov         r1,r12\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,r5\n\
    beq         LAB_08043fe4\n\
    b           LAB_080440e8\n\
LAB_08043fe4:\n\
    ldr         r1,DAT_08043fe8\n\
    b           LAB_080440e8\n\
DAT_08043fe8:\n\
    .4byte 0x020005B8\n\
LAB_08043fec:\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x4\n\
    bne         LAB_08043ff4\n\
    mov         r0,#0x1\n\
LAB_08043ff4:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044006\n\
    mov         r0,#0x0\n\
    mov         r1,#0x0\n\
    str         r0,[sp,#0xc]\n\
    str         r1,[sp,#0x10]\n\
    str         r4,[sp,#0x8]\n\
    mov         r1,sp\n\
    b           LAB_080440e8\n\
LAB_08044006:\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x2\n\
    bne         LAB_0804400e\n\
    mov         r0,#0x1\n\
LAB_0804400e:\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804401a\n\
    mov         r0,#0x4\n\
    mov         r2,r12\n\
    str         r0,[r2,#0x0]\n\
    b           LAB_080440e6\n\
LAB_0804401a:\n\
    mov         r3,r12\n\
    ldr         r1,[r3,#0x8]\n\
    ldr         r0,[sp,#0x1c]\n\
    sub         r6,r1,r0\n\
    str         r6,[r3,#0x8]\n\
    ldr         r4,[r3,#0xc]\n\
    ldr         r5,[r3,#0x10]\n\
    ldr         r0,[sp,#0x20]\n\
    ldr         r1,[sp,#0x24]\n\
    str         r0,[sp,#0x38]\n\
    str         r1,[sp,#0x3c]\n\
    cmp         r1,r5\n\
    bhi         LAB_0804403e\n\
    ldr         r1,[sp,#0x3c]\n\
    cmp         r1,r5\n\
    bne         LAB_08044052\n\
    cmp         r0,r4\n\
    bls         LAB_08044052\n\
LAB_0804403e:\n\
    lsr         r3,r4,#0x1f\n\
    lsl         r2,r5,#0x1\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r4,#0x1\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    sub         r0,r6,#0x1\n\
    mov         r2,r12\n\
    str         r0,[r2,#0x8]\n\
LAB_08044052:\n\
    ldr         r7,DAT_080440f8\n\
    ldr         r6,DAT_080440f4\n\
    mov         r0,#0x0\n\
    mov         r1,#0x0\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
LAB_0804405e:\n\
    ldr         r1,[sp,#0x3c]\n\
    cmp         r1,r5\n\
    bhi         LAB_08044082\n\
    cmp         r1,r5\n\
    bne         LAB_0804406e\n\
    ldr         r2,[sp,#0x38]\n\
    cmp         r2,r4\n\
    bhi         LAB_08044082\n\
LAB_0804406e:\n\
    ldr         r0,[sp,#0x40]\n\
    orr         r0,r6\n\
    ldr         r1,[sp,#0x44]\n\
    orr         r1,r7\n\
    str         r0,[sp,#0x40]\n\
    str         r1,[sp,#0x44]\n\
    ldr         r0,[sp,#0x38]\n\
    ldr         r1,[sp,#0x3c]\n\
    sub         r4,r4,r0\n\
    sbc         r5,r1\n\
LAB_08044082:\n\
    lsl         r3,r7,#0x1f\n\
    lsr         r2,r6,#0x1\n\
    add         r0,r3,#0x0\n\
    orr         r0,r2\n\
    lsr         r1,r7,#0x1\n\
    add         r7,r1,#0x0\n\
    add         r6,r0,#0x0\n\
    lsr         r3,r4,#0x1f\n\
    lsl         r2,r5,#0x1\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r4,#0x1\n\
    add         r5,r1,#0x0\n\
    add         r4,r0,#0x0\n\
    add         r0,r7,#0x0\n\
    orr         r0,r6\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804405e\n\
    mov         r0,#0xff\n\
    ldr         r1,[sp,#0x40]\n\
    and         r1,r0\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x80\n\
    bne         LAB_080440dc\n\
    cmp         r2,#0x0\n\
    bne         LAB_080440dc\n\
    add         r0,#0x1\n\
    ldr         r1,[sp,#0x40]\n\
    and         r1,r0\n\
    add         r0,r2,#0x0\n\
    orr         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080440cc\n\
    add         r0,r5,#0x0\n\
    orr         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_080440dc\n\
LAB_080440cc:\n\
    mov         r0,#0x80\n\
    mov         r1,#0x0\n\
    ldr         r2,[sp,#0x40]\n\
    ldr         r3,[sp,#0x44]\n\
    add         r2,r2,r0\n\
    adc         r3,r1\n\
    str         r2,[sp,#0x40]\n\
    str         r3,[sp,#0x44]\n\
LAB_080440dc:\n\
    ldr         r0,[sp,#0x40]\n\
    ldr         r1,[sp,#0x44]\n\
    mov         r2,r12\n\
    str         r0,[r2,#0xc]\n\
    str         r1,[r2,#0x10]\n\
LAB_080440e6:\n\
    mov         r1,r12\n\
LAB_080440e8:\n\
    add         r0,r1,#0x0\n\
    bl          fun_080437d8\n\
    add         sp,#0x48\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
DAT_080440f4:\n\
    .4byte 0x00000000\n\
DAT_080440f8:\n\
    .4byte 0x10000000\n\
    ");
}
__attribute__((naked)) void fun_080440fc()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r5,r0,#0x0\n\
    add         r6,r1,#0x0\n\
    mov         r0,#0x0\n\
    ldr         r1,[r5,#0x0]\n\
    cmp         r1,#0x1\n\
    bhi         LAB_0804410c\n\
    mov         r0,#0x1\n\
LAB_0804410c:\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804411e\n\
    mov         r0,#0x0\n\
    ldr         r2,[r6,#0x0]\n\
    cmp         r2,#0x1\n\
    bhi         LAB_0804411a\n\
    mov         r0,#0x1\n\
LAB_0804411a:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044122\n\
LAB_0804411e:\n\
    mov         r0,#0x1\n\
    b           LAB_080441f8\n\
LAB_08044122:\n\
    mov         r0,#0x0\n\
    cmp         r1,#0x4\n\
    bne         LAB_0804412a\n\
    mov         r0,#0x1\n\
LAB_0804412a:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044142\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x4\n\
    bne         LAB_08044136\n\
    mov         r0,#0x1\n\
LAB_08044136:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044142\n\
    ldr         r0,[r6,#0x4]\n\
    ldr         r1,[r5,#0x4]\n\
    sub         r0,r0,r1\n\
    b           LAB_080441f8\n\
LAB_08044142:\n\
    mov         r1,#0x0\n\
    ldr         r0,[r5,#0x0]\n\
    cmp         r0,#0x4\n\
    bne         LAB_0804414c\n\
    mov         r1,#0x1\n\
LAB_0804414c:\n\
    cmp         r1,#0x0\n\
    bne         LAB_0804419a\n\
    mov         r1,#0x0\n\
    cmp         r2,#0x4\n\
    bne         LAB_08044158\n\
    mov         r1,#0x1\n\
LAB_08044158:\n\
    cmp         r1,#0x0\n\
    beq         LAB_0804416a\n\
LAB_0804415c:\n\
    ldr         r0,[r6,#0x4]\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,#0x0\n\
    beq         LAB_080441a4\n\
    mov         r1,#0x1\n\
    b           LAB_080441a4\n\
LAB_0804416a:\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08044172\n\
    mov         r1,#0x1\n\
LAB_08044172:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044182\n\
    mov         r1,#0x0\n\
    cmp         r2,#0x2\n\
    bne         LAB_0804417e\n\
    mov         r1,#0x1\n\
LAB_0804417e:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080441f6\n\
LAB_08044182:\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_0804418a\n\
    mov         r1,#0x1\n\
LAB_0804418a:\n\
    cmp         r1,#0x0\n\
    bne         LAB_0804415c\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x2\n\
    bne         LAB_08044196\n\
    mov         r0,#0x1\n\
LAB_08044196:\n\
    cmp         r0,#0x0\n\
    beq         LAB_080441a8\n\
LAB_0804419a:\n\
    ldr         r0,[r5,#0x4]\n\
    mov         r1,#0x1\n\
    cmp         r0,#0x0\n\
    beq         LAB_080441a4\n\
    sub         r1,#0x2\n\
LAB_080441a4:\n\
    add         r0,r1,#0x0\n\
    b           LAB_080441f8\n\
LAB_080441a8:\n\
    ldr         r0,[r6,#0x4]\n\
    ldr         r4,[r5,#0x4]\n\
    cmp         r4,r0\n\
    beq         LAB_080441ba\n\
LAB_080441b0:\n\
    mov         r0,#0x1\n\
    cmp         r4,#0x0\n\
    beq         LAB_080441f8\n\
    sub         r0,#0x2\n\
    b           LAB_080441f8\n\
LAB_080441ba:\n\
    ldr         r1,[r5,#0x8]\n\
    ldr         r0,[r6,#0x8]\n\
    cmp         r1,r0\n\
    bgt         LAB_080441b0\n\
    cmp         r1,r0\n\
    bge         LAB_080441d2\n\
LAB_080441c6:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r4,#0x0\n\
    beq         LAB_080441f8\n\
    mov         r0,#0x1\n\
    b           LAB_080441f8\n\
LAB_080441d2:\n\
    ldr         r3,[r5,#0x10]\n\
    ldr         r2,[r6,#0x10]\n\
    cmp         r3,r2\n\
    bhi         LAB_080441b0\n\
    cmp         r3,r2\n\
    bne         LAB_080441e6\n\
    ldr         r1,[r5,#0xc]\n\
    ldr         r0,[r6,#0xc]\n\
    cmp         r1,r0\n\
    bhi         LAB_080441b0\n\
LAB_080441e6:\n\
    cmp         r2,r3\n\
    bhi         LAB_080441c6\n\
    cmp         r2,r3\n\
    bne         LAB_080441f6\n\
    ldr         r1,[r6,#0xc]\n\
    ldr         r0,[r5,#0xc]\n\
    cmp         r1,r0\n\
    bhi         LAB_080441c6\n\
LAB_080441f6:\n\
    mov         r0,#0x0\n\
LAB_080441f8:\n\
    pop         {r4,r5,r6,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080441fc()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080440fc\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044228()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044250\n\
    mov         r1,#0x1\n\
LAB_08044250:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044262\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_0804425e\n\
    mov         r1,#0x1\n\
LAB_0804425e:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044266\n\
LAB_08044262:\n\
    mov         r0,#0x1\n\
    b           LAB_0804426e\n\
LAB_08044266:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080440fc\n\
LAB_0804426e:\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044274()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_0804429c\n\
    mov         r1,#0x1\n\
LAB_0804429c:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080442ae\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080442aa\n\
    mov         r1,#0x1\n\
LAB_080442aa:\n\
    cmp         r1,#0x0\n\
    beq         LAB_080442b2\n\
LAB_080442ae:\n\
    mov         r0,#0x1\n\
    b           LAB_080442ba\n\
LAB_080442b2:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080440fc\n\
LAB_080442ba:\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080442c0()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080442e8\n\
    mov         r1,#0x1\n\
LAB_080442e8:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080442fa\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080442f6\n\
    mov         r1,#0x1\n\
LAB_080442f6:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044300\n\
LAB_080442fa:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08044308\n\
LAB_08044300:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080440fc\n\
LAB_08044308:\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_0804430c()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044334\n\
    mov         r1,#0x1\n\
LAB_08044334:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044346\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044342\n\
    mov         r1,#0x1\n\
LAB_08044342:\n\
    cmp         r1,#0x0\n\
    beq         LAB_0804434c\n\
LAB_08044346:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08044354\n\
LAB_0804434c:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080440fc\n\
LAB_08044354:\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08044358()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044380\n\
    mov         r1,#0x1\n\
LAB_08044380:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044392\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_0804438e\n\
    mov         r1,#0x1\n\
LAB_0804438e:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044396\n\
LAB_08044392:\n\
    mov         r0,#0x1\n\
    b           LAB_0804439e\n\
LAB_08044396:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080440fc\n\
LAB_0804439e:\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080443a4()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x28]\n\
    str         r1,[sp,#0x2c]\n\
    str         r2,[sp,#0x30]\n\
    str         r3,[sp,#0x34]\n\
    add         r0,sp,#0x28\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    add         r0,sp,#0x30\n\
    add         r4,sp,#0x14\n\
    add         r1,r4,#0x0\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080443cc\n\
    mov         r1,#0x1\n\
LAB_080443cc:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080443de\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x14]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080443da\n\
    mov         r1,#0x1\n\
LAB_080443da:\n\
    cmp         r1,#0x0\n\
    beq         LAB_080443e2\n\
LAB_080443de:\n\
    mov         r0,#0x1\n\
    b           LAB_080443ea\n\
LAB_080443e2:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080440fc\n\
LAB_080443ea:\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080443f0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x14\n\
    add         r2,r0,#0x0\n\
    mov         r0,#0x3\n\
    str         r0,[sp,#0x0]\n\
    lsr         r1,r2,#0x1f\n\
    str         r1,[sp,#0x4]\n\
    cmp         r2,#0x0\n\
    bne         LAB_08044408\n\
    mov         r0,#0x2\n\
    str         r0,[sp,#0x0]\n\
    b           LAB_0804445e\n\
LAB_08044408:\n\
    mov         r0,#0x3c\n\
    str         r0,[sp,#0x8]\n\
    cmp         r1,#0x0\n\
    beq         LAB_0804442e\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x18\n\
    cmp         r2,r0\n\
    bne         LAB_08044428\n\
    ldr         r1,DAT_08044424\n\
    ldr         r0,DAT_08044420\n\
    b           LAB_08044464\n\
\n\
.space 2\n\
\n\
DAT_08044420:\n\
    .4byte 0xC1E00000\n\
DAT_08044424:\n\
    .4byte 0x00000000\n\
LAB_08044428:\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
    asr         r1,r0,#0x1f\n\
    b           LAB_08044432\n\
LAB_0804442e:\n\
    add         r0,r2,#0x0\n\
    asr         r1,r2,#0x1f\n\
LAB_08044432:\n\
    str         r0,[sp,#0xc]\n\
    str         r1,[sp,#0x10]\n\
    ldr         r0,[sp,#0x10]\n\
    ldr         r1,DAT_08044468\n\
    cmp         r0,r1\n\
    bhi         LAB_0804445e\n\
    add         r5,r1,#0x0\n\
    ldr         r4,[sp,#0x8]\n\
LAB_08044442:\n\
    ldr         r0,[sp,#0xc]\n\
    ldr         r1,[sp,#0x10]\n\
    lsr         r3,r0,#0x1f\n\
    lsl         r2,r1,#0x1\n\
    add         r1,r3,#0x0\n\
    orr         r1,r2\n\
    lsl         r0,r0,#0x1\n\
    str         r0,[sp,#0xc]\n\
    str         r1,[sp,#0x10]\n\
    sub         r4,#0x1\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,r5\n\
    bls         LAB_08044442\n\
    str         r4,[sp,#0x8]\n\
LAB_0804445e:\n\
    mov         r0,sp\n\
    bl          fun_080437d8\n\
LAB_08044464:\n\
    add         sp,#0x14\n\
    pop         {r4,r5,pc}\n\
DAT_08044468:\n\
    .4byte 0x0FFFFFFF\n\
    ");
}
__attribute__((naked)) void fun_0804446c()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x1c\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    add         r0,sp,#0x14\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x2\n\
    bne         LAB_08044486\n\
    mov         r1,#0x1\n\
LAB_08044486:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080444ba\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044492\n\
    mov         r1,#0x1\n\
LAB_08044492:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080444ba\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_0804449e\n\
    mov         r1,#0x1\n\
LAB_0804449e:\n\
    cmp         r1,#0x0\n\
    beq         LAB_080444b4\n\
LAB_080444a2:\n\
    ldr         r0,[sp,#0x4]\n\
    ldr         r1,DAT_080444b0\n\
    cmp         r0,#0x0\n\
    beq         LAB_080444d8\n\
    add         r1,#0x1\n\
    b           LAB_080444d8\n\
\n\
.space 2\n\
\n\
DAT_080444b0:\n\
    .4byte 0x7FFFFFFF\n\
LAB_080444b4:\n\
    ldr         r0,[sp,#0x8]\n\
    cmp         r0,#0x0\n\
    bge         LAB_080444be\n\
LAB_080444ba:\n\
    mov         r0,#0x0\n\
    b           LAB_080444da\n\
LAB_080444be:\n\
    cmp         r0,#0x1e\n\
    bgt         LAB_080444a2\n\
    mov         r2,#0x3c\n\
    sub         r2,r2,r0\n\
    ldr         r0,[sp,#0xc]\n\
    ldr         r1,[sp,#0x10]\n\
    bl          fun_08044ec0\n\
    add         r1,r0,#0x0\n\
    ldr         r0,[sp,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_080444d8\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
LAB_080444d8:\n\
    add         r0,r1,#0x0\n\
LAB_080444da:\n\
    add         sp,#0x1c\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080444e0()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x1c\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    add         r0,sp,#0x14\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x4]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080444fa\n\
    mov         r1,#0x1\n\
LAB_080444fa:\n\
    str         r1,[sp,#0x4]\n\
    mov         r0,sp\n\
    bl          fun_080437d8\n\
    add         sp,#0x1c\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044508()
{
    asm("\n\
    sub         sp,#0x4\n\
    push        {r4,lr}\n\
    sub         sp,#0x14\n\
    str         r3,[sp,#0x1c]\n\
    ldr         r3,[sp,#0x1c]\n\
    ldr         r4,[sp,#0x20]\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#4]\n\
    str         r2,[sp,#8]\n\
    str         r3,[sp,#0xc]\n\
    str         r4,[sp,#0x10]\n\
    mov         r0,sp\n\
    bl          fun_080437d8\n\
    add         sp,#0x14\n\
    pop         {r4}\n\
    pop         {r3}\n\
    add         sp,#0x4\n\
    bx          r3\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044530()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x1c\n\
    str         r0,[sp,#0x14]\n\
    str         r1,[sp,#0x18]\n\
    add         r0,sp,#0x14\n\
    mov         r1,sp\n\
    bl          fun_08043920\n\
    ldr         r2,[sp,#0xc]\n\
    ldr         r3,[sp,#0x10]\n\
    lsl         r5,r3,#0x2\n\
    lsr         r4,r2,#0x1e\n\
    add         r0,r5,#0x0\n\
    orr         r0,r4\n\
    add         r5,r0,#0x0\n\
    ldr         r4,DAT_08044570\n\
    add         r0,r2,#0x0\n\
    and         r0,r4\n\
    mov         r1,#0x0\n\
    orr         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044560\n\
    mov         r0,#0x1\n\
    orr         r5,r0\n\
LAB_08044560:\n\
    ldr         r0,[sp,#0x0]\n\
    ldr         r1,[sp,#4]\n\
    ldr         r2,[sp,#8]\n\
    add         r3,r5,#0x0\n\
    bl          fun_08044e7c\n\
    add         sp,#0x1c\n\
    pop         {r4,r5,pc}\n\
DAT_08044570:\n\
    .4byte 0x3FFFFFFF\n\
    ");
}
__attribute__((naked)) void fun_08044574()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    ldr         r2,[r0,#0xc]\n\
    ldr         r6,[r0,#0x4]\n\
    mov         r5,#0x0\n\
    mov         r1,#0x0\n\
    ldr         r3,[r0,#0x0]\n\
    cmp         r3,#0x1\n\
    bhi         LAB_08044586\n\
    mov         r1,#0x1\n\
LAB_08044586:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044594\n\
    mov         r5,#0xff\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0xd\n\
    orr         r2,r0\n\
    b           LAB_080445fa\n\
LAB_08044594:\n\
    mov         r1,#0x0\n\
    cmp         r3,#0x4\n\
    bne         LAB_0804459c\n\
    mov         r1,#0x1\n\
LAB_0804459c:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080445d0\n\
    mov         r1,#0x0\n\
    cmp         r3,#0x2\n\
    bne         LAB_080445a8\n\
    mov         r1,#0x1\n\
LAB_080445a8:\n\
    cmp         r1,#0x0\n\
    beq         LAB_080445b0\n\
    mov         r2,#0x0\n\
    b           LAB_080445fa\n\
LAB_080445b0:\n\
    cmp         r2,#0x0\n\
    beq         LAB_080445fa\n\
    ldr         r0,[r0,#0x8]\n\
    mov         r3,#0x7e\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
    cmp         r0,r3\n\
    bge         LAB_080445cc\n\
    sub         r0,r3,r0\n\
    cmp         r0,#0x19\n\
    ble         LAB_080445c8\n\
    mov         r2,#0x0\n\
    b           LAB_080445f8\n\
LAB_080445c8:\n\
    lsr         r2,r0\n\
    b           LAB_080445f8\n\
LAB_080445cc:\n\
    cmp         r0,#0x7f\n\
    ble         LAB_080445d6\n\
LAB_080445d0:\n\
    mov         r5,#0xff\n\
    mov         r2,#0x0\n\
    b           LAB_080445fa\n\
LAB_080445d6:\n\
    add         r5,r0,#0x0\n\
    add         r5,#0x7f\n\
    mov         r0,#0x7f\n\
    and         r0,r2\n\
    cmp         r0,#0x40\n\
    bne         LAB_080445ee\n\
    mov         r0,#0x80\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_080445f0\n\
    add         r2,#0x40\n\
    b           LAB_080445f0\n\
LAB_080445ee:\n\
    add         r2,#0x3f\n\
LAB_080445f0:\n\
    cmp         r2,#0x0\n\
    bge         LAB_080445f8\n\
    lsr         r2,r2,#0x1\n\
    add         r5,#0x1\n\
LAB_080445f8:\n\
    lsr         r2,r2,#0x7\n\
LAB_080445fa:\n\
    ldr         r0,DAT_0804461c\n\
    and         r2,r0\n\
    ldr         r0,DAT_08044620\n\
    and         r4,r0\n\
    orr         r4,r2\n\
    mov         r0,#0xff\n\
    and         r5,r0\n\
    lsl         r1,r5,#0x17\n\
    ldr         r0,DAT_08044624\n\
    and         r4,r0\n\
    orr         r4,r1\n\
    lsl         r1,r6,#0x1f\n\
    ldr         r0,DAT_08044628\n\
    and         r4,r0\n\
    orr         r4,r1\n\
    add         r0,r4,#0x0\n\
    pop         {r4,r5,r6,pc}\n\
DAT_0804461c:\n\
    .4byte 0x007FFFFF\n\
DAT_08044620:\n\
    .4byte 0xFF800000\n\
DAT_08044624:\n\
    .4byte 0x807FFFFF\n\
DAT_08044628:\n\
    .4byte 0x7FFFFFFF\n\
    ");
}
__attribute__((naked)) void fun_0804462c()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r3,r1,#0x0\n\
    ldr         r0,[r0,#0x0]\n\
    lsl         r1,r0,#0x9\n\
    lsr         r2,r1,#0x9\n\
    lsl         r1,r0,#0x1\n\
    lsr         r1,r1,#0x18\n\
    lsr         r0,r0,#0x1f\n\
    str         r0,[r3,#0x4]\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044670\n\
    cmp         r2,#0x0\n\
    bne         LAB_0804464c\n\
    mov         r0,#0x2\n\
    str         r0,[r3,#0x0]\n\
    b           LAB_080446a4\n\
LAB_0804464c:\n\
    add         r4,r1,#0x0\n\
    sub         r4,#0x7e\n\
    str         r4,[r3,#0x8]\n\
    lsl         r2,r2,#0x7\n\
    mov         r0,#0x3\n\
    str         r0,[r3,#0x0]\n\
    ldr         r1,DAT_0804466c\n\
    cmp         r2,r1\n\
    bhi         LAB_0804468c\n\
    add         r0,r4,#0x0\n\
LAB_08044660:\n\
    lsl         r2,r2,#0x1\n\
    sub         r0,#0x1\n\
    cmp         r2,r1\n\
    bls         LAB_08044660\n\
    str         r0,[r3,#0x8]\n\
    b           LAB_0804468c\n\
DAT_0804466c:\n\
    .4byte 0x3FFFFFFF\n\
LAB_08044670:\n\
    cmp         r1,#0xff\n\
    bne         LAB_08044690\n\
    cmp         r2,#0x0\n\
    bne         LAB_0804467e\n\
    mov         r0,#0x4\n\
    str         r0,[r3,#0x0]\n\
    b           LAB_080446a4\n\
LAB_0804467e:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0xd\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804468a\n\
    mov         r0,#0x1\n\
LAB_0804468a:\n\
    str         r0,[r3,#0x0]\n\
LAB_0804468c:\n\
    str         r2,[r3,#0xc]\n\
    b           LAB_080446a4\n\
LAB_08044690:\n\
    add         r0,r1,#0x0\n\
    sub         r0,#0x7f\n\
    str         r0,[r3,#0x8]\n\
    mov         r0,#0x3\n\
    str         r0,[r3,#0x0]\n\
    lsl         r0,r2,#0x7\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x17\n\
    orr         r0,r1\n\
    str         r0,[r3,#0xc]\n\
LAB_080446a4:\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_080446a8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    add         r6,r0,#0x0\n\
    add         r7,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    mov         r0,#0x0\n\
    ldr         r2,[r6,#0x0]\n\
    cmp         r2,#0x1\n\
    bhi         LAB_080446be\n\
    mov         r0,#0x1\n\
LAB_080446be:\n\
    cmp         r0,#0x0\n\
    beq         LAB_080446c6\n\
LAB_080446c2:\n\
    add         r0,r6,#0x0\n\
    b           LAB_0804481c\n\
LAB_080446c6:\n\
    mov         r1,#0x0\n\
    ldr         r0,[r7,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080446d0\n\
    mov         r1,#0x1\n\
LAB_080446d0:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044744\n\
    mov         r1,#0x0\n\
    cmp         r2,#0x4\n\
    bne         LAB_080446dc\n\
    mov         r1,#0x1\n\
LAB_080446dc:\n\
    cmp         r1,#0x0\n\
    beq         LAB_080446fc\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_080446e8\n\
    mov         r1,#0x1\n\
LAB_080446e8:\n\
    cmp         r1,#0x0\n\
    beq         LAB_080446c2\n\
    ldr         r1,[r6,#0x4]\n\
    ldr         r0,[r7,#0x4]\n\
    cmp         r1,r0\n\
    beq         LAB_080446c2\n\
    ldr         r0,DAT_080446f8\n\
    b           LAB_0804481c\n\
DAT_080446f8:\n\
    .4byte 0x020005D0\n\
LAB_080446fc:\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_08044704\n\
    mov         r1,#0x1\n\
LAB_08044704:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044744\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08044710\n\
    mov         r1,#0x1\n\
LAB_08044710:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044736\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x2\n\
    bne         LAB_0804471c\n\
    mov         r0,#0x1\n\
LAB_0804471c:\n\
    cmp         r0,#0x0\n\
    beq         LAB_080446c2\n\
    add         r1,r5,#0x0\n\
    add         r0,r6,#0x0\n\
    ldmia       r0!,{r2,r3,r4}\n\
    stmia       r1!,{r2,r3,r4}\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    ldr         r0,[r6,#0x4]\n\
    ldr         r1,[r7,#0x4]\n\
    and         r0,r1\n\
    str         r0,[r5,#0x4]\n\
    b           LAB_0804481a\n\
LAB_08044736:\n\
    mov         r1,#0x0\n\
    ldr         r0,[r6,#0x0]\n\
    cmp         r0,#0x2\n\
    bne         LAB_08044740\n\
    mov         r1,#0x1\n\
LAB_08044740:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044748\n\
LAB_08044744:\n\
    add         r0,r7,#0x0\n\
    b           LAB_0804481c\n\
LAB_08044748:\n\
    ldr         r1,[r6,#0x8]\n\
    ldr         r3,[r7,#0x8]\n\
    ldr         r2,[r6,#0xc]\n\
    ldr         r4,[r7,#0xc]\n\
    sub         r0,r1,r3\n\
    cmp         r0,#0x0\n\
    bge         LAB_08044758\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
LAB_08044758:\n\
    cmp         r0,#0x1f\n\
    bgt         LAB_0804479c\n\
    ldr         r6,[r6,#0x4]\n\
    ldr         r7,[r7,#0x4]\n\
    mov         r8,r7\n\
    cmp         r1,r3\n\
    ble         LAB_0804477e\n\
    mov         r7,#0x1\n\
    mov         r12,r7\n\
    sub         r3,r1,r3\n\
LAB_0804476c:\n\
    sub         r3,#0x1\n\
    add         r0,r4,#0x0\n\
    mov         r7,r12\n\
    and         r0,r7\n\
    lsr         r4,r4,#0x1\n\
    orr         r4,r0\n\
    cmp         r3,#0x0\n\
    bne         LAB_0804476c\n\
    add         r3,r1,#0x0\n\
LAB_0804477e:\n\
    cmp         r3,r1\n\
    ble         LAB_080447ae\n\
    mov         r0,#0x1\n\
    mov         r12,r0\n\
    sub         r1,r3,r1\n\
LAB_08044788:\n\
    sub         r1,#0x1\n\
    add         r0,r2,#0x0\n\
    mov         r7,r12\n\
    and         r0,r7\n\
    lsr         r2,r2,#0x1\n\
    orr         r2,r0\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044788\n\
    add         r1,r3,#0x0\n\
    b           LAB_080447ae\n\
LAB_0804479c:\n\
    cmp         r1,r3\n\
    ble         LAB_080447a4\n\
    mov         r4,#0x0\n\
    b           LAB_080447a8\n\
LAB_080447a4:\n\
    add         r1,r3,#0x0\n\
    mov         r2,#0x0\n\
LAB_080447a8:\n\
    ldr         r6,[r6,#0x4]\n\
    ldr         r7,[r7,#0x4]\n\
    mov         r8,r7\n\
LAB_080447ae:\n\
    cmp         r6,r8\n\
    beq         LAB_080447f8\n\
    cmp         r6,#0x0\n\
    beq         LAB_080447ba\n\
    sub         r3,r4,r2\n\
    b           LAB_080447bc\n\
LAB_080447ba:\n\
    sub         r3,r2,r4\n\
LAB_080447bc:\n\
    cmp         r3,#0x0\n\
    blt         LAB_080447ca\n\
    mov         r0,#0x0\n\
    str         r0,[r5,#0x4]\n\
    str         r1,[r5,#0x8]\n\
    str         r3,[r5,#0xc]\n\
    b           LAB_080447d4\n\
LAB_080447ca:\n\
    mov         r0,#0x1\n\
    str         r0,[r5,#0x4]\n\
    str         r1,[r5,#0x8]\n\
.syntax unified\n\
    rsbs        r0,r3,#0\n\
.syntax divided\n\
    str         r0,[r5,#0xc]\n\
LAB_080447d4:\n\
    ldr         r1,[r5,#0xc]\n\
    sub         r0,r1,#0x1\n\
    ldr         r2,DAT_080447f4\n\
    cmp         r0,r2\n\
    bhi         LAB_08044800\n\
LAB_080447de:\n\
    lsl         r0,r1,#0x1\n\
    str         r0,[r5,#0xc]\n\
    ldr         r1,[r5,#0x8]\n\
    sub         r1,#0x1\n\
    str         r1,[r5,#0x8]\n\
    add         r1,r0,#0x0\n\
    sub         r0,r1,#0x1\n\
    cmp         r0,r2\n\
    bls         LAB_080447de\n\
    b           LAB_08044800\n\
\n\
.space 2\n\
\n\
DAT_080447f4:\n\
    .4byte 0x3FFFFFFE\n\
LAB_080447f8:\n\
    str         r6,[r5,#0x4]\n\
    str         r1,[r5,#0x8]\n\
    add         r0,r2,r4\n\
    str         r0,[r5,#0xc]\n\
LAB_08044800:\n\
    mov         r0,#0x3\n\
    str         r0,[r5,#0x0]\n\
    ldr         r1,[r5,#0xc]\n\
    cmp         r1,#0x0\n\
    bge         LAB_0804481a\n\
    mov         r0,#0x1\n\
    and         r0,r1\n\
    lsr         r1,r1,#0x1\n\
    orr         r0,r1\n\
    str         r0,[r5,#0xc]\n\
    ldr         r0,[r5,#0x8]\n\
    add         r0,#0x1\n\
    str         r0,[r5,#0x8]\n\
LAB_0804481a:\n\
    add         r0,r5,#0x0\n\
LAB_0804481c:\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044824()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x30]\n\
    str         r1,[sp,#0x34]\n\
    add         r0,sp,#0x30\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x34\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    add         r2,sp,#0x20\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080446a8\n\
    bl          fun_08044574\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08044850()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x30]\n\
    str         r1,[sp,#0x34]\n\
    add         r0,sp,#0x30\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x34\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    ldr         r0,[r4,#4]\n\
    mov         r1,#0x1\n\
    eor         r0,r1\n\
    str         r0,[r4,#4]\n\
    add         r2,sp,#0x20\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_080446a8\n\
    bl          fun_08044574\n\
    add         sp,#0x38\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08044884()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r9\n\
    mov         r6,r8\n\
    push        {r6,r7}\n\
    sub         sp,#0x38\n\
    str         r0,[sp,#0x30]\n\
    str         r1,[sp,#0x34]\n\
    add         r0,sp,#0x30\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x34\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r7,sp\n\
    add         r0,sp,#0x20\n\
    mov         r8,r0\n\
    mov         r0,#0x0\n\
    ldr         r1,[sp,#0x0]\n\
    mov         r9,r8\n\
    cmp         r1,#0x1\n\
    bhi         LAB_080448b6\n\
    mov         r0,#0x1\n\
LAB_080448b6:\n\
    cmp         r0,#0x0\n\
    bne         LAB_08044914\n\
    mov         r2,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_080448c4\n\
    mov         r2,#0x1\n\
LAB_080448c4:\n\
    cmp         r2,#0x0\n\
    beq         LAB_080448cc\n\
    ldr         r0,[sp,#4]\n\
    b           LAB_08044934\n\
LAB_080448cc:\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x4\n\
    bne         LAB_080448d4\n\
    mov         r2,#0x1\n\
LAB_080448d4:\n\
    cmp         r2,#0x0\n\
    beq         LAB_080448e6\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_080448e0\n\
    mov         r1,#0x1\n\
LAB_080448e0:\n\
    cmp         r1,#0x0\n\
    bne         LAB_080448fe\n\
    b           LAB_08044914\n\
LAB_080448e6:\n\
    mov         r2,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_080448ee\n\
    mov         r2,#0x1\n\
LAB_080448ee:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044908\n\
    mov         r0,#0x0\n\
    cmp         r1,#0x2\n\
    bne         LAB_080448fa\n\
    mov         r0,#0x1\n\
LAB_080448fa:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044932\n\
LAB_080448fe:\n\
    ldr         r0,DAT_08044904\n\
    b           LAB_080449d6\n\
\n\
.space 2\n\
\n\
DAT_08044904:\n\
    .4byte 0x020005D0\n\
LAB_08044908:\n\
    mov         r2,#0x0\n\
    cmp         r1,#0x2\n\
    bne         LAB_08044910\n\
    mov         r2,#0x1\n\
LAB_08044910:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044926\n\
LAB_08044914:\n\
    ldr         r0,[sp,#4]\n\
    ldr         r1,[sp,#0x14]\n\
    eor         r0,r1\n\
.syntax unified\n\
    rsbs        r1,r0,#0\n\
.syntax divided\n\
    orr         r1,r0\n\
    lsr         r1,r1,#0x1f\n\
    str         r1,[sp,#4]\n\
    mov         r0,sp\n\
    b           LAB_080449d6\n\
LAB_08044926:\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_0804492e\n\
    mov         r1,#0x1\n\
LAB_0804492e:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044944\n\
LAB_08044932:\n\
    ldr         r0,[r7,#4]\n\
LAB_08044934:\n\
    ldr         r1,[sp,#0x14]\n\
    eor         r0,r1\n\
.syntax unified\n\
    rsbs        r1,r0,#0\n\
.syntax divided\n\
    orr         r1,r0\n\
    lsr         r1,r1,#0x1f\n\
    str         r1,[sp,#0x14]\n\
    add         r0,r4,#0x0\n\
    b           LAB_080449d6\n\
LAB_08044944:\n\
    ldr         r0,[r7,#0xc]\n\
    mov         r1,#0x0\n\
    ldr         r2,[sp,#0x1c]\n\
    mov         r3,#0x0\n\
    bl          fun_08044ef4\n\
    add         r2,r1,#0x0\n\
    add         r5,r2,#0x0\n\
    add         r6,r0,#0x0\n\
    ldr         r4,[r7,#8]\n\
    ldr         r0,[sp,#0x18]\n\
    add         r4,r4,r0\n\
    str         r4,[sp,#0x28]\n\
    ldr         r1,[r7,#4]\n\
    ldr         r0,[sp,#0x14]\n\
    eor         r1,r0\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    lsr         r0,r0,#0x1f\n\
    str         r0,[sp,#0x24]\n\
    add         r4,#0x2\n\
    str         r4,[sp,#0x28]\n\
    cmp         r2,#0x0\n\
    bge         LAB_08044990\n\
    mov         r2,#0x1\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x18\n\
LAB_0804497a:\n\
    add         r4,#0x1\n\
    add         r0,r5,#0x0\n\
    and         r0,r2\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044988\n\
    lsr         r6,r6,#0x1\n\
    orr         r6,r1\n\
LAB_08044988:\n\
    lsr         r5,r5,#0x1\n\
    cmp         r5,#0x0\n\
    blt         LAB_0804497a\n\
    str         r4,[sp,#0x28]\n\
LAB_08044990:\n\
    ldr         r0,DAT_080449e4\n\
    cmp         r5,r0\n\
    bhi         LAB_080449b6\n\
    mov         r4,#0x80\n\
    lsl         r4,r4,#0x18\n\
    mov         r3,#0x1\n\
    add         r2,r0,#0x0\n\
    ldr         r1,[sp,#0x28]\n\
LAB_080449a0:\n\
    sub         r1,#0x1\n\
    lsl         r5,r5,#0x1\n\
    add         r0,r6,#0x0\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_080449ae\n\
    orr         r5,r3\n\
LAB_080449ae:\n\
    lsl         r6,r6,#0x1\n\
    cmp         r5,r2\n\
    bls         LAB_080449a0\n\
    str         r1,[sp,#0x28]\n\
LAB_080449b6:\n\
    mov         r0,#0x7f\n\
    and         r0,r5\n\
    cmp         r0,#0x40\n\
    bne         LAB_080449cc\n\
    mov         r0,#0x80\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    bne         LAB_080449ca\n\
    cmp         r6,#0x0\n\
    beq         LAB_080449cc\n\
LAB_080449ca:\n\
    add         r5,#0x40\n\
LAB_080449cc:\n\
    str         r5,[sp,#0x2c]\n\
    mov         r0,#0x3\n\
    mov         r1,r8\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,r9\n\
LAB_080449d6:\n\
    bl          fun_08044574\n\
    add         sp,#0x38\n\
    pop         {r3,r4}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_080449e4:\n\
    .4byte 0x3FFFFFFF\n\
    ");
}
__attribute__((naked)) void fun_080449e8()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r5,sp,#0x10\n\
    add         r1,r5,#0x0\n\
    bl          fun_0804462c\n\
    mov         r4,sp\n\
    mov         r0,#0x0\n\
    ldr         r3,[sp,#0x0]\n\
    cmp         r3,#0x1\n\
    bhi         LAB_08044a0e\n\
    mov         r0,#0x1\n\
LAB_08044a0e:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044a16\n\
    mov         r1,sp\n\
    b           LAB_08044ac8\n\
LAB_08044a16:\n\
    mov         r0,#0x0\n\
    ldr         r2,[sp,#0x10]\n\
    add         r6,r2,#0x0\n\
    cmp         r2,#0x1\n\
    bhi         LAB_08044a22\n\
    mov         r0,#0x1\n\
LAB_08044a22:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044a2a\n\
    add         r1,r5,#0x0\n\
    b           LAB_08044ac8\n\
LAB_08044a2a:\n\
    ldr         r0,[sp,#0x4]\n\
    ldr         r1,[sp,#0x14]\n\
    eor         r0,r1\n\
    str         r0,[sp,#0x4]\n\
    mov         r0,#0x0\n\
    cmp         r3,#0x4\n\
    bne         LAB_08044a3a\n\
    mov         r0,#0x1\n\
LAB_08044a3a:\n\
    cmp         r0,#0x0\n\
    bne         LAB_08044a4a\n\
    mov         r0,#0x0\n\
    cmp         r3,#0x2\n\
    bne         LAB_08044a46\n\
    mov         r0,#0x1\n\
LAB_08044a46:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044a5c\n\
LAB_08044a4a:\n\
    ldr         r0,[r4,#0x0]\n\
    add         r1,r4,#0x0\n\
    cmp         r0,r6\n\
    bne         LAB_08044ac8\n\
    ldr         r1,DAT_08044a58\n\
    b           LAB_08044ac8\n\
\n\
.space 2\n\
\n\
DAT_08044a58:\n\
    .4byte 0x020005D0\n\
LAB_08044a5c:\n\
    mov         r1,#0x0\n\
    cmp         r2,#0x4\n\
    bne         LAB_08044a64\n\
    mov         r1,#0x1\n\
LAB_08044a64:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044a70\n\
    str         r0,[sp,#0xc]\n\
    str         r0,[sp,#0x8]\n\
    mov         r1,sp\n\
    b           LAB_08044ac8\n\
LAB_08044a70:\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x2\n\
    bne         LAB_08044a78\n\
    mov         r0,#0x1\n\
LAB_08044a78:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044a82\n\
    mov         r0,#0x4\n\
    str         r0,[r4,#0x0]\n\
    b           LAB_08044ac6\n\
LAB_08044a82:\n\
    ldr         r1,[r4,#0x8]\n\
    ldr         r0,[sp,#0x18]\n\
    sub         r0,r1,r0\n\
    str         r0,[r4,#0x8]\n\
    ldr         r2,[r4,#0xc]\n\
    ldr         r3,[sp,#0x1c]\n\
    cmp         r2,r3\n\
    bcs         LAB_08044a98\n\
    lsl         r2,r2,#0x1\n\
    sub         r0,#0x1\n\
    str         r0,[r4,#0x8]\n\
LAB_08044a98:\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x17\n\
    mov         r1,#0x0\n\
LAB_08044a9e:\n\
    cmp         r2,r3\n\
    bcc         LAB_08044aa6\n\
    orr         r1,r0\n\
    sub         r2,r2,r3\n\
LAB_08044aa6:\n\
    lsr         r0,r0,#0x1\n\
    lsl         r2,r2,#0x1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08044a9e\n\
    mov         r0,#0x7f\n\
    and         r0,r1\n\
    cmp         r0,#0x40\n\
    bne         LAB_08044ac4\n\
    mov         r0,#0x80\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08044ac2\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044ac4\n\
LAB_08044ac2:\n\
    add         r1,#0x40\n\
LAB_08044ac4:\n\
    str         r1,[r4,#0xc]\n\
LAB_08044ac6:\n\
    add         r1,r4,#0x0\n\
LAB_08044ac8:\n\
    add         r0,r1,#0x0\n\
    bl          fun_08044574\n\
    add         sp,#0x28\n\
    pop         {r4,r5,r6,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044ad4()
{
    asm("\n\
    push        {r4,lr}\n\
    add         r4,r0,#0x0\n\
    mov         r0,#0x0\n\
    ldr         r2,[r4,#0x0]\n\
    cmp         r2,#0x1\n\
    bhi         LAB_08044ae2\n\
    mov         r0,#0x1\n\
LAB_08044ae2:\n\
    cmp         r0,#0x0\n\
    bne         LAB_08044af4\n\
    mov         r0,#0x0\n\
    ldr         r3,[r1,#0x0]\n\
    cmp         r3,#0x1\n\
    bhi         LAB_08044af0\n\
    mov         r0,#0x1\n\
LAB_08044af0:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044af8\n\
LAB_08044af4:\n\
    mov         r0,#0x1\n\
    b           LAB_08044bb6\n\
LAB_08044af8:\n\
    mov         r0,#0x0\n\
    cmp         r2,#0x4\n\
    bne         LAB_08044b00\n\
    mov         r0,#0x1\n\
LAB_08044b00:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044b18\n\
    mov         r0,#0x0\n\
    cmp         r3,#0x4\n\
    bne         LAB_08044b0c\n\
    mov         r0,#0x1\n\
LAB_08044b0c:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044b18\n\
    ldr         r0,[r1,#0x4]\n\
    ldr         r1,[r4,#0x4]\n\
    sub         r0,r0,r1\n\
    b           LAB_08044bb6\n\
LAB_08044b18:\n\
    mov         r2,#0x0\n\
    ldr         r0,[r4,#0x0]\n\
    cmp         r0,#0x4\n\
    bne         LAB_08044b22\n\
    mov         r2,#0x1\n\
LAB_08044b22:\n\
    cmp         r2,#0x0\n\
    bne         LAB_08044b70\n\
    mov         r2,#0x0\n\
    cmp         r3,#0x4\n\
    bne         LAB_08044b2e\n\
    mov         r2,#0x1\n\
LAB_08044b2e:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044b40\n\
LAB_08044b32:\n\
    ldr         r0,[r1,#0x4]\n\
    mov         r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044b7a\n\
    mov         r1,#0x1\n\
    b           LAB_08044b7a\n\
LAB_08044b40:\n\
    mov         r2,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08044b48\n\
    mov         r2,#0x1\n\
LAB_08044b48:\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044b58\n\
    mov         r2,#0x0\n\
    cmp         r3,#0x2\n\
    bne         LAB_08044b54\n\
    mov         r2,#0x1\n\
LAB_08044b54:\n\
    cmp         r2,#0x0\n\
    bne         LAB_08044bb4\n\
LAB_08044b58:\n\
    mov         r2,#0x0\n\
    cmp         r0,#0x2\n\
    bne         LAB_08044b60\n\
    mov         r2,#0x1\n\
LAB_08044b60:\n\
    cmp         r2,#0x0\n\
    bne         LAB_08044b32\n\
    mov         r0,#0x0\n\
    cmp         r3,#0x2\n\
    bne         LAB_08044b6c\n\
    mov         r0,#0x1\n\
LAB_08044b6c:\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044b7e\n\
LAB_08044b70:\n\
    ldr         r0,[r4,#0x4]\n\
    mov         r1,#0x1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044b7a\n\
    sub         r1,#0x2\n\
LAB_08044b7a:\n\
    add         r0,r1,#0x0\n\
    b           LAB_08044bb6\n\
LAB_08044b7e:\n\
    ldr         r3,[r4,#0x4]\n\
    ldr         r0,[r1,#0x4]\n\
    cmp         r3,r0\n\
    beq         LAB_08044b90\n\
LAB_08044b86:\n\
    mov         r0,#0x1\n\
    cmp         r3,#0x0\n\
    beq         LAB_08044bb6\n\
    sub         r0,#0x2\n\
    b           LAB_08044bb6\n\
LAB_08044b90:\n\
    ldr         r2,[r4,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    cmp         r2,r0\n\
    bgt         LAB_08044b86\n\
    cmp         r2,r0\n\
    bge         LAB_08044ba8\n\
LAB_08044b9c:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r3,#0x0\n\
    beq         LAB_08044bb6\n\
    mov         r0,#0x1\n\
    b           LAB_08044bb6\n\
LAB_08044ba8:\n\
    ldr         r0,[r4,#0xc]\n\
    ldr         r1,[r1,#0xc]\n\
    cmp         r0,r1\n\
    bhi         LAB_08044b86\n\
    cmp         r0,r1\n\
    bcc         LAB_08044b9c\n\
LAB_08044bb4:\n\
    mov         r0,#0x0\n\
LAB_08044bb6:\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08044bb8()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08044ad4\n\
    add         sp,#0x28\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044be0()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044c04\n\
    mov         r1,#0x1\n\
LAB_08044c04:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044c16\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044c12\n\
    mov         r1,#0x1\n\
LAB_08044c12:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044c1a\n\
LAB_08044c16:\n\
    mov         r0,#0x1\n\
    b           LAB_08044c22\n\
LAB_08044c1a:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08044ad4\n\
LAB_08044c22:\n\
    add         sp,#0x28\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044c28()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044c4c\n\
    mov         r1,#0x1\n\
LAB_08044c4c:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044c5e\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044c5a\n\
    mov         r1,#0x1\n\
LAB_08044c5a:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044c62\n\
LAB_08044c5e:\n\
    mov         r0,#0x1\n\
    b           LAB_08044c6a\n\
LAB_08044c62:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08044ad4\n\
LAB_08044c6a:\n\
    add         sp,#0x28\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044c70()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044c94\n\
    mov         r1,#0x1\n\
LAB_08044c94:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044ca6\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044ca2\n\
    mov         r1,#0x1\n\
LAB_08044ca2:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044cac\n\
LAB_08044ca6:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08044cb4\n\
LAB_08044cac:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08044ad4\n\
LAB_08044cb4:\n\
    add         sp,#0x28\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08044cb8()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044cdc\n\
    mov         r1,#0x1\n\
LAB_08044cdc:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044cee\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044cea\n\
    mov         r1,#0x1\n\
LAB_08044cea:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044cf4\n\
LAB_08044cee:\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    b           LAB_08044cfc\n\
LAB_08044cf4:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08044ad4\n\
LAB_08044cfc:\n\
    add         sp,#0x28\n\
    pop         {r4,pc}\n\
    ");
}
__attribute__((naked)) void fun_08044d00()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044d24\n\
    mov         r1,#0x1\n\
LAB_08044d24:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044d36\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044d32\n\
    mov         r1,#0x1\n\
LAB_08044d32:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044d3a\n\
LAB_08044d36:\n\
    mov         r0,#0x1\n\
    b           LAB_08044d42\n\
LAB_08044d3a:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08044ad4\n\
LAB_08044d42:\n\
    add         sp,#0x28\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044d48()
{
    asm("\n\
    push        {r4,lr}\n\
    sub         sp,#0x28\n\
    str         r0,[sp,#0x20]\n\
    str         r1,[sp,#0x24]\n\
    add         r0,sp,#0x20\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    add         r0,sp,#0x24\n\
    add         r4,sp,#0x10\n\
    add         r1,r4,#0x0\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044d6c\n\
    mov         r1,#0x1\n\
LAB_08044d6c:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044d7e\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x10]\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044d7a\n\
    mov         r1,#0x1\n\
LAB_08044d7a:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044d82\n\
LAB_08044d7e:\n\
    mov         r0,#0x1\n\
    b           LAB_08044d8a\n\
LAB_08044d82:\n\
    mov         r0,sp\n\
    add         r1,r4,#0x0\n\
    bl          fun_08044ad4\n\
LAB_08044d8a:\n\
    add         sp,#0x28\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044d90()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x10\n\
    add         r1,r0,#0x0\n\
    mov         r0,#0x3\n\
    str         r0,[sp,#0x0]\n\
    lsr         r2,r1,#0x1f\n\
    str         r2,[sp,#0x4]\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044da8\n\
    mov         r0,#0x2\n\
    str         r0,[sp,#0x0]\n\
    b           LAB_08044de0\n\
LAB_08044da8:\n\
    mov         r0,#0x1e\n\
    str         r0,[sp,#0x8]\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044dc6\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x18\n\
    cmp         r1,r0\n\
    bne         LAB_08044dc0\n\
    ldr         r0,DAT_08044dbc\n\
    b           LAB_08044de6\n\
DAT_08044dbc:\n\
    .4byte 0xCF000000\n\
LAB_08044dc0:\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    str         r0,[sp,#0xc]\n\
    b           LAB_08044dc8\n\
LAB_08044dc6:\n\
    str         r1,[sp,#0xc]\n\
LAB_08044dc8:\n\
    ldr         r2,[sp,#0xc]\n\
    ldr         r3,DAT_08044dec\n\
    cmp         r2,r3\n\
    bhi         LAB_08044de0\n\
    ldr         r1,[sp,#0x8]\n\
LAB_08044dd2:\n\
    lsl         r0,r2,#0x1\n\
    sub         r1,#0x1\n\
    add         r2,r0,#0x0\n\
    cmp         r0,r3\n\
    bls         LAB_08044dd2\n\
    str         r1,[sp,#0x8]\n\
    str         r0,[sp,#0xc]\n\
LAB_08044de0:\n\
    mov         r0,sp\n\
    bl          fun_08044574\n\
LAB_08044de6:\n\
    add         sp,#0x10\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
DAT_08044dec:\n\
    .4byte 0x3FFFFFFF\n\
    ");
}
__attribute__((naked)) void fun_08044df0()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x14\n\
    str         r0,[sp,#0x10]\n\
    add         r0,sp,#0x10\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    cmp         r0,#0x2\n\
    bne         LAB_08044e08\n\
    mov         r1,#0x1\n\
LAB_08044e08:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044e3a\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x1\n\
    bhi         LAB_08044e14\n\
    mov         r1,#0x1\n\
LAB_08044e14:\n\
    cmp         r1,#0x0\n\
    bne         LAB_08044e3a\n\
    mov         r1,#0x0\n\
    cmp         r0,#0x4\n\
    bne         LAB_08044e20\n\
    mov         r1,#0x1\n\
LAB_08044e20:\n\
    cmp         r1,#0x0\n\
    beq         LAB_08044e34\n\
LAB_08044e24:\n\
    ldr         r0,[sp,#0x4]\n\
    ldr         r1,DAT_08044e30\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044e52\n\
    add         r1,#0x1\n\
    b           LAB_08044e52\n\
DAT_08044e30:\n\
    .4byte 0x7FFFFFFF\n\
LAB_08044e34:\n\
    ldr         r1,[sp,#0x8]\n\
    cmp         r1,#0x0\n\
    bge         LAB_08044e3e\n\
LAB_08044e3a:\n\
    mov         r0,#0x0\n\
    b           LAB_08044e54\n\
LAB_08044e3e:\n\
    cmp         r1,#0x1e\n\
    bgt         LAB_08044e24\n\
    mov         r0,#0x1e\n\
    sub         r0,r0,r1\n\
    ldr         r1,[sp,#0xc]\n\
    lsr         r1,r0\n\
    ldr         r0,[sp,#0x4]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08044e52\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
LAB_08044e52:\n\
    add         r0,r1,#0x0\n\
LAB_08044e54:\n\
    add         sp,#0x14\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_08044e58()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x14\n\
    str         r0,[sp,#0x10]\n\
    add         r0,sp,#0x10\n\
    mov         r1,sp\n\
    bl          fun_0804462c\n\
    mov         r1,#0x0\n\
    ldr         r0,[sp,#0x4]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08044e70\n\
    mov         r1,#0x1\n\
LAB_08044e70:\n\
    str         r1,[sp,#0x4]\n\
    mov         r0,sp\n\
    bl          fun_08044574\n\
    add         sp,#0x14\n\
    pop         {pc}\n\
    ");
}
__attribute__((naked)) void fun_08044e7c()
{
    asm("\n\
    push        {lr}\n\
    sub         sp,#0x10\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#0x4]\n\
    str         r2,[sp,#0x8]\n\
    str         r3,[sp,#0xc]\n\
    mov         r0,sp\n\
    bl          fun_08044574\n\
    add         sp,#0x10\n\
    pop         {pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044e94()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    sub         sp,#0x18\n\
    str         r0,[sp,#0x14]\n\
    add         r0,sp,#0x14\n\
    add         r1,sp,#0x4\n\
    bl          fun_0804462c\n\
    ldr         r0,[sp,#0x4]\n\
    ldr         r1,[sp,#0x8]\n\
    ldr         r2,[sp,#0xc]\n\
    ldr         r3,[sp,#0x10]\n\
    mov         r4,#0x0\n\
    lsr         r6,r3,#0x2\n\
    lsl         r5,r4,#0x1e\n\
    add         r4,r6,#0x0\n\
    orr         r4,r5\n\
    lsl         r3,r3,#0x1e\n\
    str         r4,[sp,#0x0]\n\
    bl          fun_08044508\n\
    add         sp,#0x18\n\
    pop         {r4,r5,r6,pc}\n\
    ");
}
__attribute__((naked)) void fun_08044ec0()
{
    asm("\n\
    push        {r4,r5,r6,lr}\n\
    add         r6,r1,#0x0\n\
    add         r5,r0,#0x0\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044ef0\n\
    mov         r0,#0x20\n\
    sub         r0,r0,r2\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08044edc\n\
    mov         r4,#0x0\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    add         r3,r6,#0x0\n\
    lsr         r3,r0\n\
    b           LAB_08044eec\n\
LAB_08044edc:\n\
    add         r1,r6,#0x0\n\
    lsl         r1,r0\n\
    add         r4,r6,#0x0\n\
    lsr         r4,r2\n\
    add         r0,r5,#0x0\n\
    lsr         r0,r2\n\
    add         r3,r0,#0x0\n\
    orr         r3,r1\n\
LAB_08044eec:\n\
    add         r1,r4,#0x0\n\
    add         r0,r3,#0x0\n\
LAB_08044ef0:\n\
    pop         {r4,r5,r6,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044ef4()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    sub         sp,#0x10\n\
    str         r0,[sp,#0x0]\n\
    str         r1,[sp,#0x4]\n\
    str         r2,[sp,#0x8]\n\
    str         r3,[sp,#0xc]\n\
    ldr         r3,[sp,#0x0]\n\
    ldr         r0,DAT_08044f60\n\
    mov         r12,r0\n\
    add         r2,r3,#0x0\n\
    and         r2,r0\n\
    lsr         r3,r3,#0x10\n\
    ldr         r1,[sp,#0x8]\n\
    add         r0,r1,#0x0\n\
    mov         r4,r12\n\
    and         r0,r4\n\
    lsr         r1,r1,#0x10\n\
    add         r5,r2,#0x0\n\
    mul         r5,r0\n\
    add         r4,r2,#0x0\n\
    mul         r4,r1\n\
    add         r2,r3,#0x0\n\
    mul         r2,r0\n\
    mul         r3,r1\n\
    lsr         r0,r5,#0x10\n\
    add         r4,r4,r0\n\
    add         r4,r4,r2\n\
    cmp         r4,r2\n\
    bcs         LAB_08044f34\n\
    mov         r0,#0x80\n\
    lsl         r0,r0,#0x9\n\
    add         r3,r3,r0\n\
LAB_08044f34:\n\
    lsr         r0,r4,#0x10\n\
    add         r7,r3,r0\n\
    mov         r1,r12\n\
    and         r4,r1\n\
    lsl         r0,r4,#0x10\n\
    and         r5,r1\n\
    add         r6,r0,#0x0\n\
    orr         r6,r5\n\
    add         r1,r7,#0x0\n\
    add         r0,r6,#0x0\n\
    ldr         r3,[sp,#0x0]\n\
    ldr         r4,[sp,#0xc]\n\
    add         r2,r3,#0x0\n\
    mul         r2,r4\n\
    ldr         r5,[sp,#0x4]\n\
    ldr         r4,[sp,#0x8]\n\
    add         r3,r5,#0x0\n\
    mul         r3,r4\n\
    add         r2,r2,r3\n\
    add         r1,r7,r2\n\
    add         sp,#0x10\n\
    pop         {r4,r5,r6,r7,pc}\n\
DAT_08044f60:\n\
    .4byte 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_08044f64()
{
    asm("\n\
    push        {r4,lr}\n\
.syntax unified\n\
    rsbs        r2,r0,#0\n\
.syntax divided\n\
    add         r3,r2,#0x0\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
    cmp         r2,#0x0\n\
    beq         LAB_08044f72\n\
    sub         r1,#0x1\n\
LAB_08044f72:\n\
    add         r4,r1,#0x0\n\
    add         r1,r4,#0x0\n\
    add         r0,r3,#0x0\n\
    pop         {r4,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044f7c()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r4,r5,#0x0\n\
    add         r3,r1,#0x0\n\
    cmp         r2,#0xf\n\
    bls         LAB_08044fbc\n\
    add         r0,r3,#0x0\n\
    orr         r0,r5\n\
    mov         r1,#0x3\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08044fbc\n\
    add         r1,r5,#0x0\n\
LAB_08044f96:\n\
    ldmia       r3!,{r0}\n\
    stmia       r1!,{r0}\n\
    ldmia       r3!,{r0}\n\
    stmia       r1!,{r0}\n\
    ldmia       r3!,{r0}\n\
    stmia       r1!,{r0}\n\
    ldmia       r3!,{r0}\n\
    stmia       r1!,{r0}\n\
    sub         r2,#0x10\n\
    cmp         r2,#0xf\n\
    bhi         LAB_08044f96\n\
    cmp         r2,#0x3\n\
    bls         LAB_08044fba\n\
LAB_08044fb0:\n\
    ldmia       r3!,{r0}\n\
    stmia       r1!,{r0}\n\
    sub         r2,#0x4\n\
    cmp         r2,#0x3\n\
    bhi         LAB_08044fb0\n\
LAB_08044fba:\n\
    add         r4,r1,#0x0\n\
LAB_08044fbc:\n\
    sub         r2,#0x1\n\
    mov         r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
    cmp         r2,r0\n\
    beq         LAB_08044fd6\n\
    add         r1,r0,#0x0\n\
LAB_08044fc8:\n\
    ldrb        r0,[r3,#0x0]\n\
    strb        r0,[r4,#0x0]\n\
    add         r3,#0x1\n\
    add         r4,#0x1\n\
    sub         r2,#0x1\n\
    cmp         r2,r1\n\
    bne         LAB_08044fc8\n\
LAB_08044fd6:\n\
    add         r0,r5,#0x0\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08044fdc()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    add         r5,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    add         r3,r5,#0x0\n\
    cmp         r2,#0x3\n\
    bls         LAB_08045022\n\
    mov         r0,#0x3\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045022\n\
    add         r1,r5,#0x0\n\
    mov         r0,#0xff\n\
    and         r4,r0\n\
    lsl         r3,r4,#0x8\n\
    orr         r3,r4\n\
    lsl         r0,r3,#0x10\n\
    orr         r3,r0\n\
    cmp         r2,#0xf\n\
    bls         LAB_08045016\n\
LAB_08045002:\n\
    stmia       r1!,{r3}\n\
    stmia       r1!,{r3}\n\
    stmia       r1!,{r3}\n\
    stmia       r1!,{r3}\n\
    sub         r2,#0x10\n\
    cmp         r2,#0xf\n\
    bhi         LAB_08045002\n\
    b           LAB_08045016\n\
LAB_08045012:\n\
    stmia       r1!,{r3}\n\
    sub         r2,#0x4\n\
LAB_08045016:\n\
    cmp         r2,#0x3\n\
    bhi         LAB_08045012\n\
    add         r3,r1,#0x0\n\
    b           LAB_08045022\n\
LAB_0804501e:\n\
    strb        r4,[r3,#0x0]\n\
    add         r3,#0x1\n\
LAB_08045022:\n\
    add         r0,r2,#0x0\n\
    sub         r2,#0x1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804501e\n\
    add         r0,r5,#0x0\n\
    pop         {r4,r5,pc}\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08045030()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x20\n\
    str         r0,[sp,#0x0]\n\
    mov         r9,r1\n\
    add         r7,r2,#0x0\n\
    str         r3,[sp,#0x4]\n\
LAB_08045044:\n\
    mov         r1,#0x3\n\
    ldr         r0,[sp,#0x0]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045062\n\
    add         r0,r7,#0x0\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045062\n\
    mov         r1,#0x4\n\
    eor         r1,r7\n\
.syntax unified\n\
    rsbs        r0,r1,#0\n\
.syntax divided\n\
    orr         r0,r1\n\
    lsr         r0,r0,#0x1f\n\
    b           LAB_08045064\n\
LAB_08045062:\n\
    mov         r0,#0x2\n\
LAB_08045064:\n\
    str         r0,[sp,#0xc]\n\
    mov         r1,#0x0\n\
    str         r1,[sp,#0x10]\n\
    mov         r2,r9\n\
    cmp         r2,#0x6\n\
    bhi         LAB_080450f8\n\
    ldr         r0,[sp,#0x0]\n\
    add         r5,r0,r7\n\
    mov         r0,r9\n\
    mul         r0,r7\n\
    ldr         r2,[sp,#0x0]\n\
    add         r1,r2,r0\n\
    str         r0,[sp,#0x1c]\n\
    cmp         r5,r1\n\
    bcc         LAB_08045084\n\
    b           LAB_080455b4\n\
LAB_08045084:\n\
    add         r6,r5,#0x0\n\
    add         r5,r5,r7\n\
    mov         r8,r5\n\
    b           LAB_080450d2\n\
LAB_0804508c:\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804509c\n\
    ldr         r1,[r6,#0x0]\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r1,[r5,#0x0]\n\
    b           LAB_080450d0\n\
LAB_0804509c:\n\
    ldr         r1,[sp,#0xc]\n\
    cmp         r1,#0x1\n\
    bgt         LAB_080450b8\n\
    lsr         r2,r7,#0x2\n\
    add         r4,r6,#0x0\n\
    add         r3,r5,#0x0\n\
LAB_080450a8:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r3,#0x0]\n\
    stmia       r4!,{r0}\n\
    stmia       r3!,{r1}\n\
    sub         r2,#0x1\n\
    cmp         r2,#0x0\n\
    bgt         LAB_080450a8\n\
    b           LAB_080450d0\n\
LAB_080450b8:\n\
    add         r3,r7,#0x0\n\
    add         r4,r6,#0x0\n\
    add         r2,r5,#0x0\n\
LAB_080450be:\n\
    ldrb        r1,[r4,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r4,#0x0]\n\
    add         r4,#0x1\n\
    strb        r1,[r2,#0x0]\n\
    add         r2,#0x1\n\
    sub         r3,#0x1\n\
    cmp         r3,#0x0\n\
    bgt         LAB_080450be\n\
LAB_080450d0:\n\
    add         r6,r5,#0x0\n\
LAB_080450d2:\n\
    ldr         r2,[sp,#0x0]\n\
    cmp         r6,r2\n\
    bls         LAB_080450ea\n\
    sub         r4,r6,r7\n\
    add         r0,r4,#0x0\n\
    add         r1,r6,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    add         r5,r4,#0x0\n\
    cmp         r0,#0x0\n\
    bgt         LAB_0804508c\n\
LAB_080450ea:\n\
    mov         r5,r8\n\
    ldr         r1,[sp,#0x0]\n\
    ldr         r2,[sp,#0x1c]\n\
    add         r0,r1,r2\n\
    cmp         r5,r0\n\
    bcc         LAB_08045084\n\
    b           LAB_080455b4\n\
LAB_080450f8:\n\
    mov         r1,r9\n\
    lsr         r0,r1,#0x1\n\
    mul         r0,r7\n\
    ldr         r2,[sp,#0x0]\n\
    add         r5,r2,r0\n\
    sub         r1,#0x1\n\
    str         r1,[sp,#0x14]\n\
    mov         r0,r9\n\
    cmp         r0,#0x7\n\
    bhi         LAB_0804510e\n\
    b           LAB_0804529c\n\
LAB_0804510e:\n\
    add         r6,r2,#0x0\n\
    add         r0,r1,#0x0\n\
    mul         r0,r7\n\
    add         r2,r2,r0\n\
    mov         r10,r2\n\
    mov         r1,r9\n\
    cmp         r1,#0x28\n\
    bhi         LAB_08045120\n\
    b           LAB_08045246\n\
LAB_08045120:\n\
    lsr         r0,r1,#0x3\n\
    add         r2,r0,#0x0\n\
    mul         r2,r7\n\
    str         r2,[sp,#0x8]\n\
    add         r4,r6,r2\n\
    lsl         r0,r2,#0x1\n\
    add         r6,r0,r6\n\
    ldr         r0,[sp,#0x0]\n\
    add         r1,r4,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bge         LAB_0804515e\n\
    add         r0,r4,#0x0\n\
    add         r1,r6,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    blt         LAB_08045180\n\
    ldr         r0,[sp,#0x0]\n\
    add         r1,r6,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    ldr         r1,[sp,#0x0]\n\
    cmp         r0,#0x0\n\
    bge         LAB_08045182\n\
    add         r1,r6,#0x0\n\
    b           LAB_08045182\n\
LAB_0804515e:\n\
    add         r0,r4,#0x0\n\
    add         r1,r6,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08045180\n\
    ldr         r0,[sp,#0x0]\n\
    add         r1,r6,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    add         r1,r6,#0x0\n\
    cmp         r0,#0x0\n\
    bge         LAB_08045182\n\
    ldr         r1,[sp,#0x0]\n\
    b           LAB_08045182\n\
LAB_08045180:\n\
    add         r1,r4,#0x0\n\
LAB_08045182:\n\
    add         r6,r1,#0x0\n\
    ldr         r0,[sp,#0x8]\n\
    sub         r0,r5,r0\n\
    mov         r8,r0\n\
    ldr         r1,[sp,#0x8]\n\
    add         r4,r5,r1\n\
    add         r1,r5,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bge         LAB_080451bc\n\
    add         r0,r5,#0x0\n\
    add         r1,r4,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    blt         LAB_080451de\n\
    mov         r0,r8\n\
    add         r1,r4,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    mov         r1,r8\n\
    cmp         r0,#0x0\n\
    bge         LAB_080451e0\n\
    add         r1,r4,#0x0\n\
    b           LAB_080451e0\n\
LAB_080451bc:\n\
    add         r0,r5,#0x0\n\
    add         r1,r4,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bgt         LAB_080451de\n\
    mov         r0,r8\n\
    add         r1,r4,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    add         r1,r4,#0x0\n\
    cmp         r0,#0x0\n\
    bge         LAB_080451e0\n\
    mov         r1,r8\n\
    b           LAB_080451e0\n\
LAB_080451de:\n\
    add         r1,r5,#0x0\n\
LAB_080451e0:\n\
    add         r5,r1,#0x0\n\
    ldr         r1,[sp,#0x8]\n\
    lsl         r0,r1,#0x1\n\
    mov         r2,r10\n\
    sub         r2,r2,r0\n\
    mov         r8,r2\n\
    mov         r0,r10\n\
    sub         r4,r0,r1\n\
    mov         r0,r8\n\
    add         r1,r4,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bge         LAB_08045220\n\
    add         r0,r4,#0x0\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    blt         LAB_08045242\n\
    mov         r0,r8\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    mov         r1,r8\n\
    cmp         r0,#0x0\n\
    bge         LAB_08045244\n\
    mov         r1,r10\n\
    b           LAB_08045244\n\
LAB_08045220:\n\
    add         r0,r4,#0x0\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08045242\n\
    mov         r0,r8\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    mov         r1,r10\n\
    cmp         r0,#0x0\n\
    bge         LAB_08045244\n\
    mov         r1,r8\n\
    b           LAB_08045244\n\
LAB_08045242:\n\
    add         r1,r4,#0x0\n\
LAB_08045244:\n\
    mov         r10,r1\n\
LAB_08045246:\n\
    add         r0,r6,#0x0\n\
    add         r1,r5,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bge         LAB_08045276\n\
    add         r0,r5,#0x0\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    blt         LAB_08045298\n\
    add         r0,r6,#0x0\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    add         r1,r6,#0x0\n\
    cmp         r0,#0x0\n\
    bge         LAB_0804529a\n\
    mov         r1,r10\n\
    b           LAB_0804529a\n\
LAB_08045276:\n\
    add         r0,r5,#0x0\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08045298\n\
    add         r0,r6,#0x0\n\
    mov         r1,r10\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    mov         r1,r10\n\
    cmp         r0,#0x0\n\
    bge         LAB_0804529a\n\
    add         r1,r6,#0x0\n\
    b           LAB_0804529a\n\
LAB_08045298:\n\
    add         r1,r5,#0x0\n\
LAB_0804529a:\n\
    add         r5,r1,#0x0\n\
LAB_0804529c:\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_080452b8\n\
    ldr         r2,[sp,#0x0]\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r2,#0x0]\n\
    str         r1,[r5,#0x0]\n\
    add         r0,r2,r7\n\
    str         r0,[sp,#0x18]\n\
    mov         r1,r9\n\
    mul         r1,r7\n\
    str         r1,[sp,#0x1c]\n\
    b           LAB_08045300\n\
LAB_080452b8:\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x1\n\
    bgt         LAB_080452de\n\
    lsr         r2,r7,#0x2\n\
    ldr         r4,[sp,#0x0]\n\
    add         r3,r5,#0x0\n\
    add         r0,r4,r7\n\
    str         r0,[sp,#0x18]\n\
    mov         r1,r9\n\
    mul         r1,r7\n\
    str         r1,[sp,#0x1c]\n\
LAB_080452ce:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r3,#0x0]\n\
    stmia       r4!,{r0}\n\
    stmia       r3!,{r1}\n\
    sub         r2,#0x1\n\
    cmp         r2,#0x0\n\
    bgt         LAB_080452ce\n\
    b           LAB_08045300\n\
LAB_080452de:\n\
    add         r4,r7,#0x0\n\
    ldr         r3,[sp,#0x0]\n\
    add         r2,r5,#0x0\n\
    add         r0,r3,r7\n\
    str         r0,[sp,#0x18]\n\
    mov         r1,r9\n\
    mul         r1,r7\n\
    str         r1,[sp,#0x1c]\n\
LAB_080452ee:\n\
    ldrb        r1,[r3,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r3,#0x0]\n\
    add         r3,#0x1\n\
    strb        r1,[r2,#0x0]\n\
    add         r2,#0x1\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_080452ee\n\
LAB_08045300:\n\
    ldr         r6,[sp,#0x18]\n\
    mov         r9,r6\n\
    ldr         r2,[sp,#0x14]\n\
    add         r0,r2,#0x0\n\
    mul         r0,r7\n\
    ldr         r1,[sp,#0x0]\n\
    add         r1,r1,r0\n\
    mov         r8,r1\n\
    mov         r5,r8\n\
    b           LAB_080453d0\n\
LAB_08045314:\n\
    ldr         r1,[r6,#0x0]\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r1,[r5,#0x0]\n\
    add         r6,r6,r7\n\
    mov         r10,r6\n\
    sub         r5,r5,r7\n\
    mov         r12,r5\n\
    b           LAB_0804536a\n\
LAB_08045326:\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x1\n\
    bgt         LAB_0804534a\n\
    lsr         r3,r7,#0x2\n\
    add         r4,r6,#0x0\n\
    add         r2,r5,#0x0\n\
    add         r0,r4,r7\n\
    mov         r10,r0\n\
    sub         r1,r2,r7\n\
    mov         r12,r1\n\
LAB_0804533a:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r2,#0x0]\n\
    stmia       r4!,{r0}\n\
    stmia       r2!,{r1}\n\
    sub         r3,#0x1\n\
    cmp         r3,#0x0\n\
    bgt         LAB_0804533a\n\
    b           LAB_0804536a\n\
LAB_0804534a:\n\
    add         r4,r7,#0x0\n\
    add         r3,r6,#0x0\n\
    add         r2,r5,#0x0\n\
    add         r0,r3,r7\n\
    mov         r10,r0\n\
    sub         r1,r2,r7\n\
    mov         r12,r1\n\
LAB_08045358:\n\
    ldrb        r1,[r3,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r3,#0x0]\n\
    add         r3,#0x1\n\
    strb        r1,[r2,#0x0]\n\
    add         r2,#0x1\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_08045358\n\
LAB_0804536a:\n\
    mov         r2,#0x1\n\
    str         r2,[sp,#0x10]\n\
    mov         r6,r10\n\
    mov         r5,r12\n\
    b           LAB_080453d0\n\
LAB_08045374:\n\
    add         r1,r6,r7\n\
    mov         r10,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_080453ce\n\
    mov         r2,#0x1\n\
    str         r2,[sp,#0x10]\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045394\n\
    mov         r2,r9\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,[r6,#0x0]\n\
    str         r0,[r2,#0x0]\n\
    str         r1,[r6,#0x0]\n\
    add         r6,r2,r7\n\
    b           LAB_080453cc\n\
LAB_08045394:\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x1\n\
    bgt         LAB_080453b2\n\
    lsr         r3,r7,#0x2\n\
    mov         r2,r9\n\
    add         r4,r6,#0x0\n\
    add         r6,r2,r7\n\
LAB_080453a2:\n\
    ldr         r1,[r2,#0x0]\n\
    ldr         r0,[r4,#0x0]\n\
    stmia       r2!,{r0}\n\
    stmia       r4!,{r1}\n\
    sub         r3,#0x1\n\
    cmp         r3,#0x0\n\
    bgt         LAB_080453a2\n\
    b           LAB_080453cc\n\
LAB_080453b2:\n\
    add         r4,r7,#0x0\n\
    mov         r2,r9\n\
    add         r3,r6,#0x0\n\
    add         r6,r2,r7\n\
LAB_080453ba:\n\
    ldrb        r1,[r2,#0x0]\n\
    ldrb        r0,[r3,#0x0]\n\
    strb        r0,[r2,#0x0]\n\
    add         r2,#0x1\n\
    strb        r1,[r3,#0x0]\n\
    add         r3,#0x1\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_080453ba\n\
LAB_080453cc:\n\
    mov         r9,r6\n\
LAB_080453ce:\n\
    mov         r6,r10\n\
LAB_080453d0:\n\
    cmp         r6,r5\n\
    bhi         LAB_08045440\n\
    add         r0,r6,#0x0\n\
    ldr         r1,[sp,#0x0]\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    ble         LAB_08045374\n\
    b           LAB_08045440\n\
LAB_080453e4:\n\
    sub         r1,r5,r7\n\
    mov         r12,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_0804543e\n\
    mov         r2,#0x1\n\
    str         r2,[sp,#0x10]\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08045404\n\
    ldr         r1,[r5,#0x0]\n\
    mov         r2,r8\n\
    ldr         r0,[r2,#0x0]\n\
    str         r0,[r5,#0x0]\n\
    str         r1,[r2,#0x0]\n\
    sub         r5,r2,r7\n\
    b           LAB_0804543c\n\
LAB_08045404:\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x1\n\
    bgt         LAB_08045422\n\
    lsr         r3,r7,#0x2\n\
    add         r4,r5,#0x0\n\
    mov         r2,r8\n\
    sub         r5,r2,r7\n\
LAB_08045412:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r2,#0x0]\n\
    stmia       r4!,{r0}\n\
    stmia       r2!,{r1}\n\
    sub         r3,#0x1\n\
    cmp         r3,#0x0\n\
    bgt         LAB_08045412\n\
    b           LAB_0804543c\n\
LAB_08045422:\n\
    add         r4,r7,#0x0\n\
    add         r3,r5,#0x0\n\
    mov         r2,r8\n\
    sub         r5,r2,r7\n\
LAB_0804542a:\n\
    ldrb        r1,[r3,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r3,#0x0]\n\
    add         r3,#0x1\n\
    strb        r1,[r2,#0x0]\n\
    add         r2,#0x1\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_0804542a\n\
LAB_0804543c:\n\
    mov         r8,r5\n\
LAB_0804543e:\n\
    mov         r5,r12\n\
LAB_08045440:\n\
    cmp         r6,r5\n\
    bhi         LAB_0804545c\n\
    add         r0,r5,#0x0\n\
    ldr         r1,[sp,#0x0]\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    cmp         r0,#0x0\n\
    bge         LAB_080453e4\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x0\n\
    beq         LAB_0804545a\n\
    b           LAB_08045326\n\
LAB_0804545a:\n\
    b           LAB_08045314\n\
LAB_0804545c:\n\
    ldr         r1,[sp,#0x10]\n\
    cmp         r1,#0x0\n\
    bne         LAB_080454e4\n\
    ldr         r5,[sp,#0x18]\n\
    ldr         r2,[sp,#0x0]\n\
    ldr         r1,[sp,#0x1c]\n\
    add         r0,r2,r1\n\
    cmp         r5,r0\n\
    bcc         LAB_08045470\n\
    b           LAB_080455b4\n\
LAB_08045470:\n\
    add         r6,r5,#0x0\n\
    add         r5,r5,r7\n\
    mov         r8,r5\n\
    b           LAB_080454be\n\
LAB_08045478:\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x0\n\
    bne         LAB_08045488\n\
    ldr         r1,[r6,#0x0]\n\
    ldr         r0,[r5,#0x0]\n\
    str         r0,[r6,#0x0]\n\
    str         r1,[r5,#0x0]\n\
    b           LAB_080454bc\n\
LAB_08045488:\n\
    ldr         r0,[sp,#0xc]\n\
    cmp         r0,#0x1\n\
    bgt         LAB_080454a4\n\
    lsr         r2,r7,#0x2\n\
    add         r4,r6,#0x0\n\
    add         r3,r5,#0x0\n\
LAB_08045494:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r3,#0x0]\n\
    stmia       r4!,{r0}\n\
    stmia       r3!,{r1}\n\
    sub         r2,#0x1\n\
    cmp         r2,#0x0\n\
    bgt         LAB_08045494\n\
    b           LAB_080454bc\n\
LAB_080454a4:\n\
    add         r3,r7,#0x0\n\
    add         r4,r6,#0x0\n\
    add         r2,r5,#0x0\n\
LAB_080454aa:\n\
    ldrb        r1,[r4,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r4,#0x0]\n\
    add         r4,#0x1\n\
    strb        r1,[r2,#0x0]\n\
    add         r2,#0x1\n\
    sub         r3,#0x1\n\
    cmp         r3,#0x0\n\
    bgt         LAB_080454aa\n\
LAB_080454bc:\n\
    add         r6,r5,#0x0\n\
LAB_080454be:\n\
    ldr         r1,[sp,#0x0]\n\
    cmp         r6,r1\n\
    bls         LAB_080454d6\n\
    sub         r4,r6,r7\n\
    add         r0,r4,#0x0\n\
    add         r1,r6,#0x0\n\
    ldr         r2,[sp,#0x4]\n\
    bl          fun_080434d0\n\
    add         r5,r4,#0x0\n\
    cmp         r0,#0x0\n\
    bgt         LAB_08045478\n\
LAB_080454d6:\n\
    mov         r5,r8\n\
    ldr         r1,[sp,#0x0]\n\
    ldr         r2,[sp,#0x1c]\n\
    add         r0,r1,r2\n\
    cmp         r5,r0\n\
    bcc         LAB_08045470\n\
    b           LAB_080455b4\n\
LAB_080454e4:\n\
    ldr         r0,[sp,#0x0]\n\
    ldr         r1,[sp,#0x1c]\n\
    add         r0,r0,r1\n\
    mov         r10,r0\n\
    mov         r2,r9\n\
    ldr         r0,[sp,#0x0]\n\
    sub         r1,r2,r0\n\
    sub         r0,r6,r2\n\
    mov         r9,r0\n\
    cmp         r0,r1\n\
    ble         LAB_080454fc\n\
    add         r0,r1,#0x0\n\
LAB_080454fc:\n\
    mov         r1,r8\n\
    sub         r5,r1,r5\n\
    mov         r2,r10\n\
    sub         r2,r2,r1\n\
    mov         r8,r2\n\
    cmp         r0,#0x0\n\
    ble         LAB_08045540\n\
    sub         r1,r6,r0\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x1\n\
    bgt         LAB_08045528\n\
    lsr         r2,r0,#0x2\n\
    ldr         r4,[sp,#0x0]\n\
    add         r3,r1,#0x0\n\
LAB_08045518:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r3,#0x0]\n\
    stmia       r4!,{r0}\n\
    stmia       r3!,{r1}\n\
    sub         r2,#0x1\n\
    cmp         r2,#0x0\n\
    bgt         LAB_08045518\n\
    b           LAB_08045540\n\
LAB_08045528:\n\
    add         r4,r0,#0x0\n\
    ldr         r3,[sp,#0x0]\n\
    add         r2,r1,#0x0\n\
LAB_0804552e:\n\
    ldrb        r1,[r3,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r3,#0x0]\n\
    add         r3,#0x1\n\
    strb        r1,[r2,#0x0]\n\
    add         r2,#0x1\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_0804552e\n\
LAB_08045540:\n\
    mov         r1,r8\n\
    sub         r0,r1,r7\n\
    cmp         r0,r5\n\
    bls         LAB_0804554a\n\
    add         r0,r5,#0x0\n\
LAB_0804554a:\n\
    cmp         r0,#0x0\n\
    ble         LAB_08045586\n\
    mov         r2,r10\n\
    sub         r1,r2,r0\n\
    ldr         r2,[sp,#0xc]\n\
    cmp         r2,#0x1\n\
    bgt         LAB_0804556e\n\
    lsr         r2,r0,#0x2\n\
    add         r4,r6,#0x0\n\
    add         r3,r1,#0x0\n\
LAB_0804555e:\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,[r3,#0x0]\n\
    stmia       r4!,{r0}\n\
    stmia       r3!,{r1}\n\
    sub         r2,#0x1\n\
    cmp         r2,#0x0\n\
    bgt         LAB_0804555e\n\
    b           LAB_08045586\n\
LAB_0804556e:\n\
    add         r4,r0,#0x0\n\
    add         r3,r6,#0x0\n\
    add         r2,r1,#0x0\n\
LAB_08045574:\n\
    ldrb        r1,[r3,#0x0]\n\
    ldrb        r0,[r2,#0x0]\n\
    strb        r0,[r3,#0x0]\n\
    add         r3,#0x1\n\
    strb        r1,[r2,#0x0]\n\
    add         r2,#0x1\n\
    sub         r4,#0x1\n\
    cmp         r4,#0x0\n\
    bgt         LAB_08045574\n\
LAB_08045586:\n\
    mov         r0,r9\n\
    cmp         r0,r7\n\
    bls         LAB_0804559e\n\
    add         r1,r7,#0x0\n\
    bl          fun_080436a0\n\
    add         r1,r0,#0x0\n\
    ldr         r0,[sp,#0x0]\n\
    add         r2,r7,#0x0\n\
    ldr         r3,[sp,#0x4]\n\
    bl          fun_08045030\n\
LAB_0804559e:\n\
    cmp         r5,r7\n\
    bls         LAB_080455b4\n\
    mov         r0,r10\n\
    sub         r0,r0,r5\n\
    str         r0,[sp,#0x0]\n\
    add         r0,r5,#0x0\n\
    add         r1,r7,#0x0\n\
    bl          fun_080436a0\n\
    mov         r9,r0\n\
    b           LAB_08045044\n\
LAB_080455b4:\n\
    add         sp,#0x20\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7,pc}\n\
\n\
    ");
}
