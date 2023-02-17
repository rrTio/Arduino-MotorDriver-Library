#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H

#include <Arduino.h>

class motorDriver{
  private:
    byte enA;
    byte enB;
    byte in1;
    byte in2;
    byte in3;
    byte in4;

  public:
    motorDriver(byte enA, byte enB, byte in1, byte in2, byte in3, byte in4);

    void init();
    
    void forward(int, int);
    void backward(int, int);
    void rotateCW(int, int);
    void rotateCCW(int, int);

    void halt();
  };

#endif
