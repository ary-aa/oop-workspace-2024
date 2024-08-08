#include <iostream>
// returns true if a given array is a fan array and false if it is not
bool is_fanarray(int array[], int n) {
	
    if (n < 1) {
        return false;
    }

    for (int i = 0; i <= n / 2; i++) {
        if (array[i] != array[n - i - 1] || array[i] != i + 1) {
            return false;
        }
    }

    return true;
}
