//Aurdino programming illustrating car indicator and brake light
int led1=0; //initialising all leds
int led2=1;
int led3=5;
int led4=6;
int led5=7;
int sw1=4;  //switch for brake indicator
int led6=8;
int led7=9;
int led8=10;
int led9=11;
int led10=12;
int swL=3;  //switch for left indicator
int swR=2;  //switch for right indicator
void setup()
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

void loop()
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
  if(digitalRead(swL) == LOW)
  
  {
    while(1)
  
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
  }
  if(digitalRead(swR) == LOW)
  
  {
    while(1)
  
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
  }
}
