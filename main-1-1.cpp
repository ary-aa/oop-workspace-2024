// main-1-1.cpp
#include <iostream>
#include "AirVehicle.h"

int main() {
    AirVehicle plane(5000); 
    std::cout << "Initial number of flights: " << plane.get_numberOfFlights() << std::endl;

    plane.fly(50, 60); 
    std::cout << "Number of flights after flights: " << plane.get_numberOfFlights() << std::endl;

    plane.refuel(); 
    std::cout << "Fuel after refueling: " << plane.get_fuel() << std::endl;

    return 0;
}
