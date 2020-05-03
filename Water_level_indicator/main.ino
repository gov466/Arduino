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
const int motor=1;
const int echoPin = 2; // Echo Pin of Ultrasonic Sensor
const int pingPin = 3; // Trigger Pin of Ultrasonic Sensor
const int buttonPin= 6;
const int auto_button= 5;
const int manu_button= 13;
int buttonNew;
int buttonOld =0;
int buttonOld1 =0;
int buttonNew1;
int motorstate=0;
long duration, inches, cm;

void setup() {
  
  //Serial.begin(9600); // Starting Serial Communication
  pinMode(pingPin, OUTPUT); // initialising pin 3 as output
  pinMode(echoPin, INPUT); // initialising pin 2 as input
  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(auto_button, INPUT);
 // pinMode(man_button, INPUT);
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  for(int i=0;i<3;i++)
  {
  lcd.setCursor(3, 0); 
  lcd.print("Water Level ");
  lcd.setCursor(4, 1);
  lcd.print("Indicator");
  delay(400);
  lcd.clear();
  delay(400);
  }
  
  // Print a message to the LCD.
 
  //delay(1000);
}
void push_motor()
{
  
  buttonNew1=digitalRead(auto_button); //reading the state of pushbutton
  if(buttonOld1==0 && buttonNew1==1)
  {                                    //checking the value of pushbutton if previous value is 0 and next value is 1 then check value of led
    if(motorstate ==0)
    {                             //checking the state of led
       digitalWrite(motor,HIGH); //if its turned of the setting it on
                                 //and then changing the state of led
       motorstate=1;
    }
    else{
          digitalWrite(motor,LOW);
          motorstate=0;
        }
  }
buttonOld1=buttonNew1;
}
void loop() {
 push_motor();
  
  
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(pingPin, LOW);

  
  duration = pulseIn(echoPin, HIGH); // using pulsin function to determine total time
  inches = microsecondsToInches(duration); // calling method
  cm = microsecondsToCentimeters(duration); // calling method
  if((cm<13)&&(cm>3))
  {
    //lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Water level indicator");
  digitalWrite(buzzer, LOW);
  
  }
  //lcd.clear();
  //lcd.setCursor(0,0);
  //lcd.print("Water level indicator");
  lcd.setCursor(0,1);
  lcd.print(inches);
  lcd.print("'inches");
  lcd.print(" OR ");
  //lcd.setCursor(0,13);
  lcd.print(cm);
  lcd.print("cm");
  //lcd.clear();
 
  if(cm>13)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("underflow");
    digitalWrite(buzzer, LOW);
    //lcd.setCursor(0,1);
    //lcd.print("Turning off motor");
    
    
  }
  else if(cm<3)
  {
    lcd.clear();
    lcd.print("overflow");
    digitalWrite(buzzer, HIGH);

  }
  if(cm<2)
  {
    lcd.clear();
    lcd.print("Turning off mtr");
    digitalWrite(motor,LOW);
  }
  
  float new_ht= ((13-cm)/30.48);  
  float cft = 28.7;
  float d=0.7545;
  double v=((3.14/4)*(d*d)*new_ht*cft);
   
  buttonNew=digitalRead(buttonPin);
  if(buttonOld==0 && buttonNew==1)
  {
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Remaining water");
    lcd.setCursor(0, 1);
    lcd.print(v);
    lcd.setCursor(6, 1);
    lcd.print("Litres");
    delay(800);
    lcd.clear();
     }
  buttonOld=buttonNew;
  
}
/*void remaining_water()  //function for finding remaining water
{
}*/
long microsecondsToInches(long microseconds) // method to covert microsec to inches 
{
 return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) // method to covert microsec to centimeters
{
   return microseconds / 29 / 2;
}
