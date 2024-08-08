#include <iostream>
// returns the minimum (smallest) number in an array
int min_element(int array[],int n) {
    int min;
    if (n < 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (array[i]<array[i-1]) {
            min = array[i];
        }
    }
    return min;
}
