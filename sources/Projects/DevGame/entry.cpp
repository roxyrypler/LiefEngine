#include "entry.h"

#include <math.h>
#include <iostream>
#include "go.h"

GO player(10, 10);
GO enemy(500, 250);
Texture2D texture;
float moveCounter = 0;

void Input() {
    
    if (IsKeyDown(KEY_A)) {
        player.SetMoveX(-1.0f);
    }else if (IsKeyDown(KEY_D)) {
        player.SetMoveX(1.0f);
    }else {
        player.SetMoveX(0.0f);
    }

    if (IsKeyDown(KEY_W)) {
        player.SetMoveY(-1.0f);
    }else if (IsKeyDown(KEY_S)) {
        player.SetMoveY(1.0f);
    }else {
        player.SetMoveY(0.0f);
    }

    float XMove = player.GetMoveX() * player.GetMoveSpeed();
    float YMove = player.GetMoveY() * player.GetMoveSpeed();
    player.Movement(XMove, YMove);
    
}

void EnemyMovement() {
    moveCounter += 0.01f;
    enemy.Movement(0, sin(moveCounter) * 2);
}

void checkCollition() {
    if (CheckCollisionRecs(player.GetPlayerRect(), enemy.GetPlayerRect())) {
        std::cout << "Collition Dude" << std::endl;
    }
}

void Entry::Start() {
    texture = LoadTexture("assets/tileA5_dungeon1.png"); 
};

void Entry::Update() {
    //Input();
    //EnemyMovement();
    //checkCollition();
    DrawTexture(texture, 100, 100, WHITE);
};

void Entry::Draw() {
    //player.Draw();
    //enemy.Draw();
};