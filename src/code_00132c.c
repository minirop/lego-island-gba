#include "defines.h"
#include "variables.h"

IS_BIT_SET(is_start_pressed, gNewKeys, START_BUTTON)
IS_BIT_SET(is_select_pressed, gNewKeys, SELECT_BUTTON)
IS_BIT_SET(is_left_pressed, gNewKeys, DPAD_LEFT)
IS_BIT_SET(is_right_pressed, gNewKeys, DPAD_RIGHT)
IS_BIT_SET(is_l_pressed, gNewKeys, L_BUTTON)
IS_BIT_SET(is_r_pressed, gNewKeys, R_BUTTON)
IS_BIT_SET(is_up_pressed, gNewKeys, DPAD_UP)
IS_BIT_SET(is_down_pressed, gNewKeys, DPAD_DOWN)
IS_BIT_SET(is_a_pressed, gNewKeys, A_BUTTON)
IS_BIT_SET(is_b_pressed, gNewKeys, B_BUTTON)

IS_BIT_SET(is_start_held, gHeldKeys, START_BUTTON)
IS_BIT_SET(is_select_held, gHeldKeys, SELECT_BUTTON)
IS_BIT_SET(is_left_held, gHeldKeys, DPAD_LEFT)
IS_BIT_SET(is_right_held, gHeldKeys, DPAD_RIGHT)
IS_BIT_SET(is_l_held, gHeldKeys, L_BUTTON)
IS_BIT_SET(is_r_held, gHeldKeys, R_BUTTON)
IS_BIT_SET(is_up_held, gHeldKeys, DPAD_UP)
IS_BIT_SET(is_down_held, gHeldKeys, DPAD_DOWN)
IS_BIT_SET(is_a_held, gHeldKeys, A_BUTTON)
IS_BIT_SET(is_b_held, gHeldKeys, B_BUTTON)

void fun_0800151c()
{
    vu16* r2 = &gHeldKeys;
    vu16* r1 = &gNewKeys;
    *r1 = 0;
    *r2 = *r1;
}
