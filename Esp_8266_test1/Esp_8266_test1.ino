#include <ESP8266WiFi.h>

const char* ssid="572pharmacy"; //my wifi name
const char* password = "572pharmacY001"; //password
int ledPin = 13; //led pin connected as to show an indication
void setup() {
  pinMode(ledPin,OUTPUT); //led as output
  digitalWrite(ledPin,LOW); //initially it is set as low
  Serial.begin(115200); //begin serial communication at 115200 bits per seconds
  Serial.println();
  Serial.print("Wifi connecting to ");  
  Serial.println( ssid );
  WiFi.begin(ssid,password);
  Serial.println();
  Serial.print("Connecting");
  while( WiFi.status() != WL_CONNECTED ){ //connecting to wifi using id and password
      delay(500);
      Serial.print(".");        //while connecting print ........
  }
  digitalWrite( ledPin , HIGH); //when its connected led is turned on
  Serial.println(); 
  Serial.println("Wifi Connected Success!"); //print message wifi connected 
  Serial.print("NodeMCU IP Address : "); //display the esp8266 ip address
  Serial.println(WiFi.localIP() );
}

void loop() {
  // put your main code here, to run repeatedly:

}
