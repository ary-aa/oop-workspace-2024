#include <iostream>
#include "function-3-1.cpp" // Include the function implementation file

int main() {
    std::cout << "Enter the first set of numbers:" << std::endl;
    int *numbers1 = readNumbers(); // Read first set of numbers from input

    std::cout << "Enter the second set of numbers:" << std::endl;
    int *numbers2 = readNumbers(); // Read second set of numbers from input

    bool result = equalsArray(numbers1, numbers2, 10); // Compare both arrays

    std::cout << std::boolalpha << "Arrays are equal: " << result << std::endl;

    delete[] numbers1; // Free dynamically allocated memory
    delete[] numbers2; // Free dynamically allocated memory

    return 0;
}
