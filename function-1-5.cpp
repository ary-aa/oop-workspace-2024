#include <iostream>
// returns total number of even numbers between 1 and a given perameter
int count_evens(int number) {
    int total = 0;
    for (int i = 1; i < number; i++) {
        if (i % 2 == 1) {
            total += 1;
        }
    }
    return total;
}
