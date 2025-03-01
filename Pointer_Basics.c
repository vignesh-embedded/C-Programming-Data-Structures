#include <stdio.h>
int main(){
int a[] ={10,5,25,15,35};
int *p = &a[0];
printf("%d \n",*(p++));
printf("%d \n",*(++p));
printf("%d \n",*p);
printf("%p \n",p);
return 0;
}