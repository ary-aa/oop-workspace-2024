// main-3-1.cpp
#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet fleet;

    // Access fleet and print info for each vehicle
    AirVehicle** vehicles = fleet.get_fleet();
    for (int i = 0; i < 5; ++i) {
        std::cout << "Vehicle " << i + 1 << ":" << std::endl;
        std::cout << "Weight: " << vehicles[i]->get_weight() << std::endl;
        std::cout << "Fuel: " << vehicles[i]->get_fuel() << std::endl;
        std::cout << "Number of flights: " << vehicles[i]->get_numberOfFlights() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
