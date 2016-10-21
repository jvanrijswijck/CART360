float tempC;
int reading;
int tempPin = A3;
int

void setup()
{
analogReference(INTERNAL);
Serial.begin(9600);
}

void loop()
{
reading = analogRead(tempPin);
tempC = reading / 9.31;
Serial.println(tempC);
if(tempC > 30){
delay(1000);
}
