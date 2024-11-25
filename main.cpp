#include "raylib.h"
#include "paddle.h"
#include "ball.h"
#include <iostream>


int main(void)
{
    // Window configuration
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    // Initialize window
    InitWindow(screenWidth, screenHeight, "Raylib Window");
    
    // Set target FPS
    SetTargetFPS(60);

    paddle player;
    paddle opponent(GetScreenWidth()-15,100);
    ball ball;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        auto collision = [&ball,&player,&opponent](){
            return (CheckCollisionCircleRec(ball.getV2(),ball.getRadius(),player.getHitBox())
            || CheckCollisionCircleRec(ball.getV2(),ball.getRadius(),opponent.getHitBox()));
        };
        ball.update(collision());
        // Update
        if (IsKeyDown(KEY_W)){
            player.moveUp();
        }
        if (IsKeyDown(KEY_S)){
            player.moveDown();
        }

        if (IsKeyDown(KEY_UP)){
            opponent.moveUp();
            std::cout << "move up" << std::endl;
        }
        if (IsKeyDown(KEY_DOWN)){
            opponent.moveDown();
            std::cout << "move down" << std::endl;
        }
        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            ball.draw();
            player.draw();
            opponent.draw();
        EndDrawing();
    }
    
    // De-Initialize
    CloseWindow();
    
    return 0;
}