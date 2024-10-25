#ifndef HELPER_HPP
#define HELPER_HPP

#include <tuple>
#include <cmath>

class Helper {
public:
    // Calculate absolute squared distance between two points
    static double absoluteSquaredDistance(std::tuple<int, int> item1, std::tuple<int, int> item2) {
        int x1 = std::get<0>(item1);
        int y1 = std::get<1>(item1);
        int x2 = std::get<0>(item2);
        int y2 = std::get<1>(item2);

        return std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2);
    }
};

#endif
