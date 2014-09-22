#ifndef PLAYERALGORITHM_H_INCLUDED
#define PLAYERALGORITHM_H_INCLUDED

#include "Map.h"
#include "Player.h"

class PlayerAlgorithm: public Player{
  public:
    PlayerAlgorithm(int type);

    ~PlayerAlgorithm();

    /// kovetkezo lepest hajtja vegre
    bool nextStep(Map& m);
  private:
};


#endif // PLAYERALGORITHM_H_INCLUDED
