int obstaclePin=4;
int LED=3;
int hasObstacle=LOW;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(obstaclePin,INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  hasObstacle=digitalRead(obstaclePin);
  if (hasObstacle==HIGH)
  {
    digitalWrite(LED,LOW);
    Serial.println("Path is clear");
  }
  else
  {
    digitalWrite(LED,HIGH);
    Serial.println("Stop something is ahead!");
  }
  delay(200);
}
