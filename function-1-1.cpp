#include <iostream>
// Sums together all positive numbers and returns sum
int array_sum(int array[], int n) {
    int total = 0; //assign variable to the sum
    for (int i = 0; i < n; i++) {
            total += array[i]; //add  with each incrementation of array elements
        }
    return total; //return value of the sum
}
