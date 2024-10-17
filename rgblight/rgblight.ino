int redpin = 8;
int greenpin = 9;
int bluepin = 10;
String mycolor;
String msg = "What colour do you want? ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
  }
  mycolor = Serial.readString();
  if (mycolor == "red") {
    digitalWrite(redpin, HIGH);
    digitalWrite(greenpin, LOW);
    digitalWrite(bluepin, LOW);
  }
  if (mycolor == "green") {
    digitalWrite(greenpin, HIGH);
    digitalWrite(redpin, LOW);
    digitalWrite(bluepin, LOW);
  }
  if (mycolor == "blue") {
    digitalWrite(bluepin, HIGH);
    digitalWrite(greenpin, LOW);
    digitalWrite(redpin, LOW);
  }
  if (mycolor == "aqua") {
    digitalWrite(redpin, LOW);
    analogWrite(greenpin, 255);
    analogWrite(bluepin, 125);
  }
  if (mycolor == "off") {
    digitalWrite(bluepin, LOW);
    digitalWrite(greenpin, LOW);
    digitalWrite(redpin, LOW);
  }
}
