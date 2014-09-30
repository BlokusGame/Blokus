#ifndef BLOCK_H
#define BLOCK_H

#include "Point.hpp"

#include <utility>
#include <vector>
#include <iostream>


/**
* Tarol egy lerakhato jatek elemet.
* o felel forgatasert, tukrozesert, palyan valo koordinatai kiszamolasaert
**/
class Block{
  public:
    Block(){};
    Block(std::vector<Point>* _points);
    virtual ~Block();

    void turn(int degrees);
    void mirror(int sides);

    Point getPoint(int idx){ return points[idx]; }
    unsigned int getSize(){ return points.size(); }

  protected:
  private:
    std::vector<Point> points;

};

#endif // BLOCK_H
