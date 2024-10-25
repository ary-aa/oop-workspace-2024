#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

class GridItem {
private:
    int x, y, width, height;

public:
    GridItem(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}

    // Getters for x and y
    int getX() const { return x; }
    int getY() const { return y; }

    // Setters for x and y
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
};

#endif
