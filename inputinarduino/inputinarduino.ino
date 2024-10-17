int numblinks, j;
String msg = "How many times you want to blink it :";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
  }
  numblinks = Serial.parseInt();
  // radius = Serial.parseFloat(); for floating point numbers
  for (j = 1; j <= numblinks; j++) {
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
    delay(1000);
  }
}
