//Working of IR sensor with arduino
void setup()
{
  pinMode(13,OUTPUT); //setting pin 13 as output
  pinMode(3,INPUT); //setting pin 3 as output
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(3)== LOW) //if IR sensior is low then blink led
  {
    digitalWrite(13,HIGH);
    
    delay(10);
  }
  else 
  {
    
    digitalWrite(13,LOW);
    delay(10);
    
  }
  
}
