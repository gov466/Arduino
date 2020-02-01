int led1=1; 
int sw1=2;
int led2=4;
int sw2=3;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
   pinMode(led2, OUTPUT);
  pinMode(sw2,INPUT_PULLUP);
}


void loop()
{
  if(digitalRead(sw1) == LOW)
  {
  for(int i=0;i<5;i++)
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(250);
  }
  
  }
if(digitalRead(sw2) == LOW)
  {
  for(int i=0;i<10;i++)
  {
   
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  }
 
  }
}
