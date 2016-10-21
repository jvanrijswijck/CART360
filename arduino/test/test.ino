int button = 12;
int LEDA = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDA, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == HIGH)
  {
    digitalWrite(LEDA, HIGH);
    delay(1000);
    digitalWrite(LEDA, LOW);
    delay(1000);
  }
}
