//Keeping Sensor 1 and Sensor 2 at a difference of 10 metre

int ir1 = 8; // Pin Number for Sensor 1
int ir2 = 9; // Pin Number for Sensor 2

long begin_, end_; // Variables to keep track of time
float time_in_seconds, difference; // Varibale to Store time taken by Car
float speed_,speed_in_kmhr; //Variable to Store Calculated Speed of Car
int speedLim = 60; //Speed limit for Overspeeding

void setup() {
 
  Serial.begin(9600); //Initializing Serial Communications


  pinMode(ir1,INPUT_PULLUP); //Making IR-1 pin as Input
  pinMode(ir2,INPUT_PULLUP); //Making IR-2 pin as Input


  Serial.println("STARTED");
 

}

void loop()
{
  if(digitalRead(ir1)==LOW) //If Car detected in front of Sensor -1
  {
    Serial.println("Car Detected at First Sensor"); //Print a message
    begin_ = millis(); //Record the Time when Car reaches sensor 1

    while(digitalRead(ir2)==HIGH) //Until Car is not detected at Sensor-2
    {
      delay(1);//Waiting until Car Reaches Sensor 2
    }
    //Car reached at Sensor 2
   
    end_ = millis(); //Record the Time when Car reaches sensor 2

   
    difference = end_-begin_;//Calculate total time taken
    time_in_seconds = difference/1000; // Converting milliseconds to seconds //1ms=0.001secs
    speed_ = 10 /time_in_seconds; // 10 metre by time
    speed_in_kmhr = (speed_*3600)/1000; //Converting seconds to Hour and Km

    Serial.print("Speed of Car Detected: ");
    Serial.print(speed_in_kmhr);
    Serial.println(" km/h"); //Print the calculated speed

    if(speed_in_kmhr > speedLim) //If Detected Speed is more that Speed Limit
    {
      Serial.println("OVERSPEED DETECTED"); //Show Warning message
    }

    delay(2000);
   

   
  }
  else
  {
    delay(1);//Small Delay
  }
 
 

}
