#ifndef TYPES_H
#define TYPES_H

#include <stdbool.h>
#include <stdint.h>

#define LANGUAGE_COUNT 8
#define STRINGS_COUNT 1732
#define ROW_OFFSET(r) (r * DISPLAY_WIDTH)
#define SCREEN_OFFSET_TRANSLATED_TITLE ROW_OFFSET(86)

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float f32;
typedef double f64;

typedef void (*Callback)();
typedef s32 (*CallbackInt)();
typedef s32 (*CallbackIntIntPtr)(s32, s32*);

typedef struct LevelInfo_s
{
    s32 unk00;
    s32 unk04;
    s32 unk08;
    void* unk0c;
    void* unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1c;
    s32 unk20;
    CallbackInt unk24;
    CallbackInt unk28;
    CallbackInt unk2c;
    CallbackInt unk30;
    CallbackInt unk34;
    CallbackInt unk38;
    s16 unk3c;
    s16 unk3e;
    s8 name[32];
    s8 author1[32];
    s8 date1[24];
    s8 author2[32];
    s8 date2[24];
} LevelInfo;

typedef struct struct_02005780_s
{
    u16 unk00;
    u16 unk02;
    s32 unk04;
    s32 unk08;
} struct_02005780;

typedef struct struct_02005ce8
{
    s8 pad[0x38];
    s32 unk38;
} struct_02005ce8;

typedef struct struct_08669620
{
    u8 unk00;
    u8 padding0[0x03];
    // addresses pointing inside the decompressed text script
    void* strings_ptr[LANGUAGE_COUNT];
    u32 unk20[3];
} struct_08669620;

typedef struct struct_020025e0
{
    u16 unk00;
    u8 padding[0x16];
    u32 unk18;
    u8 unk1c;
} struct_020025e0;

typedef struct struct_02009b10
{
    const LevelInfo* info;
    void* ptr;
} struct_02009b10;

typedef struct struct_02002620
{
    u16 unk00;
    u8 padding[0x16];
    u32 unk18;
    u8 unk1c;
    u8 pad[0xE83];
} struct_02002620;

#endif
