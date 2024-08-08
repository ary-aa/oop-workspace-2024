#include <iostream>
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    // Test case 1
    int binary1[] = {1, 0, 1};
    int result1 = binary_to_int(binary1, 3);
    std::cout << "Test case 1: Binary number {1, 0, 1} => Decimal: " << result1 << std::endl;

    // Test case 2
    int binary2[] = {1, 1, 0, 0};
    int result2 = binary_to_int(binary2, 4);
    std::cout << "Test case 2: Binary number {1, 1, 0, 0} => Decimal: " << result2 << std::endl;

    // Test case 3
    int binary3[] = {1, 1, 1, 1, 1};
    int result3 = binary_to_int(binary3, 5);
    std::cout << "Test case 3: Binary number {1, 1, 1, 1, 1} => Decimal: " << result3 << std::endl;

    // Test case 4
    int binary4[] = {0};
    int result4 = binary_to_int(binary4, 1);
    std::cout << "Test case 4: Binary number {0} => Decimal: " << result4 << std::endl;

    return 0;
}
