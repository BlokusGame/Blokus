#include "Map.h"
#include <iostream>
#include <iomanip>

Map::Map():steps(0){
    cells.reserve(mapSize);
    for(int i = 0; i<mapSize; ++i) cells[i] = 0;
}

Map::Map(const Map& m){
    steps = m.steps;
    cells.reserve(mapSize);
    for(int i = 0; i<mapSize; ++i) cells[i] = m.cells[i];
}

Map::~Map(){}


Map& Map::operator=(const Map& rhs)
{
    if (this == &rhs) return *this; // handle self assignment

    steps = rhs.steps;

    cells.reserve(mapSize);
    for(int i = 0; i<mapSize; ++i) cells[i] = rhs.cells[i];
    return *this;
}

/** Kiiras egy ostream-re
* @param os - bal oldali operandus (ostream)
* @param rhs_k - jobb oldali operandus (Map)
* @return otsream, hogy fuzheto legyen
*/
std::ostream& operator<<(std::ostream& os, const Map& rhs_k){
    for(int i=0; i<rhs_k.mapSize; ++i){
        os<<std::setw(2)<<rhs_k.cells[i] << " ";
        if((i+1)%rhs_k.lineSize==0) os<< std::endl;
    }
    return os;
}


/**
* az X lesz az 1-es, O a -1, es ha meg semmi nincs benne
* akkor 0-t kap a tomb
* megnoveli a lepesek szamat is
*/
void Map::setCell(int set, int idx){
    if(set>1 || set<-1 ) throw "Expected int between -1 and 1";
    if(cells[idx]!=0) throw "Already set";
    ++steps;
    cells[idx] = set;
}

/**
* x a sor sorszama
* y az oszlop sorszama
*/
void Map::setCell(int set,int x, int y){
    setCell(set, x*lineSize + y);
}

int Map::getCell(int idx)const{
    // TODO
    return cells[idx];
}

int Map::getCell(int x, int y)const{
    // TODO
    return 0;
}

int Map::getSteps()const{
    return steps;
}

/**
* jatek allasat vizsgalja
* @return 0-t ad vissza ha senki nem nyert de van meg lepes
* a jatekos szamat (1/-1) ha valamelyik nyert, 2-t ha dontetlen
*/
int Map::gameEnd(){

    return 0;
}

void Map::reset(){
    steps = 0;
    for(int i=0; i<mapSize; ++i) cells[i] = 0;
}
