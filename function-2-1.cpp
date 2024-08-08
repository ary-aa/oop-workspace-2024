#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    // Convert string to integer
    int decimal = std::stoi(decimal_number);

    // If the number is 0, print "0" and return
    if (decimal == 0) {
        std::cout << "0" << std::endl;
        return;
    }

    // Initialize an empty string for the binary conversion
    std::string binary_string = "";

    // Convert decimal to binary
    while (decimal > 0) {
        // Add remainder of decimal divided by 2 to the beginning of binary_string
        binary_string = std::to_string(decimal % 2) + binary_string;
        // Shift decimal to the right by 1 bit (equivalent to integer division by 2)
        decimal /= 2;
    }

    // Print the binary string
    std::cout << binary_string << std::endl;
}
