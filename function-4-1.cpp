#include <iostream>

int secondSmallestSum(int *numbers, int length) {
    if (length <= 1)
        return -1; // Invalid input, return -1 indicating no valid second smallest sum

    int smallestSum = numbers[0] + numbers[1];
    int secondSmallestSum = smallestSum;

    for (int i = 0; i < length; ++i) {
        int currentSum = 0;
        for (int j = i; j < length; ++j) {
            currentSum += numbers[j];
            if (currentSum < smallestSum) {
                secondSmallestSum = smallestSum;
                smallestSum = currentSum;
            } else if (currentSum < secondSmallestSum && currentSum != smallestSum) {
                secondSmallestSum = currentSum;
            }
        }
    }
    return secondSmallestSum;
}
