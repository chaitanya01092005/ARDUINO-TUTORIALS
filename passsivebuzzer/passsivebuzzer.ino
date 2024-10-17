// int buzzpin=8;
// int buzztime1=1;
// int buzztime2=2;
// void setup() {
//   // put your setup code here, to run once:
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   // digitalWrite(buzzpin,HIGH);
//   // delay(buzztime1);
//   // digitalWrite(buzzpin,LOW);
//   // delay(buzztime2);
//   digitalWrite(buzzpin,HIGH);
//   delayMicroseconds(buzztime1);
//   digitalWrite(buzzpin,LOW);
//   delayMicroseconds(buzztime2);

// }


int potval;
int buzzpin = 8;
int potpin = A3;
int toneval;
void setup() {
  // put your setup code here, to run once:

  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
}

void loop() {
  potval = analogRead(potpin);
  toneval = (9940. / 1023.) * potval + 60;
  digitalWrite(buzzpin, HIGH);
  delayMicroseconds(toneval);
  digitalWrite(buzzpin, LOW);
  delayMicroseconds(toneval);

}
