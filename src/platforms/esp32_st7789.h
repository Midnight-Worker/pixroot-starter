#pragma once

#include <Arduino.h>

#include <core/Engine.h>
#include <drivers/esp32/TFT_eSPI_Drawer.h>
#include <platforms/EngineConfig.h>

#include "GameScene.h"

namespace pr32 = pixelroot32;

pr32::graphics::DisplayConfig displayConfig(
    pr32::graphics::DisplayType::ST7789,
    DISPLAY_ROTATION,
    PHYSICAL_DISPLAY_WIDTH,
    PHYSICAL_DISPLAY_HEIGHT,
    LOGICAL_WIDTH,
    LOGICAL_HEIGHT,
    X_OFF_SET,
    Y_OFF_SET
);

// No controller pins are assumed for this display-only starter profile.
pr32::input::InputConfig inputConfig;

pr32::core::Engine engine(displayConfig, inputConfig);
GameScene gameScene;

void setup() {
    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);

    engine.init();
    engine.setScene(&gameScene);
}

void loop() {
    engine.run();
}

