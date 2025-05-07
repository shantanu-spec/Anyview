/* Braille cell, display all characters
 * Vamsi Krishna 
 * 18-07-21
 */

#include <Braille.h>
int a =500;//dealy control
Braille cell1(53, 51, 49, 47, 45, 43, 41, 39); //add the pin numbers
Braille cell2(37, 35, 33, 31, 22, 24, 26, 28); 
Braille cell3(30, 32, 34, 36, 38, 40, 42, 44); 
Braille cell4(46, 48, 50, 52, A15, A14, A13, A12); 
Braille cell5(A11, A10, A9, A8, A7, A6, A5, A4); 
void setup() {
  Serial.begin(9600);
  cell1.Pinsetup();
  cell2.Pinsetup();
  cell3.Pinsetup();
  cell4.Pinsetup();
  cell5.Pinsetup();
}

void loop() {
  for (int i = 42;i<123; i=i+5) {
    cell1.brailletotext(i, a);
    cell2.brailletotext(i+1, a);
    cell3.brailletotext(i+2, a);
    cell4.brailletotext(i+3, a);
    cell5.brailletotext(i+4, a);
  }
}
