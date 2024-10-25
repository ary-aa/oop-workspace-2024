#include "GridItem.hpp"
#include <iostream>

class Explorer : public GridItem {
public:
    Explorer(int x, int y, int width, int height) : GridItem(x, y, width, height) {}

    bool move(int xOffset, int yOffset) {
        int newX = getX() + xOffset;
        int newY = getY() + yOffset;

        if (newX >= 0 && newY >= 0) {
            setX(newX);
            setY(newY);
            std::cout << "new position: " << getX() << ", " << getY() << std::endl;
            return true;
        }
        return false;
    }
};
