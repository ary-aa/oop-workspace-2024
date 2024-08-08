#include <iostream>
//returns the scaled version of a given 3x3 matrix, using given scale
void print_scaled(int array[3][3],int scale) { //signature as specified

    //loop through matrix using nested loop of rows and columns
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            array[row][col] = scale*(array[row][col]); //replace each element with its scaled value
        } 
    }

    //loop through matrix using nested loop of rows and columns
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            std::cout << array[row][col] << " ";
        }
        std::cout << std::endl;
    } 
    return ;
}
