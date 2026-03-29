// C++ code
//
const int BUTTON_PIN = 2;
const int RELAY_PIN =13;
void setup(){
 Serial.begin(9600);
 pinMode(BUTTON_PIN,INPUT_PULLUP);
  pinMode(RELAY_PIN,OUTPUT);
}
 void loop()
{
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState==LOW)
  {
    Serial.println("The button is being pressed");
    digitalWrite(RELAY_PIN,HIGH);
  }
  else
    if(buttonState==HIGH)
  {
    Serial.println("the button is unpressed");
    digitalWrite(RELAY_PIN,LOW);
  }
}