/*Minimum of 2 Numbers: Modify your code to find the minimum of two numbers using the ternary operator */

#include <stdio.h>

int findMax(int a, int b) {
    return (a <b ) ? a : b;
}

int main() {

    int numbers [2];
    int i;
    int result;
    for(i=0;i<2;i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d",&numbers[i]);
    }

    result = findMax(numbers[0],numbers[1]);
    printf("The Min of 2 Numbers is: %d \n",result);
    return 0;
}

