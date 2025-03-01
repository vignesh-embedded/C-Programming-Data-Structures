/*Even or Odd: Write a program that checks if a number is even or odd using the ternary operator*/

#include<stdio.h>

int even_r_odd(int num){
    return (num % 2 == 0) ? 1 : 0;

}

int main(){
    int num;
    int result;
    printf(" Entered Number: ");
    scanf("%d",&num);
    result = even_r_odd(num);
    if (result == 1){
        printf("The Number is Even \n");
    }
    else{
        printf("The Number is ODD \n");
    }
    return 0;
}