//
// Created by Rostyslav on 27.03.2023.
//

#include "Settings.h"
#include "raylib.h"
#include "iostream"
#include "Collision.h"

int Settings::settedHeight = 640;
int Settings::settedWidth = 800;

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
    DrawText("Set screen width and height", 5, 10, 35, WHITE);
    ClearBackground(GRAY);
    drawFields();
    DrawRectangleV(Vector2 {btnBounds.x, btnBounds.y}, Vector2 {btnBounds.width, btnBounds.height} ,WHITE);
    DrawText("Start", 215, 315, 28, BLACK);
    EndDrawing();
}

void Settings::checkCompleteSettings() {
    Vector2 mousePoint = GetMousePosition();
    if (Collision::isCollisionPointRectangle(mousePoint, btnBounds) && (IsMouseButtonDown(MOUSE_BUTTON_LEFT))) {
        std::cout << "Collision";
    }
}

void Settings::drawFields() {
    DrawText("Enter width", 100, 100, 30, BLACK);
    DrawRectangleV(Vector2 {widthAreaBounds.x, widthAreaBounds.y}, Vector2 {widthAreaBounds.width, widthAreaBounds.height} ,WHITE);

    std::string strSettedWidth = std::to_string(settedWidth);
    const char* charSettedWidth = strSettedWidth.c_str();
    DrawText(charSettedWidth, widthAreaBounds.x + 10, 100, 30, BLACK);

    DrawText("Enter height", 100, 170, 30, BLACK);
    DrawRectangleV(Vector2 {heightAreaBounds.x, heightAreaBounds.y}, Vector2 {heightAreaBounds.width, heightAreaBounds.height} ,WHITE);
    std::string strSettedHeight = std::to_string(settedHeight);
    const char* charSettedHeight = strSettedHeight.c_str();
    DrawText(charSettedHeight, heightAreaBounds.x + 10, 170, 30, BLACK);
}

