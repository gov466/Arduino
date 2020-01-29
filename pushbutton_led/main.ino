//single push button
int led=1;
int sw=2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sw,INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(sw) == LOW)
  {
  digitalWrite(led, HIGH);
  }
 if(digitalRead(sw) == HIGH)
  {
  digitalWrite(led, LOW);
  }
}

//two swtch operated on two different leds
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
  digitalWrite(led1, HIGH);
  }
 if(digitalRead(sw1) == HIGH)
  {
  digitalWrite(led1, LOW);
  }
  if(digitalRead(sw2) == LOW)
  {
  digitalWrite(led2, HIGH);
  }
 if(digitalRead(sw2) == HIGH)
  {
  digitalWrite(led2, LOW);
  }
}

//sw1 press both led on, sw2 pressed both led off

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
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  }
 if(digitalRead(sw2) == LOW)
  {
  digitalWrite(led1, LOW);
   digitalWrite(led2, LOW);
  }
 
}
