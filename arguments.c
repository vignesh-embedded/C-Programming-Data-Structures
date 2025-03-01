#include<stdio.h>
void birthday(char x[], int y ){
    printf("\n Happy birthday dear %s!",x);
    printf("\n You are %d years old \n",y);
}
int main(){
    char name[]="vicky";
    int age = 21;

    birthday(name,age);
    return 0;
}