#ifndef LEVEL_INFO_H
#define LEVEL_INFO_H

#include "defines.h"

typedef struct LevelInfo_s {
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

#endif
