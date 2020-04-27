/*
  LiquidCrystal Library - scrollDisplayLeft() and scrollDisplayRight()

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD and uses the
 scrollDisplayLeft() and scrollDisplayRight() methods to scroll
 the text.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
const int buzzer=4;
const int echoPin = 2; // Echo Pin of Ultrasonic Sensor
const int pingPin = 3; // Trigger Pin of Ultrasonic Sensor
const int buttonPin= 6;
int buttonNew;
int buttonOld =0;
int d=0.7545;


void setup() {
  
  Serial.begin(9600); // Starting Serial Communication
  pinMode(pingPin, OUTPUT); // initialising pin 3 as output
  pinMode(echoPin, INPUT); // initialising pin 2 as input
  pinMode(buzzer, OUTPUT);
  pinMode(buttonPin, INPUT);
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  for(int i=0;i<3;i++)
  {
  lcd.setCursor(3, 0); 
  lcd.print("Water Level ");
  lcd.setCursor(4, 1);
  lcd.print("Indicator");
  delay(500);
  lcd.clear();
  delay(500);
  }
  
  // Print a message to the LCD.
   
  lcd.print("Water level indicator");
  delay(1000);
}

void loop() {
 // digitalWrite(buzzer, LOW);
   
   long duration, inches, cm;
  
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(pingPin, LOW);

  
  duration = pulseIn(echoPin, HIGH); // using pulsin function to determine total time
  inches = microsecondsToInches(duration); // calling method
  cm = microsecondsToCentimeters(duration); // calling method
  if((cm<500)&&(cm>400))
  {
  lcd.setCursor(0,0);
  lcd.print("Water level indicator");
  digitalWrite(buzzer, LOW);
  
  }
  lcd.setCursor(0,1);
  lcd.print(inches);
  lcd.print("in. ");
  lcd.print(cm);
  lcd.print("cm");
 
  if(cm>500)
  {
    lcd.clear();
    lcd.print("underflow");
    digitalWrite(buzzer, LOW);
    //digitalWrite(ledgreen, HIGH);
    //digitalWrite(ledred, LOW);
    //digitalWrite(buzzer, HIGH);
    
    
  }
  else if(cm<400)
  {
    lcd.clear();
    lcd.print("overflow");
    digitalWrite(buzzer, HIGH);
    //digitalWrite(ledred, HIGH);
    //digitalWrite(ledgreen, LOW);
    //digitalWrite(buzzer, LOW);

  }
  float new_ht= ((13-cm)/30.48); 
  float cft = 28.7;
  float d=0.7545;
  double v=((3.14/4)*(d*d)*new_ht*cft);
   
  buttonNew=digitalRead(buttonPin);
  if(buttonOld==0 && buttonNew==1)
  {
    //int c=millis() / 1000;
    //int v=((3.14/4)*(d*d)*new_ht*cft);
    //vol=v;
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print(v);
    delay(500);
  }
  buttonOld=buttonNew;

}
long microsecondsToInches(long microseconds) // method to covert microsec to inches 
{
 return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) // method to covert microsec to centimeters
{
   return microseconds / 29 / 2;
}
