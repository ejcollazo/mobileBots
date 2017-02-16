#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int leftMotor = 10;
int rightMotor = 9;
int switchPin = 7;

void setup() {  
  myservo.attach(11);  // attaches the servo on pin 9 to the servo object              
  pinMode(leftMotor, OUTPUT);     
  pinMode(rightMotor, OUTPUT);  
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}

void loop() {


  bool x = digitalRead(switchPin);
  int y = digitalRead(switchPin);
  Serial.println(y);
  if (!x) {
      Serial.println("touching");
      analogWrite(leftMotor, 127);
      analogWrite(rightMotor, 127);
      myservo.write(30);
      delay(15); 
      
      
    } else {
      
      Serial.println("not touching");
      analogWrite(leftMotor, 255);
      analogWrite(rightMotor, 255);

      myservo.write(0); 
      delay(15); 
      
     }          
}
