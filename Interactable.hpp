#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

enum InteractableType { EXIT, PIT };

class Interactable : public GridItem {
private:
    static int activeInteractableCount;

public:
    // Constructor
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {
        activeInteractableCount++;
    }

    // Default constructor
    Interactable() : GridItem() {
        activeInteractableCount++;
    }

    // Virtual destructor
    virtual ~Interactable() {
        activeInteractableCount--;
    }

    // Static function to get count of active Interactable objects
    static int getActiveInteractableCount() {
        return activeInteractableCount;
    }

    // Pure virtual functions
    virtual bool interact(Explorer* player) = 0;
    virtual InteractableType getType() = 0;
};

// Initialize static variable
int Interactable::activeInteractableCount = 0;

#endif
