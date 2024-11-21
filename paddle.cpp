#include "paddle.h"

paddle::paddle(){
    position = {100,100};
}

void paddle::draw(){
    DrawRectangle(position.x, position.y, 100,100,BLUE);
}

void paddle::update(){

}

void paddle::reset(){
    position.x = 100;
    position.y = 100;
}

void paddle::moveUp(){
    position.y += 5;
}

void paddle::moveDown(){
    position.y -= 5;
}