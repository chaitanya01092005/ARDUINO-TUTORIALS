byte mybit=0x0;//hexa decmal
byte mybit=10;//decimal
byte mybit=B10001;//binary
int dt=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(mybit,BIN);
  Serial.println(mybit,DEC);
  Serial.println(mybit,HEX);
  mybit = mybit + 1  ;
  delay(dt);
}
