#include "ball.h"
#include "constants.h"
#include <iostream>

ball::ball(){
    // 0 = positive default
    this->direction = 0;
    radius = 10;
    position.y = GetScreenHeight()/2;
    position.x = GetScreenWidth()/2;
    speedX = 5;
    speedY = 5;
}

ball::ball(int direction){
    this->direction = direction;
    radius = 10;
    speedX = 5;
    speedY = 5;
    position.y = GetScreenHeight()/2;
    position.x = GetScreenWidth()/2;
}

void ball::draw(){
    DrawCircle(position.x,position.y,radius,RED);
}

void ball::update(bool collision){
    if(direction == 0){
        position.x += speedX;
        position.y += speedY;
        // paddle collision
        if (collision){
            speedX *= -1;
            if(speedX < 0) position.x += -10;
            else position.x+= 10;
        }

        if (position.y<=0 || position.y >= GetScreenHeight()){
            speedY *= -1;
        }

        if (position.x >= GetScreenWidth()- paddleWidth || position.x<=0+ paddleWidth){
            position.x = GetScreenWidth()/2;
        }
    }
}

Vector2 ball::getV2(){
    return position;
}

float ball::getRadius(){
    return radius;
}

