#include "Map.h"
#include "PlayerHuman.h"
#include <iostream>

using namespace std;

int main()
{
    PlayerHuman player1 = PlayerHuman(1);
    PlayerHuman player2 = PlayerHuman(-1);

    while(!Map::getInstance()->gameEnd()){
        player1.placeBlock();
        Map::getInstance()->draw();
        player2.placeBlock();
        Map::getInstance()->draw();
    }

    return 0;
}
