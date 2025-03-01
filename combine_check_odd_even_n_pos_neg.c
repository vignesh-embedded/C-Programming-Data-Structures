/*Odd-Even and Positive-Negative Combined Check: Write a program to check if a given number is:
"Even Positive", "Even Negative", "Odd Positive", or "Odd Negative" based on its value.*/

#include <stdio.h>

const char* combined_check(int a ){
    return ( a % 2 == 0 && a >= 0) ? "Even-Positive":
    ( a % 2 == 0 && a < 0) ? "Even-Negative": 
    ( a % 2 != 0 && a >= 0) ? "Odd-Positive":
    "Odd-Negative";
}

int main (){
    
    int number;
    const char* result;

    printf("Enter Number:");
    scanf("%d",&number);

    result = combined_check(number);

    printf("%d is a %s \n", number,result);
    return 0;
}
