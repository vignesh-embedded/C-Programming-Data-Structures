/*Maximum of Three Numbers: Extend the logic in the code you shared to 
find the maximum of three numbers using nested ternary operators.
 */
#include <stdio.h>

int findMax(int a, int b, int c) {
    if (a > b && a > c) return a;
    if (b > a && b > c) return b;
    return c;
}

int main() {

    int numbers [3];
    int i;
    int result;
    for(i=0;i<3;i++){
        printf("Enter number %d: ", i + 1);
        scanf("%d",&numbers[i]);
    }

    result = findMax(numbers[0],numbers[1],numbers[2]);
    printf("The Max of three Numbers is: %d \n",result);
    return 0;
}

