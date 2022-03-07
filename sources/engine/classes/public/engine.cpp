#include "engine.h"
#include <vector>
#include <iostream>
#include <string>
// Project
//Texture2D texture;
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

    AssetLoader.AddAsset("testIcon", "./assets/icon.png");
    std::cout << AssetLoader.GetAsset("testIcon");
    //AssetLoader.GetAssetList();
    AssetLoader.LoadAllAssets();
    //texture = LoadTexture("./assets/icon.png");
};

void Engine::Update() {
};

void Engine::Draw() {
    DrawFPS(windowWidth - 100, 50);
    DrawTexture(AssetLoader.GetLoadedAsset("testIcon"), 100, 100, WHITE);
};

int Engine::GetWinWidth() {
    return windowWidth;
};

int Engine::GetWinHeight() {
    return windowHeight;
};