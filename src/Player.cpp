#include "Player.h"

Player::Player(int color):color(color){
    if(color<=0) throw "Bad starting type.";

    // a 21 db alakzat hozzaadasa
    /// TODO
    std::vector<Point>* temp = new std::vector<Point>();
    temp->push_back(Point(0,0));
    blocks.push_back(Block(temp, color));



}
