#include<stdio.h>
float tChange(float temp);
int main()
{
    float temp;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&temp);
    temp=tChange(temp);
    printf("The temperature in Fahrenheit is %f",temp);
    return 0;
}
float tChange(float temp)
{
    temp=32+(1.8*temp);
    return temp;
}