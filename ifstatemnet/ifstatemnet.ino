int mypin = A2;
int readval;
int dt = 250;
float v2;
int redpin = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(mypin, INPUT);
  pinMode(redpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readval = analogRead(mypin);
  v2 = (5. / 1023.) * readval;
  Serial.println("Potentiometer vlotage is ");
  Serial.println(v2);
  // if (v2 >= 4.0) {
   if (v2>2 && v2<3) {
  //  if (v2>2 ==v2<3) {
    digitalWrite(redpin, HIGH);
  }
  // if (v2 <= 4.0) {
  // if (v2  != 5.0) {
  if (v2 <2 || v2>3) {
    digitalWrite(redpin, LOW);
  }

  delay(dt);
}
