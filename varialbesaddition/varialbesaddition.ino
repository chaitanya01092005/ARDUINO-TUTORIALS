int j = 1;
int x = 3;
int y = 7;
int z;
float pi = 3.14;
float r =2;
float area;

int wait = 1000;
String mystring = "j = ";
void setup() {
  // put your setup code here, to run onc
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  //   Serial.print(mystring);
  //   Serial.println(j);
  // // print meand simple print
  // // and println means print line by line
  //   j=j+1;
  //  Serial.print(" ");

  // Serial.print(x);
  // Serial.print("+");
  // Serial.print(y);
  // Serial.print("=");

  // z = x + y;
  // Serial.println(z);
  area=pi*r*r;
   Serial.print("area =");
   Serial.println(area);
  delay(wait);
  r=r+.5;
}