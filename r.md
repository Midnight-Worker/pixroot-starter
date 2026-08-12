# PixelRoot32 Starter

A minimal PlatformIO starter project for PixelRoot32 1.8 with one shared game
scene and four selectable targets.

The game code lives only in `src/GameScene.cpp`. Platform-specific setup is
kept in `src/platforms/`; never add target conditionals to the scene.

## Requirements

- Python and PlatformIO
- Native: C++ compiler and SDL2 development package
- The matching display hardware for the selected embedded environment

PixelRoot32 and its declared dependencies are downloaded automatically by
PlatformIO during the first build.

## Targets

| Environment | Hardware |
| --- | --- |
| `native` | SDL2 desktop window, 320x240 |
| `m5` | M5Stack FIRE built-in 320x240 display |
| `esp32s3_ili9341` | ESP32-S3 DevKitC + 240x320 ILI9341 |
| `esp32_st7789` | Classic ESP32 + 170x320 ST7789 |

## Build

```bash
pio run -e native
pio run -e m5 -t upload
pio run -e esp32s3_ili9341 -t upload
pio run -e esp32_st7789 -t upload
```

## Start coding

Edit only these methods in `src/GameScene.cpp`:

```cpp
void GameScene::init() {
}

void GameScene::update(unsigned long deltaTime) {
    (void)deltaTime;
}

void GameScene::draw(pixelroot32::graphics::Renderer& renderer) {
    // Draw your game here.
}
```

The example draws the same centered rectangle on every target. Logical
resolution scaling is configured per environment to reduce framebuffer memory
on the microcontrollers.

# pixroot-starter
