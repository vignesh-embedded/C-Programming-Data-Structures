#include <stdio.h>

int gcd(int n1, int n2)
{
    int gcd = 1;
    
    int min = (n1 < n2) ? n1 : n2;
    
    for(int i = 1; i <= min;i++)
    {
        if((n1 % i == 0) && (n2 % i ==0))
        {
        gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int n1 = 20;
    int n2 = 15;
    
    int result = gcd(n1,n2);
    printf("GCD of %d and %d is %d",n1,n2,result);
    
    return 0;
}