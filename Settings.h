//
// Created by Rostyslav on 27.03.2023.
//

#ifndef TO_BE__OR_NOT_TO_BE_SETTINGS_H
#define TO_BE__OR_NOT_TO_BE_SETTINGS_H
#include "raylib.h"

class Settings {
private:
    static int settedWidth;
    static int settedHeight;
    Rectangle btnBounds = {200, 300, 100, 50};
    Rectangle widthAreaBounds = {300, 95, 100, 40};
    Rectangle heightAreaBounds = {300, 165, 100, 40};
    void drawFields();
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
