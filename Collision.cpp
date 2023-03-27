//
// Created by Rostyslav on 27.03.2023.
//

#include "Collision.h"
#include "iostream"

bool Collision::isCollisionPointRectangle(Vector2 v, Rectangle rect) {
    if(v.x <= rect.x + rect.width && v.x >= rect.x && v.y >= rect.y && v.y <= rect.y + rect.height ){
        return true;
    }
    return false;
}
