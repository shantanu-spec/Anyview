/* .cpp file
library file code for the braille tablet 
Date 14/05/21
Vamsi Krishna V*/

//Constructor for the class
#include "Arduino.h"
#include "Braille.h"
    Braille::Braille(int Pin1, int Pin2, int Pin3, int Pin4, int Pin5, int Pin6, int Pin7, int Pin8){

           pin1 = Pin1; 
           pin2 = Pin2;
           pin3 = Pin3;
           pin4 = Pin4;
           pin5 = Pin5;
           pin6 = Pin6;
           pin7 = Pin7;
           pin8 = Pin8;
        }
      // set up the pins
       void Braille::Pinsetup(){
          pinMode(pin1, OUTPUT);
          pinMode(pin2, OUTPUT);
          pinMode(pin3, OUTPUT);
          pinMode(pin4, OUTPUT);
          pinMode(pin5, OUTPUT);
          pinMode(pin6, OUTPUT);
          pinMode(pin7, OUTPUT);
          pinMode(pin8, OUTPUT);
          Serial.println("Pin Setup complete");
       }
       //to clear all the high pins
       void Braille::clearbraille(){
        digitalWrite(pin1, LOW);
        digitalWrite(pin2, LOW);
        digitalWrite(pin3, LOW);
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        digitalWrite(pin7, LOW);
        digitalWrite(pin8, LOW);
        Serial.println("All pins low, Display cleared");
        delay(500);
      }
      //testing all the characters before start
       void Braille::testing_sequence(){
          Serial.println("Testing Begins");
          digitalWrite(pin1, HIGH);
          delaytesting();
          digitalWrite(pin1, LOW);
          digitalWrite(pin2, HIGH);
          delaytesting();
          digitalWrite(pin2, LOW);
          digitalWrite(pin3, HIGH);
          delaytesting();
          digitalWrite(pin3, LOW);
          digitalWrite(pin4, HIGH);
          delaytesting();
          digitalWrite(pin4, LOW);
          digitalWrite(pin5, HIGH);
          delaytesting();
          digitalWrite(pin5, LOW);
          digitalWrite(pin6, HIGH);
          delaytesting();
          digitalWrite(pin6, LOW);
          digitalWrite(pin7, HIGH);
          delaytesting();
          digitalWrite(pin7, LOW);
          digitalWrite(pin8, HIGH);
          delaytesting();
          digitalWrite(pin8, LOW);
          Serial.println("Single Coil Testing Done");
          //4 coil testing
          Serial.println("Multiple coil testing Begins");
          digitalWrite(pin1, HIGH);
          digitalWrite(pin2, HIGH);
          digitalWrite(pin3, HIGH);
          digitalWrite(pin4, HIGH);
          delaytesting();
          digitalWrite(pin1, LOW);
          digitalWrite(pin2, LOW);
          digitalWrite(pin3, LOW);
          digitalWrite(pin4, LOW);
          digitalWrite(pin5, HIGH);
          digitalWrite(pin6, HIGH);
          digitalWrite(pin7, HIGH);
          digitalWrite(pin8, HIGH);
          delaytesting();
          digitalWrite(pin5, LOW);
          digitalWrite(pin6, LOW);
          digitalWrite(pin7, LOW);
          digitalWrite(pin8, LOW);
          digitalWrite(pin1, HIGH);
          digitalWrite(pin2, HIGH);
          digitalWrite(pin5, HIGH);
          digitalWrite(pin6, HIGH);
          delaytesting();
          digitalWrite(pin1, LOW);
          digitalWrite(pin2, LOW);
          digitalWrite(pin5, LOW);
          digitalWrite(pin6, LOW);
          digitalWrite(pin3, HIGH);
          digitalWrite(pin4, HIGH);
          digitalWrite(pin7, HIGH);
          digitalWrite(pin8, HIGH);
          delaytesting();
          digitalWrite(pin3, LOW);
          digitalWrite(pin4, LOW);
          digitalWrite(pin7, LOW);
          digitalWrite(pin8, LOW);
          Serial.println("Multiple coil testing Done");
          //All pins High 
          Serial.println("All pins high testing");
          digitalWrite(pin1, HIGH);
          digitalWrite(pin2, HIGH);
          digitalWrite(pin3, HIGH);
          digitalWrite(pin4, HIGH);
          digitalWrite(pin5, HIGH);
          digitalWrite(pin6, HIGH);
          digitalWrite(pin7, HIGH);
          digitalWrite(pin8, HIGH);
          delaytesting();
          digitalWrite(pin1, LOW);
          digitalWrite(pin2, LOW);
          digitalWrite(pin3, LOW);
          digitalWrite(pin4, LOW);
          digitalWrite(pin5, LOW);
          digitalWrite(pin6, LOW);
          digitalWrite(pin7, LOW);
          digitalWrite(pin8, LOW);
          Serial.println("Testing done");
      }
      void Braille::delaytesting(){
        delay(250);
      }
      //Main Program
      //Converting ASCII values into braille
      void Braille::brailletotext(int a, int d) {
        if (a>=32&&a<=78){
          if (a == 32) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: space");
            delay(d);
          }
          else if (a == 48) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 0");
            delay(d);
          }
          else if (a == 49) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 1");
            delay(d);
          }
          else if (a == 50) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 2");
            delay(d);
          }
          else if (a == 51) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 3");
            delay(d);
          }
          else if (a == 52) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 4");
            delay(d);
          }
          else if (a == 53) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 5");
            delay(d);
          }
          else if (a == 54) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 6");
            delay(d);
          }
          else if (a == 55) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 7");
            delay(d);
          }
          else if (a == 56) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 8");
            delay(d);
          }
          else if (a == 57) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: 9");
            delay(d);
          }
          else if (a == 0) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("End");
            delay(d);
          }
          else if (a == 58) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: : ");
            delay(d);
          }
          else if (a == 59) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: ; ");
            delay(d);
          }
          else if (a == 60) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: < ");
            delay(d);
          }
          else if (a == 61) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: = ");
            delay(d);
          }
          else if (a == 62) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: > ");
            delay(d);
          }
          else if (a == 63) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: ? ");
            delay(d);
          }
          else if (a == 64) {
            //to be changed
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: @ to be changed ");
            delay(d);
          }
          else if (a == 65) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: A ");
            //("Printing: A ");
            delay(d);
          }
          else if (a == 66) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: B ");
            //("Printing: B ");
            delay(d);
          }
          else if (a == 67) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: C ");
            //("Printing: C");
            delay(d);
          }
          else if (a == 68) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: D ");
            //("Printing: D");
            delay(d);
          }
          else if (a == 69) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: E ");
            //("Printing: E");
            delay(d);
          }
          else if (a == 70) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: F ");
            //("Printing: F");
            delay(d);
          }
          else if (a == 71) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: G ");
            //("Printing: G");
            delay(d);
          }
          else if (a == 72) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: H ");
            //("Printing: H");
            delay(d);
          }
          else if (a == 73) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: I ");
            //("Printing: I");
            delay(d);
          }
          else if (a == 74) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: J ");
            //("Printing: J");
            delay(d);
          }
          else if (a == 75) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: K ");
            //("Printing: K");
            delay(d);
          }
          else if (a == 76) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: L ");
            //("Printing: L");
            delay(d);
          }
          else if (a == 77) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: M ");
            //("Printing: M");
            delay(d);
          }
          else if (a == 78) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: N ");
            //("Printing: N");
            delay(d);
          }
        }
        else if (a>=79&&a<=109){
          if (a == 79) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: O ");
            //("Printing: O");
            delay(d);
          }
          else if (a == 80) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: P ");
            //("Printing: P");
            delay(d);
          }
          else if (a == 81) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: Q ");
            //("Printing: Q");
            delay(d);
          }
          else if (a == 82) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: R ");
            //("Printing: R");
            delay(d);
          }
          else if (a == 83) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: S ");
            //("Printing: S");
            delay(d);
          }
          else if (a == 84) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: T ");
            //("Printing: T");
            delay(d);
          }
          else if (a == 85) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: U ");
            //("Printing: U");
            delay(d);
          }
          else if (a == 86) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: V ");
            //("Printing: V");
            delay(d);
          }
          else if (a == 87) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: W ");
            //("Printing: W");
            delay(d);
          }
          else if (a == 88) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: X ");
            //("Printing: X");
            delay(d);
          }
          else if (a == 89) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: Y ");
            //("Printing: Y");
            delay(d);
          }
          else if (a == 90) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, HIGH);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: Z ");
            //("Printing: Z");
            delay(d);
          }
          else if (a == 91 || a == 92 || a == 93 || a == 94 || a == 95 || a == 96) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Need to add this character :-]");
            delay(d);
          }
          else if (a == 97) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: a ");
            //("Printing: a ");
            delay(d);
          }
          else if (a == 98) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: b ");
            //("Printing: b");
            delay(d);
          }
          else if (a == 99) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: c ");
            //("Printing: c");
            delay(d);
          }
          else if (a == 100) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: d ");
            //("Printing: d");
            delay(d);
          }
          else if (a == 101) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: e ");
            //("Printing: e ");
            delay(d);
          }
          else if (a == 102) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: f ");
            //("Printing: f");
            delay(d);
          }
          else if (a == 103) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: g ");
            //("Printing: g");
            delay(d);
          }
          else if (a == 104) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: h ");
            //("Printing: h");
            delay(d);
          }
          else if (a == 105) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: i ");
            //("Printing: i");
            delay(d);
          }
          else if (a == 106) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: j ");
            //("Printing: j");
            delay(d);
          }
          else if (a == 107) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: k ");
            //("Printing: k");
            delay(d);
          }
          else if (a == 108) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: l ");
            //("Printing: l");
            delay(d);
          }
          else if (a == 109) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: m ");
            //("Printing: m");
            delay(d);
          }
        }
        else if (a>=110&&a<=122){
           if (a == 110) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: n ");
            //("Printing: n");
            delay(d);
          }
          else if (a == 111) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: o ");
            //("Printing: o");
            delay(d);
          }
          else if (a == 112) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: p ");
            //("Printing: p");
            delay(d);
          }
          else if (a == 113) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: q ");
            //("Printing: q");
            delay(d);
          }
          else if (a == 114) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: r ");
            //("Printing: r");
            delay(d);
          }
          else if (a == 115) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: s ");
            //("Printing: s");
            delay(d);
          }
          else if (a == 116) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, LOW);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: t ");
            //("Printing: t");
            delay(d);
          }
          else if (a == 117) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: u ");
            //("Printing: u");
            delay(d);
          }
          else if (a == 118) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: v ");
            //("Printing: v ");
            delay(d);
          }
          else if (a == 119) {
            digitalWrite(pin1, LOW);
            digitalWrite(pin2, HIGH);
            digitalWrite(pin3, LOW);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: w ");
            //("Printing: w");
            delay(d);
          }
          else if (a == 120) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, LOW);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: x ");
            //("Printing: x");
            delay(d);
          }
          else if (a == 121) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, HIGH);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: y ");
            //("Printing: y");
            delay(d);
          }
          else if (a == 122) {
            digitalWrite(pin1, HIGH);
            digitalWrite(pin2, LOW);
            digitalWrite(pin3, HIGH);
            digitalWrite(pin4, LOW);
            digitalWrite(pin5, LOW);
            digitalWrite(pin6, HIGH);
            digitalWrite(pin7, HIGH);
            digitalWrite(pin8, LOW);
            Serial.println("Printing: z ");
            //("Printing: z");
            delay(d);
          }
        }
      }