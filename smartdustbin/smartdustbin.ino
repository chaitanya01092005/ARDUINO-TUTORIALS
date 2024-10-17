#include <Servo.h>

// Pin definitions
const int trigPinFront = 7;       // Trigger pin for the front ultrasonic sensor
const int echoPinFront = 6;       // Echo pin for the front ultrasonic sensor
const int trigPinTop = 12;         // Trigger pin for the top ultrasonic sensor
const int echoPinTop = 11;         // Echo pin for the top ultrasonic sensor
const int servoPin = 2;           // Pin for the servo motor
const int buzzerPin = 10;          // Pin for the buzzer
const int ledPin = 8;             // Pin for the LED

Servo servo;

const int openDistance = 20;      // Distance threshold for opening the lid (in cm)
const int fullDistance = 5;       // Distance threshold indicating the dustbin is full (in cm)
const int lidOpenAngle = 0;      // Angle to open the lid
const int lidCloseAngle = 120;      // Angle to close the lid

void setup() {
  pinMode(trigPinFront, OUTPUT);
  pinMode(echoPinFront, INPUT);
  pinMode(trigPinTop, OUTPUT);
  pinMode(echoPinTop, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  servo.attach(servoPin);
  servo.write(lidCloseAngle);

  Serial.begin(9600);
}

long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);d
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2;
  return distance;
}

void loop() {
  long distanceFront = getDistance(trigPinFront, echoPinFront);
  long distanceTop = getDistance(trigPinTop, echoPinTop);

  Serial.print("Front Distance: ");
  Serial.print(distanceFront);
  Serial.print(" cm, Top Distance: ");
  Serial.print(distanceTop);
  Serial.println(" cm");

  if (distanceFront <= openDistance) {
    if (distanceTop > fullDistance) {
      servo.write(lidOpenAngle);  // Open the lid
      delay(3000);                // Keep the lid open for 3 seconds
      servo.write(lidCloseAngle); // Close the lid
    } else {
      digitalWrite(buzzerPin, HIGH);  // Sound the buzzer
      digitalWrite(ledPin, HIGH);     // Turn on the LED
      delay(3000);                    // Keep buzzer and LED on for 3 seconds
      digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
      digitalWrite(ledPin, LOW);      // Turn off the LED
    }
  }

  delay(1000); // Short delay before the next loop iteration
}



// / #include <Servo.h>

// int ledPin = 8;
// int buzzerPin = 10;
// int trigPin = 12;
// int echoPin = 11;
// int trig1Pin = 7;
// int echo1Pin = 6;
// int servoPin = 9;
// int servoPos = 0;
// int pingTravelTime;
// int pingTravel1Time;
//  Servo myServo;
// void setup() {
//   // put your setup code here, to run once:
//   pinMode(ledPin, OUTPUT);
//   pinMode(buzzerPin, OUTPUT);
//   pinMode(trigPin, OUTPUT);
//   pinMode(echoPin, INPUT);
//   pinMode(trig1Pin, OUTPUT);
//   pinMode(echo1Pin, INPUT);
//   Serial.begin(9600);
//   myServo.attach(servoPin);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   digitalWrite(trigPin, LOW);
//   delayMicroseconds(10);
//   digitalWrite(trigPin, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(trigPin, LOW);
//   pingTravelTime = pulseIn(echoPin, HIGH);
//   delay(1000);
//   Serial.println(pingTravelTime);



//   digitalWrite(trig1Pin, LOW);
//   delayMicroseconds(10);
//   digitalWrite(trig1Pin, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(trig1Pin, LOW);
//   pingTravel1Time = pulseIn(echo1Pin, HIGH);
//   delay(1000);
//   Serial.println(pingTravel1Time);



//   if (pingTravelTime <= 500) {

//     if (pingTravelTime <= 300) {

//       digitalWrite(buzzerPin, HIGH);
//       delay(20);
//       digitalWrite(buzzerPin, LOW);
//       delay(30);
//       digitalWrite(buzzerPin, HIGH);
//       delay(20);
//       digitalWrite(buzzerPin, LOW);
//       delay(30);
//       digitalWrite(buzzerPin, HIGH);
//       delay(20);
//       digitalWrite(buzzerPin, LOW);
//       delay(30);
//       digitalWrite(ledPin, HIGH);
//       delay(3000);
//       digitalWrite(ledPin, LOW);
//       delay(3000);
//     }

//     myServo.write(servoPos);
//     delay(3000);
//     myServo.write(90);
//   }
// }





// #define irSensor A2
// #include <Servo.h>
// int servoPin=9;
// int servoPos=0;
// Servo myServo;

// int ledPin=8;
// int buzzer=10;
// int trigPin=12;
// int echoPin=11;
// int pingTravelTime;
// float pingTravelDistance;
// float distanceToTarget;
// int dt=50;
// void setup() {
//   // put your setup code here, to run once:
// pinMode(ledPin,OUTPUT);
// pinMode(trigPin,OUTPUT);
// pinMode(echoPin,INPUT);
// Serial.begin(9600);
// myServo.attach (servoPin);

// }

// void loop() {
// put your main code here, to run repeatedly:
// put your main code here, to run repeatedly:
// digitalWrite(trigPin,LOW);
// delayMicroseconds(10);
// digitalWrite(trigPin,HIGH);
// delayMicroseconds(10);
// digitalWrite(trigPin,LOW);
// pingTravelTime=pulseIn(echoPin,HIGH);
// delay(25);
// Serial.println(pingTravelTime);
// digitalWrite(trigPin,LOW);
// delayMicroseconds(10);
// digitalWrite(trigPin,HIGH);
// delayMicroseconds(10);
// digitalWrite(trigPin,LOW);
// pingTravelTime=pulseIn(echoPin,HIGH);
// delay(25);
// pingTravelDistance=(pingTravelTime*765.*5280.*12)/(3600.*1000000);
// distanceToTarget=pingTravelDistance/2;
// Serial.print("Distance to Target is: ");
// Serial.print(distanceToTarget);
// Serial.println(" in.");
// delay(dt);


// int irRead = analogRead(irSensor);

// if(irRead>=700){

// myServo.write (servoPos);

// }

// if(distanceToTarget<=1){

// digitalWrite(buzzer,HIGH);
// delay(3000);
// digitalWrite(buzzer,LOW);
// delay(3000);


// digitalWrite(ledPin,HIGH);
// delay(3000);
// digitalWrite(ledPin,LOW);
// delay(3000);

// }

//
