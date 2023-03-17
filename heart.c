void setup() {
  // put your setup code here, to run once:

}

#include "DigiKeyboard.h"
void loop() {
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);e
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  int size = 10;
  DigiKeyboard.print("THANKS FOR BEING!");
  DigiKeyboard.print(" SUCH A COOL HOT SEXY GIRLFRIEND ");
    DigiKeyboard.print("LOVE YOU!!");
    DigiKeyboard.print("\n");
    DigiKeyboard.print(" - by austin morozane hutchen ");
    DigiKeyboard.print("\n");   DigiKeyboard.print("\n");
       DigiKeyboard.print("\n");
  for (int x = 0; x < size; x++)
  {
    for (int y = 0; y <= 4 * size; y++)
    {
      double dist1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
      double dist2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));

      if (dist1 < size + 0.5 || dist2 < size + 0.5) {
        DigiKeyboard.print("*");
      }
      else {
        DigiKeyboard.print(" ");
      }
    }
    DigiKeyboard.print("\n");
  }

  for (int x = 1; x < 2 * size; x++)
  {
    for (int y = 0; y < x; y++) {
      DigiKeyboard.print(" ");
    }

    for (int y = 0; y < 4 * size + 1 - 2 * x; y++) {
      DigiKeyboard.print("*");
    }

    DigiKeyboard.print("\n");
  }
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("ls");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("nc -l 9999");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(800);
  DigiKeyboard.print("https://youtube.com/watch?v=0NzlbBmkM3E&si=EnSIkaIECMiOmarE");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

}