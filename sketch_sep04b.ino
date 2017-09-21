#include <U8g2lib.h>
#include <U8x8lib.h>

#include <openGLCD.h>

/*
Uses a FOR loop for data and prints a number in various formats.
*/
int x = 0;    // variable

void setup() {
  
   GLCD.Init();
    GLCD.SelectFont(System5x7);
}

void loop() {  
  // print labels 
  GLCD.CursorTo(0, 1);
   GLCD.print("NO FORMAT");       // prints a label
   GLCD.print("\t");              // prints a tab

   GLCD.print("DEC");  
   GLCD.print("\t");      

   GLCD.print("HEX"); 
   GLCD.print("\t");   

   GLCD.print("OCT");
   GLCD.print("\t");

   GLCD.print("BIN");
   GLCD.print("\t"); 

  for(x=0; x< 64; x++){    // only part of the ASCII chart, change to suit

    // print it out in many formats:
     GLCD.print(x);       // print as an ASCII-encoded decimal - same as "DEC"
     GLCD.print("\t");    // prints a tab

     GLCD.print(x, DEC);  // print as an ASCII-encoded decimal
     GLCD.print("\t");    // prints a tab

     GLCD.print(x, HEX);  // print as an ASCII-encoded hexadecimal
     GLCD.print("\t");    // prints a tab

     GLCD.print(x, OCT);  // print as an ASCII-encoded octal
     GLCD.print("\t");    // prints a tab

     GLCD.println(x, BIN);  // print as an ASCII-encoded binary
    //                             then adds the carriage return with "println"
    delay(200);            // delay 200 milliseconds
  }
   GLCD.println("");      // prints another carriage return
}
