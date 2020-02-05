//blink led with delay and loop
int o=2;
int p=3;
int e=4;
int n=5;
int sw1=13;
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

    
