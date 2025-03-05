#include "servo_circ.h"

// Constructor
servo_circ::servo_circ(int pinR, int pinL) {
    sr.attach(pinR);
    sl.attach(pinL); // Attach the servo to the specified pin
}
void servo_circ::setPosition(int posR, int posL) {
    sr.write(posR);  // Move right servo
    sl.write(posL);  // Move left servo
}

// Easing function (circular)
float servo_circ::easeInOutCirc(float x) {
    return x < 0.5 ? (1 - sqrt(1 - pow(2 * x, 2))) / 2 : (sqrt(1 - pow(-2 * x + 2, 2)) + 1) / 2;
}

// Servo motion with easing
void servo_circ::servomotion(int Spos, int Epos, int time) {
    unsigned long stepDuration = (time * 1000) / steps; // Convert to microseconds
    
    for (int currentStep = 0; currentStep <= steps; currentStep++) {
        unsigned long currentMicros = micros();
        
        while (micros() - currentMicros < stepDuration) {
            // Non-blocking delay
        }
        
        float progress = (float)currentStep / steps;
        float easedProgress = easeInOutCirc(progress);
        
        int servoPos = Spos + round((Epos - Spos) * easedProgress);
        sr.write(servoPos);
        sl.write(180 - servoPos);
    }
}
