#include<stdio.h>
int add (int a[], int len){
    int sum = 0, i;
    for (i = 0; i<len;i++){
        sum += a[i];
    }
    return sum;
}

int main (){
    int a[4] = {1,2,3,4};
    int len = sizeof(a)/sizeof(a[0]);
    printf("%d",add(a,len));
    return 0;
}