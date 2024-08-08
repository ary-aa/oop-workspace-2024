#include <iostream>
// returns the number of times integers 1-9 each occur in a given 4x4 matrix
void count_digits(int array[4][4]) {//signature as specified
    //initialize counts
    int num_zeroes = 0;
    int num_ones = 0;
    int num_twos = 0;
    int num_threes = 0;
    int num_fours = 0;
    int num_fives = 0;
    int num_sixes = 0;
    int num_sevens = 0;
    int num_eights = 0;
    int num_nines = 0;
    
    //nested for loops to loop through each element using rows and columns
    for ( int row = 0;  row < 4; row++ ) {
        for (int col = 0; col < 4; col++) {
            //switch statement for each element to add to the count of each case
            switch(array[row][col]){ 
                case 0:
                    num_zeroes++;
                    break;
                case 1:
                    num_ones++;
                    break;
                case 2:
                    num_twos++;
                    break;
                case 3:
                    num_threes++;
                    break;
                case 4:
                    num_fours++;
                    break;
                case 5:
                    num_fives++;
                    break;
                case 6:
                    num_sixes++;
                    break;
                case 7:
                    num_sevens++;
                    break;
                case 8:
                    num_eights++;
                    break;
                case 9:
                    num_nines++;
                    break;
            }
        }

    }
    //output line, formatted as specified
    std::cout << "0:" <<num_zeroes<< ";1:" <<num_ones<< ";2:" <<num_twos<< ";3"
                 ":" <<num_threes<< ";4:" <<num_fours<< ";5:" <<num_fives<< ";6"
                 ":" <<num_sixes<< ";7:" <<num_sevens<< ";8:" <<num_eights<< ";9"
                 ":" <<num_nines<< ";\n";
    return ;
}
