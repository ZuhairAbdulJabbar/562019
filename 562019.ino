#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "1cf112ae166a4939a8193506b19bee6c";
char ssid[] = "Zuhair";
char pass[] = "22446688";


#define NodeLED = 16 // D0
///////////////////////////////////////////////////////////////////////////
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  
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

BLYNK_WRITE(V2){
  int pinValue = param.asInt();
    if (pinValue == 1) {
    digitalWrite(LED_BUILTIN, LOW);  //turn ON
  }
  else if (pinValue == 0) {
    digitalWrite(LED_BUILTIN, HIGH);  //turn OFF
  }
}
