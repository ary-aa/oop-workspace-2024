#include "Asset.h"

// Default constructor
Asset::Asset() : value(0), product_type("") {}

// Constructor that takes the product type and value
Asset::Asset(int value, std::string product_type) : value(value), product_type(product_type) {}

// Getter for product type
std::string Asset::get_product_type() {
    return product_type;
}

// Getter for value
int Asset::get_value() {
    return value;
}

// Destructor
Asset::~Asset() {}
