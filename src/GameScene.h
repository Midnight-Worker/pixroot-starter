#pragma once

#include <core/Scene.h>
#include <graphics/Color.h>
#include <graphics/Renderer.h>

class GameScene : public pixelroot32::core::Scene {
public:
    void init() override;
    void update(unsigned long deltaTime) override;
    void draw(pixelroot32::graphics::Renderer& renderer) override;
};
