// Helicopter.h
#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <string>

class Helicopter : public AirVehicle {
public:
  Helicopter();
  Helicopter(int w, std::string n);

  //Getter + Setter
  std::string get_name() const;
  void set_name(std::string n);

  // Override fly method
  void fly(int headwind, int minutes) override;

private:
  std::string name;
};

#endif //HELICOPTER_H
