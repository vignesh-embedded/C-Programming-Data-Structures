#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8"); // Set locale to handle UTF-8
    char str1[] = "café";
    char str2[] = "cafe";

    int result = strcoll(str1, str2);
    printf("Result: %d\n", result); // Output: Locale-aware comparison
    return 0;
}