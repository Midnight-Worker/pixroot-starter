#include "GameScene.h"

namespace graphics = pixelroot32::graphics;

void GameScene::init() {
}

void GameScene::update(unsigned long deltaTime) {
    (void)deltaTime;
}

void GameScene::draw(graphics::Renderer& renderer) {
    renderer.drawFilledRectangle(
        0,
        0,
        renderer.getLogicalWidth(),
        renderer.getLogicalHeight(),
        graphics::Color::Black
    );

    renderer.drawFilledRectangle(
        renderer.getLogicalWidth() / 4,
        renderer.getLogicalHeight() / 4,
        renderer.getLogicalWidth() / 2,
        renderer.getLogicalHeight() / 2,
        graphics::Color::White
    );
}
