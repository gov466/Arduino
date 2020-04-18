
#include <LiquidCrystal.h>
const int rs=8,en=9,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

const int echoPin = 2; // Echo Pin of Ultrasonic Sensor
const int pingPin = 3; // Trigger Pin of Ultrasonic Sensor
const int ledred = 10; //pin for red led
const int ledgreen = 11; //pin for green led
const int buzzer = 1; //pin for buzzer


                    
void setup() 
{
  Serial.begin(9600); // Starting Serial Communication
  pinMode(pingPin, OUTPUT); // initialising pin 3 as output
  pinMode(echoPin, INPUT); // initialising pin 2 as input
  pinMode(ledred,OUTPUT);
  pinMode(ledgreen,OUTPUT);
  pinMode(buzzer,OUTPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Water level indicator");
}

void loop()
{
  long duration, inches, cm;
  
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(pingPin, LOW);

  
  duration = pulseIn(echoPin, HIGH); // using pulsin function to determine total time
  inches = microsecondsToInches(duration); // calling method
  cm = microsecondsToCentimeters(duration); // calling method


  lcd.setCursor(0,1);
  lcd.print(inches);
  lcd.print("in. ");
  lcd.print(cm);
  lcd.print("cm");

  if(cm>500)
  {
    lcd.print("Overflow");
    digitalWrite(ledgreen, HIGH);
    digitalWrite(ledred, LOW);
    //digitalWrite(buzzer, HIGH);
    
    
  }
  else if(cm<400)
  {
    lcd.print("underflow");
    digitalWrite(ledred, HIGH);
    digitalWrite(ledgreen, LOW);
    //digitalWrite(buzzer, LOW);

  }
  if(cm>500)
  {
    digitalWrite(buzzer, HIGH);
  }
  else
  {
    digitalWrite(buzzer, LOW);
  }
  
   // scroll 13 positions (string length) to the left
  // to move it offscreen left:
/*  for (int positionCounter = 0; positionCounter < 21; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 37; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }

  // scroll 16 positions (display length + string length) to the left
  // to move it back to center:
  for (int positionCounter = 0; positionCounter < 37; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  } */
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  delay(100);

}

long microsecondsToInches(long microseconds) // method to covert microsec to inches 
{
 return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) // method to covert microsec to centimeters
{
   return microseconds / 29 / 2;
}
