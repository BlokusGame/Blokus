#ifndef PLAYERHUMAN_H
#define PLAYERHUMAN_H

#include "Map.h"
#include "Player.h"

class PlayerHuman: public Player{
  public:
    PlayerHuman(int type);
    ~PlayerHuman();

    bool nextStep(Map& m);
  private:
};

#endif // PLAYERHUMAN_H
