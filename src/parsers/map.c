
#line 1 "../src/parsers/map.c.rl"
#include "parsers/parsers.h"

enum { BRANCHES = 11 };


#line 234 "../src/parsers/map.c.rl"



#line 13 "../src/parsers/map.c"
static const int map_start = 1;
static const int map_first_final = 162;
static const int map_error = 0;

static const int map_en_scan = 163;
static const int map_en_main = 1;


#line 237 "../src/parsers/map.c.rl"

#ifdef __cplusplus
extern "C" {
#endif

void cParseMapInit(Fsm* fsm) {
    Fsm f = *fsm;
    
#line 31 "../src/parsers/map.c"
	{
	 f.cs = map_start;
	 f.ts = 0;
	 f.te = 0;
	 f.act = 0;
	}

#line 245 "../src/parsers/map.c.rl"
    *fsm = f;
}

int32_t cParseMapExec(Fsm* fsm) {
    Fsm f = *fsm;//Drop one level of indirection.
    const char* const eof = f.pe;
    const char* lmargin[BRANCHES + 1] = { f.pe };
    const char* rmargin3 = f.p;
    const char* rmargin11 = f.p;
    f.branch = 0;
    f.cap[0].ptr = f.p;
    
#line 52 "../src/parsers/map.c"
	{
	if ( ( f.p) == ( f.pe) )
		goto _test_eof;
	switch (  f.cs )
	{
st1:
#line 1 "NONE"
	{ f.ts = 0;}
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof1;
case 1:
#line 64 "../src/parsers/map.c"
	if ( (*( f.p)) == 58 )
		goto st2;
	goto st1;
st2:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof2;
case 2:
	switch( (*( f.p)) ) {
		case 32: goto st2;
		case 58: goto st2;
		case 115: goto st3;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st2;
	goto st1;
st3:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof3;
case 3:
	switch( (*( f.p)) ) {
		case 58: goto st2;
		case 99: goto st4;
	}
	goto st1;
st4:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof4;
case 4:
	switch( (*( f.p)) ) {
		case 58: goto st2;
		case 97: goto st5;
	}
	goto st1;
st5:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof5;
case 5:
	switch( (*( f.p)) ) {
		case 58: goto st2;
		case 108: goto st6;
	}
	goto st1;
st6:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof6;
case 6:
	switch( (*( f.p)) ) {
		case 58: goto st2;
		case 101: goto st7;
	}
	goto st1;
st7:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof7;
case 7:
	switch( (*( f.p)) ) {
		case 32: goto st7;
		case 40: goto st8;
		case 58: goto st2;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st7;
	goto st1;
st8:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof8;
case 8:
	switch( (*( f.p)) ) {
		case 32: goto st8;
		case 46: goto tr9;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr9;
	} else if ( (*( f.p)) >= 9 )
		goto st8;
	goto tr8;
tr8:
#line 68 "../src/parsers/map.c.rl"
	{
        f.cap[1].ptr = ( f.p);
    }
#line 72 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[1], ( f.p));
        {( f.p) = (( f.cap[0].ptr))-1;}//Restart from the beginning.
        {goto st163;}
    }
	goto st162;
tr10:
#line 72 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[1], ( f.p));
        {( f.p) = (( f.cap[0].ptr))-1;}//Restart from the beginning.
        {goto st163;}
    }
	goto st162;
st162:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof162;
case 162:
#line 166 "../src/parsers/map.c"
	goto st0;
st0:
 f.cs = 0;
	goto _out;
tr9:
#line 68 "../src/parsers/map.c.rl"
	{
        f.cap[1].ptr = ( f.p);
    }
	goto st9;
st9:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof9;
case 9:
#line 181 "../src/parsers/map.c"
	if ( (*( f.p)) == 46 )
		goto st9;
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st9;
	goto tr10;
tr12:
#line 229 "../src/parsers/map.c.rl"
	{{( f.p) = (( f.te))-1;}}
	goto st163;
tr20:
#line 126 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 7;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr24:
#line 1 "NONE"
	{	switch(  f.act ) {
	case 9:
	{{( f.p) = (( f.te))-1;}
        f.branch = 8;
        {( f.p)++;  f.cs = 163; goto _out;}
    }
	break;
	default:
	{{( f.p) = (( f.te))-1;}}
	break;
	}
	}
	goto st163;
tr59:
#line 141 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 10;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr101:
#line 141 "../src/parsers/map.c.rl"
	{{( f.p) = (( f.te))-1;}{
        f.branch = 10;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr127:
#line 28 "../src/parsers/map.c.rl"
	{
        lmargin[4] = ( f.p);
    }
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
#line 110 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 4;
        ( f.p)--;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr130:
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
#line 110 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 4;
        ( f.p)--;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr134:
#line 110 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 4;
        ( f.p)--;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st163;
tr137:
#line 12 "../src/parsers/map.c.rl"
	{
        ( f.p)--;
    }
#line 131 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 8;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr157:
#line 146 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 11;
        {( f.p) = (( rmargin11))-1;}
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr180:
#line 229 "../src/parsers/map.c.rl"
	{ f.te = ( f.p)+1;}
	goto st163;
tr193:
#line 229 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;}
	goto st163;
tr196:
#line 121 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 6;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr200:
#line 136 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 9;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr202:
#line 116 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 5;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr204:
#line 126 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 7;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr207:
#line 131 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 8;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr208:
#line 20 "../src/parsers/map.c.rl"
	{
        lmargin[2] = ( f.p);
    }
#line 99 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 2;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr210:
#line 99 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 2;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr216:
#line 141 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 10;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr221:
#line 16 "../src/parsers/map.c.rl"
	{
        lmargin[1] = ( f.p);
    }
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
#line 94 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 1;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr225:
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
#line 94 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 1;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr228:
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
#line 94 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 1;
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr231:
#line 86 "../src/parsers/map.c.rl"
	{
        f.cap[3].ptr = ( f.p);
    }
#line 90 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[3], ( f.p));
    }
#line 104 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 3;
        {( f.p) = (( rmargin3))-1;}
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
tr233:
#line 90 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[3], ( f.p));
    }
#line 104 "../src/parsers/map.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 3;
        {( f.p) = (( rmargin3))-1;}
        {( f.p)++;  f.cs = 163; goto _out;}
    }}
	goto st163;
st163:
#line 1 "NONE"
	{ f.ts = 0;}
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof163;
case 163:
#line 1 "NONE"
	{ f.ts = ( f.p);}
#line 439 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 13: goto tr182;
		case 32: goto tr181;
		case 45: goto tr183;
		case 46: goto tr184;
		case 58: goto tr186;
		case 60: goto tr187;
		case 62: goto tr188;
		case 98: goto tr189;
		case 100: goto tr190;
		case 104: goto tr191;
		case 116: goto tr192;
	}
	if ( (*( f.p)) > 12 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr185;
	} else if ( (*( f.p)) >= 9 )
		goto tr181;
	goto tr180;
tr181:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 40 "../src/parsers/map.c.rl"
	{
        lmargin[7] = ( f.p);
    }
	goto st164;
st164:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof164;
case 164:
#line 471 "../src/parsers/map.c"
	if ( (*( f.p)) == 100 )
		goto st10;
	goto tr193;
st10:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof10;
case 10:
	if ( (*( f.p)) == 95 )
		goto st11;
	goto tr12;
st11:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof11;
case 11:
	if ( (*( f.p)) == 111 )
		goto st12;
	goto tr12;
st12:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof12;
case 12:
	if ( (*( f.p)) == 118 )
		goto st13;
	goto tr12;
st13:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof13;
case 13:
	if ( (*( f.p)) == 101 )
		goto st14;
	goto tr12;
st14:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof14;
case 14:
	if ( (*( f.p)) == 114 )
		goto st15;
	goto tr12;
st15:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof15;
case 15:
	if ( (*( f.p)) == 108 )
		goto st16;
	goto tr12;
st16:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof16;
case 16:
	if ( (*( f.p)) == 97 )
		goto st17;
	goto tr12;
st17:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof17;
case 17:
	if ( (*( f.p)) == 121 )
		goto tr20;
	goto tr12;
tr182:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 40 "../src/parsers/map.c.rl"
	{
        lmargin[7] = ( f.p);
    }
	goto st165;
st165:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof165;
case 165:
#line 543 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 10: goto st18;
		case 100: goto st10;
	}
	goto tr193;
st18:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof18;
case 18:
	if ( (*( f.p)) == 100 )
		goto st10;
	goto tr12;
tr183:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 36 "../src/parsers/map.c.rl"
	{
        lmargin[6] = ( f.p);
    }
#line 229 "../src/parsers/map.c.rl"
	{ f.act = 13;}
	goto st166;
st166:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof166;
case 166:
#line 570 "../src/parsers/map.c"
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st19;
	goto tr193;
st19:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof19;
case 19:
	if ( (*( f.p)) == 46 )
		goto st20;
	goto tr12;
st20:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof20;
case 20:
	switch( (*( f.p)) ) {
		case 69: goto st21;
		case 101: goto st21;
	}
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st20;
	goto tr12;
st21:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof21;
case 21:
	if ( (*( f.p)) == 45 )
		goto st22;
	goto tr24;
st22:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof22;
case 22:
	if ( 49 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st23;
	goto tr24;
st23:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof23;
case 23:
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st167;
	goto tr24;
st167:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof167;
case 167:
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st167;
	goto tr196;
tr184:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st168;
st168:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof168;
case 168:
#line 628 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 52: goto tr198;
		case 53: goto st28;
	}
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st24;
	goto tr193;
st24:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof24;
case 24:
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st25;
	goto tr12;
st25:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof25;
case 25:
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto tr29;
	goto tr12;
tr29:
#line 48 "../src/parsers/map.c.rl"
	{
        lmargin[9] = ( f.p);
    }
	goto st169;
st169:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof169;
case 169:
#line 660 "../src/parsers/map.c"
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st169;
	goto tr200;
tr198:
#line 32 "../src/parsers/map.c.rl"
	{
        lmargin[5] = ( f.p);
    }
	goto st26;
st26:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof26;
case 26:
#line 674 "../src/parsers/map.c"
	if ( (*( f.p)) == 57 )
		goto st27;
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 56 )
		goto st25;
	goto tr12;
st27:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof27;
case 27:
	if ( (*( f.p)) == 57 )
		goto tr31;
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 56 )
		goto tr29;
	goto tr12;
tr31:
#line 48 "../src/parsers/map.c.rl"
	{
        lmargin[9] = ( f.p);
    }
	goto st170;
st170:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof170;
case 170:
#line 699 "../src/parsers/map.c"
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st170;
	goto tr202;
st28:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof28;
case 28:
	if ( (*( f.p)) == 48 )
		goto tr32;
	if ( 49 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st25;
	goto tr12;
tr32:
#line 40 "../src/parsers/map.c.rl"
	{
        lmargin[7] = ( f.p);
    }
	goto st29;
st29:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof29;
case 29:
#line 722 "../src/parsers/map.c"
	if ( (*( f.p)) == 48 )
		goto tr33;
	if ( 49 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto tr29;
	goto tr12;
tr33:
#line 48 "../src/parsers/map.c.rl"
	{
        lmargin[9] = ( f.p);
    }
	goto st171;
st171:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof171;
case 171:
#line 738 "../src/parsers/map.c"
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st171;
	goto tr204;
tr185:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 36 "../src/parsers/map.c.rl"
	{
        lmargin[6] = ( f.p);
    }
#line 229 "../src/parsers/map.c.rl"
	{ f.act = 13;}
	goto st172;
st172:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof172;
case 172:
#line 756 "../src/parsers/map.c"
	if ( (*( f.p)) == 46 )
		goto tr206;
	goto tr193;
tr206:
#line 44 "../src/parsers/map.c.rl"
	{
        lmargin[8] = ( f.p);
    }
	goto st30;
st30:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof30;
case 30:
#line 770 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 48: goto st31;
		case 69: goto st21;
		case 101: goto st21;
	}
	if ( 49 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st20;
	goto tr12;
st31:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof31;
case 31:
	switch( (*( f.p)) ) {
		case 48: goto st32;
		case 69: goto st21;
		case 101: goto st21;
	}
	if ( 49 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st20;
	goto tr12;
st32:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof32;
case 32:
	switch( (*( f.p)) ) {
		case 48: goto tr36;
		case 69: goto st21;
		case 101: goto st21;
	}
	if ( 49 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st20;
	goto tr12;
tr36:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 131 "../src/parsers/map.c.rl"
	{ f.act = 9;}
	goto st173;
st173:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof173;
case 173:
#line 813 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 69: goto st21;
		case 101: goto st21;
	}
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto tr36;
	goto tr207;
tr186:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st174;
st174:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof174;
case 174:
#line 829 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto st33;
		case 115: goto st34;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st33;
	goto tr193;
st33:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof33;
case 33:
	switch( (*( f.p)) ) {
		case 32: goto st33;
		case 115: goto st34;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st33;
	goto tr12;
st34:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof34;
case 34:
	if ( (*( f.p)) == 99 )
		goto st35;
	goto tr12;
st35:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof35;
case 35:
	if ( (*( f.p)) == 97 )
		goto st36;
	goto tr12;
st36:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof36;
case 36:
	if ( (*( f.p)) == 108 )
		goto st37;
	goto tr12;
st37:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof37;
case 37:
	if ( (*( f.p)) == 101 )
		goto st38;
	goto tr12;
st38:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof38;
case 38:
	switch( (*( f.p)) ) {
		case 32: goto st38;
		case 40: goto st175;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st38;
	goto tr12;
st175:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof175;
case 175:
	switch( (*( f.p)) ) {
		case 32: goto st175;
		case 46: goto tr209;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr209;
	} else if ( (*( f.p)) >= 9 )
		goto st175;
	goto tr208;
tr209:
#line 20 "../src/parsers/map.c.rl"
	{
        lmargin[2] = ( f.p);
    }
	goto st176;
st176:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof176;
case 176:
#line 911 "../src/parsers/map.c"
	if ( (*( f.p)) == 46 )
		goto st176;
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st176;
	goto tr210;
tr187:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 52 "../src/parsers/map.c.rl"
	{
        lmargin[10] = ( f.p);
    }
	goto st177;
st177:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof177;
case 177:
#line 929 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 100: goto st39;
		case 108: goto st55;
		case 115: goto st64;
		case 116: goto st106;
	}
	goto tr193;
st39:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof39;
case 39:
	if ( (*( f.p)) == 105 )
		goto st40;
	goto tr12;
st40:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof40;
case 40:
	if ( (*( f.p)) == 118 )
		goto st41;
	goto tr12;
st41:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof41;
case 41:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 100: goto st42;
	}
	goto st41;
st42:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof42;
case 42:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 100: goto st42;
		case 105: goto st43;
	}
	goto st41;
st43:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof43;
case 43:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 100: goto st42;
		case 114: goto st44;
	}
	goto st41;
st44:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof44;
case 44:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 95: goto st45;
		case 100: goto st42;
	}
	goto st41;
st45:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof45;
case 45:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 100: goto st42;
		case 114: goto st46;
	}
	goto st41;
st46:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof46;
case 46:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 100: goto st42;
		case 101: goto st47;
	}
	goto st41;
st47:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof47;
case 47:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 100: goto st42;
		case 115: goto st48;
	}
	goto st41;
st48:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof48;
case 48:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 100: goto st42;
		case 112: goto st49;
	}
	goto st41;
st49:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof49;
case 49:
	if ( (*( f.p)) == 60 )
		goto st50;
	goto st49;
st50:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof50;
case 50:
	if ( (*( f.p)) == 47 )
		goto st51;
	goto tr12;
st51:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof51;
case 51:
	if ( (*( f.p)) == 100 )
		goto st52;
	goto tr12;
st52:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof52;
case 52:
	if ( (*( f.p)) == 105 )
		goto st53;
	goto tr12;
st53:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof53;
case 53:
	if ( (*( f.p)) == 118 )
		goto st54;
	goto tr12;
st54:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof54;
case 54:
	if ( (*( f.p)) == 62 )
		goto tr59;
	goto tr12;
st55:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof55;
case 55:
	if ( (*( f.p)) == 105 )
		goto st56;
	goto tr12;
st56:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof56;
case 56:
	if ( (*( f.p)) == 110 )
		goto st57;
	goto tr12;
st57:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof57;
case 57:
	if ( (*( f.p)) == 101 )
		goto st58;
	goto tr12;
st58:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof58;
case 58:
	if ( (*( f.p)) == 60 )
		goto st59;
	goto st58;
st59:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof59;
case 59:
	if ( (*( f.p)) == 47 )
		goto st60;
	goto tr12;
st60:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof60;
case 60:
	if ( (*( f.p)) == 108 )
		goto st61;
	goto tr12;
st61:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof61;
case 61:
	if ( (*( f.p)) == 105 )
		goto st62;
	goto tr12;
st62:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof62;
case 62:
	if ( (*( f.p)) == 110 )
		goto st63;
	goto tr12;
st63:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof63;
case 63:
	if ( (*( f.p)) == 101 )
		goto st54;
	goto tr12;
st64:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof64;
case 64:
	if ( (*( f.p)) == 112 )
		goto st65;
	goto tr12;
st65:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof65;
case 65:
	if ( (*( f.p)) == 97 )
		goto st66;
	goto tr12;
st66:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof66;
case 66:
	if ( (*( f.p)) == 110 )
		goto st67;
	goto tr12;
st67:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof67;
case 67:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 99: goto st68;
	}
	goto st67;
st68:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof68;
case 68:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 99: goto st68;
		case 108: goto st69;
	}
	goto st67;
st69:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof69;
case 69:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 97: goto st70;
		case 99: goto st68;
	}
	goto st67;
st70:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof70;
case 70:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 99: goto st68;
		case 115: goto st71;
	}
	goto st67;
st71:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof71;
case 71:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 99: goto st68;
		case 115: goto st72;
	}
	goto st67;
st72:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof72;
case 72:
	switch( (*( f.p)) ) {
		case 61: goto st73;
		case 99: goto st68;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st67;
st73:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof73;
case 73:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st74:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof74;
case 74:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 99: goto st74;
		case 108: goto st75;
		case 114: goto st77;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st75:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof75;
case 75:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 95: goto st76;
		case 97: goto st103;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st76:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof76;
case 76:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
		case 115: goto st78;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st77:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof77;
case 77:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 95: goto st76;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st78:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof78;
case 78:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 99: goto st74;
		case 108: goto st79;
		case 114: goto st77;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st79:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof79;
case 79:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 95: goto st76;
		case 99: goto st74;
		case 108: goto st77;
		case 111: goto st80;
		case 114: goto st77;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st80:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof80;
case 80:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
		case 116: goto st81;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st81:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof81;
case 81:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto st82;
	}
	goto st81;
st82:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof82;
case 82:
	if ( (*( f.p)) == 60 )
		goto st83;
	goto st82;
st83:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof83;
case 83:
	switch( (*( f.p)) ) {
		case 47: goto st84;
		case 60: goto st83;
	}
	goto st82;
st84:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof84;
case 84:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 115: goto st85;
	}
	goto st82;
st85:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof85;
case 85:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 112: goto st86;
	}
	goto st82;
st86:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof86;
case 86:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 97: goto st87;
	}
	goto st82;
st87:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof87;
case 87:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 110: goto st88;
	}
	goto st82;
st88:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof88;
case 88:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 62: goto st89;
	}
	goto st82;
st89:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof89;
case 89:
	switch( (*( f.p)) ) {
		case 32: goto st89;
		case 60: goto st90;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st89;
	goto st82;
st90:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof90;
case 90:
	switch( (*( f.p)) ) {
		case 47: goto st91;
		case 60: goto st83;
	}
	goto st82;
st91:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof91;
case 91:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 115: goto st92;
	}
	goto st82;
st92:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof92;
case 92:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 112: goto st93;
	}
	goto st82;
st93:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof93;
case 93:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 97: goto st94;
	}
	goto st82;
st94:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof94;
case 94:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 110: goto st95;
	}
	goto st82;
st95:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof95;
case 95:
	switch( (*( f.p)) ) {
		case 60: goto st83;
		case 62: goto tr100;
	}
	goto st82;
tr100:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st178;
st178:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof178;
case 178:
#line 1483 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto st96;
		case 60: goto st97;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st96;
	goto tr216;
st96:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof96;
case 96:
	switch( (*( f.p)) ) {
		case 32: goto st96;
		case 60: goto st97;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st96;
	goto tr101;
st97:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof97;
case 97:
	if ( (*( f.p)) == 47 )
		goto st98;
	goto tr101;
st98:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof98;
case 98:
	if ( (*( f.p)) == 115 )
		goto st99;
	goto tr101;
st99:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof99;
case 99:
	if ( (*( f.p)) == 112 )
		goto st100;
	goto tr101;
st100:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof100;
case 100:
	if ( (*( f.p)) == 97 )
		goto st101;
	goto tr101;
st101:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof101;
case 101:
	if ( (*( f.p)) == 110 )
		goto st102;
	goto tr101;
st102:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof102;
case 102:
	if ( (*( f.p)) == 62 )
		goto tr59;
	goto tr101;
st103:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof103;
case 103:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
		case 115: goto st104;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st104:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof104;
case 104:
	switch( (*( f.p)) ) {
		case 61: goto st67;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
		case 115: goto st105;
	}
	if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
		goto tr12;
	goto st73;
st105:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof105;
case 105:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto tr12;
		case 99: goto st74;
		case 108: goto st77;
		case 114: goto st77;
	}
	goto st73;
st106:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof106;
case 106:
	switch( (*( f.p)) ) {
		case 101: goto st107;
		case 105: goto st116;
	}
	goto tr12;
st107:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof107;
case 107:
	if ( (*( f.p)) == 120 )
		goto st108;
	goto tr12;
st108:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof108;
case 108:
	if ( (*( f.p)) == 116 )
		goto st109;
	goto tr12;
st109:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof109;
case 109:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto st110;
	}
	goto st109;
st110:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof110;
case 110:
	switch( (*( f.p)) ) {
		case 32: goto st110;
		case 60: goto st111;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st110;
	goto tr12;
st111:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof111;
case 111:
	if ( (*( f.p)) == 47 )
		goto st112;
	goto tr12;
st112:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof112;
case 112:
	if ( (*( f.p)) == 116 )
		goto st113;
	goto tr12;
st113:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof113;
case 113:
	if ( (*( f.p)) == 101 )
		goto st114;
	goto tr12;
st114:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof114;
case 114:
	if ( (*( f.p)) == 120 )
		goto st115;
	goto tr12;
st115:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof115;
case 115:
	if ( (*( f.p)) == 116 )
		goto st54;
	goto tr12;
st116:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof116;
case 116:
	if ( (*( f.p)) == 116 )
		goto st117;
	goto tr12;
st117:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof117;
case 117:
	if ( (*( f.p)) == 108 )
		goto st118;
	goto tr12;
st118:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof118;
case 118:
	if ( (*( f.p)) == 101 )
		goto st119;
	goto tr12;
st119:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof119;
case 119:
	if ( (*( f.p)) == 62 )
		goto st120;
	goto tr12;
st120:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof120;
case 120:
	switch( (*( f.p)) ) {
		case 40: goto tr126;
		case 60: goto tr127;
		case 62: goto tr12;
	}
	goto tr125;
tr125:
#line 28 "../src/parsers/map.c.rl"
	{
        lmargin[4] = ( f.p);
    }
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
	goto st121;
st121:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof121;
case 121:
#line 1714 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 40: goto tr129;
		case 60: goto tr130;
		case 62: goto tr12;
	}
	goto st121;
tr126:
#line 28 "../src/parsers/map.c.rl"
	{
        lmargin[4] = ( f.p);
    }
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st122;
tr129:
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st122;
st122:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof122;
case 122:
#line 1745 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 40: goto tr129;
		case 41: goto st121;
		case 60: goto tr130;
		case 62: goto tr12;
	}
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st123;
	goto st122;
st123:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof123;
case 123:
	switch( (*( f.p)) ) {
		case 40: goto tr129;
		case 41: goto st124;
		case 60: goto tr130;
		case 62: goto tr12;
	}
	goto st123;
st124:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof124;
case 124:
	switch( (*( f.p)) ) {
		case 32: goto st124;
		case 40: goto tr129;
		case 60: goto tr134;
		case 62: goto tr12;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st124;
	goto st121;
tr188:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st179;
st179:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof179;
case 179:
#line 1787 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 13: goto st127;
		case 32: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 12 )
		goto st125;
	goto tr193;
st125:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof125;
case 125:
	if ( (*( f.p)) == 32 )
		goto tr135;
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr135;
	goto tr12;
tr135:
#line 44 "../src/parsers/map.c.rl"
	{
        lmargin[8] = ( f.p);
    }
	goto st126;
st126:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof126;
case 126:
#line 1814 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto st126;
		case 60: goto tr137;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st126;
	goto tr12;
st127:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof127;
case 127:
	switch( (*( f.p)) ) {
		case 10: goto tr138;
		case 32: goto tr135;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr135;
	goto tr12;
tr138:
#line 44 "../src/parsers/map.c.rl"
	{
        lmargin[8] = ( f.p);
    }
	goto st128;
st128:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof128;
case 128:
#line 1843 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto tr135;
		case 60: goto tr137;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr135;
	goto tr12;
tr189:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st180;
st180:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof180;
case 180:
#line 1859 "../src/parsers/map.c"
	if ( (*( f.p)) == 108 )
		goto st129;
	goto tr193;
st129:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof129;
case 129:
	if ( (*( f.p)) == 111 )
		goto st130;
	goto tr12;
st130:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof130;
case 130:
	if ( (*( f.p)) == 99 )
		goto st131;
	goto tr12;
st131:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof131;
case 131:
	if ( (*( f.p)) == 107 )
		goto st132;
	goto tr12;
st132:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof132;
case 132:
	if ( (*( f.p)) == 95 )
		goto st133;
	goto tr12;
st133:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof133;
case 133:
	if ( (*( f.p)) == 116 )
		goto st134;
	goto tr12;
st134:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof134;
case 134:
	if ( (*( f.p)) == 105 )
		goto st135;
	goto tr12;
st135:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof135;
case 135:
	if ( (*( f.p)) == 116 )
		goto st136;
	goto tr12;
st136:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof136;
case 136:
	if ( (*( f.p)) == 108 )
		goto st137;
	goto tr12;
st137:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof137;
case 137:
	if ( (*( f.p)) == 101 )
		goto st138;
	goto tr12;
st138:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof138;
case 138:
	if ( (*( f.p)) == 34 )
		goto st139;
	goto st138;
st139:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof139;
case 139:
	switch( (*( f.p)) ) {
		case 60: goto tr12;
		case 62: goto st140;
	}
	goto st139;
tr150:
#line 56 "../src/parsers/map.c.rl"
	{
        lmargin[11] = ( f.p);
    }
	goto st140;
st140:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof140;
case 140:
#line 1952 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto tr150;
		case 40: goto tr151;
		case 60: goto tr12;
		case 62: goto tr12;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr150;
	goto st140;
tr151:
#line 56 "../src/parsers/map.c.rl"
	{
        lmargin[11] = ( f.p);
    }
	goto st141;
st141:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof141;
case 141:
#line 1972 "../src/parsers/map.c"
	if ( (*( f.p)) == 60 )
		goto tr153;
	goto st141;
tr153:
#line 64 "../src/parsers/map.c.rl"
	{
        rmargin11 = ( f.p);
    }
	goto st142;
st142:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof142;
case 142:
#line 1986 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 47: goto st143;
		case 60: goto tr153;
	}
	goto st141;
st143:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof143;
case 143:
	switch( (*( f.p)) ) {
		case 60: goto tr153;
		case 104: goto st144;
	}
	goto st141;
st144:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof144;
case 144:
	switch( (*( f.p)) ) {
		case 50: goto st145;
		case 60: goto tr153;
	}
	goto st141;
st145:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof145;
case 145:
	switch( (*( f.p)) ) {
		case 60: goto tr153;
		case 62: goto tr157;
	}
	goto st141;
tr190:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 40 "../src/parsers/map.c.rl"
	{
        lmargin[7] = ( f.p);
    }
	goto st181;
st181:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof181;
case 181:
#line 2031 "../src/parsers/map.c"
	if ( (*( f.p)) == 95 )
		goto st11;
	goto tr193;
tr191:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st182;
st182:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof182;
case 182:
#line 2043 "../src/parsers/map.c"
	if ( (*( f.p)) == 101 )
		goto st146;
	goto tr193;
st146:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof146;
case 146:
	if ( (*( f.p)) == 105 )
		goto st147;
	goto tr12;
st147:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof147;
case 147:
	if ( (*( f.p)) == 103 )
		goto st148;
	goto tr12;
st148:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof148;
case 148:
	if ( (*( f.p)) == 104 )
		goto st149;
	goto tr12;
st149:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof149;
case 149:
	if ( (*( f.p)) == 116 )
		goto st150;
	goto tr12;
st150:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof150;
case 150:
	switch( (*( f.p)) ) {
		case 58: goto st183;
		case 61: goto st183;
	}
	goto tr12;
st183:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof183;
case 183:
	switch( (*( f.p)) ) {
		case 32: goto tr222;
		case 34: goto st186;
		case 46: goto tr224;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr224;
	} else if ( (*( f.p)) >= 9 )
		goto tr222;
	goto tr221;
tr222:
#line 16 "../src/parsers/map.c.rl"
	{
        lmargin[1] = ( f.p);
    }
	goto st184;
st184:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof184;
case 184:
#line 2109 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto st184;
		case 46: goto tr227;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr227;
	} else if ( (*( f.p)) >= 9 )
		goto st184;
	goto tr225;
tr227:
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
	goto st185;
tr224:
#line 16 "../src/parsers/map.c.rl"
	{
        lmargin[1] = ( f.p);
    }
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
	goto st185;
st185:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof185;
case 185:
#line 2140 "../src/parsers/map.c"
	if ( (*( f.p)) == 46 )
		goto st185;
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st185;
	goto tr228;
st186:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof186;
case 186:
	switch( (*( f.p)) ) {
		case 32: goto tr222;
		case 46: goto tr224;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr224;
	} else if ( (*( f.p)) >= 9 )
		goto tr222;
	goto tr221;
tr192:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st187;
st187:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof187;
case 187:
#line 2168 "../src/parsers/map.c"
	if ( (*( f.p)) == 114 )
		goto st151;
	goto tr193;
st151:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof151;
case 151:
	if ( (*( f.p)) == 97 )
		goto st152;
	goto tr12;
st152:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof152;
case 152:
	if ( (*( f.p)) == 110 )
		goto st153;
	goto tr12;
st153:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof153;
case 153:
	if ( (*( f.p)) == 115 )
		goto st154;
	goto tr12;
st154:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof154;
case 154:
	if ( (*( f.p)) == 108 )
		goto st155;
	goto tr12;
st155:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof155;
case 155:
	if ( (*( f.p)) == 97 )
		goto st156;
	goto tr12;
st156:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof156;
case 156:
	if ( (*( f.p)) == 116 )
		goto st157;
	goto tr12;
st157:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof157;
case 157:
	if ( (*( f.p)) == 101 )
		goto st158;
	goto tr12;
st158:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof158;
case 158:
	switch( (*( f.p)) ) {
		case 32: goto st158;
		case 40: goto tr170;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st158;
	goto tr12;
tr170:
#line 24 "../src/parsers/map.c.rl"
	{
        lmargin[3] = ( f.p);
    }
#line 60 "../src/parsers/map.c.rl"
	{
        rmargin3 = ( f.p);
    }
	goto st159;
st159:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof159;
case 159:
#line 2246 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto st159;
		case 44: goto tr172;
	}
	if ( (*( f.p)) < 45 ) {
		if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
			goto st159;
	} else if ( (*( f.p)) > 46 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr173;
	} else
		goto tr173;
	goto tr12;
tr175:
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st188;
tr172:
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st188;
st188:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof188;
case 188:
#line 2280 "../src/parsers/map.c"
	if ( (*( f.p)) == 32 )
		goto st188;
	if ( (*( f.p)) < 45 ) {
		if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
			goto st188;
	} else if ( (*( f.p)) > 46 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr232;
	} else
		goto tr232;
	goto tr231;
tr232:
#line 86 "../src/parsers/map.c.rl"
	{
        f.cap[3].ptr = ( f.p);
    }
	goto st189;
st189:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof189;
case 189:
#line 2302 "../src/parsers/map.c"
	if ( (*( f.p)) == 46 )
		goto st189;
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st189;
	goto tr233;
tr173:
#line 78 "../src/parsers/map.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
	goto st160;
st160:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof160;
case 160:
#line 2318 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto tr174;
		case 44: goto tr175;
		case 46: goto st160;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto st160;
	} else if ( (*( f.p)) >= 9 )
		goto tr174;
	goto tr12;
tr174:
#line 82 "../src/parsers/map.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st161;
st161:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof161;
case 161:
#line 2340 "../src/parsers/map.c"
	switch( (*( f.p)) ) {
		case 32: goto st161;
		case 44: goto st188;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st161;
	goto tr12;
	}
	_test_eof1:  f.cs = 1; goto _test_eof; 
	_test_eof2:  f.cs = 2; goto _test_eof; 
	_test_eof3:  f.cs = 3; goto _test_eof; 
	_test_eof4:  f.cs = 4; goto _test_eof; 
	_test_eof5:  f.cs = 5; goto _test_eof; 
	_test_eof6:  f.cs = 6; goto _test_eof; 
	_test_eof7:  f.cs = 7; goto _test_eof; 
	_test_eof8:  f.cs = 8; goto _test_eof; 
	_test_eof162:  f.cs = 162; goto _test_eof; 
	_test_eof9:  f.cs = 9; goto _test_eof; 
	_test_eof163:  f.cs = 163; goto _test_eof; 
	_test_eof164:  f.cs = 164; goto _test_eof; 
	_test_eof10:  f.cs = 10; goto _test_eof; 
	_test_eof11:  f.cs = 11; goto _test_eof; 
	_test_eof12:  f.cs = 12; goto _test_eof; 
	_test_eof13:  f.cs = 13; goto _test_eof; 
	_test_eof14:  f.cs = 14; goto _test_eof; 
	_test_eof15:  f.cs = 15; goto _test_eof; 
	_test_eof16:  f.cs = 16; goto _test_eof; 
	_test_eof17:  f.cs = 17; goto _test_eof; 
	_test_eof165:  f.cs = 165; goto _test_eof; 
	_test_eof18:  f.cs = 18; goto _test_eof; 
	_test_eof166:  f.cs = 166; goto _test_eof; 
	_test_eof19:  f.cs = 19; goto _test_eof; 
	_test_eof20:  f.cs = 20; goto _test_eof; 
	_test_eof21:  f.cs = 21; goto _test_eof; 
	_test_eof22:  f.cs = 22; goto _test_eof; 
	_test_eof23:  f.cs = 23; goto _test_eof; 
	_test_eof167:  f.cs = 167; goto _test_eof; 
	_test_eof168:  f.cs = 168; goto _test_eof; 
	_test_eof24:  f.cs = 24; goto _test_eof; 
	_test_eof25:  f.cs = 25; goto _test_eof; 
	_test_eof169:  f.cs = 169; goto _test_eof; 
	_test_eof26:  f.cs = 26; goto _test_eof; 
	_test_eof27:  f.cs = 27; goto _test_eof; 
	_test_eof170:  f.cs = 170; goto _test_eof; 
	_test_eof28:  f.cs = 28; goto _test_eof; 
	_test_eof29:  f.cs = 29; goto _test_eof; 
	_test_eof171:  f.cs = 171; goto _test_eof; 
	_test_eof172:  f.cs = 172; goto _test_eof; 
	_test_eof30:  f.cs = 30; goto _test_eof; 
	_test_eof31:  f.cs = 31; goto _test_eof; 
	_test_eof32:  f.cs = 32; goto _test_eof; 
	_test_eof173:  f.cs = 173; goto _test_eof; 
	_test_eof174:  f.cs = 174; goto _test_eof; 
	_test_eof33:  f.cs = 33; goto _test_eof; 
	_test_eof34:  f.cs = 34; goto _test_eof; 
	_test_eof35:  f.cs = 35; goto _test_eof; 
	_test_eof36:  f.cs = 36; goto _test_eof; 
	_test_eof37:  f.cs = 37; goto _test_eof; 
	_test_eof38:  f.cs = 38; goto _test_eof; 
	_test_eof175:  f.cs = 175; goto _test_eof; 
	_test_eof176:  f.cs = 176; goto _test_eof; 
	_test_eof177:  f.cs = 177; goto _test_eof; 
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
	_test_eof80:  f.cs = 80; goto _test_eof; 
	_test_eof81:  f.cs = 81; goto _test_eof; 
	_test_eof82:  f.cs = 82; goto _test_eof; 
	_test_eof83:  f.cs = 83; goto _test_eof; 
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
	_test_eof178:  f.cs = 178; goto _test_eof; 
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
	_test_eof114:  f.cs = 114; goto _test_eof; 
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
	_test_eof179:  f.cs = 179; goto _test_eof; 
	_test_eof125:  f.cs = 125; goto _test_eof; 
	_test_eof126:  f.cs = 126; goto _test_eof; 
	_test_eof127:  f.cs = 127; goto _test_eof; 
	_test_eof128:  f.cs = 128; goto _test_eof; 
	_test_eof180:  f.cs = 180; goto _test_eof; 
	_test_eof129:  f.cs = 129; goto _test_eof; 
	_test_eof130:  f.cs = 130; goto _test_eof; 
	_test_eof131:  f.cs = 131; goto _test_eof; 
	_test_eof132:  f.cs = 132; goto _test_eof; 
	_test_eof133:  f.cs = 133; goto _test_eof; 
	_test_eof134:  f.cs = 134; goto _test_eof; 
	_test_eof135:  f.cs = 135; goto _test_eof; 
	_test_eof136:  f.cs = 136; goto _test_eof; 
	_test_eof137:  f.cs = 137; goto _test_eof; 
	_test_eof138:  f.cs = 138; goto _test_eof; 
	_test_eof139:  f.cs = 139; goto _test_eof; 
	_test_eof140:  f.cs = 140; goto _test_eof; 
	_test_eof141:  f.cs = 141; goto _test_eof; 
	_test_eof142:  f.cs = 142; goto _test_eof; 
	_test_eof143:  f.cs = 143; goto _test_eof; 
	_test_eof144:  f.cs = 144; goto _test_eof; 
	_test_eof145:  f.cs = 145; goto _test_eof; 
	_test_eof181:  f.cs = 181; goto _test_eof; 
	_test_eof182:  f.cs = 182; goto _test_eof; 
	_test_eof146:  f.cs = 146; goto _test_eof; 
	_test_eof147:  f.cs = 147; goto _test_eof; 
	_test_eof148:  f.cs = 148; goto _test_eof; 
	_test_eof149:  f.cs = 149; goto _test_eof; 
	_test_eof150:  f.cs = 150; goto _test_eof; 
	_test_eof183:  f.cs = 183; goto _test_eof; 
	_test_eof184:  f.cs = 184; goto _test_eof; 
	_test_eof185:  f.cs = 185; goto _test_eof; 
	_test_eof186:  f.cs = 186; goto _test_eof; 
	_test_eof187:  f.cs = 187; goto _test_eof; 
	_test_eof151:  f.cs = 151; goto _test_eof; 
	_test_eof152:  f.cs = 152; goto _test_eof; 
	_test_eof153:  f.cs = 153; goto _test_eof; 
	_test_eof154:  f.cs = 154; goto _test_eof; 
	_test_eof155:  f.cs = 155; goto _test_eof; 
	_test_eof156:  f.cs = 156; goto _test_eof; 
	_test_eof157:  f.cs = 157; goto _test_eof; 
	_test_eof158:  f.cs = 158; goto _test_eof; 
	_test_eof159:  f.cs = 159; goto _test_eof; 
	_test_eof188:  f.cs = 188; goto _test_eof; 
	_test_eof189:  f.cs = 189; goto _test_eof; 
	_test_eof160:  f.cs = 160; goto _test_eof; 
	_test_eof161:  f.cs = 161; goto _test_eof; 

	_test_eof: {}
	if ( ( f.p) == eof )
	{
	switch (  f.cs ) {
	case 164: goto tr193;
	case 10: goto tr12;
	case 11: goto tr12;
	case 12: goto tr12;
	case 13: goto tr12;
	case 14: goto tr12;
	case 15: goto tr12;
	case 16: goto tr12;
	case 17: goto tr12;
	case 165: goto tr193;
	case 18: goto tr12;
	case 166: goto tr193;
	case 19: goto tr12;
	case 20: goto tr12;
	case 21: goto tr24;
	case 22: goto tr24;
	case 23: goto tr24;
	case 167: goto tr196;
	case 168: goto tr193;
	case 24: goto tr12;
	case 25: goto tr12;
	case 169: goto tr200;
	case 26: goto tr12;
	case 27: goto tr12;
	case 170: goto tr202;
	case 28: goto tr12;
	case 29: goto tr12;
	case 171: goto tr204;
	case 172: goto tr193;
	case 30: goto tr12;
	case 31: goto tr12;
	case 32: goto tr12;
	case 173: goto tr207;
	case 174: goto tr193;
	case 33: goto tr12;
	case 34: goto tr12;
	case 35: goto tr12;
	case 36: goto tr12;
	case 37: goto tr12;
	case 38: goto tr12;
	case 175: goto tr208;
	case 176: goto tr210;
	case 177: goto tr193;
	case 39: goto tr12;
	case 40: goto tr12;
	case 41: goto tr12;
	case 42: goto tr12;
	case 43: goto tr12;
	case 44: goto tr12;
	case 45: goto tr12;
	case 46: goto tr12;
	case 47: goto tr12;
	case 48: goto tr12;
	case 49: goto tr12;
	case 50: goto tr12;
	case 51: goto tr12;
	case 52: goto tr12;
	case 53: goto tr12;
	case 54: goto tr12;
	case 55: goto tr12;
	case 56: goto tr12;
	case 57: goto tr12;
	case 58: goto tr12;
	case 59: goto tr12;
	case 60: goto tr12;
	case 61: goto tr12;
	case 62: goto tr12;
	case 63: goto tr12;
	case 64: goto tr12;
	case 65: goto tr12;
	case 66: goto tr12;
	case 67: goto tr12;
	case 68: goto tr12;
	case 69: goto tr12;
	case 70: goto tr12;
	case 71: goto tr12;
	case 72: goto tr12;
	case 73: goto tr12;
	case 74: goto tr12;
	case 75: goto tr12;
	case 76: goto tr12;
	case 77: goto tr12;
	case 78: goto tr12;
	case 79: goto tr12;
	case 80: goto tr12;
	case 81: goto tr12;
	case 82: goto tr12;
	case 83: goto tr12;
	case 84: goto tr12;
	case 85: goto tr12;
	case 86: goto tr12;
	case 87: goto tr12;
	case 88: goto tr12;
	case 89: goto tr12;
	case 90: goto tr12;
	case 91: goto tr12;
	case 92: goto tr12;
	case 93: goto tr12;
	case 94: goto tr12;
	case 95: goto tr12;
	case 178: goto tr216;
	case 96: goto tr101;
	case 97: goto tr101;
	case 98: goto tr101;
	case 99: goto tr101;
	case 100: goto tr101;
	case 101: goto tr101;
	case 102: goto tr101;
	case 103: goto tr12;
	case 104: goto tr12;
	case 105: goto tr12;
	case 106: goto tr12;
	case 107: goto tr12;
	case 108: goto tr12;
	case 109: goto tr12;
	case 110: goto tr12;
	case 111: goto tr12;
	case 112: goto tr12;
	case 113: goto tr12;
	case 114: goto tr12;
	case 115: goto tr12;
	case 116: goto tr12;
	case 117: goto tr12;
	case 118: goto tr12;
	case 119: goto tr12;
	case 120: goto tr12;
	case 121: goto tr12;
	case 122: goto tr12;
	case 123: goto tr12;
	case 124: goto tr12;
	case 179: goto tr193;
	case 125: goto tr12;
	case 126: goto tr12;
	case 127: goto tr12;
	case 128: goto tr12;
	case 180: goto tr193;
	case 129: goto tr12;
	case 130: goto tr12;
	case 131: goto tr12;
	case 132: goto tr12;
	case 133: goto tr12;
	case 134: goto tr12;
	case 135: goto tr12;
	case 136: goto tr12;
	case 137: goto tr12;
	case 138: goto tr12;
	case 139: goto tr12;
	case 140: goto tr12;
	case 141: goto tr12;
	case 142: goto tr12;
	case 143: goto tr12;
	case 144: goto tr12;
	case 145: goto tr12;
	case 181: goto tr193;
	case 182: goto tr193;
	case 146: goto tr12;
	case 147: goto tr12;
	case 148: goto tr12;
	case 149: goto tr12;
	case 150: goto tr12;
	case 183: goto tr221;
	case 184: goto tr225;
	case 185: goto tr228;
	case 186: goto tr221;
	case 187: goto tr193;
	case 151: goto tr12;
	case 152: goto tr12;
	case 153: goto tr12;
	case 154: goto tr12;
	case 155: goto tr12;
	case 156: goto tr12;
	case 157: goto tr12;
	case 158: goto tr12;
	case 159: goto tr12;
	case 188: goto tr231;
	case 189: goto tr233;
	case 160: goto tr12;
	case 161: goto tr12;
	}
	}

	_out: {}
	}

#line 257 "../src/parsers/map.c.rl"
    f.cap[0].len = (size_t)(lmargin[f.branch] - f.cap[0].ptr);
    *fsm = f;

    if (f.cs == 0)
        return FSM_ERROR;
    if (f.cs >= 162)
        return FSM_OK;
    return FSM_INCOMPLETE;
}

#ifdef __cplusplus
}
#endif
