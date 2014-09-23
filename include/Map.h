#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <vector>

/**
* palyat reprezentalo osztaly, ha nagyon fancy-k akarunk lenni, singleton minta szerint megcsinalhatjuk
* fontos, hogy legyenek jo getterei/setterei, ki tudja magat rajzolni
* tarolja az eddigi lepesek szamat(lehet nem fog kelleni), a palya teljes meretet (mapSize), egy sor meretet (lineSize);
**/
class Map{
  public:
    static Map* getInstance();

    int operator[](int idx)const{ return cells[idx]; }

    friend std::ostream& operator<<(std::ostream& os, const Map& rhs);

    void setCell(int set, int idx);
    void setCell(int set, int x, int y);

    int getCell(int idx)const;
    int getCell(int x, int y)const;
    int getSteps()const;

    /// visszaadja ki nyert ill 0-t ha meg senki
    int gameEnd();
    /// ha vege a jateknak akkor sztorno minden
    void reset();
  private:
    Map();
    Map(const Map& m);
    ~Map();

    static Map* mapInstance;

    std::vector<int> cells;
    int steps;
    int mapSize;
    int lineSize;
};



#endif // MAP_H
