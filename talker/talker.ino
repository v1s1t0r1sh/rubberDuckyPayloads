/*
 * Date: 08.06.2018
 * Author: CedArctic https://github.com/CedArctic
 * Title: talker
 * Description: takes a given string and speakes it
 * Variables for integration with what you want:
 * it's all commented
 */

#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("Add-Type -AssemblyName System.speech");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  //Uncomment these lines to use a female voice
  //DigiKeyboard.print("$speak.SelectVoice('Microsoft Zira Desktop')");
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(500);
  //String to be spoken by the pc
  DigiKeyboard.print("$speak.Speak(\"Dkkkkkk!\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_N);
  for (;;) {
    /*empty*/
  }

}
