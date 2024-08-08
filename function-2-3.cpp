#include <iostream>

bool is_palindrome(int integers[], int length) {
    if (length <= 0)
        return false;
    
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        if (integers[start] != integers[end])
            return false;
        
        start++;
        end--;
    }
    
    return true;
}

int sum_array_elements(int integers[], int length) {
    if (length <= 0)
        return -1;
    
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += integers[i];
    }
    
    return sum;
}

int sum_if_palindrome(int integers[], int length) {
    if (!is_palindrome(integers, length))
        return -2;
    
    return sum_array_elements(integers, length);
}
