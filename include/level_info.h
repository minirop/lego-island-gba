#ifndef LEVEL_INFO_H
#define LEVEL_INFO_H

#include "defines.h"

struct LevelInfo {
    int unk00;
    int unk04;
    short unk08;
    short unk0a;
    void* unk0c;
    void* unk10;
    int unk14;
    int unk18;
    int unk1c;
    int unk20;
    CallbackInt unk24;
    CallbackInt unk28;
    CallbackInt unk2c;
    CallbackInt unk30;
    CallbackInt unk34;
    CallbackInt unk38;
    short unk3c;
    short unk3e;
    char name[32];
    char author1[32];
    char date1[24];
    char author2[32];
    char date2[24];
};

#endif
