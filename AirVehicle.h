// AirVehicle.h
#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
public:
    AirVehicle();
    AirVehicle(int w);

    // Member functions
    void refuel();
    virtual void fly(int headwind, int minutes);

    // Getters
    int get_weight() const;
    float get_fuel() const;
    int get_numberOfFlights() const;

    // Setters
    void set_weight(int w);
    void set_fuel(float f);
    void set_numberOfFlights(int flights);

private:
    int weight;
    float fuel;
    int numberOfFlights;
};

#endif // AIRVEHICLE_H


