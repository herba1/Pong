#include "raylib.h"

int main(void)
{
    // Window configuration
    const int screenWidth = 800;
    const int screenHeight = 450;
    
    // Initialize window
    InitWindow(screenWidth, screenHeight, "Raylib Window");
    
    // Set target FPS
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        
        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("what the sigma!", 190, 200, 100, LIGHTGRAY);
        EndDrawing();
    }
    
    // De-Initialize
    CloseWindow();
    
    return 0;
}