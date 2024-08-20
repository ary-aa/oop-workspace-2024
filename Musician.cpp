#include "Musician.h"

// Default constructor
Musician::Musician() {
    instrument = "null";
    experience = 0;
}

// Constructor with parameters
Musician::Musician(std::string instrument, int experience) {
    this->instrument = instrument;
    this->experience = experience;
}

// Getter for instrument
std::string Musician::get_instrument() {
    return instrument;
}

// Getter for experience
int Musician::get_experience() {
    return experience;
}
