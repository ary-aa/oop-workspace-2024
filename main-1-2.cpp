// main-1-2.cpp
#include <iostream>
int main() {
    double myArray[] = {3.5, 2.1, 5.9, 1.4, 7.2}; 
    int size = sizeof(myArray) / sizeof(myArray[0]); 

    double valueToAdd = 2.0; 
    modifyArray(myArray, size, valueToAdd); 

    std::cout << "Modified array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
