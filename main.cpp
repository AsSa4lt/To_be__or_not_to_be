#include <iostream>
#include "raylib.h"
#include "Settings.h"
#include "Game.h"

Settings *settings = nullptr;
Game *game = nullptr;
int main() {
    InitWindow(500, 400, "Settings");
    settings = new Settings();
    game = new Game;
    SetTargetFPS(60);
    while (settings->isRunning && !WindowShouldClose())
    {
        settings->render();
        settings->update();
    }
    settings->clean();
    return 0;
}
