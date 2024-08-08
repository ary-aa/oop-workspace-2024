#include <iostream>
//returns 1 if a givien 10x10 matrix is an identity matrix, 0 if it isn't
int is_identity(int array[10][10]) { //signature as specified

    //loop through matrix using nested loop of rows and columns
    for (int row = 0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            if (row == col && array[row][col] != 1) //this condition says if a diagonal element is not 1
                return 0; 
            else if (row != col && array[row][col] != 0) //this condition says if the rest of the elements are not 0
                return 0;
        } 
    }
    //the matrix is an identity matrix if above conditions are not met, hence the function will return 1
    return 1;
}
