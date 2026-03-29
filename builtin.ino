// C++ code
//
const int BUTTON_PIN=2;
const int LED_PIN=7;
int buttonstate=0;
int timedelay=0;
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  buttonstate=digitalRead(BUTTON_PIN);
  int state=digitalRead(2);
  delay
  if(state==1)
  {
  digitalWrite(LED_PIN, LOW);
  }
  else
  {
  digitalWrite(LED_PIN, HIGH);
  }
}