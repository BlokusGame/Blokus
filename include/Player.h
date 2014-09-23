#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Map.h"


/**
* belole szarmaznak a jatekos logikak, kozos a jatekosoknak, hogy melyik csapat/szin/tipus
* ket csapat eseten, -1, es 1-gyel lehet pl jelolni.
* fontos, hogy absztrakt osztaly
*/
class Player{
  public:
    Player(int type):type(type){ if(type!=1 && type!=-1) throw "Bad starting type."; }
    ~Player(){};
    Player(const Player& p);

    Player& operator=(const Player& rhs);

    void setType(int t){ type = t; }
    int getType(){ return type; }

    virtual bool nextStep(Map& m) =0;
  private:
    int type;
};


#endif // PLAYER_H_INCLUDED
