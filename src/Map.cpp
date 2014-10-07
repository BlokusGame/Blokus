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
bool Map::isPlaceable(Point pt, Block block){//hova es milyen blockot //point abszolut hely
    ///elso korben itt ellenorzi hogy leteheto e. a kezdopontra tette e
    ///!!!!ez 4 játékos palyan (sarok indulassal) nem mukodne ott tovabb is kene vinni az ellenorzest
        if (getSteps() == 0){
            for(uint i = 0; i<block.getSize(); ++i){
                Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
                if (temp.x == 4 && temp.y == 4)
                    return true;
            }
        }else if (getSteps() == 1){
             for(uint i = 0; i<block.getSize(); ++i){
                Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
                if (temp.x == 9 && temp.y == 9)
                    return true;
            }
        }

    ///TODO a vizsgalatokat ossze is lehetne vonni, ha lassu lenne
    ///az elhelyezett block kilóg e a palyarol
    for(uint i = 0; i<block.getSize(); ++i){
        Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
        if(getCell(temp)==-1){
            return false;
        }
    }
    /// megvizsgalja, hogy van e kocka utban
    for(uint i = 0; i<block.getSize(); ++i){
        Point temp = Point(pt.x +  block.getPoint(i).x, pt.y + block.getPoint(i).y);
        if(getCell(temp)!=0){
            return false;
        }
    }
    ///megvizsgalja, hogy van e sajat szinu lapjaval talalkozva
    for(uint i = 0; i<block.getSize(); ++i){//minden elem a blockban
        Point temp0 = Point(pt.x +  block.getPoint(i).x - 1, pt.y + block.getPoint(i).y + 0);
        Point temp1 = Point(pt.x +  block.getPoint(i).x + 1, pt.y + block.getPoint(i).y + 0);
        Point temp2 = Point(pt.x +  block.getPoint(i).x + 0, pt.y + block.getPoint(i).y + 1);
        Point temp3 = Point(pt.x +  block.getPoint(i).x + 0, pt.y + block.getPoint(i).y - 1);
        if (getCell(temp0)==block.getColor() ||
            getCell(temp1)==block.getColor() ||
            getCell(temp2)==block.getColor() ||
            getCell(temp3)==block.getColor()
            )
        {
            return false;
        }
    }
    ///megvizsgalja, hogy van e saját sarokcsatlakozasa, (nincs e a levegoben)
    for(uint i = 0; i<block.getSize(); ++i){//minden elem a blockban
        Point temp0 = Point(pt.x +  block.getPoint(i).x - 1, pt.y + block.getPoint(i).y - 1);
        Point temp1 = Point(pt.x +  block.getPoint(i).x - 1, pt.y + block.getPoint(i).y - 1);
        Point temp2 = Point(pt.x +  block.getPoint(i).x + 1, pt.y + block.getPoint(i).y + 1);
        Point temp3 = Point(pt.x +  block.getPoint(i).x + 1, pt.y + block.getPoint(i).y - 1);
        if (getCell(temp0)!=block.getColor() &&
            getCell(temp1)!=block.getColor() &&
            getCell(temp2)!=block.getColor() &&
            getCell(temp3)!=block.getColor()
            )
        {
            return false;
        }
    }
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
* az X lesz az 1-es, O a 2-es ha meg semmi nincs benne
* akkor 0-t kap a tomb
* megnoveli a lepesek szamat is
*/

///TODO a 3 setCell-t egymasba kellene ágyazni(egymast hivni), mind3-ba kell hibaellenorzes
void Map::setCell(int set, int idx){
    if(set < 0 ) throw "Expected int over 0";
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


///index out of bounds: nem exception csak visszajelzes
int Map::getCell(int idx)const{
    if (idx<0 || idx>cells.size()) return -1;
    return cells[idx];
}

int Map::getCell(int x, int y)const{
    if (x<0 || y<0) return -1;
    return getCell(x*lineSize + y);
    return cells[x*lineSize + y];
}

int Map::getCell(Point pt)const{
    return getCell(pt.x,pt.y);
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

