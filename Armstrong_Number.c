#include <stdio.h>
#include <math.h>

int count(int);
int armst(int);

int main()
{
    int n = 371;
    
    printf("%d is %s an armstrong number",n, armst(n) ? "":"not" );
    return 0;
    
}

int armst(int n)
{
    int og = n;
    int sum =0;
    int k = count(n);
    
    while(n>0)
    {
    int digit = n %10;
    sum = sum + pow(digit,k);
    n /= 10;
    }
    return (og==sum);
    
}


int count(int n)
{
    int val=0;
    while(n>0)
    {
        val++;
        n = n/10;
    }
    return val;
}
