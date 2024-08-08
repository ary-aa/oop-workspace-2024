#include <iostream>
//returns true if values in a given array are descending, false if they are not
bool is_descending(int array[], int n) {

    if (n < 1) {
        return false;
    }

    for ( int i = 0;  i < n; i++ ){
        if(array[i] <= array[i+1]) {
            return false;
        } else {
            return true;
        }
    }
}
