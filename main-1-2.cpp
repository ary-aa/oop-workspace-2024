#include <iostream>
#include "AssetPortfolio.h"

int main() {
    //empty portfolio
    AssetPortfolio portfolio1;
    std::cout << "Portfolio 1 has " << portfolio1.get_num_assets() << " assets." << std::endl;

    // Create a portfolio with maximum capacity: 2 assets
    AssetPortfolio portfolio2(2);

    // Add assets to the portfolio
    Asset asset1(100, "Stock");
    Asset asset2(550, "Bond");
    Asset asset3(436, "Real Estate");

    bool added1 = portfolio2.add_asset(asset1);
    bool added2 = portfolio2.add_asset(asset2);
    bool added3 = portfolio2.add_asset(asset3);

    std::cout << "Portfolio 2 has " << portfolio2.get_num_assets() << " assets." << std::endl;
    std::cout << "Added Stock: " << (added1 ? "Yes" : "No") << std::endl;
    std::cout << "Added Bond: " << (added2 ? "Yes" : "No") << std::endl;
    std::cout << "Added Real Estate: " << (added3 ? "Yes" : "No") << std::endl;
  
    // Check specific types of assets in the portfolio: (if it is stock, real estate etc)
    std::cout << "Portfolio 2 has Stock: " << (portfolio2.has_asset("Stock") ? "Yes" : "No") << std::endl;
    std::cout << "Portfolio 2 has Real Estate: " << (portfolio2.has_asset("Real Estate") ? "Yes" : "No") << std::endl;
  
    // Output assets
    Asset* assets = portfolio2.get_assets();
    for (int i = 0; i < portfolio2.get_num_assets(); i++) {
        std::cout << "Asset " << (i + 1) << ": Type = " << assets[i].get_product_type() << ", Value = " << assets[i].get_value() << std::endl;
    }

    return 0;
}
