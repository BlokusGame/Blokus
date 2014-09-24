#include "Block.h"

Block::Block(std::vector<Point> _points)
{
    points = _points;
}

Block::~Block()
{
}

Block::Block(const Block& other)
{
}



std::vector<Point> Block::placeOnMap(Point startPoint){
    std::vector<Point> pointsOnMap;

    return pointsOnMap;
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

    for ( auto iter = points.begin(); iter != points.end(); iter++ ) {

    }
}

void Block::mirror(int sides){

}
