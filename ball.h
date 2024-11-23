#pragma once
#include "raylib.h"

class ball{
    private:
        Vector2 position;
        float radius;
        int direction;
        int speedX;
        int speedY;
    public:

    ball();
    ball(int direction);
    void reset();
    void update(bool);
    void draw();
    float getX();
    float getY();
    Vector2 getV2();
    float getRadius();
};