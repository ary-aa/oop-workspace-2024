#include <iostream>
// returns whether a given grade is a pass or a fail
void print_pass_fail(char grade) {

            switch(grade) {
                case 'A':
                    std::cout << "Pass\n";
                    break;
                case 'B':
                    std::cout << "Pass\n";
                    break;
                case 'C':
                    std::cout << "Pass\n";
                    break;
                case 'D':
                    std::cout << "Fail\n";
                    break;
                case 'E':
                    std::cout << "Fail\n";
                    break;
                default :
                    std::cout << "Nothing\n";
                    break;                
            }
    return ;
}
