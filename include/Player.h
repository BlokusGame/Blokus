#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Map.h"
#include "Block.h"
#include <utility>


typedef unsigned int uint;

/**
* belole szarmaznak a jatekos logikak, kozos a jatekosoknak, hogy melyik csapat/szin/tipus
* ket csapat eseten, 1-el 2-vel lehet pl jelolni.
* fontos, hogy absztrakt osztaly
*/
class Player{
  public:
    Player(int color);
    ~Player(){};

    void setColor(int _color){ color = _color; }
    int getColor(){ return color; }

    Block* getBlock(int idx);
    std::vector<Point> getPoints();
    bool isOutOfMoves();

    virtual bool placeBlock()=0;
  protected:
    virtual Block* chooseBlock()=0;
    virtual Point choosePoint()=0;

    uint getSize(){ return blocks.size(); }

        std::vector<Block*> blocks;
        int color;
  private:


};


#endif // PLAYER_H_INCLUDED
