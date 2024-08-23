#ifndef ASSET_H
#define ASSET_H

#include <string>

class Asset {
private:
    int value;
    std::string product_type;

public:
    // Default constructor
    Asset();

    // Constructor that takes the product type and value
    Asset(int value, std::string product_type);

    // Getter for product type
    std::string get_product_type();

    // Getter for value
    int get_value();

    // Destructor
    ~Asset();
};

#endif // ASSET_H
