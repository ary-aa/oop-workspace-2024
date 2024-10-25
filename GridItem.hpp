#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>

class GridItem {
private:
    int x, y;                  // Coordinates of the GridItem
    int width, height;        // Dimensions of the GridItem
    static int activeCount;    // Static count of active GridItem objects

public:
    // Default constructor
    GridItem() : x(0), y(0), width(0), height(0) {
        activeCount++;
    }

    // Parameterized constructor
    GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
        activeCount++;
    }

    // Set coordinates
    void setCoordinates(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Get coordinates
    std::tuple<int, int> getCoordinates() {
        return std::make_tuple(x, y);
    }

    // Get grid width
    int getGridWidth() {
        return width;
    }

    // Get grid height
    int getGridHeight() {
        return height;
    }

    // Get active GridItem count
    static int getActiveGridItemCount() {
        return activeCount;
    }

    // Destructor
    virtual ~GridItem() {
        activeCount--;
    }
};

// Initialize static member
int GridItem::activeCount = 0;

#endif // GRIDITEM_HPP
