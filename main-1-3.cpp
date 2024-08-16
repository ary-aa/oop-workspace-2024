#include <iostream>
#include "Person.h"

// Function declaration
PersonList deepCopyPersonList(PersonList pl);

int main() {
    // Creating an original PersonList
    PersonList originalList;
    originalList.numPeople = 3;
    originalList.people = new Person[3];
    for (int i = 0; i < originalList.numPeople; ++i) {
        originalList.people[i].name = "John";
        originalList.people[i].age = 30;
    }

    // Deep copying the original PersonList
    PersonList copiedList = deepCopyPersonList(originalList);

    // Printing details of copied PersonList to verify
    std::cout << "Copied PersonList:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name - " << copiedList.people[i].name << ", Age - " << copiedList.people[i].age << std::endl;
    }

    // Deallocating memory for both original and copied PersonLists
    delete[] originalList.people;
    delete[] copiedList.people;

    return 0;
}
