# Servo_circ-with-teensy

ServoCirc is a library designed for controlling servo motors with circular motion constraints using a Teensy microcontroller.

## Features
- Easy-to-use API for servo control
- Supports Teensy microcontrollers
- Customizable circular motion constraints

## Installation
1. Download the latest release from [GitHub Releases](https://github.com/YourUsername/ServoCirc/releases).
2. Extract the ZIP file and place the `ServoCirc` folder inside your Arduino `libraries` directory.
3. Restart the Arduino IDE.

## Usage
```cpp
#include <servo_circ.h>

ServoCirc myServo;

void setup() {
    myServo.attach(9); // Attach to pin 9
    myServo.setLimits(0, 180); // Set motion limits
}

void loop() {
    myServo.moveTo(90); // Move to 90 degrees
    delay(1000);
    myServo.moveTo(0); // Move back to 0 degrees
    delay(1000);
}
```
