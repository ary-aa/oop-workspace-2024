#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);

int main() {
    // Test decimal input between 1 and 9 digits (3 digits)
    std::cout << "Test case 1: Decimal number is \"789\"" << std::endl;
    print_binary_str("789");

    // Test decimal input with 1 digit
    std::cout << "Test case 2: Decimal number is \"0\"" << std::endl;
    print_binary_str("0");

    // Test decimal input with 9 digits
    std::cout << "Test case 3: Decimal number is \"123456789\"" << std::endl;
    print_binary_str("123456789");

    return 0;
}
