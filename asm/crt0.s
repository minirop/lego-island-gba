.syntax unified
.arm

.global Init
Init:
	b crt0
	.include "asm/rom_header.inc"

.global crt0
crt0:
	mov r0, #0xd2
	msr cpsr_fc, r0
	ldr sp, IRQStackBottom
	mov r0, #0x1f
	msr cpsr_fc, r0
	ldr sp, unk_03007F00
	ldr r1, unk_03007FFC
	adr r0, GlobalIRQHandler
	str r0, [r1]
	ldr r1, AgbMain_ptr
	mov lr, pc
	bx r1
	b crt0
unk_03007F00:
	.4byte 0x03007F00
IRQStackBottom:
	.4byte 0x03007FA0

.byte 0x01, 0x00, 0x2d, 0xe9, 0x00, 0x00, 0x0f, 0xe1
.byte 0x80, 0x00, 0xc0, 0xe3, 0x00, 0xf0, 0x29, 0xe1
.byte 0x01, 0x00, 0xbd, 0xe8, 0x1e, 0xff, 0x2f, 0xe1
.byte 0x01, 0x00, 0x2d, 0xe9, 0x00, 0x00, 0x0f, 0xe1
.byte 0x80, 0x00, 0x80, 0xe3, 0x00, 0xf0, 0x29, 0xe1
.byte 0x01, 0x00, 0xbd, 0xe8, 0x1e, 0xff, 0x2f, 0xe1

unk_03007FFC:
	.4byte 0x03007FFC
AgbMain_ptr:
	.4byte 0x08000301

.global GlobalIRQHandler
GlobalIRQHandler:
    mov         r3,#0x4000000
    add         r3,r3,#0x200
    ldr         r2,[r3,#0x0]
    ldrh        r1,[r3,#0x8]
    mrs         r0,spsr
    stmdb       sp!,{r0,r1,r2,r3,lr}
    mov         r0,#0x1
    strh        r0,[r3,#0x8]
    and         r1,r2,r2, lsr #0x10
    mov         r12,#0x0
    ands        r0,r1,#0xc0
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x1
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x10
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x2
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x100
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x200
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x400
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x800
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x1000
    bne         LAB_080001d4
    add         r12,r12,#0x4
    ands        r0,r1,#0x2000
    strbne      r0,[r3,#-0x17c]
LAB_080001d0:
    bne         LAB_080001d0
LAB_080001d4:
    strh        r0,[r3,#0x2]
    ldr         r1,DAT_08000238
    bic         r2,r2,r0
    and         r1,r1,r2
    strh        r1,[r3,#0x0]
    mrs         r3,cpsr
    bic         r3,r3,#0xdf
    orr         r3,r3,#0x1f
    msr         cpsr_cf,r3
    ldr         r1,DAT_0800023c
    add         r1,r1,r12
    ldr         r0,[r1,#0x0]
    stmdb       sp!,{lr}
    adr         lr,LAB_8000210
    bx          r0
LAB_8000210:
    ldmia       sp!,{lr}
    mrs         r3,cpsr
    bic         r3,r3,#0xdf
    orr         r3,r3,#0x92
    msr         cpsr_cf,r3
    ldmia       sp!,{r0,r1,r2,r3,lr}
    strh        r2,[r3,#0x0]
    strh        r1,[r3,#0x8]
    msr         spsr_cf,r0
    bx          lr
DAT_08000238:
    .4byte 0x000020D0
DAT_0800023c:
    .4byte 0x020057F0

