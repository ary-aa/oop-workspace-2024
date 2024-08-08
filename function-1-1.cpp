#include <iostream>
//returns the sum of all values in the main diagonal of a given 4x4 two dimensional array
int sum_diagonal(int array[4][4]) { //signature as specified
    int sum = 0; //initialise sum of diagonal
    for(int i = 0; i < 4; i++) //set up for loop to go through each row/column of the matrix
    {
        sum += array[i][i]; //diagonal positions occur when row = column, so add all elements with this condition to the sum
    }
    return sum; //have the function return the sum after looped through matrix
}
