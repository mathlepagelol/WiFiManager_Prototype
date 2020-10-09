#include <Arduino.h>
#include <WiFiManager.h>

const char* ssid = "ESP32AP";
const char* password = "devkit1234";
//"EFC5F27D674F";

WiFiManager wm;

void setup() {
  WiFi.mode(WIFI_STA);
  Serial.begin(9600);
  delay(1000);
  Serial.println("\n");

  if(!wm.autoConnect(ssid, password))
    Serial.println("Erreur de connexion.");
  else
    Serial.println("Connexion etablie!");
}

void loop() {
  // if(touchRead(T0) < 50)
  // {
  //   Serial.println("Suppression des reglages et redemarrage...");
  //   wm.resetSettings();
  //   ESP.restart();
  }