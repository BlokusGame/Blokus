#ifndef BLOCK_H
#define BLOCK_H

#include "Point.hpp"

#include <utility>
#include <vector>

/**
* Tarol egy lerakhato jatek elemet.
* o felel forgatasert, tukrozesert, palyan valo koordinatai kiszamolasaert
**/
class Block{
  public:
    Block(std::vector<Point>* _points, int _color);
    virtual ~Block();

    void turn(int degrees);
    void mirror(int sides);

    Point getPoint(int idx){ return points[idx]; }
    unsigned int getSize(){ return points.size(); }
    int getColor() {return color;}
  protected:
  private:
    std::vector<Point> points;
    int color;


};

#endif // BLOCK_H
