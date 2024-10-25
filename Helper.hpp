#ifndef HELPER_HPP
#define HELPER_HPP

#include <tuple>

class Helper {
public:
    // Calculate squared Euclidean distance (returns an integer)
    static int absoluteSquaredDistance(std::tuple<int, int> item1, std::tuple<int, int> item2) {
        int x1 = std::get<0>(item1);
        int y1 = std::get<1>(item1);
        int x2 = std::get<0>(item2);
        int y2 = std::get<1>(item2);
        
        // Calculate squared Euclidean distance
        int dx = x2 - x1;
        int dy = y2 - y1;
        return (dx * dx) + (dy * dy);
    }
};

#endif
