int yelpin = 6;
int redpin = 9;
int del = 1000;
int yb=3;
int rb=5;
int j;
void setup() {
  // put your setup code here, to run once:
  pinMode(yelpin, OUTPUT);
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (j=1;j<=yb;j++){
    digitalWrite(yelpin, HIGH);
  delay(del);
  digitalWrite(yelpin, LOW);
  delay(del);
}
 
for (j=1;j<=rb;j++){
    digitalWrite(redpin, HIGH);
  delay(del);
  digitalWrite(redpin, LOW);
  delay(del);
}
}
