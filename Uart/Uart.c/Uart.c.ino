int ledpin = 8;
void setup() {
   // Choose a baud rate and configuration. 115200
   // Default is 8-bit with No parity and 1 stop bit
   Serial.begin(9600, SERIAL_8N1);
   pinMode(ledpin , OUTPUT);
   pinMode(LED_BUILTIN , OUTPUT);
   
   
}

// This function will loop as quickly as possible, forever.
void loop() {
   byte charIn;
   if(Serial.available()){          // A byte has been received
      charIn = Serial.read();       // Read the character in from the BBB
      //Serial.println(charIn);
      Serial.write(charIn);         // Send the character back to the BBB
      if(charIn == 'M')
       {
        while(1)
        {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(250);
        Serial.println("Led is blinking with delay 250");
        digitalWrite(LED_BUILTIN, LOW);
        delay(250);
                  // A byte has been received
          charIn = Serial.read();
          
        
          
        }
         
       }
       if(charIn == 'L')
       {
        while(1)
        {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(500);
        Serial.println("Led is blinking with delay 500");
        digitalWrite(LED_BUILTIN, LOW);
        delay(500);
        }
       }
       if(charIn == 'H')
       {
        for(;;)
        { 
        digitalWrite(LED_BUILTIN, HIGH);
        delay(1000);
        Serial.println("Led is blinking with delay 1000");
        digitalWrite(LED_BUILTIN, LOW);
        delay(1000);
        }
       
       }
       if (charIn == 'A')
       {
        for(;;)
        {
          digitalWrite(ledpin, HIGH);
          delay(1000);
          digitalWrite(ledpin, LOW);
          delay(1000);
        }
        
       }

      
   }
  
 
   
} 
