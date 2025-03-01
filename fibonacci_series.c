#include <stdio.h>

int main(){

    int terms;
    int a=0, b=1;
    int next_term;

    printf("Enter the No of terms:");
    scanf("%d",&terms);

    for(int i=1;i<=terms;i++){
        printf("%d\t \n",a);
        next_term = a+b;
        a=b;
        b=next_term;
        
    }
    return 0;
}