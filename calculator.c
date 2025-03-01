#include <stdio.h>

void addition(int num1, int num2)
{
   int result = num1 + num2;   
    printf("Addition of %d and %d is : %d \n",num1,num2,result);
}

void subtract(int num1, int num2)
{
   int result = num1 - num2;   
    printf("Subtraction of %d and %d is : %d \n",num1,num2,result);
}

int main ()
{
    int num1;
    int num2;
    printf("Enter Number 1:");
    scanf("%d",&num1);
    printf("Enter Number 2:");
    scanf("%d",&num2);

    addition(num1,num2);
    subtract(num1,num2);
    return 0;
}