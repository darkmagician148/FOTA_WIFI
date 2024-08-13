#include <Arduino.h>
#include <HardwareSerial.h>
#include <WiFi.h>

#define SSID "tuan"
#define PW   "14082000"
HardwareSerial SerialPort(2);
void setup() {
  Serial.begin(9600);

  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  WiFi.begin(SSID, PW);
    Serial.print("connecting");
    while (WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(500);
    }
  Serial.println("Setup done");
  // put your setup code here, to run once:
  SerialPort.begin(15200, SERIAL_8N1, 16, 17); 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("scan start");
  delay(5000);
}
