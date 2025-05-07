/* Braille cell testing 
 * Vamsi Krishna Varigonda 
 * 15-06-21
 */

#include <Braille.h>

Braille cell(2,3,4,5,6,7,8,9);//add the pin numbers

void setup() {
  Serial.begin(9600);
  cell.Pinsetup();
}

void loop() {
  cell.testing_sequence();
}