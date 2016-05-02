//This program reads an IR signal and displays it's function if it is implemented in the header file.
//TODO:
//		-check encoding and bit length in loop and return error if wrong remote
//		-return error from header if right encoding/bit length but no match
//		-rename defines and functions in header to differentiate betwen multiple headers
//		-implement DHT temp sensor polling (as ISR?)

#include "NA_setTopBox.h"
#include "Onkyo_amp.h"
#include "strong_setTopBox.h"
#include "UPC_setTopBox.h"
#include <DHT.h>
#include <IRremote.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define RECV_PIN 19

//ha valami gebasz lenne:
//int RECV_PIN = 19;

IRrecv irrecv(RECV_PIN);
//DHT dht(DHTPIN, DHTTYPE);
decode_results results;

//float t = 0, h = 0; //temp, humidity

void setup()
{
	irrecv.enableIRIn();
	Serial.begin(9600);
	//dht.begin();
}

void loop()
{

	if (irrecv.decode(&results))
	{
		if (testInput(&results)){
		}
		irrecv.resume();
	}

	/*delay(5000);
	t = dht.readTemperature();
	h = dht.readHumidity();

	Serial.print("Humidity: ");
	Serial.print(h);
	Serial.print(" %\t");
	Serial.print("Temperature: ");
	Serial.print(t);
	Serial.println(" *C ");*/

}
