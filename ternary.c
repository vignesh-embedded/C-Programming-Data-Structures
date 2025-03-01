#include <stdio.h>

int findMax (int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {

    int num1 =7;
    int num2 =3;

    int result;
    result  = findMax(num1,num2);
    printf("%d\n ", result );
    return 0;
}

