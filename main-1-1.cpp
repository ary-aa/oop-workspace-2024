#include <iostream>
#include "function-1-1.cpp" // Include the function implementation file

int main() {
    int *numbers = readNumbers(); // Read numbers from input
    printNumbers(numbers, 10);   // Print the numbers
    delete[] numbers;             // Free dynamically allocated memory
    return 0;
}
