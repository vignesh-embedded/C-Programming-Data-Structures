/*Check Leap Year: Write a program to check if a year is a leap year using the ternary operator. 
A leap year is divisible by 4 but not divisible by 100, except if it’s divisible by 400.*/

#include <stdio.h>

const char* leap_year(int year ){
    return (year % 400 == 0) ? "Leap Year" :
           (year % 100 == 0) ? "Normal Year" :
           (year % 4 == 0) ? "Leap Year" : "Normal Year";
}

int main (){
    
    int year;
    const char* result;

    printf("Enter Year:");
    scanf("%d",&year);

    result = leap_year(year);

    printf("%d is a %s \n",year, result);
    return 0;
}
