#include <Arduino.h>
#include <Motor.h>
#include <Motion.h>

// #define ENA 13
// #define ENB 12

// for Motor A

// #define IN1 19
// #define IN2 18

// for Motor B

// #define IN3 5
// #define IN4 4
Motor motorA = Motor(5, 10, 9);
Motor motorB = Motor(3, 8, 7);

void setup()
{
  motorA.setSpeed(1023);
  motorB.setSpeed(1023);
};

void loop()
{
  Motion::Move(motorA, motorB, "forward", 800);
};
