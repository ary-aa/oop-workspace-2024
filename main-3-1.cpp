#include <iostream>

extern bool is_fanarray(int[], int);

int main() {
    int array1[5] = {1,2,3,4,5}; //test out 5 ascending positive integers, not fanarray
    is_fanarray(array1, 5);

    int array2[4] = {-4,-5,-6,-9}; //test out 4 negative descending integers, not fanarray
    is_fanarray(array2, 4);

    int array3[3] = {-50, 160, 40}; //test out larger, mixed signs not fanarray
    is_fanarray(array3, 3);

    int array4[3] = {45,-50,45}; //test out output if the size perameter is less than 1
    is_fanarray(array4, 0);

    int array5[5] = {5,4,3,4,5}; //test out 5 fanarray positive integers
    is_fanarray(array5, 5);

    int array6[6] = {-5,4,3,3,4,-5}; //test out 6 fanarray with negative integers
    is_fanarray(array6, 6);

    return 0;
}
