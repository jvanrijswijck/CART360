#define LEDA 13
#define B1 12

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(LEDA, OUTPUT);
 pinMode (B1, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  
while(digitalRead(B1)== LOW){
  digitalWrite(LEDA, HIGH);
  delay(1000);
  digitalWrite(LEDA, LOW);
  delay(1000); 
  digitalWrite(LEDA, HIGH);
  delay(1000);
  digitalWrite(LEDA, LOW);
  delay(1000); 
  digitalWrite(LEDA, HIGH);
  delay(1000);
  digitalWrite(LEDA, LOW);
  delay(1000); 
  digitalWrite(LEDA, HIGH);
  delay(1000);
  digitalWrite(LEDA, LOW);
  delay(1000); 
}

//if(digitalRead == B1){
//  digitalWrite(LEDA,HIGH);
//  delay(1000);
//  digitalWrite(LEDA,LOW);
//  delay(1000);
//}
//
//do{digitalWrite(LEDA,HIGH);
//  delay(1000);
//  digitalWrite(LEDA,LOW);
//  delay(1000);
while( digitalRead(B1) == HIGH);
}
