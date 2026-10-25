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
typedef s32 (*CallbackIntUShortUShort)(u16, u16);

typedef struct LevelInfo_0c
{
    u16 unk00;
    u16 unk02;
    u32 pad04;
    u16 unk08;
    u16 pad0a;
    void* unk0c;
    void* unk10;
    void* unk14;
    void* unk18;
    s32 unk1c;
    void* unk20;
    void* unk24;
    void* unk28;
    s32 pad2c;
    s32 pad30;
    s32 unk34;
    void* unk38;
    void* unk3c;
    s32 unk40;
    void* unk44;
    s32 unk48;
    void* unk4c;
    void* unk50;
    s32 pad54;
    s32 pad58;
    s32 pad5c;
    s32 pad60;
} LevelInfo_0c;

typedef struct LevelInfo
{
    s32 unk00;
    s32 unk04;
    s32 unk08;
    const LevelInfo_0c* unk0c;
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

typedef struct LevelInfoVec3
{
    const LevelInfo_0c* unk00;
    void* unk04;
    void* unk08;
} LevelInfoVec3;

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
    s32 pad3c;
    s32 pad40;
    s32 pad44;
    u16 unk48;
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

// size 0xEA0
typedef struct struct_02002620
{
    u32 vunk00;
    s32 vunk04;
    char unk08[16];
    u32 unk18;
    u8 unk1c;
    u8 pad1d[3];
    u8 pad20[0x7E6 - 0x20];
    u16 unk7E6[0x151];
    u16 unkA88[0x151];
    u16 unk0d2a[0x46];
    u8 pad0db6[0x8A];
    u8 unk0e40[4];
    u8 pad0e44[0x16];
    u8 unk0e5a[20];
    u8 pad0e6e[0x1a];
    u32 unk0e88;
    u32 pad0e8c[0x5];
} struct_02002620;

typedef struct struct_02000278
{
    u16 unk00;
    u16 unk02;
    u32 unk04;
    u16 unk08;
    u16 unk0a;
    u16 unk0c;
    u16 unk0e;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1c;
    void* unk20;
    s32 unk24;
    u16 unk28;
    u16 unk2a;
    s32 unk2c;
    s32 unk30;
    s32 unk34;
    s32 unk38;
    u16 unk3c;
    u16 unk3e;
} struct_02000278;

typedef struct struct_fun_08004da8
{
    u32 unk00;
    u16 unk04;
    u16 unk06;
    u16 unk08;
    u16 bgcnt_priority;
    u16 unk0c;
} struct_fun_08004da8;

typedef struct struct_03001a00
{
    u32 unk00;
    u32 unk04;
    u16 unk08;
} struct_03001a00;

typedef struct struct_080034c0
{
    u16 unk00;
    u16 unk02;
    u16 unk04;
    u16 unk06;
} struct_080034c0;

typedef struct struct_03002400_48
{
    u32 pad0;
    u16 pad4;
    u16 pad6;
    u32 pad8;
    u32 padc;
    u32 pad10;
    u16 pad14;
    u16 pad16;
    u32 pad18;
    u32 pad1c;
    u16 pad20;
} struct_03002400_48;

typedef struct struct_03002400
{
    u16 pad00;
    u16 pad02;
    u32 pad04;
    u32 pad08;
    u16 pad0c;
    u16 pad0e;
    u16 pad10;
    u16 pad12;
    u16 pad14;
    u16 pad16;
    u16 unk18;
    u16 unk1a;
    u16 unk1c;
    u16 unk1e;
    u16 pad20;
    u16 pad22;
    u16 pad24;
    u16 pad26;
    u16 pad28;
    u16 pad2a;
    u16 pad2c;
    u16 pad2e;
    u16 pad30;
    u16 pad32;
    u16 pad34;
    u16 unk36;
    u32 pad38;
    u16 pad3c;
    u16 pad3e;
    u32 pad40;
    u32 pad44;
    struct_03002400_48 pad48;
} struct_03002400;

typedef struct vec3_ptr
{
    void* unk00;
    void* unk04;
    void* unk08;
} vec3_ptr;

typedef struct level_ptrs
{
    const LevelInfo* level;
    vec3_ptr* unk04;
} level_ptrs;

typedef struct struct_0200ef30_00
{
    s32 unk00;
    s32 unk04;
    s32 unk08;
    s32 unk0c;
    s32 unk10;
    u16 unk14[4];
} struct_0200ef30_00;

typedef struct struct_0200ef30
{
    struct_0200ef30_00* unk00;
    s16 unk04;
    u16 unk06;
    u16 pad08;
    u16 pad0c;
    u16 unk10;
} struct_0200ef30;

typedef struct struct_0875678c
{
    u16 unk00;
    s16 unk02;
} struct_0875678c;

typedef struct struct_02005210
{
    char unk00[4];
    u32 unk04;
} struct_02005210;

typedef struct struct_020006a0
{
    u16* unk00;
    u16 unk04;
    u16 unk06;
    s32 unk08;
    s32 unk0c;
    u16 unk10;
    u16 unk12;
    u8 unk14;
    u8 unk15;
    u16 unk16;
    u8 unk18;
    u8 unk19[3];
    void* unk1c;
} struct_020006a0;

typedef struct struct_0877bde8
{
    u16 unk00;
    u16 unk02;
    u8 pad04;
    u8 pad05;
    u8 pad06;
    u8 pad07;
    s32 unk08;
    u8 pad0c;
    u8 pad0d;
    u8 pad0e;
    u8 pad0f;
    u16 unk10;
    u8 pad12;
    u8 pad13;
    u8 pad14;
    u8 pad15;
    u8 pad16;
    u8 pad17;
    u8 pad18;
    u8 pad19;
    u8 pad1a;
    u8 pad1b;
    u16 unk1c;
    u8 unk1e;
    u8 pad1f;
    u16 unk20;
    u8 pad22;
    u8 pad23;
    u8 pad24;
    u8 pad25;
    u8 pad26;
    u8 pad27;
    u8 pad28;
    u8 pad29;
    u8 pad2a;
    u8 pad2b;
} struct_0877bde8;

#endif
