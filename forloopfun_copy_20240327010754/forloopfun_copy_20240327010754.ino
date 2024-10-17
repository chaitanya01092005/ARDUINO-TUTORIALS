int j;
int dela=500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    for(j=10;j>=1;j--){
    Serial.println(j);
    delay(dela);
  }
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
  // basically loop main rakhne se bas bas barr baar chalta hian

}
