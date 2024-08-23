#include <iostream>
#include "Asset.h"

int main() {
    // Test default constructor
    Asset default_asset;
    std::cout << "Default Asset: Type = \"" << default_asset.get_product_type() << "\", Value = " << default_asset.get_value() << std::endl;

    // Test parameterized constructor
    Asset stock_asset(1000, "Stock");
    std::cout << "Stock Asset: Type = \"" << stock_asset.get_product_type() << "\", Value = " << stock_asset.get_value() << std::endl;

    // Test another asset
    Asset bond_asset(5000, "Bond");
    std::cout << "Bond Asset: Type = \"" << bond_asset.get_product_type() << "\", Value = " << bond_asset.get_value() << std::endl;

    return 0;
}
