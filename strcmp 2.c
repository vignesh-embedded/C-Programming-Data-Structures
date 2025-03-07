#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";

    // Compare str1 and str2
    int result1 = strcmp(str1, str2); // str1 < str2
    printf("Comparison of str1 and str2: %d\n", result1); // Output: Negative value

    // Compare str1 and str3
    int result2 = strcmp(str1, str3); // str1 == str3
    printf("Comparison of str1 and str3: %d\n", result2); // Output: 0

    // Compare str2 and str1
    int result3 = strcmp(str2, str1); // str2 > str1
    printf("Comparison of str2 and str1: %d\n", result3); // Output: Positive value

    return 0;
}