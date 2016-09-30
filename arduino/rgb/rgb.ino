/* RGB LED COLOUR MIXING USING ANALOGWRITE ( PWM ) */
/* READ POTENTIOMETERS VALUES V = { 0 … 1023 } */
int rPot = A0;
int gPot = A1;
int bPot = A2;

/* WRITE VALUES TO ASSOCIATED LED */
int rLED = 3;
int gLED = 5;
int bLED = 6;

/* MINIMAL SETUP */
void setup() {
   Serial.begin( 9600 );
}

/* ARDUINO: DO THIS FOREVER! */
void loop() {
   int r = analogRead(rPot)/4;
   int g = analogRead(gPot)/4;
   int b = analogRead(bPot)/4;


   analogWrite(rLED, r);
   analogWrite(gLED, g);
   analogWrite(bLED, b);
}
