#include "MOTORDRIVER.h"

motorDriver::motorDriver(byte enA, byte enB, byte in1, byte in2, byte in3, byte in4){
  this->enA = enA;
  this->enB = enB;
  this->in1 = in1;
  this->in2 = in2;
  this->in3 = in3;
  this->in4 = in4;
  init();  
  }

void motorDriver::init(){
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  halt();
  }

void motorDriver::forward(int enaSpeed, int enbSpeed){
    analogWrite(enA, enaSpeed);
    analogWrite(enB, enbSpeed);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }

void motorDriver::backward(int enaSpeed, int enbSpeed){
    analogWrite(enA, enaSpeed);
    analogWrite(enB, enbSpeed);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }

void motorDriver::rotateCW(int enaSpeed, int enbSpeed){
    analogWrite(enA, enaSpeed);
    analogWrite(enB, enbSpeed);
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }

void motorDriver::rotateCCW(int enaSpeed, int enbSpeed){
    analogWrite(enA, enaSpeed);
    analogWrite(enB, enbSpeed);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }

void motorDriver::halt(){
    analogWrite(enA, 0);
    analogWrite(enB, 0);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
