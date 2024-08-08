#include <iostream>

extern double weighted_average(int[], int);

int main() {
    int array1[5] = {2,3,2,5,2}; //test out 5 positive integers
    std::cout << "The weighted average is: " << weighted_average(array1, 5) << std::endl;

    int array2[4] = {-5,-6,-5,-6}; //test out 4 negative integers
    std::cout << "The weighted average is: " << weighted_average(array2, 4) << std::endl;

    int array3[3] = {54,-69,180}; //test out larger integers with mixed signs
    std::cout << "The weighted average is: " << weighted_average(array3, 3) << std::endl;

    return 0;
}
