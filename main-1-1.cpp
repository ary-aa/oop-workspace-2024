// main-1-1.cpp
#include <iostream>
#include "function-1-1.cpp" 

int main() {
    double myArray[] = {3.5, 2.1, 5.9, 1.4, 7.2}; 
    int size = sizeof(myArray) / sizeof(myArray[0]); 

    double minValue = arrayMin(myArray, size); 
    std::cout << "The minimum value in the array is: " << minValue << std::endl;

    return 0;
}
