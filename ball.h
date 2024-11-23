#pragma once
#include "raylib.h"

class ball{
    private:
        Vector2 position;
        float radius;
        int direction;
        int speed;
    public:

    ball();
    ball(int direction);
    void reset();
    void update();
    void draw();
    float getX();
    float getY();
};