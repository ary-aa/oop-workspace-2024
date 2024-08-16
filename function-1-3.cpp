#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    // Create a new PersonList struct
    PersonList newList;
    newList.numPeople = pl.numPeople;
    newList.people = new Person[pl.numPeople];

    // Perform deep copy of each Person struct
    for (int i = 0; i < pl.numPeople; ++i) {
        newList.people[i].name = pl.people[i].name;
        newList.people[i].age = pl.people[i].age;
    }

    return newList;
}
