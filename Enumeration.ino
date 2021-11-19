int led = 13;
int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int led5 = 8;
int led6 = 7;


void setup() {                
  
  pinMode(led, OUTPUT);  
 pinMode(led1, OUTPUT); 
 pinMode(led2, OUTPUT); 
 pinMode(led3, OUTPUT); 
 pinMode(led4, OUTPUT); 
 pinMode(led5, OUTPUT); 
 pinMode(led6, OUTPUT); 
  
}


void loop() {
 
   digitalWrite(led2, HIGH);
 delay(1000); 
  digitalWrite(led2, LOW);
//numero cero
  digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH); 
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH); 
 digitalWrite(led6, HIGH); 
  delay(1000);               
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW); 
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW); 
 digitalWrite(led6, LOW);  
  //numero uno
  digitalWrite(led1, HIGH);
 digitalWrite(led4, HIGH); 
 delay(1000); 
  digitalWrite(led1, HIGH);
 digitalWrite(led4, LOW); 
 //numero dos
  digitalWrite(led4, HIGH);
 digitalWrite(led6, HIGH); 
 delay(1000); 
  digitalWrite(led4, LOW);
 digitalWrite(led6, LOW); 
//numero tres
  digitalWrite(led3, HIGH);
 digitalWrite(led6, HIGH); 
 digitalWrite(led5, HIGH); 
 delay(1000); 
  digitalWrite(led3, LOW);
 digitalWrite(led6, LOW); 
  digitalWrite(led5, LOW); 
//numero cuatro
  digitalWrite(led, HIGH);
 digitalWrite(led6, HIGH); 
 delay(1000); 
  digitalWrite(led, LOW);
 digitalWrite(led6, LOW); 
//numero cinco
  digitalWrite(led, HIGH);
 delay(1000); 
  digitalWrite(led, LOW);
//numero seis
  digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH); 
 digitalWrite(led6, HIGH); 
 digitalWrite(led2, HIGH); 
 delay(1000); 
  digitalWrite(led4, LOW);
 digitalWrite(led5, LOW); 
  digitalWrite(led6, LOW); 
    digitalWrite(led2, LOW); //numero siete
delay(1000); //numero ocho
  digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH); 
 delay(1000); 
  digitalWrite(led5, LOW);
 digitalWrite(led6, LOW); 
//numero nueve
}
