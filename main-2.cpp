#include <iostream>
#include "Explorer.hpp"
#include "Pit.hpp"
#include "Exit.hpp"

int main() {
    // Create grid of size 5x5
    int gridWidth = 5, gridHeight = 5;
    
    // Create an Explorer
    Explorer player(gridWidth, gridHeight);
    
    // Create Exit and Pit objects
    Exit gameExit(gridWidth, gridHeight);
    Pit pit(2, 2, gridWidth, gridHeight);
    
    // Display initial position and stamina
    std::cout << "Explorer starting position: (" 
              << std::get<0>(player.getCoordinates()) << ", " 
              << std::get<1>(player.getCoordinates()) << ")\n";
    std::cout << "Explorer stamina: " << player.getStamina() << "\n";

    // Move explorer to (2, 2) (onto the Pit)
    std::cout << "\nMoving explorer to (2, 2)...\n";
    if (player.move(2, 0)) {
        player.move(0, 2);  // Moving vertically next
    }
    std::cout << "Explorer position after moving: (" 
              << std::get<0>(player.getCoordinates()) << ", " 
              << std::get<1>(player.getCoordinates()) << ")\n";
    std::cout << "Explorer stamina: " << player.getStamina() << "\n";

    // Interact with the pit
    if (pit.interact(&player)) {
        std::cout << "Explorer jumped into the pit. Current stamina: " << player.getStamina() << "\n";
    } else {
        std::cout << "Explorer avoided the pit.\n";
    }

    // Move explorer to the exit
    std::cout << "\nMoving explorer to the exit...\n";
    player.move(2, 1);  // Moving to the bottom-right corner (exit)
    
    // Check if explorer interacts with the exit
    if (gameExit.interact(&player)) {
        std::cout << "Explorer reached the exit! You win!\n";
    } else {
        std::cout << "Explorer hasn't reached the exit yet.\n";
    }

    return 0;
}
