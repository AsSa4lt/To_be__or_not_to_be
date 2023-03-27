//
// Created by Rostyslav on 27.03.2023.
//

#ifndef TO_BE__OR_NOT_TO_BE_SETTINGS_H
#define TO_BE__OR_NOT_TO_BE_SETTINGS_H


class Settings {
public:
    Settings();
    ~Settings();
    void init();
    void update();
    void clean();
    bool isRunning = true;
};


#endif //TO_BE__OR_NOT_TO_BE_SETTINGS_H
