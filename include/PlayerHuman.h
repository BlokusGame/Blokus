#ifndef PLAYERHUMAN_H
#define PLAYERHUMAN_H

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

    bool nextStep();
  private:
};

#endif // PLAYERHUMAN_H
