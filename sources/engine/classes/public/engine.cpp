#include "engine.h"
#include <vector>
#include <iostream>
#include <string>
// Project
/* saving snippet for later, for creating callbacks
void fun() {
    std::cout << "Halla balla" << std::endl;
}

template <typename T>
void ja(T functions) {
    functions();
}

execution: //ja(fun);
*/

/* ------------------------------------------------- Engine Calls ------------------------------------------------------------------- */


void Engine::Start() {
    InitWindow(windowWidth, windowHeight, "IdlerGame");
    SetTargetFPS(120);
    assetRegistry.InitAssetLoad();
};

void Engine::Update() {
};

void Engine::Draw() {
    DrawFPS(windowWidth - 100, 50);
    DrawTexture(assetRegistry.AssetLoader.GetLoadedAsset("testIcon"), 100, 100, WHITE);
};

int Engine::GetWinWidth() {
    return windowWidth;
};

int Engine::GetWinHeight() {
    return windowHeight;
};