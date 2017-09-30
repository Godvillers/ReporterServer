
#line 1 "../src/parsers/allies.c.rl"
#include "parsers/parsers.h"

enum { BRANCHES = 4 };


#line 153 "../src/parsers/allies.c.rl"



#line 13 "../src/parsers/allies.c"
static const int allies_start = 524;
static const int allies_first_final = 524;
static const int allies_error = 0;

static const int allies_en_player = 491;
static const int allies_en_main = 524;


#line 156 "../src/parsers/allies.c.rl"

#ifdef __cplusplus
extern "C" {
#endif

void cParseAlliesInit(Fsm* fsm) {
    Fsm f = *fsm;
    
#line 31 "../src/parsers/allies.c"
	{
	 f.cs = allies_start;
	 f.ts = 0;
	 f.te = 0;
	 f.act = 0;
	}

#line 164 "../src/parsers/allies.c.rl"
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
    
#line 52 "../src/parsers/allies.c"
	{
	if ( ( f.p) == ( f.pe) )
		goto _test_eof;
	goto _resume;

_again:
	switch (  f.cs ) {
		case 524: goto st524;
		case 525: goto st525;
		case 1: goto st1;
		case 2: goto st2;
		case 3: goto st3;
		case 4: goto st4;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 526: goto st526;
		case 8: goto st8;
		case 9: goto st9;
		case 10: goto st10;
		case 11: goto st11;
		case 12: goto st12;
		case 13: goto st13;
		case 14: goto st14;
		case 15: goto st15;
		case 16: goto st16;
		case 527: goto st527;
		case 17: goto st17;
		case 528: goto st528;
		case 18: goto st18;
		case 19: goto st19;
		case 20: goto st20;
		case 21: goto st21;
		case 22: goto st22;
		case 23: goto st23;
		case 24: goto st24;
		case 25: goto st25;
		case 26: goto st26;
		case 27: goto st27;
		case 28: goto st28;
		case 29: goto st29;
		case 30: goto st30;
		case 31: goto st31;
		case 32: goto st32;
		case 33: goto st33;
		case 34: goto st34;
		case 35: goto st35;
		case 36: goto st36;
		case 37: goto st37;
		case 38: goto st38;
		case 39: goto st39;
		case 40: goto st40;
		case 41: goto st41;
		case 42: goto st42;
		case 43: goto st43;
		case 44: goto st44;
		case 45: goto st45;
		case 46: goto st46;
		case 47: goto st47;
		case 48: goto st48;
		case 49: goto st49;
		case 50: goto st50;
		case 51: goto st51;
		case 52: goto st52;
		case 53: goto st53;
		case 54: goto st54;
		case 55: goto st55;
		case 56: goto st56;
		case 57: goto st57;
		case 58: goto st58;
		case 59: goto st59;
		case 60: goto st60;
		case 61: goto st61;
		case 62: goto st62;
		case 63: goto st63;
		case 64: goto st64;
		case 65: goto st65;
		case 66: goto st66;
		case 67: goto st67;
		case 68: goto st68;
		case 69: goto st69;
		case 70: goto st70;
		case 71: goto st71;
		case 72: goto st72;
		case 73: goto st73;
		case 74: goto st74;
		case 75: goto st75;
		case 76: goto st76;
		case 77: goto st77;
		case 529: goto st529;
		case 78: goto st78;
		case 79: goto st79;
		case 80: goto st80;
		case 81: goto st81;
		case 82: goto st82;
		case 83: goto st83;
		case 84: goto st84;
		case 85: goto st85;
		case 86: goto st86;
		case 87: goto st87;
		case 88: goto st88;
		case 89: goto st89;
		case 530: goto st530;
		case 90: goto st90;
		case 91: goto st91;
		case 92: goto st92;
		case 93: goto st93;
		case 94: goto st94;
		case 95: goto st95;
		case 96: goto st96;
		case 97: goto st97;
		case 98: goto st98;
		case 99: goto st99;
		case 100: goto st100;
		case 101: goto st101;
		case 102: goto st102;
		case 531: goto st531;
		case 103: goto st103;
		case 104: goto st104;
		case 105: goto st105;
		case 106: goto st106;
		case 107: goto st107;
		case 108: goto st108;
		case 109: goto st109;
		case 110: goto st110;
		case 111: goto st111;
		case 112: goto st112;
		case 113: goto st113;
		case 114: goto st114;
		case 115: goto st115;
		case 116: goto st116;
		case 117: goto st117;
		case 118: goto st118;
		case 119: goto st119;
		case 120: goto st120;
		case 121: goto st121;
		case 122: goto st122;
		case 123: goto st123;
		case 124: goto st124;
		case 125: goto st125;
		case 126: goto st126;
		case 127: goto st127;
		case 128: goto st128;
		case 129: goto st129;
		case 130: goto st130;
		case 131: goto st131;
		case 132: goto st132;
		case 133: goto st133;
		case 134: goto st134;
		case 135: goto st135;
		case 136: goto st136;
		case 137: goto st137;
		case 138: goto st138;
		case 139: goto st139;
		case 140: goto st140;
		case 141: goto st141;
		case 142: goto st142;
		case 143: goto st143;
		case 144: goto st144;
		case 145: goto st145;
		case 146: goto st146;
		case 147: goto st147;
		case 148: goto st148;
		case 149: goto st149;
		case 150: goto st150;
		case 151: goto st151;
		case 152: goto st152;
		case 153: goto st153;
		case 154: goto st154;
		case 155: goto st155;
		case 156: goto st156;
		case 157: goto st157;
		case 158: goto st158;
		case 159: goto st159;
		case 160: goto st160;
		case 161: goto st161;
		case 162: goto st162;
		case 163: goto st163;
		case 164: goto st164;
		case 165: goto st165;
		case 166: goto st166;
		case 167: goto st167;
		case 168: goto st168;
		case 169: goto st169;
		case 170: goto st170;
		case 171: goto st171;
		case 172: goto st172;
		case 173: goto st173;
		case 174: goto st174;
		case 175: goto st175;
		case 176: goto st176;
		case 177: goto st177;
		case 178: goto st178;
		case 179: goto st179;
		case 180: goto st180;
		case 181: goto st181;
		case 182: goto st182;
		case 183: goto st183;
		case 184: goto st184;
		case 185: goto st185;
		case 186: goto st186;
		case 187: goto st187;
		case 188: goto st188;
		case 189: goto st189;
		case 190: goto st190;
		case 191: goto st191;
		case 192: goto st192;
		case 193: goto st193;
		case 194: goto st194;
		case 195: goto st195;
		case 196: goto st196;
		case 197: goto st197;
		case 198: goto st198;
		case 199: goto st199;
		case 200: goto st200;
		case 201: goto st201;
		case 202: goto st202;
		case 203: goto st203;
		case 204: goto st204;
		case 205: goto st205;
		case 206: goto st206;
		case 207: goto st207;
		case 208: goto st208;
		case 209: goto st209;
		case 210: goto st210;
		case 211: goto st211;
		case 532: goto st532;
		case 212: goto st212;
		case 213: goto st213;
		case 214: goto st214;
		case 215: goto st215;
		case 216: goto st216;
		case 217: goto st217;
		case 218: goto st218;
		case 219: goto st219;
		case 220: goto st220;
		case 221: goto st221;
		case 222: goto st222;
		case 223: goto st223;
		case 224: goto st224;
		case 225: goto st225;
		case 226: goto st226;
		case 227: goto st227;
		case 228: goto st228;
		case 229: goto st229;
		case 230: goto st230;
		case 231: goto st231;
		case 232: goto st232;
		case 233: goto st233;
		case 234: goto st234;
		case 533: goto st533;
		case 235: goto st235;
		case 236: goto st236;
		case 237: goto st237;
		case 238: goto st238;
		case 239: goto st239;
		case 240: goto st240;
		case 241: goto st241;
		case 242: goto st242;
		case 243: goto st243;
		case 244: goto st244;
		case 245: goto st245;
		case 246: goto st246;
		case 247: goto st247;
		case 248: goto st248;
		case 534: goto st534;
		case 249: goto st249;
		case 250: goto st250;
		case 251: goto st251;
		case 252: goto st252;
		case 253: goto st253;
		case 535: goto st535;
		case 254: goto st254;
		case 255: goto st255;
		case 256: goto st256;
		case 257: goto st257;
		case 258: goto st258;
		case 259: goto st259;
		case 260: goto st260;
		case 261: goto st261;
		case 262: goto st262;
		case 263: goto st263;
		case 264: goto st264;
		case 265: goto st265;
		case 266: goto st266;
		case 267: goto st267;
		case 268: goto st268;
		case 269: goto st269;
		case 270: goto st270;
		case 271: goto st271;
		case 272: goto st272;
		case 273: goto st273;
		case 274: goto st274;
		case 275: goto st275;
		case 276: goto st276;
		case 277: goto st277;
		case 278: goto st278;
		case 279: goto st279;
		case 280: goto st280;
		case 281: goto st281;
		case 282: goto st282;
		case 283: goto st283;
		case 284: goto st284;
		case 285: goto st285;
		case 286: goto st286;
		case 536: goto st536;
		case 287: goto st287;
		case 288: goto st288;
		case 289: goto st289;
		case 290: goto st290;
		case 291: goto st291;
		case 292: goto st292;
		case 293: goto st293;
		case 294: goto st294;
		case 295: goto st295;
		case 296: goto st296;
		case 297: goto st297;
		case 298: goto st298;
		case 299: goto st299;
		case 300: goto st300;
		case 301: goto st301;
		case 302: goto st302;
		case 303: goto st303;
		case 304: goto st304;
		case 305: goto st305;
		case 306: goto st306;
		case 307: goto st307;
		case 308: goto st308;
		case 309: goto st309;
		case 310: goto st310;
		case 311: goto st311;
		case 312: goto st312;
		case 313: goto st313;
		case 314: goto st314;
		case 315: goto st315;
		case 316: goto st316;
		case 317: goto st317;
		case 318: goto st318;
		case 319: goto st319;
		case 320: goto st320;
		case 321: goto st321;
		case 322: goto st322;
		case 323: goto st323;
		case 324: goto st324;
		case 325: goto st325;
		case 326: goto st326;
		case 327: goto st327;
		case 328: goto st328;
		case 329: goto st329;
		case 330: goto st330;
		case 331: goto st331;
		case 332: goto st332;
		case 333: goto st333;
		case 334: goto st334;
		case 335: goto st335;
		case 336: goto st336;
		case 337: goto st337;
		case 338: goto st338;
		case 339: goto st339;
		case 340: goto st340;
		case 341: goto st341;
		case 342: goto st342;
		case 343: goto st343;
		case 344: goto st344;
		case 345: goto st345;
		case 346: goto st346;
		case 347: goto st347;
		case 348: goto st348;
		case 349: goto st349;
		case 350: goto st350;
		case 351: goto st351;
		case 352: goto st352;
		case 353: goto st353;
		case 354: goto st354;
		case 355: goto st355;
		case 356: goto st356;
		case 357: goto st357;
		case 358: goto st358;
		case 359: goto st359;
		case 360: goto st360;
		case 361: goto st361;
		case 362: goto st362;
		case 363: goto st363;
		case 364: goto st364;
		case 365: goto st365;
		case 366: goto st366;
		case 367: goto st367;
		case 368: goto st368;
		case 369: goto st369;
		case 370: goto st370;
		case 371: goto st371;
		case 372: goto st372;
		case 373: goto st373;
		case 374: goto st374;
		case 375: goto st375;
		case 376: goto st376;
		case 377: goto st377;
		case 378: goto st378;
		case 379: goto st379;
		case 380: goto st380;
		case 381: goto st381;
		case 382: goto st382;
		case 383: goto st383;
		case 384: goto st384;
		case 385: goto st385;
		case 386: goto st386;
		case 387: goto st387;
		case 388: goto st388;
		case 389: goto st389;
		case 390: goto st390;
		case 391: goto st391;
		case 392: goto st392;
		case 393: goto st393;
		case 394: goto st394;
		case 395: goto st395;
		case 396: goto st396;
		case 397: goto st397;
		case 398: goto st398;
		case 399: goto st399;
		case 400: goto st400;
		case 401: goto st401;
		case 402: goto st402;
		case 403: goto st403;
		case 404: goto st404;
		case 405: goto st405;
		case 406: goto st406;
		case 407: goto st407;
		case 408: goto st408;
		case 409: goto st409;
		case 410: goto st410;
		case 411: goto st411;
		case 412: goto st412;
		case 413: goto st413;
		case 414: goto st414;
		case 415: goto st415;
		case 416: goto st416;
		case 417: goto st417;
		case 418: goto st418;
		case 419: goto st419;
		case 420: goto st420;
		case 421: goto st421;
		case 422: goto st422;
		case 423: goto st423;
		case 424: goto st424;
		case 425: goto st425;
		case 426: goto st426;
		case 427: goto st427;
		case 428: goto st428;
		case 429: goto st429;
		case 430: goto st430;
		case 431: goto st431;
		case 432: goto st432;
		case 433: goto st433;
		case 434: goto st434;
		case 435: goto st435;
		case 436: goto st436;
		case 437: goto st437;
		case 438: goto st438;
		case 439: goto st439;
		case 440: goto st440;
		case 441: goto st441;
		case 442: goto st442;
		case 443: goto st443;
		case 444: goto st444;
		case 445: goto st445;
		case 446: goto st446;
		case 447: goto st447;
		case 448: goto st448;
		case 449: goto st449;
		case 450: goto st450;
		case 451: goto st451;
		case 452: goto st452;
		case 453: goto st453;
		case 454: goto st454;
		case 455: goto st455;
		case 456: goto st456;
		case 457: goto st457;
		case 458: goto st458;
		case 459: goto st459;
		case 460: goto st460;
		case 461: goto st461;
		case 462: goto st462;
		case 463: goto st463;
		case 464: goto st464;
		case 465: goto st465;
		case 466: goto st466;
		case 467: goto st467;
		case 468: goto st468;
		case 469: goto st469;
		case 470: goto st470;
		case 471: goto st471;
		case 472: goto st472;
		case 473: goto st473;
		case 474: goto st474;
		case 475: goto st475;
		case 476: goto st476;
		case 477: goto st477;
		case 478: goto st478;
		case 479: goto st479;
		case 480: goto st480;
		case 481: goto st481;
		case 482: goto st482;
		case 483: goto st483;
		case 484: goto st484;
		case 485: goto st485;
		case 486: goto st486;
		case 537: goto st537;
		case 487: goto st487;
		case 488: goto st488;
		case 489: goto st489;
		case 490: goto st490;
		case 491: goto st491;
		case 492: goto st492;
		case 493: goto st493;
		case 494: goto st494;
		case 495: goto st495;
		case 496: goto st496;
		case 497: goto st497;
		case 498: goto st498;
		case 499: goto st499;
		case 0: goto st0;
		case 500: goto st500;
		case 501: goto st501;
		case 502: goto st502;
		case 503: goto st503;
		case 504: goto st504;
		case 505: goto st505;
		case 506: goto st506;
		case 507: goto st507;
		case 508: goto st508;
		case 509: goto st509;
		case 510: goto st510;
		case 511: goto st511;
		case 512: goto st512;
		case 513: goto st513;
		case 514: goto st514;
		case 515: goto st515;
		case 516: goto st516;
		case 517: goto st517;
		case 518: goto st518;
		case 519: goto st519;
		case 538: goto st538;
		case 520: goto st520;
		case 521: goto st521;
		case 522: goto st522;
		case 523: goto st523;
	default: break;
	}

	if ( ++( f.p) == ( f.pe) )
		goto _test_eof;
_resume:
	switch (  f.cs )
	{
tr0:
#line 151 "../src/parsers/allies.c.rl"
	{{( f.p) = (( f.te))-1;}}
	goto st524;
tr7:
#line 64 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;{
        f.cap[1].len = f.cap[2].len = 0;
        {goto st491;}
    }}
	goto st524;
tr14:
#line 83 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 2;
        {( f.p)++;  f.cs = 524; goto _out;}
    }}
	goto st524;
tr51:
#line 1 "NONE"
	{	switch(  f.act ) {
	case 3:
	{{( f.p) = (( f.te))-1;}
        f.branch = 3;
        {( f.p)++;  f.cs = 524; goto _out;}
    }
	break;
	default:
	{{( f.p) = (( f.te))-1;}}
	break;
	}
	}
	goto st524;
tr52:
#line 88 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 3;
        {( f.p)++;  f.cs = 524; goto _out;}
    }}
	goto st524;
tr86:
#line 88 "../src/parsers/allies.c.rl"
	{{( f.p) = (( f.te))-1;}{
        f.branch = 3;
        {( f.p)++;  f.cs = 524; goto _out;}
    }}
	goto st524;
tr500:
#line 93 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;{
        f.branch = 4;
        ( f.p)--;
        {( f.p)++;  f.cs = 524; goto _out;}
    }}
	goto st524;
tr550:
#line 151 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p)+1;}
	goto st524;
tr556:
#line 151 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p);( f.p)--;}
	goto st524;
tr559:
#line 88 "../src/parsers/allies.c.rl"
	{ f.te = ( f.p);( f.p)--;{
        f.branch = 3;
        {( f.p)++;  f.cs = 524; goto _out;}
    }}
	goto st524;
st524:
#line 1 "NONE"
	{ f.ts = 0;}
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof524;
case 524:
#line 1 "NONE"
	{ f.ts = ( f.p);}
#line 685 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case -30: goto tr551;
		case 13: goto tr553;
		case 32: goto tr552;
		case 60: goto tr554;
		case 62: goto tr555;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 12 )
		goto tr552;
	goto tr550;
tr551:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 12 "../src/parsers/allies.c.rl"
	{
        lmargin[1] = ( f.p);
    }
	goto st525;
st525:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof525;
case 525:
#line 708 "../src/parsers/allies.c"
	if ( (*( f.p)) == -106 )
		goto st1;
	goto tr556;
st1:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof1;
case 1:
	if ( (*( f.p)) == -68 )
		goto st2;
	goto tr0;
st2:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof2;
case 2:
	switch( (*( f.p)) ) {
		case 32: goto st2;
		case 60: goto tr2;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st2;
	goto tr0;
tr2:
#line 28 "../src/parsers/allies.c.rl"
	{
        rmargin1 = ( f.p);
    }
	goto st3;
st3:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof3;
case 3:
#line 740 "../src/parsers/allies.c"
	if ( (*( f.p)) == 47 )
		goto st4;
	goto tr0;
st4:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof4;
case 4:
	if ( (*( f.p)) == 100 )
		goto st5;
	goto tr0;
st5:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof5;
case 5:
	if ( (*( f.p)) == 105 )
		goto st6;
	goto tr0;
st6:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof6;
case 6:
	if ( (*( f.p)) == 118 )
		goto st7;
	goto tr0;
st7:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof7;
case 7:
	if ( (*( f.p)) == 62 )
		goto tr7;
	goto tr0;
tr552:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 16 "../src/parsers/allies.c.rl"
	{
        lmargin[2] = ( f.p);
    }
	goto st526;
st526:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof526;
case 526:
#line 784 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 115: goto st8;
		case 116: goto st15;
	}
	goto tr556;
st8:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof8;
case 8:
	if ( (*( f.p)) == 116 )
		goto st9;
	goto tr0;
st9:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof9;
case 9:
	if ( (*( f.p)) == 121 )
		goto st10;
	goto tr0;
st10:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof10;
case 10:
	if ( (*( f.p)) == 108 )
		goto st11;
	goto tr0;
st11:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof11;
case 11:
	if ( (*( f.p)) == 101 )
		goto st12;
	goto tr0;
st12:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof12;
case 12:
	if ( (*( f.p)) == 61 )
		goto st13;
	goto tr0;
st13:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof13;
case 13:
	if ( (*( f.p)) == 34 )
		goto st14;
	goto tr0;
st14:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof14;
case 14:
	if ( (*( f.p)) == 34 )
		goto tr14;
	goto st14;
st15:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof15;
case 15:
	if ( (*( f.p)) == 105 )
		goto st16;
	goto tr0;
st16:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof16;
case 16:
	if ( (*( f.p)) == 116 )
		goto st10;
	goto tr0;
tr553:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 16 "../src/parsers/allies.c.rl"
	{
        lmargin[2] = ( f.p);
    }
	goto st527;
st527:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof527;
case 527:
#line 865 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 10: goto st17;
		case 115: goto st8;
		case 116: goto st15;
	}
	goto tr556;
st17:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof17;
case 17:
	switch( (*( f.p)) ) {
		case 115: goto st8;
		case 116: goto st15;
	}
	goto tr0;
tr554:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 20 "../src/parsers/allies.c.rl"
	{
        lmargin[3] = ( f.p);
    }
#line 151 "../src/parsers/allies.c.rl"
	{ f.act = 5;}
	goto st528;
st528:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof528;
case 528:
#line 895 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr556;
		case 62: goto tr556;
		case 97: goto st155;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st18:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof18;
case 18:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st19:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof19;
case 19:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st20;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st20:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof20;
case 20:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 108: goto st114;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st21:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof21;
case 21:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 100: goto st22;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st22:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof22;
case 22:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 61: goto st23;
		case 105: goto st21;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else if ( (*( f.p)) >= 9 )
		goto st19;
	goto st18;
st23:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof23;
case 23:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 34: goto st24;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st24:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof24;
case 24:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 101: goto st25;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st25:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof25;
case 25:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 95: goto st26;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st26:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof26;
case 26:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st27;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st27:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof27;
case 27:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 108: goto st28;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st28:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof28;
case 28:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 108: goto st29;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st29:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof29;
case 29:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 121: goto st30;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st30:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof30;
case 30:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 95: goto st31;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st31:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof31;
case 31:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 98: goto st32;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st32:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof32;
case 32:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 108: goto st33;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st33:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof33;
case 33:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st34;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st34:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof34;
case 34:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st35;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st35:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof35;
case 35:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 107: goto st36;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st36:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof36;
case 36:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 108: goto st37;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st37:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof37;
case 37:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st38;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st38:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof38;
case 38:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 100: goto st22;
		case 105: goto st21;
		case 115: goto st39;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st39:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof39;
case 39:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 116: goto st40;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st40:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof40;
case 40:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 60: goto st42;
		case 62: goto st48;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st41:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof41;
case 41:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 60: goto st42;
		case 62: goto st48;
		case 99: goto st49;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st42:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof42;
case 42:
	if ( (*( f.p)) == 47 )
		goto st43;
	goto tr0;
st43:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof43;
case 43:
	if ( (*( f.p)) == 115 )
		goto st44;
	goto tr0;
st44:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof44;
case 44:
	if ( (*( f.p)) == 112 )
		goto st45;
	goto tr0;
st45:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof45;
case 45:
	if ( (*( f.p)) == 97 )
		goto st46;
	goto tr0;
st46:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof46;
case 46:
	if ( (*( f.p)) == 110 )
		goto st47;
	goto tr0;
st47:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof47;
case 47:
	if ( (*( f.p)) == 62 )
		goto tr52;
	goto tr51;
st48:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof48;
case 48:
	if ( (*( f.p)) == 60 )
		goto st42;
	goto st48;
st49:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof49;
case 49:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 60: goto st42;
		case 62: goto st48;
		case 108: goto st50;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st50:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof50;
case 50:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 60: goto st42;
		case 62: goto st48;
		case 97: goto st51;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st51:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof51;
case 51:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 60: goto st42;
		case 62: goto st48;
		case 115: goto st52;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st52:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof52;
case 52:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 60: goto st42;
		case 62: goto st48;
		case 115: goto st53;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st53:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof53;
case 53:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 60: goto st42;
		case 61: goto st54;
		case 62: goto st48;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st54:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof54;
case 54:
	switch( (*( f.p)) ) {
		case 32: goto st41;
		case 34: goto st55;
		case 60: goto st42;
		case 62: goto st48;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st41;
	goto st40;
st55:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof55;
case 55:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st106;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st56:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof56;
case 56:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 99: goto st103;
		case 108: goto st106;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st57:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof57;
case 57:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 47: goto st85;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st58:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof58;
case 58:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st59:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof59;
case 59:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 95: goto st60;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st60:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof60;
case 60:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st59;
		case 114: goto st59;
		case 115: goto st61;
	}
	goto st58;
st61:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof61;
case 61:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st62;
		case 114: goto st59;
	}
	goto st58;
st62:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof62;
case 62:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 95: goto st60;
		case 108: goto st59;
		case 111: goto st63;
		case 114: goto st59;
	}
	goto st58;
st63:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof63;
case 63:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st59;
		case 114: goto st59;
		case 116: goto st64;
	}
	goto st58;
st64:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof64;
case 64:
	if ( (*( f.p)) == 60 )
		goto st65;
	goto st64;
st65:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof65;
case 65:
	switch( (*( f.p)) ) {
		case 47: goto st66;
		case 60: goto st65;
	}
	goto st64;
st66:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof66;
case 66:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 115: goto st67;
	}
	goto st64;
st67:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof67;
case 67:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 112: goto st68;
	}
	goto st64;
st68:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof68;
case 68:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 97: goto st69;
	}
	goto st64;
st69:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof69;
case 69:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 110: goto st70;
	}
	goto st64;
st70:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof70;
case 70:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st71;
	}
	goto st64;
st71:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof71;
case 71:
	switch( (*( f.p)) ) {
		case 32: goto st71;
		case 60: goto st72;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st71;
	goto st64;
st72:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof72;
case 72:
	switch( (*( f.p)) ) {
		case 47: goto st73;
		case 60: goto st65;
	}
	goto st64;
st73:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof73;
case 73:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 115: goto st74;
	}
	goto st64;
st74:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof74;
case 74:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 112: goto st75;
	}
	goto st64;
st75:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof75;
case 75:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 97: goto st76;
	}
	goto st64;
st76:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof76;
case 76:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 110: goto st77;
	}
	goto st64;
st77:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof77;
case 77:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto tr85;
	}
	goto st64;
tr85:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st529;
st529:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof529;
case 529:
#line 1607 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st78;
		case 60: goto st79;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st78;
	goto tr559;
st78:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof78;
case 78:
	switch( (*( f.p)) ) {
		case 32: goto st78;
		case 60: goto st79;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st78;
	goto tr86;
st79:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof79;
case 79:
	if ( (*( f.p)) == 47 )
		goto st80;
	goto tr86;
st80:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof80;
case 80:
	if ( (*( f.p)) == 115 )
		goto st81;
	goto tr86;
st81:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof81;
case 81:
	if ( (*( f.p)) == 112 )
		goto st82;
	goto tr86;
st82:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof82;
case 82:
	if ( (*( f.p)) == 97 )
		goto st83;
	goto tr86;
st83:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof83;
case 83:
	if ( (*( f.p)) == 110 )
		goto st84;
	goto tr86;
st84:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof84;
case 84:
	if ( (*( f.p)) == 62 )
		goto tr52;
	goto tr86;
st85:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof85;
case 85:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 108: goto st59;
		case 114: goto st59;
		case 115: goto st86;
	}
	goto st58;
st86:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof86;
case 86:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 108: goto st59;
		case 112: goto st87;
		case 114: goto st59;
	}
	goto st58;
st87:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof87;
case 87:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 97: goto st88;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st88:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof88;
case 88:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 108: goto st59;
		case 110: goto st89;
		case 114: goto st59;
	}
	goto st58;
st89:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof89;
case 89:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 62: goto tr98;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
tr98:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 88 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st530;
st530:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof530;
case 530:
#line 1733 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 34: goto tr559;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st90:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof90;
case 90:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st57;
		case 108: goto st91;
		case 114: goto st91;
	}
	goto st90;
st91:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof91;
case 91:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st57;
		case 95: goto st92;
		case 108: goto st91;
		case 114: goto st91;
	}
	goto st90;
st92:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof92;
case 92:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st57;
		case 108: goto st91;
		case 114: goto st91;
		case 115: goto st93;
	}
	goto st90;
st93:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof93;
case 93:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st57;
		case 108: goto st94;
		case 114: goto st91;
	}
	goto st90;
st94:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof94;
case 94:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st57;
		case 95: goto st92;
		case 108: goto st91;
		case 111: goto st95;
		case 114: goto st91;
	}
	goto st90;
st95:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof95;
case 95:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st57;
		case 108: goto st91;
		case 114: goto st91;
		case 116: goto st96;
	}
	goto st90;
st96:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof96;
case 96:
	if ( (*( f.p)) == 60 )
		goto st97;
	goto st96;
st97:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof97;
case 97:
	switch( (*( f.p)) ) {
		case 47: goto st98;
		case 60: goto st65;
	}
	goto st64;
st98:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof98;
case 98:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 115: goto st99;
	}
	goto st64;
st99:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof99;
case 99:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 112: goto st100;
	}
	goto st64;
st100:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof100;
case 100:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 97: goto st101;
	}
	goto st64;
st101:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof101;
case 101:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 110: goto st102;
	}
	goto st64;
st102:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof102;
case 102:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto tr111;
	}
	goto st64;
tr111:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 88 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st531;
st531:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof531;
case 531:
#line 1882 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st71;
		case 60: goto st72;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st71;
	goto st64;
st103:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof103;
case 103:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st104;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st104:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof104;
case 104:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 95: goto st105;
		case 97: goto st110;
		case 108: goto st106;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st105:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof105;
case 105:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st106;
		case 114: goto st106;
		case 115: goto st107;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st106:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof106;
case 106:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 95: goto st105;
		case 108: goto st106;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st107:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof107;
case 107:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st108;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st108:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof108;
case 108:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 95: goto st105;
		case 108: goto st106;
		case 111: goto st109;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st109:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof109;
case 109:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st106;
		case 114: goto st106;
		case 116: goto st96;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st110:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof110;
case 110:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st106;
		case 114: goto st106;
		case 115: goto st111;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st111:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof111;
case 111:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st106;
		case 114: goto st106;
		case 115: goto st112;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st112:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof112;
case 112:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 34: goto st40;
		case 60: goto st57;
		case 61: goto st113;
		case 62: goto st90;
		case 108: goto st106;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st113:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof113;
case 113:
	switch( (*( f.p)) ) {
		case 32: goto st56;
		case 60: goto st57;
		case 62: goto st90;
		case 108: goto st106;
		case 114: goto st106;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st56;
	goto st55;
st114:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof114;
case 114:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st115;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st115:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof115;
case 115:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 115: goto st116;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st116:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof116;
case 116:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
		case 115: goto st117;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st117:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof117;
case 117:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 61: goto st118;
		case 105: goto st21;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else if ( (*( f.p)) >= 9 )
		goto st19;
	goto st18;
st118:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof118;
case 118:
	switch( (*( f.p)) ) {
		case 32: goto st19;
		case 34: goto st119;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st21;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st19;
	goto st18;
st119:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof119;
case 119:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st120:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof120;
case 120:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 99: goto st121;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st121:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof121;
case 121:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st150;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st122:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof122;
case 122:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 100: goto st123;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st123:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof123;
case 123:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 61: goto st124;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto st58;
	} else if ( (*( f.p)) >= 9 )
		goto st120;
	goto st119;
st124:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof124;
case 124:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st24;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st125:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof125;
case 125:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 95: goto st126;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st126:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof126;
case 126:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
		case 115: goto st127;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st127:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof127;
case 127:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st128;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st128:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof128;
case 128:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 95: goto st126;
		case 105: goto st122;
		case 108: goto st125;
		case 111: goto st129;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st129:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof129;
case 129:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
		case 116: goto st130;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st130:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof130;
case 130:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
	}
	goto st130;
st131:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof131;
case 131:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 100: goto st132;
		case 105: goto st131;
	}
	goto st130;
st132:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof132;
case 132:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 61: goto st133;
		case 62: goto st64;
		case 105: goto st131;
	}
	goto st130;
st133:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof133;
case 133:
	switch( (*( f.p)) ) {
		case 34: goto st134;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
	}
	goto st130;
st134:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof134;
case 134:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 101: goto st135;
		case 105: goto st131;
	}
	goto st130;
st135:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof135;
case 135:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 95: goto st136;
		case 105: goto st131;
	}
	goto st130;
st136:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof136;
case 136:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 97: goto st137;
		case 105: goto st131;
	}
	goto st130;
st137:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof137;
case 137:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
		case 108: goto st138;
	}
	goto st130;
st138:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof138;
case 138:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
		case 108: goto st139;
	}
	goto st130;
st139:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof139;
case 139:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
		case 121: goto st140;
	}
	goto st130;
st140:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof140;
case 140:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 95: goto st141;
		case 105: goto st131;
	}
	goto st130;
st141:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof141;
case 141:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 98: goto st142;
		case 105: goto st131;
	}
	goto st130;
st142:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof142;
case 142:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
		case 108: goto st143;
	}
	goto st130;
st143:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof143;
case 143:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 97: goto st144;
		case 105: goto st131;
	}
	goto st130;
st144:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof144;
case 144:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 99: goto st145;
		case 105: goto st131;
	}
	goto st130;
st145:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof145;
case 145:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
		case 107: goto st146;
	}
	goto st130;
st146:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof146;
case 146:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
		case 108: goto st147;
	}
	goto st130;
st147:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof147;
case 147:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st148;
	}
	goto st130;
st148:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof148;
case 148:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 100: goto st132;
		case 105: goto st131;
		case 115: goto st149;
	}
	goto st130;
st149:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof149;
case 149:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st131;
		case 116: goto st96;
	}
	goto st130;
st150:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof150;
case 150:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 95: goto st126;
		case 97: goto st151;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st151:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof151;
case 151:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
		case 115: goto st152;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st152:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof152;
case 152:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
		case 115: goto st153;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st153:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof153;
case 153:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 34: goto st18;
		case 61: goto st154;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto st58;
	} else if ( (*( f.p)) >= 9 )
		goto st120;
	goto st119;
st154:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof154;
case 154:
	switch( (*( f.p)) ) {
		case 32: goto st120;
		case 60: goto st58;
		case 62: goto st58;
		case 105: goto st122;
		case 108: goto st125;
		case 114: goto st125;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st120;
	goto st119;
st155:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof155;
case 155:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st156:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof156;
case 156:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st157;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st157:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof157;
case 157:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 108: goto st353;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st158:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof158;
case 158:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 100: goto st159;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st159:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof159;
case 159:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 61: goto st160;
		case 105: goto st158;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else if ( (*( f.p)) >= 9 )
		goto st156;
	goto st155;
st160:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof160;
case 160:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 34: goto st161;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st161:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof161;
case 161:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 101: goto st162;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st162:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof162;
case 162:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 95: goto st163;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st163:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof163;
case 163:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st164;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st164:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof164;
case 164:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 108: goto st165;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st165:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof165;
case 165:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 108: goto st166;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st166:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof166;
case 166:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 121: goto st167;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st167:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof167;
case 167:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 95: goto st168;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st168:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof168;
case 168:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 98: goto st169;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st169:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof169;
case 169:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 108: goto st170;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st170:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof170;
case 170:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st171;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st171:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof171;
case 171:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 99: goto st172;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st172:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof172;
case 172:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 107: goto st173;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st173:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof173;
case 173:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 108: goto st174;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st174:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof174;
case 174:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st175;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st175:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof175;
case 175:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 100: goto st159;
		case 105: goto st158;
		case 115: goto st176;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st176:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof176;
case 176:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 116: goto st177;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st177:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof177;
case 177:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 60: goto st42;
		case 62: goto st48;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st178:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof178;
case 178:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 60: goto st42;
		case 62: goto st48;
		case 99: goto st179;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st179:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof179;
case 179:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 60: goto st42;
		case 62: goto st48;
		case 108: goto st180;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st180:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof180;
case 180:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 60: goto st42;
		case 62: goto st48;
		case 97: goto st181;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st181:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof181;
case 181:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 60: goto st42;
		case 62: goto st48;
		case 115: goto st182;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st182:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof182;
case 182:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 60: goto st42;
		case 62: goto st48;
		case 115: goto st183;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st183:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof183;
case 183:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 60: goto st42;
		case 61: goto st184;
		case 62: goto st48;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st184:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof184;
case 184:
	switch( (*( f.p)) ) {
		case 32: goto st178;
		case 34: goto st185;
		case 60: goto st42;
		case 62: goto st48;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st178;
	goto st177;
st185:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof185;
case 185:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st186:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof186;
case 186:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 99: goto st293;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st187:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof187;
case 187:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 47: goto st249;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st188:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof188;
case 188:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st189:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof189;
case 189:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 95: goto st190;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st190:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof190;
case 190:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
		case 115: goto st212;
	}
	goto st188;
st191:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof191;
case 191:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st189;
		case 109: goto st192;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st192:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof192;
case 192:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 95: goto st193;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st193:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof193;
case 193:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st194;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st194:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof194;
case 194:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 95: goto st190;
		case 105: goto st195;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st195:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof195;
case 195:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st189;
		case 110: goto st196;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st196:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof196;
case 196:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 107: goto st197;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st197:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof197;
case 197:
	switch( (*( f.p)) ) {
		case 34: goto st198;
		case 60: goto st201;
		case 108: goto st203;
		case 114: goto st203;
	}
	goto st197;
st198:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof198;
case 198:
	if ( (*( f.p)) == 60 )
		goto st199;
	goto st198;
st199:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof199;
case 199:
	if ( (*( f.p)) == 47 )
		goto st200;
	goto tr51;
st200:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof200;
case 200:
	if ( (*( f.p)) == 97 )
		goto st47;
	goto tr51;
st201:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof201;
case 201:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 47: goto st202;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st202:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof202;
case 202:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 97: goto st89;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st203:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof203;
case 203:
	switch( (*( f.p)) ) {
		case 34: goto st198;
		case 60: goto st201;
		case 95: goto st204;
		case 108: goto st203;
		case 114: goto st203;
	}
	goto st197;
st204:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof204;
case 204:
	switch( (*( f.p)) ) {
		case 34: goto st198;
		case 60: goto st201;
		case 108: goto st203;
		case 114: goto st203;
		case 115: goto st205;
	}
	goto st197;
st205:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof205;
case 205:
	switch( (*( f.p)) ) {
		case 34: goto st198;
		case 60: goto st201;
		case 108: goto st206;
		case 114: goto st203;
	}
	goto st197;
st206:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof206;
case 206:
	switch( (*( f.p)) ) {
		case 34: goto st198;
		case 60: goto st201;
		case 95: goto st204;
		case 108: goto st203;
		case 111: goto st207;
		case 114: goto st203;
	}
	goto st197;
st207:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof207;
case 207:
	switch( (*( f.p)) ) {
		case 34: goto st198;
		case 60: goto st201;
		case 108: goto st203;
		case 114: goto st203;
		case 116: goto st208;
	}
	goto st197;
st208:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof208;
case 208:
	if ( (*( f.p)) == 60 )
		goto st209;
	goto st208;
st209:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof209;
case 209:
	switch( (*( f.p)) ) {
		case 47: goto st210;
		case 60: goto st65;
	}
	goto st64;
st210:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof210;
case 210:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 97: goto st211;
		case 115: goto st67;
	}
	goto st64;
st211:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof211;
case 211:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 62: goto tr225;
	}
	goto st64;
tr225:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 88 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st532;
st532:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof532;
case 532:
#line 3346 "../src/parsers/allies.c"
	if ( (*( f.p)) == 60 )
		goto st65;
	goto st64;
st212:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof212;
case 212:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st213;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st213:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof213;
case 213:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 95: goto st190;
		case 108: goto st189;
		case 111: goto st214;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st214:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof214;
case 214:
	switch( (*( f.p)) ) {
		case 34: goto tr51;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
		case 116: goto st215;
	}
	goto st188;
st215:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof215;
case 215:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 112: goto st218;
	}
	goto st215;
st216:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof216;
case 216:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 47: goto st217;
		case 60: goto st216;
		case 112: goto st218;
	}
	goto st215;
st217:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof217;
case 217:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 112: goto st218;
		case 115: goto st224;
	}
	goto st215;
st218:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof218;
case 218:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 109: goto st219;
		case 112: goto st218;
	}
	goto st215;
st219:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof219;
case 219:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 95: goto st220;
		case 112: goto st218;
	}
	goto st215;
st220:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof220;
case 220:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 108: goto st221;
		case 112: goto st218;
	}
	goto st215;
st221:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof221;
case 221:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 105: goto st222;
		case 112: goto st218;
	}
	goto st215;
st222:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof222;
case 222:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 110: goto st223;
		case 112: goto st218;
	}
	goto st215;
st223:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof223;
case 223:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 107: goto st208;
		case 112: goto st218;
	}
	goto st215;
st224:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof224;
case 224:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 112: goto st225;
	}
	goto st215;
st225:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof225;
case 225:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 97: goto st226;
		case 109: goto st219;
		case 112: goto st218;
	}
	goto st215;
st226:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof226;
case 226:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 110: goto st227;
		case 112: goto st218;
	}
	goto st215;
st227:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof227;
case 227:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 62: goto st228;
		case 112: goto st218;
	}
	goto st215;
st228:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof228;
case 228:
	switch( (*( f.p)) ) {
		case 32: goto st228;
		case 34: goto st64;
		case 60: goto st229;
		case 112: goto st218;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st228;
	goto st215;
st229:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof229;
case 229:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 47: goto st230;
		case 60: goto st216;
		case 112: goto st218;
	}
	goto st215;
st230:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof230;
case 230:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 112: goto st218;
		case 115: goto st231;
	}
	goto st215;
st231:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof231;
case 231:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 112: goto st232;
	}
	goto st215;
st232:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof232;
case 232:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 97: goto st233;
		case 109: goto st219;
		case 112: goto st218;
	}
	goto st215;
st233:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof233;
case 233:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 110: goto st234;
		case 112: goto st218;
	}
	goto st215;
st234:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof234;
case 234:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 62: goto tr248;
		case 112: goto st218;
	}
	goto st215;
tr248:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 88 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st533;
st533:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof533;
case 533:
#line 3617 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st242;
		case 34: goto tr559;
		case 60: goto st243;
		case 112: goto st236;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st242;
	goto st235;
st235:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof235;
case 235:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 112: goto st236;
	}
	goto st235;
st236:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof236;
case 236:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 109: goto st237;
		case 112: goto st236;
	}
	goto st235;
st237:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof237;
case 237:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 95: goto st238;
		case 112: goto st236;
	}
	goto st235;
st238:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof238;
case 238:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 108: goto st239;
		case 112: goto st236;
	}
	goto st235;
st239:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof239;
case 239:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 105: goto st240;
		case 112: goto st236;
	}
	goto st235;
st240:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof240;
case 240:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 110: goto st241;
		case 112: goto st236;
	}
	goto st235;
st241:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof241;
case 241:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 107: goto st198;
		case 112: goto st236;
	}
	goto st235;
st242:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof242;
case 242:
	switch( (*( f.p)) ) {
		case 32: goto st242;
		case 34: goto tr86;
		case 60: goto st243;
		case 112: goto st236;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st242;
	goto st235;
st243:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof243;
case 243:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 47: goto st244;
		case 112: goto st236;
	}
	goto st235;
st244:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof244;
case 244:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 112: goto st236;
		case 115: goto st245;
	}
	goto st235;
st245:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof245;
case 245:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 112: goto st246;
	}
	goto st235;
st246:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof246;
case 246:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 97: goto st247;
		case 109: goto st237;
		case 112: goto st236;
	}
	goto st235;
st247:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof247;
case 247:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 110: goto st248;
		case 112: goto st236;
	}
	goto st235;
st248:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof248;
case 248:
	switch( (*( f.p)) ) {
		case 34: goto tr86;
		case 62: goto tr263;
		case 112: goto st236;
	}
	goto st235;
tr263:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 88 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st534;
st534:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof534;
case 534:
#line 3779 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 34: goto tr559;
		case 112: goto st236;
	}
	goto st235;
st249:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof249;
case 249:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
		case 115: goto st250;
	}
	goto st188;
st250:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof250;
case 250:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 108: goto st189;
		case 112: goto st251;
		case 114: goto st189;
	}
	goto st188;
st251:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof251;
case 251:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 97: goto st252;
		case 108: goto st189;
		case 109: goto st192;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st252:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof252;
case 252:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 108: goto st189;
		case 110: goto st253;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st253:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof253;
case 253:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 62: goto tr268;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
tr268:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 88 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st535;
st535:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof535;
case 535:
#line 3855 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 34: goto tr559;
		case 108: goto st189;
		case 112: goto st191;
		case 114: goto st189;
	}
	goto st188;
st254:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof254;
case 254:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 108: goto st255;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st255:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof255;
case 255:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 95: goto st256;
		case 108: goto st255;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st256:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof256;
case 256:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 108: goto st255;
		case 112: goto st257;
		case 114: goto st255;
		case 115: goto st277;
	}
	goto st254;
st257:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof257;
case 257:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 108: goto st255;
		case 109: goto st258;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st258:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof258;
case 258:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 95: goto st259;
		case 108: goto st255;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st259:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof259;
case 259:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 108: goto st260;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st260:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof260;
case 260:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 95: goto st256;
		case 105: goto st261;
		case 108: goto st255;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st261:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof261;
case 261:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 108: goto st255;
		case 110: goto st262;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st262:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof262;
case 262:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 107: goto st263;
		case 108: goto st255;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st263:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof263;
case 263:
	switch( (*( f.p)) ) {
		case 34: goto st264;
		case 60: goto st267;
		case 108: goto st269;
		case 114: goto st269;
	}
	goto st263;
st264:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof264;
case 264:
	if ( (*( f.p)) == 60 )
		goto st265;
	goto st264;
st265:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof265;
case 265:
	if ( (*( f.p)) == 47 )
		goto st266;
	goto tr0;
st266:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof266;
case 266:
	switch( (*( f.p)) ) {
		case 97: goto st47;
		case 115: goto st44;
	}
	goto tr0;
st267:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof267;
case 267:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 47: goto st268;
		case 108: goto st59;
		case 114: goto st59;
	}
	goto st58;
st268:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof268;
case 268:
	switch( (*( f.p)) ) {
		case 34: goto tr0;
		case 97: goto st89;
		case 108: goto st59;
		case 114: goto st59;
		case 115: goto st86;
	}
	goto st58;
st269:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof269;
case 269:
	switch( (*( f.p)) ) {
		case 34: goto st264;
		case 60: goto st267;
		case 95: goto st270;
		case 108: goto st269;
		case 114: goto st269;
	}
	goto st263;
st270:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof270;
case 270:
	switch( (*( f.p)) ) {
		case 34: goto st264;
		case 60: goto st267;
		case 108: goto st269;
		case 114: goto st269;
		case 115: goto st271;
	}
	goto st263;
st271:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof271;
case 271:
	switch( (*( f.p)) ) {
		case 34: goto st264;
		case 60: goto st267;
		case 108: goto st272;
		case 114: goto st269;
	}
	goto st263;
st272:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof272;
case 272:
	switch( (*( f.p)) ) {
		case 34: goto st264;
		case 60: goto st267;
		case 95: goto st270;
		case 108: goto st269;
		case 111: goto st273;
		case 114: goto st269;
	}
	goto st263;
st273:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof273;
case 273:
	switch( (*( f.p)) ) {
		case 34: goto st264;
		case 60: goto st267;
		case 108: goto st269;
		case 114: goto st269;
		case 116: goto st274;
	}
	goto st263;
st274:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof274;
case 274:
	if ( (*( f.p)) == 60 )
		goto st275;
	goto st274;
st275:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof275;
case 275:
	switch( (*( f.p)) ) {
		case 47: goto st276;
		case 60: goto st65;
	}
	goto st64;
st276:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof276;
case 276:
	switch( (*( f.p)) ) {
		case 60: goto st65;
		case 97: goto st211;
		case 115: goto st99;
	}
	goto st64;
st277:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof277;
case 277:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 108: goto st278;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st278:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof278;
case 278:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 95: goto st256;
		case 108: goto st255;
		case 111: goto st279;
		case 112: goto st257;
		case 114: goto st255;
	}
	goto st254;
st279:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof279;
case 279:
	switch( (*( f.p)) ) {
		case 34: goto st48;
		case 60: goto st187;
		case 108: goto st255;
		case 112: goto st257;
		case 114: goto st255;
		case 116: goto st280;
	}
	goto st254;
st280:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof280;
case 280:
	switch( (*( f.p)) ) {
		case 34: goto st96;
		case 60: goto st281;
		case 112: goto st287;
	}
	goto st280;
st281:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof281;
case 281:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 47: goto st282;
		case 60: goto st216;
		case 112: goto st218;
	}
	goto st215;
st282:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof282;
case 282:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 112: goto st218;
		case 115: goto st283;
	}
	goto st215;
st283:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof283;
case 283:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 112: goto st284;
	}
	goto st215;
st284:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof284;
case 284:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 97: goto st285;
		case 109: goto st219;
		case 112: goto st218;
	}
	goto st215;
st285:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof285;
case 285:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 110: goto st286;
		case 112: goto st218;
	}
	goto st215;
st286:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof286;
case 286:
	switch( (*( f.p)) ) {
		case 34: goto st64;
		case 60: goto st216;
		case 62: goto tr302;
		case 112: goto st218;
	}
	goto st215;
tr302:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
#line 88 "../src/parsers/allies.c.rl"
	{ f.act = 3;}
	goto st536;
st536:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof536;
case 536:
#line 4247 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st228;
		case 34: goto st64;
		case 60: goto st229;
		case 112: goto st218;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st228;
	goto st215;
st287:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof287;
case 287:
	switch( (*( f.p)) ) {
		case 34: goto st96;
		case 60: goto st281;
		case 109: goto st288;
		case 112: goto st287;
	}
	goto st280;
st288:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof288;
case 288:
	switch( (*( f.p)) ) {
		case 34: goto st96;
		case 60: goto st281;
		case 95: goto st289;
		case 112: goto st287;
	}
	goto st280;
st289:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof289;
case 289:
	switch( (*( f.p)) ) {
		case 34: goto st96;
		case 60: goto st281;
		case 108: goto st290;
		case 112: goto st287;
	}
	goto st280;
st290:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof290;
case 290:
	switch( (*( f.p)) ) {
		case 34: goto st96;
		case 60: goto st281;
		case 105: goto st291;
		case 112: goto st287;
	}
	goto st280;
st291:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof291;
case 291:
	switch( (*( f.p)) ) {
		case 34: goto st96;
		case 60: goto st281;
		case 110: goto st292;
		case 112: goto st287;
	}
	goto st280;
st292:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof292;
case 292:
	switch( (*( f.p)) ) {
		case 34: goto st96;
		case 60: goto st281;
		case 107: goto st274;
		case 112: goto st287;
	}
	goto st280;
st293:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof293;
case 293:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st294;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st294:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof294;
case 294:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 95: goto st295;
		case 97: goto st349;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st295:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof295;
case 295:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
		case 115: goto st324;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st296:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof296;
case 296:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 95: goto st295;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st297:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof297;
case 297:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 109: goto st298;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st298:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof298;
case 298:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 95: goto st299;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st299:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof299;
case 299:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st300;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st300:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof300;
case 300:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 95: goto st295;
		case 105: goto st301;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st301:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof301;
case 301:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 110: goto st302;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st302:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof302;
case 302:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 107: goto st303;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st303:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof303;
case 303:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st316;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st304:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof304;
case 304:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 99: goto st313;
		case 108: goto st316;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st305:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof305;
case 305:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 60: goto st265;
		case 62: goto st264;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st306:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof306;
case 306:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 60: goto st265;
		case 62: goto st264;
		case 99: goto st307;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st307:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof307;
case 307:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 60: goto st265;
		case 62: goto st264;
		case 108: goto st308;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st308:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof308;
case 308:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 60: goto st265;
		case 62: goto st264;
		case 97: goto st309;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st309:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof309;
case 309:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 60: goto st265;
		case 62: goto st264;
		case 115: goto st310;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st310:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof310;
case 310:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 60: goto st265;
		case 62: goto st264;
		case 115: goto st311;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st311:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof311;
case 311:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 60: goto st265;
		case 61: goto st312;
		case 62: goto st264;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st312:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof312;
case 312:
	switch( (*( f.p)) ) {
		case 32: goto st306;
		case 34: goto st303;
		case 60: goto st265;
		case 62: goto st264;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st306;
	goto st305;
st313:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof313;
case 313:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st314;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st314:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof314;
case 314:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 95: goto st315;
		case 97: goto st320;
		case 108: goto st316;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st315:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof315;
case 315:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st316;
		case 114: goto st316;
		case 115: goto st317;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st316:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof316;
case 316:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 95: goto st315;
		case 108: goto st316;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st317:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof317;
case 317:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st318;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st318:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof318;
case 318:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 95: goto st315;
		case 108: goto st316;
		case 111: goto st319;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st319:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof319;
case 319:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st316;
		case 114: goto st316;
		case 116: goto st274;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st320:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof320;
case 320:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st316;
		case 114: goto st316;
		case 115: goto st321;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st321:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof321;
case 321:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st316;
		case 114: goto st316;
		case 115: goto st322;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st322:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof322;
case 322:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 34: goto st305;
		case 60: goto st267;
		case 61: goto st323;
		case 62: goto st263;
		case 108: goto st316;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st323:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof323;
case 323:
	switch( (*( f.p)) ) {
		case 32: goto st304;
		case 60: goto st267;
		case 62: goto st263;
		case 108: goto st316;
		case 114: goto st316;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st304;
	goto st303;
st324:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof324;
case 324:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st325;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st325:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof325;
case 325:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 95: goto st295;
		case 108: goto st296;
		case 111: goto st326;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st326:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof326;
case 326:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
		case 116: goto st327;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st327:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof327;
case 327:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st328:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof328;
case 328:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 99: goto st337;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st329:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof329;
case 329:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 60: goto st97;
		case 62: goto st96;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st330:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof330;
case 330:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 60: goto st97;
		case 62: goto st96;
		case 99: goto st331;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st331:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof331;
case 331:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 60: goto st97;
		case 62: goto st96;
		case 108: goto st332;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st332:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof332;
case 332:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 60: goto st97;
		case 62: goto st96;
		case 97: goto st333;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st333:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof333;
case 333:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 60: goto st97;
		case 62: goto st96;
		case 115: goto st334;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st334:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof334;
case 334:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 60: goto st97;
		case 62: goto st96;
		case 115: goto st335;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st335:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof335;
case 335:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 60: goto st97;
		case 61: goto st336;
		case 62: goto st96;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st336:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof336;
case 336:
	switch( (*( f.p)) ) {
		case 32: goto st330;
		case 34: goto st327;
		case 60: goto st97;
		case 62: goto st96;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st330;
	goto st329;
st337:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof337;
case 337:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 108: goto st338;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st338:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof338;
case 338:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 97: goto st339;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st339:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof339;
case 339:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 112: goto st340;
		case 115: goto st346;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st340:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof340;
case 340:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 109: goto st341;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st341:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof341;
case 341:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 95: goto st342;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st342:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof342;
case 342:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 108: goto st343;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st343:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof343;
case 343:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 105: goto st344;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st344:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof344;
case 344:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 110: goto st345;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st345:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof345;
case 345:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 107: goto st274;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st346:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof346;
case 346:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 62: goto st280;
		case 112: goto st340;
		case 115: goto st347;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st347:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof347;
case 347:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 34: goto st329;
		case 60: goto st281;
		case 61: goto st348;
		case 62: goto st280;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st348:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof348;
case 348:
	switch( (*( f.p)) ) {
		case 32: goto st328;
		case 60: goto st281;
		case 62: goto st280;
		case 112: goto st340;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st328;
	goto st327;
st349:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof349;
case 349:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
		case 115: goto st350;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st350:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof350;
case 350:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
		case 115: goto st351;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st351:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof351;
case 351:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 34: goto st177;
		case 60: goto st187;
		case 61: goto st352;
		case 62: goto st254;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st352:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof352;
case 352:
	switch( (*( f.p)) ) {
		case 32: goto st186;
		case 60: goto st187;
		case 62: goto st254;
		case 108: goto st296;
		case 112: goto st297;
		case 114: goto st296;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st186;
	goto st185;
st353:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof353;
case 353:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 97: goto st354;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st354:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof354;
case 354:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 115: goto st355;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st355:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof355;
case 355:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
		case 115: goto st356;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st356:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof356;
case 356:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 61: goto st357;
		case 105: goto st158;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto tr0;
	} else if ( (*( f.p)) >= 9 )
		goto st156;
	goto st155;
st357:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof357;
case 357:
	switch( (*( f.p)) ) {
		case 32: goto st156;
		case 34: goto st358;
		case 60: goto tr0;
		case 62: goto tr0;
		case 105: goto st158;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st156;
	goto st155;
st358:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof358;
case 358:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st359:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof359;
case 359:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 99: goto st360;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st360:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof360;
case 360:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st482;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st361:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof361;
case 361:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 100: goto st362;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st362:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof362;
case 362:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 61: goto st363;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto st188;
	} else if ( (*( f.p)) >= 9 )
		goto st359;
	goto st358;
st363:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof363;
case 363:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st161;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st364:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof364;
case 364:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 95: goto st365;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st365:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof365;
case 365:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
		case 115: goto st435;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st366:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof366;
case 366:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 109: goto st367;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st367:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof367;
case 367:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 95: goto st368;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st368:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof368;
case 368:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st369;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st369:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof369;
case 369:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 95: goto st365;
		case 105: goto st370;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st370:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof370;
case 370:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 100: goto st362;
		case 105: goto st361;
		case 108: goto st364;
		case 110: goto st371;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st371:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof371;
case 371:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 107: goto st372;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st372:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof372;
case 372:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st373:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof373;
case 373:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 99: goto st401;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st374:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof374;
case 374:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st375:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof375;
case 375:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 99: goto st376;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st376:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof376;
case 376:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 108: goto st396;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st377:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof377;
case 377:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 100: goto st378;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st378:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof378;
case 378:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 61: goto st379;
		case 62: goto st198;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st379:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof379;
case 379:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 34: goto st380;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st380:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof380;
case 380:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 101: goto st381;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st381:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof381;
case 381:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 95: goto st382;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st382:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof382;
case 382:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 97: goto st383;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st383:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof383;
case 383:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 108: goto st384;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st384:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof384;
case 384:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 108: goto st385;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st385:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof385;
case 385:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 121: goto st386;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st386:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof386;
case 386:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 95: goto st387;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st387:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof387;
case 387:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 98: goto st388;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st388:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof388;
case 388:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 108: goto st389;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st389:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof389;
case 389:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 97: goto st390;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st390:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof390;
case 390:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 99: goto st391;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st391:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof391;
case 391:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 107: goto st392;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st392:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof392;
case 392:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 108: goto st393;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st393:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof393;
case 393:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st394;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st394:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof394;
case 394:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 100: goto st378;
		case 105: goto st377;
		case 115: goto st395;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st395:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof395;
case 395:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 116: goto st305;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st396:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof396;
case 396:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 97: goto st397;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st397:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof397;
case 397:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 115: goto st398;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st398:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof398;
case 398:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
		case 115: goto st399;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st399:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof399;
case 399:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 60: goto st199;
		case 61: goto st400;
		case 62: goto st198;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st400:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof400;
case 400:
	switch( (*( f.p)) ) {
		case 32: goto st375;
		case 34: goto st372;
		case 60: goto st199;
		case 62: goto st198;
		case 105: goto st377;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st375;
	goto st374;
st401:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof401;
case 401:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st430;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st402:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof402;
case 402:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 100: goto st403;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st403:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof403;
case 403:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 61: goto st404;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st404:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof404;
case 404:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st380;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st405:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof405;
case 405:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 95: goto st406;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st406:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof406;
case 406:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
		case 115: goto st407;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st407:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof407;
case 407:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st408;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st408:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof408;
case 408:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 95: goto st406;
		case 105: goto st402;
		case 108: goto st405;
		case 111: goto st409;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st409:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof409;
case 409:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
		case 116: goto st410;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st410:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof410;
case 410:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
	}
	goto st410;
st411:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof411;
case 411:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 100: goto st412;
		case 105: goto st411;
	}
	goto st410;
st412:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof412;
case 412:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 61: goto st413;
		case 62: goto st208;
		case 105: goto st411;
	}
	goto st410;
st413:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof413;
case 413:
	switch( (*( f.p)) ) {
		case 34: goto st414;
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
	}
	goto st410;
st414:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof414;
case 414:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 101: goto st415;
		case 105: goto st411;
	}
	goto st410;
st415:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof415;
case 415:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 95: goto st416;
		case 105: goto st411;
	}
	goto st410;
st416:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof416;
case 416:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 97: goto st417;
		case 105: goto st411;
	}
	goto st410;
st417:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof417;
case 417:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
		case 108: goto st418;
	}
	goto st410;
st418:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof418;
case 418:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
		case 108: goto st419;
	}
	goto st410;
st419:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof419;
case 419:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
		case 121: goto st420;
	}
	goto st410;
st420:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof420;
case 420:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 95: goto st421;
		case 105: goto st411;
	}
	goto st410;
st421:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof421;
case 421:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 98: goto st422;
		case 105: goto st411;
	}
	goto st410;
st422:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof422;
case 422:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
		case 108: goto st423;
	}
	goto st410;
st423:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof423;
case 423:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 97: goto st424;
		case 105: goto st411;
	}
	goto st410;
st424:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof424;
case 424:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 99: goto st425;
		case 105: goto st411;
	}
	goto st410;
st425:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof425;
case 425:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
		case 107: goto st426;
	}
	goto st410;
st426:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof426;
case 426:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
		case 108: goto st427;
	}
	goto st410;
st427:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof427;
case 427:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st428;
	}
	goto st410;
st428:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof428;
case 428:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 100: goto st412;
		case 105: goto st411;
		case 115: goto st429;
	}
	goto st410;
st429:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof429;
case 429:
	switch( (*( f.p)) ) {
		case 60: goto st209;
		case 62: goto st208;
		case 105: goto st411;
		case 116: goto st274;
	}
	goto st410;
st430:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof430;
case 430:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 95: goto st406;
		case 97: goto st431;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st431:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof431;
case 431:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
		case 115: goto st432;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st432:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof432;
case 432:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
		case 115: goto st433;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st433:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof433;
case 433:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 34: goto st374;
		case 60: goto st201;
		case 61: goto st434;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st434:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof434;
case 434:
	switch( (*( f.p)) ) {
		case 32: goto st373;
		case 60: goto st201;
		case 62: goto st197;
		case 105: goto st402;
		case 108: goto st405;
		case 114: goto st405;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st373;
	goto st372;
st435:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof435;
case 435:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st436;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st436:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof436;
case 436:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 95: goto st365;
		case 105: goto st361;
		case 108: goto st364;
		case 111: goto st437;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st437:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof437;
case 437:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
		case 116: goto st438;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st438:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof438;
case 438:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st439:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof439;
case 439:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 99: goto st467;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st440:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof440;
case 440:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st441:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof441;
case 441:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 99: goto st442;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st442:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof442;
case 442:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 108: goto st462;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st443:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof443;
case 443:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 100: goto st444;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st444:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof444;
case 444:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 61: goto st445;
		case 62: goto st64;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st445:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof445;
case 445:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 34: goto st446;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st446:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof446;
case 446:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 101: goto st447;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st447:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof447;
case 447:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 95: goto st448;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st448:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof448;
case 448:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 97: goto st449;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st449:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof449;
case 449:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 108: goto st450;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st450:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof450;
case 450:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 108: goto st451;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st451:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof451;
case 451:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 121: goto st452;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st452:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof452;
case 452:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 95: goto st453;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st453:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof453;
case 453:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 98: goto st454;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st454:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof454;
case 454:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 108: goto st455;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st455:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof455;
case 455:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 97: goto st456;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st456:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof456;
case 456:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 99: goto st457;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st457:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof457;
case 457:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 107: goto st458;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st458:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof458;
case 458:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 108: goto st459;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st459:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof459;
case 459:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st460;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st460:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof460;
case 460:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 100: goto st444;
		case 105: goto st443;
		case 115: goto st461;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st461:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof461;
case 461:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 116: goto st329;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st462:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof462;
case 462:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 97: goto st463;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st463:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof463;
case 463:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 115: goto st464;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st464:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof464;
case 464:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
		case 115: goto st465;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st465:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof465;
case 465:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 60: goto st65;
		case 61: goto st466;
		case 62: goto st64;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st466:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof466;
case 466:
	switch( (*( f.p)) ) {
		case 32: goto st441;
		case 34: goto st438;
		case 60: goto st65;
		case 62: goto st64;
		case 105: goto st443;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st441;
	goto st440;
st467:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof467;
case 467:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 108: goto st477;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st468:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof468;
case 468:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 100: goto st469;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st469:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof469;
case 469:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 61: goto st470;
		case 62: goto st215;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st470:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof470;
case 470:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st446;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st471:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof471;
case 471:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 109: goto st472;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st472:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof472;
case 472:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 95: goto st473;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st473:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof473;
case 473:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 108: goto st474;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st474:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof474;
case 474:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st475;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st475:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof475;
case 475:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 100: goto st469;
		case 105: goto st468;
		case 110: goto st476;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st476:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof476;
case 476:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 107: goto st410;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st477:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof477;
case 477:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 97: goto st478;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st478:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof478;
case 478:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 112: goto st471;
		case 115: goto st479;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st479:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof479;
case 479:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 112: goto st471;
		case 115: goto st480;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st480:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof480;
case 480:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 34: goto st440;
		case 60: goto st216;
		case 61: goto st481;
		case 62: goto st215;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st481:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof481;
case 481:
	switch( (*( f.p)) ) {
		case 32: goto st439;
		case 60: goto st216;
		case 62: goto st215;
		case 105: goto st468;
		case 112: goto st471;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st439;
	goto st438;
st482:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof482;
case 482:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 95: goto st365;
		case 97: goto st483;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st483:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof483;
case 483:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
		case 115: goto st484;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st484:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof484;
case 484:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
		case 115: goto st485;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
st485:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof485;
case 485:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 34: goto st155;
		case 61: goto st486;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 60 <= (*( f.p)) && (*( f.p)) <= 62 )
			goto st188;
	} else if ( (*( f.p)) >= 9 )
		goto st359;
	goto st358;
st486:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof486;
case 486:
	switch( (*( f.p)) ) {
		case 32: goto st359;
		case 60: goto st188;
		case 62: goto st188;
		case 105: goto st361;
		case 108: goto st364;
		case 112: goto st366;
		case 114: goto st364;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st359;
	goto st358;
tr555:
#line 1 "NONE"
	{ f.te = ( f.p)+1;}
	goto st537;
st537:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof537;
case 537:
#line 7210 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 13: goto st489;
		case 32: goto st487;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 12 )
		goto st487;
	goto tr556;
st487:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof487;
case 487:
	if ( (*( f.p)) == 32 )
		goto tr498;
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr498;
	goto tr0;
tr498:
#line 24 "../src/parsers/allies.c.rl"
	{
        lmargin[4] = ( f.p);
    }
	goto st488;
st488:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof488;
case 488:
#line 7237 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st488;
		case 60: goto tr500;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st488;
	goto tr0;
st489:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof489;
case 489:
	switch( (*( f.p)) ) {
		case 10: goto tr501;
		case 32: goto tr498;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr498;
	goto tr0;
tr501:
#line 24 "../src/parsers/allies.c.rl"
	{
        lmargin[4] = ( f.p);
    }
	goto st490;
st490:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof490;
case 490:
#line 7266 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto tr498;
		case 60: goto tr500;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto tr498;
	goto tr0;
st491:
#line 1 "NONE"
	{ f.ts = 0;}
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof491;
case 491:
#line 7280 "../src/parsers/allies.c"
	if ( (*( f.p)) == 60 )
		goto st492;
	goto st491;
st492:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof492;
case 492:
	switch( (*( f.p)) ) {
		case 60: goto st492;
		case 115: goto st493;
	}
	goto st491;
st493:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof493;
case 493:
	switch( (*( f.p)) ) {
		case 60: goto st492;
		case 112: goto st494;
	}
	goto st491;
st494:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof494;
case 494:
	switch( (*( f.p)) ) {
		case 60: goto st492;
		case 97: goto st495;
	}
	goto st491;
st495:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof495;
case 495:
	switch( (*( f.p)) ) {
		case 60: goto st492;
		case 110: goto st496;
	}
	goto st491;
st496:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof496;
case 496:
	if ( (*( f.p)) == 62 )
		goto st497;
	goto st496;
st497:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof497;
case 497:
	switch( (*( f.p)) ) {
		case 32: goto st497;
		case 60: goto st499;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr510;
	} else if ( (*( f.p)) >= 9 )
		goto st497;
	goto st498;
tr547:
#line 44 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st498;
st498:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof498;
case 498:
#line 7351 "../src/parsers/allies.c"
	if ( (*( f.p)) == 60 )
		goto st499;
	goto st498;
tr549:
#line 44 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.cap[2], ( f.p));
    }
	goto st499;
st499:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof499;
case 499:
#line 7365 "../src/parsers/allies.c"
	if ( (*( f.p)) == 47 )
		goto st500;
	goto tr512;
tr512:
#line 124 "../src/parsers/allies.c.rl"
	{ {( f.p) = (( rmargin1))-1;} {goto st524;} }
	goto st0;
#line 7373 "../src/parsers/allies.c"
st0:
 f.cs = 0;
	goto _out;
st500:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof500;
case 500:
	if ( (*( f.p)) == 60 )
		goto st501;
	goto st500;
st501:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof501;
case 501:
	switch( (*( f.p)) ) {
		case 60: goto st501;
		case 115: goto st502;
	}
	goto st500;
st502:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof502;
case 502:
	switch( (*( f.p)) ) {
		case 60: goto st501;
		case 112: goto st503;
	}
	goto st500;
st503:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof503;
case 503:
	switch( (*( f.p)) ) {
		case 60: goto st501;
		case 97: goto st504;
	}
	goto st500;
st504:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof504;
case 504:
	switch( (*( f.p)) ) {
		case 60: goto st501;
		case 110: goto st505;
	}
	goto st500;
st505:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof505;
case 505:
	if ( (*( f.p)) == 62 )
		goto st506;
	goto st505;
st506:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof506;
case 506:
	if ( (*( f.p)) == 32 )
		goto st506;
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr520;
	} else if ( (*( f.p)) >= 9 )
		goto st506;
	goto tr512;
tr520:
#line 69 "../src/parsers/allies.c.rl"
	{
        playerNumber = ((*( f.p)) - '1') & 0x3;//0-based.
    }
	goto st507;
st507:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof507;
case 507:
#line 7449 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st507;
		case 46: goto st508;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st507;
	goto tr512;
st508:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof508;
case 508:
	switch( (*( f.p)) ) {
		case 32: goto st508;
		case 60: goto tr524;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st508;
	goto tr523;
tr523:
#line 48 "../src/parsers/allies.c.rl"
	{
        f.players[playerNumber].heroName.ptr = ( f.p);
    }
	goto st509;
st509:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof509;
case 509:
#line 7478 "../src/parsers/allies.c"
	if ( (*( f.p)) == 60 )
		goto tr526;
	goto st509;
tr524:
#line 48 "../src/parsers/allies.c.rl"
	{
        f.players[playerNumber].heroName.ptr = ( f.p);
    }
#line 52 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.players[playerNumber].heroName, ( f.p));
    }
	goto st510;
tr526:
#line 52 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.players[playerNumber].heroName, ( f.p));
    }
	goto st510;
st510:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof510;
case 510:
#line 7502 "../src/parsers/allies.c"
	if ( (*( f.p)) == 60 )
		goto st511;
	goto st510;
st511:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof511;
case 511:
	switch( (*( f.p)) ) {
		case 60: goto st511;
		case 115: goto st512;
	}
	goto st510;
st512:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof512;
case 512:
	switch( (*( f.p)) ) {
		case 60: goto st511;
		case 112: goto st513;
	}
	goto st510;
st513:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof513;
case 513:
	switch( (*( f.p)) ) {
		case 60: goto st511;
		case 97: goto st514;
	}
	goto st510;
st514:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof514;
case 514:
	switch( (*( f.p)) ) {
		case 60: goto st511;
		case 110: goto st515;
	}
	goto st510;
st515:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof515;
case 515:
	if ( (*( f.p)) == 62 )
		goto st516;
	goto st515;
st516:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof516;
case 516:
	switch( (*( f.p)) ) {
		case 32: goto st516;
		case 40: goto st517;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st516;
	goto tr512;
st517:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof517;
case 517:
	switch( (*( f.p)) ) {
		case 32: goto st517;
		case 41: goto tr536;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st517;
	goto tr535;
tr535:
#line 56 "../src/parsers/allies.c.rl"
	{
        f.players[playerNumber].godName.ptr = ( f.p);
    }
	goto st518;
st518:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof518;
case 518:
#line 7581 "../src/parsers/allies.c"
	if ( (*( f.p)) == 41 )
		goto tr538;
	goto st518;
tr536:
#line 56 "../src/parsers/allies.c.rl"
	{
        f.players[playerNumber].godName.ptr = ( f.p);
    }
#line 60 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.players[playerNumber].godName, ( f.p));
    }
	goto st519;
tr538:
#line 60 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.players[playerNumber].godName, ( f.p));
    }
	goto st519;
st519:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof519;
case 519:
#line 7605 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st519;
		case 41: goto tr538;
		case 60: goto tr540;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st519;
	goto st518;
tr540:
	 f.cs = 538;
#line 73 "../src/parsers/allies.c.rl"
	{
        f.branch = 1;
        f.players[playerNumber].curHp = f.cap[1];
        f.players[playerNumber].maxHp = f.cap[2];
        f.cap[1] = f.players[playerNumber].godName;
        {( f.p) = (( rmargin1))-1;}
         f.cs = 524;
        {( f.p)++; goto _out;}
    }
	goto _again;
st538:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof538;
case 538:
#line 7631 "../src/parsers/allies.c"
	goto tr512;
tr510:
#line 32 "../src/parsers/allies.c.rl"
	{
        f.cap[1].ptr = ( f.p);
    }
	goto st520;
st520:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof520;
case 520:
#line 7643 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto tr541;
		case 47: goto tr542;
	}
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto st520;
	} else if ( (*( f.p)) >= 9 )
		goto tr541;
	goto tr512;
tr541:
#line 36 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.cap[1], ( f.p));
    }
	goto st521;
st521:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof521;
case 521:
#line 7664 "../src/parsers/allies.c"
	switch( (*( f.p)) ) {
		case 32: goto st521;
		case 47: goto st522;
	}
	if ( 9 <= (*( f.p)) && (*( f.p)) <= 13 )
		goto st521;
	goto tr512;
tr542:
#line 36 "../src/parsers/allies.c.rl"
	{
        SLICE_SET_END(f.cap[1], ( f.p));
    }
	goto st522;
st522:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof522;
case 522:
#line 7682 "../src/parsers/allies.c"
	if ( (*( f.p)) == 32 )
		goto st522;
	if ( (*( f.p)) > 13 ) {
		if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
			goto tr546;
	} else if ( (*( f.p)) >= 9 )
		goto st522;
	goto tr512;
tr546:
#line 40 "../src/parsers/allies.c.rl"
	{
        f.cap[2].ptr = ( f.p);
    }
	goto st523;
st523:
	if ( ++( f.p) == ( f.pe) )
		goto _test_eof523;
case 523:
#line 7701 "../src/parsers/allies.c"
	if ( (*( f.p)) == 60 )
		goto tr549;
	if ( 48 <= (*( f.p)) && (*( f.p)) <= 57 )
		goto st523;
	goto tr547;
	}
	_test_eof524:  f.cs = 524; goto _test_eof; 
	_test_eof525:  f.cs = 525; goto _test_eof; 
	_test_eof1:  f.cs = 1; goto _test_eof; 
	_test_eof2:  f.cs = 2; goto _test_eof; 
	_test_eof3:  f.cs = 3; goto _test_eof; 
	_test_eof4:  f.cs = 4; goto _test_eof; 
	_test_eof5:  f.cs = 5; goto _test_eof; 
	_test_eof6:  f.cs = 6; goto _test_eof; 
	_test_eof7:  f.cs = 7; goto _test_eof; 
	_test_eof526:  f.cs = 526; goto _test_eof; 
	_test_eof8:  f.cs = 8; goto _test_eof; 
	_test_eof9:  f.cs = 9; goto _test_eof; 
	_test_eof10:  f.cs = 10; goto _test_eof; 
	_test_eof11:  f.cs = 11; goto _test_eof; 
	_test_eof12:  f.cs = 12; goto _test_eof; 
	_test_eof13:  f.cs = 13; goto _test_eof; 
	_test_eof14:  f.cs = 14; goto _test_eof; 
	_test_eof15:  f.cs = 15; goto _test_eof; 
	_test_eof16:  f.cs = 16; goto _test_eof; 
	_test_eof527:  f.cs = 527; goto _test_eof; 
	_test_eof17:  f.cs = 17; goto _test_eof; 
	_test_eof528:  f.cs = 528; goto _test_eof; 
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
	_test_eof70:  f.cs = 70; goto _test_eof; 
	_test_eof71:  f.cs = 71; goto _test_eof; 
	_test_eof72:  f.cs = 72; goto _test_eof; 
	_test_eof73:  f.cs = 73; goto _test_eof; 
	_test_eof74:  f.cs = 74; goto _test_eof; 
	_test_eof75:  f.cs = 75; goto _test_eof; 
	_test_eof76:  f.cs = 76; goto _test_eof; 
	_test_eof77:  f.cs = 77; goto _test_eof; 
	_test_eof529:  f.cs = 529; goto _test_eof; 
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
	_test_eof530:  f.cs = 530; goto _test_eof; 
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
	_test_eof531:  f.cs = 531; goto _test_eof; 
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
	_test_eof125:  f.cs = 125; goto _test_eof; 
	_test_eof126:  f.cs = 126; goto _test_eof; 
	_test_eof127:  f.cs = 127; goto _test_eof; 
	_test_eof128:  f.cs = 128; goto _test_eof; 
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
	_test_eof146:  f.cs = 146; goto _test_eof; 
	_test_eof147:  f.cs = 147; goto _test_eof; 
	_test_eof148:  f.cs = 148; goto _test_eof; 
	_test_eof149:  f.cs = 149; goto _test_eof; 
	_test_eof150:  f.cs = 150; goto _test_eof; 
	_test_eof151:  f.cs = 151; goto _test_eof; 
	_test_eof152:  f.cs = 152; goto _test_eof; 
	_test_eof153:  f.cs = 153; goto _test_eof; 
	_test_eof154:  f.cs = 154; goto _test_eof; 
	_test_eof155:  f.cs = 155; goto _test_eof; 
	_test_eof156:  f.cs = 156; goto _test_eof; 
	_test_eof157:  f.cs = 157; goto _test_eof; 
	_test_eof158:  f.cs = 158; goto _test_eof; 
	_test_eof159:  f.cs = 159; goto _test_eof; 
	_test_eof160:  f.cs = 160; goto _test_eof; 
	_test_eof161:  f.cs = 161; goto _test_eof; 
	_test_eof162:  f.cs = 162; goto _test_eof; 
	_test_eof163:  f.cs = 163; goto _test_eof; 
	_test_eof164:  f.cs = 164; goto _test_eof; 
	_test_eof165:  f.cs = 165; goto _test_eof; 
	_test_eof166:  f.cs = 166; goto _test_eof; 
	_test_eof167:  f.cs = 167; goto _test_eof; 
	_test_eof168:  f.cs = 168; goto _test_eof; 
	_test_eof169:  f.cs = 169; goto _test_eof; 
	_test_eof170:  f.cs = 170; goto _test_eof; 
	_test_eof171:  f.cs = 171; goto _test_eof; 
	_test_eof172:  f.cs = 172; goto _test_eof; 
	_test_eof173:  f.cs = 173; goto _test_eof; 
	_test_eof174:  f.cs = 174; goto _test_eof; 
	_test_eof175:  f.cs = 175; goto _test_eof; 
	_test_eof176:  f.cs = 176; goto _test_eof; 
	_test_eof177:  f.cs = 177; goto _test_eof; 
	_test_eof178:  f.cs = 178; goto _test_eof; 
	_test_eof179:  f.cs = 179; goto _test_eof; 
	_test_eof180:  f.cs = 180; goto _test_eof; 
	_test_eof181:  f.cs = 181; goto _test_eof; 
	_test_eof182:  f.cs = 182; goto _test_eof; 
	_test_eof183:  f.cs = 183; goto _test_eof; 
	_test_eof184:  f.cs = 184; goto _test_eof; 
	_test_eof185:  f.cs = 185; goto _test_eof; 
	_test_eof186:  f.cs = 186; goto _test_eof; 
	_test_eof187:  f.cs = 187; goto _test_eof; 
	_test_eof188:  f.cs = 188; goto _test_eof; 
	_test_eof189:  f.cs = 189; goto _test_eof; 
	_test_eof190:  f.cs = 190; goto _test_eof; 
	_test_eof191:  f.cs = 191; goto _test_eof; 
	_test_eof192:  f.cs = 192; goto _test_eof; 
	_test_eof193:  f.cs = 193; goto _test_eof; 
	_test_eof194:  f.cs = 194; goto _test_eof; 
	_test_eof195:  f.cs = 195; goto _test_eof; 
	_test_eof196:  f.cs = 196; goto _test_eof; 
	_test_eof197:  f.cs = 197; goto _test_eof; 
	_test_eof198:  f.cs = 198; goto _test_eof; 
	_test_eof199:  f.cs = 199; goto _test_eof; 
	_test_eof200:  f.cs = 200; goto _test_eof; 
	_test_eof201:  f.cs = 201; goto _test_eof; 
	_test_eof202:  f.cs = 202; goto _test_eof; 
	_test_eof203:  f.cs = 203; goto _test_eof; 
	_test_eof204:  f.cs = 204; goto _test_eof; 
	_test_eof205:  f.cs = 205; goto _test_eof; 
	_test_eof206:  f.cs = 206; goto _test_eof; 
	_test_eof207:  f.cs = 207; goto _test_eof; 
	_test_eof208:  f.cs = 208; goto _test_eof; 
	_test_eof209:  f.cs = 209; goto _test_eof; 
	_test_eof210:  f.cs = 210; goto _test_eof; 
	_test_eof211:  f.cs = 211; goto _test_eof; 
	_test_eof532:  f.cs = 532; goto _test_eof; 
	_test_eof212:  f.cs = 212; goto _test_eof; 
	_test_eof213:  f.cs = 213; goto _test_eof; 
	_test_eof214:  f.cs = 214; goto _test_eof; 
	_test_eof215:  f.cs = 215; goto _test_eof; 
	_test_eof216:  f.cs = 216; goto _test_eof; 
	_test_eof217:  f.cs = 217; goto _test_eof; 
	_test_eof218:  f.cs = 218; goto _test_eof; 
	_test_eof219:  f.cs = 219; goto _test_eof; 
	_test_eof220:  f.cs = 220; goto _test_eof; 
	_test_eof221:  f.cs = 221; goto _test_eof; 
	_test_eof222:  f.cs = 222; goto _test_eof; 
	_test_eof223:  f.cs = 223; goto _test_eof; 
	_test_eof224:  f.cs = 224; goto _test_eof; 
	_test_eof225:  f.cs = 225; goto _test_eof; 
	_test_eof226:  f.cs = 226; goto _test_eof; 
	_test_eof227:  f.cs = 227; goto _test_eof; 
	_test_eof228:  f.cs = 228; goto _test_eof; 
	_test_eof229:  f.cs = 229; goto _test_eof; 
	_test_eof230:  f.cs = 230; goto _test_eof; 
	_test_eof231:  f.cs = 231; goto _test_eof; 
	_test_eof232:  f.cs = 232; goto _test_eof; 
	_test_eof233:  f.cs = 233; goto _test_eof; 
	_test_eof234:  f.cs = 234; goto _test_eof; 
	_test_eof533:  f.cs = 533; goto _test_eof; 
	_test_eof235:  f.cs = 235; goto _test_eof; 
	_test_eof236:  f.cs = 236; goto _test_eof; 
	_test_eof237:  f.cs = 237; goto _test_eof; 
	_test_eof238:  f.cs = 238; goto _test_eof; 
	_test_eof239:  f.cs = 239; goto _test_eof; 
	_test_eof240:  f.cs = 240; goto _test_eof; 
	_test_eof241:  f.cs = 241; goto _test_eof; 
	_test_eof242:  f.cs = 242; goto _test_eof; 
	_test_eof243:  f.cs = 243; goto _test_eof; 
	_test_eof244:  f.cs = 244; goto _test_eof; 
	_test_eof245:  f.cs = 245; goto _test_eof; 
	_test_eof246:  f.cs = 246; goto _test_eof; 
	_test_eof247:  f.cs = 247; goto _test_eof; 
	_test_eof248:  f.cs = 248; goto _test_eof; 
	_test_eof534:  f.cs = 534; goto _test_eof; 
	_test_eof249:  f.cs = 249; goto _test_eof; 
	_test_eof250:  f.cs = 250; goto _test_eof; 
	_test_eof251:  f.cs = 251; goto _test_eof; 
	_test_eof252:  f.cs = 252; goto _test_eof; 
	_test_eof253:  f.cs = 253; goto _test_eof; 
	_test_eof535:  f.cs = 535; goto _test_eof; 
	_test_eof254:  f.cs = 254; goto _test_eof; 
	_test_eof255:  f.cs = 255; goto _test_eof; 
	_test_eof256:  f.cs = 256; goto _test_eof; 
	_test_eof257:  f.cs = 257; goto _test_eof; 
	_test_eof258:  f.cs = 258; goto _test_eof; 
	_test_eof259:  f.cs = 259; goto _test_eof; 
	_test_eof260:  f.cs = 260; goto _test_eof; 
	_test_eof261:  f.cs = 261; goto _test_eof; 
	_test_eof262:  f.cs = 262; goto _test_eof; 
	_test_eof263:  f.cs = 263; goto _test_eof; 
	_test_eof264:  f.cs = 264; goto _test_eof; 
	_test_eof265:  f.cs = 265; goto _test_eof; 
	_test_eof266:  f.cs = 266; goto _test_eof; 
	_test_eof267:  f.cs = 267; goto _test_eof; 
	_test_eof268:  f.cs = 268; goto _test_eof; 
	_test_eof269:  f.cs = 269; goto _test_eof; 
	_test_eof270:  f.cs = 270; goto _test_eof; 
	_test_eof271:  f.cs = 271; goto _test_eof; 
	_test_eof272:  f.cs = 272; goto _test_eof; 
	_test_eof273:  f.cs = 273; goto _test_eof; 
	_test_eof274:  f.cs = 274; goto _test_eof; 
	_test_eof275:  f.cs = 275; goto _test_eof; 
	_test_eof276:  f.cs = 276; goto _test_eof; 
	_test_eof277:  f.cs = 277; goto _test_eof; 
	_test_eof278:  f.cs = 278; goto _test_eof; 
	_test_eof279:  f.cs = 279; goto _test_eof; 
	_test_eof280:  f.cs = 280; goto _test_eof; 
	_test_eof281:  f.cs = 281; goto _test_eof; 
	_test_eof282:  f.cs = 282; goto _test_eof; 
	_test_eof283:  f.cs = 283; goto _test_eof; 
	_test_eof284:  f.cs = 284; goto _test_eof; 
	_test_eof285:  f.cs = 285; goto _test_eof; 
	_test_eof286:  f.cs = 286; goto _test_eof; 
	_test_eof536:  f.cs = 536; goto _test_eof; 
	_test_eof287:  f.cs = 287; goto _test_eof; 
	_test_eof288:  f.cs = 288; goto _test_eof; 
	_test_eof289:  f.cs = 289; goto _test_eof; 
	_test_eof290:  f.cs = 290; goto _test_eof; 
	_test_eof291:  f.cs = 291; goto _test_eof; 
	_test_eof292:  f.cs = 292; goto _test_eof; 
	_test_eof293:  f.cs = 293; goto _test_eof; 
	_test_eof294:  f.cs = 294; goto _test_eof; 
	_test_eof295:  f.cs = 295; goto _test_eof; 
	_test_eof296:  f.cs = 296; goto _test_eof; 
	_test_eof297:  f.cs = 297; goto _test_eof; 
	_test_eof298:  f.cs = 298; goto _test_eof; 
	_test_eof299:  f.cs = 299; goto _test_eof; 
	_test_eof300:  f.cs = 300; goto _test_eof; 
	_test_eof301:  f.cs = 301; goto _test_eof; 
	_test_eof302:  f.cs = 302; goto _test_eof; 
	_test_eof303:  f.cs = 303; goto _test_eof; 
	_test_eof304:  f.cs = 304; goto _test_eof; 
	_test_eof305:  f.cs = 305; goto _test_eof; 
	_test_eof306:  f.cs = 306; goto _test_eof; 
	_test_eof307:  f.cs = 307; goto _test_eof; 
	_test_eof308:  f.cs = 308; goto _test_eof; 
	_test_eof309:  f.cs = 309; goto _test_eof; 
	_test_eof310:  f.cs = 310; goto _test_eof; 
	_test_eof311:  f.cs = 311; goto _test_eof; 
	_test_eof312:  f.cs = 312; goto _test_eof; 
	_test_eof313:  f.cs = 313; goto _test_eof; 
	_test_eof314:  f.cs = 314; goto _test_eof; 
	_test_eof315:  f.cs = 315; goto _test_eof; 
	_test_eof316:  f.cs = 316; goto _test_eof; 
	_test_eof317:  f.cs = 317; goto _test_eof; 
	_test_eof318:  f.cs = 318; goto _test_eof; 
	_test_eof319:  f.cs = 319; goto _test_eof; 
	_test_eof320:  f.cs = 320; goto _test_eof; 
	_test_eof321:  f.cs = 321; goto _test_eof; 
	_test_eof322:  f.cs = 322; goto _test_eof; 
	_test_eof323:  f.cs = 323; goto _test_eof; 
	_test_eof324:  f.cs = 324; goto _test_eof; 
	_test_eof325:  f.cs = 325; goto _test_eof; 
	_test_eof326:  f.cs = 326; goto _test_eof; 
	_test_eof327:  f.cs = 327; goto _test_eof; 
	_test_eof328:  f.cs = 328; goto _test_eof; 
	_test_eof329:  f.cs = 329; goto _test_eof; 
	_test_eof330:  f.cs = 330; goto _test_eof; 
	_test_eof331:  f.cs = 331; goto _test_eof; 
	_test_eof332:  f.cs = 332; goto _test_eof; 
	_test_eof333:  f.cs = 333; goto _test_eof; 
	_test_eof334:  f.cs = 334; goto _test_eof; 
	_test_eof335:  f.cs = 335; goto _test_eof; 
	_test_eof336:  f.cs = 336; goto _test_eof; 
	_test_eof337:  f.cs = 337; goto _test_eof; 
	_test_eof338:  f.cs = 338; goto _test_eof; 
	_test_eof339:  f.cs = 339; goto _test_eof; 
	_test_eof340:  f.cs = 340; goto _test_eof; 
	_test_eof341:  f.cs = 341; goto _test_eof; 
	_test_eof342:  f.cs = 342; goto _test_eof; 
	_test_eof343:  f.cs = 343; goto _test_eof; 
	_test_eof344:  f.cs = 344; goto _test_eof; 
	_test_eof345:  f.cs = 345; goto _test_eof; 
	_test_eof346:  f.cs = 346; goto _test_eof; 
	_test_eof347:  f.cs = 347; goto _test_eof; 
	_test_eof348:  f.cs = 348; goto _test_eof; 
	_test_eof349:  f.cs = 349; goto _test_eof; 
	_test_eof350:  f.cs = 350; goto _test_eof; 
	_test_eof351:  f.cs = 351; goto _test_eof; 
	_test_eof352:  f.cs = 352; goto _test_eof; 
	_test_eof353:  f.cs = 353; goto _test_eof; 
	_test_eof354:  f.cs = 354; goto _test_eof; 
	_test_eof355:  f.cs = 355; goto _test_eof; 
	_test_eof356:  f.cs = 356; goto _test_eof; 
	_test_eof357:  f.cs = 357; goto _test_eof; 
	_test_eof358:  f.cs = 358; goto _test_eof; 
	_test_eof359:  f.cs = 359; goto _test_eof; 
	_test_eof360:  f.cs = 360; goto _test_eof; 
	_test_eof361:  f.cs = 361; goto _test_eof; 
	_test_eof362:  f.cs = 362; goto _test_eof; 
	_test_eof363:  f.cs = 363; goto _test_eof; 
	_test_eof364:  f.cs = 364; goto _test_eof; 
	_test_eof365:  f.cs = 365; goto _test_eof; 
	_test_eof366:  f.cs = 366; goto _test_eof; 
	_test_eof367:  f.cs = 367; goto _test_eof; 
	_test_eof368:  f.cs = 368; goto _test_eof; 
	_test_eof369:  f.cs = 369; goto _test_eof; 
	_test_eof370:  f.cs = 370; goto _test_eof; 
	_test_eof371:  f.cs = 371; goto _test_eof; 
	_test_eof372:  f.cs = 372; goto _test_eof; 
	_test_eof373:  f.cs = 373; goto _test_eof; 
	_test_eof374:  f.cs = 374; goto _test_eof; 
	_test_eof375:  f.cs = 375; goto _test_eof; 
	_test_eof376:  f.cs = 376; goto _test_eof; 
	_test_eof377:  f.cs = 377; goto _test_eof; 
	_test_eof378:  f.cs = 378; goto _test_eof; 
	_test_eof379:  f.cs = 379; goto _test_eof; 
	_test_eof380:  f.cs = 380; goto _test_eof; 
	_test_eof381:  f.cs = 381; goto _test_eof; 
	_test_eof382:  f.cs = 382; goto _test_eof; 
	_test_eof383:  f.cs = 383; goto _test_eof; 
	_test_eof384:  f.cs = 384; goto _test_eof; 
	_test_eof385:  f.cs = 385; goto _test_eof; 
	_test_eof386:  f.cs = 386; goto _test_eof; 
	_test_eof387:  f.cs = 387; goto _test_eof; 
	_test_eof388:  f.cs = 388; goto _test_eof; 
	_test_eof389:  f.cs = 389; goto _test_eof; 
	_test_eof390:  f.cs = 390; goto _test_eof; 
	_test_eof391:  f.cs = 391; goto _test_eof; 
	_test_eof392:  f.cs = 392; goto _test_eof; 
	_test_eof393:  f.cs = 393; goto _test_eof; 
	_test_eof394:  f.cs = 394; goto _test_eof; 
	_test_eof395:  f.cs = 395; goto _test_eof; 
	_test_eof396:  f.cs = 396; goto _test_eof; 
	_test_eof397:  f.cs = 397; goto _test_eof; 
	_test_eof398:  f.cs = 398; goto _test_eof; 
	_test_eof399:  f.cs = 399; goto _test_eof; 
	_test_eof400:  f.cs = 400; goto _test_eof; 
	_test_eof401:  f.cs = 401; goto _test_eof; 
	_test_eof402:  f.cs = 402; goto _test_eof; 
	_test_eof403:  f.cs = 403; goto _test_eof; 
	_test_eof404:  f.cs = 404; goto _test_eof; 
	_test_eof405:  f.cs = 405; goto _test_eof; 
	_test_eof406:  f.cs = 406; goto _test_eof; 
	_test_eof407:  f.cs = 407; goto _test_eof; 
	_test_eof408:  f.cs = 408; goto _test_eof; 
	_test_eof409:  f.cs = 409; goto _test_eof; 
	_test_eof410:  f.cs = 410; goto _test_eof; 
	_test_eof411:  f.cs = 411; goto _test_eof; 
	_test_eof412:  f.cs = 412; goto _test_eof; 
	_test_eof413:  f.cs = 413; goto _test_eof; 
	_test_eof414:  f.cs = 414; goto _test_eof; 
	_test_eof415:  f.cs = 415; goto _test_eof; 
	_test_eof416:  f.cs = 416; goto _test_eof; 
	_test_eof417:  f.cs = 417; goto _test_eof; 
	_test_eof418:  f.cs = 418; goto _test_eof; 
	_test_eof419:  f.cs = 419; goto _test_eof; 
	_test_eof420:  f.cs = 420; goto _test_eof; 
	_test_eof421:  f.cs = 421; goto _test_eof; 
	_test_eof422:  f.cs = 422; goto _test_eof; 
	_test_eof423:  f.cs = 423; goto _test_eof; 
	_test_eof424:  f.cs = 424; goto _test_eof; 
	_test_eof425:  f.cs = 425; goto _test_eof; 
	_test_eof426:  f.cs = 426; goto _test_eof; 
	_test_eof427:  f.cs = 427; goto _test_eof; 
	_test_eof428:  f.cs = 428; goto _test_eof; 
	_test_eof429:  f.cs = 429; goto _test_eof; 
	_test_eof430:  f.cs = 430; goto _test_eof; 
	_test_eof431:  f.cs = 431; goto _test_eof; 
	_test_eof432:  f.cs = 432; goto _test_eof; 
	_test_eof433:  f.cs = 433; goto _test_eof; 
	_test_eof434:  f.cs = 434; goto _test_eof; 
	_test_eof435:  f.cs = 435; goto _test_eof; 
	_test_eof436:  f.cs = 436; goto _test_eof; 
	_test_eof437:  f.cs = 437; goto _test_eof; 
	_test_eof438:  f.cs = 438; goto _test_eof; 
	_test_eof439:  f.cs = 439; goto _test_eof; 
	_test_eof440:  f.cs = 440; goto _test_eof; 
	_test_eof441:  f.cs = 441; goto _test_eof; 
	_test_eof442:  f.cs = 442; goto _test_eof; 
	_test_eof443:  f.cs = 443; goto _test_eof; 
	_test_eof444:  f.cs = 444; goto _test_eof; 
	_test_eof445:  f.cs = 445; goto _test_eof; 
	_test_eof446:  f.cs = 446; goto _test_eof; 
	_test_eof447:  f.cs = 447; goto _test_eof; 
	_test_eof448:  f.cs = 448; goto _test_eof; 
	_test_eof449:  f.cs = 449; goto _test_eof; 
	_test_eof450:  f.cs = 450; goto _test_eof; 
	_test_eof451:  f.cs = 451; goto _test_eof; 
	_test_eof452:  f.cs = 452; goto _test_eof; 
	_test_eof453:  f.cs = 453; goto _test_eof; 
	_test_eof454:  f.cs = 454; goto _test_eof; 
	_test_eof455:  f.cs = 455; goto _test_eof; 
	_test_eof456:  f.cs = 456; goto _test_eof; 
	_test_eof457:  f.cs = 457; goto _test_eof; 
	_test_eof458:  f.cs = 458; goto _test_eof; 
	_test_eof459:  f.cs = 459; goto _test_eof; 
	_test_eof460:  f.cs = 460; goto _test_eof; 
	_test_eof461:  f.cs = 461; goto _test_eof; 
	_test_eof462:  f.cs = 462; goto _test_eof; 
	_test_eof463:  f.cs = 463; goto _test_eof; 
	_test_eof464:  f.cs = 464; goto _test_eof; 
	_test_eof465:  f.cs = 465; goto _test_eof; 
	_test_eof466:  f.cs = 466; goto _test_eof; 
	_test_eof467:  f.cs = 467; goto _test_eof; 
	_test_eof468:  f.cs = 468; goto _test_eof; 
	_test_eof469:  f.cs = 469; goto _test_eof; 
	_test_eof470:  f.cs = 470; goto _test_eof; 
	_test_eof471:  f.cs = 471; goto _test_eof; 
	_test_eof472:  f.cs = 472; goto _test_eof; 
	_test_eof473:  f.cs = 473; goto _test_eof; 
	_test_eof474:  f.cs = 474; goto _test_eof; 
	_test_eof475:  f.cs = 475; goto _test_eof; 
	_test_eof476:  f.cs = 476; goto _test_eof; 
	_test_eof477:  f.cs = 477; goto _test_eof; 
	_test_eof478:  f.cs = 478; goto _test_eof; 
	_test_eof479:  f.cs = 479; goto _test_eof; 
	_test_eof480:  f.cs = 480; goto _test_eof; 
	_test_eof481:  f.cs = 481; goto _test_eof; 
	_test_eof482:  f.cs = 482; goto _test_eof; 
	_test_eof483:  f.cs = 483; goto _test_eof; 
	_test_eof484:  f.cs = 484; goto _test_eof; 
	_test_eof485:  f.cs = 485; goto _test_eof; 
	_test_eof486:  f.cs = 486; goto _test_eof; 
	_test_eof537:  f.cs = 537; goto _test_eof; 
	_test_eof487:  f.cs = 487; goto _test_eof; 
	_test_eof488:  f.cs = 488; goto _test_eof; 
	_test_eof489:  f.cs = 489; goto _test_eof; 
	_test_eof490:  f.cs = 490; goto _test_eof; 
	_test_eof491:  f.cs = 491; goto _test_eof; 
	_test_eof492:  f.cs = 492; goto _test_eof; 
	_test_eof493:  f.cs = 493; goto _test_eof; 
	_test_eof494:  f.cs = 494; goto _test_eof; 
	_test_eof495:  f.cs = 495; goto _test_eof; 
	_test_eof496:  f.cs = 496; goto _test_eof; 
	_test_eof497:  f.cs = 497; goto _test_eof; 
	_test_eof498:  f.cs = 498; goto _test_eof; 
	_test_eof499:  f.cs = 499; goto _test_eof; 
	_test_eof500:  f.cs = 500; goto _test_eof; 
	_test_eof501:  f.cs = 501; goto _test_eof; 
	_test_eof502:  f.cs = 502; goto _test_eof; 
	_test_eof503:  f.cs = 503; goto _test_eof; 
	_test_eof504:  f.cs = 504; goto _test_eof; 
	_test_eof505:  f.cs = 505; goto _test_eof; 
	_test_eof506:  f.cs = 506; goto _test_eof; 
	_test_eof507:  f.cs = 507; goto _test_eof; 
	_test_eof508:  f.cs = 508; goto _test_eof; 
	_test_eof509:  f.cs = 509; goto _test_eof; 
	_test_eof510:  f.cs = 510; goto _test_eof; 
	_test_eof511:  f.cs = 511; goto _test_eof; 
	_test_eof512:  f.cs = 512; goto _test_eof; 
	_test_eof513:  f.cs = 513; goto _test_eof; 
	_test_eof514:  f.cs = 514; goto _test_eof; 
	_test_eof515:  f.cs = 515; goto _test_eof; 
	_test_eof516:  f.cs = 516; goto _test_eof; 
	_test_eof517:  f.cs = 517; goto _test_eof; 
	_test_eof518:  f.cs = 518; goto _test_eof; 
	_test_eof519:  f.cs = 519; goto _test_eof; 
	_test_eof538:  f.cs = 538; goto _test_eof; 
	_test_eof520:  f.cs = 520; goto _test_eof; 
	_test_eof521:  f.cs = 521; goto _test_eof; 
	_test_eof522:  f.cs = 522; goto _test_eof; 
	_test_eof523:  f.cs = 523; goto _test_eof; 

	_test_eof: {}
	if ( ( f.p) == eof )
	{
	switch (  f.cs ) {
	case 525: goto tr556;
	case 1: goto tr0;
	case 2: goto tr0;
	case 3: goto tr0;
	case 4: goto tr0;
	case 5: goto tr0;
	case 6: goto tr0;
	case 7: goto tr0;
	case 526: goto tr556;
	case 8: goto tr0;
	case 9: goto tr0;
	case 10: goto tr0;
	case 11: goto tr0;
	case 12: goto tr0;
	case 13: goto tr0;
	case 14: goto tr0;
	case 15: goto tr0;
	case 16: goto tr0;
	case 527: goto tr556;
	case 17: goto tr0;
	case 528: goto tr556;
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
	case 47: goto tr51;
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
	case 58: goto tr51;
	case 59: goto tr51;
	case 60: goto tr51;
	case 61: goto tr51;
	case 62: goto tr51;
	case 63: goto tr51;
	case 64: goto tr51;
	case 65: goto tr51;
	case 66: goto tr51;
	case 67: goto tr51;
	case 68: goto tr51;
	case 69: goto tr51;
	case 70: goto tr51;
	case 71: goto tr51;
	case 72: goto tr51;
	case 73: goto tr51;
	case 74: goto tr51;
	case 75: goto tr51;
	case 76: goto tr51;
	case 77: goto tr51;
	case 529: goto tr559;
	case 78: goto tr86;
	case 79: goto tr86;
	case 80: goto tr86;
	case 81: goto tr86;
	case 82: goto tr86;
	case 83: goto tr86;
	case 84: goto tr86;
	case 85: goto tr0;
	case 86: goto tr0;
	case 87: goto tr0;
	case 88: goto tr0;
	case 89: goto tr51;
	case 530: goto tr559;
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
	case 102: goto tr0;
	case 531: goto tr559;
	case 103: goto tr0;
	case 104: goto tr0;
	case 105: goto tr0;
	case 106: goto tr0;
	case 107: goto tr0;
	case 108: goto tr0;
	case 109: goto tr0;
	case 110: goto tr0;
	case 111: goto tr0;
	case 112: goto tr0;
	case 113: goto tr0;
	case 114: goto tr0;
	case 115: goto tr0;
	case 116: goto tr0;
	case 117: goto tr0;
	case 118: goto tr0;
	case 119: goto tr0;
	case 120: goto tr0;
	case 121: goto tr0;
	case 122: goto tr0;
	case 123: goto tr0;
	case 124: goto tr0;
	case 125: goto tr0;
	case 126: goto tr0;
	case 127: goto tr0;
	case 128: goto tr0;
	case 129: goto tr0;
	case 130: goto tr0;
	case 131: goto tr0;
	case 132: goto tr0;
	case 133: goto tr0;
	case 134: goto tr0;
	case 135: goto tr0;
	case 136: goto tr0;
	case 137: goto tr0;
	case 138: goto tr0;
	case 139: goto tr0;
	case 140: goto tr0;
	case 141: goto tr0;
	case 142: goto tr0;
	case 143: goto tr0;
	case 144: goto tr0;
	case 145: goto tr0;
	case 146: goto tr0;
	case 147: goto tr0;
	case 148: goto tr0;
	case 149: goto tr0;
	case 150: goto tr0;
	case 151: goto tr0;
	case 152: goto tr0;
	case 153: goto tr0;
	case 154: goto tr0;
	case 155: goto tr0;
	case 156: goto tr0;
	case 157: goto tr0;
	case 158: goto tr0;
	case 159: goto tr0;
	case 160: goto tr0;
	case 161: goto tr0;
	case 162: goto tr0;
	case 163: goto tr0;
	case 164: goto tr0;
	case 165: goto tr0;
	case 166: goto tr0;
	case 167: goto tr0;
	case 168: goto tr0;
	case 169: goto tr0;
	case 170: goto tr0;
	case 171: goto tr0;
	case 172: goto tr0;
	case 173: goto tr0;
	case 174: goto tr0;
	case 175: goto tr0;
	case 176: goto tr0;
	case 177: goto tr0;
	case 178: goto tr0;
	case 179: goto tr0;
	case 180: goto tr0;
	case 181: goto tr0;
	case 182: goto tr0;
	case 183: goto tr0;
	case 184: goto tr0;
	case 185: goto tr0;
	case 186: goto tr0;
	case 187: goto tr0;
	case 188: goto tr51;
	case 189: goto tr51;
	case 190: goto tr51;
	case 191: goto tr51;
	case 192: goto tr51;
	case 193: goto tr51;
	case 194: goto tr51;
	case 195: goto tr51;
	case 196: goto tr51;
	case 197: goto tr51;
	case 198: goto tr51;
	case 199: goto tr51;
	case 200: goto tr51;
	case 201: goto tr51;
	case 202: goto tr51;
	case 203: goto tr51;
	case 204: goto tr51;
	case 205: goto tr51;
	case 206: goto tr51;
	case 207: goto tr51;
	case 208: goto tr51;
	case 209: goto tr51;
	case 210: goto tr51;
	case 211: goto tr51;
	case 532: goto tr559;
	case 212: goto tr51;
	case 213: goto tr51;
	case 214: goto tr51;
	case 215: goto tr51;
	case 216: goto tr51;
	case 217: goto tr51;
	case 218: goto tr51;
	case 219: goto tr51;
	case 220: goto tr51;
	case 221: goto tr51;
	case 222: goto tr51;
	case 223: goto tr51;
	case 224: goto tr51;
	case 225: goto tr51;
	case 226: goto tr51;
	case 227: goto tr51;
	case 228: goto tr51;
	case 229: goto tr51;
	case 230: goto tr51;
	case 231: goto tr51;
	case 232: goto tr51;
	case 233: goto tr51;
	case 234: goto tr51;
	case 533: goto tr559;
	case 235: goto tr86;
	case 236: goto tr86;
	case 237: goto tr86;
	case 238: goto tr86;
	case 239: goto tr86;
	case 240: goto tr86;
	case 241: goto tr86;
	case 242: goto tr86;
	case 243: goto tr86;
	case 244: goto tr86;
	case 245: goto tr86;
	case 246: goto tr86;
	case 247: goto tr86;
	case 248: goto tr86;
	case 534: goto tr559;
	case 249: goto tr0;
	case 250: goto tr0;
	case 251: goto tr0;
	case 252: goto tr0;
	case 253: goto tr0;
	case 535: goto tr559;
	case 254: goto tr0;
	case 255: goto tr0;
	case 256: goto tr0;
	case 257: goto tr0;
	case 258: goto tr0;
	case 259: goto tr0;
	case 260: goto tr0;
	case 261: goto tr0;
	case 262: goto tr0;
	case 263: goto tr0;
	case 264: goto tr0;
	case 265: goto tr0;
	case 266: goto tr0;
	case 267: goto tr0;
	case 268: goto tr0;
	case 269: goto tr0;
	case 270: goto tr0;
	case 271: goto tr0;
	case 272: goto tr0;
	case 273: goto tr0;
	case 274: goto tr0;
	case 275: goto tr0;
	case 276: goto tr0;
	case 277: goto tr0;
	case 278: goto tr0;
	case 279: goto tr0;
	case 280: goto tr0;
	case 281: goto tr0;
	case 282: goto tr0;
	case 283: goto tr0;
	case 284: goto tr0;
	case 285: goto tr0;
	case 286: goto tr0;
	case 536: goto tr559;
	case 287: goto tr0;
	case 288: goto tr0;
	case 289: goto tr0;
	case 290: goto tr0;
	case 291: goto tr0;
	case 292: goto tr0;
	case 293: goto tr0;
	case 294: goto tr0;
	case 295: goto tr0;
	case 296: goto tr0;
	case 297: goto tr0;
	case 298: goto tr0;
	case 299: goto tr0;
	case 300: goto tr0;
	case 301: goto tr0;
	case 302: goto tr0;
	case 303: goto tr0;
	case 304: goto tr0;
	case 305: goto tr0;
	case 306: goto tr0;
	case 307: goto tr0;
	case 308: goto tr0;
	case 309: goto tr0;
	case 310: goto tr0;
	case 311: goto tr0;
	case 312: goto tr0;
	case 313: goto tr0;
	case 314: goto tr0;
	case 315: goto tr0;
	case 316: goto tr0;
	case 317: goto tr0;
	case 318: goto tr0;
	case 319: goto tr0;
	case 320: goto tr0;
	case 321: goto tr0;
	case 322: goto tr0;
	case 323: goto tr0;
	case 324: goto tr0;
	case 325: goto tr0;
	case 326: goto tr0;
	case 327: goto tr0;
	case 328: goto tr0;
	case 329: goto tr0;
	case 330: goto tr0;
	case 331: goto tr0;
	case 332: goto tr0;
	case 333: goto tr0;
	case 334: goto tr0;
	case 335: goto tr0;
	case 336: goto tr0;
	case 337: goto tr0;
	case 338: goto tr0;
	case 339: goto tr0;
	case 340: goto tr0;
	case 341: goto tr0;
	case 342: goto tr0;
	case 343: goto tr0;
	case 344: goto tr0;
	case 345: goto tr0;
	case 346: goto tr0;
	case 347: goto tr0;
	case 348: goto tr0;
	case 349: goto tr0;
	case 350: goto tr0;
	case 351: goto tr0;
	case 352: goto tr0;
	case 353: goto tr0;
	case 354: goto tr0;
	case 355: goto tr0;
	case 356: goto tr0;
	case 357: goto tr0;
	case 358: goto tr0;
	case 359: goto tr0;
	case 360: goto tr0;
	case 361: goto tr0;
	case 362: goto tr0;
	case 363: goto tr0;
	case 364: goto tr0;
	case 365: goto tr0;
	case 366: goto tr0;
	case 367: goto tr0;
	case 368: goto tr0;
	case 369: goto tr0;
	case 370: goto tr0;
	case 371: goto tr0;
	case 372: goto tr0;
	case 373: goto tr0;
	case 374: goto tr0;
	case 375: goto tr0;
	case 376: goto tr0;
	case 377: goto tr0;
	case 378: goto tr0;
	case 379: goto tr0;
	case 380: goto tr0;
	case 381: goto tr0;
	case 382: goto tr0;
	case 383: goto tr0;
	case 384: goto tr0;
	case 385: goto tr0;
	case 386: goto tr0;
	case 387: goto tr0;
	case 388: goto tr0;
	case 389: goto tr0;
	case 390: goto tr0;
	case 391: goto tr0;
	case 392: goto tr0;
	case 393: goto tr0;
	case 394: goto tr0;
	case 395: goto tr0;
	case 396: goto tr0;
	case 397: goto tr0;
	case 398: goto tr0;
	case 399: goto tr0;
	case 400: goto tr0;
	case 401: goto tr0;
	case 402: goto tr0;
	case 403: goto tr0;
	case 404: goto tr0;
	case 405: goto tr0;
	case 406: goto tr0;
	case 407: goto tr0;
	case 408: goto tr0;
	case 409: goto tr0;
	case 410: goto tr0;
	case 411: goto tr0;
	case 412: goto tr0;
	case 413: goto tr0;
	case 414: goto tr0;
	case 415: goto tr0;
	case 416: goto tr0;
	case 417: goto tr0;
	case 418: goto tr0;
	case 419: goto tr0;
	case 420: goto tr0;
	case 421: goto tr0;
	case 422: goto tr0;
	case 423: goto tr0;
	case 424: goto tr0;
	case 425: goto tr0;
	case 426: goto tr0;
	case 427: goto tr0;
	case 428: goto tr0;
	case 429: goto tr0;
	case 430: goto tr0;
	case 431: goto tr0;
	case 432: goto tr0;
	case 433: goto tr0;
	case 434: goto tr0;
	case 435: goto tr0;
	case 436: goto tr0;
	case 437: goto tr0;
	case 438: goto tr0;
	case 439: goto tr0;
	case 440: goto tr0;
	case 441: goto tr0;
	case 442: goto tr0;
	case 443: goto tr0;
	case 444: goto tr0;
	case 445: goto tr0;
	case 446: goto tr0;
	case 447: goto tr0;
	case 448: goto tr0;
	case 449: goto tr0;
	case 450: goto tr0;
	case 451: goto tr0;
	case 452: goto tr0;
	case 453: goto tr0;
	case 454: goto tr0;
	case 455: goto tr0;
	case 456: goto tr0;
	case 457: goto tr0;
	case 458: goto tr0;
	case 459: goto tr0;
	case 460: goto tr0;
	case 461: goto tr0;
	case 462: goto tr0;
	case 463: goto tr0;
	case 464: goto tr0;
	case 465: goto tr0;
	case 466: goto tr0;
	case 467: goto tr0;
	case 468: goto tr0;
	case 469: goto tr0;
	case 470: goto tr0;
	case 471: goto tr0;
	case 472: goto tr0;
	case 473: goto tr0;
	case 474: goto tr0;
	case 475: goto tr0;
	case 476: goto tr0;
	case 477: goto tr0;
	case 478: goto tr0;
	case 479: goto tr0;
	case 480: goto tr0;
	case 481: goto tr0;
	case 482: goto tr0;
	case 483: goto tr0;
	case 484: goto tr0;
	case 485: goto tr0;
	case 486: goto tr0;
	case 537: goto tr556;
	case 487: goto tr0;
	case 488: goto tr0;
	case 489: goto tr0;
	case 490: goto tr0;
	case 491: 
	case 492: 
	case 493: 
	case 494: 
	case 495: 
	case 496: 
	case 497: 
	case 498: 
	case 499: 
	case 500: 
	case 501: 
	case 502: 
	case 503: 
	case 504: 
	case 505: 
	case 506: 
	case 507: 
	case 508: 
	case 509: 
	case 510: 
	case 511: 
	case 512: 
	case 513: 
	case 514: 
	case 515: 
	case 516: 
	case 517: 
	case 518: 
	case 519: 
	case 520: 
	case 521: 
	case 522: 
	case 523: 
#line 124 "../src/parsers/allies.c.rl"
	{ {( f.p) = (( rmargin1))-1;} {       if ( ( f.p) == ( f.pe) )
               goto _test_eof524;
goto st524;} }
	break;
#line 8792 "../src/parsers/allies.c"
	}
	}

	_out: {}
	}

#line 176 "../src/parsers/allies.c.rl"
    f.cap[0].len = (size_t)(lmargin[f.branch] - f.cap[0].ptr);
    *fsm = f;

    if (f.cs == 0)
        return FSM_ERROR;
    if (f.cs >= 524)
        return FSM_OK;
    return FSM_INCOMPLETE;
}

#ifdef __cplusplus
}
#endif
