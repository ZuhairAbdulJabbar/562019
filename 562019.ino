/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "74e2e35eeee3446daec133e5af8ca54c";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Zuhair";
char pass[] = "22446688";

///////////////////////////////////////////////////////////////////////////
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);  //turn ON
  //  delay(1000);
  //  digitalWrite(LED_BUILTIN, HIGH);
  //  delay(2000);
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();

}
