#ifndef FRUCTUS_H
#define FRUCTUS_H

typedef enum {
    FRUCTUS_DEVELOMPENT,
    FRUCTUS_BUSINESS,
    FRUCTUS_ADMINSTRATION,
    FRUCTUS_BREAK,
    FRUCTUS_TINKERING,
    FRUCTUS_STATE_COUNT
} FructusState;

void fructus_init(void);
void fructus_shutdown(void);
void fructus_tick(void);
void fructus_set_state(FructusState state);

const char *fructus_state_name(void);
long fructus_session_seconds(void);

#endif
