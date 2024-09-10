// Airplane.h
#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"

class Airplane : public AirVehicle {
public:
    Airplane();
    Airplane(int w, int p);

    // Getter 
    int get_numPassengers() const;

    // function to reduce passengers
    void reducePassengers(int x);

    // Override fly method
    void fly(int headwind, int minutes) override;

private:
    int numPassengers;
};

#endif // AIRPLANE_H
