#ifndef MAP_H
#define MAP_H

#include "Point.hpp"
#include "Block.h"
#include <iostream>
#include <vector>

typedef unsigned int uint;

/**
* palyat reprezentalo osztaly, ha nagyon fancy-k akarunk lenni, singleton minta szerint megcsinalhatjuk
* fontos, hogy legyenek jo getterei/setterei, ki tudja magat rajzolni
* tarolja az eddigi lepesek szamat(lehet nem fog kelleni), a palya teljes meretet (mapSize), egy sor meretet (lineSize);
**/
class Map{
  public:
    static Map* getInstance();

    int operator[](int idx)const{ return cells[idx]; }

    void draw();

    void setCell(int set, int idx);
    void setCell(int set, int x, int y);
    void setCell(int set, Point pt);

    int getCell(int idx)const;
    int getCell(int x, int y)const;
    int getCell(Point pt)const;
    int getSteps()const;

    int getLineSize(){ return lineSize; }

    bool isPlaceable(Point pt, Block block);
    /// visszaadja ki nyert ill 0-t ha meg senki
    int gameEnd();
    /// ha vege a jateknak akkor sztorno minden
    void reset();
  private:
    Map();
    ~Map();

    static Map* mapInstance;

    std::vector<int> cells;
    int steps;
    int mapSize;
    int lineSize;
};



#endif // MAP_H
