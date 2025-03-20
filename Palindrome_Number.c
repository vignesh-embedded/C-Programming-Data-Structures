#include <stdio.h>
#include <stdbool.h>

bool pali(int num1)
{
    int revno = 0;
    
    int duplicate = num1;
    
    while(num1>0)
    {
        int lastdigit = num1 % 10;
        revno = revno * 10 + lastdigit;
        num1 = num1 / 10;
    }
    
    if(duplicate == revno){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int num1 = 49894;
    
    printf("%d is %s\n", num1, pali(num1) ? "Palindrome Number" : "Not Palindrome Number");
    

}