#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter No: \n");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)  // n is changed to i
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
