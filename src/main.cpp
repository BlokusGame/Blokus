#include "Map.h"
#include "PlayerHuman.h"
#include <iostream>

using namespace std;

int main()
{
    PlayerHuman player1 = PlayerHuman(1);
    PlayerHuman player2 = PlayerHuman(2);
    Map* map = Map::getInstance();
    while(!map->gameEnd() && !(player1.isOutOfMoves() && player2.isOutOfMoves())){

        if(!player1.isOutOfMoves()){
            player1.placeBlock();
        }

        if(!player2.isOutOfMoves()){
            player2.placeBlock();
        }
    }

    return 0;
}
