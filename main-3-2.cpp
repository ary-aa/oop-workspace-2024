#include <iostream>

extern int median_array(int[], int);

int main() {
    int array1[5] = {4,5,2,3,6}; //test out 5 positive integers
    std::cout << "The median is: " << median_array(array1, 5) << std::endl;

    int array2[4] = {-6,-5,-8,-7}; //test out 4 negative integers
    std::cout << "The median is: " << median_array(array2, 4) << std::endl;

    int array3[3] = {54,-69,180}; //test out larger integers with mixed signs
    std::cout << "The median is: " << median_array(array3, 3) << std::endl;

    int array4[3] = {54,-69,180}; //test output when size perameter is 0
    std::cout << "The median is: " << median_array(array4, 0) << std::endl;

    return 0;

}
