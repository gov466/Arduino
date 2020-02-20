//OPEN board design 
int o=2;
int p=3;
int e=4;
int n=5;
int l=6;
int sw1=13;
void setup() //setup
{
  pinMode(o, OUTPUT);
  pinMode(p, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(n, OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
  
    
}
void open() //function for blinking each alphabet
{
  digitalWrite(o, HIGH);
  //delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(p, LOW);
  digitalWrite(e, LOW);
  digitalWrite(n, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  digitalWrite(o, LOW);
  digitalWrite(p,HIGH);
  digitalWrite(e, LOW);
  digitalWrite(n, LOW);
  delay(250); 
  digitalWrite(o, LOW);
  digitalWrite(p, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(n, LOW);
  delay(250);
  digitalWrite(o, LOW);
  digitalWrite(p,LOW);
  digitalWrite(e, LOW);
  digitalWrite(n, HIGH);
  delay(250);
}
void led()    //funtion for blinking circular led
{
  digitalWrite(l, HIGH);
    delay(250);
    digitalWrite(l, LOW);
    delay(250);
}
void loop() //loop for whole function
{
  //led();
  open();
  for(int i=0;i<2;i++)  //loop for blinking the whole OPEN 2 times
  {
  
  digitalWrite(o, HIGH);
  digitalWrite(p, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(n, HIGH);
  delay(250);
  digitalWrite(o, LOW);
  digitalWrite(p, LOW);
  digitalWrite(e, LOW);
  digitalWrite(n, LOW);
  delay(250);
     
    
  } // end of loop  
  digitalWrite(o, HIGH);  //making OPEN all high
  digitalWrite(p, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(n, HIGH);
  led();
  
  delay(1500);  //calling a delay of 1500 after finishing whole loop once
}

 

    
