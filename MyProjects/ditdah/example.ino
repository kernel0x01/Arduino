int yellowLED=13;
int dit=200;
int dah=600;
int longW=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(yellowLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

digitalWrite(yellowLED,HIGH);
delay(dah);
digitalWrite(yellowLED,LOW);
delay(dah);

digitalWrite(yellowLED,HIGH);
delay(dah);
digitalWrite(yellowLED,LOW);
delay(dah);

digitalWrite(yellowLED,HIGH);
delay(dah);
digitalWrite(yellowLED,LOW);
delay(dah);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

digitalWrite(yellowLED,HIGH);
delay(dit);
digitalWrite(yellowLED,LOW);
delay(dit);

delay(longW);
}
