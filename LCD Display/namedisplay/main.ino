//displaying govind raj in lcd and running a counter from which lcd is on
#include <LiquidCrystal.h>  //header file to include lcd
const int rs=2,en=3,d4=4,d5=5,d6=6,d7=7;  //pins from lcd to aurdino
LiquidCrystal lcd(rs,en,d4,d5,d6,d7); //creating instance of lcd
void setup()
{
 lcd.begin(16,2);  //2line lcd
  lcd.setCursor(0,0); //setting cursor to first posistion
  lcd.print("govind raj"); //printing name
}

void loop()
{ 
  lcd.setCursor(0,1);   //setting cursor to 0th column and first row(row 2)
  lcd.print(millis() /1000);   
}
