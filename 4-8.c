#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",fact);
    }
    else
    {
        for(i=n;i>0;i--)
        {
            fact = fact*i;
        }
        printf("Factorial = %d",fact);
    }
    return 0;
}