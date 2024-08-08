#include <iostream>

extern void two_five_nine(int[], int);

int main() {
    int array1[5] = {2,5,9,9,1}; //test out 5 positive integers
    two_five_nine(array1, 5);

    int array2[4] = {-4,-5,-2,-9}; //test out 4 negative integers including -2,5, and 9
    two_five_nine(array2, 4);

    int array3[3] = {45, 160, -50}; //test out larger integers with mixed signs
    two_five_nine(array3, 3);

    int array4[3] = {45,-50,160}; //test out output if the size perameter is less than 1
    two_five_nine(array4, 0);

    return 0;
}
