#include <ESP8266WiFi.h> // LIbrary is user for WiFi Connection of ESP8266


//Service Set Identifier
const char* ssid     = "572pharmacy"; //Name of the Wifi we wanna connect to
const char* password = "572pharmacY001"; //Password for the WiFi Network


void setup() { // Executed on once
  
  Serial.begin(9600); //Initialising Serial Communication with Baud Rate of 9600

  // We start by connecting to a WiFi network

  Serial.print("Connecting to ");
  Serial.println(ssid); // Just a Print

  WiFi.mode(WIFI_STA); // Making ESP in Station/Client Mode
  WiFi.begin(ssid, password); // Trying to Connect to WiFi

  while (WiFi.status() != WL_CONNECTED) { // Waiting until WiFi is not connected
    delay(500); // Delay in milliseconds
    Serial.print(".");
  }

  // Code will reach here if it gets connected to Wifi
  
  Serial.println("");
  Serial.println("WiFi connected"); //  Print that we got connected to WiFi
  Serial.print("NodeMCU IP Address : ");
  Serial.println(WiFi.localIP() );

}

void loop() 
{ // Executed in loop for infinite number of time
  
    if(Serial.available()) //If any data coming from Serial from Beaglebone
    {
      while(Serial.available())
      {
        char x = Serial.read(); // Read the Data Byte by Byte
        delay(1);
      }

      delay(1000); // Waiting for a second
      
      Serial.print("Connected to WiFi: "); //Send Print Acknowledgement
      Serial.print(ssid); // Send name of the WiFi
      Serial.print(" | Wifi Signal Strength (RSSI dB): "); //Send Print Acknowledgement
      Serial.print(WiFi.RSSI()); // Send name of the WiFi
      
    }
  delay(10); // Just a small delay in loop

}
