#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;
    for (int i = 0; i < number_of_digits; ++i) {
        // Multiply the current result by 2 and add the current binary digit
        result = (result << 1) | binary_digits[i];
    }
    return result;
}
