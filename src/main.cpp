#include "Map.h"
#include "PlayerHuman.h"
#include <iostream>

using namespace std;

int main()
{
    PlayerHuman player1 = PlayerHuman(1);
    PlayerHuman player2 = PlayerHuman(-1);

    Point pt = Point(5,5);

    player1.placeBlock(pt);
    player2.placeBlock(Point(3,4));
    player1.placeBlock(Point(0,0));
    player2.placeBlock(pt);

    Map::getInstance()->draw();
    return 0;
}
