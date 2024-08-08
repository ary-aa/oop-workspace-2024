#include <iostream>

extern void print_summed(int[][3], int[][3]);

int main() {
    //test array of positive and negative integers given in example
    int matrix1[3][3] = {{0,1,2},{3,4,5},{6,7,8}} ;
    int matrix2[3][3] = {{0,0,0},{2,2,2},{-5,-4,8}} ;
    print_summed(matrix1,matrix2);

    std::cout << '\n'; //for formatting between tests

    //test arrays of large integers
    int matrix3[3][3] = {{0,10,20},{30,40,50},{60,70,80}} ;
    int matrix4[3][3] = {{0,0,0},{200,35,24},{-50,-44,88}} ;
    print_summed(matrix3,matrix4);

    std::cout << '\n'; //for formatting between tests

    //test arrays of zeroes
    int matrix5[3][3] = {{0,0,0},{0,0,0},{0,0,0}} ;
    int matrix6[3][3] = {{0,0,0},{0,0,0},{0,0,0}} ;
    print_summed(matrix5,matrix6);

    return 0;
}
