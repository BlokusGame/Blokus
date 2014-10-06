#include "BlockFactory.h"

 std::vector<Block> BlockFactory::createAllBlocks(int color){
    std::vector<Block> blocks;
    blocks.push_back(create1O(color));
    blocks.push_back(create1O(color));


    return blocks;
 }
Block BlockFactory::create1O(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));


    return Block(points, color);
}
Block BlockFactory::create2I(int color){

}
Block BlockFactory::create3I(int color);
Block BlockFactory::create3L(int color);
Block BlockFactory::create4I(int color);
Block BlockFactory::create4T(int color);
Block BlockFactory::create4Z(int color);
Block BlockFactory::create4O(int color);
Block BlockFactory::create5I(int color);
Block BlockFactory::create5L(int color);
Block BlockFactory::create5U(int color);
Block BlockFactory::create5Z(int color);
Block BlockFactory::create5T(int color);
Block BlockFactory::create5X(int color);
Block BlockFactory::create5W(int color);
Block BlockFactory::create5V(int color);
Block BlockFactory::create5F(int color);
Block BlockFactory::create5P(int color);
Block BlockFactory::create5Y(int color);
Block BlockFactory::create5N(int color);












//BlockFactory::BlockFactory()
//{
//    //ctor
//}
//
//BlockFactory::~BlockFactory()
//{
//    //dtor
//}
