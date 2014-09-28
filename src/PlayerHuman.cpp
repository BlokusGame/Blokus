#include "PlayerHuman.h"
#include <iostream>

PlayerHuman::PlayerHuman(int type):Player(type){}

PlayerHuman::~PlayerHuman(){}


/**
* Block kivakasztasanak algoritmusa,
*  @TODO
**/
Block PlayerHuman::chooseBlock(){
    int idx, turn, mirror;

//    do{
        std::cout<< "Block index: ";
        std::cin>> idx;
        std::cout<< "Turn: ";
        std::cin>> turn;
        std::cout<< "Mirror(unimplemented): ";
        std::cin>> mirror;


    if((uint)idx>blocks.size() || idx<0 || turn%90!=0){
        return chooseBlock();
    } else {
        blocks[idx].turn(turn);
        blocks[idx].mirror(mirror);
    }

    return blocks[idx];
}

Point PlayerHuman::choosePoint(){
    Point pt = Point(7,7);
    do{
        std::cout<< "Coordinates: ";
        std::cin>> pt.x >> pt.y;
    }while(pt.x>=Map::getInstance()->getLineSize() || pt.y>=Map::getInstance()->getLineSize() || pt.x<0 || pt.y<0);

    return pt;
}


/**
* Recives a block, and a starting point.
* If Map says the block can be put down regarding the rules, puts it down
*  @return true if the block could be placed
*  @return false if the block couldnt be placed
*/
bool PlayerHuman::placeBlock(){
    Block block = chooseBlock();
    Point pt = choosePoint();

    if(Map::getInstance()->isPlaceable(pt, block)){
        /// lerakja a blockot
        for(uint i = 0; i<block.getSize(); ++i){
            Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
            Map::getInstance()->setCell(type, temp);
        }
    }

    return true;
}



/**
* Ember lepesenek algoritmusa.
* harom fazisbol fog allni, bekeri melyik blok-ot, milyen forgatas/tukrozessel, hova.
* @return sikeres e a letetel.
*/
bool PlayerHuman::nextStep(){

    return false;
}
