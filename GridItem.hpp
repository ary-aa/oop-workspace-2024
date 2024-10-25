#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>

class GridItem {
private:
    int x, y, width, height;
    static int activeGridItemCount;

public:
    // Default constructor
    GridItem() : x(0), y(0), width(0), height(0) {
        activeGridItemCount++;
    }

    // Parameterized constructor
    GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {
        activeGridItemCount++;
    }

    // Destructor
    virtual ~GridItem() {
        activeGridItemCount--;
    }

    // Set coordinates
    void setCoordinates(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Get coordinates
    std::tuple<int, int> getCoordinates() const {
        return std::make_tuple(x, y);
    }

    // Get grid width
    int getGridWidth() const {
        return width;
    }

    // Get grid height
    int getGridHeight() const {
        return height;
    }

    // Get count of active GridItem objects
    static int getActiveGridItemCount() {
        return activeGridItemCount;
    }
};

// Initialize static variable
int GridItem::activeGridItemCount = 0;

#endif
