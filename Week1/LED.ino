void setup() { 
  Serial.begin(9600);
  Serial.println("hello");
  pinMode(13,OUTPUT);
}


void loop() {
  digitalWrite(13, HIGH);
  delay(10000);
  digitalWrite(13, LOW);
  delay(10000);
}