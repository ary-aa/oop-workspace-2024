#ifndef EXPLORER_HPP
#define EXPLORER_HPP

#include "GridItem.hpp"
#include <iostream>

class Explorer : public GridItem {
    int stamina;
    int gridWidth;
    int gridHeight;

public:
    // Constructor sets initial position and stamina
    Explorer(int width, int height) : GridItem(0, 0, width, height), stamina(2), gridWidth(width), gridHeight(height) {}

    // Get current stamina
    int getStamina() {
        return stamina;
    }

    // Decrement stamina when jumping over a pit
    void jumpPit() {
        if (stamina > 0) {
            --stamina;
        }
    }

    // Move function with boundary checks and direction checks
    bool move(int xOffset, int yOffset) {
        // Ensure only one direction is non-zero for valid move
        if ((xOffset != 0 && yOffset != 0) || (xOffset == 0 && yOffset == 0)) {
            return false;
        }

        // Calculate new position
        int newX = x + xOffset;
        int newY = y + yOffset;

        // Validate if new position is within grid boundaries
        if (newX >= 0 && newX < gridWidth && newY >= 0 && newY < gridHeight) {
            x = newX;
            y = newY;
            std::cout << "new position: " << x << ", " << y << std::endl;
            return true;
        }

        // Move not possible if out of bounds
        return false;
    }
};

#endif
