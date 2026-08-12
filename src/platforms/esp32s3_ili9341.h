#pragma once

#include <Arduino.h>

#include <core/Engine.h>
#include <drivers/esp32/TFT_eSPI_Drawer.h>
#include <platforms/EngineConfig.h>

#include "GameScene.h"

namespace pr32 = pixelroot32;

pr32::graphics::DisplayConfig displayConfig(
    pr32::graphics::DisplayType::ILI9341,
    DISPLAY_ROTATION,
    PHYSICAL_DISPLAY_WIDTH,
    PHYSICAL_DISPLAY_HEIGHT,
    LOGICAL_WIDTH,
    LOGICAL_HEIGHT,
    X_OFF_SET,
    Y_OFF_SET
);

// User's ESP32-S3 game-shield buttons: Up, Down, Left, Right, A, B.
pr32::input::InputConfig inputConfig(6, 15, 16, 7, 8, 17);

pr32::core::Engine engine(displayConfig, inputConfig);
GameScene gameScene;

void setup() {
    engine.init();
    engine.setScene(&gameScene);
}

void loop() {
    engine.run();
}

