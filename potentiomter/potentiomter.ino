 int myvoltpin=A2;
 int readval;
 float v2;
 int delayt=250;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readval=analogRead(myvoltpin);
  v2=(5./1023.)*readval;
Serial.println(v2);
delay(delayt);
}
