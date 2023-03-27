//
// Created by Rostyslav on 27.03.2023.
//

#include "Settings.h"
#include "raylib.h"
#include "iostream"
#include "Collision.h"
void Settings::init(){
    InitWindow(500, 500, "Settings");
}

Settings::Settings() = default;



void Settings::update() {

    if (IsKeyDown(KEY_ESCAPE)){
        isRunning = false;
    }
    checkCompleteSettings();
}

void Settings::clean() {
    CloseWindow();
}

void Settings::render() {
    BeginDrawing();
    DrawText("Set screen width and height", 100, 10, 20, WHITE);
    ClearBackground(GRAY);
    DrawRectangleV(Vector2 {btnBounds.x, btnBounds.y}, Vector2 {btnBounds.width, btnBounds.height} ,WHITE);
    DrawText("Start", 215, 415, 28, BLACK);
    EndDrawing();
}

void Settings::checkCompleteSettings() {
    Vector2 mousePoint = GetMousePosition();
    if (Collision::isCollisionPointRectangle(mousePoint, btnBounds) && (IsMouseButtonDown(MOUSE_BUTTON_LEFT))) {
        std::cout << "Collision";
    }
}

