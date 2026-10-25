#include "functions.h"
#include "gba.h"
#include "variables.h"
#include <stdio.h>

__attribute__((naked)) void fun_08005bbc()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    lsl         r2,r2,#0x10\n\
    lsr         r5,r2,#0x10\n\
    lsl         r3,r3,#0x10\n\
    lsr         r2,r3,#0x10\n\
    mov         r3,#0x0\n\
    cmp         r4,#0x1f\n\
    bls         LAB_08005be0\n\
    mov         r3,#0x80\n\
    lsl         r3,r3,#0x3\n\
    add         r0,r4,#0x0\n\
    sub         r0,#0x20\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
LAB_08005be0:\n\
    lsl         r0,r1,#0x5\n\
    add         r0,r0,r4\n\
    add         r3,r3,r0\n\
    lsl         r3,r3,#0x1\n\
    ldr         r1,DAT_08005bfc\n\
    lsl         r0,r2,#0x2\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    add         r0,r0,r3\n\
    strh        r5,[r0,#0x0]\n\
    pop         {r4,r5}\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
DAT_08005bfc:\n\
    .word 0x02007FA0\n\
    ");
}

#define SET_DAT_u8_u16(arr, idx0, idx1) (*(u16*)((u8*)arr[idx0] + idx1))

void fun_08005c00(u32 param_1, s32 param_2, u16* param_3)
{
    s32 index = 0;

    if (param_1 >= 0x20)
    {
        index = 0x400;
        param_1 -= 0x20;
    }

    index += param_2 * 0x20 + param_1;
    index <<= 1;

    if ((DAT_02007fb4 & 0x20) != 0)
    {
        SET_DAT_u8_u16(DAT_02007fa0, 0, index) = param_3[0];
    }

    if ((DAT_02007fb4 & 0x40) != 0)
    {
        SET_DAT_u8_u16(DAT_02007fa0, 1, index) = param_3[1];
    }

    if ((DAT_02007fb4 & 0x80) != 0)
    {
        SET_DAT_u8_u16(DAT_02007fa0, 2, index) = param_3[2];
    }

    if ((DAT_02007fb4 & 0x100) != 0)
    {
        SET_DAT_u8_u16(DAT_02007fa0, 3, index) = param_3[3];
    }
}

void fun_08005c7c(u32 param_1, u32 param_2, u16* param_3)
{
    u32 index = DAT_02009040 * param_2 + param_1 * 2;

#define LOOP(i)                                                       \
    if (DAT_02007f80[i])                                              \
    {                                                                 \
        param_3[i] = SET_DAT_u8_u16(DAT_02007f80, i, index) & 0xf3ff; \
    }

    LOOP(0)
    LOOP(1)
    LOOP(2)
    LOOP(3)

#undef LOOP
}

void fun_08005ce0(u16 param_1, u16 param_2)
{
    if ((DAT_02007fb4 & 1) != 0)
    {
        REG_BG0HOFS = param_1;
        REG_BG0VOFS = param_2;
    }
    if ((DAT_02007fb4 & 2) != 0)
    {
        REG_BG1HOFS = param_1;
        REG_BG1VOFS = param_2;
    }
    if ((DAT_02007fb4 & 4) != 0)
    {
        REG_BG2HOFS = param_1;
        REG_BG2VOFS = param_2;
    }
    if ((DAT_02007fb4 & 8) != 0)
    {
        REG_BG3HOFS = param_1;
        REG_BG3VOFS = param_2;
    }
}

static inline void thing(s32 val)
{
    fun_08002bcc();
    DmaFill16(3, val, BG_PLTT, BG_PLTT_SIZE);
}

s32 fun_08005d50()
{
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    REG_DISPCNT = 0x1f04;
    DAT_02009ad4 = 0;
    thing(0);
    LZ77UnCompVram(logo_screen_images[0], (void*)VRAM);
    fun_08002bcc();
    REG_DISPCNT = 0x1f04;
    DmaCopy16(3, logo_screen_palettes[0], BG_PLTT, BG_PLTT_SIZE);
    DAT_02009ad0 = 0xb4;
    return 0;
}

s32 fun_08005e0c()
{
    u32 index;

    DAT_02009ad0--;
    if (DAT_02009ad0 != 0)
    {
        if (is_b_pressed() == 0 && is_a_pressed() == 0 && is_start_pressed() == 0)
        {
            return 0;
        }

        if (DAT_02009ad4 == 0)
        {
            return 0;
        }
    }

    index = ++DAT_02009ad4;

    if (index > 2)
    {
        fun_080010d8();
    }
    else
    {
        fun_08002bcc();

        DmaFill16(3, 0, BG_PLTT, BG_PLTT_SIZE);
        if ((index & 1) != 0)
        {
            LZ77UnCompVram(logo_screen_images[index], BG_SCREEN_ADDR(20)); // unsure if BG_SCREEN_ADDR
            fun_08002bcc();
            REG_DISPCNT = 0x1f14;
            DmaCopy16(3, logo_screen_palettes[index], BG_PLTT, BG_PLTT_SIZE);
        }
        else
        {
            LZ77UnCompVram(logo_screen_images[index], BG_SCREEN_ADDR(0)); // unsure if BG_SCREEN_ADDR
            fun_08002bcc();
            REG_DISPCNT = 0x1f04;
            DmaCopy16(3, logo_screen_palettes[index], BG_PLTT, BG_PLTT_SIZE);
        }
        DAT_02009ad0 = 0xb4;
    }
    return 0;
}

s32 fun_08005f08()
{
    return 0;
}

void fun_08005f0c(u8 param_1)
{
    fun_08002bcc();

    DmaFill16(3, 0, BG_PLTT, BG_PLTT_SIZE);
    if ((param_1 & 1) != 0)
    {
        LZ77UnCompVram(logo_screen_images[param_1], BG_SCREEN_ADDR(20));
        fun_08002bcc();
        REG_DISPCNT = 0x1f14;
        DmaCopy16(3, logo_screen_palettes[param_1], BG_PLTT, BG_PLTT_SIZE);
    }
    else
    {
        LZ77UnCompVram(logo_screen_images[param_1], BG_SCREEN_ADDR(0));
        fun_08002bcc();
        REG_DISPCNT = 0x1f04;
        DmaCopy16(3, logo_screen_palettes[param_1], BG_PLTT, BG_PLTT_SIZE);
    }
}

s32 fun_08005fac()
{
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    REG_DISPCNT = 0x1f44;

    LZ77UnCompVram(&language_selection_background, (void*)0x0600a000);
    fun_08002bcc();

    DmaCopy16(3, &language_selection_pal, BG_PLTT, BG_PLTT_SIZE);
    REG_DISPCNT = 0x1f14;
    LZ77UnCompVram(&language_selection_background, (void*)0x06000000);
    fun_08002bcc();
    REG_DISPCNT = 0x1f44;
    fun_08006180();
    fun_0803c1ec(0, 0x7fff, 0);
    selected_language = 0;
    DAT_02009ad8 = fun_08002188();
    return 0;
}

void fun_08006080()
{
    if (is_left_pressed() || is_down_pressed())
    {
        fun_080016f0(0xF);
        if (selected_language)
        {
            selected_language--;
        }
        else
        {
            selected_language = 1;
        }
    }

    if (is_right_pressed() || is_up_pressed())
    {
        fun_080016f0(0xF);
        selected_language = (selected_language + 1) & 1;
    }

    if (is_start_pressed() || is_a_pressed())
    {
        fun_080016f0(1);
        if (selected_language == 1)
        {
            selected_language = 3;
        }
        fun_0803d040();
        if (DAT_02009ad8)
        {
            fun_080010d8();
        }
        else
        {
            DAT_0200254c = 0xd;
            fun_08001070(0x29);
        }
    }
}

const LevelInfo logo_screens = {
    0,
    0,
    2,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    fun_08005d50,
    fun_08005f08,
    fun_08005e0c,
    NULL,
    NULL,
    NULL,
    0,
    0,
    "Logo Screens",
    "Blank",
    "Blank",
    "Blank",
    "Blank",
};

const LevelInfo language_select = {
    0,
    0,
    4,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    fun_08005fac,
    fun_08006174,
    fun_0800612c,
    NULL,
    NULL,
    NULL,
    0,
    0,
    "Language Select",
    "Blank",
    "Blank",
    "Blank",
    "Blank",
};

s32 fun_0800612c()
{
    u8 abStack_18[20];

    fun_0803c1a4();
    sprintf(abStack_18, "%s %s", LANG_STRINGS_0875e864[selected_language], "     ");
    fun_0803c010(abStack_18, 0x37, &DAT_0865fd94);
    fun_08006080();
    return 0;
}

// for some reason, the alignment doesn't "work"
// (should add those 2 NUL bytes, linkerscript issue?)
const char bytes[2] = { 0, 0 };

s32 fun_08006174()
{
    fun_0800457c();
    return 0;
}
