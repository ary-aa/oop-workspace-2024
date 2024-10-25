#include "Game.hpp"
#include <iostream>

int main() {
    // Create game grid of size 5x5 with pits at coordinates (2,2) and (3,3)
    std::vector<std::tuple<int, int>> pitCoordinates = { {2, 2}, {3, 3} };
    Game game(5, 5, pitCoordinates);

    // Initial grid state
    std::cout << "Initial Grid:\n";
    game.printGrid();
    game.displayState();

    // Move player towards the first pit
    std::cout << "\nMoving player to (2, 2)...\n";
    game.movePlayer(2, 0);
    game.movePlayer(0, 2);
    game.printGrid();
    game.displayState();

    // Move player to (3, 3) and check if they fall into the second pit
    std::cout << "\nMoving player to (3, 3)...\n";
    game.movePlayer(1, 1);
    game.printGrid();
    game.displayState();

    // If the game is still going, move player to the exit
    if (!game.displayState()) {
        std::cout << "\nMoving player to the exit...\n";
        game.movePlayer(1, 1);
        game.printGrid();
        game.displayState();
    }

    return 0;
}
