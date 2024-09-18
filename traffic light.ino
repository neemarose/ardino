int led1=7;
int led2=4;
int led3=2;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}
void loop()
{
digitalWrite(led1,HIGH);
delay(3000);
digitalWrite(led1,0);
delay(2000);
digitalWrite(led2,1);
delay(3000);
digitalWrite(led2,0);
delay(2000);
digitalWrite(led3,1);
delay(3000);
digitalWrite(led3,0);
delay(2000);
}

  
  
  
  
  
  