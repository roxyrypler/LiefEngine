#include "engine.h"
// Project
#include "entry.h"

Entry _entry;
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
    InitWindow(windowWidth, windowHeight, "TestGame mon");
    SetTargetFPS(120);

    _entry.Start();
};

void Engine::Update() {
    _entry.Update();
};

void Engine::Draw() {
    DrawFPS(windowWidth - 100, 50);
    _entry.Draw();
};

int Engine::GetWinWidth() {
    return windowWidth;
};

int Engine::GetWinHeight() {
    return windowHeight;
};