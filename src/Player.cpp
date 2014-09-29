#include "Player.h"

Player::Player(int type):type(type){
    if(type!=1 && type!=-1) throw "Bad starting type.";

    // a 21 db alakzat hozzaadasa
    blocks.reserve(21);
    /// TODO
    std::vector<Point>* temp = new std::vector<Point>();
    temp->push_back(Point(0,0));
    blocks.push_back(Block(temp));
}

Block Player::getBlock(int idx){
    Block temp = blocks[idx];
    // torli a kivett elemet, iteratorral kell megadni
    blocks.erase(blocks.begin()+idx-1);
    return temp;
}

bool Player::isOutOfMoves(){
    // ha nincs mar block, vagy nincs hova rakni nem tud tobbet lepni
    if(blocks.empty() || Map::getInstance()->possibleSteps().empty()){
        return true;
    }

    return false;
}
