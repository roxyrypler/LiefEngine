#include "raylib.h"
#include "engine.h"

Engine engine(1350, 1200);

int main()
{
    engine.Start();
    while(!WindowShouldClose()) {
        engine.Update();
        BeginDrawing();
        ClearBackground(WHITE);
        engine.Draw();
        EndDrawing();
    }
}
