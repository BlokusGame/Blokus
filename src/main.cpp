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
            if(player1.placeBlock()){
                map->incStep();
            }
            map->draw();
        }

        if(!player2.isOutOfMoves()){
            if(player2.placeBlock()){
                map->incStep();
            }
            map->draw();
        }
    }

    return 0;
}
