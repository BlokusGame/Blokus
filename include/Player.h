#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Map.h"
#include "Block.h"

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
    Block getBlock(int idx){ return blocks[idx]; }

    virtual bool nextStep() =0;
  protected:
        std::vector<Block> blocks;
        int type;
  private:

};


#endif // PLAYER_H_INCLUDED
