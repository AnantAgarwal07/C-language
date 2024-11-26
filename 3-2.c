#include<stdio.h>
int main()
{
    float m1,m2,m3,total;
    printf("Enter the marks in Maths: ");
    scanf("%f",&m1);
    printf("Enter the marks in Science: ");
    scanf("%f",&m2);
    printf("Enter the marks in English: ");
    scanf("%f",&m3);
    total=m1+m2+m3;
    if (total>=120&&m1>=33&&m2>=33&&m3>=33)
    {
        printf("You have passed");
    }
    else 
    {
        printf("You have failed");
    }
        return 0;
}