// Airplane.cpp
#include "Airplane.h"

Airplane::Airplane() {
    // Default constructor does nothing
}

Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {
    // Constructor initializes weight and passengers
}

int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

void Airplane::fly(int headwind, int minutes) {
    float fuelConsumptionRate = 0.0025f; // Base fuel consumption rate per minute
    if (headwind >= 60) {
        fuelConsumptionRate = 0.005f; // Increased fuel consumption rate per minute for strong headwind
    }

    float extraFuelPerMinute = 0.0001f * numPassengers; // Extra fuel consumption per minute per passenger
    float fuelUsed = fuelConsumptionRate * minutes + extraFuelPerMinute * minutes;
    float remainingFuel = get_fuel() - fuelUsed;

    if (remainingFuel >= 20) {
        set_fuel(remainingFuel);
        AirVehicle::fly(headwind, minutes); // Increment numberOfFlights
    }
    else {
        set_fuel(remainingFuel);
    }
}
// Airplane.cpp
