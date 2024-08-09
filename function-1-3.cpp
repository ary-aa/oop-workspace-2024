// function-1-3.cpp
double* duplicateArray(double* array, int size) {
    if (size <= 0) {
        return nullptr; 
    }

    double* newArray = new double[size]; 
    for (int i = 0; i < size; ++i) {
        newArray[i] = array[i];
    }

    return newArray; 
}
