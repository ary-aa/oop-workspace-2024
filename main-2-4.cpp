#include <iostream>
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    // Test case 1: Array {3, 1, 4, 1, 5}
    int arr1[] = {3, 1, 4, 1, 5};
    int result1 = sum_min_max(arr1, 5);
    std::cout << "Test case 1: Array {3, 1, 4, 1, 5}, Sum of min and max: " << result1 << std::endl;

    // Test case 2: Array {10, -5, 100, 7}
    int arr2[] = {10, -5, 100, 7};
    int result2 = sum_min_max(arr2, 4);
    std::cout << "Test case 2: Array {10, -5, 100, 7}, Sum of min and max: " << result2 << std::endl;

    // Test case 3: Empty array
    int arr3[] = {};
    int result3 = sum_min_max(arr3, 0);
    std::cout << "Test case 3: Empty array, Result: " << result3 << std::endl;

    // Test case 4: Negative length
    int arr4[] = {1, 2, 3};
    int result4 = sum_min_max(arr4, -3);
    std::cout << "Test case 4: Negative length, Result: " << result4 << std::endl;

    return 0;
}
