int in1 = 5;
int in2 = 6;
void setup() {
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT);
}
void loop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}
