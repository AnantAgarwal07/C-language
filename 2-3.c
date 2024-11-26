#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if (n%97==0)
    {
        printf("The number %d is divisible by 97",n);
    }
    else
    {printf("The number is %d not divisible by 97",n);}
}