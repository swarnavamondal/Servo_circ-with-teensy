#include <servo_circ.h>
#include <Servo.h>
Servo sl, sr; // set Servo.h library 

servo_circ obj(7,9);  //connect to pin 7 and 9 to teensy ..... 7 is the right servo and 9 is the left servo 
void setup(){
  Serial.begin(9600);  //begin serial monitor if required and change baud rate as required
  obj.setPosition(0,180);  // set servo position initally in the format (right servo, left servo)
}
void loop(){
  //servo motion from a start angle to the desired angle.... format (starting angle, ending angle, time in miliseconds)
  obj.servomotion(0, 180, 2000);  
  while (true); //for controlling the loop once (change as required)
}