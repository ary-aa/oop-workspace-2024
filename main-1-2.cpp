#include <iostream>
#include "Person.h"

// Function declaration
PersonList createPersonList(int n);

int main() {
    int n = 3; // Number of Person structs in the array

    // Create a PersonList struct
    PersonList personList = createPersonList(n);

    // Print the details of each person in the PersonList
    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name - " << personList.people[i].name << ", Age - " << personList.people[i].age << std::endl;
    }

    // Deallocate the memory allocated for the array in PersonList
    delete[] personList.people;

    return 0;
}
