#include "Map.h"
#include "PlayerHuman.h"
#include <iostream>

using namespace std;

int main()
{
    PlayerHuman player1 = PlayerHuman(1);
    PlayerHuman player2 = PlayerHuman(-1);

    while(!Map::getInstance()->gameEnd() && !(player1.isOutOfMoves() && player2.isOutOfMoves())){
        if(!player1.isOutOfMoves()){
            player1.placeBlock();
            Map::getInstance()->draw();
        }

        if(!player2.isOutOfMoves()){
            player2.placeBlock();
            Map::getInstance()->draw();
        }
    }

    return 0;
}
