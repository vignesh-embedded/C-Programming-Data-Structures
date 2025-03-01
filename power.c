#include <stdio.h>

// Function to calculate base^exponent
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;

    // Ask the user for base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power and display the result
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
