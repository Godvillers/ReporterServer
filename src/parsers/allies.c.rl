#include "parsers/parsers.h"

enum { BRANCHES = 5 };

%%{
    machine allies;

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

    action setLMargin5 {
        lmargin[5] = fpc;
    }

    action setRMargin1 {
        rmargin1 = fpc;
    }

    action startCap1 {
        f.cap[1].ptr = fpc;
    }

    action endCap1 {
        f.cap[1].len = (size_t)(fpc - f.cap[1].ptr);
    }

    action accept1 {
        f.branch = 1;
        fexec rmargin1;
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
        fbreak;
    }

    action accept5 {
        f.branch = 5;
        fhold;
        fbreak;
    }

    ws =
        space | '\r\n';

    class =
        /class=[^<>=]*/;

    style =
        /style=[^<>=]*/;

    cssValue =
        digit alnum*;

    main := |*
        # Branch 1.
        # Replace a dropdown menu with a profile link.
        '▼' >setLMargin1 %setRMargin1
        '</div>' any* :>> '>('
        [^<]* >startCap1 %endCap1 :>> ')<' => accept1;

        # Branch 2.
        # Widen name containers.
        style :>> 'width:' %setLMargin2 ws* cssValue => accept2;

        # Branch 3.
        # Increase font size in names.
        style :>> 'font-size:' %setLMargin3 ws* cssValue => accept3;

        # Branch 4.
        (   # Remove control buttons from the header.
            /<span[^<>]*/ class /[lr]_slot[^<>]*>/
            any* :>> ('</span>' ws* '</span>')
            # Remove personal message (friend) link.
        |   /<a[^<>]*/ class /pm_link[^<>]*>➤<\/a>/
        ) >setLMargin4 => accept4;

        # Branch 5.
        # Remove extra whitespace between tags.
        '>' ws %setLMargin5 ws+ '<' => accept5;

        any;
    *|;
}%%

%% write data;

#ifdef __cplusplus
extern "C" {
#endif

void cParseAlliesInit(Fsm* fsm) {
    Fsm f = *fsm;
    %% write init;
    *fsm = f;
}

int32_t cParseAlliesExec(Fsm* fsm) {
    Fsm f = *fsm;//Drop one level of indirection.
    const char* const eof = f.pe;
    const char* lmargin[BRANCHES + 1] = { f.pe };
    const char* rmargin1 = f.p;
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
