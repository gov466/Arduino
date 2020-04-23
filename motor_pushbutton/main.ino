//Push button controlling motor
int LEDState=0;
int LEDPin=3; //led connected to pin 3
int buttonPin=4;
int buttonNew;
int buttonOld=1;
int dt=100;
 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);
 
}
 
void loop() {
buttonNew=digitalRead(buttonPin);
if(buttonOld==0 && buttonNew==1){
  if (LEDState==0){
    digitalWrite(LEDPin,HIGH);
    LEDState=1;
  }
  else{
    digitalWrite(LEDPin, LOW);
    LEDState=0;
  }
}
buttonOld=buttonNew;
//delay(dt);
}
