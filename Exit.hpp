#ifndef EXIT_HPP
#define EXIT_HPP

#include "Explorer.hpp"
#include "Interactable.hpp"
#include "Helper.hpp"

class Exit : public Interactable {
public:
    // Constructor
    Exit(int width, int height) : Interactable(width - 1, height - 1, width, height) {}

    // Override interact function
    bool interact(Explorer* player) override {
        auto playerCoordinates = player->getCoordinates();
        auto exitCoordinates = getCoordinates();
        return Helper::absoluteSquaredDistance(playerCoordinates, exitCoordinates) == 0;
    }

    // Override getType function
    InteractableType getType() override {
        return EXIT;
    }
};

#endif
