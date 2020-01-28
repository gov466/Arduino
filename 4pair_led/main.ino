int led1 = 0; // the red LED is connected to Pin 0 of the Arduino
int led2 = 1; // the yellow LED is connected to Pin 1 of the Arduino
int led3 = 2;
int led4 = 3;
int led5 = 4;
int led6 = 5;
int led7 = 6;
int led8 = 7;
int led9 = 8;
int led10 = 9;// the green LED is connected to Pin 2 of the Arduino

void setup() {
  // set up all the LEDs as OUTPUT
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
   pinMode(led6, OUTPUT);
   pinMode(led7, OUTPUT);
   pinMode(led8, OUTPUT);
   pinMode(led9, OUTPUT);
  
  
}

void loop() {
  // turn the green LED on and the other LEDs off
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  //digitalWrite(led9, LOW);
  delay(500);    // wait 2 seconds
  
  // turn the yellow LED on and the other LEDs off
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  //digitalWrite(led9, HIGH);
  delay(500); 
  // turn the red LED on and the other LEDs off
   // wait 3 seconds        
}
