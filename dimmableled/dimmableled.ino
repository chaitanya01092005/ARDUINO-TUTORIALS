int potpin=A1;
int gpin=6;
int potval;
int ledval;
void setup() {
  // put your setup code here, to run once:
  pinMode(potpin,INPUT);
  pinMode(gpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval=analogRead(potpin);
  ledval=(255./1023.)*potval;
  analogWrite(gpin,ledval);
  Serial.println(ledval);
}
