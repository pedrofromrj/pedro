// C++ code
//
  const int led1 = 2;
  const int led2 = 3;
  const int led3 = 4;
  const int led4 = 5;
  const int led5 = 6;
    
  const int bot1= 8;
  const int bot2= 9;
  const int bot3= 10;
  
 void setup()
 { 
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
  	pinMode(5, OUTPUT); 
   	pinMode(6, OUTPUT);
 }
 
 void loop()
 
    {
   digitalWrite(2,HIGH);
   delay(100); // wait for 1000 miliseconds(s)
   digitalWrite(2,LOW);
   digitalWrite(3, HIGH);
   delay(100); // wait for 1000 miliseconds(s)
   digitalWrite(3, LOW);
   digitalWrite(4,HIGH);
   delay(100); // wait for 1000 miliseconds(s)
   digitalWrite(4,LOW);
   digitalWrite(5, HIGH);
   delay(100); // wait for 1000 miliseconds(s)
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(100); // wait for 1000 miliseconds(s)
   digitalWrite(6, LOW);
 }
 
   	
   
 
