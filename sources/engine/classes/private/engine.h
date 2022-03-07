#ifndef ENGINE_H
#define ENGINE_H
#include "raylib.h"
#include "assetloader.h"

class Engine {
    private:
        int windowWidth;
        int windowHeight;
        AssetLoader AssetLoader;
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