#include "AssetPortfolio.h"

// Default constructor with a capacity of zero assets
AssetPortfolio::AssetPortfolio() : max_size(0), num_assets(0), assets(nullptr) {}

// Constructor with a specified size
AssetPortfolio::AssetPortfolio(int size) : max_size(size), num_assets(0) {
    assets = new Asset[max_size];
}

// Destructor
AssetPortfolio::~AssetPortfolio() {
    delete[] assets;
}

// Returns the number of assets in the portfolio
int AssetPortfolio::get_num_assets() {
    return num_assets;
}

// Returns true if any asset in the portfolio is of the specified product type
bool AssetPortfolio::has_asset(std::string product) {
    for (int i = 0; i < num_assets; i++) {
        if (assets[i].get_product_type() == product) {
            return true;
        }
    }
    return false;
}

// Returns the array of assets in the portfolio
Asset* AssetPortfolio::get_assets() {
    return assets;
}

// Adds a new asset to the portfolio if not full, returns true if added
bool AssetPortfolio::add_asset(Asset new_asset) {
    if (num_assets < max_size) {
        assets[num_assets++] = new_asset;
        return true;
    }
    return false;
}
