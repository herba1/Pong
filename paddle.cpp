#include "paddle.h"
#include <iostream>

paddle::paddle(){
    position = {0,100};
    hitbox.height = 100;
    hitbox.width = 15;
    hitbox.x = position.x;
    hitbox.y = position.y;
}
paddle::paddle(float x = 0, float y = 100){
    position = {x,y};
    hitbox.height = 100;
    hitbox.width = 15;
    hitbox.x = position.x;
    hitbox.y = position.y;
}

void paddle::draw(){
    DrawRectangle(position.x, position.y, 15,100,BLUE);
}

void paddle::reset(){
    position.x = 100;
    position.y = 100;
}

void paddle::moveUp(){
    if(position.y <= 0){
       position.y = 0;
    }
    else{
        position.y -= 5;
    }
    hitbox.x = position.x;
    hitbox.y = position.y;
}

void paddle::moveDown(){
    if(position.y >= GetScreenHeight() - 100){
       position.y = GetScreenHeight() - 100;
    }
    else{
        position.y += 5;
    }
    hitbox.x = position.x;
    hitbox.y = position.y;
}

Rectangle paddle::getHitBox(){
    return hitbox;
}