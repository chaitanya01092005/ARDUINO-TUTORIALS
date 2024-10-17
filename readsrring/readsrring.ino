String myname;
String msg="What is your color ? ";
String msg2="Hello ";
String msg3=", Welcome to Arduino!  ";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){

  }
  myname=Serial.readString();
  if (myname=="red"){
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
delay(1000);
digitalWrite(12,LOW);
digitalWrite(8,LOW);
  }
  if (myname=="green"){
digitalWrite(12,HIGH);
delay(1000);
digitalWrite(12,LOW);
delay(1000);
digitalWrite(13,LOW);
digitalWrite(8,LOW);
  }
  if (myname=="blue"){
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(8,LOW);
delay(1000);
  }
  // Serial.print(msg2);
  Serial.print(myname);
  Serial.println(msg3);
}
