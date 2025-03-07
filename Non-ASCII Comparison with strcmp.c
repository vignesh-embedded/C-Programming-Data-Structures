#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "café";  // "é" is a non-ASCII character
    char str2[] = "cafe";  // "e" is an ASCII character

    int result = strcmp(str1, str2);

    printf("Result: %d\n", result); // Output: Depends on the byte values of "é" and "e"
    return 0;
}