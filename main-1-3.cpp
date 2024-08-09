// main-1-3.cpp
#include <iostream>
#include "function-1-3.cpp" 

int main() {
    double myArray[] = {3.5, 2.1, 5.9, 1.4, 7.2}; 
    int size = sizeof(myArray) / sizeof(myArray[0]); 

    double* duplicatedArray = duplicateArray(myArray, size); 

    if (duplicatedArray != nullptr) { 
        
        std::cout << "Duplicated array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << duplicatedArray[i] << " ";
        }
        std::cout << std::endl;

        delete[] duplicatedArray; 
    } else {
        std::cout << "Failed to duplicate the array." << std::endl;
    }

    return 0;
}
