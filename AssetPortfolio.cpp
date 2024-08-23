#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio() : max_size(0), num_assets(0), assets(nullptr) {}

AssetPortfolio::AssetPortfolio(int size) : max_size(size), num_assets(0) {
    assets = new Asset[max_size];
}

AssetPortfolio::~AssetPortfolio() {
    delete[] assets;
}

int AssetPortfolio::get_num_assets() {
    return num_assets;
}

bool AssetPortfolio::has_asset(std::string product) {
    for (int i = 0; i < num_assets; i++) {
        if (assets[i].get_product_type() == product) {
            return true;
        }
    }
    return false;
}

Asset* AssetPortfolio::get_assets() {
    return assets;
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    if (num_assets < max_size) {
        assets[num_assets++] = new_asset;
        return true;
    }
    return false;
}
