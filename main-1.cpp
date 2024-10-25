#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    // Testing GridItem class
    GridItem item1; // Default constructor
    std::cout << "Item1 coordinates: (" << std::get<0>(item1.getCoordinates())
              << ", " << std::get<1>(item1.getCoordinates()) << ")\n";
    
    GridItem item2(3, 4, 1, 1); // Parameterized constructor
    std::cout << "Item2 coordinates: (" << std::get<0>(item2.getCoordinates())
              << ", " << std::get<1>(item2.getCoordinates()) << ")\n";
    
    // Testing setCoordinates
    item1.setCoordinates(1, 2);
    std::cout << "Item1 new coordinates: (" << std::get<0>(item1.getCoordinates())
              << ", " << std::get<1>(item1.getCoordinates()) << ")\n";

    // Testing active item count
    std::cout << "Active GridItem count: " << GridItem::getActiveGridItemCount() << "\n";

    // Testing Helper class
    double distance = Helper::absoluteSquaredDistance(item1.getCoordinates(), item2.getCoordinates());
    std::cout << "Absolute squared distance between Item1 and Item2: " << distance << "\n";

    return 0;
}
