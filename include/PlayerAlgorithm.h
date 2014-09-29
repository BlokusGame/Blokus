#ifndef PLAYERALGORITHM_H_INCLUDED
#define PLAYERALGORITHM_H_INCLUDED

#include "Map.h"
#include "Player.h"

/**
* o valositja meg az AI logikat, sztem ide jon majd egy rahedli handy fv,
* ha jo alap van, akkor ebbol szarmaztatva, csak a nextStep-et feluldefinialva lehet kreativkodni
**/
class PlayerAlgorithm: public Player{
  public:
    PlayerAlgorithm(int type);
    ~PlayerAlgorithm();

    bool placeBlock();
  protected:
    Block chooseBlock();
    Point choosePoint();
  private:
};


#endif // PLAYERALGORITHM_H_INCLUDED
