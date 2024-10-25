#ifndef PIT_HPP
#define PIT_HPP

#include "Interactable.hpp"
#include "Helper.hpp"

class Pit : public Interactable {
private:
    bool covered;

public:
    // Constructor
    Pit(int x, int y, int width, int height) : Interactable(x, y, width, height), covered(false) {}

    // Override interact function
    bool interact(Explorer* player) override {
        if (Helper::absoluteSquaredDistance(player->getCoordinates(), getCoordinates()) == 0 && !covered) {
            player->jumpPit();
            covered = true;
            if (player->getStamina() == 0) {
                return true; // Explorer loses if stamina is 0
            }
        }
        return false;
    }

    // Override getType function
    InteractableType getType() override {
        return PIT;
    }
};

#endif
