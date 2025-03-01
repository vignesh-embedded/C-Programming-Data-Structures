#include <stdio.h>

int main() {
    int n;
    printf("Enter the grid size: ");
    scanf("%d", &n);

    int a = 0, b = 1, temp;

    for (int i = 1; i <= n; i++) { 
            printf("%d \t", a);
            temp = a + b;
            a = b;
            b = temp;
        }
        return 0;
    }

