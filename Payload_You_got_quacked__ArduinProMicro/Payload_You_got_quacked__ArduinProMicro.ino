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

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  typeKey(KEY_LEFT_GUI);

  Keyboard.print("https://i.imgflip.com/1dv8ac.jpg");

  typeKey(KEY_RETURN);

  delay(100);

  // Opens up window and goes to a image I created xD
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.releaseAll();

  Keyboard.print("%userprofile%\\Desktop\\QUACKED");

  typeKey(KEY_RETURN);

  // saving the picture to the user Desktop, pic name QUACKED...
  delay(100);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  // shows desktop
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Keyboard.print("%userprofile%\\Desktop\\QUACKED.png");

  typeKey(KEY_RETURN);

  // opens the png file
  typeKey(229);

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // sets the background, and closes.
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  typeKey(229);

  Keyboard.print("v");

  Keyboard.print("d");

  // I know its basic but tell what you think im only 14 and this is my first "program" thanks Darren

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
