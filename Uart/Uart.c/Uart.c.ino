//int ledpin = 8;
void setup() {
   // Choose a baud rate and configuration. 115200
   // Default is 8-bit with No parity and 1 stop bit
   Serial.begin(115200, SERIAL_8N1);
  // pinMode(ledpin , OUTPUT);
   
}

// This function will loop as quickly as possible, forever.
void loop() {
   byte charIn;
   if(S;erial.available()){          // A byte has been received
      charIn = Serial.read();       // Read the character in from the BBB
      //Serial.println(charIn);
      Serial.write(charIn);         // Send the character back to the BBB
      
   }
 
   
} 
