#include <ESPAsyncWebServer.h>
#include <TimeLib.h>//https://github.com/PaulStoffregen/Time

#include "WiFi.h"

void r_localTime(AsyncWebServerRequest *request){
	String message;
	message += hour();
	message += ":";
	message += minute();
	message += ":";
	message += second();
	request->send(200, "text/plain", message);
}