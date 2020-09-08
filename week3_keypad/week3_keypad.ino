void setupKeypad()
{
  // do stuff to configure the keypad
}

bool isKeypadPressed()
{
  // do something appropriate
  return false;
}

char getKeypadButton()
{
  while(!isKeypadPressed())
  {
    // keypad is not pressed yet
  }
  // read the key value
  return 'a';  // dummy value for now
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setupKeypad();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(isKeypadPressed())
  {
    Serial.print("The key is :" + String(getKeypadButton()));
  }
}
