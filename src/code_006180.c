#include "functions.h"
#include "gfx.h"
#include "variables.h"

void fun_08006180()
{
    fun_080036b0(0);
}

s32 fun_0800618c()
{
    if ((DAT_02009ae8 < 2) || (DAT_02009ae8 == 0xd))
    {
        DAT_02009ad0--;
        if (DAT_02009ad0 != 0)
        {
            return 0;
        }
        if (DAT_02009ae8 == 0xd)
        {
            fun_080010d8();
            return 0;
        }

        DAT_02009ad0 = 0x3c;
        if (DAT_02009ae8 == 1)
        {
            DAT_02009ae4 = 6;
            DAT_02009adc = fun_080062fc(DAT_08669620[DAT_02009ae4].strings_ptr[selected_language], 1, 0x1d);
            DAT_02009ae8 = DAT_02009ae8 + 1;
            fun_080063e4(DAT_02009ae8);
            if (DAT_02009adc == 0)
            {
                DAT_02009ae4 = DAT_02009ae4 + 1;
                DAT_02009ae8 = DAT_02009ae8 + 1;
            }
        }
        else
        {
            DAT_02009ae8 = DAT_02009ae8 + 1;
            fun_080063e4(DAT_02009ae8);
        }
    }
    else
    {
        if (IS_START_PRESSED)
        {
            fun_080010d8();
        }
        if (IS_A_PRESSED || IS_START_PRESSED)
        {
            if (DAT_02009ae8 == 0xc)
            {
                fun_0803c1a4();
                fun_080063e4(DAT_02009ae8);
                DAT_02009ae8++;
            }
            else
            {
                if (DAT_08669620[DAT_02009ae4].unk00 == 1)
                {
                    fun_0803c1ec(0x1e, 0x1e, 0x1e);
                }
                else
                {
                    fun_0803c1ec(0x7cc2, 0x7cc2, 0x7cc2);
                }
                DAT_02009adc = fun_080062fc(DAT_08669620[DAT_02009ae4].strings_ptr[selected_language], 1, 0x1d);
                fun_080063e4(DAT_02009ae8);
                if (DAT_02009adc == 0)
                {
                    DAT_02009ae8 = DAT_02009ae8 + 1;
                    DAT_02009ae4 = DAT_02009ae4 + 1;
                }
            }
        }
    }

    return 0;
}

const LevelInfo cutscene = {
    0,
    0,
    8,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    fun_08006484,
    fun_08006500,
    fun_0800618c,
    NULL,
    NULL,
    NULL,
    0,
    0,
    "CutScene",
    "Blank",
    "Blank",
    "Blank",
    "Blank",
};

__attribute__((naked)) s32 fun_080062fc(void* param_1, u16 param_2, u16 param_3)
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x20\n\
    add         r7,r0,#0x0\n\
    add         r4,r1,#0x0\n\
    lsl         r4,r4,#0x10\n\
    lsr         r4,r4,#0x10\n\
    lsl         r2,r2,#0x10\n\
    lsr         r2,r2,#0x10\n\
    mov         r8,r2\n\
    ldr         r0,DAT_08006338\n\
    ldrh        r6,[r0,#0x0]\n\
    add         r0,r7,#0x0\n\
    bl          strlen\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r10,r0\n\
    ldr         r1,DAT_0800633c\n\
    mov         r0,sp\n\
    bl          strcpy\n\
    mov         r0,#0x0\n\
    mov         r9,r0\n\
    add         r5,r4,#0x0\n\
    b           LAB_08006392\n\
\n\
.space 2\n\
\n\
DAT_08006338:\n\
    .word 0x02009ADC\n\
DAT_0800633c:\n\
    .word 0x08067050\n\
LAB_08006340:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x20\n\
    bl          strchr\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006350\n\
    mov         r0,r10\n\
    b           LAB_0800635e\n\
LAB_08006350:\n\
    add         r0,r4,#0x0\n\
    mov         r1,#0x20\n\
    bl          strchr\n\
    sub         r0,r0,r7\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
LAB_0800635e:\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    lsl         r1,r6,#0x10\n\
    asr         r2,r1,#0x10\n\
    sub         r0,r0,r2\n\
    lsl         r0,r0,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r0,r5,r0\n\
    cmp         r0,r8\n\
    bgt         LAB_0800638c\n\
    mov         r1,sp\n\
    add         r1,r9\n\
    add         r0,r7,r2\n\
    ldrb        r0,[r0,#0x0]\n\
    strb        r0,[r1,#0x0]\n\
    add         r0,r2,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r6,r0,#0x10\n\
    mov         r0,r9\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x18\n\
    lsr         r0,r0,#0x18\n\
    mov         r9,r0\n\
LAB_0800638c:\n\
    add         r0,r5,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r5,r0,#0x10\n\
LAB_08006392:\n\
    cmp         r5,r8\n\
    bls         LAB_080063b0\n\
    bl          fun_0803c1a4\n\
    ldr         r3,DAT_080063ac\n\
    mov         r0,sp\n\
    mov         r1,#0x8\n\
    mov         r2,#0x8c\n\
    bl          fun_0803c138\n\
    add         r0,r6,#0x0\n\
    b           LAB_080063ce\n\
\n\
.space 2\n\
\n\
DAT_080063ac:\n\
    .word 0x0865FD94\n\
LAB_080063b0:\n\
    lsl         r0,r6,#0x10\n\
    asr         r0,r0,#0x10\n\
    add         r4,r7,r0\n\
    ldrb        r0,[r4,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08006340\n\
    bl          fun_0803c1a4\n\
    ldr         r3,DAT_080063e0\n\
    mov         r0,sp\n\
    mov         r1,#0x8\n\
    mov         r2,#0x8c\n\
    bl          fun_0803c138\n\
    mov         r0,#0x0\n\
LAB_080063ce:\n\
    add         sp,#0x20\n\
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
DAT_080063e0:\n\
    .word 0x0865FD94\n\
    ");
}

const char* dummy_08067050 = "                              ";

const LevelInfo start_menu = {
    0,
    0,
    14,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    fun_0800650c,
    fun_080068b0,
    fun_08006824,
    NULL,
    NULL,
    NULL,
    0,
    0,
    "Start Menu",
    "Blank",
    "Blank",
    "Blank",
    "Blank",
};

__attribute__((naked)) void fun_080063e4(u8 param_1)
{
    asm("\n\
    push        {r4,lr}\n\
    lsl         r0,r0,#0x18\n\
    lsr         r4,r0,#0x18\n\
    mov         r0,#0x1\n\
    and         r0,r4\n\
    cmp         r0,#0x0\n\
    beq         LAB_08006438\n\
    ldr         r0,DAT_08006420\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    ldr         r1,DAT_08006424\n\
    bl          LZ77UnCompVram\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08006428\n\
    ldr         r0,DAT_0800642c\n\
    add         r4,r4,r0\n\
    ldr         r0,[r4,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_08006430\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_08006434\n\
    b           LAB_08006466\n\
DAT_08006420:\n\
    .word 0x0875E8A4\n\
DAT_08006424:\n\
    .word 0x0600A000\n\
DAT_08006428:\n\
    .word 0x040000D4\n\
DAT_0800642c:\n\
    .word 0x0875E8D8\n\
DAT_08006430:\n\
    .word 0x80000100\n\
DAT_08006434:\n\
    .word 0x00001F14\n\
LAB_08006438:\n\
    ldr         r0,DAT_08006470\n\
    lsl         r4,r4,#0x2\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0xc0\n\
    lsl         r1,r1,#0x13\n\
    bl          LZ77UnCompVram\n\
    bl          fun_08002bcc\n\
    ldr         r1,DAT_08006474\n\
    ldr         r0,DAT_08006478\n\
    add         r4,r4,r0\n\
    ldr         r0,[r4,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,#0xa0\n\
    lsl         r0,r0,#0x13\n\
    str         r0,[r1,#0x4]\n\
    ldr         r0,DAT_0800647c\n\
    str         r0,[r1,#0x8]\n\
    ldr         r0,[r1,#0x8]\n\
    sub         r1,#0xd4\n\
    ldr         r2,DAT_08006480\n\
LAB_08006466:\n\
    add         r0,r2,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
DAT_08006470:\n\
    .word 0x0875E8A4\n\
DAT_08006474:\n\
    .word 0x040000D4\n\
DAT_08006478:\n\
    .word 0x0875E8D8\n\
DAT_0800647c:\n\
    .word 0x80000100\n\
DAT_08006480:\n\
    .word 0x00001F04\n\
    ");
}

inline static void fun_08006484_inlined(s32 val)
{
    fun_080063e4(val);
    DAT_02009ad0 = 0x3c;
}

s32 fun_08006484(void)
{
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    REG_DISPCNT = 0x1f04;
    fun_080036b0(0);
    fun_0803c24c();
    DAT_02009ae8 = 0;
    fun_08006484_inlined(0);
    DAT_02009adc = 0;
    return 0;
}

s32 fun_08006500()
{
    fun_0800457c();
    return 0;
}

s32 fun_0800650c()
{
    s32 unk;
    s16 string_63e_len;
    s16 string_640_len;
    u8* string_ptr;

    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    REG_DISPCNT = 0x1f44;
    DmaCopy16(3, title_screen_pal, BG_PLTT, BG_PLTT_SIZE);
    LZ77UnCompVram(&title_screen_gfx, (void*)0x0600a000);
    fun_080068d4((void*)0x0600a000);
    fun_08002bcc();
    REG_DISPCNT = 0x1f54;
    DAT_02009af4 = 0;
    fun_08001aa8();

    DAT_02009aec = (fun_08002074(0) || fun_08002074(1) || fun_08002074(2)) != 0;

    if (DAT_02009aec)
    {
        DAT_02009afc = 1;
    }
    else
    {
        DAT_02009afc = DAT_02009aec;
    }

    fun_080036b0(0);
    fun_080045f0((void*)&DAT_08067190);
    DAT_02009b00 = fun_08003998(DAT_08067180);
    DAT_02009af0 = fun_08003998(DAT_08067180);
    fun_0800482c(DAT_02009af0, 0xff00, 0x100);
    DAT_02009b00->unk12 |= 0x0200;
    DAT_02009af0->unk12 |= 0x0200;

    string_63e_len = 0;
    string_ptr = DAT_08669620[0x63e].strings_ptr[selected_language];
    while (*string_ptr)
    {
        string_ptr++;
        string_63e_len++;
    }

    string_640_len = 0;
    string_ptr = DAT_08669620[0x640].strings_ptr[selected_language];
    while (*string_ptr)
    {
        string_ptr++;
        string_640_len++;
    }
    DAT_02009af8 = string_640_len;

    if (string_63e_len > string_640_len)
    {
        DAT_02009af8 = string_63e_len;
    }

    fun_0803c1ec(0, 0x7fff, 0);

    return 0;
}

__attribute__((naked)) void fun_080066cc()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     bl         is_start_pressed\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080066e2\n\
     bl         is_a_pressed\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006738\n\
LAB_080066e2:\n\
     ldr        r0,DAT_080066f4\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080066fc\n\
     ldr        r1,DAT_080066f8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08006732\n\
.space 1\n\
.space 1\n\
DAT_080066f4:\n\
     .4byte 0x02009AFC\n\
DAT_080066f8:\n\
     .4byte 0x020025D4\n\
LAB_080066fc:\n\
     mov        r0,#0x2\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800670e\n\
     ldr        r1,DAT_080067f4\n\
     mov        r0,#0x2\n\
     strb       r0,[r1,#0x0]\n\
LAB_0800670e:\n\
     mov        r0,#0x1\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006720\n\
     ldr        r1,DAT_080067f4\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_08006720:\n\
     mov        r0,#0x0\n\
     bl         fun_08002074\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08006732\n\
     ldr        r1,DAT_080067f4\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
LAB_08006732:\n\
     mov        r0,#0x5\n\
     bl         fun_08001070\n\
LAB_08006738:\n\
     bl         is_up_pressed\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800674e\n\
     ldr        r1,DAT_080067f8\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0800674e\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
LAB_0800674e:\n\
     bl         is_down_pressed\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800676c\n\
     ldr        r1,DAT_080067f8\n\
     ldrb       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0800676c\n\
     ldr        r0,DAT_080067fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0800676c\n\
     mov        r0,#0x1\n\
     strb       r0,[r1,#0x0]\n\
LAB_0800676c:\n\
     ldr        r6,DAT_08006800\n\
     ldr        r4,DAT_08006804\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08006808\n\
     add        r1,r6,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r5,DAT_0800680c\n\
     mov        r1,#0x18\n\
     mov        r2,#0x1e\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
     ldr        r0,DAT_080067fc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080067a6\n\
     ldr        r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_08006810\n\
     add        r1,r6,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x18\n\
     mov        r2,#0x28\n\
     add        r3,r5,#0x0\n\
     bl         fun_0803c138\n\
LAB_080067a6:\n\
     ldr        r0,DAT_08006814\n\
     ldr        r4,[r0,#0x0]\n\
     ldr        r2,DAT_08006818\n\
     ldr        r3,DAT_080067f8\n\
     ldrb       r5,[r3,#0x0]\n\
     lsl        r0,r5,#0x2\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x2]\n\
     ldrb       r1,[r3,#0x0]\n\
     lsl        r0,r1,#0x2\n\
     add        r1,r2,#0x1\n\
     add        r0,r0,r1\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     ldr        r0,DAT_0800681c\n\
     ldr        r4,[r0,#0x0]\n\
     ldrb       r5,[r3,#0x0]\n\
     lsl        r1,r5,#0x2\n\
     add        r0,r2,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r0,DAT_08006820\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r0,r5]\n\
     lsl        r0,r0,#0x3\n\
     ldrb       r1,[r1,#0x0]\n\
     add        r0,r1,r0\n\
     add        r0,#0x4\n\
     strh       r0,[r4,#0x2]\n\
     ldrb       r3,[r3,#0x0]\n\
     lsl        r0,r3,#0x2\n\
     add        r2,#0x3\n\
     add        r0,r0,r2\n\
     ldrb       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080067f4:\n\
     .4byte 0x02005570\n\
DAT_080067f8:\n\
     .4byte 0x02009AFC\n\
DAT_080067fc:\n\
     .4byte 0x02009AEC\n\
DAT_08006800:\n\
     .4byte 0x08669620\n\
DAT_08006804:\n\
     .4byte 0x020025B4\n\
DAT_08006808:\n\
     .4byte 0x00012BA4\n\
DAT_0800680c:\n\
     .4byte 0x0865FD94\n\
DAT_08006810:\n\
     .4byte 0x00012C04\n\
DAT_08006814:\n\
     .4byte 0x02009B00\n\
DAT_08006818:\n\
     .4byte 0x0877B970\n\
DAT_0800681c:\n\
     .4byte 0x02009AF0\n\
DAT_08006820:\n\
     .4byte 0x02009AF8\n\
    ");
}

s32 fun_08006824()
{
    char dummy[0x20];

    fun_0803c1a4();

    if (DAT_02009af4 != 0)
    {
        fun_080066cc();
    }
    else
    {
        if (is_start_pressed() || is_a_pressed())
        {
            DAT_02009af4 = 1;
            DAT_02009b00->unk12 &= 0xfdff;
            DAT_02009af0->unk12 &= 0xfdff;
            LZ77UnCompVram(&start_menu_gfx, (void*)VRAM);
            fun_080068d4((void*)VRAM);
            fun_08002bcc();
            REG_DISPCNT = 0x1f44;
        }
    }

    return 0;
}

s32 fun_080068b0()
{
    fun_08003b00(DAT_02009b00);
    fun_08003b00(DAT_02009af0);
    fun_0800457c();
    return 0;
}

void fun_080068d4(void* param_1)
{
    if (translated_title_images[selected_language] != NULL)
    {
        LZ77UnCompVram(translated_title_images[selected_language],
            (param_1 + SCREEN_OFFSET_TRANSLATED_TITLE));
    }
}
