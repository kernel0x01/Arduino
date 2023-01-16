int redLED=13;
int yellowLED=12;
int blueLED=11;
int d1=100;
int d2=1000;
int d3=2000;

void redblink(){
  for(int i=0; i<5; i++){
    digitalWrite(redLED,HIGH);
    delay(d1);
    digitalWrite(redLED,LOW);
    delay(d2);
  }
}

void yellowblink(){
  for(int i=0; i<10; i++){
    digitalWrite(yellowLED,HIGH);
    delay(d2);
    digitalWrite(yellowLED,LOW);
    delay(d2);
  }
}

void blueblink(){
  for(int i=0; i<15; i++){
    digitalWrite(blueLED,HIGH);
    delay(d3);
    digitalWrite(blueLED,LOW);
    delay(d2);
  }
}

void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
}

void loop() {
  redblink();
  delay(d2);
  yellowblink();
  delay(d2);
  blueblink();
  delay(d2);
}
