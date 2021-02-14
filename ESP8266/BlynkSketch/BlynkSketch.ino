#define BLYNK_PRINT Serial
#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
SoftwareSerial s(D5, D6);
char auth[] = "By9BSWe58Yf0bjAzN837U9rgHhGlTO7N";
char ssid[] = "neeltron";
char pass[] = "163a4c3d1146";
int data;
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();
  Serial.println(pinValue);
  data = pinValue;
}
void setup()
{
  Serial.begin(9600);
  s.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
  if (s.available() > 0)
  {
    s.write(data);
  }
}
