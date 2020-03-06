//Car indicatore and brake light using aurdino
int led1=0;
int led2=1;//initialisinv all leds and switches
int led3=5;
int led4=6;
int led5=7;
int sw1=4;
int led6=8;
int led7=9;
int led8=10;
int led9=11;
int led10=12;
int swL=3;
int swR=2;
void setup() //setup function
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(swL,INPUT_PULLUP);
  pinMode(swR,INPUT_PULLUP);
}
void brake() //function for brake 
{
   if(digitalRead(sw1) == LOW)
 {
   
   
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
   digitalWrite(led4, HIGH);
   digitalWrite(led5, HIGH);
   digitalWrite(led6, HIGH);
   digitalWrite(led7, HIGH);
   digitalWrite(led8, HIGH);
   digitalWrite(led9, HIGH);
   digitalWrite(led10, HIGH);
  
 }
  else
  {
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
   digitalWrite(led4, LOW);
   digitalWrite(led5, LOW);
   digitalWrite(led6, LOW);
   digitalWrite(led7, LOW);
   digitalWrite(led8, LOW);
   digitalWrite(led9, LOW);
   digitalWrite(led10, LOW);
  }
}
void left_turn()
{
   for(int i=0;i<=3;i++)
  
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
    delay(250);
    digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
    delay(250);
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
    delay(250);
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
    delay(250);
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
    }
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  
}
void right_turn()
{
  
    for(int i=0;i<=3;i++)
  
  {
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
    delay(250);
    digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
    delay(250);
    digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
    delay(250);
    digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
    delay(250);
    digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
    } 
     
    digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  
}

void loop()
{
 brake();
  if(digitalRead(swL) == LOW)
  
  {
   left_turn();
  }
  if(digitalRead(swR) == LOW)
  
  {
    right_turn();
  }
}
