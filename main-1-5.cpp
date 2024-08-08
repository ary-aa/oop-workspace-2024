#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int);

int main() {
    std::cout << "The number of even numbers between one and the given number is: " << count_evens(3) << std::endl;
    // ^^ check if it works for odd number
    std::cout << "The number of even numbers between one and the given number is: " << count_evens(4) << std::endl;
    // ^^ check if it is inclusive of an even number
    std::cout << "The number of even numbers between one and the given number is: " << count_evens(100) << std::endl;
    // ^^ check if it works for large numbers
    std::cout << "The number of even numbers between one and the given number is: " << count_evens(-4) << std::endl;
    // ^^ check if the function returns 0 when perameter is less than 1
    return 0;
}
