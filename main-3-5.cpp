#include <iostream>

extern double sum_even(double[], int);

int main() {
    double array1[5] = {1,2,3,4,5}; //test out 5 positive integers
    std::cout << "The sum of elements in even positions is: " << sum_even(array1, 5) << std::endl;

    double array2[4] = {-4,-5,-6,-7}; //test out 4 negative integers
    std::cout << "The sum of elements in even positions is: " << sum_even(array2, 4) << std::endl;

    double array3[3] = {45,-50,160}; //test out larger integers with mixed signs
    std::cout << "The sum of elements in even positions is: " << sum_even(array3, 3) << std::endl;

    double array4[3] = {45,-50,160}; //test out that the code returns 0 if the size perameter is less than 1
    std::cout << "The sum of elements in even positions is: " << sum_even(array4, 0) << std::endl;

    return 0;
}
