#include <iostream>

extern bool is_ascending(int[], int);

int main() {
    int array1[5] = {1,2,3,4,5}; //test out 5 ascending positive integers
    std::cout << "1 \n";
    is_ascending(array1, 5);

    int array2[4] = {-4,-5,-6,-9}; //test out 4 negative descending integers
    std::cout << "2 \n";
    is_ascending(array2, 4);

    int array3[3] = {160, -50, 40}; //test out larger, mixed signs not ascending or descending
    std::cout << "3 \n";
    is_ascending(array3, 3);

    int array4[3] = {45,-50,160}; //test out output if the size perameter is less than 1
    std::cout << "4 \n";
    is_ascending(array4, 0);

    int array5[5] = {5,4,3,2,1}; //test out 5 descending positive integers
    std::cout << "5 \n";
    is_ascending(array5, 5);

    return 0;
}
