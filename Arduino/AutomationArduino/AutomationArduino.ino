#include <SoftwareSerial.h>
SoftwareSerial s(6, 5);
int data = 0;
int in1 = 7;
int in2 = 8;
void setup() {
  Serial.begin(9600);
  s.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}
void loop() {
  if (s.available()) {
    data = s.read();
    if (data == 1) {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);

    }
    else {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
    }
    Serial.println(data);
  }
  else {
    Serial.println("Serial not available");
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }
}
