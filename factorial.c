#include <stdio.h>

int main ()
{
    int num, count, fact = 1;
    printf ("Enter No to Calculate Factorial:");
    scanf("%d",&num);
    for (count = 1;count <= num; count ++)
    fact = fact * count;
    printf("Factorial of %d is :%d ",num,fact);
    return 0;
}