#include <stdio.h>

int square(int x){
    int result = x*x;
    return result;

}

int main(){
    int x;
    int result;

    printf("Enter Number to square:");
    scanf("%d",&x);

    result = square(x);
    printf("Square of %d is: %d\n",x,result);

    return 0;
    
}