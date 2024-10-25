#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    // Test GridItem default constructor
    GridItem item1;
    std::cout << "Default GridItem coordinates: (" 
              << std::get<0>(item1.getCoordinates()) << ", " 
              << std::get<1>(item1.getCoordinates()) << ")\n";

    // Test GridItem parameterized constructor
    GridItem item2(5, 7, 10, 10);
    std::cout << "Parameterized GridItem coordinates: (" 
              << std::get<0>(item2.getCoordinates()) << ", " 
              << std::get<1>(item2.getCoordinates()) << ")\n";
    
    // Test active count
    std::cout << "Active GridItem objects: " << GridItem::getActiveGridItemCount() << "\n";

    // Test setting new coordinates
    item2.setCoordinates(2, 3);
    std::cout << "New coordinates of item2: (" 
              << std::get<0>(item2.getCoordinates()) << ", " 
              << std::get<1>(item2.getCoordinates()) << ")\n";

    // Test Euclidean distance
    double dist = Helper::absoluteSquaredDistance(item1.getCoordinates(), item2.getCoordinates());
    std::cout << "Squared distance between item1 and item2: " << dist << "\n";

    return 0;
}
