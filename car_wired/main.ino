//L293D
//Motor A

const int motorPin1  = 5;  // Pin 14 of L293
const int motorPin2  = 6;  // Pin 10 of L293
//Motor B
const int motorPin3  = 10; // Pin  7 of L293
const int motorPin4  = 9;  // Pin  2 of L293
int buttonPin=2;
int buttonPin2=3; 
int buttonPin3=7;
int buttonPin4=8;//declating a variable for new value of pushbutton


//This will run only one time.
void setup(){
  //Set pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
    pinMode(buttonPin2, INPUT_PULLUP);
     pinMode(buttonPin3, INPUT_PULLUP);
      pinMode(buttonPin4, INPUT_PULLUP);

  
}


void loop()
{
 
         if(digitalRead(buttonPin) == LOW)
         {
       digitalWrite(motorPin1, HIGH);
  
         }
         if(digitalRead(buttonPin) == HIGH)
        {
          digitalWrite(motorPin1, LOW);
        //  digitalWrite(motorPin2, LOW);
         }
         ////////////////////////////////////
           if(digitalRead(buttonPin2) == LOW)
         {
       //digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin3, HIGH);
         }
         if(digitalRead(buttonPin2) == HIGH)
        {
        //  digitalWrite(motorPin1, LOW);
         digitalWrite(motorPin3, LOW);
         }

        //////////////////////////////////
          if(digitalRead(buttonPin3) == LOW)
         {
       //digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, HIGH);
         }
         if(digitalRead(buttonPin3) == HIGH)
        {
        //  digitalWrite(motorPin1, LOW);
         digitalWrite(motorPin2, LOW);
         }
         ////////////////////////////////
          if(digitalRead(buttonPin4) == LOW)
         {
       //digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin4, HIGH);
         }
         if(digitalRead(buttonPin4) == HIGH)
        {
        //  digitalWrite(motorPin1, LOW);
         digitalWrite(motorPin4, LOW);
         }

   }
 
