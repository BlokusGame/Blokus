#include "Player.h"

Player::Player(int type):type(type){
    if(type!=1 && type!=-1) throw "Bad starting type.";

    // a 21 db alakzat hozzaadasa
    /// TODO
    std::vector<Point>* temp = new std::vector<Point>();
    temp->push_back(Point(0,0));
    blocks.push_back(Block(temp));

}
