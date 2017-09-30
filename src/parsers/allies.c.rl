#include "parsers/parsers.h"

enum { BRANCHES = 4 };

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

    action setRMargin1 {
        rmargin1 = fpc;
    }

    action startCap1 {
        f.cap[1].ptr = fpc;
    }

    action endCap1 {
        SLICE_SET_END(f.cap[1], fpc);
    }

    action startCap2 {
        f.cap[2].ptr = fpc;
    }

    action endCap2 {
        SLICE_SET_END(f.cap[2], fpc);
    }

    action startHeroName {
        f.players[playerNumber].heroName.ptr = fpc;
    }

    action endHeroName {
        SLICE_SET_END(f.players[playerNumber].heroName, fpc);
    }

    action startGodName {
        f.players[playerNumber].godName.ptr = fpc;
    }

    action endGodName {
        SLICE_SET_END(f.players[playerNumber].godName, fpc);
    }

    action gotoPlayer {
        f.cap[1].len = f.cap[2].len = 0;
        fgoto player;
    }

    action setPlayerNumber {
        playerNumber = (fc - '1') & 0x3;//0-based.
    }

    action accept1 {
        f.branch = 1;
        f.players[playerNumber].curHp = f.cap[1];
        f.players[playerNumber].maxHp = f.cap[2];
        f.cap[1] = f.players[playerNumber].godName;
        fexec rmargin1;
        fnext main;
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

    span =
        '<span' any* :> '>';

    player := (
        # Health / Max Health.
        any* :>> span
        ws* (
            digit+ >startCap1 %endCap1
            ws* '/' ws*
            digit+ >startCap2 %endCap2
        )? <: any* :> '</'

        # №. Hero Name.
        any* :>> span
        ws* digit @setPlayerNumber
        ws* '.'
        ws* <: any* >startHeroName %endHeroName :> '<'

        # (God Name).
        any* :>> span
        ws* '('
        ws* <: any* >startGodName :>> (')' @endGodName ws* '<') @accept1
    ) $!{ fexec rmargin1; fgoto main; };

    class =
        ws /class="[^"]*/;

    main := |*
        # Branch 1.
        # Replace a dropdown menu with a profile link.
        '▼' >setLMargin1 ws* %setRMargin1 '</div>' => gotoPlayer;

        # Branch 2.
        # Remove custom styles (including eGUI+'s blacklist styling) and a blacklist tooltip.
        ws >setLMargin2 ('style' | 'title') /=".*/ :> '"' => accept2;

        # Branch 3.
        (   # Remove control buttons from the header.
            /<[^<>]*/ class /[lr]_slot.*/ :>> ('</span>' ws* '</span>')
            # Remove a personal message (friend) link.
        |   /<a[^<>]*/ class /pm_link.*/ :> '</a>'
            # Remove eGUI+'s blacklist settings button.
        |   /<[^<>]*id="e_ally_blacklist.*/ :> '</span>'
        ) >setLMargin3 => accept3;

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
    int playerNumber = 0;
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
