#ifndef PIT_HPP
#define PIT_HPP

#include "Interactable.hpp"

class Pit : public Interactable {
private:
    bool covered; // State of the pit (covered or not)

public:
    // Constructor
    Pit(int x, int y, int width, int height) : Interactable(x, y, width, height), covered(false) {}

    // Interact function
    bool interact(Explorer* player) override {
        if (Helper::absoluteSquaredDistance(getCoordinates(), player->getCoordinates()) == 0 && !covered) {
            player->jumpPit();
            covered = true;
            return player->getStamina() == 0; // Return true if stamina is 0 after jumping
        }
        return false;
    }

    // Get type function
    InteractableType getType() override {
        return PIT;
    }
};

#endif // PIT_HPP
