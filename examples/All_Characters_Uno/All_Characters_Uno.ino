/* Braille cell, display all characters
 * Vamsi Krishna Varigonda 
 * 15-06-21
 */

#include <Braille.h>
int a =500;//dealy control
Braille cell(2,3,4,5,6,7,8,9);//add the pin numbers
void setup() {
  Serial.begin(9600);
  cell.Pinsetup();
}

void loop() {
  for (int i = 42;i<123; i++) {
    cell.brailletotext(i,a);
  }
}
