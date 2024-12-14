#include<stdio.h>
float avg(int a, int b, int c);
int main()
{
    int a, b, c;
    float av;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    av=avg(a,b,c);
    printf("Average = %f",av);
}
float avg(int a, int b, int c)
{
    float av=(a+b+c)/3;
    return av;
}