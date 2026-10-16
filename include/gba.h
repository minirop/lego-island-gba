#ifndef GBA_H
#define GBA_H

#include "gba/defines.h"
#include "gba/io_reg.h"
#include "gba/macro.h"

#include "types.h"

typedef struct
{
    u8 unknown00;
    u8 enabled;
    u8 unknown02[2];
    u8 sendBufferPending;
    u8 unknown05;
    u8 transferReady;
    u8 serialError;
    u8 unknown08[0x0C];
    u32 sendProgress; /* 0x14 */
    s32 transferResult; /* 0x18 */
    void* sendBuffer; /* 0x1C */
    void* nextSendBuffer; /* 0x20 */
    void* receiveBuffer; /* 0x24 */
    void* nextReceiveBuffer; /* 0x28 */
} SerialState;

#define gSerialState (*(SerialState*)0x02005580)

#endif
