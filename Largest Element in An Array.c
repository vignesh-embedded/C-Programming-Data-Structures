//Largest element in an array
#include<stdio.h>
int main(){
    int a[5] = {20,30,50,10,5};
    int lar = a[0];
    for(int i=0;i<5;i++){
        if(lar<a[i]){
            lar = a[i];
        }
    }
    printf("%d",lar);
}