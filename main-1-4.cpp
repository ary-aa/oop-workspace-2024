#include <iostream>

extern int sum_two_arrays(int[], int[], int);

int main() {
    int array1[6] = {2,3,4,5,3,6}; 
    int array2[6] = {1,7,8,9,10,11}; //test out 6 positive integers
    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array1, array2, 6) << std::endl;

    int array3[4] = {-2,-3,-4,-5}; 
    int array4[4] = {-1,-7,-8,-9}; //test 3 negative integers
    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array3, array4, 4) << std::endl;

    int array5[3] = {100,123,98}; 
    int array6[3] = {112,102,40}; //test out 3 large integers 
    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array5, array6, 3) << std::endl;

    int array7[3] = {100,123,98}; 
    int array8[3] = {112,102,40}; //test out if 0 is returned when perameter is less than 1 
    std::cout << "The sum of the two arrays is: " << sum_two_arrays(array7, array8, 0) << std::endl;

    return 0;
}
