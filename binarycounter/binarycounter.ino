int pin2=2;
int pin3=13;
int waitTime;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  delay(2000);


  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  delay(1000);

  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  delay(1000);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  delay(1000);

  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  delay(1000);
}
