#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

class Explorer; // Forward declaration

// Enumeration for Interactable types
enum InteractableType {
    EXIT,
    PIT
};

class Interactable : public GridItem {
private:
    static int activeCount; // Static count of active Interactable objects

public:
    // Default constructor
    Interactable() : GridItem(0, 0, 0, 0) {
        activeCount++;
    }

    // Parameterized constructor
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {
        activeCount++;
    }

    // Pure virtual function for interaction
    virtual bool interact(Explorer* player) = 0;

    // Pure virtual function to get the type
    virtual InteractableType getType() = 0;

    // Get active Interactable count
    static int getActiveInteractableCount() {
        return activeCount;
    }

    // Destructor
    virtual ~Interactable() {
        activeCount--;
    }
};

// Initialize static member
int Interactable::activeCount = 0;

#endif // INTERACTABLE_HPP
