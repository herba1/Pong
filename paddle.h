#pragma once
#include <raylib.h>

class paddle{
    private:
        Vector2 position;
    public:
        paddle(float x, float y);
        paddle();
        void draw();
        void update();
        void reset();
        void moveUp();
        void moveDown();
};