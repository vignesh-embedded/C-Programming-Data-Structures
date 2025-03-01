#include <stdio.h>

int main() {
    char unit;
    float num, temp;

    printf("Select 'C' for Celsius to Fahrenheit or 'F' for Fahrenheit to Celsius: ");
    scanf("%c", &unit);  
    printf("Enter the temp value:");
    scanf("%f",&num);

    if (unit == 'C'){
        temp = (num * 9/5) + 32;
        printf("Celcius to Fareheit is : %.2f\n",temp);
        }

    else if (unit == 'F'){
        temp = (num - 32) * 5/9;
        printf("Farenheit to Celcius is : %.2f\n",temp);
        
    }
    else{
        printf("Enter a valid input nigga ");
    }
    return 0;
}