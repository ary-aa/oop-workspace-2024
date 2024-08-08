#include <iostream>
// Sums together all elements in even positions
double sum_even(double array[], int n) {
    double total = 0; //assign variable to the sum of the numbers
    if (n < 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            total += array[i]; //add to the sum with each incrementation in an even position
        }
    }
    return total; //return the value of the sum variable
}
