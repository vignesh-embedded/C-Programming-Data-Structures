#include <stdio.h>

int main()
{
    int array[5] = {4,2,6,0,8};
    int i;
    printf("Array Elements: Before \n");
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    printf("Array Elements: Reverse \n");
    for(i=4;i>=0;i--){
        printf("%d ",array[i]);
    }
    return 0;
}