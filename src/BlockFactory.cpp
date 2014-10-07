#include "BlockFactory.h"
/** All
 *
 */
 std::vector<Block> BlockFactory::createAllBlocks(int color){
    std::vector<Block> blocks;
    blocks.push_back(create1O(color));
    blocks.push_back(create2I(color));
    blocks.push_back(create3I(color));
    blocks.push_back(create3L(color));
    blocks.push_back(create4I(color));
    blocks.push_back(create4T(color));
    blocks.push_back(create4Z(color));
    blocks.push_back(create4O(color));
    blocks.push_back(create5I(color));
    blocks.push_back(create5L(color));
    blocks.push_back(create5U(color));
    blocks.push_back(create5Z(color));
    blocks.push_back(create5T(color));
    blocks.push_back(create5X(color));
    blocks.push_back(create5W(color));
    blocks.push_back(create5V(color));
    blocks.push_back(create5F(color));
    blocks.push_back(create5P(color));
    blocks.push_back(create5Y(color));
    blocks.push_back(create5N(color));
    return blocks;
 }
/**< ===================================== */
/** 1O
 *  O
 */
Block BlockFactory::create1O(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    return Block(points, color);
}
/**< ===================================== */
/** 2I
 *  O
 *  O
 */
Block BlockFactory::create2I(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    return Block(points, color);
}
/**< ===================================== */
/** 3I
 *  O
 *  O
 *  O
 */
Block BlockFactory::create3I(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(2,0));
    return Block(points, color);
}
/**< ===================================== */
/** 3L
 *  O
 *  O O
 */
Block BlockFactory::create3L(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(1,1));
    return Block(points, color);
}
/**< ===================================== */
/** 4I
 *  O
 *  O
 *  O
 *  O
 */
Block BlockFactory::create4I(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(2,0));
    points.push_back(Point(3,0));
    return Block(points, color);
}
/**< ===================================== */
/** 4T
 *  O O O
 *    O
 */
Block BlockFactory::create4T(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(0,2));
    points.push_back(Point(1,1));
    return Block(points, color);
}
/**< ===================================== */
/** 4Z
 *  O O
 *    O O
 */
Block BlockFactory::create4Z(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(1,1));
    points.push_back(Point(1,2));
    return Block(points, color);
}
/**< ===================================== */
/** 4O
 *  O O
 *  O O
 */
Block BlockFactory::create4O(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(1,0));
    points.push_back(Point(1,1));
    return Block(points, color);
}
/**< ===================================== */
/** 5I
 *  O
 *  O
 *  O
 *  O
 *  O
 */
Block BlockFactory::create5I(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(2,0));
    points.push_back(Point(3,0));
    points.push_back(Point(4,0));
    return Block(points, color);
}
/**< ===================================== */
/** 5L
 *  O
 *  O
 *  O
 *  O O
 */
Block BlockFactory::create5L(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(2,0));
    points.push_back(Point(3,0));
    points.push_back(Point(3,1));
    return Block(points, color);
}
/**< ===================================== */
/** 5U
 *  O   O
 *  O O O
 */
Block BlockFactory::create5U(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(1,1));
    points.push_back(Point(1,2));
    points.push_back(Point(0,2));
    return Block(points, color);
}
/**< ===================================== */
/** 5Z
 *  O O
 *    O
 *    O O
 */
Block BlockFactory::create5Z(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(1,1));
    points.push_back(Point(2,1));
    points.push_back(Point(2,2));
    return Block(points, color);
}
/**< ===================================== */
/** 5T
 *  O O O
 *    O
 *    O
 */
Block BlockFactory::create5T(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(0,2));
    points.push_back(Point(1,1));
    points.push_back(Point(2,1));
    return Block(points, color);
}
/**< ===================================== */
/** 5X
 *    O
 *  O O O
 *    O
 */
Block BlockFactory::create5X(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(0,2));
    points.push_back(Point(-1,1));
    points.push_back(Point(1,1));
    return Block(points, color);
}
/**< ===================================== */
/** 5W
 *  O O
 *    O O
 *      O
 */
Block BlockFactory::create5W(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(1,1));
    points.push_back(Point(1,2));
    points.push_back(Point(2,2));
    return Block(points, color);
}
/**< ===================================== */
/** 5V
 *  O
 *  O
 *  O O O
 */
Block BlockFactory::create5V(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(2,0));
    points.push_back(Point(2,1));
    points.push_back(Point(2,2));
    return Block(points, color);
}
/**< ===================================== */
/** 5F
 *  O
 *  O O O
 *    O
 */
Block BlockFactory::create5F(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(1,0));
    points.push_back(Point(1,1));
    points.push_back(Point(1,2));
    points.push_back(Point(2,1));
    return Block(points, color);
}
/**< ===================================== */
/** 5P
 *  O O
 *  O O
 *  O
 */
Block BlockFactory::create5P(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(1,0));
    points.push_back(Point(1,1));
    points.push_back(Point(2,0));
    return Block(points, color);
}
/**< ===================================== */
/** 5Y
 *  O O O O
 *    O
 */
Block BlockFactory::create5Y(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(0,2));
    points.push_back(Point(0,3));
    points.push_back(Point(1,1));
    return Block(points, color);
}
/**< ===================================== */
/** 5N
 *  O O
 *    O O O
 */
Block BlockFactory::create5N(int color){
    std::vector<Point> points;
    points.push_back(Point(0,0));
    points.push_back(Point(0,1));
    points.push_back(Point(1,1));
    points.push_back(Point(1,2));
    points.push_back(Point(1,3));
    return Block(points, color);
}
/**< ===================================== */
/**< ===================================== */











//BlockFactory::BlockFactory()
//{
//    //ctor
//}
//
//BlockFactory::~BlockFactory()
//{
//    //dtor
//}
