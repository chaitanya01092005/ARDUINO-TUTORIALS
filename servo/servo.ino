// #include <Servo.h>
// int servopin = 9;
// int servopos = 0;
// int lightval;
// int lightpin=A2;
// Servo myservo;
// void setup() {
  // put your setup code here, to run once:
  // Serial.begin(9600);
  // myservo.attach(servopin);
  // to attach a object to the arduino we use attach
// }

// void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("What is the angle you want to tilt?");
  // while (Serial.available() == 0) {
  // }
  // servopos = Serial.parseInt();

//   lightval = analogRead(lightpin);
//   Serial.println(lightval);
//   delay(250);
//   servopos = (-16. / 63.) * lightval + 16. * 780. / 63.;
//   myservo.write(servopos);
// }
  // if (lightval <= 50) {
  //   myservo.write(servopos1);
  //   Serial.println("NIGHT");
  // }

  // else if (400 = < lightval <= 500) {
  //   myservo.write(servopos2);
  //   Serial.println("RAINY");
  // }

  // else if (lightval >= 500) {
  //   myservo.write(servopos3);
  //   Serial.println("SUNNY");
  // } else {
  //   Serial.println("funcked up");
  // // }
  // remenber for this type of linear changes you have to make equation and solve
  // you cant make direct connection use math

  // uss object se kam karne ke liye use write

// -------------------------------------------------------------------------------

#include <Servo.h>
int servopin = 2;
int servopos;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(servopin);
  // to attach a object to the arduino we use attach
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("What is the angle you want to tilt?");
  while (Serial.available() == 0) {
  }
  servopos = Serial.parseInt();
  myservo.write(servopos);
  // uss object se kam karne ke liye use write
}
// --------------------------------------------------------------------------------------
