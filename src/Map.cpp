#include <stddef.h>  // defines NULL
#include "Map.h"
#include <iostream>
#include <iomanip>

Map* Map::mapInstance = NULL;

Map* Map::getInstance(){
    if(!mapInstance){
        mapInstance = new Map();
    }

    return mapInstance;
}


/**
* Recives a block, and a starting point.
* Ifblock can be put down regarding the rules.
*  @return true if the block could be placed
*  @return false if the block couldnt be placed
*/
bool Map::isPlaceable(Point pt, Block block){
    /// megvizsgalja, hogy van e kocka utban
    for(uint i = 0; i<block.getSize(); ++i){
        Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
        if(getCell(temp)!=0){
            return false;
        }
    }
    // TODO
    return true;
}

/// 0 lepessel indul, 14*14-es palya (196)
Map::Map():steps(0){
    lineSize = 14;
    mapSize = lineSize * lineSize;
    cells.reserve(mapSize);
    for(int i = 0; i<mapSize; ++i) cells[i] = 0;
}

Map::~Map(){}


void Map::draw(){
    for(int i=0; i<mapSize; ++i){
        std::cout<<std::setw(2)<<cells[i] << " ";
        if((i+1)%lineSize==0) std::cout<< std::endl;
    }
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
void Map::setCell(int set, Point pt){
    setCell(set, pt.x, pt.y);
}

void Map::setCell(int set,int x, int y){
    setCell(set, x*lineSize + y);
}

int Map::getCell(int idx)const{
    return cells[idx];
}

int Map::getCell(int x, int y)const{
    return cells[x*lineSize + y];
}

int Map::getCell(Point pt)const{
    return cells[pt.x*lineSize + pt.y];
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

