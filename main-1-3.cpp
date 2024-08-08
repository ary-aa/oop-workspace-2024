#include <iostream>

extern void count_digits(int[][4]);

int main() {
    //test array of positive integers
    int array1[][4] = {{1,2,3,4},
                      {1,0,3,5},
                      {1,9,7,8},
                      {6,6,6,6}};
    count_digits(array1);

    //test array of negative integers
    int array2[][4] = {{-1,-2,-3,-4},
                      {-5,-6,-7,-8},
                      {-9,-10,10,-4},
                      {-1,-2,-3,-4}};
    count_digits(array2);

    //test array of tens (no digits from 1-9)
    int array3[][4] = {{10,10,10,10},
                       {10,10,10,10},
                       {10,10,10,10},
                       {10,10,10,10}};
    count_digits(array3);

    return 0;
}
