#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Map.h"
#include "Block.h"
#include <utility>


typedef unsigned int uint;

/**
* belole szarmaznak a jatekos logikak, kozos a jatekosoknak, hogy melyik csapat/szin/tipus
* ket csapat eseten, -1, es 1-gyel lehet pl jelolni.
* fontos, hogy absztrakt osztaly
*/
class Player{
  public:
    Player(int type);
    ~Player(){};

    void setType(int t){ type = t; }
    int getType(){ return type; }

    // DEBUG
    Block getBlock(int idx);
    bool isOutOfMoves();

    virtual bool placeBlock()=0;
  protected:
    virtual Block chooseBlock()=0;
    virtual Point choosePoint()=0;

    uint getSize(){ return blocks.size(); }

  private:
    std::vector<Block> blocks;
    int type;


};


#endif // PLAYER_H_INCLUDED
