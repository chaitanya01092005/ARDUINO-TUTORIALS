int lightpen=A0;
int lightval;
int redpin=13;
int greenpin = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightpen,INPUT);
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightval=analogRead(lightpen);
  Serial.println(lightval);
  delay(250);
  if(lightval<=50){
    digitalWrite(redpin,HIGH);
    delay(2000);
    digitalWrite(redpin,LOW);
    delay(2000);
    
  }
  if(lightval>=900){
    digitalWrite(greenpin,HIGH);
    delay(2000);
    digitalWrite(greenpin,LOW);
    delay(2000);
    
  }
}




// -----------------------------------------------------------------------------------------------------------------------
// testing the photoresister
// int lightpen=A0;
// int lightval;
// void setup() {
//   // put your setup code here, to run once:
//   pinMode(lightpen,INPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   lightval=analogRead(lightpen);
//   Serial.println(lightval);
//   delay(250);
// }
