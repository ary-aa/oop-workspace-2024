#ifndef WORKSHOP_H
#define WORKSHOP_H

#include <iostream>

// Part 2: Function to change the value of a double using a pointer
void changeValue(double* ptr) {
    *ptr = 42.0; // Dereferencing the pointer and assigning a new value
}

// Part 3: Function to print the content of a double array
void printArray(double* arr, int size) {
    std::cout << "Array content:";
    for (int i = 0; i < size; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

// Part 4: Function to find the maximum value in a double array
double arrayMax(double* arr, int size) {
    double max = arr[0]; // Initialize max with the first element
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Part 7: Function to concatenate strings in a char array into a single string
std::string concatenateStrings(const char* arr[], int size) {
    std::string result;
    for (int i = 0; i < size; ++i) {
        // Iterate over each character in the current string until null terminator is encountered
        for (int j = 0; arr[i][j] != '\0'; ++j) {
            result += arr[i][j];
        }
    }
    return result;
}
