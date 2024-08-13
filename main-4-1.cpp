#include <iostream>
#include "function-4-1.cpp" // Include the function implementation file

int main() {
    std::cout << "Enter the numbers:" << std::endl;
    int *numbers = readNumbers(); // Read numbers from input

    int result = secondSmallestSum(numbers, 10); // Calculate second smallest sum

    std::cout << "Second smallest sum: " << result << std::endl;

    delete[] numbers; // Free dynamically allocated memory

    return 0;
}
