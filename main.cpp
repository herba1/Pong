#include "raylib.h"
#include "paddle.h"

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

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update

        // Draw
        player.reset();
        BeginDrawing();
            ClearBackground(RAYWHITE);
            player.draw();


        EndDrawing();
    }
    
    // De-Initialize
    CloseWindow();
    
    return 0;
}