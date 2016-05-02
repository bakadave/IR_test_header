// 
// 
// 

#include "Onkyo_amp.h"


boolean testInputOnkyo(decode_results *results)
{
	if (results->decode_type != NEC || results->bits != 32) return false;		//move this to loop

	switch (results->value)
	{
	case(ONKYO_POWER):
	{
		Serial.println("Onkyo: POWER");
		break;
	}
	case(ONKYO_VOL_UP) :
	{
		Serial.println("Onkyo: Volume up");
		break;
	}
	case(ONKYO_VOL_DOWN) :
	{
		Serial.println("Onkyo: Volume down");
		break;
	}
	case(ONKYO_MUTE) :
	{
		Serial.println("Onkyo: Mute");
		break;
	}
	case(ONKYO_SLEEP) :
	{
		Serial.println("Onkyo: Sleep");
		break;
	}
	case(ONKYO_DIMMER) :
	{
		Serial.println("Onkyo: Dimmer");
		break;
	}
	case(ONKYO_SUR_MODE) :
	{
		Serial.println("Onkyo: SUR Mode");
		break;
	}
	case(ONKYO_MULTI_CH_INPUT) :
	{
		Serial.println("Onkyo: Multi Channel Input");
		break;
	}
	case(ONKYO_INPUT_DVD) :
	{
		Serial.println("Onkyo: Input: DVD");
		break;
	}
	case(ONKYO_INPUT_CD) :
	{
		Serial.println("Onkyo: Input: CD");
		break;
	}
	case(ONKYO_INPUT_TAPE) :
	{
		Serial.println("Onkyo: Input: Tape");
		break;
	}
	case(ONKYO_INPUT_TUNER) :
	{
		Serial.println("Onkyo: Input: Tuner");
		break;
	}
	case(ONKYO_INPUT_PHONO) :
	{
		Serial.println("Onkyo: Input: Phono");
		break;
	}
	case(ONKYO_INPUT_VIDEO1) :
	{
		Serial.println("Onkyo: Input: Video-1");
		break;
	}
	case(ONKYO_INPUT_VIDEO2) :
	{
		Serial.println("Onkyo: Input: Video-2");
		break;
	}
	case(ONKYO_TUNER_GROUP) :
	{
		Serial.println("Onkyo: Tuner: Group");
		break;
	}
	case(ONKYO_TUNER_PRSET_BACK) :
	{
		Serial.println("Onkyo: Tuner: PRSET <-");
		break;
	}
	case(ONKYO_TUNER_PRSET_NEXT) :
	{
		Serial.println("Onkyo: Tuner: PRSET ->");
		break;
	}
	case(ONKYO_CD_STOP) :
	{
		Serial.println("Onkyo: CD: Stop");
		break;
	}
	case(ONKYO_CD_PLAY) :
	{
		Serial.println("Onkyo: CD: Play");
		break;
	}
	case(ONKYO_CD_DISC) :
	{
		Serial.println("Onkyo: CD: Disc");
		break;
	}
	case(ONKYO_CD_PAUSE) :
	{
		Serial.println("Onkyo: CD: Pause");
		break;
	}
	case(ONKYO_CD_REW) :
	{
		Serial.println("Onkyo: CD: Rewind");
		break;
	}
	case(ONKYO_CD_FWD) :
	{
		Serial.println("Onkyo: CD: Forward");
		break;
	}
	case(ONKYO_DVD_STOP) :
	{
		Serial.println("Onkyo: DVD: Stop");
		break;
	}
	case(ONKYO_DVD_PLAY) :
	{
		Serial.println("Onkyo: DVD: Play");
		break;
	}
	case(ONKYO_DVD_REW) :
	{
		Serial.println("Onkyo: DVD: Rewind");
		break;
	}
	case(ONKYO_DVD_FWD) :
	{
		Serial.println("Onkyo: DVD: Forward");
		break;
	}
	case(ONKYO_DVD_PREV) :
	{
		Serial.println("Onkyo: DVD: Previous");
		break;
	}
	case(ONKYO_DVD_NEXT) :
	{
		Serial.println("Onkyo: DVD: Next");
		break;
	}
	case(ONKYO_TAPE_BACK) :
	{
		Serial.println("Onkyo: Tape: Back");
		break;
	}
	case(ONKYO_TAPE_PLAY) :
	{
		Serial.println("Onkyo: Tape: Play");
		break;
	}
	case(ONKYO_TAPE_RECPAUSE) :
	{
		Serial.println("Onkyo: Tape: REC/Pause");
		break;
	}
	case(ONKYO_TAPE_STOP) :
	{
		Serial.println("Onkyo: Tape: Stop");
		break;
	}
	case(ONKYO_TAPE_REW) :
	{
		Serial.println("Onkyo: Tape: Rewind");
		break;
	}
	case(ONKYO_TAPE_FWD) :
	{
		Serial.println("Onkyo: Tape: Forward");
		break;
	}
	case(ONKYO_CH_SEL) :
	{
		Serial.println("Onkyo: CH Sel");
		break;
	}
	case(ONKYO_LEVEL_UP) :
	{
		Serial.println("Onkyo: Level Up");
		break;
	}
	case(ONKYO_LEVEL_DWN) :
	{
		Serial.println("Onkyo: Level Down");
		break;
	}
	case(ONKYO_TEST_TONE) :
	{
		Serial.println("Onkyo: Test Tone");
		break;
	}
	}

}