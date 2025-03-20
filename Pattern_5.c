#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter No: \n");
    scanf("%d",&n);
    
    
    for (i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)  
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
