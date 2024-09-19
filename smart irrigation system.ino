int motor=2;
int sensor=4;

int buttonState=0;

void setup()
{
  pinMode(motor,INPUT);
  pinMode(sensor,OUTPUT);
}

void loop()
  
{
  buttonState=digitalRead(motor);
  if (buttonState==0)
  {
    digitalWrite(sensor,HIGH);
  }
  else
  {
    digitalWrite(sensor,LOW);
  }
}
 
