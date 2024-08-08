#include <iostream>

extern int num_count(int[], int, int);

int main() {
    int array1[6] = {2,3,4,5,3,6}; //test out 6 positive integers
    std::cout << "The number of elements equal to the perameter is: " << num_count(array1, 6, 3) << std::endl;

    int array2[7] = {-5,-6,-7,-5,-5,-5,-8}; //test out 7 negative integers
    std::cout << "The number of elements equal to the perameter is: " << num_count(array2, 7, -5) << std::endl;

    int array3[3] = {54,-69,123}; //test out larger integers with mixed signs
    std::cout << "The number of elements equal to the perameter is: " << num_count(array3, 3, 123) << std::endl;

    int array4[3] = {54,-69,123}; //test whether function returns 0 when perameter is less than 1
    std::cout << "The number of elements equal to the perameter is: " << num_count(array4, 0, 123) << std::endl;

    return 0;
}
