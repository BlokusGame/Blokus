#include "PlayerHuman.h"
#include <iostream>

PlayerHuman::PlayerHuman(int type):Player(type){}

PlayerHuman::~PlayerHuman(){}


/**
* Block kivakasztasanak algoritmusa,
*  @TODO
**/
Block PlayerHuman::chooseBlock(){
    return blocks[0];
}


/**
* Recives a block, and a starting point.
* Checks if the block can be put down regarding the rules.
*  @return true if the block could be placed
*  @return false if the block couldnt be placed
*/
bool PlayerHuman::placeBlock(Point pt){
    Block block = chooseBlock();

    /// megvizsgalja, hogy van e kocka utban
    for(uint i = 0; i<block.getSize(); ++i){
        Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
        if(Map::getInstance()->getCell(temp)!=0){
            return false;
        }
    }

    /// lerakja a blockot
    for(uint i = 0; i<block.getSize(); ++i){
        Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
        Map::getInstance()->setCell(type, temp);
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
