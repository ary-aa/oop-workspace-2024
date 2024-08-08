#include <iostream>
// Return the number of elements in array equal to given peramater
int num_count(int array[], int n, int number) {
    int total = 0; //initialise count
    for (int i = 0; i < n; i++) { //begin interating through array 
        if (array[i] == number) {
            total += 1; //add to the count if the element = parameter
        }
    }

    return total; //return total count
}
