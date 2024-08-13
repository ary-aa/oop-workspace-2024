#include <iostream>
#include "function-3-2.cpp" // Include the function implementation file

int main() {
    std::cout << "Enter the numbers:" << std::endl;
    int *numbers = readNumbers(); // Read numbers from input

    int *reversedNumbers = reverseArray(numbers, 10); // Reverse the array

    bool result = equalsArray(numbers, reversedNumbers, 10); // Compare original and reversed arrays

    std::cout << std::boolalpha << "Arrays are equal after reversing: " << result << std::endl;

    delete[] numbers;        // Free dynamically allocated memory
    delete[] reversedNumbers;// Free dynamically allocated memory

    return 0;
}
