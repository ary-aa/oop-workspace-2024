#ifndef HELPER_HPP
#define HELPER_HPP

#include <tuple>
#include <cmath>

class Helper {
public:
    // Calculate Euclidean (absolute) distance between two points
    static double absoluteSquaredDistance(std::tuple<int, int> item1, std::tuple<int, int> item2) {
        int x1 = std::get<0>(item1);
        int y1 = std::get<1>(item1);
        int x2 = std::get<0>(item2);
        int y2 = std::get<1>(item2);
        
        // Calculate Euclidean (absolute) distance
        int dx = x2 - x1;
        int dy = y2 - y1;
        return std::sqrt((dx * dx) + (dy * dy));
    }
};

#endif
