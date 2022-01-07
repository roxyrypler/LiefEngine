#include "go.h"
#include <iostream>

void GO::Draw() {
    DrawRectangleRec(Rect, GREEN);
}

void GO::Movement(float x, float y) {
    Rect.x = Rect.x + x;
    Rect.y = Rect.y + y;
}

Rectangle GO::GetPlayerRect() {
    return Rect;
}

void GO::SetMoveX(float xIn) {
    moveX = xIn;
}

void GO::SetMoveY(float yIn) {
    moveY = yIn;
}

float GO::GetMoveX() {
    return moveX;
}

float GO::GetMoveY() {
    return moveY;
}

float GO::GetMoveSpeed() {
    return moveSpeed;
}