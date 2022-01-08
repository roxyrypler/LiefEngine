#include "engine.h"
#include <vector>
#include <iostream>
// Project
Texture2D texture;
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

std::vector<std::string> arr(0);

void Engine::Start() {
    InitWindow(windowWidth, windowHeight, "TestGame mon");
    SetTargetFPS(120);
    texture = LoadTexture("../sources/resources/raylib_logo.png");
    arr.push_back("1");
    arr.push_back("2");
    arr.push_back("3");

    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << std::endl;
    }
};

void Engine::Update() {
};

void Engine::Draw() {
    DrawFPS(windowWidth - 100, 50);
    //DrawTexture(texture, 100, 100, WHITE);
};

int Engine::GetWinWidth() {
    return windowWidth;
};

int Engine::GetWinHeight() {
    return windowHeight;
};