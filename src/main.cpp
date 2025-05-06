#include <Arduino.h>
#include <Motor.h>

// #define ENA 13
// #define ENB 12

// for Motor A

// #define IN1 19
// #define IN2 18

// for Motor B

// #define IN3 5
// #define IN4 4
Motor motorA = Motor(13, 19, 18);
Motor motorB = Motor(12, 5, 4);


void setup()
{
  motorA.setSpeed();
  motorB.setSpeed();
}

void loop()
{
  motorA.Spin("forward");
  motorB.Spin("forward");
}
