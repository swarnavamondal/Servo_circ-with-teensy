#ifndef SERVO_CIRC_H
#define SERVO_CIRC_H

#include <Arduino.h>
#include <PWMServo.h>  // Use Teensy-compatible Servo library
#include <cmath>

class servo_circ {
public:
    servo_circ(int pinR, int pinL);  // Constructor
    void setPosition(int posR, int posL);
    void servomotion(int Spos, int Epos, int time);

private:
    PWMServo sr, sl;  // Use PWMServo instead of Servo
    static constexpr int steps = 100;
    float easeInOutCirc(float x);
};

#endif
