/*Absolute Value: Take a number as input and use the ternary operator to find 
its absolute value (positive version of the number).
*/

#include <stdio.h>

int absoluteValue(int number){
    return (number < 0) ? -number : number;

}
int main() {

    int number;
    int result;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    result = absoluteValue(number);
    
    printf("The absolute value of %d is %d\n", number, result);

    return 0;
}
