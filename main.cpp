#include <iostream>
#include "raylib.h"
#include "Settings.h"
#include "Game.h"

Settings *settings = nullptr;
Game *game = nullptr;
int main() {
    InitWindow(500, 500, "Settings");
    settings = new Settings();
    game = new Game;
    SetTargetFPS(60);
    while (settings->isRunning && !WindowShouldClose())
    {
        settings->update();
    }
    settings->clean();
    return 0;
}
