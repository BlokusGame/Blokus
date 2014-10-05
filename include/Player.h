#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Map.h"
#include "Block.h"

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
    Player(const Player& p);

    Player& operator=(const Player& rhs);

    void setColor(int _color){ color = _color; }
    int getColor(){ return color; }

    // DEBUG
    Block getBlock(int idx){ return blocks[idx]; }

    virtual bool nextStep() =0;
  protected:
        std::vector<Block> blocks;
        int color;
  private:

};


#endif // PLAYER_H_INCLUDED
