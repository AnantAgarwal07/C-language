#include<stdio.h>
float force(float mass);
int main()
{
    float mass,f;
    printf("Enter the mass of the body: ");
    scanf("%f",&mass);
    f=force(mass);
    printf("Force exerted is %.2f N",f);
    return 0;
}
float force(float mass)
{
    float f=9.8*mass;
    return f;
}