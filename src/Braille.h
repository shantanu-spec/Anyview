/* .header file
header file code for the braille tablet 
Date 14/05/21
Vamsi Krishna V*/
#ifndef Braille_h
#define Braille_h
#include "Arduino.h"
class Braille {
  private:
    int pin1; //as per the braille setup, check the repo for more info
    int pin2;
    int pin3;
    int pin4;
    int pin5;
    int pin6;
    int pin7;
    int pin8;

  public:
    Braille(int Pin1, int Pin2, int Pin3, int Pin4, int Pin5, int Pin6, int Pin7, int Pin8);
    void Pinsetup();
    void clearbraille();
    void testing_sequence();
    void delaytesting();
    void brailletotext(int, int);
};

#endif 