//Push button controlling motor
int LEDState=0; //setting initial state of led as 0
int LEDPin=3; //led connected to pin 3
int buttonPin=4; //pushbutton connected to pin 4 of arduino
int buttonNew; //declating a variable for new value of pushbutton
int buttonOld=1; //setting old value of pushbutton as 1

 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);
 
}
 
void loop() {
buttonNew=digitalRead(buttonPin); //reading the state of pushbutton
if(buttonOld==0 && buttonNew==1){  //checking the value of pushbutton if previous value is 0 and next value is 1 then check value of led
  if (LEDState==0){         //checking the state of led
    digitalWrite(LEDPin,HIGH); //if its turned of the setting it on
    LEDState=1;    //and then changing the state of led
  }
  else{
    digitalWrite(LEDPin, LOW); //else turn it off
    LEDState=0;
  }
}
buttonOld=buttonNew;   //assigning value of newbutton to old one
 
}
