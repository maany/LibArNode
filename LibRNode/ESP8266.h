// ESP8266.h

#ifndef _ESP8266_h
#define _ESP8266_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include <SoftwareSerial\SoftwareSerial.h>
#define ARD_RX_ESP_TX 10
#define ARD_TX_ESP_RX 11
#define DEFAULT_BAUD_RATE 115200
class ESP8266 {
private:
	SoftwareSerial _serial;

public :
	ESP8266( int ard_rx_esp_tx = ARD_RX_ESP_TX, int ard_tx_esp_rx = ARD_TX_ESP_RX, int baudRate = DEFAULT_BAUD_RATE);
	bool ping();
	bool sendRawATCommand(char* command);
	bool sendATCommand();
	bool connectWifi(const char* ssid, const char* password);
	
};

#endif

