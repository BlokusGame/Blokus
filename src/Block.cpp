#include "Block.h"
#include <iostream>
/**
* Megkapja egy vektorban a relativ koordinatait a block-nak.
*/
Block::Block(std::vector<Point>* _points)
{
    points = *_points;
}

Block::~Block()
{
}


/// egyelore csak elv, iranyt is be kene majd allitani
/// szogekben kapja meg a forgatast
void Block::turn(int degrees){
    Point dVec = Point(0,0);
    bool bSwitch;
    switch(degrees){
        case 90:
            bSwitch = true;
            dVec = Point(-1, 1);
            break;
        case 180:
            bSwitch = false;
            dVec = Point(-1,-1);
            break;
        case 270:
            bSwitch = true;
            dVec = Point(-1, 1);
            break;
        default:
            std::cout<< "Wrong turning input! Block::turn" << std::endl;
            return;
            break;
    }

    for (unsigned int i=0; i<points.size(); ++i) {
        if(bSwitch){
            points[i].change();
        }
        points[i].x *= dVec.x;
        points[i].y *= dVec.y;
    }
}

void Block::mirror(int sides){

}
