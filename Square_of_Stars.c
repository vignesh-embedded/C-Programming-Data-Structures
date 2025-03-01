/*Write a program to print a square pattern of stars with n rows and columns,
 where n is entered by the user.*/

 #include <stdio.h>

 int main(){

    int number;
    int i,j;

    printf("Enter Number:");
    scanf("%d",&number);

    for (i=1;i <=number;i++ ){
        for (j=1; j<=number;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
 }