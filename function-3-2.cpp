#include <iostream>

int *reverseArray(int *numbers, int length) {
    int *reversed = new int[length];
    for (int i = 0; i < length; ++i) {
        reversed[i] = numbers[length - 1 - i];
    }
    return reversed;
}
