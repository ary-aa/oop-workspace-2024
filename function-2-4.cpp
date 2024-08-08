#include <iostream>

int array_min(int integers[], int length) {
    if (length <= 0)
        return -1;
    
    int min_element = integers[0];
    for (int i = 1; i < length; ++i) {
        if (integers[i] < min_element)
            min_element = integers[i];
    }
    
    return min_element;
}

int array_max(int integers[], int length) {
    if (length <= 0)
        return -1;
    
    int max_element = integers[0];
    for (int i = 1; i < length; ++i) {
        if (integers[i] > max_element)
            max_element = integers[i];
    }
    
    return max_element;
}

int sum_min_max(int integers[], int length) {
    int min_val = array_min(integers, length);
    int max_val = array_max(integers, length);
    
    // If either min_val or max_val is -1, then the length is invalid
    if (min_val == -1 || max_val == -1)
        return -1;
    
    return min_val + max_val;
}
