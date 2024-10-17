int redPin=9;
int bright=255;
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // digitalWrite(redPin,HIGH);
  analogWrite(redPin,bright);
  // in analog write u can basically set the brightness levels between 0 and 5 volt by using numbers between 0 to 255
// when there is no capacitor we get average of in time period to find voltage 
// because when we alter the voltage our led on for particular voltage and then off
// capacitor make this process  smooth
// we use capacitor to store charge and release it slowly so that we can observe the wavy nature because it make led on or off slowly
}
