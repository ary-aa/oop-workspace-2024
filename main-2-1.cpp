#include <iostream>
#include "function-2-1.cpp" // Include the function implementation file

int main() {
    int *numbers = readNumbers(); // Read numbers from input
    hexDigits(numbers, 10);      // Print corresponding hex digits
    delete[] numbers;             // Free dynamically allocated memory
    return 0;
}
