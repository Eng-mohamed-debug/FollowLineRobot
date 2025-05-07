#include <Arduino.h>
#include <Motor.h>

class Motion
{
public:
    static void Move(Motor motorA, Motor motorB, char *direction, int speed)
    {
        if (strcmp(direction, "forward") == 0)
        {
            motorA.Spin("forward", speed);
            motorB.Spin("forward", speed);
        }
        else if (strcmp(direction, "backward") == 0)
        {
            motorA.Spin("backward", speed);
            motorB.Spin("backward", speed);
        }
        else if (strcmp(direction, "rightward") == 0)
        {
            motorA.Spin("forward", speed);
            motorB.Spin("backward", speed);
        }
        else if (strcmp(direction, "leftward") == 0)
        {
            motorB.Spin("forward", speed);
            motorA.Spin("backward", speed);
        }
    }
};