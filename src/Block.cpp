#include "Block.h"

/**
* Megkapja egy vektorban a relativ koordinatait a block-nak.
*/
Block::Block(std::vector<Point> _points, int _color)
{
    points = _points;
    color = _color;
}

Block::~Block()
{
}

void Block::draw(){
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            bool found = false;
            for(std::vector<Point>::iterator it = points.begin(); it != points.end(); ++it) {
                if(it->x == i && it->y == j) {
                        std::cout << "O";
                        found = true;
                }
            }
            if (found == false) std::cout << " ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;

}


/// egyelore csak elv, iranyt is be kene majd allitani
/// szogekben kapja meg a forgatast
void Block::turn(int degrees){
    Point dVec = Point(1,1);//inkabb 1,1 lenne a default, not sure
    bool bSwitch = false;
    switch(degrees%90){
        case 0:
            break;
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
///sides==0: no action
///sides==1: x tengely körül, sides==1: y tengely körül
///tengelyek a 0,0 pontnál találkoznak
void Block::mirror(int sides){
    Point dVec = Point(1,1);
    switch(sides){
        case 0:
            break;
        case 1://x tengely
            dVec = Point(-1, 1);
            break;
        case 2://y tengely
            dVec = Point(1,-1);
            break;
        default:
            std::cout<< "Wrong mirroring input! Block::mirror" << std::endl;
            return;
            break;
    }

    for (unsigned int i=0; i<points.size(); ++i) {
        points[i].x *= dVec.x;
        points[i].y *= dVec.y;
    }
}
