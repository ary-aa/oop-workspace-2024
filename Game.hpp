#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>
#include <tuple>
#include "Explorer.hpp"
#include "Exit.hpp"
#include "Pit.hpp"

class Game {
public:
    enum GameState {
        WIN,
        LOSE,
        PLAYING
    };

private:
    int width;
    int height;
    Explorer* player;
    Exit* goal;
    std::vector<Pit*> pits;
    GameState state;

public:
    // Constructor
    Game(int w, int h, std::vector<std::tuple<int, int>> pitCoordinates)
        : width(w), height(h), state(PLAYING) {
        player = new Explorer(width, height);
        goal = new Exit(width, height);

        // Create Pit objects
        for (const auto& coords : pitCoordinates) {
            int x = std::get<0>(coords);
            int y = std::get<1>(coords);
            // Ensure the position is not already taken
            if (!((x == 0 && y == 0) || (x == width - 1 && y == height - 1))) {
                pits.push_back(new Pit(x, y, 1, 1));
            }
        }
    }

    // Display current game state
    bool displayState() {
        switch (state) {
            case WIN:
                std::cout << "You win!" << std::endl;
                return true;
            case LOSE:
                std::cout << "You lose :(" << std::endl;
                return true;
            case PLAYING:
                std::cout << "Game on" << std::endl;
                return false;
        }
        return false;
    }

    // Move the player
    void movePlayer(int dx, int dy) {
        if (state == PLAYING) {
            // Move the player
            if (player->move(dx, dy)) {
                // Check for win condition
                if (goal->interact(player)) {
                    state = WIN;
                }
                // Check for interactions with pits
                for (auto& pit : pits) {
                    if (pit->interact(player)) {
                        state = LOSE;
                        break;
                    }
                }
            }
        }
    }

    // Print the grid
    void printGrid() {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                if (x == 0 && y == 0) {
                    std::cout << 'X'; // Player
                } else if (x == width - 1 && y == height - 1) {
                    std::cout << 'E'; // Exit
                } else {
                    bool isPit = false;
                    for (const auto& pit : pits) {
                        if (std::get<0>(pit->getCoordinates()) == x && std::get<1>(pit->getCoordinates()) == y) {
                            std::cout << 'P'; // Pit
                            isPit = true;
                            break;
                        }
                    }
                    if (!isPit) {
                        std::cout << '_'; // Empty cell
                    }
                }
            }
            std::cout << std::endl; // New line after each row
        }
    }

    // Destructor
    ~Game() {
        delete player;
        delete goal;
        for (auto& pit : pits) {
            delete pit;
        }
    }
};

#endif // GAME_HPP
