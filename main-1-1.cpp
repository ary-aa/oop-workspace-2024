#include <iostream>
#include "Person.h"

// Function declaration
Person* createPersonArray(int n);

int main() {
    int n = 5; // Number of Person structs in the array

    // Create an array of Person structs
    Person* personsArray = createPersonArray(n);

    // Print the details of each person in the array
    for (int i = 0; i < n; ++i) {
        std::cout << "Person " << i + 1 << ": Name - " << personsArray[i].name << ", Age - " << personsArray[i].age << std::endl;
    }

    // Deallocate the memory allocated for the array
    delete[] personsArray;

    return 0;
}
