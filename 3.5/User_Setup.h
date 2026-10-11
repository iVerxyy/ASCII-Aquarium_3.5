// CYD (ESP32-2432S028R / Cheap Yellow Display) setup for TFT_eSPI
// Copy this file to:
//   /Users/kertgartner/Documents/Arduino/libraries/TFT_eSPI/User_Setup.h
// Keep the stock User_Setup_Select.h (or restore backup) so TFT_eSPI can load
// its driver command definitions correctly.

// #define USER_SETUP_INFO "ESP32 CYD ILI9341 320x480"
// #define USER_SETUP_ID 2432

// // Display driver
// #define ILI9341_DRIVER

// // Optional colour order (many CYD boards use BGR with ILI9341)
// #define TFT_RGB_ORDER TFT_BGR

// // ESP32 TFT pin mapping (common ESP32-2432S028R board)
// #define TFT_MISO 12
// #define TFT_MOSI 13
// #define TFT_SCLK 14
// #define TFT_CS   15
// #define TFT_DC   2
// #define TFT_RST  4
// #define TFT_BL   21
// #define TFT_BACKLIGHT_ON HIGH

// // Display geometry and speed
// #define TFT_WIDTH  320
// #define TFT_HEIGHT 240

// #define SPI_FREQUENCY       40000000
// #define SPI_READ_FREQUENCY  20000000
// #define SPI_TOUCH_FREQUENCY 2500000

// // Fonts
// #define LOAD_GLCD
// #define LOAD_FONT2
// #define LOAD_FONT4
// #define LOAD_FONT6
// #define LOAD_FONT7
// #define LOAD_FONT8
// #define LOAD_GFXFF
// #define SMOOTH_FONT


#define USER_SETUP_ID 3248
#define USER_SETUP_INFO "ESP32-3248S035R ST7796 320x480"

#define ST7796_DRIVER

#define TFT_WIDTH  320
#define TFT_HEIGHT 480

#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  -1
#define TFT_BL   27
#define TFT_BACKLIGHT_ON HIGH

#define TOUCH_CS 33

#define SPI_FREQUENCY       40000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY 2500000

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT