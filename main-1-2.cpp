#include <iostream>

extern double array_mean(int[], int);

int main() {
    int array1[4] = {2,3,4,6}; //test 4 positive integers
    std::cout << "The mean is: " << array_mean(array1, 4) << std::endl;

    int array2[5] = {-5,-6,-7,-8,-2}; //test out 5 negative integers
    std::cout << "The mean is: " << array_mean(array2, 5) << std::endl;

    int array3[3] = {54,-69,180}; //test large integers with mixed signs
    std::cout << "The mean is: " << array_mean(array3, 3) << std::endl;

    return 0;
}
