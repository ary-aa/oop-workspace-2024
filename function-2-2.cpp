#include <iostream>
// returns the maximum (largest)) number in an array
int max_element(int array[],int n) {
    int max;
    if (n < 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (array[i]>array[i-1]) {
            max = array[i];
        }
    }
    return max;
}
