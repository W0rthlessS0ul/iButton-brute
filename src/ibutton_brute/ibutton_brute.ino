#include "Wire.h"
#include "OneWireSlave.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"
#include "GyverButton.h"
#include "EEPROM.h"
#include "options.h"
#include "keys.h"
#include "bitmap.h"

void DisplayUpdate(String Key, String Action){
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println(String(Key));
  display.setCursor(0, 10);
  display.println("Delay: "+String(time_delay)+" ms");
  display.setCursor(0, 20);
  display.println("Action: "+String(Action));
  display.display();
}
void ListBrute(){
  for (int code = 1; code < numCodes; code++){
    OK.tick();
    if (OK.isHold()){
      break;
    }
    ds.waitForRequest(false);

    ds.setRom(codes[code]);

    String output = "";

    for (int i = 0; i < 8; i++) {
        if (codes[code-1][i] < 0x10) {
            output += "0";
        }
        output += String(codes[code-1][i], HEX);
    }

    output.toUpperCase();
    DisplayUpdate("Key: "+output, "Bruteforcing");

    delay(time_delay);
  }
DisplayUpdate("Key: None", "Stoped");
}
void setup() {
    EEPROM.begin();

    for (int i = 0; i < 1; ++i) {
      if (EEPROM.read(i) == 255) EEPROM.write(i, 3);
    }
    time_delay = (int)EEPROM.read(0)*100;

    ds.setRom(codes[0]);
    display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.drawBitmap(0, 0, bitmap_logo, 128, 32, WHITE);
    display.display();
    delay(2000);
    DisplayUpdate("Key: None", "Stoped");
}
void loop() {
    NEXT.tick();
    OK.tick();
    PREVIOUS.tick();
    if (NEXT.isSingle()) {
      time_delay += 100;
      if (time_delay > 25400) time_delay = 25400;
      EEPROM.write(0, (int)time_delay/100);
      DisplayUpdate("Key: None", "Stoped");
    }
    else if (PREVIOUS.isSingle()) {
      time_delay -= 100;
      if (time_delay < 0) time_delay = 0;
      EEPROM.write(0, (int)time_delay/100);
      DisplayUpdate("Key: None", "Stoped");
    }
    else if (OK.isSingle()){
      DisplayUpdate("Connect to reader", "Bruteforcing");
      ListBrute();
    }
}