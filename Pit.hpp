#ifndef PIT_HPP
#define PIT_HPP

#include "Interactable.hpp"
#include "Helper.hpp"
#include "Explorer.hpp" 

class Pit : public Interactable {
private:
    bool covered = false; // State of the pit (covered or not)

public:
    Pit(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Explorer* player) override {
        if (Helper::absoluteSquaredDistance(getCoordinates(), player->getCoordinates()) == 0 && !covered) {
            player->jumpPit();
            covered = true; // Set the pit as covered after interaction
            return player->getStamina() == 0; // Return true if stamina is 0 after jumping
        }
        return false; // No interaction
    }

    InteractableType getType() override {
        return PIT;
    }
};

#endif // PIT_HPP
