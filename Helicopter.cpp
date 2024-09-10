// Helicopter.cpp
#include "Helicopter.h"

Helicopter::Helicopter() {
    // Default constructor
}

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w), name(n) {
    // Constructor that will initialize given weight and name
}

std::string Helicopter::get_name() const {
    return name;
}

void Helicopter::set_name(std::string n) {
    name = n;
}

void Helicopter::fly(int headwind, int minutes) {
    float fuelConsumptionRate = 0.18f; // Base fuel consumption rate/minute
    if (headwind >= 40) { //because headwind greater than 40km/h
        fuelConsumptionRate = 0.4f; // Increased fuel consumption rate/minute - strong headwind
    }

    int extraFuelPerMinute = 0;
    if (get_weight() > 5690) {
        extraFuelPerMinute = (get_weight() - 5690) * 0.01; // Extra fuel consumption/minute for weight > 5670kg
    }

    float fuelUsed = fuelConsumptionRate * minutes + extraFuelPerMinute * minutes;
    float remainingFuel = get_fuel() - fuelUsed;

    if (remainingFuel >= 20) { //flight will take off if remaining fuel greater than 20
        set_fuel(remainingFuel);
        AirVehicle::fly(headwind, minutes); // Increment numberOfFlights
    }

        if (remainingFuel < 20) { //flight will not fly if remaining fuel less than 20 
        remainingFuel = 100; // Increment numberOfFlights
    }

}
