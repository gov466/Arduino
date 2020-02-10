//OPEN board led display
int o=2; //pins of aurdino
int p=3;
int e=4;
int n=5;
int sw1=13;
int led1=6;
int led2=7;
int led3=8;
int led4=9;
int led5=10;
void setup()
{
  pinMode(o, OUTPUT);
  pinMode(p, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(n, OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
}
void open()
{
  digitalWrite(o, HIGH);
  //delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(p, LOW);
  digitalWrite(e, LOW);
  digitalWrite(n, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(o, LOW);
  digitalWrite(p,HIGH);
  digitalWrite(e, LOW);
  digitalWrite(n, LOW);
  delay(500); 
  digitalWrite(o, LOW);
  digitalWrite(p, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(n, LOW);
  delay(500);
  digitalWrite(o, LOW);
  digitalWrite(p,LOW);
  digitalWrite(e, LOW);
  digitalWrite(n, HIGH);
  delay(500);
}

void loop()
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(250);
  digitalWrite(led1,LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(250);
  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(250);
  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  delay(250);
  digitalWrite(led1,LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(250);
  
  
 // if(digitalRead(sw1) == LOW)
//{
  for(int i=0;i<2;i++)
  {
  open();
  }
  while(1)
  {
  digitalWrite(o, HIGH);
  digitalWrite(p, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(n, HIGH);
  delay(500);
  digitalWrite(o, LOW);
  digitalWrite(p, LOW);
  digitalWrite(e, LOW);
  digitalWrite(n, LOW);
  delay(500);
     
    
  }
}
 /* if( int i==2)
  {
  
  }
 
//}*/

    
