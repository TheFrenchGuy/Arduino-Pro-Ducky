/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Target: WINDOWS VISTA/7
  // Encoder V2.4
  // Using the run command for a broader OS base.
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("cmd /Q /D /T:7F /F:OFF /V:ON /K");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("M");

  for(int i = 0; i < 100; i++) {
    typeKey(KEY_DOWN_ARROW);
  }

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
