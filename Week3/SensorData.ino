void setup(){
  pinMode(10, INPUT);
  Serial.begin(9600);
}

void loop(){
  int val;
  val = digitalRead(10);
  Serial.println(val);
  if(val==0)
  Serial.println("Obstacle is detected");
  else
  Serial.println("No Obstacle");
  delay(1000);
}
