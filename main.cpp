#include <iostream>
#include "workshop.h"

int main() {
    // Part 2: Testing changeValue function
    double value = 10.5;
    std::cout << "Original value: " << value << std::endl;
    changeValue(&value); // Pass the address of the variable
    std::cout << "Changed value: " << value << std::endl;

    // Part 3: Testing printArray function
    double numbers[] = {3.5, 7.8, 2.1, 9.4, 5.6};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
    printArray(numbers, size);

    // Part 4: Testing arrayMax function
    double maxValue = arrayMax(numbers, size);
    std::cout << "Maximum value in the array: " << maxValue << std::endl;

    // Part 7: Testing concatenateStrings function
    const char* strings[] = {"Hello", " ", "world", "!"};
    int stringsSize = sizeof(strings) / sizeof(strings[0]); // Calculate the size of the array
    std::string concatenated = concatenateStrings(strings, stringsSize);
    std::cout << "Concatenated string: " << concatenated << std::endl;

    return 0;
}
