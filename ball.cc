#include "ball.h"

ball::ball(){
    // 0 = positive default
    this->direction = 0;
    radius = 10;
    position.y = GetScreenHeight()/2;
    position.x = GetScreenWidth()/2;
    speed = 5;
}

ball::ball(int direction){
    this->direction = direction;
    radius = 10;
    speed = 5;
    position.y = GetScreenHeight()/2;
    position.x = GetScreenWidth()/2;
}

void ball::draw(){
    DrawCircle(position.x,position.y,radius,RED);
}

void ball::update(){
    if(direction == 0){
        position.x += speed;
        if (position.x >= GetScreenWidth()){
            direction = 1;
        }
    }
    else if(direction == 1){
        position.x -= speed;
        if (position.x <= 0){
            direction = 0;
        }
    }
}

