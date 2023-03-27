//
// Created by Rostyslav on 27.03.2023.
//

#ifndef TO_BE__OR_NOT_TO_BE_SETTINGS_H
#define TO_BE__OR_NOT_TO_BE_SETTINGS_H
#include "raylib.h"

class Settings {
private:
    Rectangle btnBounds = {200, 400, 100, 50};;
public:
    Settings();
    ~Settings();
    void init();
    void update();
    void checkCompleteSettings();
    void render();
    void clean();
    bool isRunning = true;
};


#endif //TO_BE__OR_NOT_TO_BE_SETTINGS_H
