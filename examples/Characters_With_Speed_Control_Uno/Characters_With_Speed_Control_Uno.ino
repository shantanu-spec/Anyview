/* Braille cell, display all characters with speed control
   Vamsi Krishna Varigonda
   15-06-21
*/
#include <Braille.h>
float floatMap(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


Braille cell(2, 3, 4, 5, 6, 7, 8, 9); //add the pin numbers
void setup() {
  Serial.begin(9600);
  cell.Pinsetup();
}

void loop() {
  for (int i = 42; i < 123; i++) {
    int analogValue = analogRead(A0);
    float a = floatMap(analogValue, 0, 1023, 50, 1000);
    Serial.println(a);
    cell.brailletotext(i, a);
  }
}