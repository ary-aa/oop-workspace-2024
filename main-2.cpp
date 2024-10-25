#include <iostream>
#include "Explorer.hpp"
#include "Exit.hpp"
#include "Pit.hpp"

int main() {
    // Create grid dimensions
    const int width = 5;
    const int height = 5;

    // Create an explorer
    Explorer explorer(width, height);

    // Create an exit and a pit
    Exit exit(width, height);
    Pit pit(2, 2, 1, 1); // Pit at (2, 2)

    // Test initial stamina
    std::cout << "Initial stamina: " << explorer.getStamina() << "\n";

    // Move explorer to the pit
    explorer.move(2, 2); // Move to (2, 2)
    std::cout << "Explorer moved to pit at (2, 2)\n";

    // Interact with the pit
    if (pit.interact(&explorer)) {
        std::cout << "Explorer jumped over the pit, stamina is now " << explorer.getStamina() << "\n";
    } else {
        std::cout << "Explorer could not interact with the pit\n";
    }

    // Move explorer to exit
    explorer.move(3, 3); // Move to (3, 3)
    std::cout << "Explorer moved to exit at (4, 4)\n";

    // Interact with the exit
    if (exit.interact(&explorer)) {
        std::cout << "Explorer reached the exit!\n";
    } else {
        std::cout << "Explorer has not reached the exit yet.\n";
    }

    return 0;
}
