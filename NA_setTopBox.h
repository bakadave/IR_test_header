// NA_setTopBox.h
//don't remember the brand name of this set top box 
//NEC encoding 32 bit long messages

#ifndef _NA_SETTOPBOX_h
#define _NA_SETTOPBOX_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


#endif

#define NA_POWER 0x80BF3BC4
#define NA_VFORMAT 0x80BFC13E
#define NA_MUTE 0x80BF39C6
#define NA_SAT 0x80BF916E
#define NA_USB 0x80BFB649
#define NA_ZOOM 0x80BF8A75
#define NA_SLEEP 0x80BFB34C
#define NA_1 0x80BF49B6
#define NA_2 0x80BFC936
#define NA_3 0x80BF33CC
#define NA_4 0x80BF718E
#define NA_5 0x80BFF10E
#define NA_6 0x80BF13EC
#define NA_7 0x80BF51AE
#define NA_8 0x80BFD12E
#define NA_9 0x80BF23DC
#define NA_0 0x80BFE11E
#define NA_TV/RADIO 0x80BF9B64
#define NA_PREV 0x80BF41BE
#define NA_FAV 0x80BF11EE
#define NA_PAUSE 0x80BF36C9
#define NA_PAGE_UP 0x80BFBB44
#define NA_PAGE_DOWN 0x80BF31CE
#define NA_PR_UP 0x80BF53AC
#define NA_PR_DOWN 0x80BF4BB4
#define NA_VOL_UP 0x80BF837C
#define NA_VOL_DOWN 0x80BF9966
#define NA_OK/LIST 0x80BF738C
#define NA_MENU 0x80BFA956
#define NA_EXIT 0x80BFA35C
#define NA_INFO 0x80BF0BF4
#define NA_EPG 0x80BF6B94
#define NA_FIND/RED 0x80BF8679
#define NA_SUB/GREEN 0x80BF46B9
#define NA_TXT/YELLOW 0x80BFC639
#define NA_BLUE 0x80BF21DE
#define NA_RECORD 0x80BF26D9
#define NA_PLAY 0x80BFA659
#define NA_STOP 0x80BF6699
#define NA_SHIFT 0x80BFE619
#define NA_REWIND 0x80BF16E9
#define NA_FORWARD 0x80BF9669
#define NA_PREVIOUS 0x80BF56A9
#define NA_NEXT 0x80BFD629