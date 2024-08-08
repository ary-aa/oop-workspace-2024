#include <iostream>
// Calculates the average of an array's elements
double array_mean(int array[], int n) {
    int total = 0; //assign variable to sum 
    double mean =0; //assign variable to average
    for (int i = 0; i < n; i++) {
            total += array[i]; //add to sum withincrementation of array elements
        }
    mean = (double) total / n; //complete average calculation
    return mean; //return the average
}
