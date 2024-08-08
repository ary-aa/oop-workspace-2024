#include <iostream>

extern void print_scaled(int[][3], int);

int main() {
    //test array of positive integers given in example
    int scale1 = 3 ;
    int array1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    print_scaled(array1,scale1) ;

    std::cout << '\n'; //for formatting between tests

    //test array of negative integers in array and scale
    int scale2 = -3 ;
    int array2[3][3] = {{0,1,2},{-3,-4,-5},{6,7,8}} ;
    print_scaled(array2,scale2) ;

    std::cout << '\n'; //for formatting between tests

    //test scale of zero, zero array elements have already been tested
    int scale3 = 0 ;
    int array3[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    print_scaled(array3,scale3) ;

    return 0;
}
