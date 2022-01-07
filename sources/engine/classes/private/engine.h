#include "raylib.h"

class Engine {
    private:
        int windowWidth;
        int windowHeight;
    public:
    Engine(int width, int height) {
        windowWidth = width;
        windowHeight = height;
    }
    void Start();
    void Update();
    void Draw();
    int GetWinWidth();
    int GetWinHeight();
};