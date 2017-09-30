#pragma once

#include <stddef.h>
#include <stdint.h>

#define SLICE_SET_END(slice, pointer) ((slice).len = (size_t)((pointer) - (slice).ptr))

enum {
    FSM_OK         = 0,
    FSM_ERROR      = 1,
    FSM_INCOMPLETE = 2,
};

typedef struct {
    const char* ptr;
    size_t len;
} StringSlice;

typedef struct {
    StringSlice godName;
    StringSlice heroName;
    StringSlice curHp;
    StringSlice maxHp;
} Player;

typedef struct {
    const char* p;//inout
    const char* pe;//in
    const char* ts;//internal
    const char* te;//internal
    int32_t act;//internal
    int32_t cs;//internal
    uint8_t branch;//out
    StringSlice cap[4];//out
    Player players[4];//out
} Fsm;

#ifdef __cplusplus
extern "C" {
#endif

void    cParseAlliesInit(Fsm*);
int32_t cParseAlliesExec(Fsm*);
void    cParseMapInit(Fsm*);
int32_t cParseMapExec(Fsm*);
void    cParseLogInit(Fsm*);
int32_t cParseLogExec(Fsm*);

#ifdef __cplusplus
}
#endif
