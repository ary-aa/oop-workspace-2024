#include <iostream>
//returns a 3x3 matrix with summed elements of two given 3x3 matrices
void print_summed(int array1[3][3],int array2[3][3]) { //signature as specified
    //initialize a new array for the summed values of the two matrices
    int array3[3][3];
    //loop through matrix using nested loop of rows and columns
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            array3[row][col] = (array1[row][col])+(array2[row][col]); //replace each element in the new array with
        }                                                             //the sum of the corresponding elements in
    }                                                                 //the other two arrays

    //loop through matrix using nested loop of rows and columns
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            std::cout << array3[row][col] << " ";
        }
        std::cout << std::endl;
    } 
    return ;
}
