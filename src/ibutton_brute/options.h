#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET -1 
#define SCREEN_ADDRESS 0x3C

GButton NEXT(2);
GButton OK(3);
GButton PREVIOUS(4);
OneWireSlave ds(7);
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int time_delay;