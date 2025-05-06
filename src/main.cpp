#include <Arduino.h>

#define ENA 13
#define ENB 12

//for Motor A

#define IN1 19
#define IN2 18

//for Motor B

#define IN3 5
#define IN4 4

void setup() {
  
}

void loop() {
  
}


void Stop(int FIN, int SIN) {
  digitalWrite(FIN, HIGH);
  digitalWrite(SIN, HIGH);
}

void MoveForward(double EN, int FIN, int SIN) {
  
  digitalWrite(FIN, HIGH);
  digitalWrite(SIN, LOW);
}