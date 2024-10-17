int readPin=A3;
float v2=0;
int readval;
int delayT=500;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:'
  // v2=analogRead(readPin);
   readval=analogRead(readPin);
   v2=(5./1023.)*readval;
  Serial.println(v2);
  delay(delayT);
}
