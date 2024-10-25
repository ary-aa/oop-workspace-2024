#ifndef EXIT_HPP
#define EXIT_HPP

#include "Interactable.hpp"

class Exit : public Interactable {
public:
    // Constructor
    Exit(int width, int height) : Interactable(width - 1, height - 1, 1, 1) {}

    // Interact function
    bool interact(Explorer* player) override {
        return Helper::absoluteSquaredDistance(getCoordinates(), player->getCoordinates()) == 0;
    }

    // Get type function
    InteractableType getType() override {
        return EXIT;
    }
};

#endif // EXIT_HPP
