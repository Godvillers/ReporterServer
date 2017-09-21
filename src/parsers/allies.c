
#line 1 "../src/parsers/allies.c.rl"
#include "parsers/parsers.h"

enum { BRANCHES = 5 };


#line 106 "../src/parsers/allies.c.rl"



#line 13 "../src/parsers/allies.c"
static const int allies_start = 127;
static const int allies_first_final = 127;
static const int allies_error = -1;

static const int allies_en_main = 127;


#line 109 "../src/parsers/allies.c.rl"

#ifdef __cplusplus
extern "C" {
#endif

void cParseAlliesInit(Fsm* fsm) {
    Fsm f = *fsm;
    
#line 30 "../src/parsers/allies.c"
	{
	 f.cs = allies_start;
	 f.ts = 0;
	 f.te = 0;
	 f.act = 0;
	}

#line 117 "../src/parsers/allies.c.rl"
    *fsm = f;
}

int32_t cParseAlliesExec(Fsm* fsm) {
    Fsm f = *fsm;//Drop one level of indirection.
    const char* const eof = f.pe;
    const char* lmargin[BRANCHES + 1] = { f.pe };
    const char* rmargin1 = f.p;
    f.branch = 0;
    f.cap[0].ptr = f.p;
    
#line 50 "../src/parsers/allies.c"
	{
	if ( ( f.p) == ( f.pe) )
		goto _test_eof;
	switch (  f.cs )
	{
tr0:
#line 104 "../src/parsers/allies.c.rl"
	{{( f.p) = (( f.te))-1;}}
	goto st127;
tr14:
#line 44 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 1;
        {( f.p) = (( rmargin1))-1;}
        {( f.p)++;  f.cs = 127; goto _out;}
    }}
	goto st127;
tr40:
#line 60 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 4;
        {( f.p)++;  f.cs = 127; goto _out;}
    }}
	goto st127;
tr75:
#line 60 "../src/parsers/allies.c.rl"
	{{( f.p) = (( f.te))-1;}{
        f.branch = 4;
        {( f.p)++;  f.cs = 127; goto _out;}
    }}
	goto st127;
tr87:
#line 65 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 5;
        ( f.p)--;
        {( f.p)++;  f.cs = 127; goto _out;}
    }}
	goto st127;
tr111:
#line 1 "NONE"
	{	switch(  f.act ) {
	case 2:
	{{( f.p) = (( f.te))-1;}
        f.branch = 2;
        {( f.p)++;  f.cs = 127; goto _out;}
    }
	break;
	case 3:
	{{( f.p) = (( f.te))-1;}
        f.branch = 3;
        {( f.p)++;  f.cs = 127; goto _out;}
    }
	break;
	default:
	{{( f.p) = (( f.te))-1;}}
	break;
	}
	}
	goto st127;
tr144:
#line 104 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;}
	goto st127;
tr149:
#line 104 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p);( f.p)--;}
	goto st127;
tr152:
#line 60 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 4;
        {( f.p)++;  f.cs = 127; goto _out;}
    }}
	goto st127;
tr156:
#line 55 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 3;
        {( f.p)++;  f.cs = 127; goto _out;}
    }}
	goto st127;
tr157:
#line 50 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 2;
        {( f.p)++;  f.cs = 127; goto _out;}
    }}
	goto st127;
st127:
#line 1 "NONE"
	{ f.ts = 0;}
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof127;
case 127:
#line 1 "NONE"
	{ f.ts = ( f.p);}
#line 148 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case -30: goto tr145;
		case 60: goto tr146;
		case 62: goto tr147;
		case 115: goto tr148;
	}
	goto tr144;
tr145:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 12 "../src/parsers/allies.c.rl"
	{
        lmargin[1] = ( f.p);
    }
	goto st128;
st128:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof128;
case 128:
#line 168 "../src/parsers/allies.c"
	if ( (*( f.p)) == -106 )
		goto st0;
	goto tr149;
st0:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof0;
case 0:
	if ( (*( f.p)) == -68 )
		goto st1;
	goto tr0;
st1:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof1;
case 1:
	if ( (*( f.p)) == 60 )
		goto tr2;
	goto tr0;
tr2:
#line 32 "../src/parsers/allies.c.rl"
	{
        rmargin1 = ( f.p);
    }
	goto st2;
st2:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof2;
case 2:
#line 196 "../src/parsers/allies.c"
	if ( (*( f.p)) == 47 )
		goto st3;
	goto tr0;
st3:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof3;
case 3:
	if ( (*( f.p)) == 100 )
		goto st4;
	goto tr0;
st4:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof4;
case 4:
	if ( (*( f.p)) == 105 )
		goto st5;
	goto tr0;
st5:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof5;
case 5:
	if ( (*( f.p)) == 118 )
		goto st6;
	goto tr0;
st6:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof6;
case 6:
	if ( (*( f.p)) == 62 )
		goto st7;
	goto tr0;
st7:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof7;
case 7:
	if ( (*( f.p)) == 62 )
		goto st8;
	goto st7;
st8:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof8;
case 8:
	switch( (*( f.p)) ) {
		case 40: goto st9;
		case 62: goto st8;
	}
	goto st7;
st9:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof9;
case 9:
	switch( (*( f.p)) ) {
		case 41: goto tr11;
		case 60: goto tr0;
	}
	goto tr10;
tr10:
#line 36 "../src/parsers/allies.c.rl"
	{
        f.cap[1].ptr = ( f.p);
    }
	goto st10;
st10:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof10;
case 10:
#line 263 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 41: goto tr13;
		case 60: goto tr0;
	}
	goto st10;
tr11:
#line 36 "../src/parsers/allies.c.rl"
	{
        f.cap[1].ptr = ( f.p);
    }
#line 40 "../src/parsers/allies.c.rl"
	{
        f.cap[1].len = (size_t)(( f.p) - f.cap[1].ptr);
    }
	goto st11;
tr13:
#line 40 "../src/parsers/allies.c.rl"
	{
        f.cap[1].len = (size_t)(( f.p) - f.cap[1].ptr);
    }
	goto st11;
st11:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof11;
case 11:
#line 289 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 41: goto tr13;
		case 60: goto tr14;
	}
	goto st10;
tr146:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 24 "../src/parsers/allies.c.rl"
	{
        lmargin[4] = ( f.p);
    }
	goto st129;
st129:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof129;
case 129:
#line 307 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 97: goto st12;
		case 115: goto st38;
	}
	goto tr149;
st12:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof12;
case 12:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st13;
	}
	goto st12;
st13:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof13;
case 13:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st13;
		case 108: goto st14;
	}
	goto st12;
st14:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof14;
case 14:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st15;
		case 99: goto st13;
	}
	goto st12;
st15:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof15;
case 15:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st13;
		case 115: goto st16;
	}
	goto st12;
st16:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof16;
case 16:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st13;
		case 115: goto st17;
	}
	goto st12;
st17:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof17;
case 17:
	switch( (*( f.p)) ) {
		case 61: goto st18;
		case 99: goto st13;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st12;
st18:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof18;
case 18:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st19:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof19;
case 19:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 108: goto st20;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st20:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof20;
case 20:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 97: goto st21;
		case 99: goto st19;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st21:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof21;
case 21:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 112: goto st22;
		case 115: goto st36;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st22:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof22;
case 22:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 109: goto st23;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st23:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof23;
case 23:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 95: goto st24;
		case 99: goto st19;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st24:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof24;
case 24:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 108: goto st25;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st25:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof25;
case 25:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 105: goto st26;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st26:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof26;
case 26:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 110: goto st27;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st27:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof27;
case 27:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 107: goto st28;
		case 112: goto st22;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st28:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof28;
case 28:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto st29;
	}
	goto st28;
st29:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof29;
case 29:
	if ( (*( f.p)) == -30 )
		goto st30;
	goto tr0;
st30:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof30;
case 30:
	if ( (*( f.p)) == -98 )
		goto st31;
	goto tr0;
st31:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof31;
case 31:
	if ( (*( f.p)) == -92 )
		goto st32;
	goto tr0;
st32:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof32;
case 32:
	if ( (*( f.p)) == 60 )
		goto st33;
	goto tr0;
st33:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof33;
case 33:
	if ( (*( f.p)) == 47 )
		goto st34;
	goto tr0;
st34:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof34;
case 34:
	if ( (*( f.p)) == 97 )
		goto st35;
	goto tr0;
st35:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof35;
case 35:
	if ( (*( f.p)) == 62 )
		goto tr40;
	goto tr0;
st36:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof36;
case 36:
	switch( (*( f.p)) ) {
		case 61: goto st12;
		case 99: goto st19;
		case 112: goto st22;
		case 115: goto st37;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st18;
st37:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof37;
case 37:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st19;
		case 112: goto st22;
	}
	goto st18;
st38:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof38;
case 38:
	if ( (*( f.p)) == 112 )
		goto st39;
	goto tr0;
st39:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof39;
case 39:
	if ( (*( f.p)) == 97 )
		goto st40;
	goto tr0;
st40:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof40;
case 40:
	if ( (*( f.p)) == 110 )
		goto st41;
	goto tr0;
st41:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof41;
case 41:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st42;
	}
	goto st41;
st42:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof42;
case 42:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st42;
		case 108: goto st43;
	}
	goto st41;
st43:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof43;
case 43:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st44;
		case 99: goto st42;
	}
	goto st41;
st44:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof44;
case 44:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st42;
		case 115: goto st45;
	}
	goto st41;
st45:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof45;
case 45:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st42;
		case 115: goto st46;
	}
	goto st41;
st46:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof46;
case 46:
	switch( (*( f.p)) ) {
		case 61: goto st47;
		case 99: goto st42;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st41;
st47:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof47;
case 47:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st48:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof48;
case 48:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 99: goto st48;
		case 108: goto st49;
		case 114: goto st51;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st49:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof49;
case 49:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 95: goto st50;
		case 97: goto st77;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st50:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof50;
case 50:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
		case 115: goto st52;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st51:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof51;
case 51:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 95: goto st50;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st52:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof52;
case 52:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 99: goto st48;
		case 108: goto st53;
		case 114: goto st51;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st53:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof53;
case 53:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 95: goto st50;
		case 99: goto st48;
		case 108: goto st51;
		case 111: goto st54;
		case 114: goto st51;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st54:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof54;
case 54:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
		case 116: goto st55;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st55:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof55;
case 55:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto st56;
	}
	goto st55;
st56:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof56;
case 56:
	if ( (*( f.p)) == 60 )
		goto st57;
	goto st56;
st57:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof57;
case 57:
	switch( (*( f.p)) ) {
		case 47: goto st58;
		case 60: goto st57;
	}
	goto st56;
st58:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof58;
case 58:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 115: goto st59;
	}
	goto st56;
st59:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof59;
case 59:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 112: goto st60;
	}
	goto st56;
st60:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof60;
case 60:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 97: goto st61;
	}
	goto st56;
st61:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof61;
case 61:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 110: goto st62;
	}
	goto st56;
st62:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof62;
case 62:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 62: goto st63;
	}
	goto st56;
st63:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof63;
case 63:
	switch( (*( f.p)) ) {
		case 32: goto st63;
		case 60: goto st64;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st63;
	goto st56;
st64:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof64;
case 64:
	switch( (*( f.p)) ) {
		case 47: goto st65;
		case 60: goto st57;
	}
	goto st56;
st65:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof65;
case 65:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 115: goto st66;
	}
	goto st56;
st66:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof66;
case 66:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 112: goto st67;
	}
	goto st56;
st67:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof67;
case 67:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 97: goto st68;
	}
	goto st56;
st68:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof68;
case 68:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 110: goto st69;
	}
	goto st56;
st69:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof69;
case 69:
	switch( (*( f.p)) ) {
		case 60: goto st57;
		case 62: goto tr74;
	}
	goto st56;
tr74:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st130;
st130:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof130;
case 130:
#line 929 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st70;
		case 60: goto st71;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st70;
	goto tr152;
st70:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof70;
case 70:
	switch( (*( f.p)) ) {
		case 32: goto st70;
		case 60: goto st71;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st70;
	goto tr75;
st71:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof71;
case 71:
	if ( (*( f.p)) == 47 )
		goto st72;
	goto tr75;
st72:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof72;
case 72:
	if ( (*( f.p)) == 115 )
		goto st73;
	goto tr75;
st73:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof73;
case 73:
	if ( (*( f.p)) == 112 )
		goto st74;
	goto tr75;
st74:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof74;
case 74:
	if ( (*( f.p)) == 97 )
		goto st75;
	goto tr75;
st75:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof75;
case 75:
	if ( (*( f.p)) == 110 )
		goto st76;
	goto tr75;
st76:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof76;
case 76:
	if ( (*( f.p)) == 62 )
		goto tr40;
	goto tr75;
st77:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof77;
case 77:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
		case 115: goto st78;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st78:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof78;
case 78:
	switch( (*( f.p)) ) {
		case 61: goto st41;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
		case 115: goto st79;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st47;
st79:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof79;
case 79:
	switch( (*( f.p)) ) {
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st48;
		case 108: goto st51;
		case 114: goto st51;
	}
	goto st47;
tr147:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st131;
st131:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof131;
case 131:
#line 1038 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 13: goto st82;
		case 32: goto st80;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 12 )
		goto st80;
	goto tr149;
st80:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof80;
case 80:
	if ( (*( f.p)) == 32 )
		goto tr85;
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr85;
	goto tr0;
tr85:
#line 28 "../src/parsers/allies.c.rl"
	{
        lmargin[5] = ( f.p);
    }
	goto st81;
st81:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof81;
case 81:
#line 1065 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st81;
		case 60: goto tr87;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st81;
	goto tr0;
st82:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof82;
case 82:
	switch( (*( f.p)) ) {
		case 10: goto tr88;
		case 32: goto tr85;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr85;
	goto tr0;
tr88:
#line 28 "../src/parsers/allies.c.rl"
	{
        lmargin[5] = ( f.p);
    }
	goto st83;
st83:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof83;
case 83:
#line 1094 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto tr85;
		case 60: goto tr87;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr85;
	goto tr0;
tr148:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 104 "../src/parsers/allies.c.rl"
	{ f.act = 6;}
	goto st132;
st132:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof132;
case 132:
#line 1112 "../src/parsers/allies.c"
	if ( (*( f.p)) == 116 )
		goto st84;
	goto tr149;
st84:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof84;
case 84:
	if ( (*( f.p)) == 121 )
		goto st85;
	goto tr0;
st85:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof85;
case 85:
	if ( (*( f.p)) == 108 )
		goto st86;
	goto tr0;
st86:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof86;
case 86:
	if ( (*( f.p)) == 101 )
		goto st87;
	goto tr0;
st87:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof87;
case 87:
	if ( (*( f.p)) == 61 )
		goto st88;
	goto tr0;
st88:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof88;
case 88:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st89:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof89;
case 89:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 111: goto st90;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st90:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof90;
case 90:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 110: goto st91;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st91:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof91;
case 91:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 116: goto st92;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st92:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof92;
case 92:
	switch( (*( f.p)) ) {
		case 45: goto st93;
		case 102: goto st89;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st93:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof93;
case 93:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 115: goto st94;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st94:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof94;
case 94:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 105: goto st95;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st95:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof95;
case 95:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 119: goto st96;
		case 122: goto st115;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st96:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof96;
case 96:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 105: goto st97;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st97:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof97;
case 97:
	switch( (*( f.p)) ) {
		case 100: goto st98;
		case 102: goto st89;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st98:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof98;
case 98:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 116: goto st99;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st99:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof99;
case 99:
	switch( (*( f.p)) ) {
		case 102: goto st89;
		case 104: goto st100;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st100:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof100;
case 100:
	switch( (*( f.p)) ) {
		case 58: goto st101;
		case 102: goto st89;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st101:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof101;
case 101:
	switch( (*( f.p)) ) {
		case 32: goto tr108;
		case 102: goto st103;
	}
	if ( (*( f.p)) < 48 ) {
		if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
			goto tr108;
	} else if ( (*( f.p)) > 57 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else
		goto tr109;
	goto st102;
st102:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof102;
case 102:
	if ( (*( f.p)) == 102 )
		goto st103;
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st103:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof103;
case 103:
	switch( (*( f.p)) ) {
		case 102: goto st103;
		case 111: goto st104;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st104:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof104;
case 104:
	switch( (*( f.p)) ) {
		case 102: goto st103;
		case 110: goto st105;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st105:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof105;
case 105:
	switch( (*( f.p)) ) {
		case 102: goto st103;
		case 116: goto st106;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st106:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof106;
case 106:
	switch( (*( f.p)) ) {
		case 45: goto st107;
		case 102: goto st103;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st107:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof107;
case 107:
	switch( (*( f.p)) ) {
		case 102: goto st103;
		case 115: goto st108;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st108:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof108;
case 108:
	switch( (*( f.p)) ) {
		case 102: goto st103;
		case 105: goto st109;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st109:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof109;
case 109:
	switch( (*( f.p)) ) {
		case 102: goto st103;
		case 122: goto st110;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st110:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof110;
case 110:
	switch( (*( f.p)) ) {
		case 101: goto st111;
		case 102: goto st103;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st111:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof111;
case 111:
	switch( (*( f.p)) ) {
		case 58: goto st112;
		case 102: goto st103;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st102;
st112:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof112;
case 112:
	if ( (*( f.p)) == 32 )
		goto tr121;
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr122;
	} else if ( (*( f.p)) >= 9 )
		goto tr121;
	goto tr111;
tr121:
#line 20 "../src/parsers/allies.c.rl"
	{
        lmargin[3] = ( f.p);
    }
	goto st113;
st113:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof113;
case 113:
#line 1446 "../src/parsers/allies.c"
	if ( (*( f.p)) == 32 )
		goto st113;
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto st133;
	} else if ( (*( f.p)) >= 9 )
		goto st113;
	goto tr111;
tr122:
#line 20 "../src/parsers/allies.c.rl"
	{
        lmargin[3] = ( f.p);
    }
	goto st133;
st133:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof133;
case 133:
#line 1465 "../src/parsers/allies.c"
	if ( (*( f.p)) < 65 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto st133;
	} else if ( (*( f.p)) > 90 ) {
		if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
			goto st133;
	} else
		goto st133;
	goto tr156;
tr108:
#line 16 "../src/parsers/allies.c.rl"
	{
        lmargin[2] = ( f.p);
    }
	goto st114;
st114:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof114;
case 114:
#line 1485 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st114;
		case 102: goto st103;
	}
	if ( (*( f.p)) < 48 ) {
		if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
			goto st114;
	} else if ( (*( f.p)) > 57 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else
		goto tr126;
	goto st102;
tr109:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 16 "../src/parsers/allies.c.rl"
	{
        lmargin[2] = ( f.p);
    }
#line 50 "../src/parsers/allies.c.rl"
	{ f.act = 2;}
	goto st134;
tr126:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 50 "../src/parsers/allies.c.rl"
	{ f.act = 2;}
	goto st134;
st134:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof134;
case 134:
#line 1519 "../src/parsers/allies.c"
	if ( (*( f.p)) == 102 )
		goto tr158;
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr126;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr126;
		} else if ( (*( f.p)) >= 65 )
			goto tr126;
	} else
		goto tr157;
	goto st102;
tr158:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 50 "../src/parsers/allies.c.rl"
	{ f.act = 2;}
	goto st135;
st135:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof135;
case 135:
#line 1544 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 102: goto tr158;
		case 111: goto tr159;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr126;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr126;
		} else if ( (*( f.p)) >= 65 )
			goto tr126;
	} else
		goto tr157;
	goto st102;
tr159:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 50 "../src/parsers/allies.c.rl"
	{ f.act = 2;}
	goto st136;
st136:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof136;
case 136:
#line 1571 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 102: goto tr158;
		case 110: goto tr160;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr126;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr126;
		} else if ( (*( f.p)) >= 65 )
			goto tr126;
	} else
		goto tr157;
	goto st102;
tr160:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 50 "../src/parsers/allies.c.rl"
	{ f.act = 2;}
	goto st137;
st137:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof137;
case 137:
#line 1598 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 102: goto tr158;
		case 116: goto tr161;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr126;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr126;
		} else if ( (*( f.p)) >= 65 )
			goto tr126;
	} else
		goto tr157;
	goto st102;
tr161:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 50 "../src/parsers/allies.c.rl"
	{ f.act = 2;}
	goto st138;
st138:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof138;
case 138:
#line 1625 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 45: goto st107;
		case 102: goto tr158;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr126;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr126;
		} else if ( (*( f.p)) >= 65 )
			goto tr126;
	} else
		goto tr157;
	goto st102;
st115:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof115;
case 115:
	switch( (*( f.p)) ) {
		case 101: goto st116;
		case 102: goto st89;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st116:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof116;
case 116:
	switch( (*( f.p)) ) {
		case 58: goto st117;
		case 102: goto st89;
		case 119: goto st96;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr0;
	goto st88;
st117:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof117;
case 117:
	switch( (*( f.p)) ) {
		case 32: goto tr130;
		case 119: goto st119;
	}
	if ( (*( f.p)) < 48 ) {
		if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
			goto tr130;
	} else if ( (*( f.p)) > 57 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else
		goto tr131;
	goto st118;
st118:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof118;
case 118:
	if ( (*( f.p)) == 119 )
		goto st119;
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st118;
st119:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof119;
case 119:
	switch( (*( f.p)) ) {
		case 105: goto st120;
		case 119: goto st119;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st118;
st120:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof120;
case 120:
	switch( (*( f.p)) ) {
		case 100: goto st121;
		case 119: goto st119;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st118;
st121:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof121;
case 121:
	switch( (*( f.p)) ) {
		case 116: goto st122;
		case 119: goto st119;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st118;
st122:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof122;
case 122:
	switch( (*( f.p)) ) {
		case 104: goto st123;
		case 119: goto st119;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st118;
st123:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof123;
case 123:
	switch( (*( f.p)) ) {
		case 58: goto st124;
		case 119: goto st119;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr111;
	goto st118;
st124:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof124;
case 124:
	if ( (*( f.p)) == 32 )
		goto tr138;
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr139;
	} else if ( (*( f.p)) >= 9 )
		goto tr138;
	goto tr111;
tr138:
#line 16 "../src/parsers/allies.c.rl"
	{
        lmargin[2] = ( f.p);
    }
	goto st125;
st125:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof125;
case 125:
#line 1769 "../src/parsers/allies.c"
	if ( (*( f.p)) == 32 )
		goto st125;
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto st139;
	} else if ( (*( f.p)) >= 9 )
		goto st125;
	goto tr111;
tr139:
#line 16 "../src/parsers/allies.c.rl"
	{
        lmargin[2] = ( f.p);
    }
	goto st139;
st139:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof139;
case 139:
#line 1788 "../src/parsers/allies.c"
	if ( (*( f.p)) < 65 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto st139;
	} else if ( (*( f.p)) > 90 ) {
		if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
			goto st139;
	} else
		goto st139;
	goto tr157;
tr130:
#line 20 "../src/parsers/allies.c.rl"
	{
        lmargin[3] = ( f.p);
    }
	goto st126;
st126:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof126;
case 126:
#line 1808 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st126;
		case 119: goto st119;
	}
	if ( (*( f.p)) < 48 ) {
		if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
			goto st126;
	} else if ( (*( f.p)) > 57 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else
		goto tr143;
	goto st118;
tr131:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 20 "../src/parsers/allies.c.rl"
	{
        lmargin[3] = ( f.p);
    }
#line 55 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st140;
tr143:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 55 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st140;
st140:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof140;
case 140:
#line 1842 "../src/parsers/allies.c"
	if ( (*( f.p)) == 119 )
		goto tr162;
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr143;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr143;
		} else if ( (*( f.p)) >= 65 )
			goto tr143;
	} else
		goto tr156;
	goto st118;
tr162:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 55 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st141;
st141:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof141;
case 141:
#line 1867 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 105: goto tr163;
		case 119: goto tr162;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr143;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr143;
		} else if ( (*( f.p)) >= 65 )
			goto tr143;
	} else
		goto tr156;
	goto st118;
tr163:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 55 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st142;
st142:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof142;
case 142:
#line 1894 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 100: goto tr164;
		case 119: goto tr162;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr143;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr143;
		} else if ( (*( f.p)) >= 65 )
			goto tr143;
	} else
		goto tr156;
	goto st118;
tr164:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 55 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st143;
st143:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof143;
case 143:
#line 1921 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 116: goto tr165;
		case 119: goto tr162;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr143;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr143;
		} else if ( (*( f.p)) >= 65 )
			goto tr143;
	} else
		goto tr156;
	goto st118;
tr165:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 55 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st144;
st144:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof144;
case 144:
#line 1948 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 104: goto tr166;
		case 119: goto tr162;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr143;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr143;
		} else if ( (*( f.p)) >= 65 )
			goto tr143;
	} else
		goto tr156;
	goto st118;
tr166:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 55 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st145;
st145:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof145;
case 145:
#line 1975 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 58: goto st124;
		case 119: goto tr162;
	}
	if ( (*( f.p)) < 60 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr143;
	} else if ( (*( f.p)) > 62 ) {
		if ( (*( f.p)) > 90 ) {
			if ( 97 <= (*( f.p)) && (*( f.p)) <= 122 )
				goto tr143;
		} else if ( (*( f.p)) >= 65 )
			goto tr143;
	} else
		goto tr156;
	goto st118;
	}
	_test_eof127:  f.cs = 127; goto _test_eof; 
	_test_eof128:  f.cs = 128; goto _test_eof; 
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
	_test_eof129:  f.cs = 129; goto _test_eof; 
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
	_test_eof42:  f.cs = 42; goto _test_eof; 
	_test_eof43:  f.cs = 43; goto _test_eof; 
	_test_eof44:  f.cs = 44; goto _test_eof; 
	_test_eof45:  f.cs = 45; goto _test_eof; 
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
	_test_eof130:  f.cs = 130; goto _test_eof; 
	_test_eof70:  f.cs = 70; goto _test_eof; 
	_test_eof71:  f.cs = 71; goto _test_eof; 
	_test_eof72:  f.cs = 72; goto _test_eof; 
	_test_eof73:  f.cs = 73; goto _test_eof; 
	_test_eof74:  f.cs = 74; goto _test_eof; 
	_test_eof75:  f.cs = 75; goto _test_eof; 
	_test_eof76:  f.cs = 76; goto _test_eof; 
	_test_eof77:  f.cs = 77; goto _test_eof; 
	_test_eof78:  f.cs = 78; goto _test_eof; 
	_test_eof79:  f.cs = 79; goto _test_eof; 
	_test_eof131:  f.cs = 131; goto _test_eof; 
	_test_eof80:  f.cs = 80; goto _test_eof; 
	_test_eof81:  f.cs = 81; goto _test_eof; 
	_test_eof82:  f.cs = 82; goto _test_eof; 
	_test_eof83:  f.cs = 83; goto _test_eof; 
	_test_eof132:  f.cs = 132; goto _test_eof; 
	_test_eof84:  f.cs = 84; goto _test_eof; 
	_test_eof85:  f.cs = 85; goto _test_eof; 
	_test_eof86:  f.cs = 86; goto _test_eof; 
	_test_eof87:  f.cs = 87; goto _test_eof; 
	_test_eof88:  f.cs = 88; goto _test_eof; 
	_test_eof89:  f.cs = 89; goto _test_eof; 
	_test_eof90:  f.cs = 90; goto _test_eof; 
	_test_eof91:  f.cs = 91; goto _test_eof; 
	_test_eof92:  f.cs = 92; goto _test_eof; 
	_test_eof93:  f.cs = 93; goto _test_eof; 
	_test_eof94:  f.cs = 94; goto _test_eof; 
	_test_eof95:  f.cs = 95; goto _test_eof; 
	_test_eof96:  f.cs = 96; goto _test_eof; 
	_test_eof97:  f.cs = 97; goto _test_eof; 
	_test_eof98:  f.cs = 98; goto _test_eof; 
	_test_eof99:  f.cs = 99; goto _test_eof; 
	_test_eof100:  f.cs = 100; goto _test_eof; 
	_test_eof101:  f.cs = 101; goto _test_eof; 
	_test_eof102:  f.cs = 102; goto _test_eof; 
	_test_eof103:  f.cs = 103; goto _test_eof; 
	_test_eof104:  f.cs = 104; goto _test_eof; 
	_test_eof105:  f.cs = 105; goto _test_eof; 
	_test_eof106:  f.cs = 106; goto _test_eof; 
	_test_eof107:  f.cs = 107; goto _test_eof; 
	_test_eof108:  f.cs = 108; goto _test_eof; 
	_test_eof109:  f.cs = 109; goto _test_eof; 
	_test_eof110:  f.cs = 110; goto _test_eof; 
	_test_eof111:  f.cs = 111; goto _test_eof; 
	_test_eof112:  f.cs = 112; goto _test_eof; 
	_test_eof113:  f.cs = 113; goto _test_eof; 
	_test_eof133:  f.cs = 133; goto _test_eof; 
	_test_eof114:  f.cs = 114; goto _test_eof; 
	_test_eof134:  f.cs = 134; goto _test_eof; 
	_test_eof135:  f.cs = 135; goto _test_eof; 
	_test_eof136:  f.cs = 136; goto _test_eof; 
	_test_eof137:  f.cs = 137; goto _test_eof; 
	_test_eof138:  f.cs = 138; goto _test_eof; 
	_test_eof115:  f.cs = 115; goto _test_eof; 
	_test_eof116:  f.cs = 116; goto _test_eof; 
	_test_eof117:  f.cs = 117; goto _test_eof; 
	_test_eof118:  f.cs = 118; goto _test_eof; 
	_test_eof119:  f.cs = 119; goto _test_eof; 
	_test_eof120:  f.cs = 120; goto _test_eof; 
	_test_eof121:  f.cs = 121; goto _test_eof; 
	_test_eof122:  f.cs = 122; goto _test_eof; 
	_test_eof123:  f.cs = 123; goto _test_eof; 
	_test_eof124:  f.cs = 124; goto _test_eof; 
	_test_eof125:  f.cs = 125; goto _test_eof; 
	_test_eof139:  f.cs = 139; goto _test_eof; 
	_test_eof126:  f.cs = 126; goto _test_eof; 
	_test_eof140:  f.cs = 140; goto _test_eof; 
	_test_eof141:  f.cs = 141; goto _test_eof; 
	_test_eof142:  f.cs = 142; goto _test_eof; 
	_test_eof143:  f.cs = 143; goto _test_eof; 
	_test_eof144:  f.cs = 144; goto _test_eof; 
	_test_eof145:  f.cs = 145; goto _test_eof; 

	_test_eof: {}
	if ( ( f.p) == eof )
	{
	switch (  f.cs ) {
	case 128: goto tr149;
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
	case 129: goto tr149;
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
	case 32: goto tr0;
	case 33: goto tr0;
	case 34: goto tr0;
	case 35: goto tr0;
	case 36: goto tr0;
	case 37: goto tr0;
	case 38: goto tr0;
	case 39: goto tr0;
	case 40: goto tr0;
	case 41: goto tr0;
	case 42: goto tr0;
	case 43: goto tr0;
	case 44: goto tr0;
	case 45: goto tr0;
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
	case 130: goto tr152;
	case 70: goto tr75;
	case 71: goto tr75;
	case 72: goto tr75;
	case 73: goto tr75;
	case 74: goto tr75;
	case 75: goto tr75;
	case 76: goto tr75;
	case 77: goto tr0;
	case 78: goto tr0;
	case 79: goto tr0;
	case 131: goto tr149;
	case 80: goto tr0;
	case 81: goto tr0;
	case 82: goto tr0;
	case 83: goto tr0;
	case 132: goto tr149;
	case 84: goto tr0;
	case 85: goto tr0;
	case 86: goto tr0;
	case 87: goto tr0;
	case 88: goto tr0;
	case 89: goto tr0;
	case 90: goto tr0;
	case 91: goto tr0;
	case 92: goto tr0;
	case 93: goto tr0;
	case 94: goto tr0;
	case 95: goto tr0;
	case 96: goto tr0;
	case 97: goto tr0;
	case 98: goto tr0;
	case 99: goto tr0;
	case 100: goto tr0;
	case 101: goto tr0;
	case 102: goto tr111;
	case 103: goto tr111;
	case 104: goto tr111;
	case 105: goto tr111;
	case 106: goto tr111;
	case 107: goto tr111;
	case 108: goto tr111;
	case 109: goto tr111;
	case 110: goto tr111;
	case 111: goto tr111;
	case 112: goto tr111;
	case 113: goto tr111;
	case 133: goto tr156;
	case 114: goto tr0;
	case 134: goto tr157;
	case 135: goto tr157;
	case 136: goto tr157;
	case 137: goto tr157;
	case 138: goto tr157;
	case 115: goto tr0;
	case 116: goto tr0;
	case 117: goto tr0;
	case 118: goto tr111;
	case 119: goto tr111;
	case 120: goto tr111;
	case 121: goto tr111;
	case 122: goto tr111;
	case 123: goto tr111;
	case 124: goto tr111;
	case 125: goto tr111;
	case 139: goto tr157;
	case 126: goto tr0;
	case 140: goto tr156;
	case 141: goto tr156;
	case 142: goto tr156;
	case 143: goto tr156;
	case 144: goto tr156;
	case 145: goto tr156;
	}
	}

	_out: {}
	}

#line 128 "../src/parsers/allies.c.rl"
    f.cap[0].len = (size_t)(lmargin[f.branch] - f.cap[0].ptr);
    *fsm = f;

    if (f.cs == -1)
        return FSM_ERROR;
    if (f.cs >= 127)
        return FSM_OK;
    return FSM_INCOMPLETE;
}

#ifdef __cplusplus
}
#endif
