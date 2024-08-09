// function-1-1.cpp
double arrayMin(double* array, int size) {
    if (size <= 0) {
        
        return 1.0/0.0; 
    }
    
    double min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
