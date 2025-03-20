#include <stdio.h>

int rev_fun (int num1)
{
    int revno = 0;
    
    int is_neg = 0;
    
    if(num1<0){
        is_neg = 1;
        num1 = -num1;
    }
    
    while(num1>0)
    {
    int lastdigit = num1 % 10;
    revno = revno * 10 + lastdigit;
    num1 = num1 /10;
    }
    
    if(is_neg){
        revno = -revno;
    }
    return revno;
    
}

int main()
{
    int num1 = -789;
    int result;
    
    result = rev_fun(num1);
    printf("%d",result);
}