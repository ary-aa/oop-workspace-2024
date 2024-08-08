#include <iostream>
#include <algorithm>
//returns the median value of a given array

int median_array(int array[], int n) {

    int fail;
    if (n < 1 || n % 2 == 0) {
        return 0;
    }
    else {
        // sort in ascending order
        std::sort(array, array + n);
    }
    int m = n/2;
    return array[m];
}
