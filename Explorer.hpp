#ifndef EXPLORER_HPP
#define EXPLORER_HPP

#include "GridItem.hpp"

class Explorer : public GridItem {
private:
    int stamina;

public:
    // Constructor
    Explorer(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), stamina(2) {}

    // Get stamina
    int getStamina() const {
        return stamina;
    }

    // Jump over a pit
    void jumpPit() {
        if (stamina > 0) {
            stamina--;
        }
    }

    // Move explorer
    bool move(int xOffset, int yOffset) {
        // Ensure the move is valid (either in x or y direction, but not both)
        if ((xOffset != 0 && yOffset != 0) || stamina <= 0) {
            return false;
        }

        int newX = std::get<0>(getCoordinates()) + xOffset;
        int newY = std::get<1>(getCoordinates()) + yOffset;

        if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
            setCoordinates(newX, newY);
            return true;
        }
        return false;
    }
};

#endif
