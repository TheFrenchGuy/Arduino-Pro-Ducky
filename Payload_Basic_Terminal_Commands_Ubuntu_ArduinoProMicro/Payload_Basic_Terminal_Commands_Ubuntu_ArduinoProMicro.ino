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

  delay(3000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("xterm");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("pwd");

  delay(500);

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("id");

  delay(300);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("cat /etc/passwd");

  delay(500);

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
