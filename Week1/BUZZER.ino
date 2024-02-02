const int buzzer = 9;
void setup() {
  pinMode(buzzer, OUTPUT);
}
void loop() {
  tone(buzzer, 1200);
  delay(1000);
  noTone(buzzer);
  delay(1200);
  // put your main code here, to run repeatedly:
 
}