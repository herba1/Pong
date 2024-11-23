#include "paddle.h"
#include <iostream>

paddle::paddle(){
    position = {0,100};
}
paddle::paddle(float x = 0, float y = 100){
    position = {x,y};
}

void paddle::draw(){
    DrawRectangle(position.x, position.y, 15,100,BLUE);
}

void paddle::reset(){
    position.x = 100;
    position.y = 100;
}

void paddle::moveUp(){
    std::cout << "postion: " << position.y << std::endl;
    if(position.y <= 0){
       position.y = 0;
    }
    else{
        position.y -= 5;
    }
}

void paddle::moveDown(){
    std::cout << "postion: " << position.y << std::endl;
    if(position.y >= GetScreenHeight() - 100){
       position.y = GetScreenHeight() - 100;
    }
    else{
        position.y += 5;
    }
}