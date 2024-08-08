#include <iostream>
extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    // Test case 1: Palindrome array {1, 2, 3, 2, 1}
    int arr1[] = {1, 2, 3, 2, 1};
    int result1 = sum_if_palindrome(arr1, 5);
    std::cout << "Test case 1: Palindrome array {1, 2, 3, 2, 1}, Result: " << result1 << std::endl;

    // Test case 2: Non-palindrome array {1, 2, 3, 4, 5}
    int arr2[] = {1, 2, 3, 4, 5};
    int result2 = sum_if_palindrome(arr2, 5);
    std::cout << "Test case 2: Non-palindrome array {1, 2, 3, 4, 5}, Result: " << result2 << std::endl;

    // Test case 3: Empty array
    int arr3[] = {};
    int result3 = sum_if_palindrome(arr3, 0);
    std::cout << "Test case 3: Empty array, Result: " << result3 << std::endl;

    // Test case 4: Negative length
    int arr4[] = {1, 2, 3};
    int result4 = sum_if_palindrome(arr4, -3);
    std::cout << "Test case 4: Negative length, Result: " << result4 << std::endl;

    return 0;
}
