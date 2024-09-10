// main-2-1.cpp
#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter chopper(6000, "Black Swan");
    std::cout << "Initial fuel level: " << chopper.get_fuel() << "%" << std::endl;

    chopper.fly(45, 10); // 45km/h headwind, 10 minutes flight
    std::cout << "Fuel level after flight: " << chopper.get_fuel() << "%" << std::endl;

    std::cout << "Number of flights: " << chopper.get_numberOfFlights() << std::endl;

    return 0;
}
