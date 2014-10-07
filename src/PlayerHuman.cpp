#include "PlayerHuman.h"

#include <iostream>

PlayerHuman::PlayerHuman(int color):Player(color){}

PlayerHuman::~PlayerHuman(){}


/**
* Block kivakasztasanak algoritmusa,
*  @TODO
**/
Block PlayerHuman::chooseBlock(){
    int idx, turn, mirror;
    for(std::vector<Block>::iterator it = blocks.begin(); it!=blocks.end();++it){
        it->draw();
    }

    do{
        std::cout<< "Block index: ";
        std::cin>> idx;
        std::cout<< "Turn: ";
        std::cin>> turn;
        std::cout<< "Mirror(unimplemented): ";
        std::cin>> mirror;
    }while((uint)idx>getSize() || idx<0 || turn%90!=0);

    Block block = getBlock(idx);

    block.turn(turn);
    block.mirror(mirror);

    return block;
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
    Map* map = Map::getInstance();


    if(map->getSteps()<2 || Map::getInstance()->isPlaceable(pt, block)){
        if(map->getSteps()==0)
            pt = Point(5,5);
        if(map->getSteps()==1)
            pt = Point(10,10);

        /// lerakja a blockot
        for(uint i = 0; i<block.getSize(); ++i){
            Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
            map->setCell(getColor(), temp);

        }
    }

    return true;
}

