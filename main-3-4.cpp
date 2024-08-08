#include <iostream>

extern void print_pass_fail(char);

int main() {
    print_pass_fail('A'); //test a valid passing grade input

    print_pass_fail('a'); //test an invalid input (lowercase grade)

    print_pass_fail('67'); //test an invalid input (number grade)

    print_pass_fail('D'); //test a valid failing grade input

    return 0;
}
