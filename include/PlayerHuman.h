#ifndef PLAYERHUMAN_H
#define PLAYERHUMAN_H

#include "Block.h"
#include "Map.h"
#include "Player.h"


/**
* Sima ugy, itt keri be az inputot (control itt legyen? architekturalis kerdes)
* validalja a lepest
* lerakja a palyara
**/
class PlayerHuman: public Player{
  public:
    PlayerHuman(int type);
    ~PlayerHuman();

    Block chooseBlock();
    Point choosePoint();
    bool placeBlock();

    bool nextStep();
  private:
};

#endif // PLAYERHUMAN_H
