//AirVehicle.cpp
#include "AirVehicle.h"

AirVehicle::AirVehicle() {
  weight = 0;
  fuel = 100.0f;
  numberOfFlights = 0;
}

AirVehicle::AirVehicle(int w) {
  weight = w;
  fuel = 100.0f;
  numberOfFlights = 0;
}

int AirVehicle::get_weight() const {
  return weight;
}

float AirVehicle::get_fuel() const {
  return fuel;
}

int AirVehicle::get_numberOfFlights() const {
    return numberOfFlights;
}

void AirVehicle::Set_weight(int w) {
  weight = w;
}

void AirVehicle::set_fuel(float f) {
  fuel = f;
}

void AirVehicle::set_numberOfFlights(int flights) {
  numberOfFlights = flights;
}

void AirVehicle::refuel() {
    fuel = 100.0f;
}

void AirVehicle::fly(int headwind, int minutes) {
    numberOfFlights++;
}
