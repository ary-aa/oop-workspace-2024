#include <iostream>
// Returns the sum of elements in two arrays of the same size
int sum_two_arrays(int array[], int secondarray[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
            total += array[i];
            total += secondarray[i];
    }

    return total;
}
