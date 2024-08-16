#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    // Create a new PersonList struct
    PersonList newList;
    newList.numPeople = pl.numPeople;
    newList.people = pl.people; // Shallow copy - pointing to the same array

    return newList;
}
