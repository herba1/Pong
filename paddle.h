#pragma once
#include <raylib.h>

class paddle{
    private:
        Vector2 position;
    public:
        paddle();
        void draw();
        void update();
        void reset();
        void moveUp();
        void moveDown();

};