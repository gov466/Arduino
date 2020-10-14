int ledpin = 10;
void setup() {
  // Choose a baud rate and configuration. 115200
  // Default is 8-bit with No parity and 1 stop bit
  Serial.begin(9600, SERIAL_8N1);
  pinMode(ledpin , OUTPUT);
  pinMode(LED_BUILTIN , OUTPUT);


}
char charIn;
// This function will loop as quickly as possible, forever.
void loop() {

  if (Serial.available() > 0) {      // A byte has been received
    charIn = Serial.read();       // Read the character in from the BBB
    
  }
  if (charIn == 'M') //if chaaracter recieved is M the get into this function
  {
    analogWrite(ledpin, 140);
    analogWrite(LED_BUILTIN, 140); //led at 140 brightness
    Serial.println("led flashing at frequency 140");
    

  }
  if (charIn == 'L') //if chaaracter recieved is L the get into this function
  {
    analogWrite(ledpin, 200);
    analogWrite(LED_BUILTIN, 200); //led at 200 brightness
    Serial.println("led flashing at frequency 200");
   
  }
  if (charIn == 'H')//if chaaracter recieved is H the get into this function
  {
    analogWrite(ledpin, 255);
    analogWrite(LED_BUILTIN, 255); //led at 255 brightness
    Serial.println("led flashing at frequency 255");
    
  }
  if (charIn == 'A')////if chaaracter recieved is A the get into this function
  {
    analogWrite(ledpin, 0);
    analogWrite(LED_BUILTIN, 0); //turn off led
    Serial.println("led flashing at frequency 0 -LED OFF");


  }


}
