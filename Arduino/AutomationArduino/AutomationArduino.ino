#include <SoftwareSerial.h>
#include <Servo.h> 
Servo Servo1;
SoftwareSerial s(6, 5);
int servoPin = 3; 
int data = 0;
int in1 = 7;
int in2 = 8;
void setup() {
  Serial.begin(9600);
  s.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Servo1.attach(servoPin);
}
void loop() {
  if (s.available()) {
    data = s.read();
    if (data == 1) {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      Servo1.write(0);
    }
    else {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      Servo1.write(90);
    }
    Serial.println(data);
  }
  else {
    Serial.println("Serial not available");
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }
}
