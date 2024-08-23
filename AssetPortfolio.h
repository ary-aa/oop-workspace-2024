#ifndef ASSETPORTFOLIO_H
#define ASSETPORTFOLIO_H

#include "Asset.h"

class AssetPortfolio {
private:
    int max_size;        // Maximum number of assets
    int num_assets;      // Current number of assets
    Asset* assets;       // Array of assets

public:
    // Default constructor
    AssetPortfolio();

    // Constructor with a specified size
    AssetPortfolio(int size);

    // Destructor
    ~AssetPortfolio();

    // Returns the number of assets in the portfolio
    int get_num_assets();

    // Returns true if any asset in the portfolio is of the specified product type
    bool has_asset(std::string product);

    // Returns the array of assets in the portfolio
    Asset* get_assets();

    // Adds a new asset to the portfolio if not full, returns true if added
    bool add_asset(Asset new_asset);
};

#endif // ASSET_H
