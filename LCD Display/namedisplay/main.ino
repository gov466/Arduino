//displaying govind raj in lcd and running a counter from which lcd is on
#include <LiquidCrystal.h>
const int rs=2,en=3,d4=4,d5=5,d6=6,d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup()
{
 lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("govind raj");
}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print(millis() /1000);
}
