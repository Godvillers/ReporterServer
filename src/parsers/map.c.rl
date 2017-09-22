#include "parsers/parsers.h"

enum { BRANCHES = 10 };

%%{
    machine map;

    access f.;
    variable p f.p;
    variable pe f.pe;

    action hold {
        fhold;
    }

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

    action setLMargin6 {
        lmargin[6] = fpc;
    }

    action setLMargin7 {
        lmargin[7] = fpc;
    }

    action setLMargin8 {
        lmargin[8] = fpc;
    }

    action setLMargin9 {
        lmargin[9] = fpc;
    }

    action setLMargin10 {
        lmargin[10] = fpc;
    }

    action setRMargin3 {
        rmargin3 = fpc;
    }

    action startCap1 {
        f.cap[1].ptr = fpc;
    }

    action endCap1 {
        f.cap[1].len = (size_t)(fpc - f.cap[1].ptr);
        fexec f.cap[0].ptr;//Restart from the beginning.
        fgoto scan;
    }

    action startCap2 {
        f.cap[2].ptr = fpc;
    }

    action endCap2 {
        f.cap[2].len = (size_t)(fpc - f.cap[2].ptr);
    }

    action startCap3 {
        f.cap[3].ptr = fpc;
    }

    action endCap3 {
        f.cap[3].len = (size_t)(fpc - f.cap[3].ptr);
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
        fexec rmargin3;
        fbreak;
    }

    action accept4 {
        f.branch = 4;
        fhold;
        fbreak;
    }

    action accept5 {
        f.branch = 5;
        fbreak;
    }

    action accept6 {
        f.branch = 6;
        fbreak;
    }

    action accept7 {
        f.branch = 7;
        fbreak;
    }

    action accept8 {
        f.branch = 8;
        fbreak;
    }

    action accept9 {
        f.branch = 9;
        fbreak;
    }

    action accept10 {
        f.branch = 10;
        fbreak;
    }

    ws =
        space | '\r\n';

    scale =
        ':' ws* 'scale' ws* '(';

    number =
        '-'? [0-9.]*;

    scan := |*
        # Branch 1.
        # Change figure height.
        /height[:=]/ '"'? %setLMargin1 ws*
        [0-9.]* >startCap2 %endCap2 => accept1;

        # Branch 2.
        # Rescale to a factor of 1.0.
        scale ws* %setLMargin2 [0-9.]* => accept2;

        # Branch 3.
        # Parse hexagon coordinates.
        'translate' ws* '(' @setLMargin3 @setRMargin3 ws*
        number >startCap2 %endCap2 <: ws* ',' ws*
        number >startCap3 %endCap3 => accept3;

        # Branch 4.
        # Replace distance in a hexagon tooltip.
        '<title>' %setLMargin4 %startCap2
        [^<>]* %endCap2 :>> (/([^<>()]*/ :> digit /[^<>()]*)/ ws* '<') => accept4;

        '<title>' %setLMargin4 %startCap2
        [^<>]* %endCap2 :> '<' => accept4;

        # Branch 5.
        # Replace .499xxx with .5.
        '.' %setLMargin5 '499' digit* => accept5;

        # Branch 6.
        # Replace x.xe-15 with 0.
        ('-'? digit) >setLMargin6 '.' digit* /e-[1-9]/i digit+ => accept6;

        # Branch 7.
        (
            # Replace .500xxx with .5.
            '.5' %setLMargin7 '00' digit*
            # Remove class="d_overlay" (possible move).
        |   (ws? 'd_overlay') >setLMargin7
        ) => accept7;

        # Branch 8.
        (
            # Remove .000xxx.
            digit %setLMargin8 '.000' digit*
            # Remove extra whitespace between tags.
        |   '>' ws %setLMargin8 ws+ '<' @hold
        ) => accept8;

        # Branch 9.
        # Replace .xxxxxx with .xx.
        '.' digit{2} %setLMargin9 digit+ => accept9;

        # Branch 10.
        (
            # Remove empty <text> tags.
            /<text[^<>]*>/ ws* '</text>'
            # Remove <line> tags (ark direction hint).
        |   '<line' any* :> '</line>'
            # Remove <div class="dir_resp"> tag (navigation response).
        |   /<div[^<>]*/ :>> 'dir_resp' any* :> '</div>'
            # Remove control buttons from the header.
        |   /<span[^<>]*class=[^<>=]*[lr]_slot[^<>]*>/
            any* :>> ('</span>' ws* '</span>')
        ) >setLMargin10 => accept10;

        any;
    *|;

    main :=
        any* :>> scale ws* [0-9.]* >startCap1 %endCap1 <: any;
}%%

%% write data;

#ifdef __cplusplus
extern "C" {
#endif

void cParseMapInit(Fsm* fsm) {
    Fsm f = *fsm;
    %% write init;
    *fsm = f;
}

int32_t cParseMapExec(Fsm* fsm) {
    Fsm f = *fsm;//Drop one level of indirection.
    const char* const eof = f.pe;
    const char* lmargin[BRANCHES + 1] = { f.pe };
    const char* rmargin3 = f.p;
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
