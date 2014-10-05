#include "Player.h"

Player::Player(int color):color(color){
    if(color<=0) throw "Bad starting type.";

    // a 21 db alakzat hozzaadasa
    blocks.reserve(21);
    /// TODO
    std::vector<Point>* temp = new std::vector<Point>();
    temp->push_back(Point(0,0));
    blocks.push_back(Block(temp,color));
}

Block Player::getBlock(int idx){
    if(blocks.empty())
        return NULL;
    Block temp = blocks[idx];
    // torli a kivett elemet, iteratorral kell megadni
    blocks.erase(blocks.begin()+idx);

    return temp;
}


/**
* Gets all the points of the map where the player can put a block.
* veery unoptimized. soon it gets better
*/
std::vector<Point> Player::getPoints(){
    std::vector<Point> points = std::vector<Point>();
    /// for every cell in the map
    for(int i = 0; i<Map::getInstance()->getLineSize(); ++i){
        for(int j = 0; j<Map::getInstance()->getLineSize(); ++j){
            /// if the current map cell is free
            if(Map::getInstance()->getCell(i,j)==0){
                /// for every possible block
                for(uint k=0; k<blocks.size(); ++k){
                    /// if the block is placeable, we save the point, break this loop
                    if(Map::getInstance()->isPlaceable(Point(i,j),blocks[k])){
                        points.push_back(Point(i,j));
                        break;
                    }
                }
            }
        }
    }
    return points;
}



bool Player::isOutOfMoves(){
    // ha nincs mar block, vagy nincs hova rakni nem tud tobbet lepni
    if(blocks.empty() || getPoints().empty()){
        return true;
    }

    return false;
}
