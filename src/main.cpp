// NOM DU PROGRAMME : WiFiManager_PROTOTYPE
// REALISATION INFORMATIQUE : Mathieu Lepage
// DATE DE CREATION : 2020/10/16
// OBJET : Programme test permettant d'ajouter un ESP32 en Acces Point (AP) pour ensuite le connecter à un 
// périphériques réseau sans fil différent (SSID) à partir du portail de connexion WiFi-Manager

#include <Arduino.h>
#include <WiFiManager.h>

// Les information de login au point d'accès
const char* ssid = "ESP32AP";
const char* password = "devkit1234"; //"EFC5F27D674F";

// Instanciation d'un object WiFiManager
WiFiManager wm;

void setup() {
  WiFi.mode(WIFI_STA);
  Serial.begin(9600);
  delay(1000);
  Serial.println("\n");

  // Fonction qui permet de se connecter au WiFi automatiquement lorsqu'une adresse locale est sauvegardée en mémoire
  if(!wm.autoConnect(ssid, password))
    Serial.println("Erreur de connexion.");
  else
    Serial.println("Connexion etablie!");
}

void loop() {
  // if(touchRead(T0) < 50)
  // {
  //   Serial.println("Suppression des reglages et redemarrage...");
  //   // Fonction qui permet de réinitialiser (Factory Reset) les adresses enregistrées du WiFiManager dans le ESP32
  //   wm.resetSettings();
  //   // Fonction qui permet de reboot le microcontrolleur
  //   ESP.restart();
  // }
}