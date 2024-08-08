#include <iostream>

extern int sum_diagonal(int[][4]);

int main() {
    //test array of positive integers
    int array1[][4] = {{1,2,3,4},
                      {1,2,3,4},
                      {1,2,3,4},
                      {1,2,3,4}};
    std::cout << "sum is " << sum_diagonal(array1) << std::endl;

    //test array of negative integers
    int array2[][4] = {{-1,-2,-3,-4},
                      {-1,-2,-3,-4},
                      {-1,-2,-3,-4},
                      {-1,-2,-3,-4}};
    std::cout << "sum is " << sum_diagonal(array2) << std::endl;

    //test array of zeroes
    int array3[][4] = {{0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0},
                       {0,0,0,0}};
    std::cout << "sum is " << sum_diagonal(array3) << std::endl;

    return 0;
}
