#ifndef BLOCKFACTORY_H
#define BLOCKFACTORY_H


#include "Block.h"
#include <vector>
class BlockFactory
{
    public:
        static std::vector<Block> createAllBlocks(int color);
        ///naming according to http://www.boardgamegeek.com/image/112331/blokus
        static Block create1O(int color);
        static Block create2I(int color);
        static Block create3I(int color);
        static Block create3L(int color);
        static Block create4I(int color);
        static Block create4T(int color);
        static Block create4Z(int color);
        static Block create4O(int color);
        static Block create5I(int color);
        static Block create5L(int color);
        static Block create5U(int color);
        static Block create5Z(int color);
        static Block create5T(int color);
        static Block create5X(int color);
        static Block create5W(int color);
        static Block create5V(int color);
        static Block create5F(int color);
        static Block create5P(int color);
        static Block create5Y(int color);
        static Block create5N(int color);


    protected:
    private:
        BlockFactory();
        ~BlockFactory();
};

#endif // BLOCKFACTORY_H
