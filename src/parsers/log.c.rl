#include "parsers/parsers.h"

enum { BRANCHES = 4 };

%%{
    machine log;

    access f.;
    variable p f.p;
    variable pe f.pe;

    action setLMargin1 {
        lmargin[1] = fpc;
    }

    action setLMargin2 {
        lmargin[2] = fpc;
    }

    action setLMargin3 {
        lmargin[3] = fpc;
    }

    action setLMargin4 {
        lmargin[4] = fpc;
    }

    action accept1 {
        f.branch = 1;
        fbreak;
    }

    action accept2 {
        f.branch = 2;
        fbreak;
    }

    action accept3 {
        f.branch = 3;
        fbreak;
    }

    action accept4 {
        f.branch = 4;
        fhold;
        fbreak;
    }

    ws =
        space | '\r\n';

    main := |*
        # Branch 1.
        # Remove custom styling, showing partially hidden text.
        /d_line[^<>=]*/ %setLMargin1 / style=[^<>]*/ => accept1;

        # Branch 2.
        # Remove control buttons from the header.
        /<span[^<>]*class=[^<>=]*[lr]_slot[^<>]*>/ >setLMargin2
        any* :>> ('</span>' ws* '</span>') => accept2;

        # Branch 3.
        # Remove progress bar title.
        /p_bar[^<>]*/ :> '"' %setLMargin3 / title="[^<>]*/ :> '"' => accept3;

        # Branch 4.
        # Remove extra whitespace between tags.
        '>' ws %setLMargin4 ws+ '<' => accept4;

        any;
    *|;
}%%

%% write data;

#ifdef __cplusplus
extern "C" {
#endif

void cParseLogInit(Fsm* fsm) {
    Fsm f = *fsm;
    %% write init;
    *fsm = f;
}

int32_t cParseLogExec(Fsm* fsm) {
    Fsm f = *fsm;//Drop one level of indirection.
    const char* const eof = f.pe;
    const char* lmargin[BRANCHES + 1] = { f.pe };
    f.branch = 0;
    f.cap[0].ptr = f.p;
    %% write exec;
    f.cap[0].len = (size_t)(lmargin[f.branch] - f.cap[0].ptr);
    *fsm = f;

    if (f.cs == %%{ write error; }%%)
        return FSM_ERROR;
    if (f.cs >= %%{ write first_final; }%%)
        return FSM_OK;
    return FSM_INCOMPLETE;
}

#ifdef __cplusplus
}
#endif
