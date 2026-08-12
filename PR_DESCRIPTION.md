# Add a minimal PlatformIO starter template

## Motivation

PixelRoot32 supports native SDL2 and ESP32 targets, but new users currently need
to clone and modify a feature-oriented example before starting a project. The
examples are useful demonstrations, while a starter should make the minimum
cross-platform project structure immediately visible.

## Proposed change

Add a small starter template that:

- installs the published PixelRoot32 package through `lib_deps`;
- keeps all game code in one shared `GameScene`;
- keeps all target bootstrap code in platform-specific headers;
- includes Native SDL2, M5Stack FIRE, ESP32-S3/ILI9341 and
  classic ESP32/ST7789 environments;
- demonstrates only the `init`, `update`, and `draw` lifecycle with two filled
  rectangles.

This does not add a new API or change engine behavior. It packages the existing
recommended architecture as a copyable starting point.

## Expected user experience

```bash
cp -r templates/platformio-starter my-game
cd my-game
pio run -e native
```

Users can then work only in `src/GameScene.cpp` and change targets through the
PlatformIO environment.
