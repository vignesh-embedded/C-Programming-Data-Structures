#include <stdio.h>

int countDigits(int N) {
    // Handle the case when N is 0 separately
    if (N == 0) {
        return 1;
    }
    
    // Initialize counter
    int counter = 0;
    
    // Handle negative numbers by converting to positive
    if (N < 0) {
        N = -N;
    }
    
    // While N is greater than 0
    while (N > 0) {
        // Increment counter
        counter++;
        // Remove last digit
        N = N / 10;  // Integer division
    }
    
    return counter;
}

int main() {
    // Test cases
    int num1 = 12345;
    int num2 = 0;
    int num3 = -9876;
    
    printf("Number of digits in %d: %d\n", num1, countDigits(num1));
    printf("Number of digits in %d: %d\n", num2, countDigits(num2));
    printf("Number of digits in %d: %d\n", num3, countDigits(num3));
    
    return 0;
}