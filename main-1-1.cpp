#include <iostream>

extern int array_sum(int[], int);

int main() {
    int array1[5] = {2,3,4,5,6}; //test 5 positive integers
    std::cout << "The sum is: " << array_sum(array1, 5) << std::endl;

    int array2[3] = {-4,-5,-6}; //test 3 negative integers
    std::cout << "The sum is: " << array_sum(array2, 3) << std::endl;

    int array3[4] = {45,-50,160,-70}; //test out larger integers with mixed signs
    std::cout << "The sum is: " << array_sum(array3, 4) << std::endl;

    int array4[2] = {45,-50}; //test return 0 size perameter < 1
    std::cout << "The sum is: " << array_sum(array4, 0) << std::endl;

    return 0;
}
