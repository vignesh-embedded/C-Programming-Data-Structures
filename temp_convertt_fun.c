#include <stdio.h>

float Celcius_to_Fareheit(float num){
    float temp = (num * 9/5) + 32;
    printf("Celcius to Fareheit is : %.2f\n",temp);
    return temp;

}

float  Farenheit_to_Celcius(float num){
    float temp = (num - 32) * 5/9;
    printf("Farenheit to Celcius is : %.2f\n",temp);
    return temp;
}

int main() {
    char unit;
    float num;
    float temp;

    printf("Select 'C' for Celsius to Fahrenheit or 'F' for Fahrenheit to Celsius: ");
    scanf("%c", &unit);  

    printf("Enter the temp value:");
    scanf("%f",&num);

    switch (unit)
    {
    case 'C':
    Celcius_to_Fareheit(num);
    break;

    case 'F':
    Farenheit_to_Celcius(num);
    break;

    default:
        break;
    }
    return 0;
}