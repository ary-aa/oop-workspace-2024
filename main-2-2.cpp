// main-2-2.cpp
#include <iostream>
#include "Airplane.h"

int main() {
    Airplane plane(8000, 150);
    std::cout << "Initial fuel level: " << plane.get_fuel() << "%" << std::endl;

    plane.fly(65, 120); // 65km/h headwind, 120 minutes flight
    std::cout << "Fuel after flying: " << plane.get_fuel() << "%" << std::endl;

    std::cout << "Number of flights: " << plane.get_numberOfFlights() << std::endl;

    return 0;
}
