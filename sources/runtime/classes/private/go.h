#include "raylib.h"

class GO {
private:
    float moveX = 0.0f;
    float moveY = 0.0f;
    float moveSpeed = 5.0f;
    Rectangle Rect = {
        0,
        0,
        100,
        100   
    };
public:
    GO(float xIn, float yIn) {
        Rect.x = xIn;
        Rect.y = yIn;
    };

    void Draw();
    void Movement(float x, float y);
    void SetMoveX(float xIn);
    void SetMoveY(float yIn);
    float GetMoveX();
    float GetMoveY();
    float GetMoveSpeed();
    Rectangle GetPlayerRect();
};
