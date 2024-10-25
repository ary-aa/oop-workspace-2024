#include <iostream>
#include "Game.hpp"

int main() {
    // Define grid size
    const int width = 5;
    const int height = 5;

    // Define pit coordinates
    std::vector<std::tuple<int, int>> pitCoordinates = {
        {1, 1},
        {2, 3},
        {3, 0}
    };

    // Create the game
    Game game(width, height, pitCoordinates);

    // Game loop
    while (game.displayState() == false) {
        game.printGrid();
        
        // Move player: Sample moves; you can change these to test different paths
        game.movePlayer(1, 0); // Move right
        game.movePlayer(0, 1); // Move down
        game.movePlayer(1, 1); // Move diagonal (invalid move)
        game.movePlayer(1, 0); // Move right

        // Check for win or lose condition
        if (game.displayState()) {
            break;
        }
    }

    return 0;
}
