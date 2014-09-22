#include "PlayerAlgorithm.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


PlayerAlgorithm::PlayerAlgorithm(int type):Player(type){}
PlayerAlgorithm::~PlayerAlgorithm(){}

/**
* Az elozoket osszekombinalja.
* Try-catch blokkban az egesz, barmi char*-ot kap el, az at jelenti
* hogy nincs jo hely.
* @return bool, hogy volt e jo lepes
*/
bool PlayerAlgorithm::nextStep(Map& m){
    // TODO
    return false;
}
