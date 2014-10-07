#ifndef POINT_HPP_INCLUDED
#define POINT_HPP_INCLUDED

struct Point{
  int x;
  int y;
///nem kene a default konstuktornak privatnak lennie?
  Point():x(-1), y(-1){}
  Point(int _x, int _y):x(_x), y(_y){}
  void change(){
    int temp = x;
    x = y;
    y = temp;
  }
};

#endif // POINT_HPP_INCLUDED
