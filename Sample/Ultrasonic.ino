#define ECHOpin 5
#define TRIGpin 6
long duration;
int distance;
void setup() {
  pinMode(TRIGpin,OUTPUT);
  pinMode(ECHOpin,INPUT);
  Serial.begin(9600);
  Serial.println("Test of the ultrasonic sensor HC-Sr04");
  Serial.println("with the Arduino UNO r3 board");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIGpin,LOW);
  delayMicroseconds(4);
  digitalWrite(TRIGpin,HIGH);
  delayMicroseconds(15);
  digitalWrite(TRIGpin,LOW);
  duration=pulseIn(ECHOpin,HIGH);
  distance=duration*(0.034/2);
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");

  


}
