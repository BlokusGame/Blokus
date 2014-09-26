#include <iostream>
#include "Map.h"

using namespace std;

int main()
{
    Map::getInstance()->setCell(1,0,0);
    Map::getInstance()->draw();
    return 0;
}
