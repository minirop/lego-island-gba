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
