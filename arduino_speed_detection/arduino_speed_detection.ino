 
int IRSensor1=2; //IR sensor 1
int IRSensor2=3; // IR sensor 2
unsigned long t1=0; //variable for time t1
unsigned long t2=0; //variable for time t2
float velocity;//variable for storing velocity
void setup()
{
   
  pinMode(IRSensor1,INPUT); //set first ir sensor as input
  pinMode(IRSensor2,INPUT);//set first ir sensor as input
  Serial.begin(9600); //baud rate
   
  Serial.println(" Car speed detection system ");//print message
}

void loop() 
{
  while(digitalRead(IRSensor1)); //reading sensor one
  while(digitalRead(IRSensor1)==0);
  t1=millis(); //start timer
  while(digitalRead(IRSensor2));//read sensor 2
  t2=millis(); //start timer 2
  velocity=t2-t1; //calculate difference
  velocity=velocity/1000;//convert millisecond to second
  velocity=(5.0/velocity);//v=d/t
  velocity=velocity*3600;//multiply by seconds per hr
  velocity=velocity/1000;//division by meters per Km
  
    
   Serial.println(velocity); //print velocity
   Serial.println(" Km/hr   "); //print  km/hr
   delay(500);
    
   Serial.println("            ");
   delay(500);
   
  
}
