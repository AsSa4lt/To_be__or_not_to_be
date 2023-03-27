//
// Created by Rostyslav on 27.03.2023.
//

#include "Settings.h"
#include "raylib.h"

void Settings::init(){

    InitWindow(500, 500, "Settings");

}

Settings::Settings() {

}

void Settings::update() {
    BeginDrawing();
    DrawText("Set screen width and height", 100, 10, 20, WHITE);
    ClearBackground(GRAY);
    DrawRectangle(200, 400, 100, 50, WHITE);
    DrawText("Start", 215, 415, 28, BLACK);
    EndDrawing();
    if (IsKeyDown(KEY_ESCAPE)){
        isRunning = false;
    }
}

void Settings::clean() {
    CloseWindow();
}

