#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the pricipal, rate and time");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("SI= %f",si);
    return 0;
}