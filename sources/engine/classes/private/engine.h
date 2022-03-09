#ifndef ENGINE_H
#define ENGINE_H
#include "raylib.h"
#include "assetRegistry.h"

class Engine {
    private:
        AssetRegistry assetRegistry;
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

#endif // ENGINE_H