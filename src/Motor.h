#include <Arduino.h>
#include <string.h>
class Motor
{
    const int EN;
    // Inputs
    const int IN1;
    const int IN2;

    bool enabled = false;

public:
    Motor(int en, int in1, int in2) : EN(en), IN1(in1), IN2(in2)
    {
        pinMode(EN, OUTPUT);
        pinMode(IN1, OUTPUT);
        pinMode(IN2, OUTPUT);
    }

    void setSpeed(int speed = 1023)
    {
        int pwmValue = map(speed, 0, 1023, 0, 255);
        analogWrite(EN, pwmValue);
        enabled = true;
    }

    void disable()
    {
        digitalWrite(EN, LOW);
        enabled = false;
    }

    void Stop()
    {
        if (!enabled)
            return;
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, HIGH);
    }

    void Spin(const char *direction = "forward", int speed = 1023)
    {
        if (!enabled)
            setSpeed(speed);

        if (strcmp(direction, "forward") == 0)
        {
            digitalWrite(IN1, HIGH);
            digitalWrite(IN2, LOW);
        }
        else if (strcmp(direction, "backward") == 0)
        {
            digitalWrite(IN2, HIGH);
            digitalWrite(IN1, LOW);
        }
    }
};