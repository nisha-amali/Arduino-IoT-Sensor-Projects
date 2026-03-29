#include<Servo.h>
Servo myServo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  myServo.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogvalue=analogRead(A0);
  int angle=map(analogvalue,0,1023,0,180);
  myServo.write(angle);
  Serial.print("Analog: ");
  Serial.print(analogvalue);
  Serial.print(" , Angle: ");
  Serial.println(angle);
  delay(100);
}
