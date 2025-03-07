#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";

    int result1 = strcmp(str1, str2); // Compare "apple" and "banana"
    int result2 = strcmp(str1, str3); // Compare "apple" and "apple"

    printf("Result of strcmp(str1, str2): %d\n", result1); // Output: Negative value
    printf("Result of strcmp(str1, str3): %d\n", result2); // Output: 0

    return 0;
}