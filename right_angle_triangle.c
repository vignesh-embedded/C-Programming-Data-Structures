/*Print a right-angled triangle with numbers in increasing order.*/

#include <stdio.h>

 int main(){

    int number;

    printf("Enter Number:");
    scanf("%d",&number);

    for (int i=1;i <=number;i++ ){
        for (int j=1; j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
 }