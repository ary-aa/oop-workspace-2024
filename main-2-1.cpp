#include <iostream>

extern int min_element(int[], int);

int main() {
    int array1[5] = {1,2,3,4,5}; //test out 5 positive integers
    std::cout << "The minimum element is: " << min_element(array1, 5) << std::endl;

    int array2[4] = {-4,-5,-6,-7}; //test out 4 negative integers
    std::cout << "The minimum element is: " << min_element(array2, 4) << std::endl;

    int array3[3] = {45,-50,160}; //test out larger integers with mixed signs
    std::cout << "The minimum element is: " << min_element(array3, 3) << std::endl;

    int array4[3] = {45,-50,160}; //test out that the code returns 0 if the size perameter is less than 1
    std::cout << "The minimum element is: " << min_element(array4, 0) << std::endl;

    return 0;
}
