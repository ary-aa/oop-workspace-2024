#include "Person.h"

PersonList createPersonList(int n) {
    // Create a PersonList struct
    PersonList personList;
    personList.numPeople = n;
    personList.people = new Person[n];
    
    // Initialize each Person struct with default values
    for (int i = 0; i < n; ++i) {
        personList.people[i].name = "Jane Doe";
        personList.people[i].age = 1;
    }
    
    return personList;
}
