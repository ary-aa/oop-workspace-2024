#include "Person.h"

Person* createPersonArray(int n) {
    // Create an array of Person structs
    Person* persons = new Person[n];
    
    // Initialize each Person struct with default values
    for (int i = 0; i < n; ++i) {
        persons[i].name = "John Doe";
        persons[i].age = 0;
    }
    
    return persons;
}
