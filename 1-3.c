#include<stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("Enter the temperature in Celcius");
    scanf("%f",&celcius);
    fahrenheit=celcius*1.8 + 32;
    printf("%f",fahrenheit);
}