#define HAS_BLUETOOTH 1

#define USE_SSD1306
#define I2C_SDA 6 // I2C pins for this board
#define I2C_SCL 7
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

#define HAS_NEOPIXEL                         // Enable the use of neopixels
#define NEOPIXEL_COUNT 3                     // How many neopixels are connected
#define NEOPIXEL_DATA 10                     // gpio pin used to send data to the neopixels
#define NEOPIXEL_TYPE (NEO_RGB + NEO_KHZ800) // type of neopixels in use

// NO GPS
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

#define USE_RF95

#define LORA_SCK 21
#define LORA_MISO 20
#define LORA_MOSI 19
#define LORA_CS 18

#define LORA_DIO0 5
#define LORA_RESET 8
#define LORA_DIO1 2
#define LORA_DIO2 4