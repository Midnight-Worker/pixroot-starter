#ifdef PLATFORM_NATIVE
#include "platforms/native.h"
#elif defined(PLATFORM_M5)
#include "platforms/m5.h"
#elif defined(PLATFORM_ESP32S3_ILI9341)
#include "platforms/esp32s3_ili9341.h"
#elif defined(PLATFORM_ESP32_ST7789)
#include "platforms/esp32_st7789.h"
#endif
