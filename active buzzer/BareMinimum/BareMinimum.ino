int potval;
int buzzpin=8;
int potpin=A3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);
  pinMode(potpin,OUTPUT);
}

void loop() {
potval=analogRead(potpin);
Serial.println(potval);
while (potval>1000){
  digitalWrite(buzzpin,HIGH);
  potval= analogRead(potpin);
  Serial.println(potval);
}
digitalWrite(buzzpin,LOW);
}
// --------------------------------------------------------------------------------------------
// ye simple active buzzzer hain bass 5v volt dedo kam kar dega baki coding se manipulate karna aur iske alag tone bhi banna sakte ho delay time change kar kar ke apni tune banao
// ----------------------------------------------------------------------------------------------------------/
// C++ code
//
// int mynumb;
// int myvoltpin=A0;
// int buzzpin=8;
// String msg="Please enter the number";
// int dt = 2000;
//  int readval;
// void setup()
// {
  
//   Serial.begin(9600);
//   pinMode(buzzpin, OUTPUT);
// }

// void loop()
// {
//  // Serial.println(msg);
// //  while (Serial.available()==0){}
// //  mynumb=Serial.parseInt();
//    readval=analogRead(myvoltpin);
//      // if(mynumb<10){
//    // digitalWrite(buzzpin,HIGH);
//    // delay(dt);
//    //  digitalWrite(buzzpin,LOW);
//   //  delay(dt);
//   //}//
//     if(readval<1000){
//     digitalWrite(buzzpin,HIGH);
//   }
// }