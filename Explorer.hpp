#ifndef EXPLORER_HPP
#define EXPLORER_HPP

#include "GridItem.hpp"
#include "Explorer.hpp" 

class Explorer : public GridItem {
private:
    int stamina; // Stamina of the Explorer

public:
    // Constructor
    Explorer(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), stamina(2) {}

    // Get current stamina
    int getStamina() {
        return stamina;
    }

    // Jumping a pit
    void jumpPit() {
        if (stamina > 0) {
            stamina--;
        }
    }

    // Move function
    bool move(int xOffset, int yOffset) {
        // Check if the move is legal (only one direction)
        if ((xOffset != 0 && yOffset == 0) || (xOffset == 0 && yOffset != 0)) {
            int newX = std::get<0>(getCoordinates()) + xOffset;
            int newY = std::get<1>(getCoordinates()) + yOffset;

            // Check bounds
            if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
                setCoordinates(newX, newY);
                return true;
            }
        }
        return false;
    }
};

#endif // EXPLORER_HPP
