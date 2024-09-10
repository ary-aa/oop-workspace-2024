// AirFleet.h
#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
public:
    AirFleet();
    ~AirFleet(); // Destructor

    AirVehicle** get_fleet() const;

private:
    AirVehicle** fleet;
};

#endif // AIRFLEET_H
