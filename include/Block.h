#ifndef BLOCK_H
#define BLOCK_H

#include <utility>
#include "Map.h"
#include "Point.hpp"

// kicsit olvashatobba teszi a kodot

/**
* Tarol egy lerakhato jatek elemet.
* o felel forgatasert, tukrozesert, palyan valo koordinatai kiszamolasaert
**/
class Block
{
  public:
    Block(std::vector<Point>* _points);
    virtual ~Block();
    Block(const Block& other);

    std::vector<Point> placeOnMap(Point startPoint);
    void turn(int degrees);
    void mirror(int sides);

  protected:
  private:
    std::vector<Point> points;

};

#endif // BLOCK_H
