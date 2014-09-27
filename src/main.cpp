#include "Map.h"
#include "PlayerHuman.h"
#include <iostream>

using namespace std;

int main()
{
    PlayerHuman player = PlayerHuman(1);

    Map::getInstance()->draw();
    return 0;
}
