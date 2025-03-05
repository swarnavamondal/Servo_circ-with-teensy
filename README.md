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
servo_circ obj(7,9);
void setup(){
  Serial.begin(9600);

}
void loop(){
  obj.servomotion(0, 180, 2000);
  while (true);
}
```
