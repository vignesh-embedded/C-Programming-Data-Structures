#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello world";

    int result = strncmp(str1, str2, 5); // Compare first 5 characters

    if (result == 0) {
        printf("First 5 characters are equal.\n");
    } else if (result < 0) {
        printf("First 5 characters of str1 are less than str2.\n");
    } else {
        printf("First 5 characters of str1 are greater than str2.\n");
    }

    return 0;
}