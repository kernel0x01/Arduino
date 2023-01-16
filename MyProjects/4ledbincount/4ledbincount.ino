int redLED=13;
int yellowLED=12;
int blueLED=11;
int greenLED=10;

int d1=1000;
int d2=2000;

void one(){
  digitalWrite(greenLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  delay(d2);
}

void two(){
  digitalWrite(blueLED,HIGH);
  delay(d2);
  digitalWrite(blueLED,LOW);
  delay(d2);
}

void three(){
  digitalWrite(yellowLED,HIGH);
  delay(d2);
  digitalWrite(yellowLED,LOW);
  delay(d2);
}

void four(){
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void onetwo(){
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  delay(d2);
}

void onethree(){
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(d2);
}

void onefour(){
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void twothree(){
  digitalWrite(blueLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(d2);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(d2);
}

void twofour(){
  digitalWrite(blueLED,HIGH);
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(blueLED,LOW);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void threefour(){
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void twothreefour(){
  digitalWrite(blueLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void onethreefour(){
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void onetwofour(){
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void onetwothree(){
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(d2);
}

void onetwothreefour(){
  digitalWrite(greenLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,HIGH);
  delay(d2);
  digitalWrite(greenLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(redLED,LOW);
  delay(d2);
}

void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
}

void loop() {
  four();
  three();
  threefour();
  two();
  twofour();
  twothree();
  twothreefour();
  one();
  onefour();
  onethree();
  onethreefour();
  onetwo();
  onetwofour();
  onetwothree();
  onetwothreefour();
}

