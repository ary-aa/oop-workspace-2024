#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <vector>
#include <tuple>
#include "Explorer.hpp"
#include "Pit.hpp"
#include "Exit.hpp"

// Enum to represent the game state
enum GameState { WIN, LOSE, PLAYING };

class Game {
private:
    int width, height;
    Explorer* player;
    Exit* gameExit;
    std::vector<Pit*> pits;
    GameState currentState;

public:
    // Constructor
    Game(int gridWidth, int gridHeight, std::vector<std::tuple<int, int>> pitCoordinates) 
        : width(gridWidth), height(gridHeight), currentState(PLAYING) {
        // Create Explorer
        player = new Explorer(gridWidth, gridHeight);
        
        // Create Exit at bottom-right corner
        gameExit = new Exit(gridWidth, gridHeight);
        
        // Create Pits at specified coordinates
        for (auto& coords : pitCoordinates) {
            int pitX = std::get<0>(coords);
            int pitY = std::get<1>(coords);
            // Make sure the pit is not placed at the player's starting position or exit position
            if (!(pitX == 0 && pitY == 0) && !(pitX == width - 1 && pitY == height - 1)) {
                pits.push_back(new Pit(pitX, pitY, gridWidth, gridHeight));
            }
        }
    }

    // Destructor to free dynamic memory
    ~Game() {
        delete player;
        delete gameExit;
        for (Pit* pit : pits) {
            delete pit;
        }
    }

    // Display game state
    bool displayState() {
        if (currentState == WIN) {
            std::cout << "You win!\n";
            return true;
        } else if (currentState == LOSE) {
            std::cout << "You lose :(\n";
            return true;
        } else {
            std::cout << "Game on\n";
            return false;
        }
    }

    // Move the player on the grid
    void movePlayer(int dx, int dy) {
        if (currentState == PLAYING) {
            // Move the player
            if (player->move(dx, dy)) {
                // Check if the player interacts with any pits
                for (Pit* pit : pits) {
                    if (pit->interact(player)) {
                        currentState = LOSE; // Game over if explorer falls into pit
                        return;
                    }
                }

                // Check if player has reached the exit
                if (gameExit->interact(player)) {
                    currentState = WIN;
                }
            }
        }
    }

    // Print the current grid state
    void printGrid() {
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (std::get<0>(player->getCoordinates()) == x && std::get<1>(player->getCoordinates()) == y) {
                    std::cout << 'X'; // Player's position
                } else if (std::get<0>(gameExit->getCoordinates()) == x && std::get<1>(gameExit->getCoordinates()) == y) {
                    std::cout << 'E'; // Exit's position
                } else {
                    bool isPit = false;
                    for (Pit* pit : pits) {
                        if (std::get<0>(pit->getCoordinates()) == x && std::get<1>(pit->getCoordinates()) == y) {
                            std::cout << 'P'; // Pit's position
                            isPit = true;
                            break;
                        }
                    }
                    if (!isPit) {
                        std::cout << '_'; // Empty space
                    }
                }
            }
            std::cout << "\n";
        }
    }
};

#endif
