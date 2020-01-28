int buzzer=1;
void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(buzzer, HIGH);
  delay(800); // Wait for 1000 millisecond(s)
  digitalWrite(buzzer, LOW);
  delay(800); // Wait for 1000 millisecond(s)
}

//using tone library

int buzzer=1;
void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  tone(1,500);
  delay(100);
  noTone(1);
  delay(100);
}

