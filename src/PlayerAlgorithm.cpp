#include "PlayerAlgorithm.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


PlayerAlgorithm::PlayerAlgorithm(int color):Player(color){}
PlayerAlgorithm::~PlayerAlgorithm(){}

Block PlayerAlgorithm::chooseBlock(){
    // TODO
    Block block = Block();

    return block;
}

Point PlayerAlgorithm::choosePoint(){
    // TODO
    Point point = Point();

    return point;
}

bool PlayerAlgorithm::placeBlock(){
    // TODO, de ez mintha ugyanaz lenne mint a PlayerHumannal

    return true;
}
