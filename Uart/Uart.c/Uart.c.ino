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
    //Serial.println(charIn);
    //Serial.println("led flashing at frequency");Serial.println( charIn);
    Serial.write(charIn);
  }// Send the character back to the BBB
  if (charIn == 'M')
  {
    analogWrite(ledpin, 140);
    analogWrite(LED_BUILTIN, 140);
    Serial.println("led flashing at frequency 140");
    

  }
  if (charIn == 'L')
  {
    analogWrite(ledpin, 200);
    analogWrite(LED_BUILTIN, 200);
    Serial.println("led flashing at frequency 200");
   
  }
  if (charIn == 'H')
  {
    analogWrite(ledpin, 255);
    analogWrite(LED_BUILTIN, 255);
    Serial.println("led flashing at frequency 255");
    
  }
  if (charIn == 'A')
  {
    analogWrite(ledpin, 0);
    analogWrite(LED_BUILTIN, 0);
    Serial.println("led flashing at frequency 0 -LED OFF");


  }


}
