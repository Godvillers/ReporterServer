
#line 1 "../src/parsers/log.c.rl"
#include "parsers/parsers.h"

enum { BRANCHES = 4 };


#line 72 "../src/parsers/log.c.rl"



#line 13 "../src/parsers/log.c"
static const int log_start = 70;
static const int log_first_final = 70;
static const int log_error = -1;

static const int log_en_main = 70;


#line 75 "../src/parsers/log.c.rl"

#ifdef __cplusplus
extern "C" {
#endif

void cParseLogInit(Fsm* fsm) {
    Fsm f = *fsm;
    
#line 30 "../src/parsers/log.c"
	{
	 f.cs = log_start;
	 f.ts = 0;
	 f.te = 0;
	 f.act = 0;
	}

#line 83 "../src/parsers/log.c.rl"
    *fsm = f;
}

int32_t cParseLogExec(Fsm* fsm) {
    Fsm f = *fsm;//Drop one level of indirection.
    const char* const eof = f.pe;
    const char* lmargin[BRANCHES + 1] = { f.pe };
    f.branch = 0;
    f.cap[0].ptr = f.p;
    
#line 49 "../src/parsers/log.c"
	{
	if ( ( f.p) == ( f.pe) )
		goto _test_eof;
	switch (  f.cs )
	{
tr0:
#line 70 "../src/parsers/log.c.rl"
	{{( f.p) = (( f.te))-1;}}
	goto st70;
tr34:
#line 33 "../src/parsers/log.c.rl"
	{{( f.p) = (( f.te))-1;}{
        f.branch = 2;
        {( f.p)++;  f.cs = 70; goto _out;}
    }}
	goto st70;
tr42:
#line 33 "../src/parsers/log.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 2;
        {( f.p)++;  f.cs = 70; goto _out;}
    }}
	goto st70;
tr47:
#line 43 "../src/parsers/log.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 4;
        ( f.p)--;
        {( f.p)++;  f.cs = 70; goto _out;}
    }}
	goto st70;
tr72:
#line 38 "../src/parsers/log.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 3;
        {( f.p)++;  f.cs = 70; goto _out;}
    }}
	goto st70;
tr73:
#line 70 "../src/parsers/log.c.rl"
	{ f.te = ( f.p)+1;}
	goto st70;
tr78:
#line 70 "../src/parsers/log.c.rl"
	{ f.te = ( f.p);( f.p)--;}
	goto st70;
tr80:
#line 33 "../src/parsers/log.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 2;
        {( f.p)++;  f.cs = 70; goto _out;}
    }}
	goto st70;
tr84:
#line 28 "../src/parsers/log.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 1;
        {( f.p)++;  f.cs = 70; goto _out;}
    }}
	goto st70;
st70:
#line 1 "NONE"
	{ f.ts = 0;}
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof70;
case 70:
#line 1 "NONE"
	{ f.ts = ( f.p);}
#line 118 "../src/parsers/log.c"
	switch( (*( f.p)) ) {
		case 60: goto tr74;
		case 62: goto tr75;
		case 100: goto tr76;
		case 112: goto tr77;
	}
	goto tr73;
tr74:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 16 "../src/parsers/log.c.rl"
	{
        lmargin[2] = ( f.p);
    }
	goto st71;
st71:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof71;
case 71:
#line 138 "../src/parsers/log.c"
	if ( (*( f.p)) == 115 )
		goto st0;
	goto tr78;
st0:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof0;
case 0:
	if ( (*( f.p)) == 112 )
		goto st1;
	goto tr0;
st1:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof1;
case 1:
	if ( (*( f.p)) == 97 )
		goto st2;
	goto tr0;
st2:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof2;
case 2:
	if ( (*( f.p)) == 110 )
		goto st3;
	goto tr0;
st3:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof3;
case 3:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st4;
	}
	goto st3;
st4:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof4;
case 4:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st4;
		case 108: goto st5;
	}
	goto st3;
st5:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof5;
case 5:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st6;
		case 99: goto st4;
	}
	goto st3;
st6:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof6;
case 6:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st4;
		case 115: goto st7;
	}
	goto st3;
st7:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof7;
case 7:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st4;
		case 115: goto st8;
	}
	goto st3;
st8:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof8;
case 8:
	switch( (*( f.p)) ) {
		case 61: goto st9;
		case 99: goto st4;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st3;
st9:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof9;
case 9:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st10:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof10;
case 10:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 99: goto st10;
		case 108: goto st11;
		case 114: goto st13;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st11:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof11;
case 11:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 95: goto st12;
		case 97: goto st39;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st12:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof12;
case 12:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
		case 115: goto st14;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st13:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof13;
case 13:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 95: goto st12;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st14:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof14;
case 14:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 99: goto st10;
		case 108: goto st15;
		case 114: goto st13;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st15:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof15;
case 15:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 95: goto st12;
		case 99: goto st10;
		case 108: goto st13;
		case 111: goto st16;
		case 114: goto st13;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st16:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof16;
case 16:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
		case 116: goto st17;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st17:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof17;
case 17:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto st18;
	}
	goto st17;
st18:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof18;
case 18:
	if ( (*( f.p)) == 60 )
		goto st19;
	goto st18;
st19:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof19;
case 19:
	switch( (*( f.p)) ) {
		case 47: goto st20;
		case 60: goto st19;
	}
	goto st18;
st20:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof20;
case 20:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 115: goto st21;
	}
	goto st18;
st21:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof21;
case 21:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 112: goto st22;
	}
	goto st18;
st22:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof22;
case 22:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 97: goto st23;
	}
	goto st18;
st23:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof23;
case 23:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 110: goto st24;
	}
	goto st18;
st24:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof24;
case 24:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 62: goto st25;
	}
	goto st18;
st25:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof25;
case 25:
	switch( (*( f.p)) ) {
		case 32: goto st25;
		case 60: goto st26;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st25;
	goto st18;
st26:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof26;
case 26:
	switch( (*( f.p)) ) {
		case 47: goto st27;
		case 60: goto st19;
	}
	goto st18;
st27:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof27;
case 27:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 115: goto st28;
	}
	goto st18;
st28:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof28;
case 28:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 112: goto st29;
	}
	goto st18;
st29:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof29;
case 29:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 97: goto st30;
	}
	goto st18;
st30:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof30;
case 30:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 110: goto st31;
	}
	goto st18;
st31:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof31;
case 31:
	switch( (*( f.p)) ) {
		case 60: goto st19;
		case 62: goto tr33;
	}
	goto st18;
tr33:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st72;
st72:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof72;
case 72:
#line 482 "../src/parsers/log.c"
	switch( (*( f.p)) ) {
		case 32: goto st32;
		case 60: goto st33;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st32;
	goto tr80;
st32:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof32;
case 32:
	switch( (*( f.p)) ) {
		case 32: goto st32;
		case 60: goto st33;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st32;
	goto tr34;
st33:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof33;
case 33:
	if ( (*( f.p)) == 47 )
		goto st34;
	goto tr34;
st34:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof34;
case 34:
	if ( (*( f.p)) == 115 )
		goto st35;
	goto tr34;
st35:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof35;
case 35:
	if ( (*( f.p)) == 112 )
		goto st36;
	goto tr34;
st36:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof36;
case 36:
	if ( (*( f.p)) == 97 )
		goto st37;
	goto tr34;
st37:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof37;
case 37:
	if ( (*( f.p)) == 110 )
		goto st38;
	goto tr34;
st38:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof38;
case 38:
	if ( (*( f.p)) == 62 )
		goto tr42;
	goto tr34;
st39:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof39;
case 39:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
		case 115: goto st40;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st40:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof40;
case 40:
	switch( (*( f.p)) ) {
		case 61: goto st3;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
		case 115: goto st41;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st9;
st41:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof41;
case 41:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st10;
		case 108: goto st13;
		case 114: goto st13;
	}
	goto st9;
tr75:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st73;
st73:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof73;
case 73:
#line 591 "../src/parsers/log.c"
	switch( (*( f.p)) ) {
		case 13: goto st44;
		case 32: goto st42;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 12 )
		goto st42;
	goto tr78;
st42:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof42;
case 42:
	if ( (*( f.p)) == 32 )
		goto tr45;
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr45;
	goto tr0;
tr45:
#line 24 "../src/parsers/log.c.rl"
	{
        lmargin[4] = ( f.p);
    }
	goto st43;
st43:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof43;
case 43:
#line 618 "../src/parsers/log.c"
	switch( (*( f.p)) ) {
		case 32: goto st43;
		case 60: goto tr47;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st43;
	goto tr0;
st44:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof44;
case 44:
	switch( (*( f.p)) ) {
		case 10: goto tr48;
		case 32: goto tr45;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr45;
	goto tr0;
tr48:
#line 24 "../src/parsers/log.c.rl"
	{
        lmargin[4] = ( f.p);
    }
	goto st45;
st45:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof45;
case 45:
#line 647 "../src/parsers/log.c"
	switch( (*( f.p)) ) {
		case 32: goto tr45;
		case 60: goto tr47;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr45;
	goto tr0;
tr76:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st74;
st74:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof74;
case 74:
#line 663 "../src/parsers/log.c"
	if ( (*( f.p)) == 95 )
		goto st46;
	goto tr78;
st46:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof46;
case 46:
	if ( (*( f.p)) == 108 )
		goto st47;
	goto tr0;
st47:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof47;
case 47:
	if ( (*( f.p)) == 105 )
		goto st48;
	goto tr0;
st48:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof48;
case 48:
	if ( (*( f.p)) == 110 )
		goto st49;
	goto tr0;
st49:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof49;
case 49:
	if ( (*( f.p)) == 101 )
		goto st50;
	goto tr0;
st50:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof50;
case 50:
	if ( (*( f.p)) == 32 )
		goto tr53;
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st50;
tr53:
#line 12 "../src/parsers/log.c.rl"
	{
        lmargin[1] = ( f.p);
    }
	goto st51;
st51:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof51;
case 51:
#line 714 "../src/parsers/log.c"
	switch( (*( f.p)) ) {
		case 32: goto tr53;
		case 115: goto st52;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st50;
st52:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof52;
case 52:
	switch( (*( f.p)) ) {
		case 32: goto tr53;
		case 116: goto st53;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st50;
st53:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof53;
case 53:
	switch( (*( f.p)) ) {
		case 32: goto tr53;
		case 121: goto st54;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st50;
st54:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof54;
case 54:
	switch( (*( f.p)) ) {
		case 32: goto tr53;
		case 108: goto st55;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st50;
st55:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof55;
case 55:
	switch( (*( f.p)) ) {
		case 32: goto tr53;
		case 101: goto st56;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st50;
st56:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof56;
case 56:
	switch( (*( f.p)) ) {
		case 32: goto tr53;
		case 61: goto st75;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st50;
st75:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof75;
case 75:
	switch( (*( f.p)) ) {
		case 60: goto tr84;
		case 62: goto tr84;
	}
	goto st75;
tr77:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st76;
st76:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof76;
case 76:
#line 794 "../src/parsers/log.c"
	if ( (*( f.p)) == 95 )
		goto st57;
	goto tr78;
st57:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof57;
case 57:
	if ( (*( f.p)) == 98 )
		goto st58;
	goto tr0;
st58:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof58;
case 58:
	if ( (*( f.p)) == 97 )
		goto st59;
	goto tr0;
st59:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof59;
case 59:
	if ( (*( f.p)) == 114 )
		goto st60;
	goto tr0;
st60:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof60;
case 60:
	switch( (*( f.p)) ) {
		case 34: goto st61;
		case 60: goto tr0;
		case 62: goto tr0;
	}
	goto st60;
st61:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof61;
case 61:
	if ( (*( f.p)) == 32 )
		goto tr64;
	goto tr0;
tr64:
#line 20 "../src/parsers/log.c.rl"
	{
        lmargin[3] = ( f.p);
    }
	goto st62;
st62:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof62;
case 62:
#line 846 "../src/parsers/log.c"
	if ( (*( f.p)) == 116 )
		goto st63;
	goto tr0;
st63:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof63;
case 63:
	if ( (*( f.p)) == 105 )
		goto st64;
	goto tr0;
st64:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof64;
case 64:
	if ( (*( f.p)) == 116 )
		goto st65;
	goto tr0;
st65:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof65;
case 65:
	if ( (*( f.p)) == 108 )
		goto st66;
	goto tr0;
st66:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof66;
case 66:
	if ( (*( f.p)) == 101 )
		goto st67;
	goto tr0;
st67:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof67;
case 67:
	if ( (*( f.p)) == 61 )
		goto st68;
	goto tr0;
st68:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof68;
case 68:
	if ( (*( f.p)) == 34 )
		goto st69;
	goto tr0;
st69:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof69;
case 69:
	switch( (*( f.p)) ) {
		case 34: goto tr72;
		case 60: goto tr0;
		case 62: goto tr0;
	}
	goto st69;
	}
	_test_eof70:  f.cs = 70; goto _test_eof; 
	_test_eof71:  f.cs = 71; goto _test_eof; 
	_test_eof0:  f.cs = 0; goto _test_eof; 
	_test_eof1:  f.cs = 1; goto _test_eof; 
	_test_eof2:  f.cs = 2; goto _test_eof; 
	_test_eof3:  f.cs = 3; goto _test_eof; 
	_test_eof4:  f.cs = 4; goto _test_eof; 
	_test_eof5:  f.cs = 5; goto _test_eof; 
	_test_eof6:  f.cs = 6; goto _test_eof; 
	_test_eof7:  f.cs = 7; goto _test_eof; 
	_test_eof8:  f.cs = 8; goto _test_eof; 
	_test_eof9:  f.cs = 9; goto _test_eof; 
	_test_eof10:  f.cs = 10; goto _test_eof; 
	_test_eof11:  f.cs = 11; goto _test_eof; 
	_test_eof12:  f.cs = 12; goto _test_eof; 
	_test_eof13:  f.cs = 13; goto _test_eof; 
	_test_eof14:  f.cs = 14; goto _test_eof; 
	_test_eof15:  f.cs = 15; goto _test_eof; 
	_test_eof16:  f.cs = 16; goto _test_eof; 
	_test_eof17:  f.cs = 17; goto _test_eof; 
	_test_eof18:  f.cs = 18; goto _test_eof; 
	_test_eof19:  f.cs = 19; goto _test_eof; 
	_test_eof20:  f.cs = 20; goto _test_eof; 
	_test_eof21:  f.cs = 21; goto _test_eof; 
	_test_eof22:  f.cs = 22; goto _test_eof; 
	_test_eof23:  f.cs = 23; goto _test_eof; 
	_test_eof24:  f.cs = 24; goto _test_eof; 
	_test_eof25:  f.cs = 25; goto _test_eof; 
	_test_eof26:  f.cs = 26; goto _test_eof; 
	_test_eof27:  f.cs = 27; goto _test_eof; 
	_test_eof28:  f.cs = 28; goto _test_eof; 
	_test_eof29:  f.cs = 29; goto _test_eof; 
	_test_eof30:  f.cs = 30; goto _test_eof; 
	_test_eof31:  f.cs = 31; goto _test_eof; 
	_test_eof72:  f.cs = 72; goto _test_eof; 
	_test_eof32:  f.cs = 32; goto _test_eof; 
	_test_eof33:  f.cs = 33; goto _test_eof; 
	_test_eof34:  f.cs = 34; goto _test_eof; 
	_test_eof35:  f.cs = 35; goto _test_eof; 
	_test_eof36:  f.cs = 36; goto _test_eof; 
	_test_eof37:  f.cs = 37; goto _test_eof; 
	_test_eof38:  f.cs = 38; goto _test_eof; 
	_test_eof39:  f.cs = 39; goto _test_eof; 
	_test_eof40:  f.cs = 40; goto _test_eof; 
	_test_eof41:  f.cs = 41; goto _test_eof; 
	_test_eof73:  f.cs = 73; goto _test_eof; 
	_test_eof42:  f.cs = 42; goto _test_eof; 
	_test_eof43:  f.cs = 43; goto _test_eof; 
	_test_eof44:  f.cs = 44; goto _test_eof; 
	_test_eof45:  f.cs = 45; goto _test_eof; 
	_test_eof74:  f.cs = 74; goto _test_eof; 
	_test_eof46:  f.cs = 46; goto _test_eof; 
	_test_eof47:  f.cs = 47; goto _test_eof; 
	_test_eof48:  f.cs = 48; goto _test_eof; 
	_test_eof49:  f.cs = 49; goto _test_eof; 
	_test_eof50:  f.cs = 50; goto _test_eof; 
	_test_eof51:  f.cs = 51; goto _test_eof; 
	_test_eof52:  f.cs = 52; goto _test_eof; 
	_test_eof53:  f.cs = 53; goto _test_eof; 
	_test_eof54:  f.cs = 54; goto _test_eof; 
	_test_eof55:  f.cs = 55; goto _test_eof; 
	_test_eof56:  f.cs = 56; goto _test_eof; 
	_test_eof75:  f.cs = 75; goto _test_eof; 
	_test_eof76:  f.cs = 76; goto _test_eof; 
	_test_eof57:  f.cs = 57; goto _test_eof; 
	_test_eof58:  f.cs = 58; goto _test_eof; 
	_test_eof59:  f.cs = 59; goto _test_eof; 
	_test_eof60:  f.cs = 60; goto _test_eof; 
	_test_eof61:  f.cs = 61; goto _test_eof; 
	_test_eof62:  f.cs = 62; goto _test_eof; 
	_test_eof63:  f.cs = 63; goto _test_eof; 
	_test_eof64:  f.cs = 64; goto _test_eof; 
	_test_eof65:  f.cs = 65; goto _test_eof; 
	_test_eof66:  f.cs = 66; goto _test_eof; 
	_test_eof67:  f.cs = 67; goto _test_eof; 
	_test_eof68:  f.cs = 68; goto _test_eof; 
	_test_eof69:  f.cs = 69; goto _test_eof; 

	_test_eof: {}
	if ( ( f.p) == eof )
	{
	switch (  f.cs ) {
	case 71: goto tr78;
	case 0: goto tr0;
	case 1: goto tr0;
	case 2: goto tr0;
	case 3: goto tr0;
	case 4: goto tr0;
	case 5: goto tr0;
	case 6: goto tr0;
	case 7: goto tr0;
	case 8: goto tr0;
	case 9: goto tr0;
	case 10: goto tr0;
	case 11: goto tr0;
	case 12: goto tr0;
	case 13: goto tr0;
	case 14: goto tr0;
	case 15: goto tr0;
	case 16: goto tr0;
	case 17: goto tr0;
	case 18: goto tr0;
	case 19: goto tr0;
	case 20: goto tr0;
	case 21: goto tr0;
	case 22: goto tr0;
	case 23: goto tr0;
	case 24: goto tr0;
	case 25: goto tr0;
	case 26: goto tr0;
	case 27: goto tr0;
	case 28: goto tr0;
	case 29: goto tr0;
	case 30: goto tr0;
	case 31: goto tr0;
	case 72: goto tr80;
	case 32: goto tr34;
	case 33: goto tr34;
	case 34: goto tr34;
	case 35: goto tr34;
	case 36: goto tr34;
	case 37: goto tr34;
	case 38: goto tr34;
	case 39: goto tr0;
	case 40: goto tr0;
	case 41: goto tr0;
	case 73: goto tr78;
	case 42: goto tr0;
	case 43: goto tr0;
	case 44: goto tr0;
	case 45: goto tr0;
	case 74: goto tr78;
	case 46: goto tr0;
	case 47: goto tr0;
	case 48: goto tr0;
	case 49: goto tr0;
	case 50: goto tr0;
	case 51: goto tr0;
	case 52: goto tr0;
	case 53: goto tr0;
	case 54: goto tr0;
	case 55: goto tr0;
	case 56: goto tr0;
	case 75: goto tr84;
	case 76: goto tr78;
	case 57: goto tr0;
	case 58: goto tr0;
	case 59: goto tr0;
	case 60: goto tr0;
	case 61: goto tr0;
	case 62: goto tr0;
	case 63: goto tr0;
	case 64: goto tr0;
	case 65: goto tr0;
	case 66: goto tr0;
	case 67: goto tr0;
	case 68: goto tr0;
	case 69: goto tr0;
	}
	}

	_out: {}
	}

#line 93 "../src/parsers/log.c.rl"
    f.cap[0].len = (size_t)(lmargin[f.branch] - f.cap[0].ptr);
    *fsm = f;

    if (f.cs == -1)
        return FSM_ERROR;
    if (f.cs >= 70)
        return FSM_OK;
    return FSM_INCOMPLETE;
}

#ifdef __cplusplus
}
#endif
