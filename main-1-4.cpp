#include <iostream>
#include "Person.h"

// Function declaration
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    // Creating an original PersonList
    PersonList originalList;
    originalList.numPeople = 3;
    originalList.people = new Person[3];
    for (int i = 0; i < originalList.numPeople; ++i) {
        originalList.people[i].name = "John";
        originalList.people[i].age = 30;
    }

    // Shallow copying the original PersonList
    PersonList copiedList = shallowCopyPersonList(originalList);

    // Modifying one person in the copied list
    copiedList.people[0].name = "Jane";

    // Printing details of original and copied PersonLists
    std::cout << "Original PersonList:" << std::endl;
    for (int i = 0; i < originalList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name - " << originalList.people[i].name << ", Age - " << originalList.people[i].age << std::endl;
    }

    std::cout << "\nCopied PersonList:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": Name - " << copiedList.people[i].name << ", Age - " << copiedList.people[i].age << std::endl;
    }

    // Deallocating memory for original PersonList
    delete[] originalList.people;

    return 0;
}
